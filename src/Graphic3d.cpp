
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_Aspects.hxx>
#include <Graphic3d_CView.hxx>
#include <Graphic3d_CullingTool.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <Graphic3d_Text.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_DataStructureManager.hxx>
#include <Graphic3d_CStructure.hxx>
#include <Graphic3d_ShaderProgram.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_Layer.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_CView.hxx>
#include <Image_PixMap.hxx>
#include <Graphic3d_TextureParams.hxx>
#include <Graphic3d_Camera.hxx>
#include <Graphic3d_CStructure.hxx>
#include <Aspect_DisplayConnection.hxx>
#include <Graphic3d_Layer.hxx>
#include <Graphic3d_TransformError.hxx>
#include <Graphic3d_StructureManager.hxx>

// module includes
#include <Graphic3d_AlphaMode.hxx>
#include <Graphic3d_ArrayFlags.hxx>
#include <Graphic3d_ArrayOfPoints.hxx>
#include <Graphic3d_ArrayOfPolygons.hxx>
#include <Graphic3d_ArrayOfPolylines.hxx>
#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <Graphic3d_ArrayOfQuadrangles.hxx>
#include <Graphic3d_ArrayOfQuadrangleStrips.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_ArrayOfTriangleFans.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <Graphic3d_ArrayOfTriangleStrips.hxx>
#include <Graphic3d_AspectFillArea3d.hxx>
#include <Graphic3d_AspectLine3d.hxx>
#include <Graphic3d_AspectMarker3d.hxx>
#include <Graphic3d_Aspects.hxx>
#include <Graphic3d_AspectText3d.hxx>
#include <Graphic3d_AttribBuffer.hxx>
#include <Graphic3d_BndBox3d.hxx>
#include <Graphic3d_BndBox4d.hxx>
#include <Graphic3d_BndBox4f.hxx>
#include <Graphic3d_BoundBuffer.hxx>
#include <Graphic3d_BSDF.hxx>
#include <Graphic3d_Buffer.hxx>
#include <Graphic3d_BufferRange.hxx>
#include <Graphic3d_BufferType.hxx>
#include <Graphic3d_BvhCStructureSet.hxx>
#include <Graphic3d_BvhCStructureSetTrsfPers.hxx>
#include <Graphic3d_Camera.hxx>
#include <Graphic3d_CameraTile.hxx>
#include <Graphic3d_CappingFlags.hxx>
#include <Graphic3d_CLight.hxx>
#include <Graphic3d_ClipPlane.hxx>
#include <Graphic3d_CStructure.hxx>
#include <Graphic3d_CTexture.hxx>
#include <Graphic3d_CubeMap.hxx>
#include <Graphic3d_CubeMapOrder.hxx>
#include <Graphic3d_CubeMapPacked.hxx>
#include <Graphic3d_CubeMapSeparate.hxx>
#include <Graphic3d_CubeMapSide.hxx>
#include <Graphic3d_CullingTool.hxx>
#include <Graphic3d_CView.hxx>
#include <Graphic3d_DataStructureManager.hxx>
#include <Graphic3d_DiagnosticInfo.hxx>
#include <Graphic3d_FrameStats.hxx>
#include <Graphic3d_FrameStatsCounter.hxx>
#include <Graphic3d_FrameStatsData.hxx>
#include <Graphic3d_FrameStatsTimer.hxx>
#include <Graphic3d_GraduatedTrihedron.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_Group.hxx>
#include <Graphic3d_GroupAspect.hxx>
#include <Graphic3d_GroupDefinitionError.hxx>
#include <Graphic3d_HatchStyle.hxx>
#include <Graphic3d_HighlightStyle.hxx>
#include <Graphic3d_HorizontalTextAlignment.hxx>
#include <Graphic3d_IndexBuffer.hxx>
#include <Graphic3d_Layer.hxx>
#include <Graphic3d_LevelOfTextureAnisotropy.hxx>
#include <Graphic3d_LightSet.hxx>
#include <Graphic3d_MapIteratorOfMapOfStructure.hxx>
#include <Graphic3d_MapOfAspectsToAspects.hxx>
#include <Graphic3d_MapOfObject.hxx>
#include <Graphic3d_MapOfStructure.hxx>
#include <Graphic3d_MapOfZLayerSettings.hxx>
#include <Graphic3d_MarkerImage.hxx>
#include <Graphic3d_Mat4.hxx>
#include <Graphic3d_Mat4d.hxx>
#include <Graphic3d_MaterialAspect.hxx>
#include <Graphic3d_MaterialDefinitionError.hxx>
#include <Graphic3d_MediaTexture.hxx>
#include <Graphic3d_MediaTextureSet.hxx>
#include <Graphic3d_MutableIndexBuffer.hxx>
#include <Graphic3d_NameOfMaterial.hxx>
#include <Graphic3d_NameOfTexture1D.hxx>
#include <Graphic3d_NameOfTexture2D.hxx>
#include <Graphic3d_NameOfTextureEnv.hxx>
#include <Graphic3d_NameOfTexturePlane.hxx>
#include <Graphic3d_NMapOfTransient.hxx>
#include <Graphic3d_PolygonOffset.hxx>
#include <Graphic3d_PresentationAttributes.hxx>
#include <Graphic3d_PriorityDefinitionError.hxx>
#include <Graphic3d_RenderingMode.hxx>
#include <Graphic3d_RenderingParams.hxx>
#include <Graphic3d_RenderTransparentMethod.hxx>
#include <Graphic3d_SequenceOfGroup.hxx>
#include <Graphic3d_SequenceOfHClipPlane.hxx>
#include <Graphic3d_SequenceOfStructure.hxx>
#include <Graphic3d_ShaderAttribute.hxx>
#include <Graphic3d_ShaderObject.hxx>
#include <Graphic3d_ShaderProgram.hxx>
#include <Graphic3d_ShaderVariable.hxx>
#include <Graphic3d_StereoMode.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_StructureDefinitionError.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_Text.hxx>
#include <Graphic3d_TextPath.hxx>
#include <Graphic3d_Texture1D.hxx>
#include <Graphic3d_Texture1Dmanual.hxx>
#include <Graphic3d_Texture1Dsegment.hxx>
#include <Graphic3d_Texture2D.hxx>
#include <Graphic3d_Texture2Dmanual.hxx>
#include <Graphic3d_Texture2Dplane.hxx>
#include <Graphic3d_TextureEnv.hxx>
#include <Graphic3d_TextureMap.hxx>
#include <Graphic3d_TextureParams.hxx>
#include <Graphic3d_TextureRoot.hxx>
#include <Graphic3d_TextureSet.hxx>
#include <Graphic3d_TextureUnit.hxx>
#include <Graphic3d_ToneMappingMethod.hxx>
#include <Graphic3d_TransformError.hxx>
#include <Graphic3d_TransformPers.hxx>
#include <Graphic3d_TransformUtils.hxx>
#include <Graphic3d_TransModeFlags.hxx>
#include <Graphic3d_TypeOfAnswer.hxx>
#include <Graphic3d_TypeOfBackfacingModel.hxx>
#include <Graphic3d_TypeOfBackground.hxx>
#include <Graphic3d_TypeOfComposition.hxx>
#include <Graphic3d_TypeOfConnection.hxx>
#include <Graphic3d_TypeOfLightSource.hxx>
#include <Graphic3d_TypeOfLimit.hxx>
#include <Graphic3d_TypeOfMaterial.hxx>
#include <Graphic3d_TypeOfPrimitiveArray.hxx>
#include <Graphic3d_TypeOfReflection.hxx>
#include <Graphic3d_TypeOfShaderObject.hxx>
#include <Graphic3d_TypeOfShadingModel.hxx>
#include <Graphic3d_TypeOfStructure.hxx>
#include <Graphic3d_TypeOfTexture.hxx>
#include <Graphic3d_TypeOfTextureFilter.hxx>
#include <Graphic3d_TypeOfTextureMode.hxx>
#include <Graphic3d_TypeOfVisualization.hxx>
#include <Graphic3d_Vec.hxx>
#include <Graphic3d_Vec2.hxx>
#include <Graphic3d_Vec3.hxx>
#include <Graphic3d_Vec4.hxx>
#include <Graphic3d_Vertex.hxx>
#include <Graphic3d_VerticalTextAlignment.hxx>
#include <Graphic3d_ViewAffinity.hxx>
#include <Graphic3d_WorldViewProjState.hxx>
#include <Graphic3d_ZLayerId.hxx>
#include <Graphic3d_ZLayerSettings.hxx>

// template related includes
// ./opencascade/Graphic3d_BndBox4d.hxx
#include "BVH.hxx"
// ./opencascade/Graphic3d_Vec3.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec3.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec3.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec3.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_SequenceOfGroup.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_ShaderProgram.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_ShaderProgram.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_ShaderProgram.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_BndBox4f.hxx
#include "BVH.hxx"
// ./opencascade/Graphic3d_Layer.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Layer.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Buffer.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Mat4.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_Camera.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_SequenceOfStructure.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec4.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec4.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec4.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec4.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec4.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Mat4d.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_BndBox3d.hxx
#include "BVH.hxx"
// ./opencascade/Graphic3d_Vec2.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec2.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec2.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec2.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec2.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_MapOfZLayerSettings.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <Media_PlayerContext.hxx>

// Module definiiton
void register_Graphic3d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Graphic3d"));


//Python trampoline classes
    class Py_Graphic3d_CStructure : public Graphic3d_CStructure{
    public:
        using Graphic3d_CStructure::Graphic3d_CStructure;
        
        
        // public pure virtual
        void OnVisibilityChanged() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,OnVisibilityChanged,) };
        void Clear() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,Clear,) };
        void Connect(Graphic3d_CStructure & theStructure) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,Connect,theStructure) };
        void Disconnect(Graphic3d_CStructure & theStructure) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,Disconnect,theStructure) };
        void GraphicHighlight(const opencascade::handle<Graphic3d_PresentationAttributes> & theStyle) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,GraphicHighlight,theStyle) };
        void GraphicUnhighlight() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,GraphicUnhighlight,) };
        opencascade::handle<Graphic3d_CStructure> ShadowLink(const opencascade::handle<Graphic3d_StructureManager> & theManager) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_CStructure>,Graphic3d_CStructure,ShadowLink,theManager) };
        opencascade::handle<Graphic3d_Group> NewGroup(const opencascade::handle<Graphic3d_Structure> & theStruct) override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_Group>,Graphic3d_CStructure,NewGroup,theStruct) };
        void RemoveGroup(const opencascade::handle<Graphic3d_Group> & theGroup) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,RemoveGroup,theGroup) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Graphic3d_FrameStats : public Graphic3d_FrameStats{
    public:
        using Graphic3d_FrameStats::Graphic3d_FrameStats;
        
        
        // public pure virtual
        
        
        // protected pure virtual
        void updateStatistics(const opencascade::handle<Graphic3d_CView> & theView,bool theIsImmediateOnly) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_FrameStats,updateStatistics,theView,theIsImmediateOnly) };
        
        
        // private pure virtual
        
    };
    class Py_Graphic3d_GraphicDriver : public Graphic3d_GraphicDriver{
    public:
        using Graphic3d_GraphicDriver::Graphic3d_GraphicDriver;
        
        
        // public pure virtual
        Standard_Integer InquireLimit(const Graphic3d_TypeOfLimit theType) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Graphic3d_GraphicDriver,InquireLimit,theType) };
        opencascade::handle<Graphic3d_CStructure> CreateStructure(const opencascade::handle<Graphic3d_StructureManager> & theManager) override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_CStructure>,Graphic3d_GraphicDriver,CreateStructure,theManager) };
        void RemoveStructure(opencascade::handle<Graphic3d_CStructure> & theCStructure) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,RemoveStructure,theCStructure) };
        opencascade::handle<Graphic3d_CView> CreateView(const opencascade::handle<Graphic3d_StructureManager> & theMgr) override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_CView>,Graphic3d_GraphicDriver,CreateView,theMgr) };
        void RemoveView(const opencascade::handle<Graphic3d_CView> & theView) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,RemoveView,theView) };
        void EnableVBO(const Standard_Boolean status) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,EnableVBO,status) };
        Standard_Boolean MemoryInfo(Standard_Size & theFreeBytes,TCollection_AsciiString & theInfo) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_GraphicDriver,MemoryInfo,theFreeBytes,theInfo) };
        Standard_ShortReal DefaultTextHeight() const  override { PYBIND11_OVERLOAD_PURE(Standard_ShortReal,Graphic3d_GraphicDriver,DefaultTextHeight,) };
        void TextSize(const opencascade::handle<Graphic3d_CView> & theView,const Standard_CString theText,const Standard_ShortReal theHeight,Standard_ShortReal & theWidth,Standard_ShortReal & theAscent,Standard_ShortReal & theDescent) const  override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,TextSize,theView,theText,theHeight,theWidth,theAscent,theDescent) };
        void InsertLayerBefore(const Graphic3d_ZLayerId theNewLayerId,const Graphic3d_ZLayerSettings & theSettings,const Graphic3d_ZLayerId theLayerAfter) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,InsertLayerBefore,theNewLayerId,theSettings,theLayerAfter) };
        void InsertLayerAfter(const Graphic3d_ZLayerId theNewLayerId,const Graphic3d_ZLayerSettings & theSettings,const Graphic3d_ZLayerId theLayerBefore) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,InsertLayerAfter,theNewLayerId,theSettings,theLayerBefore) };
        void RemoveZLayer(const Graphic3d_ZLayerId theLayerId) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,RemoveZLayer,theLayerId) };
        void SetZLayerSettings(const Graphic3d_ZLayerId theLayerId,const Graphic3d_ZLayerSettings & theSettings) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,SetZLayerSettings,theLayerId,theSettings) };
        Standard_Boolean ViewExists(const opencascade::handle<Aspect_Window> & theWindow,opencascade::handle<Graphic3d_CView> & theView) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_GraphicDriver,ViewExists,theWindow,theView) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Graphic3d_Group : public Graphic3d_Group{
    public:
        using Graphic3d_Group::Graphic3d_Group;
        
        
        // public pure virtual
        opencascade::handle<Graphic3d_Aspects> Aspects() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_Aspects>,Graphic3d_Group,Aspects,) };
        void SetGroupPrimitivesAspect(const opencascade::handle<Graphic3d_Aspects> & theAspect) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetGroupPrimitivesAspect,theAspect) };
        void SetPrimitivesAspect(const opencascade::handle<Graphic3d_Aspects> & theAspect) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetPrimitivesAspect,theAspect) };
        void SynchronizeAspects() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SynchronizeAspects,) };
        void ReplaceAspects( const NCollection_DataMap<opencascade::handle<Graphic3d_Aspects>, opencascade::handle<Graphic3d_Aspects> > & theMap) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,ReplaceAspects,theMap) };
        void SetStencilTestOptions(const Standard_Boolean theIsEnabled) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetStencilTestOptions,theIsEnabled) };
        void SetFlippingOptions(const Standard_Boolean theIsEnabled,const gp_Ax2 & theRefPlane) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetFlippingOptions,theIsEnabled,theRefPlane) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Graphic3d_ValueInterface : public Graphic3d_ValueInterface{
    public:
        using Graphic3d_ValueInterface::Graphic3d_ValueInterface;
        
        
        // public pure virtual
        Standard_Size TypeID() const  override { PYBIND11_OVERLOAD_PURE(Standard_Size,Graphic3d_ValueInterface,TypeID,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Graphic3d_CView : public Graphic3d_CView{
    public:
        using Graphic3d_CView::Graphic3d_CView;
        
        
        // public pure virtual
        void Redraw() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,Redraw,) };
        void RedrawImmediate() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,RedrawImmediate,) };
        void Invalidate() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,Invalidate,) };
        Standard_Boolean IsInvalidated() override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_CView,IsInvalidated,) };
        void Resized() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,Resized,) };
        Standard_Boolean SetImmediateModeDrawToFront(const Standard_Boolean theDrawToFrontBuffer) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_CView,SetImmediateModeDrawToFront,theDrawToFrontBuffer) };
        void SetWindow(const opencascade::handle<Aspect_Window> & theWindow,const Aspect_RenderingContext theContext) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetWindow,theWindow,theContext) };
        opencascade::handle<Aspect_Window> Window() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Aspect_Window>,Graphic3d_CView,Window,) };
        Standard_Boolean IsDefined() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_CView,IsDefined,) };
        Standard_Boolean BufferDump(Image_PixMap & theImage,const Graphic3d_BufferType & theBufferType) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_CView,BufferDump,theImage,theBufferType) };
        void InvalidateBVHData(const Graphic3d_ZLayerId theLayerId) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,InvalidateBVHData,theLayerId) };
        void InsertLayerBefore(const Graphic3d_ZLayerId theNewLayerId,const Graphic3d_ZLayerSettings & theSettings,const Graphic3d_ZLayerId theLayerAfter) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,InsertLayerBefore,theNewLayerId,theSettings,theLayerAfter) };
        void InsertLayerAfter(const Graphic3d_ZLayerId theNewLayerId,const Graphic3d_ZLayerSettings & theSettings,const Graphic3d_ZLayerId theLayerBefore) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,InsertLayerAfter,theNewLayerId,theSettings,theLayerBefore) };
        Standard_Integer ZLayerMax() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Graphic3d_CView,ZLayerMax,) };
        const NCollection_List<opencascade::handle<Graphic3d_Layer> > & Layers() const  override { PYBIND11_OVERLOAD_PURE(const NCollection_List<opencascade::handle<Graphic3d_Layer> > &,Graphic3d_CView,Layers,) };
        opencascade::handle<Graphic3d_Layer> Layer(const Graphic3d_ZLayerId theLayerId) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_Layer>,Graphic3d_CView,Layer,theLayerId) };
        void RemoveZLayer(const Graphic3d_ZLayerId theLayerId) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,RemoveZLayer,theLayerId) };
        void SetZLayerSettings(const Graphic3d_ZLayerId theLayerId,const Graphic3d_ZLayerSettings & theSettings) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetZLayerSettings,theLayerId,theSettings) };
        opencascade::handle<Standard_Transient> FBO() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Standard_Transient>,Graphic3d_CView,FBO,) };
        void SetFBO(const opencascade::handle<Standard_Transient> & theFbo) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetFBO,theFbo) };
        opencascade::handle<Standard_Transient> FBOCreate(const Standard_Integer theWidth,const Standard_Integer theHeight) override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Standard_Transient>,Graphic3d_CView,FBOCreate,theWidth,theHeight) };
        void FBORelease(opencascade::handle<Standard_Transient> & theFbo) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,FBORelease,theFbo) };
        void FBOChangeViewport(const opencascade::handle<Standard_Transient> & theFbo,const Standard_Integer theWidth,const Standard_Integer theHeight) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,FBOChangeViewport,theFbo,theWidth,theHeight) };
        Aspect_GradientBackground GradientBackground() const  override { PYBIND11_OVERLOAD_PURE(Aspect_GradientBackground,Graphic3d_CView,GradientBackground,) };
        void SetGradientBackground(const Aspect_GradientBackground & theBackground) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetGradientBackground,theBackground) };
        TCollection_AsciiString BackgroundImage() override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,Graphic3d_CView,BackgroundImage,) };
        void SetBackgroundImage(const TCollection_AsciiString & theFilePath) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetBackgroundImage,theFilePath) };
        Aspect_FillMethod BackgroundImageStyle() const  override { PYBIND11_OVERLOAD_PURE(Aspect_FillMethod,Graphic3d_CView,BackgroundImageStyle,) };
        void SetBackgroundImageStyle(const Aspect_FillMethod theFillStyle) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetBackgroundImageStyle,theFillStyle) };
        opencascade::handle<Graphic3d_CubeMap> BackgroundCubeMap() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_CubeMap>,Graphic3d_CView,BackgroundCubeMap,) };
        void SetBackgroundCubeMap(const opencascade::handle<Graphic3d_CubeMap> & theCubeMap) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetBackgroundCubeMap,theCubeMap) };
        opencascade::handle<Graphic3d_TextureEnv> TextureEnv() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_TextureEnv>,Graphic3d_CView,TextureEnv,) };
        void SetTextureEnv(const opencascade::handle<Graphic3d_TextureEnv> & theTextureEnv) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetTextureEnv,theTextureEnv) };
        Graphic3d_TypeOfBackfacingModel BackfacingModel() const  override { PYBIND11_OVERLOAD_PURE(Graphic3d_TypeOfBackfacingModel,Graphic3d_CView,BackfacingModel,) };
        void SetBackfacingModel(const Graphic3d_TypeOfBackfacingModel theModel) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetBackfacingModel,theModel) };
        const opencascade::handle<Graphic3d_LightSet> & Lights() const  override { PYBIND11_OVERLOAD_PURE(const opencascade::handle<Graphic3d_LightSet> &,Graphic3d_CView,Lights,) };
        void SetLights(const opencascade::handle<Graphic3d_LightSet> & theLights) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetLights,theLights) };
        const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & ClipPlanes() const  override { PYBIND11_OVERLOAD_PURE(const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &,Graphic3d_CView,ClipPlanes,) };
        void SetClipPlanes(const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & thePlanes) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetClipPlanes,thePlanes) };
        void DiagnosticInformation(NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> & theDict,Graphic3d_DiagnosticInfo theFlags) const  override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,DiagnosticInformation,theDict,theFlags) };
        TCollection_AsciiString StatisticInformation() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,Graphic3d_CView,StatisticInformation,) };
        void StatisticInformation(NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> & theDict) const  override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,StatisticInformation,theDict) };
        void FBOGetDimensions(const opencascade::handle<Standard_Transient> & theFbo,Standard_Integer & theWidth,Standard_Integer & theHeight,Standard_Integer & theWidthMax,Standard_Integer & theHeightMax) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,FBOGetDimensions,theFbo,theWidth,theHeight,theWidthMax,theHeightMax) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        void displayStructure(const opencascade::handle<Graphic3d_CStructure> & theStructure,const Standard_Integer thePriority) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,displayStructure,theStructure,thePriority) };
        void eraseStructure(const opencascade::handle<Graphic3d_CStructure> & theStructure) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,eraseStructure,theStructure) };
        void changeZLayer(const opencascade::handle<Graphic3d_CStructure> & theCStructure,const Graphic3d_ZLayerId theNewLayerId) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,changeZLayer,theCStructure,theNewLayerId) };
        void changePriority(const opencascade::handle<Graphic3d_CStructure> & theCStructure,const Standard_Integer theNewPriority) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,changePriority,theCStructure,theNewPriority) };
        
    };
    class Py_Graphic3d_CubeMap : public Graphic3d_CubeMap{
    public:
        using Graphic3d_CubeMap::Graphic3d_CubeMap;
        
        
        // public pure virtual
        opencascade::handle<Image_PixMap> Value() override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Image_PixMap>,Graphic3d_CubeMap,Value,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<Graphic3d_ArrayOfPrimitives ,opencascade::handle<Graphic3d_ArrayOfPrimitives>  , Standard_Transient >>(m.attr("Graphic3d_ArrayOfPrimitives"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::DynamicType),
             R"#(None)#" )
        .def("Attributes",
             (const opencascade::handle<Graphic3d_Buffer> & (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<const opencascade::handle<Graphic3d_Buffer> & (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::Attributes),
             R"#(Returns vertex attributes buffer (colors, normals, texture coordinates).)#" )
        .def("Type",
             (Graphic3d_TypeOfPrimitiveArray (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<Graphic3d_TypeOfPrimitiveArray (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::Type),
             R"#(Returns the type of this primitive)#" )
        .def("StringType",
             (Standard_CString (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<Standard_CString (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::StringType),
             R"#(Returns the string type of this primitive)#" )
        .def("HasVertexNormals",
             (Standard_Boolean (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<Standard_Boolean (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::HasVertexNormals),
             R"#(Returns TRUE when vertex normals array is defined.)#" )
        .def("HasVertexColors",
             (Standard_Boolean (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<Standard_Boolean (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::HasVertexColors),
             R"#(Returns TRUE when vertex colors array is defined.)#" )
        .def("HasVertexTexels",
             (Standard_Boolean (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<Standard_Boolean (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::HasVertexTexels),
             R"#(Returns TRUE when vertex texels array is defined.)#" )
        .def("VertexNumber",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::VertexNumber),
             R"#(Returns the number of defined vertex)#" )
        .def("VertexNumberAllocated",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::VertexNumberAllocated),
             R"#(Returns the number of allocated vertex)#" )
        .def("ItemNumber",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::ItemNumber),
             R"#(Returns the number of total items according to the array type.)#" )
        .def("IsValid",
             (Standard_Boolean (Graphic3d_ArrayOfPrimitives::*)() ) static_cast<Standard_Boolean (Graphic3d_ArrayOfPrimitives::*)() >(&Graphic3d_ArrayOfPrimitives::IsValid),
             R"#(Returns TRUE only when the contains of this array is available.)#" )
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt &  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt &  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice in the array.)#"  , py::arg("theVertex"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)(  const NCollection_Vec3<Standard_ShortReal> &  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)(  const NCollection_Vec3<Standard_ShortReal> &  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice in the array.)#"  , py::arg("theVertex"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice in the array.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice in the array.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const Quantity_Color &  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const Quantity_Color &  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice and vertex color in the vertex array. Warning: theColor is ignored when the hasVColors constructor parameter is FALSE)#"  , py::arg("theVertex"),  py::arg("theColor"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const Standard_Integer  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const Standard_Integer  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice and vertex color in the vertex array. Warning: theColor is ignored when the hasVColors constructor parameter is FALSE)#"  , py::arg("theVertex"),  py::arg("theColor32"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,   const NCollection_Vec4<Standard_Byte> &  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,   const NCollection_Vec4<Standard_Byte> &  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice and vertex color in the vertex array. Warning: theColor is ignored when the hasVColors constructor parameter is FALSE)#"  , py::arg("theVertex"),  py::arg("theColor"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const gp_Dir &  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const gp_Dir &  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice and vertex normal in the vertex array. Warning: theNormal is ignored when the hasVNormals constructor parameter is FALSE.)#"  , py::arg("theVertex"),  py::arg("theNormal"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice and vertex normal in the vertex array. Warning: Normal is ignored when the hasVNormals constructor parameter is FALSE.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theNX"),  py::arg("theNY"),  py::arg("theNZ"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice and vertex normal in the vertex array. Warning: Normal is ignored when the hasVNormals constructor parameter is FALSE.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theNX"),  py::arg("theNY"),  py::arg("theNZ"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const gp_Dir & ,  const Quantity_Color &  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const gp_Dir & ,  const Quantity_Color &  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice,vertex normal and color in the vertex array. Warning: theNormal is ignored when the hasVNormals constructor parameter is FALSE and theColor is ignored when the hasVColors constructor parameter is FALSE.)#"  , py::arg("theVertex"),  py::arg("theNormal"),  py::arg("theColor"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const gp_Dir & ,  const Standard_Integer  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const gp_Dir & ,  const Standard_Integer  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice,vertex normal and color in the vertex array. Warning: theNormal is ignored when the hasVNormals constructor parameter is FALSE and theColor is ignored when the hasVColors constructor parameter is FALSE.)#"  , py::arg("theVertex"),  py::arg("theNormal"),  py::arg("theColor32"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const gp_Pnt2d &  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const gp_Pnt2d &  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice and vertex texture in the vertex array. theTexel is ignored when the hasVTexels constructor parameter is FALSE.)#"  , py::arg("theVertex"),  py::arg("theTexel"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice and vertex texture coordinates in the vertex array. Texel is ignored when the hasVTexels constructor parameter is FALSE.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theTX"),  py::arg("theTY"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice and vertex texture coordinates in the vertex array. Texel is ignored when the hasVTexels constructor parameter is FALSE.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theTX"),  py::arg("theTY"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt2d &  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt2d &  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice,vertex normal and texture in the vertex array. Warning: theNormal is ignored when the hasVNormals constructor parameter is FALSE and theTexel is ignored when the hasVTexels constructor parameter is FALSE.)#"  , py::arg("theVertex"),  py::arg("theNormal"),  py::arg("theTexel"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice,vertex normal and texture in the vertex array. Warning: Normal is ignored when the hasVNormals constructor parameter is FALSE and Texel is ignored when the hasVTexels constructor parameter is FALSE.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theNX"),  py::arg("theNY"),  py::arg("theNZ"),  py::arg("theTX"),  py::arg("theTY"))
        .def("AddVertex",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) >(&Graphic3d_ArrayOfPrimitives::AddVertex),
             R"#(Adds a vertice,vertex normal and texture in the vertex array. Warning: Normal is ignored when the hasVNormals constructor parameter is FALSE and Texel is ignored when the hasVTexels constructor parameter is FALSE.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theNX"),  py::arg("theNY"),  py::arg("theNZ"),  py::arg("theTX"),  py::arg("theTY"))
        .def("SetVertice",
             (void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const gp_Pnt &  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const gp_Pnt &  ) >(&Graphic3d_ArrayOfPrimitives::SetVertice),
             R"#(Change the vertice of rank theIndex in the array.)#"  , py::arg("theIndex"),  py::arg("theVertex"))
        .def("SetVertice",
             (void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) >(&Graphic3d_ArrayOfPrimitives::SetVertice),
             R"#(Change the vertice of rank theIndex in the array.)#"  , py::arg("theIndex"),  py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("SetVertexColor",
             (void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Quantity_Color &  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Quantity_Color &  ) >(&Graphic3d_ArrayOfPrimitives::SetVertexColor),
             R"#(Change the vertex color of rank theIndex in the array.)#"  , py::arg("theIndex"),  py::arg("theColor"))
        .def("SetVertexColor",
             (void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Graphic3d_ArrayOfPrimitives::SetVertexColor),
             R"#(Change the vertex color of rank theIndex in the array.)#"  , py::arg("theIndex"),  py::arg("theR"),  py::arg("theG"),  py::arg("theB"))
        .def("SetVertexColor",
             (void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,   const NCollection_Vec4<Standard_Byte> &  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,   const NCollection_Vec4<Standard_Byte> &  ) >(&Graphic3d_ArrayOfPrimitives::SetVertexColor),
             R"#(Change the vertex color of rank theIndex in the array.)#"  , py::arg("theIndex"),  py::arg("theColor"))
        .def("SetVertexColor",
             (void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Graphic3d_ArrayOfPrimitives::SetVertexColor),
             R"#(Change the vertex color of rank theIndex> in the array.)#"  , py::arg("theIndex"),  py::arg("theColor32"))
        .def("SetVertexNormal",
             (void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const gp_Dir &  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const gp_Dir &  ) >(&Graphic3d_ArrayOfPrimitives::SetVertexNormal),
             R"#(Change the vertex normal of rank theIndex in the array.)#"  , py::arg("theIndex"),  py::arg("theNormal"))
        .def("SetVertexNormal",
             (void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Graphic3d_ArrayOfPrimitives::SetVertexNormal),
             R"#(Change the vertex normal of rank theIndex in the array.)#"  , py::arg("theIndex"),  py::arg("theNX"),  py::arg("theNY"),  py::arg("theNZ"))
        .def("SetVertexTexel",
             (void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const gp_Pnt2d &  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const gp_Pnt2d &  ) >(&Graphic3d_ArrayOfPrimitives::SetVertexTexel),
             R"#(Change the vertex texel of rank theIndex in the array.)#"  , py::arg("theIndex"),  py::arg("theTexel"))
        .def("SetVertexTexel",
             (void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) >(&Graphic3d_ArrayOfPrimitives::SetVertexTexel),
             R"#(Change the vertex texel of rank theIndex in the array.)#"  , py::arg("theIndex"),  py::arg("theTX"),  py::arg("theTY"))
        .def("Vertice",
             (gp_Pnt (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const>(&Graphic3d_ArrayOfPrimitives::Vertice),
             R"#(Returns the vertice at rank theRank from the vertex table if defined.)#"  , py::arg("theRank"))
        .def("VertexColor",
             (Quantity_Color (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const) static_cast<Quantity_Color (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const>(&Graphic3d_ArrayOfPrimitives::VertexColor),
             R"#(Returns the vertex color at rank theRank from the vertex table if defined.)#"  , py::arg("theRank"))
        .def("VertexColor",
             (void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  NCollection_Vec4<Standard_Byte> &  ) const) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  NCollection_Vec4<Standard_Byte> &  ) const>(&Graphic3d_ArrayOfPrimitives::VertexColor),
             R"#(Returns the vertex color at rank theIndex from the vertex table if defined.)#"  , py::arg("theIndex"),  py::arg("theColor"))
        .def("VertexNormal",
             (gp_Dir (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const) static_cast<gp_Dir (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const>(&Graphic3d_ArrayOfPrimitives::VertexNormal),
             R"#(Returns the vertex normal at rank theRank from the vertex table if defined.)#"  , py::arg("theRank"))
        .def("VertexTexel",
             (gp_Pnt2d (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const) static_cast<gp_Pnt2d (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const>(&Graphic3d_ArrayOfPrimitives::VertexTexel),
             R"#(Returns the vertex texture at rank theRank from the vertex table if defined.)#"  , py::arg("theRank"))
        .def("Indices",
             (const opencascade::handle<Graphic3d_IndexBuffer> & (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<const opencascade::handle<Graphic3d_IndexBuffer> & (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::Indices),
             R"#(Returns optional index buffer.)#" )
        .def("EdgeNumber",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::EdgeNumber),
             R"#(Returns the number of defined edges)#" )
        .def("EdgeNumberAllocated",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::EdgeNumberAllocated),
             R"#(Returns the number of allocated edges)#" )
        .def("Edge",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const>(&Graphic3d_ArrayOfPrimitives::Edge),
             R"#(Returns the vertex index at rank theRank in the range [1,EdgeNumber()])#"  , py::arg("theRank"))
        .def("AddEdge",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) >(&Graphic3d_ArrayOfPrimitives::AddEdge),
             R"#(Adds an edge in the range [1,VertexNumber()] in the array.)#"  , py::arg("theVertexIndex"))
        .def("AddEdges",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer  ) >(&Graphic3d_ArrayOfPrimitives::AddEdges),
             R"#(Convenience method, adds two vertex indices (a segment) in the range [1,VertexNumber()] in the array.)#"  , py::arg("theVertexIndex1"),  py::arg("theVertexIndex2"))
        .def("AddSegmentEdges",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer  ) >(&Graphic3d_ArrayOfPrimitives::AddSegmentEdges),
             R"#(Convenience method, adds two vertex indices (a segment) in the range [1,VertexNumber()] in the array of segments (Graphic3d_TOPA_SEGMENTS). Raises exception if array is not of type Graphic3d_TOPA_SEGMENTS.)#"  , py::arg("theVertexIndex1"),  py::arg("theVertexIndex2"))
        .def("AddEdges",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) >(&Graphic3d_ArrayOfPrimitives::AddEdges),
             R"#(Convenience method, adds three vertex indices (a triangle) in the range [1,VertexNumber()] in the array.)#"  , py::arg("theVertexIndex1"),  py::arg("theVertexIndex2"),  py::arg("theVertexIndex3"))
        .def("AddTriangleEdges",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) >(&Graphic3d_ArrayOfPrimitives::AddTriangleEdges),
             R"#(Convenience method, adds three vertex indices of triangle in the range [1,VertexNumber()] in the array of triangles. Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.)#"  , py::arg("theVertexIndex1"),  py::arg("theVertexIndex2"),  py::arg("theVertexIndex3"))
        .def("AddTriangleEdges",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)(  const NCollection_Vec3<Standard_Integer> &  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)(  const NCollection_Vec3<Standard_Integer> &  ) >(&Graphic3d_ArrayOfPrimitives::AddTriangleEdges),
             R"#(Convenience method, adds three vertex indices of triangle in the range [1,VertexNumber()] in the array of triangles. Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.)#"  , py::arg("theIndexes"))
        .def("AddTriangleEdges",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)(  const NCollection_Vec4<Standard_Integer> &  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)(  const NCollection_Vec4<Standard_Integer> &  ) >(&Graphic3d_ArrayOfPrimitives::AddTriangleEdges),
             R"#(Convenience method, adds three vertex indices (4th component is ignored) of triangle in the range [1,VertexNumber()] in the array of triangles. Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.)#"  , py::arg("theIndexes"))
        .def("AddEdges",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) >(&Graphic3d_ArrayOfPrimitives::AddEdges),
             R"#(Convenience method, adds four vertex indices (a quad) in the range [1,VertexNumber()] in the array.)#"  , py::arg("theVertexIndex1"),  py::arg("theVertexIndex2"),  py::arg("theVertexIndex3"),  py::arg("theVertexIndex4"))
        .def("AddQuadEdges",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) >(&Graphic3d_ArrayOfPrimitives::AddQuadEdges),
             R"#(Convenience method, adds four vertex indices (a quad) in the range [1,VertexNumber()] in the array of quads. Raises exception if array is not of type Graphic3d_TOPA_QUADRANGLES.)#"  , py::arg("theVertexIndex1"),  py::arg("theVertexIndex2"),  py::arg("theVertexIndex3"),  py::arg("theVertexIndex4"))
        .def("AddQuadTriangleEdges",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) >(&Graphic3d_ArrayOfPrimitives::AddQuadTriangleEdges),
             R"#(Convenience method, adds quad indices in the range [1,VertexNumber()] into array or triangles as two triangles. Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.)#"  , py::arg("theVertexIndex1"),  py::arg("theVertexIndex2"),  py::arg("theVertexIndex3"),  py::arg("theVertexIndex4"))
        .def("AddQuadTriangleEdges",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)(  const NCollection_Vec4<Standard_Integer> &  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)(  const NCollection_Vec4<Standard_Integer> &  ) >(&Graphic3d_ArrayOfPrimitives::AddQuadTriangleEdges),
             R"#(Convenience method, adds quad indices in the range [1,VertexNumber()] into array or triangles as two triangles. Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.)#"  , py::arg("theIndexes"))
        .def("AddTriangleStripEdges",
             (void (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer  ) >(&Graphic3d_ArrayOfPrimitives::AddTriangleStripEdges),
             R"#(Add triangle strip into indexed triangulation array. N-2 triangles are added from N input nodes. Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.)#"  , py::arg("theVertexLower"),  py::arg("theVertexUpper"))
        .def("AddTriangleFanEdges",
             (void (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Boolean  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Boolean  ) >(&Graphic3d_ArrayOfPrimitives::AddTriangleFanEdges),
             R"#(Add triangle fan into indexed triangulation array. N-2 triangles are added from N input nodes (or N-1 with closed flag). Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.)#"  , py::arg("theVertexLower"),  py::arg("theVertexUpper"),  py::arg("theToClose"))
        .def("AddPolylineEdges",
             (void (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Boolean  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( Standard_Integer ,  Standard_Integer ,  Standard_Boolean  ) >(&Graphic3d_ArrayOfPrimitives::AddPolylineEdges),
             R"#(Add line strip (polyline) into indexed segments array. N-1 segments are added from N input nodes (or N with closed flag). Raises exception if array is not of type Graphic3d_TOPA_SEGMENTS.)#"  , py::arg("theVertexLower"),  py::arg("theVertexUpper"),  py::arg("theToClose"))
        .def("Bounds",
             (const opencascade::handle<Graphic3d_BoundBuffer> & (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<const opencascade::handle<Graphic3d_BoundBuffer> & (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::Bounds),
             R"#(Returns optional bounds buffer.)#" )
        .def("HasBoundColors",
             (Standard_Boolean (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<Standard_Boolean (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::HasBoundColors),
             R"#(Returns TRUE when bound colors array is defined.)#" )
        .def("BoundNumber",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::BoundNumber),
             R"#(Returns the number of defined bounds)#" )
        .def("BoundNumberAllocated",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)() const>(&Graphic3d_ArrayOfPrimitives::BoundNumberAllocated),
             R"#(Returns the number of allocated bounds)#" )
        .def("Bound",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const>(&Graphic3d_ArrayOfPrimitives::Bound),
             R"#(Returns the edge number at rank theRank.)#"  , py::arg("theRank"))
        .def("BoundColor",
             (Quantity_Color (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const) static_cast<Quantity_Color (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) const>(&Graphic3d_ArrayOfPrimitives::BoundColor),
             R"#(Returns the bound color at rank theRank from the bound table if defined.)#"  , py::arg("theRank"))
        .def("AddBound",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer  ) >(&Graphic3d_ArrayOfPrimitives::AddBound),
             R"#(Adds a bound of length theEdgeNumber in the bound array)#"  , py::arg("theEdgeNumber"))
        .def("AddBound",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Quantity_Color &  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Quantity_Color &  ) >(&Graphic3d_ArrayOfPrimitives::AddBound),
             R"#(Adds a bound of length theEdgeNumber and bound color theBColor in the bound array. Warning: theBColor is ignored when the hasBColors constructor parameter is FALSE)#"  , py::arg("theEdgeNumber"),  py::arg("theBColor"))
        .def("AddBound",
             (Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Integer (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Graphic3d_ArrayOfPrimitives::AddBound),
             R"#(Adds a bound of length theEdgeNumber and bound color coordinates in the bound array. Warning: <theR,theG,theB> are ignored when the hasBColors constructor parameter is FALSE)#"  , py::arg("theEdgeNumber"),  py::arg("theR"),  py::arg("theG"),  py::arg("theB"))
        .def("SetBoundColor",
             (void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Quantity_Color &  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Quantity_Color &  ) >(&Graphic3d_ArrayOfPrimitives::SetBoundColor),
             R"#(Change the bound color of rank theIndex in the array.)#"  , py::arg("theIndex"),  py::arg("theColor"))
        .def("SetBoundColor",
             (void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Graphic3d_ArrayOfPrimitives::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Graphic3d_ArrayOfPrimitives::SetBoundColor),
             R"#(Change the bound color of rank theIndex in the array.)#"  , py::arg("theIndex"),  py::arg("theR"),  py::arg("theG"),  py::arg("theB"))
    // methods using call by reference i.s.o. return
        .def("Vertice",
             []( Graphic3d_ArrayOfPrimitives &self , const Standard_Integer theRank ){ Standard_Real  theX; Standard_Real  theY; Standard_Real  theZ; self.Vertice(theRank,theX,theY,theZ); return std::make_tuple(theX,theY,theZ); },
             R"#(Returns the vertice coordinates at rank theRank from the vertex table if defined.)#"  , py::arg("theRank"))
        .def("VertexColor",
             []( Graphic3d_ArrayOfPrimitives &self , const Standard_Integer theRank ){ Standard_Real  theR; Standard_Real  theG; Standard_Real  theB; self.VertexColor(theRank,theR,theG,theB); return std::make_tuple(theR,theG,theB); },
             R"#(Returns the vertex color values at rank theRank from the vertex table if defined.)#"  , py::arg("theRank"))
        .def("VertexColor",
             []( Graphic3d_ArrayOfPrimitives &self , const Standard_Integer theRank ){ Standard_Integer  theColor; self.VertexColor(theRank,theColor); return std::make_tuple(theColor); },
             R"#(Returns the vertex color values at rank theRank from the vertex table if defined.)#"  , py::arg("theRank"))
        .def("VertexNormal",
             []( Graphic3d_ArrayOfPrimitives &self , const Standard_Integer theRank ){ Standard_Real  theNX; Standard_Real  theNY; Standard_Real  theNZ; self.VertexNormal(theRank,theNX,theNY,theNZ); return std::make_tuple(theNX,theNY,theNZ); },
             R"#(Returns the vertex normal coordinates at rank theRank from the vertex table if defined.)#"  , py::arg("theRank"))
        .def("VertexTexel",
             []( Graphic3d_ArrayOfPrimitives &self , const Standard_Integer theRank ){ Standard_Real  theTX; Standard_Real  theTY; self.VertexTexel(theRank,theTX,theTY); return std::make_tuple(theTX,theTY); },
             R"#(Returns the vertex texture coordinates at rank theRank from the vertex table if defined.)#"  , py::arg("theRank"))
        .def("BoundColor",
             []( Graphic3d_ArrayOfPrimitives &self , const Standard_Integer theRank ){ Standard_Real  theR; Standard_Real  theG; Standard_Real  theB; self.BoundColor(theRank,theR,theG,theB); return std::make_tuple(theR,theG,theB); },
             R"#(Returns the bound color values at rank theRank from the bound table if defined.)#"  , py::arg("theRank"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ArrayOfPrimitives::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ArrayOfPrimitives::get_type_descriptor),
                    R"#(None)#" )
        .def_static("CreateArray_s",
                    (opencascade::handle<Graphic3d_ArrayOfPrimitives> (*)( Graphic3d_TypeOfPrimitiveArray ,  Standard_Integer ,  Standard_Integer ,  Graphic3d_ArrayFlags  ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfPrimitives> (*)( Graphic3d_TypeOfPrimitiveArray ,  Standard_Integer ,  Standard_Integer ,  Graphic3d_ArrayFlags  ) >(&Graphic3d_ArrayOfPrimitives::CreateArray),
                    R"#(Create an array of specified type.)#"  , py::arg("theType"),  py::arg("theMaxVertexs"),  py::arg("theMaxEdges"),  py::arg("theArrayFlags"))
        .def_static("CreateArray_s",
                    (opencascade::handle<Graphic3d_ArrayOfPrimitives> (*)( Graphic3d_TypeOfPrimitiveArray ,  Standard_Integer ,  Standard_Integer ,  Standard_Integer ,  Graphic3d_ArrayFlags  ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfPrimitives> (*)( Graphic3d_TypeOfPrimitiveArray ,  Standard_Integer ,  Standard_Integer ,  Standard_Integer ,  Graphic3d_ArrayFlags  ) >(&Graphic3d_ArrayOfPrimitives::CreateArray),
                    R"#(Create an array of specified type.)#"  , py::arg("theType"),  py::arg("theMaxVertexs"),  py::arg("theMaxBounds"),  py::arg("theMaxEdges"),  py::arg("theArrayFlags"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Aspects ,opencascade::handle<Graphic3d_Aspects>  , Standard_Transient >>(m.attr("Graphic3d_Aspects"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_Aspects::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::DynamicType),
             R"#(None)#" )
        .def("InteriorStyle",
             (Aspect_InteriorStyle (Graphic3d_Aspects::*)() const) static_cast<Aspect_InteriorStyle (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::InteriorStyle),
             R"#(Return interior rendering style; Aspect_IS_SOLID by default.)#" )
        .def("SetInteriorStyle",
             (void (Graphic3d_Aspects::*)( const Aspect_InteriorStyle  ) ) static_cast<void (Graphic3d_Aspects::*)( const Aspect_InteriorStyle  ) >(&Graphic3d_Aspects::SetInteriorStyle),
             R"#(Modifies the interior type used for rendering)#"  , py::arg("theStyle"))
        .def("ShadingModel",
             (Graphic3d_TypeOfShadingModel (Graphic3d_Aspects::*)() const) static_cast<Graphic3d_TypeOfShadingModel (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::ShadingModel),
             R"#(Returns shading model; Graphic3d_TOSM_DEFAULT by default. Graphic3d_TOSM_DEFAULT means that Shading Model set as default for entire Viewer will be used.)#" )
        .def("SetShadingModel",
             (void (Graphic3d_Aspects::*)( const Graphic3d_TypeOfShadingModel  ) ) static_cast<void (Graphic3d_Aspects::*)( const Graphic3d_TypeOfShadingModel  ) >(&Graphic3d_Aspects::SetShadingModel),
             R"#(Sets shading model)#"  , py::arg("theShadingModel"))
        .def("AlphaMode",
             (Graphic3d_AlphaMode (Graphic3d_Aspects::*)() const) static_cast<Graphic3d_AlphaMode (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::AlphaMode),
             R"#(Returns the way how alpha value should be treated (Graphic3d_AlphaMode_BlendAuto by default, for backward compatibility).)#" )
        .def("AlphaCutoff",
             (Standard_ShortReal (Graphic3d_Aspects::*)() const) static_cast<Standard_ShortReal (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::AlphaCutoff),
             R"#(Returns alpha cutoff threshold, for discarding fragments within Graphic3d_AlphaMode_Mask mode (0.5 by default). If the alpha value is greater than or equal to this value then it is rendered as fully opaque, otherwise, it is rendered as fully transparent.)#" )
        .def("SetAlphaMode",
             (void (Graphic3d_Aspects::*)( Graphic3d_AlphaMode ,  Standard_ShortReal  ) ) static_cast<void (Graphic3d_Aspects::*)( Graphic3d_AlphaMode ,  Standard_ShortReal  ) >(&Graphic3d_Aspects::SetAlphaMode),
             R"#(Defines the way how alpha value should be treated.)#"  , py::arg("theMode"),  py::arg("theAlphaCutoff")=static_cast<Standard_ShortReal>(0.5f))
        .def("ColorRGBA",
             (const Quantity_ColorRGBA & (Graphic3d_Aspects::*)() const) static_cast<const Quantity_ColorRGBA & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::ColorRGBA),
             R"#(Return color)#" )
        .def("Color",
             (const Quantity_Color & (Graphic3d_Aspects::*)() const) static_cast<const Quantity_Color & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::Color),
             R"#(Return the color.)#" )
        .def("SetColor",
             (void (Graphic3d_Aspects::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_Aspects::*)( const Quantity_Color &  ) >(&Graphic3d_Aspects::SetColor),
             R"#(Modifies the color.)#"  , py::arg("theColor"))
        .def("InteriorColor",
             (const Quantity_Color & (Graphic3d_Aspects::*)() const) static_cast<const Quantity_Color & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::InteriorColor),
             R"#(Return interior color.)#" )
        .def("InteriorColorRGBA",
             (const Quantity_ColorRGBA & (Graphic3d_Aspects::*)() const) static_cast<const Quantity_ColorRGBA & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::InteriorColorRGBA),
             R"#(Return interior color.)#" )
        .def("SetInteriorColor",
             (void (Graphic3d_Aspects::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_Aspects::*)( const Quantity_Color &  ) >(&Graphic3d_Aspects::SetInteriorColor),
             R"#(Modifies the color of the interior of the face)#"  , py::arg("theColor"))
        .def("SetInteriorColor",
             (void (Graphic3d_Aspects::*)( const Quantity_ColorRGBA &  ) ) static_cast<void (Graphic3d_Aspects::*)( const Quantity_ColorRGBA &  ) >(&Graphic3d_Aspects::SetInteriorColor),
             R"#(Modifies the color of the interior of the face)#"  , py::arg("theColor"))
        .def("BackInteriorColor",
             (const Quantity_Color & (Graphic3d_Aspects::*)() const) static_cast<const Quantity_Color & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::BackInteriorColor),
             R"#(Return back interior color.)#" )
        .def("BackInteriorColorRGBA",
             (const Quantity_ColorRGBA & (Graphic3d_Aspects::*)() const) static_cast<const Quantity_ColorRGBA & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::BackInteriorColorRGBA),
             R"#(Return back interior color.)#" )
        .def("SetBackInteriorColor",
             (void (Graphic3d_Aspects::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_Aspects::*)( const Quantity_Color &  ) >(&Graphic3d_Aspects::SetBackInteriorColor),
             R"#(Modifies the color of the interior of the back face)#"  , py::arg("theColor"))
        .def("SetBackInteriorColor",
             (void (Graphic3d_Aspects::*)( const Quantity_ColorRGBA &  ) ) static_cast<void (Graphic3d_Aspects::*)( const Quantity_ColorRGBA &  ) >(&Graphic3d_Aspects::SetBackInteriorColor),
             R"#(Modifies the color of the interior of the back face)#"  , py::arg("theColor"))
        .def("FrontMaterial",
             (const Graphic3d_MaterialAspect & (Graphic3d_Aspects::*)() const) static_cast<const Graphic3d_MaterialAspect & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::FrontMaterial),
             R"#(Returns the surface material of external faces)#" )
        .def("ChangeFrontMaterial",
             (Graphic3d_MaterialAspect & (Graphic3d_Aspects::*)() ) static_cast<Graphic3d_MaterialAspect & (Graphic3d_Aspects::*)() >(&Graphic3d_Aspects::ChangeFrontMaterial),
             R"#(Returns the surface material of external faces)#" )
        .def("SetFrontMaterial",
             (void (Graphic3d_Aspects::*)( const Graphic3d_MaterialAspect &  ) ) static_cast<void (Graphic3d_Aspects::*)( const Graphic3d_MaterialAspect &  ) >(&Graphic3d_Aspects::SetFrontMaterial),
             R"#(Modifies the surface material of external faces)#"  , py::arg("theMaterial"))
        .def("BackMaterial",
             (const Graphic3d_MaterialAspect & (Graphic3d_Aspects::*)() const) static_cast<const Graphic3d_MaterialAspect & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::BackMaterial),
             R"#(Returns the surface material of internal faces)#" )
        .def("ChangeBackMaterial",
             (Graphic3d_MaterialAspect & (Graphic3d_Aspects::*)() ) static_cast<Graphic3d_MaterialAspect & (Graphic3d_Aspects::*)() >(&Graphic3d_Aspects::ChangeBackMaterial),
             R"#(Returns the surface material of internal faces)#" )
        .def("SetBackMaterial",
             (void (Graphic3d_Aspects::*)( const Graphic3d_MaterialAspect &  ) ) static_cast<void (Graphic3d_Aspects::*)( const Graphic3d_MaterialAspect &  ) >(&Graphic3d_Aspects::SetBackMaterial),
             R"#(Modifies the surface material of internal faces)#"  , py::arg("theMaterial"))
        .def("ToSuppressBackFaces",
             (bool (Graphic3d_Aspects::*)() const) static_cast<bool (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::ToSuppressBackFaces),
             R"#(Returns true if back faces should be suppressed (true by default).)#" )
        .def("SetSuppressBackFaces",
             (void (Graphic3d_Aspects::*)( bool  ) ) static_cast<void (Graphic3d_Aspects::*)( bool  ) >(&Graphic3d_Aspects::SetSuppressBackFaces),
             R"#(Assign back faces culling flag.)#"  , py::arg("theToSuppress"))
        .def("BackFace",
             (bool (Graphic3d_Aspects::*)() const) static_cast<bool (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::BackFace),
             R"#(Returns true if back faces should be suppressed (true by default).)#" )
        .def("AllowBackFace",
             (void (Graphic3d_Aspects::*)() ) static_cast<void (Graphic3d_Aspects::*)() >(&Graphic3d_Aspects::AllowBackFace),
             R"#(Allows the display of back-facing filled polygons.)#" )
        .def("SuppressBackFace",
             (void (Graphic3d_Aspects::*)() ) static_cast<void (Graphic3d_Aspects::*)() >(&Graphic3d_Aspects::SuppressBackFace),
             R"#(Suppress the display of back-facing filled polygons. A back-facing polygon is defined as a polygon whose vertices are in a clockwise order with respect to screen coordinates.)#" )
        .def("Distinguish",
             (bool (Graphic3d_Aspects::*)() const) static_cast<bool (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::Distinguish),
             R"#(Returns true if material properties should be distinguished for back and front faces (false by default).)#" )
        .def("SetDistinguish",
             (void (Graphic3d_Aspects::*)( bool  ) ) static_cast<void (Graphic3d_Aspects::*)( bool  ) >(&Graphic3d_Aspects::SetDistinguish),
             R"#(Set material distinction between front and back faces.)#"  , py::arg("toDistinguish"))
        .def("SetDistinguishOn",
             (void (Graphic3d_Aspects::*)() ) static_cast<void (Graphic3d_Aspects::*)() >(&Graphic3d_Aspects::SetDistinguishOn),
             R"#(Allows material distinction between front and back faces.)#" )
        .def("SetDistinguishOff",
             (void (Graphic3d_Aspects::*)() ) static_cast<void (Graphic3d_Aspects::*)() >(&Graphic3d_Aspects::SetDistinguishOff),
             R"#(Forbids material distinction between front and back faces.)#" )
        .def("ShaderProgram",
             (const opencascade::handle<Graphic3d_ShaderProgram> & (Graphic3d_Aspects::*)() const) static_cast<const opencascade::handle<Graphic3d_ShaderProgram> & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::ShaderProgram),
             R"#(Return shader program.)#" )
        .def("SetShaderProgram",
             (void (Graphic3d_Aspects::*)( const opencascade::handle<Graphic3d_ShaderProgram> &  ) ) static_cast<void (Graphic3d_Aspects::*)( const opencascade::handle<Graphic3d_ShaderProgram> &  ) >(&Graphic3d_Aspects::SetShaderProgram),
             R"#(Sets up OpenGL/GLSL shader program.)#"  , py::arg("theProgram"))
        .def("TextureSet",
             (const opencascade::handle<Graphic3d_TextureSet> & (Graphic3d_Aspects::*)() const) static_cast<const opencascade::handle<Graphic3d_TextureSet> & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::TextureSet),
             R"#(Return texture array to be mapped.)#" )
        .def("SetTextureSet",
             (void (Graphic3d_Aspects::*)( const opencascade::handle<Graphic3d_TextureSet> &  ) ) static_cast<void (Graphic3d_Aspects::*)( const opencascade::handle<Graphic3d_TextureSet> &  ) >(&Graphic3d_Aspects::SetTextureSet),
             R"#(Setup texture array to be mapped.)#"  , py::arg("theTextures"))
        .def("TextureMap",
             (opencascade::handle<Graphic3d_TextureMap> (Graphic3d_Aspects::*)() const) static_cast<opencascade::handle<Graphic3d_TextureMap> (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::TextureMap),
             R"#(Return texture to be mapped.)#" )
        .def("SetTextureMap",
             (void (Graphic3d_Aspects::*)( const opencascade::handle<Graphic3d_TextureMap> &  ) ) static_cast<void (Graphic3d_Aspects::*)( const opencascade::handle<Graphic3d_TextureMap> &  ) >(&Graphic3d_Aspects::SetTextureMap),
             R"#(Assign texture to be mapped. See also SetTextureMapOn() to actually activate texture mapping.)#"  , py::arg("theTexture"))
        .def("ToMapTexture",
             (bool (Graphic3d_Aspects::*)() const) static_cast<bool (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::ToMapTexture),
             R"#(Return true if texture mapping is enabled (false by default).)#" )
        .def("TextureMapState",
             (bool (Graphic3d_Aspects::*)() const) static_cast<bool (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::TextureMapState),
             R"#(Return true if texture mapping is enabled (false by default).)#" )
        .def("SetTextureMapOn",
             (void (Graphic3d_Aspects::*)( bool  ) ) static_cast<void (Graphic3d_Aspects::*)( bool  ) >(&Graphic3d_Aspects::SetTextureMapOn),
             R"#(Enable or disable texture mapping (has no effect if texture is not set).)#"  , py::arg("theToMap"))
        .def("SetTextureMapOn",
             (void (Graphic3d_Aspects::*)() ) static_cast<void (Graphic3d_Aspects::*)() >(&Graphic3d_Aspects::SetTextureMapOn),
             R"#(Enable texture mapping (has no effect if texture is not set).)#" )
        .def("SetTextureMapOff",
             (void (Graphic3d_Aspects::*)() ) static_cast<void (Graphic3d_Aspects::*)() >(&Graphic3d_Aspects::SetTextureMapOff),
             R"#(Disable texture mapping.)#" )
        .def("PolygonOffset",
             (const Graphic3d_PolygonOffset & (Graphic3d_Aspects::*)() const) static_cast<const Graphic3d_PolygonOffset & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::PolygonOffset),
             R"#(Returns current polygon offsets settings.)#" )
        .def("SetPolygonOffset",
             (void (Graphic3d_Aspects::*)( const Graphic3d_PolygonOffset &  ) ) static_cast<void (Graphic3d_Aspects::*)( const Graphic3d_PolygonOffset &  ) >(&Graphic3d_Aspects::SetPolygonOffset),
             R"#(Sets polygon offsets settings.)#"  , py::arg("theOffset"))
        .def("SetPolygonOffsets",
             (void (Graphic3d_Aspects::*)( const Standard_Integer ,  const Standard_ShortReal ,  const Standard_ShortReal  ) ) static_cast<void (Graphic3d_Aspects::*)( const Standard_Integer ,  const Standard_ShortReal ,  const Standard_ShortReal  ) >(&Graphic3d_Aspects::SetPolygonOffsets),
             R"#(Sets up OpenGL polygon offsets mechanism. <aMode> parameter can contain various combinations of Aspect_PolygonOffsetMode enumeration elements (Aspect_POM_None means that polygon offsets are not changed). If <aMode> is different from Aspect_POM_Off and Aspect_POM_None, then <aFactor> and <aUnits> arguments are used by graphic renderer to calculate a depth offset value:)#"  , py::arg("theMode"),  py::arg("theFactor")=static_cast<const Standard_ShortReal>(1.0f),  py::arg("theUnits")=static_cast<const Standard_ShortReal>(0.0f))
        .def("LineType",
             (Aspect_TypeOfLine (Graphic3d_Aspects::*)() const) static_cast<Aspect_TypeOfLine (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::LineType),
             R"#(Return line type; Aspect_TOL_SOLID by default.)#" )
        .def("SetLineType",
             (void (Graphic3d_Aspects::*)( Aspect_TypeOfLine  ) ) static_cast<void (Graphic3d_Aspects::*)( Aspect_TypeOfLine  ) >(&Graphic3d_Aspects::SetLineType),
             R"#(Modifies the line type)#"  , py::arg("theType"))
        .def("LineWidth",
             (Standard_ShortReal (Graphic3d_Aspects::*)() const) static_cast<Standard_ShortReal (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::LineWidth),
             R"#(Return width for edges in pixels; 1.0 by default.)#" )
        .def("SetLineWidth",
             (void (Graphic3d_Aspects::*)( Standard_ShortReal  ) ) static_cast<void (Graphic3d_Aspects::*)( Standard_ShortReal  ) >(&Graphic3d_Aspects::SetLineWidth),
             R"#(Modifies the line thickness Warning: Raises Standard_OutOfRange if the width is a negative value.)#"  , py::arg("theWidth"))
        .def("MarkerType",
             (Aspect_TypeOfMarker (Graphic3d_Aspects::*)() const) static_cast<Aspect_TypeOfMarker (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::MarkerType),
             R"#(Return marker type; Aspect_TOM_POINT by default.)#" )
        .def("SetMarkerType",
             (void (Graphic3d_Aspects::*)( Aspect_TypeOfMarker  ) ) static_cast<void (Graphic3d_Aspects::*)( Aspect_TypeOfMarker  ) >(&Graphic3d_Aspects::SetMarkerType),
             R"#(Modifies the type of marker.)#"  , py::arg("theType"))
        .def("MarkerScale",
             (Standard_ShortReal (Graphic3d_Aspects::*)() const) static_cast<Standard_ShortReal (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::MarkerScale),
             R"#(Return marker scale factor; 1.0 by default.)#" )
        .def("SetMarkerScale",
             (void (Graphic3d_Aspects::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_Aspects::*)( const Standard_ShortReal  ) >(&Graphic3d_Aspects::SetMarkerScale),
             R"#(Modifies the scale factor. Marker type Aspect_TOM_POINT is not affected by the marker size scale factor. It is always the smallest displayable dot. Warning: Raises Standard_OutOfRange if the scale is a negative value.)#"  , py::arg("theScale"))
        .def("MarkerImage",
             (const opencascade::handle<Graphic3d_MarkerImage> & (Graphic3d_Aspects::*)() const) static_cast<const opencascade::handle<Graphic3d_MarkerImage> & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::MarkerImage),
             R"#(Returns marker's image texture. Could be null handle if marker aspect has been initialized as default type of marker.)#" )
        .def("SetMarkerImage",
             (void (Graphic3d_Aspects::*)( const opencascade::handle<Graphic3d_MarkerImage> &  ) ) static_cast<void (Graphic3d_Aspects::*)( const opencascade::handle<Graphic3d_MarkerImage> &  ) >(&Graphic3d_Aspects::SetMarkerImage),
             R"#(Set marker's image texture.)#"  , py::arg("theImage"))
        .def("IsMarkerSprite",
             (bool (Graphic3d_Aspects::*)() const) static_cast<bool (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::IsMarkerSprite),
             R"#(Returns TRUE if marker should be drawn using marker sprite (either user-provided or generated).)#" )
        .def("TextFont",
             (const opencascade::handle<TCollection_HAsciiString> & (Graphic3d_Aspects::*)() const) static_cast<const opencascade::handle<TCollection_HAsciiString> & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::TextFont),
             R"#(Returns the font; NULL string by default.)#" )
        .def("SetTextFont",
             (void (Graphic3d_Aspects::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (Graphic3d_Aspects::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&Graphic3d_Aspects::SetTextFont),
             R"#(Modifies the font.)#"  , py::arg("theFont"))
        .def("TextFontAspect",
             (Font_FontAspect (Graphic3d_Aspects::*)() const) static_cast<Font_FontAspect (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::TextFontAspect),
             R"#(Returns text FontAspect)#" )
        .def("SetTextFontAspect",
             (void (Graphic3d_Aspects::*)( Font_FontAspect  ) ) static_cast<void (Graphic3d_Aspects::*)( Font_FontAspect  ) >(&Graphic3d_Aspects::SetTextFontAspect),
             R"#(Turns usage of Aspect text)#"  , py::arg("theFontAspect"))
        .def("TextDisplayType",
             (Aspect_TypeOfDisplayText (Graphic3d_Aspects::*)() const) static_cast<Aspect_TypeOfDisplayText (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::TextDisplayType),
             R"#(Returns display type; Aspect_TODT_NORMAL by default.)#" )
        .def("SetTextDisplayType",
             (void (Graphic3d_Aspects::*)( Aspect_TypeOfDisplayText  ) ) static_cast<void (Graphic3d_Aspects::*)( Aspect_TypeOfDisplayText  ) >(&Graphic3d_Aspects::SetTextDisplayType),
             R"#(Sets display type.)#"  , py::arg("theType"))
        .def("ColorSubTitleRGBA",
             (const Quantity_ColorRGBA & (Graphic3d_Aspects::*)() const) static_cast<const Quantity_ColorRGBA & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::ColorSubTitleRGBA),
             R"#(Returns text background/shadow color; equals to EdgeColor() property.)#" )
        .def("ColorSubTitle",
             (const Quantity_Color & (Graphic3d_Aspects::*)() const) static_cast<const Quantity_Color & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::ColorSubTitle),
             R"#(Return text background/shadow color; equals to EdgeColor() property.)#" )
        .def("SetColorSubTitle",
             (void (Graphic3d_Aspects::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_Aspects::*)( const Quantity_Color &  ) >(&Graphic3d_Aspects::SetColorSubTitle),
             R"#(Modifies text background/shadow color; equals to EdgeColor() property.)#"  , py::arg("theColor"))
        .def("SetColorSubTitle",
             (void (Graphic3d_Aspects::*)( const Quantity_ColorRGBA &  ) ) static_cast<void (Graphic3d_Aspects::*)( const Quantity_ColorRGBA &  ) >(&Graphic3d_Aspects::SetColorSubTitle),
             R"#(Modifies text background/shadow color; equals to EdgeColor() property.)#"  , py::arg("theColor"))
        .def("IsTextZoomable",
             (bool (Graphic3d_Aspects::*)() const) static_cast<bool (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::IsTextZoomable),
             R"#(Returns TRUE when the Text Zoomable is on.)#" )
        .def("SetTextZoomable",
             (void (Graphic3d_Aspects::*)( bool  ) ) static_cast<void (Graphic3d_Aspects::*)( bool  ) >(&Graphic3d_Aspects::SetTextZoomable),
             R"#(Turns usage of text zoomable on/off)#"  , py::arg("theFlag"))
        .def("TextStyle",
             (Aspect_TypeOfStyleText (Graphic3d_Aspects::*)() const) static_cast<Aspect_TypeOfStyleText (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::TextStyle),
             R"#(Returns the text style; Aspect_TOST_NORMAL by default.)#" )
        .def("SetTextStyle",
             (void (Graphic3d_Aspects::*)( Aspect_TypeOfStyleText  ) ) static_cast<void (Graphic3d_Aspects::*)( Aspect_TypeOfStyleText  ) >(&Graphic3d_Aspects::SetTextStyle),
             R"#(Modifies the style of the text.)#"  , py::arg("theStyle"))
        .def("TextAngle",
             (Standard_ShortReal (Graphic3d_Aspects::*)() const) static_cast<Standard_ShortReal (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::TextAngle),
             R"#(Returns Angle of degree)#" )
        .def("SetTextAngle",
             (void (Graphic3d_Aspects::*)( Standard_ShortReal  ) ) static_cast<void (Graphic3d_Aspects::*)( Standard_ShortReal  ) >(&Graphic3d_Aspects::SetTextAngle),
             R"#(Turns usage of text rotated)#"  , py::arg("theAngle"))
        .def("ToDrawEdges",
             (bool (Graphic3d_Aspects::*)() const) static_cast<bool (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::ToDrawEdges),
             R"#(Returns true if mesh edges should be drawn (false by default).)#" )
        .def("SetDrawEdges",
             (void (Graphic3d_Aspects::*)( bool  ) ) static_cast<void (Graphic3d_Aspects::*)( bool  ) >(&Graphic3d_Aspects::SetDrawEdges),
             R"#(Set if mesh edges should be drawn or not.)#"  , py::arg("theToDraw"))
        .def("SetEdgeOn",
             (void (Graphic3d_Aspects::*)() ) static_cast<void (Graphic3d_Aspects::*)() >(&Graphic3d_Aspects::SetEdgeOn),
             R"#(The edges of FillAreas are drawn.)#" )
        .def("SetEdgeOff",
             (void (Graphic3d_Aspects::*)() ) static_cast<void (Graphic3d_Aspects::*)() >(&Graphic3d_Aspects::SetEdgeOff),
             R"#(The edges of FillAreas are not drawn.)#" )
        .def("EdgeColor",
             (const Quantity_Color & (Graphic3d_Aspects::*)() const) static_cast<const Quantity_Color & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::EdgeColor),
             R"#(Return color of edges.)#" )
        .def("EdgeColorRGBA",
             (const Quantity_ColorRGBA & (Graphic3d_Aspects::*)() const) static_cast<const Quantity_ColorRGBA & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::EdgeColorRGBA),
             R"#(Return color of edges.)#" )
        .def("SetEdgeColor",
             (void (Graphic3d_Aspects::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_Aspects::*)( const Quantity_Color &  ) >(&Graphic3d_Aspects::SetEdgeColor),
             R"#(Modifies the color of the edge of the face)#"  , py::arg("theColor"))
        .def("SetEdgeColor",
             (void (Graphic3d_Aspects::*)( const Quantity_ColorRGBA &  ) ) static_cast<void (Graphic3d_Aspects::*)( const Quantity_ColorRGBA &  ) >(&Graphic3d_Aspects::SetEdgeColor),
             R"#(Modifies the color of the edge of the face)#"  , py::arg("theColor"))
        .def("EdgeLineType",
             (Aspect_TypeOfLine (Graphic3d_Aspects::*)() const) static_cast<Aspect_TypeOfLine (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::EdgeLineType),
             R"#(Return edges line type (same as LineType()).)#" )
        .def("SetEdgeLineType",
             (void (Graphic3d_Aspects::*)( Aspect_TypeOfLine  ) ) static_cast<void (Graphic3d_Aspects::*)( Aspect_TypeOfLine  ) >(&Graphic3d_Aspects::SetEdgeLineType),
             R"#(Modifies the edge line type (same as SetLineType()))#"  , py::arg("theType"))
        .def("EdgeWidth",
             (Standard_ShortReal (Graphic3d_Aspects::*)() const) static_cast<Standard_ShortReal (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::EdgeWidth),
             R"#(Return width for edges in pixels (same as LineWidth()).)#" )
        .def("SetEdgeWidth",
             (void (Graphic3d_Aspects::*)( Standard_Real  ) ) static_cast<void (Graphic3d_Aspects::*)( Standard_Real  ) >(&Graphic3d_Aspects::SetEdgeWidth),
             R"#(Modifies the edge thickness (same as SetLineWidth()))#"  , py::arg("theWidth"))
        .def("ToSkipFirstEdge",
             (bool (Graphic3d_Aspects::*)() const) static_cast<bool (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::ToSkipFirstEdge),
             R"#(Returns TRUE if drawing element edges should discard first edge in triangle; FALSE by default. Graphics hardware works mostly with triangles, so that wireframe presentation will draw triangle edges by default. This flag allows rendering wireframe presentation of quad-only array split into triangles. For this, quads should be split in specific order, so that the quad diagonal (to be NOT rendered) goes first: 1------2 / / Triangle #1: 2-0-1; Triangle #2: 0-2-3 0------3)#" )
        .def("SetSkipFirstEdge",
             (void (Graphic3d_Aspects::*)( bool  ) ) static_cast<void (Graphic3d_Aspects::*)( bool  ) >(&Graphic3d_Aspects::SetSkipFirstEdge),
             R"#(Set skip first triangle edge flag for drawing wireframe presentation of quads array split into triangles.)#"  , py::arg("theToSkipFirstEdge"))
        .def("ToDrawSilhouette",
             (bool (Graphic3d_Aspects::*)() const) static_cast<bool (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::ToDrawSilhouette),
             R"#(Returns TRUE if silhouette (outline) should be drawn (with edge color and width); FALSE by default.)#" )
        .def("SetDrawSilhouette",
             (void (Graphic3d_Aspects::*)( bool  ) ) static_cast<void (Graphic3d_Aspects::*)( bool  ) >(&Graphic3d_Aspects::SetDrawSilhouette),
             R"#(Enables/disables drawing silhouette (outline).)#"  , py::arg("theToDraw"))
        .def("HatchStyle",
             (const opencascade::handle<Graphic3d_HatchStyle> & (Graphic3d_Aspects::*)() const) static_cast<const opencascade::handle<Graphic3d_HatchStyle> & (Graphic3d_Aspects::*)() const>(&Graphic3d_Aspects::HatchStyle),
             R"#(Returns the hatch type used when InteriorStyle is IS_HATCH)#" )
        .def("SetHatchStyle",
             (void (Graphic3d_Aspects::*)( const opencascade::handle<Graphic3d_HatchStyle> &  ) ) static_cast<void (Graphic3d_Aspects::*)( const opencascade::handle<Graphic3d_HatchStyle> &  ) >(&Graphic3d_Aspects::SetHatchStyle),
             R"#(Modifies the hatch type used when InteriorStyle is IS_HATCH)#"  , py::arg("theStyle"))
        .def("SetHatchStyle",
             (void (Graphic3d_Aspects::*)( const Aspect_HatchStyle  ) ) static_cast<void (Graphic3d_Aspects::*)( const Aspect_HatchStyle  ) >(&Graphic3d_Aspects::SetHatchStyle),
             R"#(Modifies the hatch type used when InteriorStyle is IS_HATCH)#"  , py::arg("theStyle"))
        .def("IsEqual",
             (bool (Graphic3d_Aspects::*)( const Graphic3d_Aspects &  ) ) static_cast<bool (Graphic3d_Aspects::*)( const Graphic3d_Aspects &  ) >(&Graphic3d_Aspects::IsEqual),
             R"#(Check for equality with another aspects.)#"  , py::arg("theOther"))
        .def("DumpJson",
             (void (Graphic3d_Aspects::*)( std::ostream & ,  const Standard_Integer  ) const) static_cast<void (Graphic3d_Aspects::*)( std::ostream & ,  const Standard_Integer  ) const>(&Graphic3d_Aspects::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
        .def("PolygonOffsets",
             []( Graphic3d_Aspects &self , Standard_ShortReal & theFactor,Standard_ShortReal & theUnits ){ Standard_Integer  theMode; self.PolygonOffsets(theMode,theFactor,theUnits); return std::make_tuple(theMode); },
             R"#(Returns current polygon offsets settings.)#"  , py::arg("theFactor"),  py::arg("theUnits"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_Aspects::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_Aspects::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Graphic3d_Attribute , shared_ptr<Graphic3d_Attribute>>(m,"Graphic3d_Attribute");

    static_cast<py::class_<Graphic3d_Attribute , shared_ptr<Graphic3d_Attribute>  >>(m.attr("Graphic3d_Attribute"))
    // constructors
    // custom constructors
    // methods
        .def("Stride",
             (Standard_Integer (Graphic3d_Attribute::*)() const) static_cast<Standard_Integer (Graphic3d_Attribute::*)() const>(&Graphic3d_Attribute::Stride),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Stride_s",
                    (Standard_Integer (*)( const Graphic3d_TypeOfData  ) ) static_cast<Standard_Integer (*)( const Graphic3d_TypeOfData  ) >(&Graphic3d_Attribute::Stride),
                    R"#(Returns size of attribute of specified data type)#"  , py::arg("theType"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_AxisAspect , shared_ptr<Graphic3d_AxisAspect>  >>(m.attr("Graphic3d_AxisAspect"))
    // constructors
        .def(py::init< const TCollection_ExtendedString,const Quantity_Color,const Quantity_Color,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theName")=static_cast<const TCollection_ExtendedString>(""),  py::arg("theNameColor")=static_cast<const Quantity_Color>(Quantity_NOC_BLACK),  py::arg("theColor")=static_cast<const Quantity_Color>(Quantity_NOC_BLACK),  py::arg("theValuesOffset")=static_cast<const Standard_Integer>(10),  py::arg("theNameOffset")=static_cast<const Standard_Integer>(30),  py::arg("theTickmarksNumber")=static_cast<const Standard_Integer>(5),  py::arg("theTickmarksLength")=static_cast<const Standard_Integer>(10),  py::arg("theToDrawName")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theToDrawValues")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theToDrawTickmarks")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("SetName",
             (void (Graphic3d_AxisAspect::*)( const TCollection_ExtendedString &  ) ) static_cast<void (Graphic3d_AxisAspect::*)( const TCollection_ExtendedString &  ) >(&Graphic3d_AxisAspect::SetName),
             R"#(None)#"  , py::arg("theName"))
        .def("Name",
             (const TCollection_ExtendedString & (Graphic3d_AxisAspect::*)() const) static_cast<const TCollection_ExtendedString & (Graphic3d_AxisAspect::*)() const>(&Graphic3d_AxisAspect::Name),
             R"#(None)#" )
        .def("ToDrawName",
             (Standard_Boolean (Graphic3d_AxisAspect::*)() const) static_cast<Standard_Boolean (Graphic3d_AxisAspect::*)() const>(&Graphic3d_AxisAspect::ToDrawName),
             R"#(None)#" )
        .def("SetDrawName",
             (void (Graphic3d_AxisAspect::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_AxisAspect::*)( const Standard_Boolean  ) >(&Graphic3d_AxisAspect::SetDrawName),
             R"#(None)#"  , py::arg("theToDraw"))
        .def("ToDrawTickmarks",
             (Standard_Boolean (Graphic3d_AxisAspect::*)() const) static_cast<Standard_Boolean (Graphic3d_AxisAspect::*)() const>(&Graphic3d_AxisAspect::ToDrawTickmarks),
             R"#(None)#" )
        .def("SetDrawTickmarks",
             (void (Graphic3d_AxisAspect::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_AxisAspect::*)( const Standard_Boolean  ) >(&Graphic3d_AxisAspect::SetDrawTickmarks),
             R"#(None)#"  , py::arg("theToDraw"))
        .def("ToDrawValues",
             (Standard_Boolean (Graphic3d_AxisAspect::*)() const) static_cast<Standard_Boolean (Graphic3d_AxisAspect::*)() const>(&Graphic3d_AxisAspect::ToDrawValues),
             R"#(None)#" )
        .def("SetDrawValues",
             (void (Graphic3d_AxisAspect::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_AxisAspect::*)( const Standard_Boolean  ) >(&Graphic3d_AxisAspect::SetDrawValues),
             R"#(None)#"  , py::arg("theToDraw"))
        .def("NameColor",
             (const Quantity_Color & (Graphic3d_AxisAspect::*)() const) static_cast<const Quantity_Color & (Graphic3d_AxisAspect::*)() const>(&Graphic3d_AxisAspect::NameColor),
             R"#(None)#" )
        .def("SetNameColor",
             (void (Graphic3d_AxisAspect::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_AxisAspect::*)( const Quantity_Color &  ) >(&Graphic3d_AxisAspect::SetNameColor),
             R"#(None)#"  , py::arg("theColor"))
        .def("Color",
             (const Quantity_Color & (Graphic3d_AxisAspect::*)() const) static_cast<const Quantity_Color & (Graphic3d_AxisAspect::*)() const>(&Graphic3d_AxisAspect::Color),
             R"#(Color of axis and values)#" )
        .def("SetColor",
             (void (Graphic3d_AxisAspect::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_AxisAspect::*)( const Quantity_Color &  ) >(&Graphic3d_AxisAspect::SetColor),
             R"#(Sets color of axis and values)#"  , py::arg("theColor"))
        .def("TickmarksNumber",
             (Standard_Integer (Graphic3d_AxisAspect::*)() const) static_cast<Standard_Integer (Graphic3d_AxisAspect::*)() const>(&Graphic3d_AxisAspect::TickmarksNumber),
             R"#(None)#" )
        .def("SetTickmarksNumber",
             (void (Graphic3d_AxisAspect::*)( const Standard_Integer  ) ) static_cast<void (Graphic3d_AxisAspect::*)( const Standard_Integer  ) >(&Graphic3d_AxisAspect::SetTickmarksNumber),
             R"#(None)#"  , py::arg("theValue"))
        .def("TickmarksLength",
             (Standard_Integer (Graphic3d_AxisAspect::*)() const) static_cast<Standard_Integer (Graphic3d_AxisAspect::*)() const>(&Graphic3d_AxisAspect::TickmarksLength),
             R"#(None)#" )
        .def("SetTickmarksLength",
             (void (Graphic3d_AxisAspect::*)( const Standard_Integer  ) ) static_cast<void (Graphic3d_AxisAspect::*)( const Standard_Integer  ) >(&Graphic3d_AxisAspect::SetTickmarksLength),
             R"#(None)#"  , py::arg("theValue"))
        .def("ValuesOffset",
             (Standard_Integer (Graphic3d_AxisAspect::*)() const) static_cast<Standard_Integer (Graphic3d_AxisAspect::*)() const>(&Graphic3d_AxisAspect::ValuesOffset),
             R"#(None)#" )
        .def("SetValuesOffset",
             (void (Graphic3d_AxisAspect::*)( const Standard_Integer  ) ) static_cast<void (Graphic3d_AxisAspect::*)( const Standard_Integer  ) >(&Graphic3d_AxisAspect::SetValuesOffset),
             R"#(None)#"  , py::arg("theValue"))
        .def("NameOffset",
             (Standard_Integer (Graphic3d_AxisAspect::*)() const) static_cast<Standard_Integer (Graphic3d_AxisAspect::*)() const>(&Graphic3d_AxisAspect::NameOffset),
             R"#(None)#" )
        .def("SetNameOffset",
             (void (Graphic3d_AxisAspect::*)( const Standard_Integer  ) ) static_cast<void (Graphic3d_AxisAspect::*)( const Standard_Integer  ) >(&Graphic3d_AxisAspect::SetNameOffset),
             R"#(None)#"  , py::arg("theValue"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_BSDF , shared_ptr<Graphic3d_BSDF>  >>(m.attr("Graphic3d_BSDF"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Normalize",
             (void (Graphic3d_BSDF::*)() ) static_cast<void (Graphic3d_BSDF::*)() >(&Graphic3d_BSDF::Normalize),
             R"#(Normalizes BSDF components.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("CreateDiffuse_s",
                    (Graphic3d_BSDF (*)(  const NCollection_Vec3<Standard_ShortReal> &  ) ) static_cast<Graphic3d_BSDF (*)(  const NCollection_Vec3<Standard_ShortReal> &  ) >(&Graphic3d_BSDF::CreateDiffuse),
                    R"#(Creates BSDF describing diffuse (Lambertian) surface.)#"  , py::arg("theWeight"))
        .def_static("CreateMetallic_s",
                    (Graphic3d_BSDF (*)(  const NCollection_Vec3<Standard_ShortReal> & ,  const Graphic3d_Fresnel & ,  const Standard_ShortReal  ) ) static_cast<Graphic3d_BSDF (*)(  const NCollection_Vec3<Standard_ShortReal> & ,  const Graphic3d_Fresnel & ,  const Standard_ShortReal  ) >(&Graphic3d_BSDF::CreateMetallic),
                    R"#(Creates BSDF describing polished metallic-like surface.)#"  , py::arg("theWeight"),  py::arg("theFresnel"),  py::arg("theRoughness"))
        .def_static("CreateTransparent_s",
                    (Graphic3d_BSDF (*)(  const NCollection_Vec3<Standard_ShortReal> & ,   const NCollection_Vec3<Standard_ShortReal> & ,  const Standard_ShortReal  ) ) static_cast<Graphic3d_BSDF (*)(  const NCollection_Vec3<Standard_ShortReal> & ,   const NCollection_Vec3<Standard_ShortReal> & ,  const Standard_ShortReal  ) >(&Graphic3d_BSDF::CreateTransparent),
                    R"#(Creates BSDF describing transparent object. Transparent BSDF models simple transparency without refraction (the ray passes straight through the surface).)#"  , py::arg("theWeight"),  py::arg("theAbsorptionColor"),  py::arg("theAbsorptionCoeff"))
        .def_static("CreateGlass_s",
                    (Graphic3d_BSDF (*)(  const NCollection_Vec3<Standard_ShortReal> & ,   const NCollection_Vec3<Standard_ShortReal> & ,  const Standard_ShortReal ,  const Standard_ShortReal  ) ) static_cast<Graphic3d_BSDF (*)(  const NCollection_Vec3<Standard_ShortReal> & ,   const NCollection_Vec3<Standard_ShortReal> & ,  const Standard_ShortReal ,  const Standard_ShortReal  ) >(&Graphic3d_BSDF::CreateGlass),
                    R"#(Creates BSDF describing glass-like object. Glass-like BSDF mixes refraction and reflection effects at grazing angles using physically-based Fresnel dielectric model.)#"  , py::arg("theWeight"),  py::arg("theAbsorptionColor"),  py::arg("theAbsorptionCoeff"),  py::arg("theRefractionIndex"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_BoundBuffer ,opencascade::handle<Graphic3d_BoundBuffer>  , NCollection_Buffer >>(m.attr("Graphic3d_BoundBuffer"))
    // constructors
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAlloc") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_BoundBuffer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_BoundBuffer::*)() const>(&Graphic3d_BoundBuffer::DynamicType),
             R"#(None)#" )
        .def("Init",
             (bool (Graphic3d_BoundBuffer::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<bool (Graphic3d_BoundBuffer::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&Graphic3d_BoundBuffer::Init),
             R"#(Allocates new empty array)#"  , py::arg("theNbBounds"),  py::arg("theHasColors"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_BoundBuffer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_BoundBuffer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Buffer ,opencascade::handle<Graphic3d_Buffer>  , NCollection_Buffer >>(m.attr("Graphic3d_Buffer"))
    // constructors
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAlloc") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_Buffer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_Buffer::*)() const>(&Graphic3d_Buffer::DynamicType),
             R"#(None)#" )
        .def("NbMaxElements",
             (Standard_Integer (Graphic3d_Buffer::*)() const) static_cast<Standard_Integer (Graphic3d_Buffer::*)() const>(&Graphic3d_Buffer::NbMaxElements),
             R"#(Return number of initially allocated elements which can fit into this buffer, while NbElements can be overwritten to smaller value.)#" )
        .def("AttributesArray",
             (const Graphic3d_Attribute * (Graphic3d_Buffer::*)() const) static_cast<const Graphic3d_Attribute * (Graphic3d_Buffer::*)() const>(&Graphic3d_Buffer::AttributesArray),
             R"#(Returns array of attributes definitions)#" )
        .def("Attribute",
             (const Graphic3d_Attribute & (Graphic3d_Buffer::*)( const Standard_Integer  ) const) static_cast<const Graphic3d_Attribute & (Graphic3d_Buffer::*)( const Standard_Integer  ) const>(&Graphic3d_Buffer::Attribute),
             R"#(Returns attribute definition)#"  , py::arg("theAttribIndex"))
        .def("ChangeAttribute",
             (Graphic3d_Attribute & (Graphic3d_Buffer::*)( const Standard_Integer  ) ) static_cast<Graphic3d_Attribute & (Graphic3d_Buffer::*)( const Standard_Integer  ) >(&Graphic3d_Buffer::ChangeAttribute),
             R"#(Returns attribute definition)#"  , py::arg("theAttribIndex"))
        .def("FindAttribute",
             (Standard_Integer (Graphic3d_Buffer::*)( Graphic3d_TypeOfAttribute  ) const) static_cast<Standard_Integer (Graphic3d_Buffer::*)( Graphic3d_TypeOfAttribute  ) const>(&Graphic3d_Buffer::FindAttribute),
             R"#(Find attribute index.)#"  , py::arg("theAttrib"))
        .def("AttributeOffset",
             (Standard_Integer (Graphic3d_Buffer::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Graphic3d_Buffer::*)( const Standard_Integer  ) const>(&Graphic3d_Buffer::AttributeOffset),
             R"#(Returns data offset to specified attribute)#"  , py::arg("theAttribIndex"))
        .def("Data",
             (const Standard_Byte * (Graphic3d_Buffer::*)( const Standard_Integer  ) const) static_cast<const Standard_Byte * (Graphic3d_Buffer::*)( const Standard_Integer  ) const>(&Graphic3d_Buffer::Data),
             R"#(Returns data for specified attribute)#"  , py::arg("theAttribIndex"))
        .def("ChangeData",
             (Standard_Byte * (Graphic3d_Buffer::*)( const Standard_Integer  ) ) static_cast<Standard_Byte * (Graphic3d_Buffer::*)( const Standard_Integer  ) >(&Graphic3d_Buffer::ChangeData),
             R"#(Returns data for specified attribute)#"  , py::arg("theAttribIndex"))
        .def("value",
             (const Standard_Byte * (Graphic3d_Buffer::*)( const Standard_Integer  ) const) static_cast<const Standard_Byte * (Graphic3d_Buffer::*)( const Standard_Integer  ) const>(&Graphic3d_Buffer::value),
             R"#(Access specified element.)#"  , py::arg("theElem"))
        .def("changeValue",
             (Standard_Byte * (Graphic3d_Buffer::*)( const Standard_Integer  ) ) static_cast<Standard_Byte * (Graphic3d_Buffer::*)( const Standard_Integer  ) >(&Graphic3d_Buffer::changeValue),
             R"#(Access specified element.)#"  , py::arg("theElem"))
        .def("ChangeAttributeData",
             (Standard_Byte * (Graphic3d_Buffer::*)( Graphic3d_TypeOfAttribute ,  Standard_Integer & ,  Standard_Size &  ) ) static_cast<Standard_Byte * (Graphic3d_Buffer::*)( Graphic3d_TypeOfAttribute ,  Standard_Integer & ,  Standard_Size &  ) >(&Graphic3d_Buffer::ChangeAttributeData),
             R"#(Return the attribute data with stride size specific to this attribute.)#"  , py::arg("theAttrib"),  py::arg("theAttribIndex"),  py::arg("theAttribStride"))
        .def("AttributeData",
             (const Standard_Byte * (Graphic3d_Buffer::*)( Graphic3d_TypeOfAttribute ,  Standard_Integer & ,  Standard_Size &  ) const) static_cast<const Standard_Byte * (Graphic3d_Buffer::*)( Graphic3d_TypeOfAttribute ,  Standard_Integer & ,  Standard_Size &  ) const>(&Graphic3d_Buffer::AttributeData),
             R"#(Return the attribute data with stride size specific to this attribute.)#"  , py::arg("theAttrib"),  py::arg("theAttribIndex"),  py::arg("theAttribStride"))
        .def("release",
             (void (Graphic3d_Buffer::*)() ) static_cast<void (Graphic3d_Buffer::*)() >(&Graphic3d_Buffer::release),
             R"#(Release buffer.)#" )
        .def("Init",
             (bool (Graphic3d_Buffer::*)( const Standard_Integer ,  const Graphic3d_Attribute * ,  const Standard_Integer  ) ) static_cast<bool (Graphic3d_Buffer::*)( const Standard_Integer ,  const Graphic3d_Attribute * ,  const Standard_Integer  ) >(&Graphic3d_Buffer::Init),
             R"#(Allocates new empty array)#"  , py::arg("theNbElems"),  py::arg("theAttribs"),  py::arg("theNbAttribs"))
        .def("Init",
             (bool (Graphic3d_Buffer::*)( const Standard_Integer ,   const NCollection_Array1<Graphic3d_Attribute> &  ) ) static_cast<bool (Graphic3d_Buffer::*)( const Standard_Integer ,   const NCollection_Array1<Graphic3d_Attribute> &  ) >(&Graphic3d_Buffer::Init),
             R"#(Allocates new empty array)#"  , py::arg("theNbElems"),  py::arg("theAttribs"))
        .def("IsInterleaved",
             (Standard_Boolean (Graphic3d_Buffer::*)() const) static_cast<Standard_Boolean (Graphic3d_Buffer::*)() const>(&Graphic3d_Buffer::IsInterleaved),
             R"#(Flag indicating that attributes in the buffer are interleaved; TRUE by default. Requires sub-classing for creating a non-interleaved buffer (advanced usage).)#" )
        .def("IsMutable",
             (Standard_Boolean (Graphic3d_Buffer::*)() const) static_cast<Standard_Boolean (Graphic3d_Buffer::*)() const>(&Graphic3d_Buffer::IsMutable),
             R"#(Return TRUE if data can be invalidated; FALSE by default. Requires sub-classing for creating a mutable buffer (advanced usage).)#" )
        .def("InvalidatedRange",
             (Graphic3d_BufferRange (Graphic3d_Buffer::*)() const) static_cast<Graphic3d_BufferRange (Graphic3d_Buffer::*)() const>(&Graphic3d_Buffer::InvalidatedRange),
             R"#(Return invalidated range; EMPTY by default. Requires sub-classing for creating a mutable buffer (advanced usage).)#" )
        .def("Validate",
             (void (Graphic3d_Buffer::*)() ) static_cast<void (Graphic3d_Buffer::*)() >(&Graphic3d_Buffer::Validate),
             R"#(Reset invalidated range. Requires sub-classing for creating a mutable buffer (advanced usage).)#" )
        .def("Invalidate",
             (void (Graphic3d_Buffer::*)() ) static_cast<void (Graphic3d_Buffer::*)() >(&Graphic3d_Buffer::Invalidate),
             R"#(Invalidate entire buffer.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_Buffer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_Buffer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_BufferRange , shared_ptr<Graphic3d_BufferRange>  >>(m.attr("Graphic3d_BufferRange"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< Standard_Integer,Standard_Integer >()  , py::arg("theStart"),  py::arg("theLength") )
    // custom constructors
    // methods
        .def("IsEmpty",
             (Standard_Boolean (Graphic3d_BufferRange::*)() const) static_cast<Standard_Boolean (Graphic3d_BufferRange::*)() const>(&Graphic3d_BufferRange::IsEmpty),
             R"#(Return TRUE if range is empty.)#" )
        .def("Upper",
             (Standard_Integer (Graphic3d_BufferRange::*)() const) static_cast<Standard_Integer (Graphic3d_BufferRange::*)() const>(&Graphic3d_BufferRange::Upper),
             R"#(Return the Upper element within the range)#" )
        .def("Clear",
             (void (Graphic3d_BufferRange::*)() ) static_cast<void (Graphic3d_BufferRange::*)() >(&Graphic3d_BufferRange::Clear),
             R"#(Clear the range.)#" )
        .def("Unite",
             (void (Graphic3d_BufferRange::*)( const Graphic3d_BufferRange &  ) ) static_cast<void (Graphic3d_BufferRange::*)( const Graphic3d_BufferRange &  ) >(&Graphic3d_BufferRange::Unite),
             R"#(Add another range to this one.)#"  , py::arg("theRange"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_BvhCStructureSet , shared_ptr<Graphic3d_BvhCStructureSet>  >>(m.attr("Graphic3d_BvhCStructureSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_BvhCStructureSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_BvhCStructureSet::*)() const>(&Graphic3d_BvhCStructureSet::DynamicType),
             R"#(None)#" )
        .def("Size",
             (Standard_Integer (Graphic3d_BvhCStructureSet::*)() const) static_cast<Standard_Integer (Graphic3d_BvhCStructureSet::*)() const>(&Graphic3d_BvhCStructureSet::Size),
             R"#(Returns total number of structures.)#" )
        .def("Box",
             (Graphic3d_BndBox3d (Graphic3d_BvhCStructureSet::*)( const Standard_Integer  ) const) static_cast<Graphic3d_BndBox3d (Graphic3d_BvhCStructureSet::*)( const Standard_Integer  ) const>(&Graphic3d_BvhCStructureSet::Box),
             R"#(Returns AABB of the structure.)#"  , py::arg("theIdx"))
        .def("Center",
             (Standard_Real (Graphic3d_BvhCStructureSet::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (Graphic3d_BvhCStructureSet::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Graphic3d_BvhCStructureSet::Center),
             R"#(Calculates center of the AABB along given axis.)#"  , py::arg("theIdx"),  py::arg("theAxis"))
        .def("Swap",
             (void (Graphic3d_BvhCStructureSet::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Graphic3d_BvhCStructureSet::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Graphic3d_BvhCStructureSet::Swap),
             R"#(Swaps structures with the given indices.)#"  , py::arg("theIdx1"),  py::arg("theIdx2"))
        .def("Add",
             (Standard_Boolean (Graphic3d_BvhCStructureSet::*)( const Graphic3d_CStructure *  ) ) static_cast<Standard_Boolean (Graphic3d_BvhCStructureSet::*)( const Graphic3d_CStructure *  ) >(&Graphic3d_BvhCStructureSet::Add),
             R"#(Adds structure to the set.)#"  , py::arg("theStruct"))
        .def("Remove",
             (Standard_Boolean (Graphic3d_BvhCStructureSet::*)( const Graphic3d_CStructure *  ) ) static_cast<Standard_Boolean (Graphic3d_BvhCStructureSet::*)( const Graphic3d_CStructure *  ) >(&Graphic3d_BvhCStructureSet::Remove),
             R"#(Removes the given structure from the set.)#"  , py::arg("theStruct"))
        .def("Clear",
             (void (Graphic3d_BvhCStructureSet::*)() ) static_cast<void (Graphic3d_BvhCStructureSet::*)() >(&Graphic3d_BvhCStructureSet::Clear),
             R"#(Cleans the whole primitive set.)#" )
        .def("GetStructureById",
             (const Graphic3d_CStructure * (Graphic3d_BvhCStructureSet::*)( Standard_Integer  ) ) static_cast<const Graphic3d_CStructure * (Graphic3d_BvhCStructureSet::*)( Standard_Integer  ) >(&Graphic3d_BvhCStructureSet::GetStructureById),
             R"#(Returns the structure corresponding to the given ID.)#"  , py::arg("theId"))
        .def("Structures",
             (const NCollection_IndexedMap<const Graphic3d_CStructure *> & (Graphic3d_BvhCStructureSet::*)() const) static_cast<const NCollection_IndexedMap<const Graphic3d_CStructure *> & (Graphic3d_BvhCStructureSet::*)() const>(&Graphic3d_BvhCStructureSet::Structures),
             R"#(Access directly a collection of structures.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_BvhCStructureSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_BvhCStructureSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_BvhCStructureSetTrsfPers , shared_ptr<Graphic3d_BvhCStructureSetTrsfPers>  >>(m.attr("Graphic3d_BvhCStructureSetTrsfPers"))
    // constructors
        .def(py::init< const opencascade::handle<Select3D_BVHBuilder3d> & >()  , py::arg("theBuilder") )
    // custom constructors
    // methods
        .def("Size",
             (Standard_Integer (Graphic3d_BvhCStructureSetTrsfPers::*)() const) static_cast<Standard_Integer (Graphic3d_BvhCStructureSetTrsfPers::*)() const>(&Graphic3d_BvhCStructureSetTrsfPers::Size),
             R"#(Returns total number of structures.)#" )
        .def("Box",
             (Graphic3d_BndBox3d (Graphic3d_BvhCStructureSetTrsfPers::*)( const Standard_Integer  ) const) static_cast<Graphic3d_BndBox3d (Graphic3d_BvhCStructureSetTrsfPers::*)( const Standard_Integer  ) const>(&Graphic3d_BvhCStructureSetTrsfPers::Box),
             R"#(Returns AABB of the structure.)#"  , py::arg("theIdx"))
        .def("Center",
             (Standard_Real (Graphic3d_BvhCStructureSetTrsfPers::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (Graphic3d_BvhCStructureSetTrsfPers::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Graphic3d_BvhCStructureSetTrsfPers::Center),
             R"#(Calculates center of the AABB along given axis.)#"  , py::arg("theIdx"),  py::arg("theAxis"))
        .def("Swap",
             (void (Graphic3d_BvhCStructureSetTrsfPers::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Graphic3d_BvhCStructureSetTrsfPers::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Graphic3d_BvhCStructureSetTrsfPers::Swap),
             R"#(Swaps structures with the given indices.)#"  , py::arg("theIdx1"),  py::arg("theIdx2"))
        .def("Add",
             (Standard_Boolean (Graphic3d_BvhCStructureSetTrsfPers::*)( const Graphic3d_CStructure *  ) ) static_cast<Standard_Boolean (Graphic3d_BvhCStructureSetTrsfPers::*)( const Graphic3d_CStructure *  ) >(&Graphic3d_BvhCStructureSetTrsfPers::Add),
             R"#(Adds structure to the set.)#"  , py::arg("theStruct"))
        .def("Remove",
             (Standard_Boolean (Graphic3d_BvhCStructureSetTrsfPers::*)( const Graphic3d_CStructure *  ) ) static_cast<Standard_Boolean (Graphic3d_BvhCStructureSetTrsfPers::*)( const Graphic3d_CStructure *  ) >(&Graphic3d_BvhCStructureSetTrsfPers::Remove),
             R"#(Removes the given structure from the set.)#"  , py::arg("theStruct"))
        .def("Clear",
             (void (Graphic3d_BvhCStructureSetTrsfPers::*)() ) static_cast<void (Graphic3d_BvhCStructureSetTrsfPers::*)() >(&Graphic3d_BvhCStructureSetTrsfPers::Clear),
             R"#(Cleans the whole primitive set.)#" )
        .def("GetStructureById",
             (const Graphic3d_CStructure * (Graphic3d_BvhCStructureSetTrsfPers::*)( Standard_Integer  ) ) static_cast<const Graphic3d_CStructure * (Graphic3d_BvhCStructureSetTrsfPers::*)( Standard_Integer  ) >(&Graphic3d_BvhCStructureSetTrsfPers::GetStructureById),
             R"#(Returns the structure corresponding to the given ID.)#"  , py::arg("theId"))
        .def("Structures",
             (const NCollection_IndexedMap<const Graphic3d_CStructure *> & (Graphic3d_BvhCStructureSetTrsfPers::*)() const) static_cast<const NCollection_IndexedMap<const Graphic3d_CStructure *> & (Graphic3d_BvhCStructureSetTrsfPers::*)() const>(&Graphic3d_BvhCStructureSetTrsfPers::Structures),
             R"#(Access directly a collection of structures.)#" )
        .def("MarkDirty",
             (void (Graphic3d_BvhCStructureSetTrsfPers::*)() ) static_cast<void (Graphic3d_BvhCStructureSetTrsfPers::*)() >(&Graphic3d_BvhCStructureSetTrsfPers::MarkDirty),
             R"#(Marks object state as outdated (needs BVH rebuilding).)#" )
        .def("BVH",
             (const opencascade::handle<BVH_Tree<Standard_Real, 3> > & (Graphic3d_BvhCStructureSetTrsfPers::*)( const opencascade::handle<Graphic3d_Camera> & ,   const NCollection_Mat4<Standard_Real> & ,   const NCollection_Mat4<Standard_Real> & ,  const Standard_Integer ,  const Standard_Integer ,  const Graphic3d_WorldViewProjState &  ) ) static_cast<const opencascade::handle<BVH_Tree<Standard_Real, 3> > & (Graphic3d_BvhCStructureSetTrsfPers::*)( const opencascade::handle<Graphic3d_Camera> & ,   const NCollection_Mat4<Standard_Real> & ,   const NCollection_Mat4<Standard_Real> & ,  const Standard_Integer ,  const Standard_Integer ,  const Graphic3d_WorldViewProjState &  ) >(&Graphic3d_BvhCStructureSetTrsfPers::BVH),
             R"#(Returns BVH tree for the given world view projection (builds it if necessary).)#"  , py::arg("theCamera"),  py::arg("theProjectionMatrix"),  py::arg("theWorldViewMatrix"),  py::arg("theViewportWidth"),  py::arg("theViewportHeight"),  py::arg("theWVPState"))
        .def("Builder",
             (const opencascade::handle<Select3D_BVHBuilder3d> & (Graphic3d_BvhCStructureSetTrsfPers::*)() const) static_cast<const opencascade::handle<Select3D_BVHBuilder3d> & (Graphic3d_BvhCStructureSetTrsfPers::*)() const>(&Graphic3d_BvhCStructureSetTrsfPers::Builder),
             R"#(Returns builder for bottom-level BVH.)#" )
        .def("SetBuilder",
             (void (Graphic3d_BvhCStructureSetTrsfPers::*)( const opencascade::handle<Select3D_BVHBuilder3d> &  ) ) static_cast<void (Graphic3d_BvhCStructureSetTrsfPers::*)( const opencascade::handle<Select3D_BVHBuilder3d> &  ) >(&Graphic3d_BvhCStructureSetTrsfPers::SetBuilder),
             R"#(Assigns builder for bottom-level BVH.)#"  , py::arg("theBuilder"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_CLight ,opencascade::handle<Graphic3d_CLight>  , Standard_Transient >>(m.attr("Graphic3d_CLight"))
    // constructors
        .def(py::init< Graphic3d_TypeOfLightSource >()  , py::arg("theType") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_CLight::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::DynamicType),
             R"#(None)#" )
        .def("Type",
             (Graphic3d_TypeOfLightSource (Graphic3d_CLight::*)() const) static_cast<Graphic3d_TypeOfLightSource (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::Type),
             R"#(Returns the Type of the Light, cannot be changed after object construction.)#" )
        .def("Name",
             (const TCollection_AsciiString & (Graphic3d_CLight::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::Name),
             R"#(Returns light source name; empty string by default.)#" )
        .def("SetName",
             (void (Graphic3d_CLight::*)( const TCollection_AsciiString &  ) ) static_cast<void (Graphic3d_CLight::*)( const TCollection_AsciiString &  ) >(&Graphic3d_CLight::SetName),
             R"#(Sets light source name.)#"  , py::arg("theName"))
        .def("Color",
             (const Quantity_Color & (Graphic3d_CLight::*)() const) static_cast<const Quantity_Color & (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::Color),
             R"#(Returns the color of the light source; WHITE by default.)#" )
        .def("SetColor",
             (void (Graphic3d_CLight::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_CLight::*)( const Quantity_Color &  ) >(&Graphic3d_CLight::SetColor),
             R"#(Defines the color of a light source by giving the basic color.)#"  , py::arg("theColor"))
        .def("IsEnabled",
             (Standard_Boolean (Graphic3d_CLight::*)() const) static_cast<Standard_Boolean (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::IsEnabled),
             R"#(Check that the light source is turned on; TRUE by default. This flag affects all occurrences of light sources, where it was registered and activated; so that it is possible defining an active light in View which is actually in disabled state.)#" )
        .def("SetEnabled",
             (void (Graphic3d_CLight::*)( Standard_Boolean  ) ) static_cast<void (Graphic3d_CLight::*)( Standard_Boolean  ) >(&Graphic3d_CLight::SetEnabled),
             R"#(Change enabled state of the light state. This call does not remove or deactivate light source in Views/Viewers; instead it turns it OFF so that it just have no effect.)#"  , py::arg("theIsOn"))
        .def("IsHeadlight",
             (Standard_Boolean (Graphic3d_CLight::*)() const) static_cast<Standard_Boolean (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::IsHeadlight),
             R"#(Returns true if the light is a headlight; FALSE by default. Headlight flag means that light position/direction are defined not in a World coordinate system, but relative to the camera orientation.)#" )
        .def("Headlight",
             (Standard_Boolean (Graphic3d_CLight::*)() const) static_cast<Standard_Boolean (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::Headlight),
             R"#(Alias for IsHeadlight().)#" )
        .def("SetHeadlight",
             (void (Graphic3d_CLight::*)( Standard_Boolean  ) ) static_cast<void (Graphic3d_CLight::*)( Standard_Boolean  ) >(&Graphic3d_CLight::SetHeadlight),
             R"#(Setup headlight flag.)#"  , py::arg("theValue"))
        .def("Position",
             (const gp_Pnt & (Graphic3d_CLight::*)() const) static_cast<const gp_Pnt & (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::Position),
             R"#(Returns location of positional/spot light; (0, 0, 0) by default.)#" )
        .def("SetPosition",
             (void (Graphic3d_CLight::*)( const gp_Pnt &  ) ) static_cast<void (Graphic3d_CLight::*)( const gp_Pnt &  ) >(&Graphic3d_CLight::SetPosition),
             R"#(Setup location of positional/spot light.)#"  , py::arg("thePosition"))
        .def("SetPosition",
             (void (Graphic3d_CLight::*)( Standard_Real ,  Standard_Real ,  Standard_Real  ) ) static_cast<void (Graphic3d_CLight::*)( Standard_Real ,  Standard_Real ,  Standard_Real  ) >(&Graphic3d_CLight::SetPosition),
             R"#(Setup location of positional/spot light.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("ConstAttenuation",
             (Standard_ShortReal (Graphic3d_CLight::*)() const) static_cast<Standard_ShortReal (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::ConstAttenuation),
             R"#(Returns constant attenuation factor of positional/spot light source; 1.0f by default. Distance attenuation factors of reducing positional/spot light intensity depending on the distance from its position:)#" )
        .def("LinearAttenuation",
             (Standard_ShortReal (Graphic3d_CLight::*)() const) static_cast<Standard_ShortReal (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::LinearAttenuation),
             R"#(Returns linear attenuation factor of positional/spot light source; 0.0 by default. Distance attenuation factors of reducing positional/spot light intensity depending on the distance from its position:)#" )
        .def("SetAttenuation",
             (void (Graphic3d_CLight::*)( Standard_ShortReal ,  Standard_ShortReal  ) ) static_cast<void (Graphic3d_CLight::*)( Standard_ShortReal ,  Standard_ShortReal  ) >(&Graphic3d_CLight::SetAttenuation),
             R"#(Defines the coefficients of attenuation; values should be >= 0.0 and their summ should not be equal to 0.)#"  , py::arg("theConstAttenuation"),  py::arg("theLinearAttenuation"))
        .def("Direction",
             (gp_Dir (Graphic3d_CLight::*)() const) static_cast<gp_Dir (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::Direction),
             R"#(Returns direction of directional/spot light.)#" )
        .def("SetDirection",
             (void (Graphic3d_CLight::*)( const gp_Dir &  ) ) static_cast<void (Graphic3d_CLight::*)( const gp_Dir &  ) >(&Graphic3d_CLight::SetDirection),
             R"#(Sets direction of directional/spot light.)#"  , py::arg("theDir"))
        .def("SetDirection",
             (void (Graphic3d_CLight::*)( Standard_Real ,  Standard_Real ,  Standard_Real  ) ) static_cast<void (Graphic3d_CLight::*)( Standard_Real ,  Standard_Real ,  Standard_Real  ) >(&Graphic3d_CLight::SetDirection),
             R"#(Sets direction of directional/spot light.)#"  , py::arg("theVx"),  py::arg("theVy"),  py::arg("theVz"))
        .def("Angle",
             (Standard_ShortReal (Graphic3d_CLight::*)() const) static_cast<Standard_ShortReal (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::Angle),
             R"#(Returns an angle in radians of the cone created by the spot; 30 degrees by default.)#" )
        .def("SetAngle",
             (void (Graphic3d_CLight::*)( Standard_ShortReal  ) ) static_cast<void (Graphic3d_CLight::*)( Standard_ShortReal  ) >(&Graphic3d_CLight::SetAngle),
             R"#(Angle in radians of the cone created by the spot, should be within range (0.0, M_PI).)#"  , py::arg("theAngle"))
        .def("Concentration",
             (Standard_ShortReal (Graphic3d_CLight::*)() const) static_cast<Standard_ShortReal (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::Concentration),
             R"#(Returns intensity distribution of the spot light, within [0.0, 1.0] range; 1.0 by default. This coefficient should be converted into spotlight exponent within [0.0, 128.0] range: The concentration factor determines the dispersion of the light on the surface, the default value (1.0) corresponds to a minimum of dispersion.)#" )
        .def("SetConcentration",
             (void (Graphic3d_CLight::*)( Standard_ShortReal  ) ) static_cast<void (Graphic3d_CLight::*)( Standard_ShortReal  ) >(&Graphic3d_CLight::SetConcentration),
             R"#(Defines the coefficient of concentration; value should be within range [0.0, 1.0].)#"  , py::arg("theConcentration"))
        .def("Intensity",
             (Standard_ShortReal (Graphic3d_CLight::*)() const) static_cast<Standard_ShortReal (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::Intensity),
             R"#(Returns the intensity of light source; 1.0 by default.)#" )
        .def("SetIntensity",
             (void (Graphic3d_CLight::*)( Standard_ShortReal  ) ) static_cast<void (Graphic3d_CLight::*)( Standard_ShortReal  ) >(&Graphic3d_CLight::SetIntensity),
             R"#(Modifies the intensity of light source, which should be > 0.0.)#"  , py::arg("theValue"))
        .def("Smoothness",
             (Standard_ShortReal (Graphic3d_CLight::*)() const) static_cast<Standard_ShortReal (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::Smoothness),
             R"#(Returns the smoothness of light source (either smoothing angle for directional light or smoothing radius in case of positional light); 0.0 by default.)#" )
        .def("SetSmoothRadius",
             (void (Graphic3d_CLight::*)( Standard_ShortReal  ) ) static_cast<void (Graphic3d_CLight::*)( Standard_ShortReal  ) >(&Graphic3d_CLight::SetSmoothRadius),
             R"#(Modifies the smoothing radius of positional/spot light; should be >= 0.0.)#"  , py::arg("theValue"))
        .def("SetSmoothAngle",
             (void (Graphic3d_CLight::*)( Standard_ShortReal  ) ) static_cast<void (Graphic3d_CLight::*)( Standard_ShortReal  ) >(&Graphic3d_CLight::SetSmoothAngle),
             R"#(Modifies the smoothing angle (in radians) of directional light source; should be within range [0.0, M_PI/2].)#"  , py::arg("theValue"))
        .def("GetId",
             (const TCollection_AsciiString & (Graphic3d_CLight::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::GetId),
             R"#(Returns light resource identifier string)#" )
        .def("PackedParams",
             (const Graphic3d_Vec4 & (Graphic3d_CLight::*)() const) static_cast<const Graphic3d_Vec4 & (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::PackedParams),
             R"#(Packed light parameters.)#" )
        .def("PackedColor",
             (const Graphic3d_Vec4 & (Graphic3d_CLight::*)() const) static_cast<const Graphic3d_Vec4 & (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::PackedColor),
             R"#(Returns the color of the light source with dummy Alpha component, which should be ignored.)#" )
        .def("PackedDirection",
             (const Graphic3d_Vec4 & (Graphic3d_CLight::*)() const) static_cast<const Graphic3d_Vec4 & (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::PackedDirection),
             R"#(Returns direction of directional/spot light.)#" )
        .def("Revision",
             (Standard_Size (Graphic3d_CLight::*)() const) static_cast<Standard_Size (Graphic3d_CLight::*)() const>(&Graphic3d_CLight::Revision),
             R"#(Returns modification counter)#" )
    // methods using call by reference i.s.o. return
        .def("Position",
             []( Graphic3d_CLight &self   ){ Standard_Real  theX; Standard_Real  theY; Standard_Real  theZ; self.Position(theX,theY,theZ); return std::make_tuple(theX,theY,theZ); },
             R"#(Returns location of positional/spot light.)#" )
        .def("Attenuation",
             []( Graphic3d_CLight &self   ){ Standard_Real  theConstAttenuation; Standard_Real  theLinearAttenuation; self.Attenuation(theConstAttenuation,theLinearAttenuation); return std::make_tuple(theConstAttenuation,theLinearAttenuation); },
             R"#(Returns the attenuation factors.)#" )
        .def("Direction",
             []( Graphic3d_CLight &self   ){ Standard_Real  theVx; Standard_Real  theVy; Standard_Real  theVz; self.Direction(theVx,theVy,theVz); return std::make_tuple(theVx,theVy,theVz); },
             R"#(Returns the theVx, theVy, theVz direction of the light source.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_CLight::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_CLight::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_CStructure ,opencascade::handle<Graphic3d_CStructure> ,Py_Graphic3d_CStructure , Standard_Transient >>(m.attr("Graphic3d_CStructure"))
    // constructors
    // custom constructors
    // methods
        .def("GraphicDriver",
             (const opencascade::handle<Graphic3d_GraphicDriver> & (Graphic3d_CStructure::*)() const) static_cast<const opencascade::handle<Graphic3d_GraphicDriver> & (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::GraphicDriver),
             R"#(Returns graphic driver created this structure)#" )
        .def("Groups",
             (const Graphic3d_SequenceOfGroup & (Graphic3d_CStructure::*)() const) static_cast<const Graphic3d_SequenceOfGroup & (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::Groups),
             R"#(Returns graphic groups)#" )
        .def("Transformation",
             (const opencascade::handle<Geom_Transformation> & (Graphic3d_CStructure::*)() const) static_cast<const opencascade::handle<Geom_Transformation> & (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::Transformation),
             R"#(Return transformation.)#" )
        .def("SetTransformation",
             (void (Graphic3d_CStructure::*)( const opencascade::handle<Geom_Transformation> &  ) ) static_cast<void (Graphic3d_CStructure::*)( const opencascade::handle<Geom_Transformation> &  ) >(&Graphic3d_CStructure::SetTransformation),
             R"#(Assign transformation.)#"  , py::arg("theTrsf"))
        .def("TransformPersistence",
             (const opencascade::handle<Graphic3d_TransformPers> & (Graphic3d_CStructure::*)() const) static_cast<const opencascade::handle<Graphic3d_TransformPers> & (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::TransformPersistence),
             R"#(Return transformation persistence.)#" )
        .def("SetTransformPersistence",
             (void (Graphic3d_CStructure::*)( const opencascade::handle<Graphic3d_TransformPers> &  ) ) static_cast<void (Graphic3d_CStructure::*)( const opencascade::handle<Graphic3d_TransformPers> &  ) >(&Graphic3d_CStructure::SetTransformPersistence),
             R"#(Set transformation persistence.)#"  , py::arg("theTrsfPers"))
        .def("ClipPlanes",
             (const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (Graphic3d_CStructure::*)() const) static_cast<const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::ClipPlanes),
             R"#(Returns associated clip planes)#" )
        .def("SetClipPlanes",
             (void (Graphic3d_CStructure::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) ) static_cast<void (Graphic3d_CStructure::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) >(&Graphic3d_CStructure::SetClipPlanes),
             R"#(Pass clip planes to the associated graphic driver structure)#"  , py::arg("thePlanes"))
        .def("BoundingBox",
             (const Graphic3d_BndBox3d & (Graphic3d_CStructure::*)() const) static_cast<const Graphic3d_BndBox3d & (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::BoundingBox),
             R"#(Returns bounding box of this presentation)#" )
        .def("ChangeBoundingBox",
             (Graphic3d_BndBox3d & (Graphic3d_CStructure::*)() ) static_cast<Graphic3d_BndBox3d & (Graphic3d_CStructure::*)() >(&Graphic3d_CStructure::ChangeBoundingBox),
             R"#(Returns bounding box of this presentation without transformation matrix applied)#" )
        .def("IsVisible",
             (bool (Graphic3d_CStructure::*)() const) static_cast<bool (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::IsVisible),
             R"#(Return structure visibility flag)#" )
        .def("IsVisible",
             (bool (Graphic3d_CStructure::*)( const Standard_Integer  ) const) static_cast<bool (Graphic3d_CStructure::*)( const Standard_Integer  ) const>(&Graphic3d_CStructure::IsVisible),
             R"#(Return structure visibility considering both View Affinity and global visibility state.)#"  , py::arg("theViewId"))
        .def("SetZLayer",
             (void (Graphic3d_CStructure::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (Graphic3d_CStructure::*)( const Graphic3d_ZLayerId  ) >(&Graphic3d_CStructure::SetZLayer),
             R"#(Set z layer ID to display the structure in specified layer)#"  , py::arg("theLayerIndex"))
        .def("ZLayer",
             (Graphic3d_ZLayerId (Graphic3d_CStructure::*)() const) static_cast<Graphic3d_ZLayerId (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::ZLayer),
             R"#(Get z layer ID)#" )
        .def("HighlightStyle",
             (const opencascade::handle<Graphic3d_PresentationAttributes> & (Graphic3d_CStructure::*)() const) static_cast<const opencascade::handle<Graphic3d_PresentationAttributes> & (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::HighlightStyle),
             R"#(Returns valid handle to highlight style of the structure in case if highlight flag is set to true)#" )
        .def("IsCulled",
             (Standard_Boolean (Graphic3d_CStructure::*)() const) static_cast<Standard_Boolean (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::IsCulled),
             R"#(Returns FALSE if the structure hits the current view volume, otherwise returns TRUE.)#" )
        .def("SetCulled",
             (void (Graphic3d_CStructure::*)( Standard_Boolean  ) const) static_cast<void (Graphic3d_CStructure::*)( Standard_Boolean  ) const>(&Graphic3d_CStructure::SetCulled),
             R"#(Marks structure as culled/not culled - note that IsAlwaysRendered() is ignored here!)#"  , py::arg("theIsCulled"))
        .def("MarkAsNotCulled",
             (void (Graphic3d_CStructure::*)() const) static_cast<void (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::MarkAsNotCulled),
             R"#(Marks structure as overlapping the current view volume one. The method is called during traverse of BVH tree.)#" )
        .def("BndBoxClipCheck",
             (Standard_Boolean (Graphic3d_CStructure::*)() const) static_cast<Standard_Boolean (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::BndBoxClipCheck),
             R"#(Returns whether check of object's bounding box clipping is enabled before drawing of object; TRUE by default.)#" )
        .def("SetBndBoxClipCheck",
             (void (Graphic3d_CStructure::*)( Standard_Boolean  ) ) static_cast<void (Graphic3d_CStructure::*)( Standard_Boolean  ) >(&Graphic3d_CStructure::SetBndBoxClipCheck),
             R"#(Enable/disable check of object's bounding box clipping before drawing of object.)#"  , py::arg("theBndBoxClipCheck"))
        .def("IsAlwaysRendered",
             (Standard_Boolean (Graphic3d_CStructure::*)() const) static_cast<Standard_Boolean (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::IsAlwaysRendered),
             R"#(Checks if the structure should be included into BVH tree or not.)#" )
        .def("OnVisibilityChanged",
             (void (Graphic3d_CStructure::*)() ) static_cast<void (Graphic3d_CStructure::*)() >(&Graphic3d_CStructure::OnVisibilityChanged),
             R"#(Update structure visibility state)#" )
        .def("Clear",
             (void (Graphic3d_CStructure::*)() ) static_cast<void (Graphic3d_CStructure::*)() >(&Graphic3d_CStructure::Clear),
             R"#(Clear graphic data)#" )
        .def("Connect",
             (void (Graphic3d_CStructure::*)( Graphic3d_CStructure &  ) ) static_cast<void (Graphic3d_CStructure::*)( Graphic3d_CStructure &  ) >(&Graphic3d_CStructure::Connect),
             R"#(Connect other structure to this one)#"  , py::arg("theStructure"))
        .def("Disconnect",
             (void (Graphic3d_CStructure::*)( Graphic3d_CStructure &  ) ) static_cast<void (Graphic3d_CStructure::*)( Graphic3d_CStructure &  ) >(&Graphic3d_CStructure::Disconnect),
             R"#(Disconnect other structure to this one)#"  , py::arg("theStructure"))
        .def("GraphicHighlight",
             (void (Graphic3d_CStructure::*)( const opencascade::handle<Graphic3d_PresentationAttributes> &  ) ) static_cast<void (Graphic3d_CStructure::*)( const opencascade::handle<Graphic3d_PresentationAttributes> &  ) >(&Graphic3d_CStructure::GraphicHighlight),
             R"#(Highlights structure with the given style)#"  , py::arg("theStyle"))
        .def("GraphicUnhighlight",
             (void (Graphic3d_CStructure::*)() ) static_cast<void (Graphic3d_CStructure::*)() >(&Graphic3d_CStructure::GraphicUnhighlight),
             R"#(Unhighlights the structure and invalidates pointer to structure's highlight style)#" )
        .def("ShadowLink",
             (opencascade::handle<Graphic3d_CStructure> (Graphic3d_CStructure::*)( const opencascade::handle<Graphic3d_StructureManager> &  ) const) static_cast<opencascade::handle<Graphic3d_CStructure> (Graphic3d_CStructure::*)( const opencascade::handle<Graphic3d_StructureManager> &  ) const>(&Graphic3d_CStructure::ShadowLink),
             R"#(Create shadow link to this structure)#"  , py::arg("theManager"))
        .def("NewGroup",
             (opencascade::handle<Graphic3d_Group> (Graphic3d_CStructure::*)( const opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<opencascade::handle<Graphic3d_Group> (Graphic3d_CStructure::*)( const opencascade::handle<Graphic3d_Structure> &  ) >(&Graphic3d_CStructure::NewGroup),
             R"#(Create new group within this structure)#"  , py::arg("theStruct"))
        .def("RemoveGroup",
             (void (Graphic3d_CStructure::*)( const opencascade::handle<Graphic3d_Group> &  ) ) static_cast<void (Graphic3d_CStructure::*)( const opencascade::handle<Graphic3d_Group> &  ) >(&Graphic3d_CStructure::RemoveGroup),
             R"#(Remove group from this structure)#"  , py::arg("theGroup"))
        .def("updateLayerTransformation",
             (void (Graphic3d_CStructure::*)() ) static_cast<void (Graphic3d_CStructure::*)() >(&Graphic3d_CStructure::updateLayerTransformation),
             R"#(Update render transformation matrix.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_CStructure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_CStructure::*)() const>(&Graphic3d_CStructure::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_CStructure::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_CStructure::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_CTexture , shared_ptr<Graphic3d_CTexture>  >>(m.attr("Graphic3d_CTexture"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Camera ,opencascade::handle<Graphic3d_Camera>  , Standard_Transient >>(m.attr("Graphic3d_Camera"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Graphic3d_Camera> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("CopyMappingData",
             (void (Graphic3d_Camera::*)( const opencascade::handle<Graphic3d_Camera> &  ) ) static_cast<void (Graphic3d_Camera::*)( const opencascade::handle<Graphic3d_Camera> &  ) >(&Graphic3d_Camera::CopyMappingData),
             R"#(Initialize mapping related parameters from other camera handle.)#"  , py::arg("theOtherCamera"))
        .def("CopyOrientationData",
             (void (Graphic3d_Camera::*)( const opencascade::handle<Graphic3d_Camera> &  ) ) static_cast<void (Graphic3d_Camera::*)( const opencascade::handle<Graphic3d_Camera> &  ) >(&Graphic3d_Camera::CopyOrientationData),
             R"#(Initialize orientation related parameters from other camera handle.)#"  , py::arg("theOtherCamera"))
        .def("Copy",
             (void (Graphic3d_Camera::*)( const opencascade::handle<Graphic3d_Camera> &  ) ) static_cast<void (Graphic3d_Camera::*)( const opencascade::handle<Graphic3d_Camera> &  ) >(&Graphic3d_Camera::Copy),
             R"#(Copy properties of another camera.)#"  , py::arg("theOther"))
        .def("Direction",
             (const gp_Dir & (Graphic3d_Camera::*)() const) static_cast<const gp_Dir & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::Direction),
             R"#(Get camera look direction.)#" )
        .def("SetDirectionFromEye",
             (void (Graphic3d_Camera::*)( const gp_Dir &  ) ) static_cast<void (Graphic3d_Camera::*)( const gp_Dir &  ) >(&Graphic3d_Camera::SetDirectionFromEye),
             R"#(Sets camera look direction preserving the current Eye() position. WARNING! This method does NOT verify that the current Up() vector is orthogonal to the new Direction.)#"  , py::arg("theDir"))
        .def("SetDirection",
             (void (Graphic3d_Camera::*)( const gp_Dir &  ) ) static_cast<void (Graphic3d_Camera::*)( const gp_Dir &  ) >(&Graphic3d_Camera::SetDirection),
             R"#(Sets camera look direction and computes the new Eye position relative to current Center. WARNING! This method does NOT verify that the current Up() vector is orthogonal to the new Direction.)#"  , py::arg("theDir"))
        .def("Up",
             (const gp_Dir & (Graphic3d_Camera::*)() const) static_cast<const gp_Dir & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::Up),
             R"#(Get camera Up direction vector.)#" )
        .def("SetUp",
             (void (Graphic3d_Camera::*)( const gp_Dir &  ) ) static_cast<void (Graphic3d_Camera::*)( const gp_Dir &  ) >(&Graphic3d_Camera::SetUp),
             R"#(Sets camera Up direction vector, orthogonal to camera direction. WARNING! This method does NOT verify that the new Up vector is orthogonal to the current Direction().)#"  , py::arg("theUp"))
        .def("OrthogonalizeUp",
             (void (Graphic3d_Camera::*)() ) static_cast<void (Graphic3d_Camera::*)() >(&Graphic3d_Camera::OrthogonalizeUp),
             R"#(Orthogonalize up direction vector.)#" )
        .def("OrthogonalizedUp",
             (gp_Dir (Graphic3d_Camera::*)() const) static_cast<gp_Dir (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::OrthogonalizedUp),
             R"#(Return a copy of orthogonalized up direction vector.)#" )
        .def("Eye",
             (const gp_Pnt & (Graphic3d_Camera::*)() const) static_cast<const gp_Pnt & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::Eye),
             R"#(Get camera Eye position.)#" )
        .def("MoveEyeTo",
             (void (Graphic3d_Camera::*)( const gp_Pnt &  ) ) static_cast<void (Graphic3d_Camera::*)( const gp_Pnt &  ) >(&Graphic3d_Camera::MoveEyeTo),
             R"#(Sets camera Eye position. Unlike SetEye(), this method only changes Eye point and preserves camera direction.)#"  , py::arg("theEye"))
        .def("SetEyeAndCenter",
             (void (Graphic3d_Camera::*)( const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (Graphic3d_Camera::*)( const gp_Pnt & ,  const gp_Pnt &  ) >(&Graphic3d_Camera::SetEyeAndCenter),
             R"#(Sets camera Eye and Center positions.)#"  , py::arg("theEye"),  py::arg("theCenter"))
        .def("SetEye",
             (void (Graphic3d_Camera::*)( const gp_Pnt &  ) ) static_cast<void (Graphic3d_Camera::*)( const gp_Pnt &  ) >(&Graphic3d_Camera::SetEye),
             R"#(Sets camera Eye position. WARNING! For backward compatibility reasons, this method also changes view direction, so that the new direction is computed from new Eye position to old Center position.)#"  , py::arg("theEye"))
        .def("Center",
             (gp_Pnt (Graphic3d_Camera::*)() const) static_cast<gp_Pnt (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::Center),
             R"#(Get Center of the camera, e.g. the point where camera looks at. This point is computed as Eye() translated along Direction() at Distance().)#" )
        .def("SetCenter",
             (void (Graphic3d_Camera::*)( const gp_Pnt &  ) ) static_cast<void (Graphic3d_Camera::*)( const gp_Pnt &  ) >(&Graphic3d_Camera::SetCenter),
             R"#(Sets Center of the camera, e.g. the point where camera looks at. This methods changes camera direction, so that the new direction is computed from current Eye position to specified Center position.)#"  , py::arg("theCenter"))
        .def("Distance",
             (Standard_Real (Graphic3d_Camera::*)() const) static_cast<Standard_Real (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::Distance),
             R"#(Get distance of Eye from camera Center.)#" )
        .def("SetDistance",
             (void (Graphic3d_Camera::*)( const Standard_Real  ) ) static_cast<void (Graphic3d_Camera::*)( const Standard_Real  ) >(&Graphic3d_Camera::SetDistance),
             R"#(Set distance of Eye from camera Center.)#"  , py::arg("theDistance"))
        .def("Scale",
             (Standard_Real (Graphic3d_Camera::*)() const) static_cast<Standard_Real (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::Scale),
             R"#(Get camera scale.)#" )
        .def("SetScale",
             (void (Graphic3d_Camera::*)( const Standard_Real  ) ) static_cast<void (Graphic3d_Camera::*)( const Standard_Real  ) >(&Graphic3d_Camera::SetScale),
             R"#(Sets camera scale. For orthographic projection the scale factor corresponds to parallel scale of view mapping (i.e. size of viewport). For perspective camera scale is converted to distance. The scale specifies equal size of the view projection in both dimensions assuming that the aspect is 1.0. The projection height and width are specified with the scale and correspondingly multiplied by the aspect.)#"  , py::arg("theScale"))
        .def("AxialScale",
             (const gp_XYZ & (Graphic3d_Camera::*)() const) static_cast<const gp_XYZ & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::AxialScale),
             R"#(Get camera axial scale.)#" )
        .def("SetAxialScale",
             (void (Graphic3d_Camera::*)( const gp_XYZ &  ) ) static_cast<void (Graphic3d_Camera::*)( const gp_XYZ &  ) >(&Graphic3d_Camera::SetAxialScale),
             R"#(Set camera axial scale.)#"  , py::arg("theAxialScale"))
        .def("SetProjectionType",
             (void (Graphic3d_Camera::*)( const Graphic3d_Camera::Projection  ) ) static_cast<void (Graphic3d_Camera::*)( const Graphic3d_Camera::Projection  ) >(&Graphic3d_Camera::SetProjectionType),
             R"#(Change camera projection type. When switching to perspective projection from orthographic one, the ZNear and ZFar are reset to default values (0.001, 3000.0) if less than 0.0.)#"  , py::arg("theProjection"))
        .def("ProjectionType",
             (Graphic3d_Camera::Projection (Graphic3d_Camera::*)() const) static_cast<Graphic3d_Camera::Projection (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::ProjectionType),
             R"#(Returns camera projection type.)#" )
        .def("IsOrthographic",
             (Standard_Boolean (Graphic3d_Camera::*)() const) static_cast<Standard_Boolean (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::IsOrthographic),
             R"#(Check that the camera projection is orthographic.)#" )
        .def("IsStereo",
             (Standard_Boolean (Graphic3d_Camera::*)() const) static_cast<Standard_Boolean (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::IsStereo),
             R"#(Check whether the camera projection is stereo. Please note that stereo rendering is now implemented with support of Quad buffering.)#" )
        .def("SetFOVy",
             (void (Graphic3d_Camera::*)( const Standard_Real  ) ) static_cast<void (Graphic3d_Camera::*)( const Standard_Real  ) >(&Graphic3d_Camera::SetFOVy),
             R"#(Set Field Of View (FOV) in y axis for perspective projection.)#"  , py::arg("theFOVy"))
        .def("FOVy",
             (Standard_Real (Graphic3d_Camera::*)() const) static_cast<Standard_Real (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::FOVy),
             R"#(Get Field Of View (FOV) in y axis.)#" )
        .def("ZFitAll",
             (bool (Graphic3d_Camera::*)( const Standard_Real ,  const Bnd_Box & ,  const Bnd_Box & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<bool (Graphic3d_Camera::*)( const Standard_Real ,  const Bnd_Box & ,  const Bnd_Box & ,  Standard_Real & ,  Standard_Real &  ) const>(&Graphic3d_Camera::ZFitAll),
             R"#(Estimate Z-min and Z-max planes of projection volume to match the displayed objects. The methods ensures that view volume will be close by depth range to the displayed objects. Fitting assumes that for orthogonal projection the view volume contains the displayed objects completely. For zoomed perspective view, the view volume is adjusted such that it contains the objects or their parts, located in front of the camera.)#"  , py::arg("theScaleFactor"),  py::arg("theMinMax"),  py::arg("theGraphicBB"),  py::arg("theZNear"),  py::arg("theZFar"))
        .def("ZFitAll",
             (void (Graphic3d_Camera::*)( const Standard_Real ,  const Bnd_Box & ,  const Bnd_Box &  ) ) static_cast<void (Graphic3d_Camera::*)( const Standard_Real ,  const Bnd_Box & ,  const Bnd_Box &  ) >(&Graphic3d_Camera::ZFitAll),
             R"#(Change Z-min and Z-max planes of projection volume to match the displayed objects.)#"  , py::arg("theScaleFactor"),  py::arg("theMinMax"),  py::arg("theGraphicBB"))
        .def("SetZRange",
             (void (Graphic3d_Camera::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Graphic3d_Camera::*)( const Standard_Real ,  const Standard_Real  ) >(&Graphic3d_Camera::SetZRange),
             R"#(Change the Near and Far Z-clipping plane positions. For orthographic projection, theZNear, theZFar can be negative or positive. For perspective projection, only positive values are allowed. Program error exception is raised if non-positive values are specified for perspective projection or theZNear >= theZFar.)#"  , py::arg("theZNear"),  py::arg("theZFar"))
        .def("ZNear",
             (Standard_Real (Graphic3d_Camera::*)() const) static_cast<Standard_Real (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::ZNear),
             R"#(Get the Near Z-clipping plane position.)#" )
        .def("ZFar",
             (Standard_Real (Graphic3d_Camera::*)() const) static_cast<Standard_Real (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::ZFar),
             R"#(Get the Far Z-clipping plane position.)#" )
        .def("SetAspect",
             (void (Graphic3d_Camera::*)( const Standard_Real  ) ) static_cast<void (Graphic3d_Camera::*)( const Standard_Real  ) >(&Graphic3d_Camera::SetAspect),
             R"#(Changes width / height display ratio.)#"  , py::arg("theAspect"))
        .def("Aspect",
             (Standard_Real (Graphic3d_Camera::*)() const) static_cast<Standard_Real (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::Aspect),
             R"#(Get camera display ratio.)#" )
        .def("SetZFocus",
             (void (Graphic3d_Camera::*)( const Graphic3d_Camera::FocusType ,  const Standard_Real  ) ) static_cast<void (Graphic3d_Camera::*)( const Graphic3d_Camera::FocusType ,  const Standard_Real  ) >(&Graphic3d_Camera::SetZFocus),
             R"#(Sets stereographic focus distance.)#"  , py::arg("theType"),  py::arg("theZFocus"))
        .def("ZFocus",
             (Standard_Real (Graphic3d_Camera::*)() const) static_cast<Standard_Real (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::ZFocus),
             R"#(Get stereographic focus value.)#" )
        .def("ZFocusType",
             (Graphic3d_Camera::FocusType (Graphic3d_Camera::*)() const) static_cast<Graphic3d_Camera::FocusType (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::ZFocusType),
             R"#(Get stereographic focus definition type.)#" )
        .def("SetIOD",
             (void (Graphic3d_Camera::*)( const Graphic3d_Camera::IODType ,  const Standard_Real  ) ) static_cast<void (Graphic3d_Camera::*)( const Graphic3d_Camera::IODType ,  const Standard_Real  ) >(&Graphic3d_Camera::SetIOD),
             R"#(Sets Intraocular distance.)#"  , py::arg("theType"),  py::arg("theIOD"))
        .def("IOD",
             (Standard_Real (Graphic3d_Camera::*)() const) static_cast<Standard_Real (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::IOD),
             R"#(Get Intraocular distance value.)#" )
        .def("GetIODType",
             (Graphic3d_Camera::IODType (Graphic3d_Camera::*)() const) static_cast<Graphic3d_Camera::IODType (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::GetIODType),
             R"#(Get Intraocular distance definition type.)#" )
        .def("Tile",
             (const Graphic3d_CameraTile & (Graphic3d_Camera::*)() const) static_cast<const Graphic3d_CameraTile & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::Tile),
             R"#(Get current tile.)#" )
        .def("SetTile",
             (void (Graphic3d_Camera::*)( const Graphic3d_CameraTile &  ) ) static_cast<void (Graphic3d_Camera::*)( const Graphic3d_CameraTile &  ) >(&Graphic3d_Camera::SetTile),
             R"#(Sets the Tile defining the drawing sub-area within View. Note that tile defining a region outside the view boundaries is also valid - use method Graphic3d_CameraTile::Cropped() to assign a cropped copy.)#"  , py::arg("theTile"))
        .def("Transform",
             (void (Graphic3d_Camera::*)( const gp_Trsf &  ) ) static_cast<void (Graphic3d_Camera::*)( const gp_Trsf &  ) >(&Graphic3d_Camera::Transform),
             R"#(Transform orientation components of the camera: Eye, Up and Center points.)#"  , py::arg("theTrsf"))
        .def("ViewDimensions",
             (gp_XYZ (Graphic3d_Camera::*)() const) static_cast<gp_XYZ (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::ViewDimensions),
             R"#(Calculate view plane size at center (target) point and distance between ZFar and ZNear planes.)#" )
        .def("ViewDimensions",
             (gp_XYZ (Graphic3d_Camera::*)( const Standard_Real  ) const) static_cast<gp_XYZ (Graphic3d_Camera::*)( const Standard_Real  ) const>(&Graphic3d_Camera::ViewDimensions),
             R"#(Calculate view plane size at center point with specified Z offset and distance between ZFar and ZNear planes.)#"  , py::arg("theZValue"))
        .def("Frustum",
             (void (Graphic3d_Camera::*)( gp_Pln & ,  gp_Pln & ,  gp_Pln & ,  gp_Pln & ,  gp_Pln & ,  gp_Pln &  ) const) static_cast<void (Graphic3d_Camera::*)( gp_Pln & ,  gp_Pln & ,  gp_Pln & ,  gp_Pln & ,  gp_Pln & ,  gp_Pln &  ) const>(&Graphic3d_Camera::Frustum),
             R"#(Calculate WCS frustum planes for the camera projection volume. Frustum is a convex volume determined by six planes directing inwards. The frustum planes are usually used as inputs for camera algorithms. Thus, if any changes to projection matrix calculation are necessary, the frustum planes calculation should be also touched.)#"  , py::arg("theLeft"),  py::arg("theRight"),  py::arg("theBottom"),  py::arg("theTop"),  py::arg("theNear"),  py::arg("theFar"))
        .def("Project",
             (gp_Pnt (Graphic3d_Camera::*)( const gp_Pnt &  ) const) static_cast<gp_Pnt (Graphic3d_Camera::*)( const gp_Pnt &  ) const>(&Graphic3d_Camera::Project),
             R"#(Project point from world coordinate space to normalized device coordinates (mapping).)#"  , py::arg("thePnt"))
        .def("UnProject",
             (gp_Pnt (Graphic3d_Camera::*)( const gp_Pnt &  ) const) static_cast<gp_Pnt (Graphic3d_Camera::*)( const gp_Pnt &  ) const>(&Graphic3d_Camera::UnProject),
             R"#(Unproject point from normalized device coordinates to world coordinate space.)#"  , py::arg("thePnt"))
        .def("ConvertView2Proj",
             (gp_Pnt (Graphic3d_Camera::*)( const gp_Pnt &  ) const) static_cast<gp_Pnt (Graphic3d_Camera::*)( const gp_Pnt &  ) const>(&Graphic3d_Camera::ConvertView2Proj),
             R"#(Convert point from view coordinate space to projection coordinate space.)#"  , py::arg("thePnt"))
        .def("ConvertProj2View",
             (gp_Pnt (Graphic3d_Camera::*)( const gp_Pnt &  ) const) static_cast<gp_Pnt (Graphic3d_Camera::*)( const gp_Pnt &  ) const>(&Graphic3d_Camera::ConvertProj2View),
             R"#(Convert point from projection coordinate space to view coordinate space.)#"  , py::arg("thePnt"))
        .def("ConvertWorld2View",
             (gp_Pnt (Graphic3d_Camera::*)( const gp_Pnt &  ) const) static_cast<gp_Pnt (Graphic3d_Camera::*)( const gp_Pnt &  ) const>(&Graphic3d_Camera::ConvertWorld2View),
             R"#(Convert point from world coordinate space to view coordinate space.)#"  , py::arg("thePnt"))
        .def("ConvertView2World",
             (gp_Pnt (Graphic3d_Camera::*)( const gp_Pnt &  ) const) static_cast<gp_Pnt (Graphic3d_Camera::*)( const gp_Pnt &  ) const>(&Graphic3d_Camera::ConvertView2World),
             R"#(Convert point from view coordinate space to world coordinates.)#"  , py::arg("thePnt"))
        .def("WorldViewProjState",
             (const Graphic3d_WorldViewProjState & (Graphic3d_Camera::*)() const) static_cast<const Graphic3d_WorldViewProjState & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::WorldViewProjState),
             R"#(Returns projection modification state of the camera.)#" )
        .def("ProjectionState",
             (Standard_Size (Graphic3d_Camera::*)() const) static_cast<Standard_Size (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::ProjectionState),
             R"#(Returns modification state of camera projection matrix)#" )
        .def("WorldViewState",
             (Standard_Size (Graphic3d_Camera::*)() const) static_cast<Standard_Size (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::WorldViewState),
             R"#(Returns modification state of camera world view transformation matrix.)#" )
        .def("OrientationMatrix",
             (const Graphic3d_Mat4d & (Graphic3d_Camera::*)() const) static_cast<const Graphic3d_Mat4d & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::OrientationMatrix),
             R"#(Get orientation matrix.)#" )
        .def("OrientationMatrixF",
             (const Graphic3d_Mat4 & (Graphic3d_Camera::*)() const) static_cast<const Graphic3d_Mat4 & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::OrientationMatrixF),
             R"#(Get orientation matrix of Standard_ShortReal precision.)#" )
        .def("ProjectionMatrix",
             (const Graphic3d_Mat4d & (Graphic3d_Camera::*)() const) static_cast<const Graphic3d_Mat4d & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::ProjectionMatrix),
             R"#(Get monographic or middle point projection matrix used for monographic rendering and for point projection / unprojection.)#" )
        .def("ProjectionMatrixF",
             (const Graphic3d_Mat4 & (Graphic3d_Camera::*)() const) static_cast<const Graphic3d_Mat4 & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::ProjectionMatrixF),
             R"#(Get monographic or middle point projection matrix of Standard_ShortReal precision used for monographic rendering and for point projection / unprojection.)#" )
        .def("ProjectionStereoLeft",
             (const Graphic3d_Mat4d & (Graphic3d_Camera::*)() const) static_cast<const Graphic3d_Mat4d & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::ProjectionStereoLeft),
             R"#(Returns stereographic matrix computed for left eye. Please note that this method is used for rendering for Projection_Stereo.)#" )
        .def("ProjectionStereoLeftF",
             (const Graphic3d_Mat4 & (Graphic3d_Camera::*)() const) static_cast<const Graphic3d_Mat4 & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::ProjectionStereoLeftF),
             R"#(Returns stereographic matrix of Standard_ShortReal precision computed for left eye. Please note that this method is used for rendering for Projection_Stereo.)#" )
        .def("ProjectionStereoRight",
             (const Graphic3d_Mat4d & (Graphic3d_Camera::*)() const) static_cast<const Graphic3d_Mat4d & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::ProjectionStereoRight),
             R"#(Returns stereographic matrix computed for right eye. Please note that this method is used for rendering for Projection_Stereo.)#" )
        .def("ProjectionStereoRightF",
             (const Graphic3d_Mat4 & (Graphic3d_Camera::*)() const) static_cast<const Graphic3d_Mat4 & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::ProjectionStereoRightF),
             R"#(Returns stereographic matrix of Standard_ShortReal precision computed for right eye. Please note that this method is used for rendering for Projection_Stereo.)#" )
        .def("InvalidateProjection",
             (void (Graphic3d_Camera::*)() ) static_cast<void (Graphic3d_Camera::*)() >(&Graphic3d_Camera::InvalidateProjection),
             R"#(Invalidate state of projection matrix. The matrix will be updated on request.)#" )
        .def("InvalidateOrientation",
             (void (Graphic3d_Camera::*)() ) static_cast<void (Graphic3d_Camera::*)() >(&Graphic3d_Camera::InvalidateOrientation),
             R"#(Invalidate orientation matrix. The matrix will be updated on request.)#" )
        .def("FrustumPoints",
             (void (Graphic3d_Camera::*)( NCollection_Array1<Graphic3d_Vec3d> &  ) const) static_cast<void (Graphic3d_Camera::*)( NCollection_Array1<Graphic3d_Vec3d> &  ) const>(&Graphic3d_Camera::FrustumPoints),
             R"#(Fill array of current view frustum corners. The size of this array is equal to FrustumVerticesNB. The order of vertices is as defined in FrustumVert_* enumeration.)#"  , py::arg("thePoints"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_Camera::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_Camera::*)() const>(&Graphic3d_Camera::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_Camera::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_Camera::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_CameraTile , shared_ptr<Graphic3d_CameraTile>  >>(m.attr("Graphic3d_CameraTile"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsValid",
             (bool (Graphic3d_CameraTile::*)() const) static_cast<bool (Graphic3d_CameraTile::*)() const>(&Graphic3d_CameraTile::IsValid),
             R"#(Return true if Tile has been defined.)#" )
        .def("OffsetLowerLeft",
             (Graphic3d_Vec2i (Graphic3d_CameraTile::*)() const) static_cast<Graphic3d_Vec2i (Graphic3d_CameraTile::*)() const>(&Graphic3d_CameraTile::OffsetLowerLeft),
             R"#(Return offset position from lower-left corner.)#" )
        .def("Cropped",
             (Graphic3d_CameraTile (Graphic3d_CameraTile::*)() const) static_cast<Graphic3d_CameraTile (Graphic3d_CameraTile::*)() const>(&Graphic3d_CameraTile::Cropped),
             R"#(Return the copy cropped by total size)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ClipPlane ,opencascade::handle<Graphic3d_ClipPlane>  , Standard_Transient >>(m.attr("Graphic3d_ClipPlane"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Graphic3d_ClipPlane & >()  , py::arg("theOther") )
        .def(py::init<  const NCollection_Vec4<Standard_Real> & >()  , py::arg("theEquation") )
        .def(py::init< const gp_Pln & >()  , py::arg("thePlane") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ClipPlane::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::DynamicType),
             R"#(None)#" )
        .def("SetEquation",
             (void (Graphic3d_ClipPlane::*)( const gp_Pln &  ) ) static_cast<void (Graphic3d_ClipPlane::*)( const gp_Pln &  ) >(&Graphic3d_ClipPlane::SetEquation),
             R"#(Set plane equation by its geometrical definition. The equation is specified in "world" coordinate system.)#"  , py::arg("thePlane"))
        .def("SetEquation",
             (void (Graphic3d_ClipPlane::*)(  const NCollection_Vec4<Standard_Real> &  ) ) static_cast<void (Graphic3d_ClipPlane::*)(  const NCollection_Vec4<Standard_Real> &  ) >(&Graphic3d_ClipPlane::SetEquation),
             R"#(Set 4-component equation vector for clipping plane. The equation is specified in "world" coordinate system.)#"  , py::arg("theEquation"))
        .def("GetEquation",
             (const Graphic3d_Vec4d & (Graphic3d_ClipPlane::*)() const) static_cast<const Graphic3d_Vec4d & (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::GetEquation),
             R"#(Get 4-component equation vector for clipping plane.)#" )
        .def("ReversedEquation",
             (const Graphic3d_Vec4d & (Graphic3d_ClipPlane::*)() const) static_cast<const Graphic3d_Vec4d & (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::ReversedEquation),
             R"#(Get 4-component equation vector for clipping plane.)#" )
        .def("IsOn",
             (Standard_Boolean (Graphic3d_ClipPlane::*)() const) static_cast<Standard_Boolean (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::IsOn),
             R"#(Check that the clipping plane is turned on.)#" )
        .def("SetOn",
             (void (Graphic3d_ClipPlane::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_ClipPlane::*)( const Standard_Boolean  ) >(&Graphic3d_ClipPlane::SetOn),
             R"#(Change state of the clipping plane.)#"  , py::arg("theIsOn"))
        .def("SetCapping",
             (void (Graphic3d_ClipPlane::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_ClipPlane::*)( const Standard_Boolean  ) >(&Graphic3d_ClipPlane::SetCapping),
             R"#(Change state of capping surface rendering.)#"  , py::arg("theIsOn"))
        .def("IsCapping",
             (Standard_Boolean (Graphic3d_ClipPlane::*)() const) static_cast<Standard_Boolean (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::IsCapping),
             R"#(Check state of capping surface rendering.)#" )
        .def("ToPlane",
             (const gp_Pln & (Graphic3d_ClipPlane::*)() const) static_cast<const gp_Pln & (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::ToPlane),
             R"#(Get geometrical definition.)#" )
        .def("Clone",
             (opencascade::handle<Graphic3d_ClipPlane> (Graphic3d_ClipPlane::*)() const) static_cast<opencascade::handle<Graphic3d_ClipPlane> (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::Clone),
             R"#(Clone plane. Virtual method to simplify copying procedure if plane class is redefined at application level to add specific fields to it e.g. id, name, etc.)#" )
        .def("IsChain",
             (Standard_Boolean (Graphic3d_ClipPlane::*)() const) static_cast<Standard_Boolean (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::IsChain),
             R"#(Return TRUE if this item defines a conjunction (logical AND) between a set of Planes. Graphic3d_ClipPlane item defines either a Clipping halfspace (single Clipping Plane) or a Clipping volume defined by a logical AND (conjunction) operation between a set of Planes defined as a Chain (so that the volume cuts a space only in case if check fails for ALL Planes in the Chain).)#" )
        .def("ChainPreviousPlane",
             (opencascade::handle<Graphic3d_ClipPlane> (Graphic3d_ClipPlane::*)() const) static_cast<opencascade::handle<Graphic3d_ClipPlane> (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::ChainPreviousPlane),
             R"#(Return the previous plane in a Chain of Planes defining logical AND operation, or NULL if there is no Chain or it is a first element in Chain. When clipping is defined by a Chain of Planes, it cuts a space only in case if check fails for all Planes in Chain.)#" )
        .def("ChainNextPlane",
             (const opencascade::handle<Graphic3d_ClipPlane> & (Graphic3d_ClipPlane::*)() const) static_cast<const opencascade::handle<Graphic3d_ClipPlane> & (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::ChainNextPlane),
             R"#(Return the next plane in a Chain of Planes defining logical AND operation, or NULL if there is no chain or it is a last element in chain.)#" )
        .def("NbChainNextPlanes",
             (Standard_Integer (Graphic3d_ClipPlane::*)() const) static_cast<Standard_Integer (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::NbChainNextPlanes),
             R"#(Return the number of chains in forward direction (including this item, so it is always >= 1). For a head of Chain - returns the length of entire Chain.)#" )
        .def("SetChainNextPlane",
             (void (Graphic3d_ClipPlane::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) ) static_cast<void (Graphic3d_ClipPlane::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) >(&Graphic3d_ClipPlane::SetChainNextPlane),
             R"#(Set the next plane in a Chain of Planes. This operation also updates relationship between chains (Previous/Next items), so that the previously set Next plane is cut off.)#"  , py::arg("thePlane"))
        .def("CappingColor",
             (Quantity_Color (Graphic3d_ClipPlane::*)() const) static_cast<Quantity_Color (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::CappingColor),
             R"#(Return color for rendering capping surface.)#" )
        .def("SetCappingColor",
             (void (Graphic3d_ClipPlane::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_ClipPlane::*)( const Quantity_Color &  ) >(&Graphic3d_ClipPlane::SetCappingColor),
             R"#(Set color for rendering capping surface.)#"  , py::arg("theColor"))
        .def("SetCappingMaterial",
             (void (Graphic3d_ClipPlane::*)( const Graphic3d_MaterialAspect &  ) ) static_cast<void (Graphic3d_ClipPlane::*)( const Graphic3d_MaterialAspect &  ) >(&Graphic3d_ClipPlane::SetCappingMaterial),
             R"#(Set material for rendering capping surface.)#"  , py::arg("theMat"))
        .def("CappingMaterial",
             (const Graphic3d_MaterialAspect & (Graphic3d_ClipPlane::*)() const) static_cast<const Graphic3d_MaterialAspect & (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::CappingMaterial),
             R"#(Returns capping material.)#" )
        .def("SetCappingTexture",
             (void (Graphic3d_ClipPlane::*)( const opencascade::handle<Graphic3d_TextureMap> &  ) ) static_cast<void (Graphic3d_ClipPlane::*)( const opencascade::handle<Graphic3d_TextureMap> &  ) >(&Graphic3d_ClipPlane::SetCappingTexture),
             R"#(Set texture to be applied on capping surface.)#"  , py::arg("theTexture"))
        .def("CappingTexture",
             (opencascade::handle<Graphic3d_TextureMap> (Graphic3d_ClipPlane::*)() const) static_cast<opencascade::handle<Graphic3d_TextureMap> (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::CappingTexture),
             R"#(Returns capping texture map.)#" )
        .def("SetCappingHatch",
             (void (Graphic3d_ClipPlane::*)( const Aspect_HatchStyle  ) ) static_cast<void (Graphic3d_ClipPlane::*)( const Aspect_HatchStyle  ) >(&Graphic3d_ClipPlane::SetCappingHatch),
             R"#(Set hatch style (stipple) and turn hatching on.)#"  , py::arg("theStyle"))
        .def("CappingHatch",
             (Aspect_HatchStyle (Graphic3d_ClipPlane::*)() const) static_cast<Aspect_HatchStyle (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::CappingHatch),
             R"#(Returns hatching style.)#" )
        .def("SetCappingCustomHatch",
             (void (Graphic3d_ClipPlane::*)( const opencascade::handle<Graphic3d_HatchStyle> &  ) ) static_cast<void (Graphic3d_ClipPlane::*)( const opencascade::handle<Graphic3d_HatchStyle> &  ) >(&Graphic3d_ClipPlane::SetCappingCustomHatch),
             R"#(Set custom hatch style (stipple) and turn hatching on.)#"  , py::arg("theStyle"))
        .def("CappingCustomHatch",
             (const opencascade::handle<Graphic3d_HatchStyle> & (Graphic3d_ClipPlane::*)() const) static_cast<const opencascade::handle<Graphic3d_HatchStyle> & (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::CappingCustomHatch),
             R"#(Returns hatching style.)#" )
        .def("SetCappingHatchOn",
             (void (Graphic3d_ClipPlane::*)() ) static_cast<void (Graphic3d_ClipPlane::*)() >(&Graphic3d_ClipPlane::SetCappingHatchOn),
             R"#(Turn on hatching.)#" )
        .def("SetCappingHatchOff",
             (void (Graphic3d_ClipPlane::*)() ) static_cast<void (Graphic3d_ClipPlane::*)() >(&Graphic3d_ClipPlane::SetCappingHatchOff),
             R"#(Turn off hatching.)#" )
        .def("IsHatchOn",
             (Standard_Boolean (Graphic3d_ClipPlane::*)() const) static_cast<Standard_Boolean (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::IsHatchOn),
             R"#(Returns True if hatching mask is turned on.)#" )
        .def("GetId",
             (const TCollection_AsciiString & (Graphic3d_ClipPlane::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::GetId),
             R"#(This ID is used for managing associated resources in graphical driver. The clip plane can be assigned within a range of IO which can be displayed in separate OpenGl contexts. For each of the context an associated OpenGl resource for graphical aspects should be created and kept. The resources are stored in graphical driver for each of individual groups of shared context under the clip plane identifier.)#" )
        .def("CappingAspect",
             (const opencascade::handle<Graphic3d_AspectFillArea3d> & (Graphic3d_ClipPlane::*)() const) static_cast<const opencascade::handle<Graphic3d_AspectFillArea3d> & (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::CappingAspect),
             R"#(Return capping aspect.)#" )
        .def("SetCappingAspect",
             (void (Graphic3d_ClipPlane::*)( const opencascade::handle<Graphic3d_AspectFillArea3d> &  ) ) static_cast<void (Graphic3d_ClipPlane::*)( const opencascade::handle<Graphic3d_AspectFillArea3d> &  ) >(&Graphic3d_ClipPlane::SetCappingAspect),
             R"#(Assign capping aspect.)#"  , py::arg("theAspect"))
        .def("ToUseObjectMaterial",
             (bool (Graphic3d_ClipPlane::*)() const) static_cast<bool (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::ToUseObjectMaterial),
             R"#(Flag indicating whether material for capping plane should be taken from object. Default value: FALSE (use dedicated capping plane material).)#" )
        .def("SetUseObjectMaterial",
             (void (Graphic3d_ClipPlane::*)( bool  ) ) static_cast<void (Graphic3d_ClipPlane::*)( bool  ) >(&Graphic3d_ClipPlane::SetUseObjectMaterial),
             R"#(Set flag for controlling the source of capping plane material.)#"  , py::arg("theToUse"))
        .def("ToUseObjectTexture",
             (bool (Graphic3d_ClipPlane::*)() const) static_cast<bool (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::ToUseObjectTexture),
             R"#(Flag indicating whether texture for capping plane should be taken from object. Default value: FALSE.)#" )
        .def("SetUseObjectTexture",
             (void (Graphic3d_ClipPlane::*)( bool  ) ) static_cast<void (Graphic3d_ClipPlane::*)( bool  ) >(&Graphic3d_ClipPlane::SetUseObjectTexture),
             R"#(Set flag for controlling the source of capping plane texture.)#"  , py::arg("theToUse"))
        .def("ToUseObjectShader",
             (bool (Graphic3d_ClipPlane::*)() const) static_cast<bool (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::ToUseObjectShader),
             R"#(Flag indicating whether shader program for capping plane should be taken from object. Default value: FALSE.)#" )
        .def("SetUseObjectShader",
             (void (Graphic3d_ClipPlane::*)( bool  ) ) static_cast<void (Graphic3d_ClipPlane::*)( bool  ) >(&Graphic3d_ClipPlane::SetUseObjectShader),
             R"#(Set flag for controlling the source of capping plane shader program.)#"  , py::arg("theToUse"))
        .def("ToUseObjectProperties",
             (bool (Graphic3d_ClipPlane::*)() const) static_cast<bool (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::ToUseObjectProperties),
             R"#(Return true if some fill area aspect properties should be taken from object.)#" )
        .def("ProbePoint",
             (Graphic3d_ClipState (Graphic3d_ClipPlane::*)(  const NCollection_Vec4<Standard_Real> &  ) const) static_cast<Graphic3d_ClipState (Graphic3d_ClipPlane::*)(  const NCollection_Vec4<Standard_Real> &  ) const>(&Graphic3d_ClipPlane::ProbePoint),
             R"#(Check if the given point is outside / inside / on section.)#"  , py::arg("thePoint"))
        .def("ProbeBox",
             (Graphic3d_ClipState (Graphic3d_ClipPlane::*)(  const BVH_Box<Standard_Real, 3> &  ) const) static_cast<Graphic3d_ClipState (Graphic3d_ClipPlane::*)(  const BVH_Box<Standard_Real, 3> &  ) const>(&Graphic3d_ClipPlane::ProbeBox),
             R"#(Check if the given bounding box is fully outside / fully inside.)#"  , py::arg("theBox"))
        .def("ProbeBoxTouch",
             (Standard_Boolean (Graphic3d_ClipPlane::*)(  const BVH_Box<Standard_Real, 3> &  ) const) static_cast<Standard_Boolean (Graphic3d_ClipPlane::*)(  const BVH_Box<Standard_Real, 3> &  ) const>(&Graphic3d_ClipPlane::ProbeBoxTouch),
             R"#(Check if the given bounding box is In and touch the clipping planes)#"  , py::arg("theBox"))
        .def("ProbePointHalfspace",
             (Graphic3d_ClipState (Graphic3d_ClipPlane::*)(  const NCollection_Vec4<Standard_Real> &  ) const) static_cast<Graphic3d_ClipState (Graphic3d_ClipPlane::*)(  const NCollection_Vec4<Standard_Real> &  ) const>(&Graphic3d_ClipPlane::ProbePointHalfspace),
             R"#(Check if the given point is outside of the half-space (e.g. should be discarded by clipping plane).)#"  , py::arg("thePoint"))
        .def("ProbeBoxHalfspace",
             (Graphic3d_ClipState (Graphic3d_ClipPlane::*)(  const BVH_Box<Standard_Real, 3> &  ) const) static_cast<Graphic3d_ClipState (Graphic3d_ClipPlane::*)(  const BVH_Box<Standard_Real, 3> &  ) const>(&Graphic3d_ClipPlane::ProbeBoxHalfspace),
             R"#(Check if the given bounding box is fully outside / fully inside the half-space.)#"  , py::arg("theBox"))
        .def("IsPointOutHalfspace",
             (bool (Graphic3d_ClipPlane::*)(  const NCollection_Vec4<Standard_Real> &  ) const) static_cast<bool (Graphic3d_ClipPlane::*)(  const NCollection_Vec4<Standard_Real> &  ) const>(&Graphic3d_ClipPlane::IsPointOutHalfspace),
             R"#(Check if the given point is outside of the half-space (e.g. should be discarded by clipping plane).)#"  , py::arg("thePoint"))
        .def("IsBoxFullOutHalfspace",
             (bool (Graphic3d_ClipPlane::*)(  const BVH_Box<Standard_Real, 3> &  ) const) static_cast<bool (Graphic3d_ClipPlane::*)(  const BVH_Box<Standard_Real, 3> &  ) const>(&Graphic3d_ClipPlane::IsBoxFullOutHalfspace),
             R"#(Check if the given bounding box is fully outside of the half-space (e.g. should be discarded by clipping plane).)#"  , py::arg("theBox"))
        .def("ProbeBoxMaxPointHalfspace",
             (Graphic3d_ClipState (Graphic3d_ClipPlane::*)(  const BVH_Box<Standard_Real, 3> &  ) const) static_cast<Graphic3d_ClipState (Graphic3d_ClipPlane::*)(  const BVH_Box<Standard_Real, 3> &  ) const>(&Graphic3d_ClipPlane::ProbeBoxMaxPointHalfspace),
             R"#(Check if the given bounding box is fully outside of the half-space (e.g. should be discarded by clipping plane).)#"  , py::arg("theBox"))
        .def("IsBoxFullInHalfspace",
             (bool (Graphic3d_ClipPlane::*)(  const BVH_Box<Standard_Real, 3> &  ) const) static_cast<bool (Graphic3d_ClipPlane::*)(  const BVH_Box<Standard_Real, 3> &  ) const>(&Graphic3d_ClipPlane::IsBoxFullInHalfspace),
             R"#(Check if the given bounding box is fully inside (or touches from inside) the half-space (e.g. NOT discarded by clipping plane).)#"  , py::arg("theBox"))
        .def("MCountEquation",
             (unsigned int (Graphic3d_ClipPlane::*)() const) static_cast<unsigned int (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::MCountEquation),
             R"#(Returns modification counter for equation.)#" )
        .def("MCountAspect",
             (unsigned int (Graphic3d_ClipPlane::*)() const) static_cast<unsigned int (Graphic3d_ClipPlane::*)() const>(&Graphic3d_ClipPlane::MCountAspect),
             R"#(Returns modification counter for aspect.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ClipPlane::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ClipPlane::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_CubeMapOrder , shared_ptr<Graphic3d_CubeMapOrder>  >>(m.attr("Graphic3d_CubeMapOrder"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char >()  , py::arg("thePosXLocation"),  py::arg("theNegXLocation"),  py::arg("thePosYLocation"),  py::arg("theNegYLocation"),  py::arg("thePosZLocation"),  py::arg("theNegZLocation") )
        .def(py::init< const Graphic3d_ValidatedCubeMapOrder >()  , py::arg("theOrder") )
    // custom constructors
    // methods
        .def("Set",
             (Graphic3d_CubeMapOrder & (Graphic3d_CubeMapOrder::*)( const Graphic3d_CubeMapOrder &  ) ) static_cast<Graphic3d_CubeMapOrder & (Graphic3d_CubeMapOrder::*)( const Graphic3d_CubeMapOrder &  ) >(&Graphic3d_CubeMapOrder::Set),
             R"#(Alias of 'operator='.)#"  , py::arg("theOrder"))
        .def("Validated",
             (Graphic3d_ValidatedCubeMapOrder (Graphic3d_CubeMapOrder::*)() const) static_cast<Graphic3d_ValidatedCubeMapOrder (Graphic3d_CubeMapOrder::*)() const>(&Graphic3d_CubeMapOrder::Validated),
             R"#(Checks whether order is valid and returns object containing it. If order is invalid then exception will be thrown. This method is only way to create Graphic3d_ValidatedCubeMapOrder except copy constructor.)#" )
        .def("Set",
             (Graphic3d_CubeMapOrder & (Graphic3d_CubeMapOrder::*)( Graphic3d_CubeMapSide ,  unsigned char  ) ) static_cast<Graphic3d_CubeMapOrder & (Graphic3d_CubeMapOrder::*)( Graphic3d_CubeMapSide ,  unsigned char  ) >(&Graphic3d_CubeMapOrder::Set),
             R"#(Sets number of tile in packed cubemap image according passed cubemap side.)#"  , py::arg("theCubeMapSide"),  py::arg("theValue"))
        .def("SetDefault",
             (Graphic3d_CubeMapOrder & (Graphic3d_CubeMapOrder::*)() ) static_cast<Graphic3d_CubeMapOrder & (Graphic3d_CubeMapOrder::*)() >(&Graphic3d_CubeMapOrder::SetDefault),
             R"#(Sets default order (just from 0 to 5))#" )
        .def("Permute",
             (Graphic3d_CubeMapOrder & (Graphic3d_CubeMapOrder::*)( Graphic3d_ValidatedCubeMapOrder  ) ) static_cast<Graphic3d_CubeMapOrder & (Graphic3d_CubeMapOrder::*)( Graphic3d_ValidatedCubeMapOrder  ) >(&Graphic3d_CubeMapOrder::Permute),
             R"#(Applies another cubemap order as permutation for the current one.)#"  , py::arg("anOrder"))
        .def("Permuted",
             (Graphic3d_CubeMapOrder (Graphic3d_CubeMapOrder::*)( Graphic3d_ValidatedCubeMapOrder  ) const) static_cast<Graphic3d_CubeMapOrder (Graphic3d_CubeMapOrder::*)( Graphic3d_ValidatedCubeMapOrder  ) const>(&Graphic3d_CubeMapOrder::Permuted),
             R"#(Returns permuted by other cubemap order copy of current one.)#"  , py::arg("anOrder"))
        .def("Swap",
             (Graphic3d_CubeMapOrder & (Graphic3d_CubeMapOrder::*)( Graphic3d_CubeMapSide ,  Graphic3d_CubeMapSide  ) ) static_cast<Graphic3d_CubeMapOrder & (Graphic3d_CubeMapOrder::*)( Graphic3d_CubeMapSide ,  Graphic3d_CubeMapSide  ) >(&Graphic3d_CubeMapOrder::Swap),
             R"#(Swaps values of two cubemap sides.)#"  , py::arg("theFirstSide"),  py::arg("theSecondSide"))
        .def("Swapped",
             (Graphic3d_CubeMapOrder (Graphic3d_CubeMapOrder::*)( Graphic3d_CubeMapSide ,  Graphic3d_CubeMapSide  ) const) static_cast<Graphic3d_CubeMapOrder (Graphic3d_CubeMapOrder::*)( Graphic3d_CubeMapSide ,  Graphic3d_CubeMapSide  ) const>(&Graphic3d_CubeMapOrder::Swapped),
             R"#(Returns copy of current order with swapped values of two cubemap sides.)#"  , py::arg("theFirstSide"),  py::arg("theSecondSide"))
        .def("Get",
             (unsigned char (Graphic3d_CubeMapOrder::*)( Graphic3d_CubeMapSide  ) const) static_cast<unsigned char (Graphic3d_CubeMapOrder::*)( Graphic3d_CubeMapSide  ) const>(&Graphic3d_CubeMapOrder::Get),
             R"#(Returns value of passed cubemap side.)#"  , py::arg("theCubeMapSide"))
        .def("Clear",
             (Graphic3d_CubeMapOrder & (Graphic3d_CubeMapOrder::*)() ) static_cast<Graphic3d_CubeMapOrder & (Graphic3d_CubeMapOrder::*)() >(&Graphic3d_CubeMapOrder::Clear),
             R"#(Makes order empty.)#" )
        .def("IsEmpty",
             (bool (Graphic3d_CubeMapOrder::*)() const) static_cast<bool (Graphic3d_CubeMapOrder::*)() const>(&Graphic3d_CubeMapOrder::IsEmpty),
             R"#(Checks whether order is empty.)#" )
        .def("HasRepetitions",
             (bool (Graphic3d_CubeMapOrder::*)() const) static_cast<bool (Graphic3d_CubeMapOrder::*)() const>(&Graphic3d_CubeMapOrder::HasRepetitions),
             R"#(Checks whether order has repetitions.)#" )
        .def("HasOverflows",
             (bool (Graphic3d_CubeMapOrder::*)() const) static_cast<bool (Graphic3d_CubeMapOrder::*)() const>(&Graphic3d_CubeMapOrder::HasOverflows),
             R"#(Checks whether attempts to assign index greater than 5 to any side happed.)#" )
        .def("IsValid",
             (bool (Graphic3d_CubeMapOrder::*)() const) static_cast<bool (Graphic3d_CubeMapOrder::*)() const>(&Graphic3d_CubeMapOrder::IsValid),
             R"#(Checks whether order is valid. Order is valid when it doesn't have repetitions and there were not attempts to assign indexes greater than 5.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Default_s",
                    (const Graphic3d_ValidatedCubeMapOrder & (*)() ) static_cast<const Graphic3d_ValidatedCubeMapOrder & (*)() >(&Graphic3d_CubeMapOrder::Default),
                    R"#(Returns default order in protector container class. It is guaranteed to be valid.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_CullingTool , shared_ptr<Graphic3d_CullingTool>  >>(m.attr("Graphic3d_CullingTool"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetViewVolume",
             (void (Graphic3d_CullingTool::*)( const opencascade::handle<Graphic3d_Camera> &  ) ) static_cast<void (Graphic3d_CullingTool::*)( const opencascade::handle<Graphic3d_Camera> &  ) >(&Graphic3d_CullingTool::SetViewVolume),
             R"#(Retrieves view volume's planes equations and its vertices from projection and world-view matrices.)#"  , py::arg("theCamera"))
        .def("SetViewportSize",
             (void (Graphic3d_CullingTool::*)( Standard_Integer ,  Standard_Integer ,  Standard_Real  ) ) static_cast<void (Graphic3d_CullingTool::*)( Standard_Integer ,  Standard_Integer ,  Standard_Real  ) >(&Graphic3d_CullingTool::SetViewportSize),
             R"#(None)#"  , py::arg("theViewportWidth"),  py::arg("theViewportHeight"),  py::arg("theResolutionRatio"))
        .def("SetCullingDistance",
             (void (Graphic3d_CullingTool::*)( Graphic3d_CullingTool::CullingContext & ,  Standard_Real  ) const) static_cast<void (Graphic3d_CullingTool::*)( Graphic3d_CullingTool::CullingContext & ,  Standard_Real  ) const>(&Graphic3d_CullingTool::SetCullingDistance),
             R"#(Setup distance culling.)#"  , py::arg("theCtx"),  py::arg("theDistance"))
        .def("SetCullingSize",
             (void (Graphic3d_CullingTool::*)( Graphic3d_CullingTool::CullingContext & ,  Standard_Real  ) const) static_cast<void (Graphic3d_CullingTool::*)( Graphic3d_CullingTool::CullingContext & ,  Standard_Real  ) const>(&Graphic3d_CullingTool::SetCullingSize),
             R"#(Setup size culling.)#"  , py::arg("theCtx"),  py::arg("theSize"))
        .def("CacheClipPtsProjections",
             (void (Graphic3d_CullingTool::*)() ) static_cast<void (Graphic3d_CullingTool::*)() >(&Graphic3d_CullingTool::CacheClipPtsProjections),
             R"#(Caches view volume's vertices projections along its normals and AABBs dimensions. Must be called at the beginning of each BVH tree traverse loop.)#" )
        .def("IsCulled",
             (bool (Graphic3d_CullingTool::*)( const Graphic3d_CullingTool::CullingContext & ,   const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> &  ) const) static_cast<bool (Graphic3d_CullingTool::*)( const Graphic3d_CullingTool::CullingContext & ,   const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> &  ) const>(&Graphic3d_CullingTool::IsCulled),
             R"#(Checks whether given AABB should be entirely culled or not.)#"  , py::arg("theCtx"),  py::arg("theMinPt"),  py::arg("theMaxPt"))
        .def("Camera",
             (const opencascade::handle<Graphic3d_Camera> & (Graphic3d_CullingTool::*)() const) static_cast<const opencascade::handle<Graphic3d_Camera> & (Graphic3d_CullingTool::*)() const>(&Graphic3d_CullingTool::Camera),
             R"#(Return the camera definition.)#" )
        .def("ProjectionMatrix",
             (const Graphic3d_Mat4d & (Graphic3d_CullingTool::*)() const) static_cast<const Graphic3d_Mat4d & (Graphic3d_CullingTool::*)() const>(&Graphic3d_CullingTool::ProjectionMatrix),
             R"#(Returns current projection matrix.)#" )
        .def("WorldViewMatrix",
             (const Graphic3d_Mat4d & (Graphic3d_CullingTool::*)() const) static_cast<const Graphic3d_Mat4d & (Graphic3d_CullingTool::*)() const>(&Graphic3d_CullingTool::WorldViewMatrix),
             R"#(Returns current world view transformation matrix.)#" )
        .def("ViewportWidth",
             (Standard_Integer (Graphic3d_CullingTool::*)() const) static_cast<Standard_Integer (Graphic3d_CullingTool::*)() const>(&Graphic3d_CullingTool::ViewportWidth),
             R"#(None)#" )
        .def("ViewportHeight",
             (Standard_Integer (Graphic3d_CullingTool::*)() const) static_cast<Standard_Integer (Graphic3d_CullingTool::*)() const>(&Graphic3d_CullingTool::ViewportHeight),
             R"#(None)#" )
        .def("WorldViewProjState",
             (const Graphic3d_WorldViewProjState & (Graphic3d_CullingTool::*)() const) static_cast<const Graphic3d_WorldViewProjState & (Graphic3d_CullingTool::*)() const>(&Graphic3d_CullingTool::WorldViewProjState),
             R"#(Returns state of current world view projection transformation matrices.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_DataStructureManager ,opencascade::handle<Graphic3d_DataStructureManager>  , Standard_Transient >>(m.attr("Graphic3d_DataStructureManager"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_DataStructureManager::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_DataStructureManager::*)() const>(&Graphic3d_DataStructureManager::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_DataStructureManager::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_DataStructureManager::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_FrameStats ,opencascade::handle<Graphic3d_FrameStats> ,Py_Graphic3d_FrameStats , Standard_Transient >>(m.attr("Graphic3d_FrameStats"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_FrameStats::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_FrameStats::*)() const>(&Graphic3d_FrameStats::DynamicType),
             R"#(None)#" )
        .def("UpdateInterval",
             (Standard_Real (Graphic3d_FrameStats::*)() const) static_cast<Standard_Real (Graphic3d_FrameStats::*)() const>(&Graphic3d_FrameStats::UpdateInterval),
             R"#(Returns interval in seconds for updating meters across several frames; 1 second by default.)#" )
        .def("SetUpdateInterval",
             (void (Graphic3d_FrameStats::*)( Standard_Real  ) ) static_cast<void (Graphic3d_FrameStats::*)( Standard_Real  ) >(&Graphic3d_FrameStats::SetUpdateInterval),
             R"#(Sets interval in seconds for updating values.)#"  , py::arg("theInterval"))
        .def("IsLongLineFormat",
             (Standard_Boolean (Graphic3d_FrameStats::*)() const) static_cast<Standard_Boolean (Graphic3d_FrameStats::*)() const>(&Graphic3d_FrameStats::IsLongLineFormat),
             R"#(Prefer longer lines over more greater of lines.)#" )
        .def("SetLongLineFormat",
             (void (Graphic3d_FrameStats::*)( Standard_Boolean  ) ) static_cast<void (Graphic3d_FrameStats::*)( Standard_Boolean  ) >(&Graphic3d_FrameStats::SetLongLineFormat),
             R"#(Set if format should prefer longer lines over greater number of lines.)#"  , py::arg("theValue"))
        .def("FrameStart",
             (void (Graphic3d_FrameStats::*)( const opencascade::handle<Graphic3d_CView> & ,  bool  ) ) static_cast<void (Graphic3d_FrameStats::*)( const opencascade::handle<Graphic3d_CView> & ,  bool  ) >(&Graphic3d_FrameStats::FrameStart),
             R"#(Frame redraw started.)#"  , py::arg("theView"),  py::arg("theIsImmediateOnly"))
        .def("FrameEnd",
             (void (Graphic3d_FrameStats::*)( const opencascade::handle<Graphic3d_CView> & ,  bool  ) ) static_cast<void (Graphic3d_FrameStats::*)( const opencascade::handle<Graphic3d_CView> & ,  bool  ) >(&Graphic3d_FrameStats::FrameEnd),
             R"#(Frame redraw finished.)#"  , py::arg("theView"),  py::arg("theIsImmediateOnly"))
        .def("FormatStats",
             (TCollection_AsciiString (Graphic3d_FrameStats::*)( Graphic3d_RenderingParams::PerfCounters  ) const) static_cast<TCollection_AsciiString (Graphic3d_FrameStats::*)( Graphic3d_RenderingParams::PerfCounters  ) const>(&Graphic3d_FrameStats::FormatStats),
             R"#(Returns formatted string.)#"  , py::arg("theFlags"))
        .def("FormatStats",
             (void (Graphic3d_FrameStats::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> & ,  Graphic3d_RenderingParams::PerfCounters  ) const) static_cast<void (Graphic3d_FrameStats::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> & ,  Graphic3d_RenderingParams::PerfCounters  ) const>(&Graphic3d_FrameStats::FormatStats),
             R"#(Fill in the dictionary with formatted statistic info.)#"  , py::arg("theDict"),  py::arg("theFlags"))
        .def("FrameDuration",
             (Standard_Real (Graphic3d_FrameStats::*)() const) static_cast<Standard_Real (Graphic3d_FrameStats::*)() const>(&Graphic3d_FrameStats::FrameDuration),
             R"#(Returns duration of the last frame in seconds.)#" )
        .def("FrameRate",
             (Standard_Real (Graphic3d_FrameStats::*)() const) static_cast<Standard_Real (Graphic3d_FrameStats::*)() const>(&Graphic3d_FrameStats::FrameRate),
             R"#(Returns FPS (frames per seconds, elapsed time). This number indicates an actual frame rate averaged for several frames within UpdateInterval() duration, basing on a real elapsed time between updates.)#" )
        .def("FrameRateCpu",
             (Standard_Real (Graphic3d_FrameStats::*)() const) static_cast<Standard_Real (Graphic3d_FrameStats::*)() const>(&Graphic3d_FrameStats::FrameRateCpu),
             R"#(Returns CPU FPS (frames per seconds, CPU time). This number indicates a PREDICTED frame rate, basing on CPU elapsed time between updates and NOT real elapsed time (which might include periods of CPU inactivity). Number is expected to be greater then actual frame rate returned by FrameRate(). Values significantly greater actual frame rate indicate that rendering is limited by GPU performance (CPU is stalled in-between), while values around actual frame rate indicate rendering being limited by CPU performance (GPU is stalled in-between).)#" )
        .def("CounterValue",
             (Standard_Size (Graphic3d_FrameStats::*)( Graphic3d_FrameStatsCounter  ) const) static_cast<Standard_Size (Graphic3d_FrameStats::*)( Graphic3d_FrameStatsCounter  ) const>(&Graphic3d_FrameStats::CounterValue),
             R"#(Returns value of specified counter, cached between stats updates. Should NOT be called between ::FrameStart() and ::FrameEnd() calls.)#"  , py::arg("theCounter"))
        .def("TimerValue",
             (Standard_Real (Graphic3d_FrameStats::*)( Graphic3d_FrameStatsTimer  ) const) static_cast<Standard_Real (Graphic3d_FrameStats::*)( Graphic3d_FrameStatsTimer  ) const>(&Graphic3d_FrameStats::TimerValue),
             R"#(Returns value of specified timer for modification, should be called between ::FrameStart() and ::FrameEnd() calls. Should NOT be called between ::FrameStart() and ::FrameEnd() calls.)#"  , py::arg("theTimer"))
        .def("HasCulledLayers",
             (Standard_Boolean (Graphic3d_FrameStats::*)() const) static_cast<Standard_Boolean (Graphic3d_FrameStats::*)() const>(&Graphic3d_FrameStats::HasCulledLayers),
             R"#(Returns TRUE if some Layers have been culled.)#" )
        .def("HasCulledStructs",
             (Standard_Boolean (Graphic3d_FrameStats::*)() const) static_cast<Standard_Boolean (Graphic3d_FrameStats::*)() const>(&Graphic3d_FrameStats::HasCulledStructs),
             R"#(Returns TRUE if some structures have been culled.)#" )
        .def("LastDataFrame",
             (const Graphic3d_FrameStatsData & (Graphic3d_FrameStats::*)() const) static_cast<const Graphic3d_FrameStatsData & (Graphic3d_FrameStats::*)() const>(&Graphic3d_FrameStats::LastDataFrame),
             R"#(Returns last data frame, cached between stats updates. Should NOT be called between ::FrameStart() and ::FrameEnd() calls.)#" )
        .def("LastDataFrameIndex",
             (Standard_Integer (Graphic3d_FrameStats::*)() const) static_cast<Standard_Integer (Graphic3d_FrameStats::*)() const>(&Graphic3d_FrameStats::LastDataFrameIndex),
             R"#(Returns last data frame index.)#" )
        .def("DataFrames",
             (const NCollection_Array1<Graphic3d_FrameStatsData> & (Graphic3d_FrameStats::*)() const) static_cast<const NCollection_Array1<Graphic3d_FrameStatsData> & (Graphic3d_FrameStats::*)() const>(&Graphic3d_FrameStats::DataFrames),
             R"#(Returns data frames.)#" )
        .def("ChangeDataFrames",
             (NCollection_Array1<Graphic3d_FrameStatsData> & (Graphic3d_FrameStats::*)() ) static_cast<NCollection_Array1<Graphic3d_FrameStatsData> & (Graphic3d_FrameStats::*)() >(&Graphic3d_FrameStats::ChangeDataFrames),
             R"#(Returns data frames.)#" )
        .def("ChangeCounter",
             (Standard_Size & (Graphic3d_FrameStats::*)( Graphic3d_FrameStatsCounter  ) ) static_cast<Standard_Size & (Graphic3d_FrameStats::*)( Graphic3d_FrameStatsCounter  ) >(&Graphic3d_FrameStats::ChangeCounter),
             R"#(Returns value of specified counter for modification, should be called between ::FrameStart() and ::FrameEnd() calls.)#"  , py::arg("theCounter"))
        .def("ChangeTimer",
             (Standard_Real & (Graphic3d_FrameStats::*)( Graphic3d_FrameStatsTimer  ) ) static_cast<Standard_Real & (Graphic3d_FrameStats::*)( Graphic3d_FrameStatsTimer  ) >(&Graphic3d_FrameStats::ChangeTimer),
             R"#(Returns value of specified timer for modification, should be called between ::FrameStart() and ::FrameEnd() calls.)#"  , py::arg("theTimer"))
        .def("ActiveDataFrame",
             (Graphic3d_FrameStatsDataTmp & (Graphic3d_FrameStats::*)() ) static_cast<Graphic3d_FrameStatsDataTmp & (Graphic3d_FrameStats::*)() >(&Graphic3d_FrameStats::ActiveDataFrame),
             R"#(Returns currently filling data frame for modification, should be called between ::FrameStart() and ::FrameEnd() calls.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_FrameStats::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_FrameStats::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_FrameStatsData , shared_ptr<Graphic3d_FrameStatsData>  >>(m.attr("Graphic3d_FrameStatsData"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("FrameRate",
             (Standard_Real (Graphic3d_FrameStatsData::*)() const) static_cast<Standard_Real (Graphic3d_FrameStatsData::*)() const>(&Graphic3d_FrameStatsData::FrameRate),
             R"#(Returns FPS (frames per seconds, elapsed time). This number indicates an actual frame rate averaged for several frames within UpdateInterval() duration, basing on a real elapsed time between updates.)#" )
        .def("FrameRateCpu",
             (Standard_Real (Graphic3d_FrameStatsData::*)() const) static_cast<Standard_Real (Graphic3d_FrameStatsData::*)() const>(&Graphic3d_FrameStatsData::FrameRateCpu),
             R"#(Returns CPU FPS (frames per seconds, CPU time). This number indicates a PREDICTED frame rate, basing on CPU elapsed time between updates and NOT real elapsed time (which might include periods of CPU inactivity). Number is expected to be greater then actual frame rate returned by FrameRate(). Values significantly greater actual frame rate indicate that rendering is limited by GPU performance (CPU is stalled in-between), while values around actual frame rate indicate rendering being limited by CPU performance (GPU is stalled in-between).)#" )
        .def("CounterValue",
             (Standard_Size (Graphic3d_FrameStatsData::*)( Graphic3d_FrameStatsCounter  ) const) static_cast<Standard_Size (Graphic3d_FrameStatsData::*)( Graphic3d_FrameStatsCounter  ) const>(&Graphic3d_FrameStatsData::CounterValue),
             R"#(Get counter value.)#"  , py::arg("theIndex"))
        .def("TimerValue",
             (Standard_Real (Graphic3d_FrameStatsData::*)( Graphic3d_FrameStatsTimer  ) const) static_cast<Standard_Real (Graphic3d_FrameStatsData::*)( Graphic3d_FrameStatsTimer  ) const>(&Graphic3d_FrameStatsData::TimerValue),
             R"#(Get timer value.)#"  , py::arg("theIndex"))
        .def("Reset",
             (void (Graphic3d_FrameStatsData::*)() ) static_cast<void (Graphic3d_FrameStatsData::*)() >(&Graphic3d_FrameStatsData::Reset),
             R"#(Reset data.)#" )
        .def("FillMax",
             (void (Graphic3d_FrameStatsData::*)( const Graphic3d_FrameStatsData &  ) ) static_cast<void (Graphic3d_FrameStatsData::*)( const Graphic3d_FrameStatsData &  ) >(&Graphic3d_FrameStatsData::FillMax),
             R"#(Fill with maximum values.)#"  , py::arg("theOther"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Fresnel , shared_ptr<Graphic3d_Fresnel>  >>(m.attr("Graphic3d_Fresnel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Serialize",
             (Graphic3d_Vec4 (Graphic3d_Fresnel::*)() const) static_cast<Graphic3d_Vec4 (Graphic3d_Fresnel::*)() const>(&Graphic3d_Fresnel::Serialize),
             R"#(Returns serialized representation of Fresnel factor.)#" )
        .def("FresnelType",
             (Graphic3d_FresnelModel (Graphic3d_Fresnel::*)() const) static_cast<Graphic3d_FresnelModel (Graphic3d_Fresnel::*)() const>(&Graphic3d_Fresnel::FresnelType),
             R"#(Returns type of Fresnel.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("CreateSchlick_s",
                    (Graphic3d_Fresnel (*)(  const NCollection_Vec3<Standard_ShortReal> &  ) ) static_cast<Graphic3d_Fresnel (*)(  const NCollection_Vec3<Standard_ShortReal> &  ) >(&Graphic3d_Fresnel::CreateSchlick),
                    R"#(Creates Schlick's approximation of Fresnel factor.)#"  , py::arg("theSpecularColor"))
        .def_static("CreateConstant_s",
                    (Graphic3d_Fresnel (*)( const Standard_ShortReal  ) ) static_cast<Graphic3d_Fresnel (*)( const Standard_ShortReal  ) >(&Graphic3d_Fresnel::CreateConstant),
                    R"#(Creates Fresnel factor for constant reflection.)#"  , py::arg("theReflection"))
        .def_static("CreateDielectric_s",
                    (Graphic3d_Fresnel (*)( Standard_ShortReal  ) ) static_cast<Graphic3d_Fresnel (*)( Standard_ShortReal  ) >(&Graphic3d_Fresnel::CreateDielectric),
                    R"#(Creates Fresnel factor for physical-based dielectric model.)#"  , py::arg("theRefractionIndex"))
        .def_static("CreateConductor_s",
                    (Graphic3d_Fresnel (*)( Standard_ShortReal ,  Standard_ShortReal  ) ) static_cast<Graphic3d_Fresnel (*)( Standard_ShortReal ,  Standard_ShortReal  ) >(&Graphic3d_Fresnel::CreateConductor),
                    R"#(Creates Fresnel factor for physical-based conductor model.)#"  , py::arg("theRefractionIndex"),  py::arg("theAbsorptionIndex"))
        .def_static("CreateConductor_s",
                    (Graphic3d_Fresnel (*)(  const NCollection_Vec3<Standard_ShortReal> & ,   const NCollection_Vec3<Standard_ShortReal> &  ) ) static_cast<Graphic3d_Fresnel (*)(  const NCollection_Vec3<Standard_ShortReal> & ,   const NCollection_Vec3<Standard_ShortReal> &  ) >(&Graphic3d_Fresnel::CreateConductor),
                    R"#(Creates Fresnel factor for physical-based conductor model (spectral version).)#"  , py::arg("theRefractionIndex"),  py::arg("theAbsorptionIndex"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_GraduatedTrihedron , shared_ptr<Graphic3d_GraduatedTrihedron>  >>(m.attr("Graphic3d_GraduatedTrihedron"))
    // constructors
        .def(py::init< const TCollection_AsciiString &,const Font_FontAspect &,const Standard_Integer,const TCollection_AsciiString &,const Font_FontAspect &,const Standard_Integer,const Standard_ShortReal,const Quantity_Color,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theNamesFont")=static_cast<const TCollection_AsciiString &>("Arial"),  py::arg("theNamesStyle")=static_cast<const Font_FontAspect &>(Font_FA_Bold),  py::arg("theNamesSize")=static_cast<const Standard_Integer>(12),  py::arg("theValuesFont")=static_cast<const TCollection_AsciiString &>("Arial"),  py::arg("theValuesStyle")=static_cast<const Font_FontAspect &>(Font_FA_Regular),  py::arg("theValuesSize")=static_cast<const Standard_Integer>(12),  py::arg("theArrowsLength")=static_cast<const Standard_ShortReal>(30.0f),  py::arg("theGridColor")=static_cast<const Quantity_Color>(Quantity_NOC_WHITE),  py::arg("theToDrawGrid")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theToDrawAxes")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("ChangeXAxisAspect",
             (Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)() ) static_cast<Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)() >(&Graphic3d_GraduatedTrihedron::ChangeXAxisAspect),
             R"#(None)#" )
        .def("ChangeYAxisAspect",
             (Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)() ) static_cast<Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)() >(&Graphic3d_GraduatedTrihedron::ChangeYAxisAspect),
             R"#(None)#" )
        .def("ChangeZAxisAspect",
             (Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)() ) static_cast<Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)() >(&Graphic3d_GraduatedTrihedron::ChangeZAxisAspect),
             R"#(None)#" )
        .def("ChangeAxisAspect",
             (Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)( const Standard_Integer  ) ) static_cast<Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)( const Standard_Integer  ) >(&Graphic3d_GraduatedTrihedron::ChangeAxisAspect),
             R"#(None)#"  , py::arg("theIndex"))
        .def("XAxisAspect",
             (const Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)() const) static_cast<const Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)() const>(&Graphic3d_GraduatedTrihedron::XAxisAspect),
             R"#(None)#" )
        .def("YAxisAspect",
             (const Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)() const) static_cast<const Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)() const>(&Graphic3d_GraduatedTrihedron::YAxisAspect),
             R"#(None)#" )
        .def("ZAxisAspect",
             (const Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)() const) static_cast<const Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)() const>(&Graphic3d_GraduatedTrihedron::ZAxisAspect),
             R"#(None)#" )
        .def("AxisAspect",
             (const Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)( const Standard_Integer  ) const) static_cast<const Graphic3d_AxisAspect & (Graphic3d_GraduatedTrihedron::*)( const Standard_Integer  ) const>(&Graphic3d_GraduatedTrihedron::AxisAspect),
             R"#(None)#"  , py::arg("theIndex"))
        .def("ArrowsLength",
             (Standard_ShortReal (Graphic3d_GraduatedTrihedron::*)() const) static_cast<Standard_ShortReal (Graphic3d_GraduatedTrihedron::*)() const>(&Graphic3d_GraduatedTrihedron::ArrowsLength),
             R"#(None)#" )
        .def("SetArrowsLength",
             (void (Graphic3d_GraduatedTrihedron::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_GraduatedTrihedron::*)( const Standard_ShortReal  ) >(&Graphic3d_GraduatedTrihedron::SetArrowsLength),
             R"#(None)#"  , py::arg("theValue"))
        .def("GridColor",
             (const Quantity_Color & (Graphic3d_GraduatedTrihedron::*)() const) static_cast<const Quantity_Color & (Graphic3d_GraduatedTrihedron::*)() const>(&Graphic3d_GraduatedTrihedron::GridColor),
             R"#(None)#" )
        .def("SetGridColor",
             (void (Graphic3d_GraduatedTrihedron::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_GraduatedTrihedron::*)( const Quantity_Color &  ) >(&Graphic3d_GraduatedTrihedron::SetGridColor),
             R"#(None)#"  , py::arg("theColor"))
        .def("ToDrawGrid",
             (Standard_Boolean (Graphic3d_GraduatedTrihedron::*)() const) static_cast<Standard_Boolean (Graphic3d_GraduatedTrihedron::*)() const>(&Graphic3d_GraduatedTrihedron::ToDrawGrid),
             R"#(None)#" )
        .def("SetDrawGrid",
             (void (Graphic3d_GraduatedTrihedron::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_GraduatedTrihedron::*)( const Standard_Boolean  ) >(&Graphic3d_GraduatedTrihedron::SetDrawGrid),
             R"#(None)#"  , py::arg("theToDraw"))
        .def("ToDrawAxes",
             (Standard_Boolean (Graphic3d_GraduatedTrihedron::*)() const) static_cast<Standard_Boolean (Graphic3d_GraduatedTrihedron::*)() const>(&Graphic3d_GraduatedTrihedron::ToDrawAxes),
             R"#(None)#" )
        .def("SetDrawAxes",
             (void (Graphic3d_GraduatedTrihedron::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_GraduatedTrihedron::*)( const Standard_Boolean  ) >(&Graphic3d_GraduatedTrihedron::SetDrawAxes),
             R"#(None)#"  , py::arg("theToDraw"))
        .def("NamesFont",
             (const TCollection_AsciiString & (Graphic3d_GraduatedTrihedron::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_GraduatedTrihedron::*)() const>(&Graphic3d_GraduatedTrihedron::NamesFont),
             R"#(None)#" )
        .def("SetNamesFont",
             (void (Graphic3d_GraduatedTrihedron::*)( const TCollection_AsciiString &  ) ) static_cast<void (Graphic3d_GraduatedTrihedron::*)( const TCollection_AsciiString &  ) >(&Graphic3d_GraduatedTrihedron::SetNamesFont),
             R"#(None)#"  , py::arg("theFont"))
        .def("NamesFontAspect",
             (Font_FontAspect (Graphic3d_GraduatedTrihedron::*)() const) static_cast<Font_FontAspect (Graphic3d_GraduatedTrihedron::*)() const>(&Graphic3d_GraduatedTrihedron::NamesFontAspect),
             R"#(None)#" )
        .def("SetNamesFontAspect",
             (void (Graphic3d_GraduatedTrihedron::*)( Font_FontAspect  ) ) static_cast<void (Graphic3d_GraduatedTrihedron::*)( Font_FontAspect  ) >(&Graphic3d_GraduatedTrihedron::SetNamesFontAspect),
             R"#(None)#"  , py::arg("theAspect"))
        .def("NamesSize",
             (Standard_Integer (Graphic3d_GraduatedTrihedron::*)() const) static_cast<Standard_Integer (Graphic3d_GraduatedTrihedron::*)() const>(&Graphic3d_GraduatedTrihedron::NamesSize),
             R"#(None)#" )
        .def("SetNamesSize",
             (void (Graphic3d_GraduatedTrihedron::*)( const Standard_Integer  ) ) static_cast<void (Graphic3d_GraduatedTrihedron::*)( const Standard_Integer  ) >(&Graphic3d_GraduatedTrihedron::SetNamesSize),
             R"#(None)#"  , py::arg("theValue"))
        .def("ValuesFont",
             (const TCollection_AsciiString & (Graphic3d_GraduatedTrihedron::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_GraduatedTrihedron::*)() const>(&Graphic3d_GraduatedTrihedron::ValuesFont),
             R"#(None)#" )
        .def("SetValuesFont",
             (void (Graphic3d_GraduatedTrihedron::*)( const TCollection_AsciiString &  ) ) static_cast<void (Graphic3d_GraduatedTrihedron::*)( const TCollection_AsciiString &  ) >(&Graphic3d_GraduatedTrihedron::SetValuesFont),
             R"#(None)#"  , py::arg("theFont"))
        .def("ValuesFontAspect",
             (Font_FontAspect (Graphic3d_GraduatedTrihedron::*)() const) static_cast<Font_FontAspect (Graphic3d_GraduatedTrihedron::*)() const>(&Graphic3d_GraduatedTrihedron::ValuesFontAspect),
             R"#(None)#" )
        .def("SetValuesFontAspect",
             (void (Graphic3d_GraduatedTrihedron::*)( Font_FontAspect  ) ) static_cast<void (Graphic3d_GraduatedTrihedron::*)( Font_FontAspect  ) >(&Graphic3d_GraduatedTrihedron::SetValuesFontAspect),
             R"#(None)#"  , py::arg("theAspect"))
        .def("ValuesSize",
             (Standard_Integer (Graphic3d_GraduatedTrihedron::*)() const) static_cast<Standard_Integer (Graphic3d_GraduatedTrihedron::*)() const>(&Graphic3d_GraduatedTrihedron::ValuesSize),
             R"#(None)#" )
        .def("SetValuesSize",
             (void (Graphic3d_GraduatedTrihedron::*)( const Standard_Integer  ) ) static_cast<void (Graphic3d_GraduatedTrihedron::*)( const Standard_Integer  ) >(&Graphic3d_GraduatedTrihedron::SetValuesSize),
             R"#(None)#"  , py::arg("theValue"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_GraphicDriver ,opencascade::handle<Graphic3d_GraphicDriver> ,Py_Graphic3d_GraphicDriver , Standard_Transient >>(m.attr("Graphic3d_GraphicDriver"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_GraphicDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_GraphicDriver::*)() const>(&Graphic3d_GraphicDriver::DynamicType),
             R"#(None)#" )
        .def("InquireLimit",
             (Standard_Integer (Graphic3d_GraphicDriver::*)( const Graphic3d_TypeOfLimit  ) const) static_cast<Standard_Integer (Graphic3d_GraphicDriver::*)( const Graphic3d_TypeOfLimit  ) const>(&Graphic3d_GraphicDriver::InquireLimit),
             R"#(Request limit of graphic resource of specific type.)#"  , py::arg("theType"))
        .def("InquireLightLimit",
             (Standard_Integer (Graphic3d_GraphicDriver::*)() const) static_cast<Standard_Integer (Graphic3d_GraphicDriver::*)() const>(&Graphic3d_GraphicDriver::InquireLightLimit),
             R"#(Request maximum number of active light sources supported by driver and hardware.)#" )
        .def("InquirePlaneLimit",
             (Standard_Integer (Graphic3d_GraphicDriver::*)() const) static_cast<Standard_Integer (Graphic3d_GraphicDriver::*)() const>(&Graphic3d_GraphicDriver::InquirePlaneLimit),
             R"#(Request maximum number of active clipping planes supported by driver and hardware.)#" )
        .def("InquireViewLimit",
             (Standard_Integer (Graphic3d_GraphicDriver::*)() const) static_cast<Standard_Integer (Graphic3d_GraphicDriver::*)() const>(&Graphic3d_GraphicDriver::InquireViewLimit),
             R"#(Request maximum number of views supported by driver.)#" )
        .def("CreateStructure",
             (opencascade::handle<Graphic3d_CStructure> (Graphic3d_GraphicDriver::*)( const opencascade::handle<Graphic3d_StructureManager> &  ) ) static_cast<opencascade::handle<Graphic3d_CStructure> (Graphic3d_GraphicDriver::*)( const opencascade::handle<Graphic3d_StructureManager> &  ) >(&Graphic3d_GraphicDriver::CreateStructure),
             R"#(Creates new empty graphic structure)#"  , py::arg("theManager"))
        .def("RemoveStructure",
             (void (Graphic3d_GraphicDriver::*)( opencascade::handle<Graphic3d_CStructure> &  ) ) static_cast<void (Graphic3d_GraphicDriver::*)( opencascade::handle<Graphic3d_CStructure> &  ) >(&Graphic3d_GraphicDriver::RemoveStructure),
             R"#(Removes structure from graphic driver and releases its resources.)#"  , py::arg("theCStructure"))
        .def("CreateView",
             (opencascade::handle<Graphic3d_CView> (Graphic3d_GraphicDriver::*)( const opencascade::handle<Graphic3d_StructureManager> &  ) ) static_cast<opencascade::handle<Graphic3d_CView> (Graphic3d_GraphicDriver::*)( const opencascade::handle<Graphic3d_StructureManager> &  ) >(&Graphic3d_GraphicDriver::CreateView),
             R"#(Creates new view for this graphic driver.)#"  , py::arg("theMgr"))
        .def("RemoveView",
             (void (Graphic3d_GraphicDriver::*)( const opencascade::handle<Graphic3d_CView> &  ) ) static_cast<void (Graphic3d_GraphicDriver::*)( const opencascade::handle<Graphic3d_CView> &  ) >(&Graphic3d_GraphicDriver::RemoveView),
             R"#(Removes view from graphic driver and releases its resources.)#"  , py::arg("theView"))
        .def("EnableVBO",
             (void (Graphic3d_GraphicDriver::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_GraphicDriver::*)( const Standard_Boolean  ) >(&Graphic3d_GraphicDriver::EnableVBO),
             R"#(enables/disables usage of OpenGL vertex buffer arrays while drawing primitiev arrays)#"  , py::arg("status"))
        .def("MemoryInfo",
             (Standard_Boolean (Graphic3d_GraphicDriver::*)( Standard_Size & ,  TCollection_AsciiString &  ) const) static_cast<Standard_Boolean (Graphic3d_GraphicDriver::*)( Standard_Size & ,  TCollection_AsciiString &  ) const>(&Graphic3d_GraphicDriver::MemoryInfo),
             R"#(Returns information about GPU memory usage.)#"  , py::arg("theFreeBytes"),  py::arg("theInfo"))
        .def("DefaultTextHeight",
             (Standard_ShortReal (Graphic3d_GraphicDriver::*)() const) static_cast<Standard_ShortReal (Graphic3d_GraphicDriver::*)() const>(&Graphic3d_GraphicDriver::DefaultTextHeight),
             R"#(None)#" )
        .def("TextSize",
             (void (Graphic3d_GraphicDriver::*)( const opencascade::handle<Graphic3d_CView> & ,  const Standard_CString ,  const Standard_ShortReal ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) const) static_cast<void (Graphic3d_GraphicDriver::*)( const opencascade::handle<Graphic3d_CView> & ,  const Standard_CString ,  const Standard_ShortReal ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) const>(&Graphic3d_GraphicDriver::TextSize),
             R"#(Computes text width.)#"  , py::arg("theView"),  py::arg("theText"),  py::arg("theHeight"),  py::arg("theWidth"),  py::arg("theAscent"),  py::arg("theDescent"))
        .def("InsertLayerBefore",
             (void (Graphic3d_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (Graphic3d_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) >(&Graphic3d_GraphicDriver::InsertLayerBefore),
             R"#(Adds a layer to all views. To add a structure to desired layer on display it is necessary to set the layer ID for the structure.)#"  , py::arg("theNewLayerId"),  py::arg("theSettings"),  py::arg("theLayerAfter"))
        .def("InsertLayerAfter",
             (void (Graphic3d_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (Graphic3d_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) >(&Graphic3d_GraphicDriver::InsertLayerAfter),
             R"#(Adds a layer to all views.)#"  , py::arg("theNewLayerId"),  py::arg("theSettings"),  py::arg("theLayerBefore"))
        .def("RemoveZLayer",
             (void (Graphic3d_GraphicDriver::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (Graphic3d_GraphicDriver::*)( const Graphic3d_ZLayerId  ) >(&Graphic3d_GraphicDriver::RemoveZLayer),
             R"#(Removes Z layer. All structures displayed at the moment in layer will be displayed in default layer (the bottom-level z layer). By default, there are always default bottom-level layer that can't be removed. The passed theLayerId should be not less than 0 (reserved for default layers that can not be removed).)#"  , py::arg("theLayerId"))
        .def("ZLayers",
             (void (Graphic3d_GraphicDriver::*)( NCollection_Sequence<Standard_Integer> &  ) const) static_cast<void (Graphic3d_GraphicDriver::*)( NCollection_Sequence<Standard_Integer> &  ) const>(&Graphic3d_GraphicDriver::ZLayers),
             R"#(Returns list of Z layers defined for the graphical driver.)#"  , py::arg("theLayerSeq"))
        .def("SetZLayerSettings",
             (void (Graphic3d_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) ) static_cast<void (Graphic3d_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) >(&Graphic3d_GraphicDriver::SetZLayerSettings),
             R"#(Sets the settings for a single Z layer.)#"  , py::arg("theLayerId"),  py::arg("theSettings"))
        .def("ZLayerSettings",
             (const Graphic3d_ZLayerSettings & (Graphic3d_GraphicDriver::*)( const Graphic3d_ZLayerId  ) const) static_cast<const Graphic3d_ZLayerSettings & (Graphic3d_GraphicDriver::*)( const Graphic3d_ZLayerId  ) const>(&Graphic3d_GraphicDriver::ZLayerSettings),
             R"#(Returns the settings of a single Z layer.)#"  , py::arg("theLayerId"))
        .def("ViewExists",
             (Standard_Boolean (Graphic3d_GraphicDriver::*)( const opencascade::handle<Aspect_Window> & ,  opencascade::handle<Graphic3d_CView> &  ) ) static_cast<Standard_Boolean (Graphic3d_GraphicDriver::*)( const opencascade::handle<Aspect_Window> & ,  opencascade::handle<Graphic3d_CView> &  ) >(&Graphic3d_GraphicDriver::ViewExists),
             R"#(Returns view associated with the window if it is exists and is activated. Returns Standard_True if the view associated to the window exists.)#"  , py::arg("theWindow"),  py::arg("theView"))
        .def("GetDisplayConnection",
             (const opencascade::handle<Aspect_DisplayConnection> & (Graphic3d_GraphicDriver::*)() const) static_cast<const opencascade::handle<Aspect_DisplayConnection> & (Graphic3d_GraphicDriver::*)() const>(&Graphic3d_GraphicDriver::GetDisplayConnection),
             R"#(returns Handle to display connection)#" )
        .def("NewIdentification",
             (Standard_Integer (Graphic3d_GraphicDriver::*)() ) static_cast<Standard_Integer (Graphic3d_GraphicDriver::*)() >(&Graphic3d_GraphicDriver::NewIdentification),
             R"#(Returns a new identification number for a new structure.)#" )
        .def("RemoveIdentification",
             (void (Graphic3d_GraphicDriver::*)( const Standard_Integer  ) ) static_cast<void (Graphic3d_GraphicDriver::*)( const Standard_Integer  ) >(&Graphic3d_GraphicDriver::RemoveIdentification),
             R"#(Frees the identifier of a structure.)#"  , py::arg("theId"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_GraphicDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_GraphicDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Group ,opencascade::handle<Graphic3d_Group> ,Py_Graphic3d_Group , Standard_Transient >>(m.attr("Graphic3d_Group"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_Group::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_Group::*)() const>(&Graphic3d_Group::DynamicType),
             R"#(None)#" )
        .def("Clear",
             (void (Graphic3d_Group::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_Group::*)( const Standard_Boolean  ) >(&Graphic3d_Group::Clear),
             R"#(Supress all primitives and attributes of <me>. To clear group without update in Graphic3d_StructureManager pass Standard_False as <theUpdateStructureMgr>. This used on context and viewer destruction, when the pointer to structure manager in Graphic3d_Structure could be already released (pointers are used here to avoid handle cross-reference);)#"  , py::arg("theUpdateStructureMgr")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Remove",
             (void (Graphic3d_Group::*)() ) static_cast<void (Graphic3d_Group::*)() >(&Graphic3d_Group::Remove),
             R"#(Supress the group <me> in the structure. Warning: No more graphic operations in <me> after this call. Modifies the current modelling transform persistence (pan, zoom or rotate) Get the current modelling transform persistence (pan, zoom or rotate))#" )
        .def("Aspects",
             (opencascade::handle<Graphic3d_Aspects> (Graphic3d_Group::*)() const) static_cast<opencascade::handle<Graphic3d_Aspects> (Graphic3d_Group::*)() const>(&Graphic3d_Group::Aspects),
             R"#(Return fill area aspect.)#" )
        .def("SetGroupPrimitivesAspect",
             (void (Graphic3d_Group::*)( const opencascade::handle<Graphic3d_Aspects> &  ) ) static_cast<void (Graphic3d_Group::*)( const opencascade::handle<Graphic3d_Aspects> &  ) >(&Graphic3d_Group::SetGroupPrimitivesAspect),
             R"#(Modifies the context for all the face primitives of the group.)#"  , py::arg("theAspect"))
        .def("SetPrimitivesAspect",
             (void (Graphic3d_Group::*)( const opencascade::handle<Graphic3d_Aspects> &  ) ) static_cast<void (Graphic3d_Group::*)( const opencascade::handle<Graphic3d_Aspects> &  ) >(&Graphic3d_Group::SetPrimitivesAspect),
             R"#(Modifies the current context of the group to give another aspect for all the primitives created after this call in the group.)#"  , py::arg("theAspect"))
        .def("SynchronizeAspects",
             (void (Graphic3d_Group::*)() ) static_cast<void (Graphic3d_Group::*)() >(&Graphic3d_Group::SynchronizeAspects),
             R"#(Update presentation aspects after their modification.)#" )
        .def("ReplaceAspects",
             (void (Graphic3d_Group::*)(  const NCollection_DataMap<opencascade::handle<Graphic3d_Aspects>, opencascade::handle<Graphic3d_Aspects> > &  ) ) static_cast<void (Graphic3d_Group::*)(  const NCollection_DataMap<opencascade::handle<Graphic3d_Aspects>, opencascade::handle<Graphic3d_Aspects> > &  ) >(&Graphic3d_Group::ReplaceAspects),
             R"#(Replace aspects specified in the replacement map.)#"  , py::arg("theMap"))
        .def("AddText",
             (void (Graphic3d_Group::*)( const opencascade::handle<Graphic3d_Text> & ,  const Standard_Boolean  ) ) static_cast<void (Graphic3d_Group::*)( const opencascade::handle<Graphic3d_Text> & ,  const Standard_Boolean  ) >(&Graphic3d_Group::AddText),
             R"#(Adds a text for display)#"  , py::arg("theTextParams"),  py::arg("theToEvalMinMax")=static_cast<const Standard_Boolean>(Standard_True))
        .def("AddPrimitiveArray",
             (void (Graphic3d_Group::*)( const Graphic3d_TypeOfPrimitiveArray ,  const opencascade::handle<Graphic3d_IndexBuffer> & ,  const opencascade::handle<Graphic3d_Buffer> & ,  const opencascade::handle<Graphic3d_BoundBuffer> & ,  const Standard_Boolean  ) ) static_cast<void (Graphic3d_Group::*)( const Graphic3d_TypeOfPrimitiveArray ,  const opencascade::handle<Graphic3d_IndexBuffer> & ,  const opencascade::handle<Graphic3d_Buffer> & ,  const opencascade::handle<Graphic3d_BoundBuffer> & ,  const Standard_Boolean  ) >(&Graphic3d_Group::AddPrimitiveArray),
             R"#(Adds an array of primitives for display)#"  , py::arg("theType"),  py::arg("theIndices"),  py::arg("theAttribs"),  py::arg("theBounds"),  py::arg("theToEvalMinMax")=static_cast<const Standard_Boolean>(Standard_True))
        .def("AddPrimitiveArray",
             (void (Graphic3d_Group::*)( const opencascade::handle<Graphic3d_ArrayOfPrimitives> & ,  const Standard_Boolean  ) ) static_cast<void (Graphic3d_Group::*)( const opencascade::handle<Graphic3d_ArrayOfPrimitives> & ,  const Standard_Boolean  ) >(&Graphic3d_Group::AddPrimitiveArray),
             R"#(Adds an array of primitives for display)#"  , py::arg("thePrim"),  py::arg("theToEvalMinMax")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Marker",
             (void (Graphic3d_Group::*)( const Graphic3d_Vertex & ,  const Standard_Boolean  ) ) static_cast<void (Graphic3d_Group::*)( const Graphic3d_Vertex & ,  const Standard_Boolean  ) >(&Graphic3d_Group::Marker),
             R"#(Creates a primitive array with single marker using AddPrimitiveArray().)#"  , py::arg("thePoint"),  py::arg("theToEvalMinMax")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetStencilTestOptions",
             (void (Graphic3d_Group::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_Group::*)( const Standard_Boolean  ) >(&Graphic3d_Group::SetStencilTestOptions),
             R"#(sets the stencil test to theIsEnabled state;)#"  , py::arg("theIsEnabled"))
        .def("SetFlippingOptions",
             (void (Graphic3d_Group::*)( const Standard_Boolean ,  const gp_Ax2 &  ) ) static_cast<void (Graphic3d_Group::*)( const Standard_Boolean ,  const gp_Ax2 &  ) >(&Graphic3d_Group::SetFlippingOptions),
             R"#(sets the flipping to theIsEnabled state.)#"  , py::arg("theIsEnabled"),  py::arg("theRefPlane"))
        .def("ContainsFacet",
             (bool (Graphic3d_Group::*)() const) static_cast<bool (Graphic3d_Group::*)() const>(&Graphic3d_Group::ContainsFacet),
             R"#(Returns true if the group contains Polygons, Triangles or Quadrangles.)#" )
        .def("IsDeleted",
             (Standard_Boolean (Graphic3d_Group::*)() const) static_cast<Standard_Boolean (Graphic3d_Group::*)() const>(&Graphic3d_Group::IsDeleted),
             R"#(Returns Standard_True if the group <me> is deleted. <me> is deleted after the call Remove (me) or the associated structure is deleted.)#" )
        .def("IsEmpty",
             (Standard_Boolean (Graphic3d_Group::*)() const) static_cast<Standard_Boolean (Graphic3d_Group::*)() const>(&Graphic3d_Group::IsEmpty),
             R"#(Returns Standard_True if the group <me> is empty.)#" )
        .def("SetMinMaxValues",
             (void (Graphic3d_Group::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Graphic3d_Group::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Graphic3d_Group::SetMinMaxValues),
             R"#(Sets the coordinates of the boundary box of the group.)#"  , py::arg("theXMin"),  py::arg("theYMin"),  py::arg("theZMin"),  py::arg("theXMax"),  py::arg("theYMax"),  py::arg("theZMax"))
        .def("BoundingBox",
             (const Graphic3d_BndBox4f & (Graphic3d_Group::*)() const) static_cast<const Graphic3d_BndBox4f & (Graphic3d_Group::*)() const>(&Graphic3d_Group::BoundingBox),
             R"#(Returns boundary box of the group <me> without transformation applied,)#" )
        .def("ChangeBoundingBox",
             (Graphic3d_BndBox4f & (Graphic3d_Group::*)() ) static_cast<Graphic3d_BndBox4f & (Graphic3d_Group::*)() >(&Graphic3d_Group::ChangeBoundingBox),
             R"#(Returns non-const boundary box of the group <me> without transformation applied,)#" )
        .def("Structure",
             (opencascade::handle<Graphic3d_Structure> (Graphic3d_Group::*)() const) static_cast<opencascade::handle<Graphic3d_Structure> (Graphic3d_Group::*)() const>(&Graphic3d_Group::Structure),
             R"#(Returns the structure containing the group <me>.)#" )
        .def("SetClosed",
             (void (Graphic3d_Group::*)( const bool  ) ) static_cast<void (Graphic3d_Group::*)( const bool  ) >(&Graphic3d_Group::SetClosed),
             R"#(Changes property shown that primitive arrays within this group form closed volume (do no contain open shells).)#"  , py::arg("theIsClosed"))
        .def("IsClosed",
             (bool (Graphic3d_Group::*)() const) static_cast<bool (Graphic3d_Group::*)() const>(&Graphic3d_Group::IsClosed),
             R"#(Return true if primitive arrays within this graphic group form closed volume (do no contain open shells).)#" )
        .def("Text",
             (void (Graphic3d_Group::*)( const Standard_CString ,  const Graphic3d_Vertex & ,  const Standard_Real ,  const Standard_Real ,  const Graphic3d_TextPath ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment ,  const Standard_Boolean  ) ) static_cast<void (Graphic3d_Group::*)( const Standard_CString ,  const Graphic3d_Vertex & ,  const Standard_Real ,  const Standard_Real ,  const Graphic3d_TextPath ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment ,  const Standard_Boolean  ) >(&Graphic3d_Group::Text),
             R"#(Creates the string <AText> at position <APoint>. The 3D point of attachment is projected. The text is written in the plane of projection. The attributes are given with respect to the plane of projection. AHeight : Height of text. (Relative to the Normalized Projection Coordinates (NPC) Space). AAngle : Orientation of the text (with respect to the horizontal).)#"  , py::arg("AText"),  py::arg("APoint"),  py::arg("AHeight"),  py::arg("AAngle"),  py::arg("ATp"),  py::arg("AHta"),  py::arg("AVta"),  py::arg("EvalMinMax")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Text",
             (void (Graphic3d_Group::*)( const Standard_CString ,  const Graphic3d_Vertex & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Graphic3d_Group::*)( const Standard_CString ,  const Graphic3d_Vertex & ,  const Standard_Real ,  const Standard_Boolean  ) >(&Graphic3d_Group::Text),
             R"#(Creates the string <AText> at position <APoint>. The 3D point of attachment is projected. The text is written in the plane of projection. The attributes are given with respect to the plane of projection. AHeight : Height of text. (Relative to the Normalized Projection Coordinates (NPC) Space). The other attributes have the following default values: AAngle : PI / 2. ATp : TP_RIGHT AHta : HTA_LEFT AVta : VTA_BOTTOM)#"  , py::arg("AText"),  py::arg("APoint"),  py::arg("AHeight"),  py::arg("EvalMinMax")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Text",
             (void (Graphic3d_Group::*)( const TCollection_ExtendedString & ,  const Graphic3d_Vertex & ,  const Standard_Real ,  const Standard_Real ,  const Graphic3d_TextPath ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment ,  const Standard_Boolean  ) ) static_cast<void (Graphic3d_Group::*)( const TCollection_ExtendedString & ,  const Graphic3d_Vertex & ,  const Standard_Real ,  const Standard_Real ,  const Graphic3d_TextPath ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment ,  const Standard_Boolean  ) >(&Graphic3d_Group::Text),
             R"#(Creates the string <AText> at position <APoint>. The 3D point of attachment is projected. The text is written in the plane of projection. The attributes are given with respect to the plane of projection. AHeight : Height of text. (Relative to the Normalized Projection Coordinates (NPC) Space). AAngle : Orientation of the text (with respect to the horizontal).)#"  , py::arg("AText"),  py::arg("APoint"),  py::arg("AHeight"),  py::arg("AAngle"),  py::arg("ATp"),  py::arg("AHta"),  py::arg("AVta"),  py::arg("EvalMinMax")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Text",
             (void (Graphic3d_Group::*)( const TCollection_ExtendedString & ,  const Graphic3d_Vertex & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Graphic3d_Group::*)( const TCollection_ExtendedString & ,  const Graphic3d_Vertex & ,  const Standard_Real ,  const Standard_Boolean  ) >(&Graphic3d_Group::Text),
             R"#(Creates the string <AText> at position <APoint>. The 3D point of attachment is projected. The text is written in the plane of projection. The attributes are given with respect to the plane of projection. AHeight : Height of text. (Relative to the Normalized Projection Coordinates (NPC) Space). The other attributes have the following default values: AAngle : PI / 2. ATp : TP_RIGHT AHta : HTA_LEFT AVta : VTA_BOTTOM)#"  , py::arg("AText"),  py::arg("APoint"),  py::arg("AHeight"),  py::arg("EvalMinMax")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Text",
             (void (Graphic3d_Group::*)( const Standard_CString ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const Graphic3d_TextPath ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (Graphic3d_Group::*)( const Standard_CString ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const Graphic3d_TextPath ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&Graphic3d_Group::Text),
             R"#(Creates the string <theText> at orientation <theOrientation> in 3D space.)#"  , py::arg("theTextUtf"),  py::arg("theOrientation"),  py::arg("theHeight"),  py::arg("theAngle"),  py::arg("theTp"),  py::arg("theHTA"),  py::arg("theVTA"),  py::arg("theToEvalMinMax")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theHasOwnAnchor")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Text",
             (void (Graphic3d_Group::*)( const TCollection_ExtendedString & ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const Graphic3d_TextPath ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (Graphic3d_Group::*)( const TCollection_ExtendedString & ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const Graphic3d_TextPath ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&Graphic3d_Group::Text),
             R"#(Creates the string <theText> at orientation <theOrientation> in 3D space.)#"  , py::arg("theText"),  py::arg("theOrientation"),  py::arg("theHeight"),  py::arg("theAngle"),  py::arg("theTp"),  py::arg("theHTA"),  py::arg("theVTA"),  py::arg("theToEvalMinMax")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theHasOwnAnchor")=static_cast<const Standard_Boolean>(Standard_True))
        .def("DumpJson",
             (void (Graphic3d_Group::*)( std::ostream & ,  const Standard_Integer  ) const) static_cast<void (Graphic3d_Group::*)( std::ostream & ,  const Standard_Integer  ) const>(&Graphic3d_Group::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
        .def("MinMaxValues",
             []( Graphic3d_Group &self   ){ Standard_Real  theXMin; Standard_Real  theYMin; Standard_Real  theZMin; Standard_Real  theXMax; Standard_Real  theYMax; Standard_Real  theZMax; self.MinMaxValues(theXMin,theYMin,theZMin,theXMax,theYMax,theZMax); return std::make_tuple(theXMin,theYMin,theZMin,theXMax,theYMax,theZMax); },
             R"#(Returns the coordinates of the boundary box of the group.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_Group::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_Group::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_HatchStyle ,opencascade::handle<Graphic3d_HatchStyle>  , Standard_Transient >>(m.attr("Graphic3d_HatchStyle"))
    // constructors
        .def(py::init< const opencascade::handle<Image_PixMap> & >()  , py::arg("thePattern") )
        .def(py::init< const Aspect_HatchStyle >()  , py::arg("theType") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_HatchStyle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_HatchStyle::*)() const>(&Graphic3d_HatchStyle::DynamicType),
             R"#(None)#" )
        .def("Pattern",
             (const Standard_Byte * (Graphic3d_HatchStyle::*)() const) static_cast<const Standard_Byte * (Graphic3d_HatchStyle::*)() const>(&Graphic3d_HatchStyle::Pattern),
             R"#(Returns the pattern of custom hatch style)#" )
        .def("HatchType",
             (Standard_Integer (Graphic3d_HatchStyle::*)() const) static_cast<Standard_Integer (Graphic3d_HatchStyle::*)() const>(&Graphic3d_HatchStyle::HatchType),
             R"#(In case if predefined OCCT style is used, returns index in Aspect_HatchStyle enumeration. If the style is custom, returns unique index of the style)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_HatchStyle::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_HatchStyle::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Layer ,opencascade::handle<Graphic3d_Layer>  , Standard_Transient >>(m.attr("Graphic3d_Layer"))
    // constructors
        .def(py::init< Graphic3d_ZLayerId,Standard_Integer,const opencascade::handle<Select3D_BVHBuilder3d> & >()  , py::arg("theId"),  py::arg("theNbPriorities"),  py::arg("theBuilder") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_Layer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::DynamicType),
             R"#(None)#" )
        .def("LayerId",
             (Graphic3d_ZLayerId (Graphic3d_Layer::*)() const) static_cast<Graphic3d_ZLayerId (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::LayerId),
             R"#(Return layer id.)#" )
        .def("FrustumCullingBVHBuilder",
             (const opencascade::handle<Select3D_BVHBuilder3d> & (Graphic3d_Layer::*)() const) static_cast<const opencascade::handle<Select3D_BVHBuilder3d> & (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::FrustumCullingBVHBuilder),
             R"#(Returns BVH tree builder for frustom culling.)#" )
        .def("SetFrustumCullingBVHBuilder",
             (void (Graphic3d_Layer::*)( const opencascade::handle<Select3D_BVHBuilder3d> &  ) ) static_cast<void (Graphic3d_Layer::*)( const opencascade::handle<Select3D_BVHBuilder3d> &  ) >(&Graphic3d_Layer::SetFrustumCullingBVHBuilder),
             R"#(Assigns BVH tree builder for frustom culling.)#"  , py::arg("theBuilder"))
        .def("IsImmediate",
             (Standard_Boolean (Graphic3d_Layer::*)() const) static_cast<Standard_Boolean (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::IsImmediate),
             R"#(Return true if layer was marked with immediate flag.)#" )
        .def("LayerSettings",
             (const Graphic3d_ZLayerSettings & (Graphic3d_Layer::*)() const) static_cast<const Graphic3d_ZLayerSettings & (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::LayerSettings),
             R"#(Returns settings of the layer object.)#" )
        .def("SetLayerSettings",
             (void (Graphic3d_Layer::*)( const Graphic3d_ZLayerSettings &  ) ) static_cast<void (Graphic3d_Layer::*)( const Graphic3d_ZLayerSettings &  ) >(&Graphic3d_Layer::SetLayerSettings),
             R"#(Sets settings of the layer object.)#"  , py::arg("theSettings"))
        .def("Add",
             (void (Graphic3d_Layer::*)( const Graphic3d_CStructure * ,  Standard_Integer ,  Standard_Boolean  ) ) static_cast<void (Graphic3d_Layer::*)( const Graphic3d_CStructure * ,  Standard_Integer ,  Standard_Boolean  ) >(&Graphic3d_Layer::Add),
             R"#(None)#"  , py::arg("theStruct"),  py::arg("thePriority"),  py::arg("isForChangePriority")=static_cast<Standard_Boolean>(Standard_False))
        .def("Remove",
             (bool (Graphic3d_Layer::*)( const Graphic3d_CStructure * ,  Standard_Integer & ,  Standard_Boolean  ) ) static_cast<bool (Graphic3d_Layer::*)( const Graphic3d_CStructure * ,  Standard_Integer & ,  Standard_Boolean  ) >(&Graphic3d_Layer::Remove),
             R"#(Remove structure and returns its priority, if the structure is not found, method returns negative value)#"  , py::arg("theStruct"),  py::arg("thePriority"),  py::arg("isForChangePriority")=static_cast<Standard_Boolean>(Standard_False))
        .def("NbStructures",
             (Standard_Integer (Graphic3d_Layer::*)() const) static_cast<Standard_Integer (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::NbStructures),
             R"#(Returns the number of structures)#" )
        .def("NbStructuresNotCulled",
             (Standard_Integer (Graphic3d_Layer::*)() const) static_cast<Standard_Integer (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::NbStructuresNotCulled),
             R"#(Number of NOT culled structures in the layer.)#" )
        .def("NbPriorities",
             (Standard_Integer (Graphic3d_Layer::*)() const) static_cast<Standard_Integer (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::NbPriorities),
             R"#(Returns the number of available priority levels)#" )
        .def("Append",
             (Standard_Boolean (Graphic3d_Layer::*)( const Graphic3d_Layer &  ) ) static_cast<Standard_Boolean (Graphic3d_Layer::*)( const Graphic3d_Layer &  ) >(&Graphic3d_Layer::Append),
             R"#(Append layer of acceptable type (with similar number of priorities or less). Returns Standard_False if the list can not be accepted.)#"  , py::arg("theOther"))
        .def("ArrayOfStructures",
             (const Graphic3d_ArrayOfIndexedMapOfStructure & (Graphic3d_Layer::*)() const) static_cast<const Graphic3d_ArrayOfIndexedMapOfStructure & (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::ArrayOfStructures),
             R"#(Returns array of structures.)#" )
        .def("InvalidateBVHData",
             (void (Graphic3d_Layer::*)() ) static_cast<void (Graphic3d_Layer::*)() >(&Graphic3d_Layer::InvalidateBVHData),
             R"#(Marks BVH tree for given priority list as dirty and marks primitive set for rebuild.)#" )
        .def("InvalidateBoundingBox",
             (void (Graphic3d_Layer::*)() const) static_cast<void (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::InvalidateBoundingBox),
             R"#(Marks cached bounding box as obsolete.)#" )
        .def("BoundingBox",
             (Bnd_Box (Graphic3d_Layer::*)( Standard_Integer ,  const opencascade::handle<Graphic3d_Camera> & ,  Standard_Integer ,  Standard_Integer ,  Standard_Boolean  ) const) static_cast<Bnd_Box (Graphic3d_Layer::*)( Standard_Integer ,  const opencascade::handle<Graphic3d_Camera> & ,  Standard_Integer ,  Standard_Integer ,  Standard_Boolean  ) const>(&Graphic3d_Layer::BoundingBox),
             R"#(Returns layer bounding box.)#"  , py::arg("theViewId"),  py::arg("theCamera"),  py::arg("theWindowWidth"),  py::arg("theWindowHeight"),  py::arg("theToIncludeAuxiliary"))
        .def("considerZoomPersistenceObjects",
             (Standard_Real (Graphic3d_Layer::*)( Standard_Integer ,  const opencascade::handle<Graphic3d_Camera> & ,  Standard_Integer ,  Standard_Integer  ) const) static_cast<Standard_Real (Graphic3d_Layer::*)( Standard_Integer ,  const opencascade::handle<Graphic3d_Camera> & ,  Standard_Integer ,  Standard_Integer  ) const>(&Graphic3d_Layer::considerZoomPersistenceObjects),
             R"#(Returns zoom-scale factor.)#"  , py::arg("theViewId"),  py::arg("theCamera"),  py::arg("theWindowWidth"),  py::arg("theWindowHeight"))
        .def("UpdateCulling",
             (void (Graphic3d_Layer::*)( Standard_Integer ,  const Graphic3d_CullingTool & ,  const Graphic3d_RenderingParams::FrustumCulling  ) ) static_cast<void (Graphic3d_Layer::*)( Standard_Integer ,  const Graphic3d_CullingTool & ,  const Graphic3d_RenderingParams::FrustumCulling  ) >(&Graphic3d_Layer::UpdateCulling),
             R"#(Update culling state - should be called before rendering. Traverses through BVH tree to determine which structures are in view volume.)#"  , py::arg("theViewId"),  py::arg("theSelector"),  py::arg("theFrustumCullingState"))
        .def("IsCulled",
             (bool (Graphic3d_Layer::*)() const) static_cast<bool (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::IsCulled),
             R"#(Returns TRUE if layer is empty or has been discarded entirely by culling test.)#" )
        .def("NbOfTransformPersistenceObjects",
             (Standard_Integer (Graphic3d_Layer::*)() const) static_cast<Standard_Integer (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::NbOfTransformPersistenceObjects),
             R"#(Returns number of transform persistence objects.)#" )
        .def("CullableStructuresBVH",
             (const Graphic3d_BvhCStructureSet & (Graphic3d_Layer::*)() const) static_cast<const Graphic3d_BvhCStructureSet & (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::CullableStructuresBVH),
             R"#(Returns set of Graphic3d_CStructures structures for building BVH tree.)#" )
        .def("CullableTrsfPersStructuresBVH",
             (const Graphic3d_BvhCStructureSetTrsfPers & (Graphic3d_Layer::*)() const) static_cast<const Graphic3d_BvhCStructureSetTrsfPers & (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::CullableTrsfPersStructuresBVH),
             R"#(Returns set of transform persistent Graphic3d_CStructures for building BVH tree.)#" )
        .def("NonCullableStructures",
             (const NCollection_IndexedMap<const Graphic3d_CStructure *> & (Graphic3d_Layer::*)() const) static_cast<const NCollection_IndexedMap<const Graphic3d_CStructure *> & (Graphic3d_Layer::*)() const>(&Graphic3d_Layer::NonCullableStructures),
             R"#(Returns indexed map of always rendered structures.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_Layer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_Layer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_LightSet ,opencascade::handle<Graphic3d_LightSet>  , Standard_Transient >>(m.attr("Graphic3d_LightSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_LightSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_LightSet::*)() const>(&Graphic3d_LightSet::DynamicType),
             R"#(None)#" )
        .def("Lower",
             (Standard_Integer (Graphic3d_LightSet::*)() const) static_cast<Standard_Integer (Graphic3d_LightSet::*)() const>(&Graphic3d_LightSet::Lower),
             R"#(Return lower light index.)#" )
        .def("Upper",
             (Standard_Integer (Graphic3d_LightSet::*)() const) static_cast<Standard_Integer (Graphic3d_LightSet::*)() const>(&Graphic3d_LightSet::Upper),
             R"#(Return upper light index.)#" )
        .def("IsEmpty",
             (Standard_Boolean (Graphic3d_LightSet::*)() const) static_cast<Standard_Boolean (Graphic3d_LightSet::*)() const>(&Graphic3d_LightSet::IsEmpty),
             R"#(Return TRUE if lights list is empty.)#" )
        .def("Extent",
             (Standard_Integer (Graphic3d_LightSet::*)() const) static_cast<Standard_Integer (Graphic3d_LightSet::*)() const>(&Graphic3d_LightSet::Extent),
             R"#(Return number of light sources.)#" )
        .def("Value",
             (const opencascade::handle<Graphic3d_CLight> & (Graphic3d_LightSet::*)( Standard_Integer  ) const) static_cast<const opencascade::handle<Graphic3d_CLight> & (Graphic3d_LightSet::*)( Standard_Integer  ) const>(&Graphic3d_LightSet::Value),
             R"#(Return the light source for specified index within range [Lower(), Upper()].)#"  , py::arg("theIndex"))
        .def("Contains",
             (Standard_Boolean (Graphic3d_LightSet::*)( const opencascade::handle<Graphic3d_CLight> &  ) const) static_cast<Standard_Boolean (Graphic3d_LightSet::*)( const opencascade::handle<Graphic3d_CLight> &  ) const>(&Graphic3d_LightSet::Contains),
             R"#(Return TRUE if light source is defined in this set.)#"  , py::arg("theLight"))
        .def("Add",
             (Standard_Boolean (Graphic3d_LightSet::*)( const opencascade::handle<Graphic3d_CLight> &  ) ) static_cast<Standard_Boolean (Graphic3d_LightSet::*)( const opencascade::handle<Graphic3d_CLight> &  ) >(&Graphic3d_LightSet::Add),
             R"#(Append new light source.)#"  , py::arg("theLight"))
        .def("Remove",
             (Standard_Boolean (Graphic3d_LightSet::*)( const opencascade::handle<Graphic3d_CLight> &  ) ) static_cast<Standard_Boolean (Graphic3d_LightSet::*)( const opencascade::handle<Graphic3d_CLight> &  ) >(&Graphic3d_LightSet::Remove),
             R"#(Remove light source.)#"  , py::arg("theLight"))
        .def("NbLightsOfType",
             (Standard_Integer (Graphic3d_LightSet::*)( Graphic3d_TypeOfLightSource  ) const) static_cast<Standard_Integer (Graphic3d_LightSet::*)( Graphic3d_TypeOfLightSource  ) const>(&Graphic3d_LightSet::NbLightsOfType),
             R"#(Returns total amount of lights of specified type.)#"  , py::arg("theType"))
        .def("UpdateRevision",
             (Standard_Size (Graphic3d_LightSet::*)() ) static_cast<Standard_Size (Graphic3d_LightSet::*)() >(&Graphic3d_LightSet::UpdateRevision),
             R"#(Update light sources revision.)#" )
        .def("Revision",
             (Standard_Size (Graphic3d_LightSet::*)() const) static_cast<Standard_Size (Graphic3d_LightSet::*)() const>(&Graphic3d_LightSet::Revision),
             R"#(Return light sources revision.)#" )
        .def("NbEnabled",
             (Standard_Integer (Graphic3d_LightSet::*)() const) static_cast<Standard_Integer (Graphic3d_LightSet::*)() const>(&Graphic3d_LightSet::NbEnabled),
             R"#(Returns total amount of enabled lights EXCLUDING ambient.)#" )
        .def("NbEnabledLightsOfType",
             (Standard_Integer (Graphic3d_LightSet::*)( Graphic3d_TypeOfLightSource  ) const) static_cast<Standard_Integer (Graphic3d_LightSet::*)( Graphic3d_TypeOfLightSource  ) const>(&Graphic3d_LightSet::NbEnabledLightsOfType),
             R"#(Returns total amount of enabled lights of specified type.)#"  , py::arg("theType"))
        .def("AmbientColor",
             (const Graphic3d_Vec4 & (Graphic3d_LightSet::*)() const) static_cast<const Graphic3d_Vec4 & (Graphic3d_LightSet::*)() const>(&Graphic3d_LightSet::AmbientColor),
             R"#(Returns cumulative ambient color, which is computed as sum of all enabled ambient light sources. Values are NOT clamped (can be greater than 1.0f) and alpha component is fixed to 1.0f.)#" )
        .def("KeyEnabledLong",
             (const TCollection_AsciiString & (Graphic3d_LightSet::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_LightSet::*)() const>(&Graphic3d_LightSet::KeyEnabledLong),
             R"#(Returns a string defining a list of enabled light sources as concatenation of letters 'd' (Directional), 'p' (Point), 's' (Spot) depending on the type of light source in the list. Example: "dppp".)#" )
        .def("KeyEnabledShort",
             (const TCollection_AsciiString & (Graphic3d_LightSet::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_LightSet::*)() const>(&Graphic3d_LightSet::KeyEnabledShort),
             R"#(Returns a string defining a list of enabled light sources as concatenation of letters 'd' (Directional), 'p' (Point), 's' (Spot) depending on the type of light source in the list, specified only once. Example: "dp".)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_LightSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_LightSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_MarkerImage ,opencascade::handle<Graphic3d_MarkerImage>  , Standard_Transient >>(m.attr("Graphic3d_MarkerImage"))
    // constructors
        .def(py::init< const opencascade::handle<Image_PixMap> & >()  , py::arg("theImage") )
        .def(py::init< const opencascade::handle<TColStd_HArray1OfByte> &,const Standard_Integer &,const Standard_Integer & >()  , py::arg("theBitMap"),  py::arg("theWidth"),  py::arg("theHeight") )
    // custom constructors
    // methods
        .def("GetBitMapArray",
             (opencascade::handle<TColStd_HArray1OfByte> (Graphic3d_MarkerImage::*)( const Standard_Real &  ) const) static_cast<opencascade::handle<TColStd_HArray1OfByte> (Graphic3d_MarkerImage::*)( const Standard_Real &  ) const>(&Graphic3d_MarkerImage::GetBitMapArray),
             R"#(Returns marker image as array of bytes. If an instance of the class has been initialized with image, it will be converted to bitmap based on the parameter theAlphaValue.)#"  , py::arg("theAlphaValue")=static_cast<const Standard_Real &>(0.5))
        .def("GetImage",
             (const opencascade::handle<Image_PixMap> & (Graphic3d_MarkerImage::*)() ) static_cast<const opencascade::handle<Image_PixMap> & (Graphic3d_MarkerImage::*)() >(&Graphic3d_MarkerImage::GetImage),
             R"#(Returns marker image. If an instance of the class has been initialized with a bitmap, it will be converted to image.)#" )
        .def("GetImageAlpha",
             (const opencascade::handle<Image_PixMap> & (Graphic3d_MarkerImage::*)() ) static_cast<const opencascade::handle<Image_PixMap> & (Graphic3d_MarkerImage::*)() >(&Graphic3d_MarkerImage::GetImageAlpha),
             R"#(Returns image alpha as grayscale image. Note that if an instance of the class has been initialized with a bitmap or with grayscale image this method will return exactly the same image as GetImage())#" )
        .def("GetImageId",
             (const TCollection_AsciiString & (Graphic3d_MarkerImage::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_MarkerImage::*)() const>(&Graphic3d_MarkerImage::GetImageId),
             R"#(Returns an unique ID. This ID will be used to manage resource in graphic driver.)#" )
        .def("GetImageAlphaId",
             (const TCollection_AsciiString & (Graphic3d_MarkerImage::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_MarkerImage::*)() const>(&Graphic3d_MarkerImage::GetImageAlphaId),
             R"#(Returns an unique ID. This ID will be used to manage resource in graphic driver.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_MarkerImage::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_MarkerImage::*)() const>(&Graphic3d_MarkerImage::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("GetTextureSize",
             []( Graphic3d_MarkerImage &self   ){ Standard_Integer  theWidth; Standard_Integer  theHeight; self.GetTextureSize(theWidth,theHeight); return std::make_tuple(theWidth,theHeight); },
             R"#(Returns texture size)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_MarkerImage::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_MarkerImage::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_MaterialAspect , shared_ptr<Graphic3d_MaterialAspect>  >>(m.attr("Graphic3d_MaterialAspect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Graphic3d_NameOfMaterial >()  , py::arg("theName") )
    // custom constructors
    // methods
        .def("Name",
             (Graphic3d_NameOfMaterial (Graphic3d_MaterialAspect::*)() const) static_cast<Graphic3d_NameOfMaterial (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::Name),
             R"#(Returns the material name (within predefined enumeration).)#" )
        .def("RequestedName",
             (Graphic3d_NameOfMaterial (Graphic3d_MaterialAspect::*)() const) static_cast<Graphic3d_NameOfMaterial (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::RequestedName),
             R"#(Returns the material name within predefined enumeration which has been requested (before modifications).)#" )
        .def("StringName",
             (const TCollection_AsciiString & (Graphic3d_MaterialAspect::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::StringName),
             R"#(Returns the given name of this material. This might be: - given name set by method ::SetMaterialName() - standard name for a material within enumeration - "UserDefined" for non-standard material without name specified externally.)#" )
        .def("MaterialName",
             (Standard_CString (Graphic3d_MaterialAspect::*)() const) static_cast<Standard_CString (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::MaterialName),
             R"#(Returns the given name of this material. This might be:)#" )
        .def("SetMaterialName",
             (void (Graphic3d_MaterialAspect::*)( const TCollection_AsciiString &  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( const TCollection_AsciiString &  ) >(&Graphic3d_MaterialAspect::SetMaterialName),
             R"#(The current material become a "UserDefined" material. Set the name of the "UserDefined" material.)#"  , py::arg("theName"))
        .def("Reset",
             (void (Graphic3d_MaterialAspect::*)() ) static_cast<void (Graphic3d_MaterialAspect::*)() >(&Graphic3d_MaterialAspect::Reset),
             R"#(Resets the material with the original values according to the material name but leave the current color values untouched for the material of type ASPECT.)#" )
        .def("Color",
             (const Quantity_Color & (Graphic3d_MaterialAspect::*)() const) static_cast<const Quantity_Color & (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::Color),
             R"#(Returns the diffuse color of the surface. WARNING! This method does NOT return color for Graphic3d_MATERIAL_ASPECT material (color is defined by Graphic3d_Aspects::InteriorColor()).)#" )
        .def("SetColor",
             (void (Graphic3d_MaterialAspect::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( const Quantity_Color &  ) >(&Graphic3d_MaterialAspect::SetColor),
             R"#(Modifies the ambient and diffuse color of the surface. WARNING! Has no effect for Graphic3d_MATERIAL_ASPECT material (color should be set to Graphic3d_Aspects::SetInteriorColor()).)#"  , py::arg("theColor"))
        .def("Transparency",
             (Standard_ShortReal (Graphic3d_MaterialAspect::*)() const) static_cast<Standard_ShortReal (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::Transparency),
             R"#(Returns the transparency coefficient of the surface (1.0 - Alpha); 0.0 means opaque.)#" )
        .def("Alpha",
             (Standard_ShortReal (Graphic3d_MaterialAspect::*)() const) static_cast<Standard_ShortReal (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::Alpha),
             R"#(Returns the alpha coefficient of the surface (1.0 - Transparency); 1.0 means opaque.)#" )
        .def("SetTransparency",
             (void (Graphic3d_MaterialAspect::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( const Standard_ShortReal  ) >(&Graphic3d_MaterialAspect::SetTransparency),
             R"#(Modifies the transparency coefficient of the surface, where 0 is opaque and 1 is fully transparent. Transparency is applicable to materials that have at least one of reflection modes (ambient, diffuse, specular or emissive) enabled. See also SetReflectionModeOn() and SetReflectionModeOff() methods.)#"  , py::arg("theValue"))
        .def("SetAlpha",
             (void (Graphic3d_MaterialAspect::*)( Standard_ShortReal  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( Standard_ShortReal  ) >(&Graphic3d_MaterialAspect::SetAlpha),
             R"#(Modifies the alpha coefficient of the surface, where 1.0 is opaque and 0.0 is fully transparent.)#"  , py::arg("theValue"))
        .def("AmbientColor",
             (const Quantity_Color & (Graphic3d_MaterialAspect::*)() const) static_cast<const Quantity_Color & (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::AmbientColor),
             R"#(Returns the ambient color of the surface.)#" )
        .def("SetAmbientColor",
             (void (Graphic3d_MaterialAspect::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( const Quantity_Color &  ) >(&Graphic3d_MaterialAspect::SetAmbientColor),
             R"#(Modifies the ambient color of the surface.)#"  , py::arg("theColor"))
        .def("DiffuseColor",
             (const Quantity_Color & (Graphic3d_MaterialAspect::*)() const) static_cast<const Quantity_Color & (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::DiffuseColor),
             R"#(Returns the diffuse color of the surface.)#" )
        .def("SetDiffuseColor",
             (void (Graphic3d_MaterialAspect::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( const Quantity_Color &  ) >(&Graphic3d_MaterialAspect::SetDiffuseColor),
             R"#(Modifies the diffuse color of the surface.)#"  , py::arg("theColor"))
        .def("SpecularColor",
             (const Quantity_Color & (Graphic3d_MaterialAspect::*)() const) static_cast<const Quantity_Color & (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::SpecularColor),
             R"#(Returns the specular color of the surface.)#" )
        .def("SetSpecularColor",
             (void (Graphic3d_MaterialAspect::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( const Quantity_Color &  ) >(&Graphic3d_MaterialAspect::SetSpecularColor),
             R"#(Modifies the specular color of the surface.)#"  , py::arg("theColor"))
        .def("EmissiveColor",
             (const Quantity_Color & (Graphic3d_MaterialAspect::*)() const) static_cast<const Quantity_Color & (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::EmissiveColor),
             R"#(Returns the emissive color of the surface.)#" )
        .def("SetEmissiveColor",
             (void (Graphic3d_MaterialAspect::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( const Quantity_Color &  ) >(&Graphic3d_MaterialAspect::SetEmissiveColor),
             R"#(Modifies the emissive color of the surface.)#"  , py::arg("theColor"))
        .def("Shininess",
             (Standard_ShortReal (Graphic3d_MaterialAspect::*)() const) static_cast<Standard_ShortReal (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::Shininess),
             R"#(Returns the luminosity of the surface.)#" )
        .def("SetShininess",
             (void (Graphic3d_MaterialAspect::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( const Standard_ShortReal  ) >(&Graphic3d_MaterialAspect::SetShininess),
             R"#(Modifies the luminosity of the surface. Warning: Raises MaterialDefinitionError if given value is a negative value or greater than 1.0.)#"  , py::arg("theValue"))
        .def("IncreaseShine",
             (void (Graphic3d_MaterialAspect::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( const Standard_ShortReal  ) >(&Graphic3d_MaterialAspect::IncreaseShine),
             R"#(Increases or decreases the luminosity.)#"  , py::arg("theDelta"))
        .def("RefractionIndex",
             (Standard_ShortReal (Graphic3d_MaterialAspect::*)() const) static_cast<Standard_ShortReal (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::RefractionIndex),
             R"#(Returns the refraction index of the material)#" )
        .def("SetRefractionIndex",
             (void (Graphic3d_MaterialAspect::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( const Standard_ShortReal  ) >(&Graphic3d_MaterialAspect::SetRefractionIndex),
             R"#(Modifies the refraction index of the material. Warning: Raises MaterialDefinitionError if given value is a lesser than 1.0.)#"  , py::arg("theValue"))
        .def("BSDF",
             (const Graphic3d_BSDF & (Graphic3d_MaterialAspect::*)() const) static_cast<const Graphic3d_BSDF & (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::BSDF),
             R"#(Returns BSDF (bidirectional scattering distribution function).)#" )
        .def("SetBSDF",
             (void (Graphic3d_MaterialAspect::*)( const Graphic3d_BSDF &  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( const Graphic3d_BSDF &  ) >(&Graphic3d_MaterialAspect::SetBSDF),
             R"#(Modifies the BSDF (bidirectional scattering distribution function).)#"  , py::arg("theBSDF"))
        .def("ReflectionMode",
             (Standard_Boolean (Graphic3d_MaterialAspect::*)( const Graphic3d_TypeOfReflection  ) const) static_cast<Standard_Boolean (Graphic3d_MaterialAspect::*)( const Graphic3d_TypeOfReflection  ) const>(&Graphic3d_MaterialAspect::ReflectionMode),
             R"#(Returns TRUE if the reflection mode is active, FALSE otherwise.)#"  , py::arg("theType"))
        .def("MaterialType",
             (Graphic3d_TypeOfMaterial (Graphic3d_MaterialAspect::*)() const) static_cast<Graphic3d_TypeOfMaterial (Graphic3d_MaterialAspect::*)() const>(&Graphic3d_MaterialAspect::MaterialType),
             R"#(Returns material type.)#" )
        .def("MaterialType",
             (Standard_Boolean (Graphic3d_MaterialAspect::*)( const Graphic3d_TypeOfMaterial  ) const) static_cast<Standard_Boolean (Graphic3d_MaterialAspect::*)( const Graphic3d_TypeOfMaterial  ) const>(&Graphic3d_MaterialAspect::MaterialType),
             R"#(Returns TRUE if type of this material is equal to specified type.)#"  , py::arg("theType"))
        .def("SetMaterialType",
             (void (Graphic3d_MaterialAspect::*)( const Graphic3d_TypeOfMaterial  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( const Graphic3d_TypeOfMaterial  ) >(&Graphic3d_MaterialAspect::SetMaterialType),
             R"#(Set material type.)#"  , py::arg("theType"))
        .def("IsDifferent",
             (Standard_Boolean (Graphic3d_MaterialAspect::*)( const Graphic3d_MaterialAspect &  ) const) static_cast<Standard_Boolean (Graphic3d_MaterialAspect::*)( const Graphic3d_MaterialAspect &  ) const>(&Graphic3d_MaterialAspect::IsDifferent),
             R"#(Returns TRUE if this material differs from specified one.)#"  , py::arg("theOther"))
        .def("IsEqual",
             (Standard_Boolean (Graphic3d_MaterialAspect::*)( const Graphic3d_MaterialAspect &  ) const) static_cast<Standard_Boolean (Graphic3d_MaterialAspect::*)( const Graphic3d_MaterialAspect &  ) const>(&Graphic3d_MaterialAspect::IsEqual),
             R"#(Returns TRUE if this material is identical to specified one.)#"  , py::arg("theOther"))
        .def("SetReflectionModeOff",
             (void (Graphic3d_MaterialAspect::*)( const Graphic3d_TypeOfReflection  ) ) static_cast<void (Graphic3d_MaterialAspect::*)( const Graphic3d_TypeOfReflection  ) >(&Graphic3d_MaterialAspect::SetReflectionModeOff),
             R"#(Deactivates the reflective properties of the surface with specified reflection type.)#"  , py::arg("theType"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NumberOfMaterials_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Graphic3d_MaterialAspect::NumberOfMaterials),
                    R"#(Returns the number of predefined textures.)#" )
        .def_static("MaterialName_s",
                    (Standard_CString (*)( const Standard_Integer  ) ) static_cast<Standard_CString (*)( const Standard_Integer  ) >(&Graphic3d_MaterialAspect::MaterialName),
                    R"#(Returns the name of the predefined material of specified rank within range [1, NumberOfMaterials()].)#"  , py::arg("theRank"))
        .def_static("MaterialType_s",
                    (Graphic3d_TypeOfMaterial (*)( const Standard_Integer  ) ) static_cast<Graphic3d_TypeOfMaterial (*)( const Standard_Integer  ) >(&Graphic3d_MaterialAspect::MaterialType),
                    R"#(Returns the type of the predefined material of specified rank within range [1, NumberOfMaterials()].)#"  , py::arg("theRank"))
        .def_static("MaterialFromName_s",
                    (Standard_Boolean (*)( const Standard_CString ,  Graphic3d_NameOfMaterial &  ) ) static_cast<Standard_Boolean (*)( const Standard_CString ,  Graphic3d_NameOfMaterial &  ) >(&Graphic3d_MaterialAspect::MaterialFromName),
                    R"#(Finds the material for specified name.)#"  , py::arg("theName"),  py::arg("theMat"))
        .def_static("MaterialFromName_s",
                    (Graphic3d_NameOfMaterial (*)( const Standard_CString  ) ) static_cast<Graphic3d_NameOfMaterial (*)( const Standard_CString  ) >(&Graphic3d_MaterialAspect::MaterialFromName),
                    R"#(Returns the material for specified name or Graphic3d_NOM_DEFAULT if name is unknown.)#"  , py::arg("theName"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_PolygonOffset , shared_ptr<Graphic3d_PolygonOffset>  >>(m.attr("Graphic3d_PolygonOffset"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DumpJson",
             (void (Graphic3d_PolygonOffset::*)( std::ostream & ,  const Standard_Integer  ) const) static_cast<void (Graphic3d_PolygonOffset::*)( std::ostream & ,  const Standard_Integer  ) const>(&Graphic3d_PolygonOffset::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_PresentationAttributes ,opencascade::handle<Graphic3d_PresentationAttributes>  , Standard_Transient >>(m.attr("Graphic3d_PresentationAttributes"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_PresentationAttributes::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_PresentationAttributes::*)() const>(&Graphic3d_PresentationAttributes::DynamicType),
             R"#(None)#" )
        .def("Method",
             (Aspect_TypeOfHighlightMethod (Graphic3d_PresentationAttributes::*)() const) static_cast<Aspect_TypeOfHighlightMethod (Graphic3d_PresentationAttributes::*)() const>(&Graphic3d_PresentationAttributes::Method),
             R"#(Returns highlight method, Aspect_TOHM_COLOR by default.)#" )
        .def("SetMethod",
             (void (Graphic3d_PresentationAttributes::*)( const Aspect_TypeOfHighlightMethod  ) ) static_cast<void (Graphic3d_PresentationAttributes::*)( const Aspect_TypeOfHighlightMethod  ) >(&Graphic3d_PresentationAttributes::SetMethod),
             R"#(Changes highlight method to the given one.)#"  , py::arg("theMethod"))
        .def("ColorRGBA",
             (const Quantity_ColorRGBA & (Graphic3d_PresentationAttributes::*)() const) static_cast<const Quantity_ColorRGBA & (Graphic3d_PresentationAttributes::*)() const>(&Graphic3d_PresentationAttributes::ColorRGBA),
             R"#(Returns basic presentation color (including alpha channel).)#" )
        .def("Color",
             (const Quantity_Color & (Graphic3d_PresentationAttributes::*)() const) static_cast<const Quantity_Color & (Graphic3d_PresentationAttributes::*)() const>(&Graphic3d_PresentationAttributes::Color),
             R"#(Returns basic presentation color, Quantity_NOC_WHITE by default.)#" )
        .def("SetColor",
             (void (Graphic3d_PresentationAttributes::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_PresentationAttributes::*)( const Quantity_Color &  ) >(&Graphic3d_PresentationAttributes::SetColor),
             R"#(Sets basic presentation color (RGB components, does not modifies transparency).)#"  , py::arg("theColor"))
        .def("Transparency",
             (Standard_ShortReal (Graphic3d_PresentationAttributes::*)() const) static_cast<Standard_ShortReal (Graphic3d_PresentationAttributes::*)() const>(&Graphic3d_PresentationAttributes::Transparency),
             R"#(Returns basic presentation transparency (0 - opaque, 1 - fully transparent), 0 by default (opaque).)#" )
        .def("SetTransparency",
             (void (Graphic3d_PresentationAttributes::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_PresentationAttributes::*)( const Standard_ShortReal  ) >(&Graphic3d_PresentationAttributes::SetTransparency),
             R"#(Sets basic presentation transparency (0 - opaque, 1 - fully transparent).)#"  , py::arg("theTranspCoef"))
        .def("ZLayer",
             (Graphic3d_ZLayerId (Graphic3d_PresentationAttributes::*)() const) static_cast<Graphic3d_ZLayerId (Graphic3d_PresentationAttributes::*)() const>(&Graphic3d_PresentationAttributes::ZLayer),
             R"#(Returns presentation Zlayer, Graphic3d_ZLayerId_Default by default. Graphic3d_ZLayerId_UNKNOWN means undefined (a layer of main presentation to be used).)#" )
        .def("SetZLayer",
             (void (Graphic3d_PresentationAttributes::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (Graphic3d_PresentationAttributes::*)( const Graphic3d_ZLayerId  ) >(&Graphic3d_PresentationAttributes::SetZLayer),
             R"#(Sets presentation Zlayer.)#"  , py::arg("theLayer"))
        .def("DisplayMode",
             (Standard_Integer (Graphic3d_PresentationAttributes::*)() const) static_cast<Standard_Integer (Graphic3d_PresentationAttributes::*)() const>(&Graphic3d_PresentationAttributes::DisplayMode),
             R"#(Returns display mode, 0 by default. -1 means undefined (main display mode of presentation to be used).)#" )
        .def("SetDisplayMode",
             (void (Graphic3d_PresentationAttributes::*)( const Standard_Integer  ) ) static_cast<void (Graphic3d_PresentationAttributes::*)( const Standard_Integer  ) >(&Graphic3d_PresentationAttributes::SetDisplayMode),
             R"#(Sets display mode.)#"  , py::arg("theMode"))
        .def("BasicFillAreaAspect",
             (const opencascade::handle<Graphic3d_AspectFillArea3d> & (Graphic3d_PresentationAttributes::*)() const) static_cast<const opencascade::handle<Graphic3d_AspectFillArea3d> & (Graphic3d_PresentationAttributes::*)() const>(&Graphic3d_PresentationAttributes::BasicFillAreaAspect),
             R"#(Return basic presentation fill area aspect, NULL by default. When set, might be used instead of Color() property.)#" )
        .def("SetBasicFillAreaAspect",
             (void (Graphic3d_PresentationAttributes::*)( const opencascade::handle<Graphic3d_AspectFillArea3d> &  ) ) static_cast<void (Graphic3d_PresentationAttributes::*)( const opencascade::handle<Graphic3d_AspectFillArea3d> &  ) >(&Graphic3d_PresentationAttributes::SetBasicFillAreaAspect),
             R"#(Sets basic presentation fill area aspect.)#"  , py::arg("theAspect"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_PresentationAttributes::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_PresentationAttributes::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_RenderingParams , shared_ptr<Graphic3d_RenderingParams>  >>(m.attr("Graphic3d_RenderingParams"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ResolutionRatio",
             (Standard_ShortReal (Graphic3d_RenderingParams::*)() const) static_cast<Standard_ShortReal (Graphic3d_RenderingParams::*)() const>(&Graphic3d_RenderingParams::ResolutionRatio),
             R"#(Returns resolution ratio.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_SequenceOfHClipPlane ,opencascade::handle<Graphic3d_SequenceOfHClipPlane>  , Standard_Transient >>(m.attr("Graphic3d_SequenceOfHClipPlane"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_SequenceOfHClipPlane::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_SequenceOfHClipPlane::*)() const>(&Graphic3d_SequenceOfHClipPlane::DynamicType),
             R"#(None)#" )
        .def("ToOverrideGlobal",
             (Standard_Boolean (Graphic3d_SequenceOfHClipPlane::*)() const) static_cast<Standard_Boolean (Graphic3d_SequenceOfHClipPlane::*)() const>(&Graphic3d_SequenceOfHClipPlane::ToOverrideGlobal),
             R"#(Return true if local properties should override global properties.)#" )
        .def("SetOverrideGlobal",
             (void (Graphic3d_SequenceOfHClipPlane::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_SequenceOfHClipPlane::*)( const Standard_Boolean  ) >(&Graphic3d_SequenceOfHClipPlane::SetOverrideGlobal),
             R"#(Setup flag defining if local properties should override global properties.)#"  , py::arg("theToOverride"))
        .def("IsEmpty",
             (bool (Graphic3d_SequenceOfHClipPlane::*)() const) static_cast<bool (Graphic3d_SequenceOfHClipPlane::*)() const>(&Graphic3d_SequenceOfHClipPlane::IsEmpty),
             R"#(Return TRUE if sequence is empty.)#" )
        .def("Size",
             (Standard_Integer (Graphic3d_SequenceOfHClipPlane::*)() const) static_cast<Standard_Integer (Graphic3d_SequenceOfHClipPlane::*)() const>(&Graphic3d_SequenceOfHClipPlane::Size),
             R"#(Return the number of items in sequence.)#" )
        .def("Append",
             (bool (Graphic3d_SequenceOfHClipPlane::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) ) static_cast<bool (Graphic3d_SequenceOfHClipPlane::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) >(&Graphic3d_SequenceOfHClipPlane::Append),
             R"#(Append a plane.)#"  , py::arg("theItem"))
        .def("Remove",
             (bool (Graphic3d_SequenceOfHClipPlane::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) ) static_cast<bool (Graphic3d_SequenceOfHClipPlane::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) >(&Graphic3d_SequenceOfHClipPlane::Remove),
             R"#(Remove a plane.)#"  , py::arg("theItem"))
        .def("Remove",
             (void (Graphic3d_SequenceOfHClipPlane::*)( Graphic3d_SequenceOfHClipPlane::Iterator &  ) ) static_cast<void (Graphic3d_SequenceOfHClipPlane::*)( Graphic3d_SequenceOfHClipPlane::Iterator &  ) >(&Graphic3d_SequenceOfHClipPlane::Remove),
             R"#(Remove a plane.)#"  , py::arg("theItem"))
        .def("Clear",
             (void (Graphic3d_SequenceOfHClipPlane::*)() ) static_cast<void (Graphic3d_SequenceOfHClipPlane::*)() >(&Graphic3d_SequenceOfHClipPlane::Clear),
             R"#(Clear the items out.)#" )
        .def("First",
             (const opencascade::handle<Graphic3d_ClipPlane> & (Graphic3d_SequenceOfHClipPlane::*)() const) static_cast<const opencascade::handle<Graphic3d_ClipPlane> & (Graphic3d_SequenceOfHClipPlane::*)() const>(&Graphic3d_SequenceOfHClipPlane::First),
             R"#(Return the first item in sequence.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_SequenceOfHClipPlane::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_SequenceOfHClipPlane::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ShaderAttribute ,opencascade::handle<Graphic3d_ShaderAttribute>  , Standard_Transient >>(m.attr("Graphic3d_ShaderAttribute"))
    // constructors
        .def(py::init< const TCollection_AsciiString &,const int >()  , py::arg("theName"),  py::arg("theLocation") )
    // custom constructors
    // methods
        .def("Name",
             (const TCollection_AsciiString & (Graphic3d_ShaderAttribute::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_ShaderAttribute::*)() const>(&Graphic3d_ShaderAttribute::Name),
             R"#(Returns name of shader variable.)#" )
        .def("Location",
             (int (Graphic3d_ShaderAttribute::*)() const) static_cast<int (Graphic3d_ShaderAttribute::*)() const>(&Graphic3d_ShaderAttribute::Location),
             R"#(Returns attribute location to be bound on GLSL program linkage stage.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ShaderAttribute::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ShaderAttribute::*)() const>(&Graphic3d_ShaderAttribute::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ShaderAttribute::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ShaderAttribute::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ShaderObject ,opencascade::handle<Graphic3d_ShaderObject>  , Standard_Transient >>(m.attr("Graphic3d_ShaderObject"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (Graphic3d_ShaderObject::*)() const) static_cast<Standard_Boolean (Graphic3d_ShaderObject::*)() const>(&Graphic3d_ShaderObject::IsDone),
             R"#(Checks if the shader object is valid or not.)#" )
        .def("Path",
             (const OSD_Path & (Graphic3d_ShaderObject::*)() const) static_cast<const OSD_Path & (Graphic3d_ShaderObject::*)() const>(&Graphic3d_ShaderObject::Path),
             R"#(Returns the full path to the shader source.)#" )
        .def("Source",
             (const TCollection_AsciiString & (Graphic3d_ShaderObject::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_ShaderObject::*)() const>(&Graphic3d_ShaderObject::Source),
             R"#(Returns the source code of the shader object.)#" )
        .def("Type",
             (Graphic3d_TypeOfShaderObject (Graphic3d_ShaderObject::*)() const) static_cast<Graphic3d_TypeOfShaderObject (Graphic3d_ShaderObject::*)() const>(&Graphic3d_ShaderObject::Type),
             R"#(Returns type of the shader object.)#" )
        .def("GetId",
             (const TCollection_AsciiString & (Graphic3d_ShaderObject::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_ShaderObject::*)() const>(&Graphic3d_ShaderObject::GetId),
             R"#(Returns unique ID used to manage resource in graphic driver.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ShaderObject::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ShaderObject::*)() const>(&Graphic3d_ShaderObject::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("CreateFromFile_s",
                    (opencascade::handle<Graphic3d_ShaderObject> (*)( const Graphic3d_TypeOfShaderObject ,  const TCollection_AsciiString &  ) ) static_cast<opencascade::handle<Graphic3d_ShaderObject> (*)( const Graphic3d_TypeOfShaderObject ,  const TCollection_AsciiString &  ) >(&Graphic3d_ShaderObject::CreateFromFile),
                    R"#(Creates new shader object from specified file.)#"  , py::arg("theType"),  py::arg("thePath"))
        .def_static("CreateFromSource_s",
                    (opencascade::handle<Graphic3d_ShaderObject> (*)( const Graphic3d_TypeOfShaderObject ,  const TCollection_AsciiString &  ) ) static_cast<opencascade::handle<Graphic3d_ShaderObject> (*)( const Graphic3d_TypeOfShaderObject ,  const TCollection_AsciiString &  ) >(&Graphic3d_ShaderObject::CreateFromSource),
                    R"#(Creates new shader object from specified source.)#"  , py::arg("theType"),  py::arg("theSource"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ShaderObject::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ShaderObject::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ShaderProgram ,opencascade::handle<Graphic3d_ShaderProgram>  , Standard_Transient >>(m.attr("Graphic3d_ShaderProgram"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ShaderProgram::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ShaderProgram::*)() const>(&Graphic3d_ShaderProgram::DynamicType),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)() const) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)() const>(&Graphic3d_ShaderProgram::IsDone),
             R"#(Checks if the program object is valid or not.)#" )
        .def("GetId",
             (const TCollection_AsciiString & (Graphic3d_ShaderProgram::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_ShaderProgram::*)() const>(&Graphic3d_ShaderProgram::GetId),
             R"#(Returns unique ID used to manage resource in graphic driver.)#" )
        .def("SetId",
             (void (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString &  ) ) static_cast<void (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString &  ) >(&Graphic3d_ShaderProgram::SetId),
             R"#(Sets unique ID used to manage resource in graphic driver. WARNING! Graphic3d_ShaderProgram constructor generates a unique id for proper resource management; however if application overrides it, it is responsibility of application to avoid name collisions.)#"  , py::arg("theId"))
        .def("Header",
             (const TCollection_AsciiString & (Graphic3d_ShaderProgram::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_ShaderProgram::*)() const>(&Graphic3d_ShaderProgram::Header),
             R"#(Returns GLSL header (version code and extensions).)#" )
        .def("SetHeader",
             (void (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString &  ) ) static_cast<void (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString &  ) >(&Graphic3d_ShaderProgram::SetHeader),
             R"#(Setup GLSL header containing language version code and used extensions. Will be prepended to the very beginning of the source code. Example:)#"  , py::arg("theHeader"))
        .def("AppendToHeader",
             (void (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString &  ) ) static_cast<void (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString &  ) >(&Graphic3d_ShaderProgram::AppendToHeader),
             R"#(Append line to GLSL header.)#"  , py::arg("theHeaderLine"))
        .def("NbLightsMax",
             (Standard_Integer (Graphic3d_ShaderProgram::*)() const) static_cast<Standard_Integer (Graphic3d_ShaderProgram::*)() const>(&Graphic3d_ShaderProgram::NbLightsMax),
             R"#(Return the length of array of light sources (THE_MAX_LIGHTS), to be used for initialization occLightSources. Default value is THE_MAX_LIGHTS_DEFAULT.)#" )
        .def("SetNbLightsMax",
             (void (Graphic3d_ShaderProgram::*)( Standard_Integer  ) ) static_cast<void (Graphic3d_ShaderProgram::*)( Standard_Integer  ) >(&Graphic3d_ShaderProgram::SetNbLightsMax),
             R"#(Specify the length of array of light sources (THE_MAX_LIGHTS).)#"  , py::arg("theNbLights"))
        .def("NbClipPlanesMax",
             (Standard_Integer (Graphic3d_ShaderProgram::*)() const) static_cast<Standard_Integer (Graphic3d_ShaderProgram::*)() const>(&Graphic3d_ShaderProgram::NbClipPlanesMax),
             R"#(Return the length of array of clipping planes (THE_MAX_CLIP_PLANES), to be used for initialization occClipPlaneEquations. Default value is THE_MAX_CLIP_PLANES_DEFAULT.)#" )
        .def("SetNbClipPlanesMax",
             (void (Graphic3d_ShaderProgram::*)( Standard_Integer  ) ) static_cast<void (Graphic3d_ShaderProgram::*)( Standard_Integer  ) >(&Graphic3d_ShaderProgram::SetNbClipPlanesMax),
             R"#(Specify the length of array of clipping planes (THE_MAX_CLIP_PLANES).)#"  , py::arg("theNbPlanes"))
        .def("AttachShader",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)( const opencascade::handle<Graphic3d_ShaderObject> &  ) ) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)( const opencascade::handle<Graphic3d_ShaderObject> &  ) >(&Graphic3d_ShaderProgram::AttachShader),
             R"#(Attaches shader object to the program object.)#"  , py::arg("theShader"))
        .def("DetachShader",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)( const opencascade::handle<Graphic3d_ShaderObject> &  ) ) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)( const opencascade::handle<Graphic3d_ShaderObject> &  ) >(&Graphic3d_ShaderProgram::DetachShader),
             R"#(Detaches shader object from the program object.)#"  , py::arg("theShader"))
        .def("ShaderObjects",
             (const Graphic3d_ShaderObjectList & (Graphic3d_ShaderProgram::*)() const) static_cast<const Graphic3d_ShaderObjectList & (Graphic3d_ShaderProgram::*)() const>(&Graphic3d_ShaderProgram::ShaderObjects),
             R"#(Returns list of attached shader objects.)#" )
        .def("Variables",
             (const Graphic3d_ShaderVariableList & (Graphic3d_ShaderProgram::*)() const) static_cast<const Graphic3d_ShaderVariableList & (Graphic3d_ShaderProgram::*)() const>(&Graphic3d_ShaderProgram::Variables),
             R"#(The list of currently pushed but not applied custom uniform variables. This list is automatically cleared after applying to GLSL program.)#" )
        .def("VertexAttributes",
             (const Graphic3d_ShaderAttributeList & (Graphic3d_ShaderProgram::*)() const) static_cast<const Graphic3d_ShaderAttributeList & (Graphic3d_ShaderProgram::*)() const>(&Graphic3d_ShaderProgram::VertexAttributes),
             R"#(Return the list of custom vertex attributes.)#" )
        .def("SetVertexAttributes",
             (void (Graphic3d_ShaderProgram::*)(  const NCollection_Sequence<opencascade::handle<Graphic3d_ShaderAttribute> > &  ) ) static_cast<void (Graphic3d_ShaderProgram::*)(  const NCollection_Sequence<opencascade::handle<Graphic3d_ShaderAttribute> > &  ) >(&Graphic3d_ShaderProgram::SetVertexAttributes),
             R"#(Assign the list of custom vertex attributes. Should be done before GLSL program initialization.)#"  , py::arg("theAttributes"))
        .def("NbFragmentOutputs",
             (Standard_Integer (Graphic3d_ShaderProgram::*)() const) static_cast<Standard_Integer (Graphic3d_ShaderProgram::*)() const>(&Graphic3d_ShaderProgram::NbFragmentOutputs),
             R"#(Returns the number (1+) of Fragment Shader outputs to be written to (more than 1 can be in case of multiple draw buffers); 1 by default.)#" )
        .def("SetNbFragmentOutputs",
             (void (Graphic3d_ShaderProgram::*)( const Standard_Integer  ) ) static_cast<void (Graphic3d_ShaderProgram::*)( const Standard_Integer  ) >(&Graphic3d_ShaderProgram::SetNbFragmentOutputs),
             R"#(Sets the number of Fragment Shader outputs to be written to. Should be done before GLSL program initialization.)#"  , py::arg("theNbOutputs"))
        .def("HasAlphaTest",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)() const) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)() const>(&Graphic3d_ShaderProgram::HasAlphaTest),
             R"#(Return true if Fragment Shader should perform alpha test; FALSE by default.)#" )
        .def("SetAlphaTest",
             (void (Graphic3d_ShaderProgram::*)( Standard_Boolean  ) ) static_cast<void (Graphic3d_ShaderProgram::*)( Standard_Boolean  ) >(&Graphic3d_ShaderProgram::SetAlphaTest),
             R"#(Set if Fragment Shader should perform alpha test. Note that this flag is designed for usage with - custom shader program may discard fragment regardless this flag.)#"  , py::arg("theAlphaTest"))
        .def("HasDefaultSampler",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)() const) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)() const>(&Graphic3d_ShaderProgram::HasDefaultSampler),
             R"#(Return TRUE if standard program header should define default texture sampler occSampler0; TRUE by default for compatibility.)#" )
        .def("SetDefaultSampler",
             (void (Graphic3d_ShaderProgram::*)( Standard_Boolean  ) ) static_cast<void (Graphic3d_ShaderProgram::*)( Standard_Boolean  ) >(&Graphic3d_ShaderProgram::SetDefaultSampler),
             R"#(Set if standard program header should define default texture sampler occSampler0.)#"  , py::arg("theHasDefSampler"))
        .def("HasWeightOitOutput",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)() const) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)() const>(&Graphic3d_ShaderProgram::HasWeightOitOutput),
             R"#(Return true if Fragment Shader color should output the weighted OIT coverage; FALSE by default.)#" )
        .def("SetWeightOitOutput",
             (void (Graphic3d_ShaderProgram::*)( Standard_Boolean  ) ) static_cast<void (Graphic3d_ShaderProgram::*)( Standard_Boolean  ) >(&Graphic3d_ShaderProgram::SetWeightOitOutput),
             R"#(Set if Fragment Shader color should output the weighted OIT coverage. Note that weighted OIT also requires at least 2 Fragment Outputs (color + coverage).)#"  , py::arg("theOutput"))
        .def("ClearVariables",
             (void (Graphic3d_ShaderProgram::*)() ) static_cast<void (Graphic3d_ShaderProgram::*)() >(&Graphic3d_ShaderProgram::ClearVariables),
             R"#(Removes all custom uniform variables from the program.)#" )
        .def("PushVariableFloat",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,  const float  ) ) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,  const float  ) >(&Graphic3d_ShaderProgram::PushVariableFloat),
             R"#(Pushes float uniform.)#"  , py::arg("theName"),  py::arg("theValue"))
        .def("PushVariableVec2",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,   const NCollection_Vec2<Standard_ShortReal> &  ) ) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,   const NCollection_Vec2<Standard_ShortReal> &  ) >(&Graphic3d_ShaderProgram::PushVariableVec2),
             R"#(Pushes vec2 uniform.)#"  , py::arg("theName"),  py::arg("theValue"))
        .def("PushVariableVec3",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,   const NCollection_Vec3<Standard_ShortReal> &  ) ) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,   const NCollection_Vec3<Standard_ShortReal> &  ) >(&Graphic3d_ShaderProgram::PushVariableVec3),
             R"#(Pushes vec3 uniform.)#"  , py::arg("theName"),  py::arg("theValue"))
        .def("PushVariableVec4",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,   const NCollection_Vec4<Standard_ShortReal> &  ) ) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,   const NCollection_Vec4<Standard_ShortReal> &  ) >(&Graphic3d_ShaderProgram::PushVariableVec4),
             R"#(Pushes vec4 uniform.)#"  , py::arg("theName"),  py::arg("theValue"))
        .def("PushVariableInt",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,  const int  ) ) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,  const int  ) >(&Graphic3d_ShaderProgram::PushVariableInt),
             R"#(Pushes int uniform.)#"  , py::arg("theName"),  py::arg("theValue"))
        .def("PushVariableVec2i",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,   const NCollection_Vec2<Standard_Integer> &  ) ) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,   const NCollection_Vec2<Standard_Integer> &  ) >(&Graphic3d_ShaderProgram::PushVariableVec2i),
             R"#(Pushes vec2i uniform.)#"  , py::arg("theName"),  py::arg("theValue"))
        .def("PushVariableVec3i",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,   const NCollection_Vec3<Standard_Integer> &  ) ) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,   const NCollection_Vec3<Standard_Integer> &  ) >(&Graphic3d_ShaderProgram::PushVariableVec3i),
             R"#(Pushes vec3i uniform.)#"  , py::arg("theName"),  py::arg("theValue"))
        .def("PushVariableVec4i",
             (Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,   const NCollection_Vec4<Standard_Integer> &  ) ) static_cast<Standard_Boolean (Graphic3d_ShaderProgram::*)( const TCollection_AsciiString & ,   const NCollection_Vec4<Standard_Integer> &  ) >(&Graphic3d_ShaderProgram::PushVariableVec4i),
             R"#(Pushes vec4i uniform.)#"  , py::arg("theName"),  py::arg("theValue"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ShaderProgram::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ShaderProgram::get_type_descriptor),
                    R"#(None)#" )
        .def_static("ShadersFolder_s",
                    (const TCollection_AsciiString & (*)() ) static_cast<const TCollection_AsciiString & (*)() >(&Graphic3d_ShaderProgram::ShadersFolder),
                    R"#(The path to GLSL programs determined from CSF_ShadersDirectory or CASROOT environment variables.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ShaderVariable ,opencascade::handle<Graphic3d_ShaderVariable>  , Standard_Transient >>(m.attr("Graphic3d_ShaderVariable"))
    // constructors
    // custom constructors
    // methods
        .def("Name",
             (const TCollection_AsciiString & (Graphic3d_ShaderVariable::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_ShaderVariable::*)() const>(&Graphic3d_ShaderVariable::Name),
             R"#(Returns name of shader variable.)#" )
        .def("IsDone",
             (Standard_Boolean (Graphic3d_ShaderVariable::*)() const) static_cast<Standard_Boolean (Graphic3d_ShaderVariable::*)() const>(&Graphic3d_ShaderVariable::IsDone),
             R"#(Checks if the shader variable is valid or not.)#" )
        .def("Value",
             (Graphic3d_ValueInterface * (Graphic3d_ShaderVariable::*)() ) static_cast<Graphic3d_ValueInterface * (Graphic3d_ShaderVariable::*)() >(&Graphic3d_ShaderVariable::Value),
             R"#(Returns interface of shader variable value.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ShaderVariable::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ShaderVariable::*)() const>(&Graphic3d_ShaderVariable::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ShaderVariable::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ShaderVariable::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Structure ,opencascade::handle<Graphic3d_Structure>  , Standard_Transient >>(m.attr("Graphic3d_Structure"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_StructureManager> &,const opencascade::handle<Graphic3d_Structure> & >()  , py::arg("theManager"),  py::arg("theLinkPrs")=static_cast<const opencascade::handle<Graphic3d_Structure> &>(Handle ( Graphic3d_Structure ) ( )) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_Structure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::DynamicType),
             R"#(None)#" )
        .def("Clear",
             (void (Graphic3d_Structure::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_Structure::*)( const Standard_Boolean  ) >(&Graphic3d_Structure::Clear),
             R"#(if WithDestruction == Standard_True then suppress all the groups of primitives in the structure. and it is mandatory to create a new group in <me>. if WithDestruction == Standard_False then clears all the groups of primitives in the structure. and all the groups are conserved and empty. They will be erased at the next screen update. The structure itself is conserved. The transformation and the attributes of <me> are conserved. The childs of <me> are conserved.)#"  , py::arg("WithDestruction")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Display",
             (void (Graphic3d_Structure::*)() ) static_cast<void (Graphic3d_Structure::*)() >(&Graphic3d_Structure::Display),
             R"#(Displays the structure <me> in all the views of the visualiser.)#" )
        .def("DisplayPriority",
             (Standard_Integer (Graphic3d_Structure::*)() const) static_cast<Standard_Integer (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::DisplayPriority),
             R"#(Returns the current display priority for this structure.)#" )
        .def("Erase",
             (void (Graphic3d_Structure::*)() ) static_cast<void (Graphic3d_Structure::*)() >(&Graphic3d_Structure::Erase),
             R"#(Erases the structure <me> in all the views of the visualiser.)#" )
        .def("Highlight",
             (void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_PresentationAttributes> & ,  const Standard_Boolean  ) ) static_cast<void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_PresentationAttributes> & ,  const Standard_Boolean  ) >(&Graphic3d_Structure::Highlight),
             R"#(Highlights the structure in all the views with the given style)#"  , py::arg("theStyle"),  py::arg("theToUpdateMgr")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Remove",
             (void (Graphic3d_Structure::*)() ) static_cast<void (Graphic3d_Structure::*)() >(&Graphic3d_Structure::Remove),
             R"#(Suppress the structure <me>. It will be erased at the next screen update. Warning: No more graphic operations in <me> after this call. Category: Methods to modify the class definition)#" )
        .def("CalculateBoundBox",
             (void (Graphic3d_Structure::*)() ) static_cast<void (Graphic3d_Structure::*)() >(&Graphic3d_Structure::CalculateBoundBox),
             R"#(Computes axis-aligned bounding box of a structure.)#" )
        .def("SetInfiniteState",
             (void (Graphic3d_Structure::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_Structure::*)( const Standard_Boolean  ) >(&Graphic3d_Structure::SetInfiniteState),
             R"#(Sets infinite flag. When TRUE, the MinMaxValues method returns: theXMin = theYMin = theZMin = RealFirst(). theXMax = theYMax = theZMax = RealLast(). By default, structure is created not infinite but empty.)#"  , py::arg("theToSet"))
        .def("SetDisplayPriority",
             (void (Graphic3d_Structure::*)( const Standard_Integer  ) ) static_cast<void (Graphic3d_Structure::*)( const Standard_Integer  ) >(&Graphic3d_Structure::SetDisplayPriority),
             R"#(Modifies the order of displaying the structure. Values are between 0 and 10. Structures are drawn according to their display priorities in ascending order. A structure of priority 10 is displayed the last and appears over the others. The default value is 5. Category: Methods to modify the class definition Warning: If <me> is displayed then the SetDisplayPriority method erase <me> and display <me> with the new priority. Raises PriorityDefinitionError if <Priority> is greater than 10 or a negative value.)#"  , py::arg("Priority"))
        .def("ResetDisplayPriority",
             (void (Graphic3d_Structure::*)() ) static_cast<void (Graphic3d_Structure::*)() >(&Graphic3d_Structure::ResetDisplayPriority),
             R"#(Reset the current priority of the structure to the previous priority. Category: Methods to modify the class definition Warning: If <me> is displayed then the SetDisplayPriority method erase <me> and display <me> with the previous priority.)#" )
        .def("SetZLayer",
             (void (Graphic3d_Structure::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (Graphic3d_Structure::*)( const Graphic3d_ZLayerId  ) >(&Graphic3d_Structure::SetZLayer),
             R"#(Set Z layer ID for the structure. The Z layer mechanism allows to display structures presented in higher layers in overlay of structures in lower layers by switching off z buffer depth test between layers)#"  , py::arg("theLayerId"))
        .def("GetZLayer",
             (Graphic3d_ZLayerId (Graphic3d_Structure::*)() const) static_cast<Graphic3d_ZLayerId (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::GetZLayer),
             R"#(Get Z layer ID of displayed structure. The method returns -1 if the structure has no ID (deleted from graphic driver).)#" )
        .def("SetClipPlanes",
             (void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) ) static_cast<void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) >(&Graphic3d_Structure::SetClipPlanes),
             R"#(Changes a sequence of clip planes slicing the structure on rendering.)#"  , py::arg("thePlanes"))
        .def("ClipPlanes",
             (const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (Graphic3d_Structure::*)() const) static_cast<const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::ClipPlanes),
             R"#(Get clip planes slicing the structure on rendering.)#" )
        .def("SetVisible",
             (void (Graphic3d_Structure::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_Structure::*)( const Standard_Boolean  ) >(&Graphic3d_Structure::SetVisible),
             R"#(Modifies the visibility indicator to Standard_True or Standard_False for the structure <me>. The default value at the definition of <me> is Standard_True.)#"  , py::arg("AValue"))
        .def("SetVisual",
             (void (Graphic3d_Structure::*)( const Graphic3d_TypeOfStructure  ) ) static_cast<void (Graphic3d_Structure::*)( const Graphic3d_TypeOfStructure  ) >(&Graphic3d_Structure::SetVisual),
             R"#(Modifies the visualisation mode for the structure <me>.)#"  , py::arg("AVisual"))
        .def("SetZoomLimit",
             (void (Graphic3d_Structure::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Graphic3d_Structure::*)( const Standard_Real ,  const Standard_Real  ) >(&Graphic3d_Structure::SetZoomLimit),
             R"#(Modifies the minimum and maximum zoom coefficients for the structure <me>. The default value at the definition of <me> is unlimited. Category: Methods to modify the class definition Warning: Raises StructureDefinitionError if <LimitInf> is greater than <LimitSup> or if <LimitInf> or <LimitSup> is a negative value.)#"  , py::arg("LimitInf"),  py::arg("LimitSup"))
        .def("SetIsForHighlight",
             (void (Graphic3d_Structure::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_Structure::*)( const Standard_Boolean  ) >(&Graphic3d_Structure::SetIsForHighlight),
             R"#(Marks the structure <me> representing wired structure needed for highlight only so it won't be added to BVH tree.)#"  , py::arg("isForHighlight"))
        .def("UnHighlight",
             (void (Graphic3d_Structure::*)() ) static_cast<void (Graphic3d_Structure::*)() >(&Graphic3d_Structure::UnHighlight),
             R"#(Suppresses the highlight for the structure <me> in all the views of the visualiser.)#" )
        .def("Compute",
             (void (Graphic3d_Structure::*)() ) static_cast<void (Graphic3d_Structure::*)() >(&Graphic3d_Structure::Compute),
             R"#(None)#" )
        .def("Compute",
             (opencascade::handle<Graphic3d_Structure> (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_DataStructureManager> &  ) ) static_cast<opencascade::handle<Graphic3d_Structure> (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_DataStructureManager> &  ) >(&Graphic3d_Structure::Compute),
             R"#(Returns the new Structure defined for the new visualization)#"  , py::arg("theProjector"))
        .def("Compute",
             (opencascade::handle<Graphic3d_Structure> (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_DataStructureManager> & ,  const opencascade::handle<Geom_Transformation> &  ) ) static_cast<opencascade::handle<Graphic3d_Structure> (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_DataStructureManager> & ,  const opencascade::handle<Geom_Transformation> &  ) >(&Graphic3d_Structure::Compute),
             R"#(Returns the new Structure defined for the new visualization)#"  , py::arg("theProjector"),  py::arg("theTrsf"))
        .def("Compute",
             (void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_DataStructureManager> & ,  opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_DataStructureManager> & ,  opencascade::handle<Graphic3d_Structure> &  ) >(&Graphic3d_Structure::Compute),
             R"#(Returns the new Structure defined for the new visualization)#"  , py::arg("theProjector"),  py::arg("theStructure"))
        .def("Compute",
             (void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_DataStructureManager> & ,  const opencascade::handle<Geom_Transformation> & ,  opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_DataStructureManager> & ,  const opencascade::handle<Geom_Transformation> & ,  opencascade::handle<Graphic3d_Structure> &  ) >(&Graphic3d_Structure::Compute),
             R"#(Returns the new Structure defined for the new visualization)#"  , py::arg("theProjector"),  py::arg("theTrsf"),  py::arg("theStructure"))
        .def("ReCompute",
             (void (Graphic3d_Structure::*)() ) static_cast<void (Graphic3d_Structure::*)() >(&Graphic3d_Structure::ReCompute),
             R"#(Forces a new construction of the structure <me> if <me> is displayed and TOS_COMPUTED.)#" )
        .def("ReCompute",
             (void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_DataStructureManager> &  ) ) static_cast<void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_DataStructureManager> &  ) >(&Graphic3d_Structure::ReCompute),
             R"#(Forces a new construction of the structure <me> if <me> is displayed in <aProjetor> and TOS_COMPUTED.)#"  , py::arg("aProjector"))
        .def("ContainsFacet",
             (Standard_Boolean (Graphic3d_Structure::*)() const) static_cast<Standard_Boolean (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::ContainsFacet),
             R"#(Returns Standard_True if the structure <me> contains Polygons, Triangles or Quadrangles.)#" )
        .def("Groups",
             (const Graphic3d_SequenceOfGroup & (Graphic3d_Structure::*)() const) static_cast<const Graphic3d_SequenceOfGroup & (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::Groups),
             R"#(Returns the groups sequence included in this structure.)#" )
        .def("NumberOfGroups",
             (Standard_Integer (Graphic3d_Structure::*)() const) static_cast<Standard_Integer (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::NumberOfGroups),
             R"#(Returns the current number of groups in this structure.)#" )
        .def("NewGroup",
             (opencascade::handle<Graphic3d_Group> (Graphic3d_Structure::*)() ) static_cast<opencascade::handle<Graphic3d_Group> (Graphic3d_Structure::*)() >(&Graphic3d_Structure::NewGroup),
             R"#(Append new group to this structure.)#" )
        .def("CurrentGroup",
             (opencascade::handle<Graphic3d_Group> (Graphic3d_Structure::*)() ) static_cast<opencascade::handle<Graphic3d_Group> (Graphic3d_Structure::*)() >(&Graphic3d_Structure::CurrentGroup),
             R"#(Returns the last created group or creates new one if list is empty.)#" )
        .def("HighlightStyle",
             (const opencascade::handle<Graphic3d_PresentationAttributes> & (Graphic3d_Structure::*)() const) static_cast<const opencascade::handle<Graphic3d_PresentationAttributes> & (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::HighlightStyle),
             R"#(Returns the highlight attributes.)#" )
        .def("IsDeleted",
             (Standard_Boolean (Graphic3d_Structure::*)() const) static_cast<Standard_Boolean (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::IsDeleted),
             R"#(Returns TRUE if this structure is deleted (after Remove() call).)#" )
        .def("IsDisplayed",
             (Standard_Boolean (Graphic3d_Structure::*)() const) static_cast<Standard_Boolean (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::IsDisplayed),
             R"#(Returns the display indicator for this structure.)#" )
        .def("IsEmpty",
             (Standard_Boolean (Graphic3d_Structure::*)() const) static_cast<Standard_Boolean (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::IsEmpty),
             R"#(Returns Standard_True if the structure <me> is empty. Warning: A structure is empty if : it do not have group or all the groups are empties and it do not have descendant or all the descendants are empties.)#" )
        .def("IsInfinite",
             (Standard_Boolean (Graphic3d_Structure::*)() const) static_cast<Standard_Boolean (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::IsInfinite),
             R"#(Returns Standard_True if the structure <me> is infinite.)#" )
        .def("IsHighlighted",
             (Standard_Boolean (Graphic3d_Structure::*)() const) static_cast<Standard_Boolean (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::IsHighlighted),
             R"#(Returns the highlight indicator for this structure.)#" )
        .def("IsTransformed",
             (Standard_Boolean (Graphic3d_Structure::*)() const) static_cast<Standard_Boolean (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::IsTransformed),
             R"#(Returns TRUE if the structure is transformed.)#" )
        .def("IsVisible",
             (Standard_Boolean (Graphic3d_Structure::*)() const) static_cast<Standard_Boolean (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::IsVisible),
             R"#(Returns the visibility indicator for this structure.)#" )
        .def("MinMaxValues",
             (Bnd_Box (Graphic3d_Structure::*)( const Standard_Boolean  ) const) static_cast<Bnd_Box (Graphic3d_Structure::*)( const Standard_Boolean  ) const>(&Graphic3d_Structure::MinMaxValues),
             R"#(Returns the coordinates of the boundary box of the structure <me>. If <theToIgnoreInfiniteFlag> is TRUE, the method returns actual graphical boundaries of the Graphic3d_Group components. Otherwise, the method returns boundaries taking into account infinite state of the structure. This approach generally used for application specific fit operation (e.g. fitting the model into screen, not taking into accout infinite helper elements). Warning: If the structure <me> is empty then the empty box is returned, If the structure <me> is infinite then the whole box is returned.)#"  , py::arg("theToIgnoreInfiniteFlag")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Visual",
             (Graphic3d_TypeOfStructure (Graphic3d_Structure::*)() const) static_cast<Graphic3d_TypeOfStructure (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::Visual),
             R"#(Returns the visualisation mode for the structure <me>.)#" )
        .def("Ancestors",
             (void (Graphic3d_Structure::*)( NCollection_Map<opencascade::handle<Graphic3d_Structure> > &  ) const) static_cast<void (Graphic3d_Structure::*)( NCollection_Map<opencascade::handle<Graphic3d_Structure> > &  ) const>(&Graphic3d_Structure::Ancestors),
             R"#(Returns the group of structures to which <me> is connected.)#"  , py::arg("SG"))
        .def("Connect",
             (void (Graphic3d_Structure::*)( Graphic3d_Structure * ,  Graphic3d_TypeOfConnection ,  Standard_Boolean  ) ) static_cast<void (Graphic3d_Structure::*)( Graphic3d_Structure * ,  Graphic3d_TypeOfConnection ,  Standard_Boolean  ) >(&Graphic3d_Structure::Connect),
             R"#(If Atype is TOC_DESCENDANT then add <AStructure> as a child structure of <me>. If Atype is TOC_ANCESTOR then add <AStructure> as a parent structure of <me>. The connection propagates Display, Highlight, Erase, Remove, and stacks the transformations. No connection if the graph of the structures contains a cycle and <WithCheck> is Standard_True;)#"  , py::arg("theStructure"),  py::arg("theType"),  py::arg("theWithCheck")=static_cast<Standard_Boolean>(Standard_False))
        .def("Connect",
             (void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_Structure> &  ) >(&Graphic3d_Structure::Connect),
             R"#(None)#"  , py::arg("thePrs"))
        .def("Descendants",
             (void (Graphic3d_Structure::*)( NCollection_Map<opencascade::handle<Graphic3d_Structure> > &  ) const) static_cast<void (Graphic3d_Structure::*)( NCollection_Map<opencascade::handle<Graphic3d_Structure> > &  ) const>(&Graphic3d_Structure::Descendants),
             R"#(Returns the group of structures connected to <me>.)#"  , py::arg("SG"))
        .def("Disconnect",
             (void (Graphic3d_Structure::*)( Graphic3d_Structure *  ) ) static_cast<void (Graphic3d_Structure::*)( Graphic3d_Structure *  ) >(&Graphic3d_Structure::Disconnect),
             R"#(Suppress the connection between <AStructure> and <me>.)#"  , py::arg("theStructure"))
        .def("Remove",
             (void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_Structure> &  ) >(&Graphic3d_Structure::Remove),
             R"#(None)#"  , py::arg("thePrs"))
        .def("DisconnectAll",
             (void (Graphic3d_Structure::*)( const Graphic3d_TypeOfConnection  ) ) static_cast<void (Graphic3d_Structure::*)( const Graphic3d_TypeOfConnection  ) >(&Graphic3d_Structure::DisconnectAll),
             R"#(If Atype is TOC_DESCENDANT then suppress all the connections with the child structures of <me>. If Atype is TOC_ANCESTOR then suppress all the connections with the parent structures of <me>.)#"  , py::arg("AType"))
        .def("RemoveAll",
             (void (Graphic3d_Structure::*)() ) static_cast<void (Graphic3d_Structure::*)() >(&Graphic3d_Structure::RemoveAll),
             R"#(None)#" )
        .def("SetOwner",
             (void (Graphic3d_Structure::*)( const Standard_Address  ) ) static_cast<void (Graphic3d_Structure::*)( const Standard_Address  ) >(&Graphic3d_Structure::SetOwner),
             R"#(None)#"  , py::arg("theOwner"))
        .def("Owner",
             (Standard_Address (Graphic3d_Structure::*)() const) static_cast<Standard_Address (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::Owner),
             R"#(None)#" )
        .def("SetHLRValidation",
             (void (Graphic3d_Structure::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_Structure::*)( const Standard_Boolean  ) >(&Graphic3d_Structure::SetHLRValidation),
             R"#(None)#"  , py::arg("theFlag"))
        .def("HLRValidation",
             (Standard_Boolean (Graphic3d_Structure::*)() const) static_cast<Standard_Boolean (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::HLRValidation),
             R"#(Hidden parts stored in this structure are valid if: 1) the owner is defined. 2) they are not invalid.)#" )
        .def("Transformation",
             (const opencascade::handle<Geom_Transformation> & (Graphic3d_Structure::*)() const) static_cast<const opencascade::handle<Geom_Transformation> & (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::Transformation),
             R"#(Return local transformation.)#" )
        .def("SetTransformation",
             (void (Graphic3d_Structure::*)( const opencascade::handle<Geom_Transformation> &  ) ) static_cast<void (Graphic3d_Structure::*)( const opencascade::handle<Geom_Transformation> &  ) >(&Graphic3d_Structure::SetTransformation),
             R"#(Modifies the current local transformation)#"  , py::arg("theTrsf"))
        .def("Transform",
             (void (Graphic3d_Structure::*)( const opencascade::handle<Geom_Transformation> &  ) ) static_cast<void (Graphic3d_Structure::*)( const opencascade::handle<Geom_Transformation> &  ) >(&Graphic3d_Structure::Transform),
             R"#(None)#"  , py::arg("theTrsf"))
        .def("SetTransformPersistence",
             (void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_TransformPers> &  ) ) static_cast<void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_TransformPers> &  ) >(&Graphic3d_Structure::SetTransformPersistence),
             R"#(Modifies the current transform persistence (pan, zoom or rotate))#"  , py::arg("theTrsfPers"))
        .def("TransformPersistence",
             (const opencascade::handle<Graphic3d_TransformPers> & (Graphic3d_Structure::*)() const) static_cast<const opencascade::handle<Graphic3d_TransformPers> & (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::TransformPersistence),
             R"#(Returns transform persistence of the presentable object.)#" )
        .def("SetMutable",
             (void (Graphic3d_Structure::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_Structure::*)( const Standard_Boolean  ) >(&Graphic3d_Structure::SetMutable),
             R"#(Sets if the structure location has mutable nature (content or location will be changed regularly).)#"  , py::arg("theIsMutable"))
        .def("IsMutable",
             (Standard_Boolean (Graphic3d_Structure::*)() const) static_cast<Standard_Boolean (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::IsMutable),
             R"#(Returns true if structure has mutable nature (content or location are be changed regularly). Mutable structure will be managed in different way than static onces.)#" )
        .def("ComputeVisual",
             (Graphic3d_TypeOfStructure (Graphic3d_Structure::*)() const) static_cast<Graphic3d_TypeOfStructure (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::ComputeVisual),
             R"#(None)#" )
        .def("GraphicClear",
             (void (Graphic3d_Structure::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_Structure::*)( const Standard_Boolean  ) >(&Graphic3d_Structure::GraphicClear),
             R"#(Clears the structure <me>.)#"  , py::arg("WithDestruction"))
        .def("GraphicConnect",
             (void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_Structure> &  ) >(&Graphic3d_Structure::GraphicConnect),
             R"#(None)#"  , py::arg("theDaughter"))
        .def("GraphicDisconnect",
             (void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (Graphic3d_Structure::*)( const opencascade::handle<Graphic3d_Structure> &  ) >(&Graphic3d_Structure::GraphicDisconnect),
             R"#(None)#"  , py::arg("theDaughter"))
        .def("GraphicTransform",
             (void (Graphic3d_Structure::*)( const opencascade::handle<Geom_Transformation> &  ) ) static_cast<void (Graphic3d_Structure::*)( const opencascade::handle<Geom_Transformation> &  ) >(&Graphic3d_Structure::GraphicTransform),
             R"#(Internal method which sets new transformation without calling graphic manager callbacks.)#"  , py::arg("theTrsf"))
        .def("Identification",
             (Standard_Integer (Graphic3d_Structure::*)() const) static_cast<Standard_Integer (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::Identification),
             R"#(Returns the identification number of this structure.)#" )
        .def("Remove",
             (void (Graphic3d_Structure::*)( Graphic3d_Structure * ,  const Graphic3d_TypeOfConnection  ) ) static_cast<void (Graphic3d_Structure::*)( Graphic3d_Structure * ,  const Graphic3d_TypeOfConnection  ) >(&Graphic3d_Structure::Remove),
             R"#(Suppress the structure in the list of descendants or in the list of ancestors.)#"  , py::arg("thePtr"),  py::arg("theType"))
        .def("SetComputeVisual",
             (void (Graphic3d_Structure::*)( const Graphic3d_TypeOfStructure  ) ) static_cast<void (Graphic3d_Structure::*)( const Graphic3d_TypeOfStructure  ) >(&Graphic3d_Structure::SetComputeVisual),
             R"#(None)#"  , py::arg("theVisual"))
        .def("CStructure",
             (const opencascade::handle<Graphic3d_CStructure> & (Graphic3d_Structure::*)() const) static_cast<const opencascade::handle<Graphic3d_CStructure> & (Graphic3d_Structure::*)() const>(&Graphic3d_Structure::CStructure),
             R"#(Returns the low-level structure)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_Structure::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_Structure::get_type_descriptor),
                    R"#(None)#" )
        .def_static("AcceptConnection_s",
                    (Standard_Boolean (*)( Graphic3d_Structure * ,  Graphic3d_Structure * ,  Graphic3d_TypeOfConnection  ) ) static_cast<Standard_Boolean (*)( Graphic3d_Structure * ,  Graphic3d_Structure * ,  Graphic3d_TypeOfConnection  ) >(&Graphic3d_Structure::AcceptConnection),
                    R"#(Returns Standard_True if the connection is possible between <AStructure1> and <AStructure2> without a creation of a cycle.)#"  , py::arg("theStructure1"),  py::arg("theStructure2"),  py::arg("theType"))
        .def_static("Network_s",
                    (void (*)( Graphic3d_Structure * ,  const Graphic3d_TypeOfConnection ,  NCollection_Map<Graphic3d_Structure *> &  ) ) static_cast<void (*)( Graphic3d_Structure * ,  const Graphic3d_TypeOfConnection ,  NCollection_Map<Graphic3d_Structure *> &  ) >(&Graphic3d_Structure::Network),
                    R"#(Returns <ASet> the group of structures : - directly or indirectly connected to <AStructure> if the TypeOfConnection == TOC_DESCENDANT - to which <AStructure> is directly or indirectly connected if the TypeOfConnection == TOC_ANCESTOR)#"  , py::arg("theStructure"),  py::arg("theType"),  py::arg("theSet"))
        .def_static("PrintNetwork_s",
                    (void (*)( const opencascade::handle<Graphic3d_Structure> & ,  const Graphic3d_TypeOfConnection  ) ) static_cast<void (*)( const opencascade::handle<Graphic3d_Structure> & ,  const Graphic3d_TypeOfConnection  ) >(&Graphic3d_Structure::PrintNetwork),
                    R"#(Prints informations about the network associated with the structure <AStructure>.)#"  , py::arg("AStructure"),  py::arg("AType"))
    // static methods using call by reference i.s.o. return
        .def_static("Transforms_s",
                    []( const gp_Trsf & theTrsf,const Standard_Real theX,const Standard_Real theY,const Standard_Real theZ ){ Standard_Real  theNewX; Standard_Real  theNewY; Standard_Real  theNewZ; Graphic3d_Structure::Transforms(theTrsf,theX,theY,theZ,theNewX,theNewY,theNewZ); return std::make_tuple(theNewX,theNewY,theNewZ); },
                    R"#(Transforms theX, theY, theZ with the transformation theTrsf.)#"  , py::arg("theTrsf"),  py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_StructureManager ,opencascade::handle<Graphic3d_StructureManager>  , Standard_Transient >>(m.attr("Graphic3d_StructureManager"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_GraphicDriver> & >()  , py::arg("theDriver") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_StructureManager::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_StructureManager::*)() const>(&Graphic3d_StructureManager::DynamicType),
             R"#(None)#" )
        .def("Update",
             (void (Graphic3d_StructureManager::*)( const Graphic3d_ZLayerId  ) const) static_cast<void (Graphic3d_StructureManager::*)( const Graphic3d_ZLayerId  ) const>(&Graphic3d_StructureManager::Update),
             R"#(Invalidates bounding box of specified ZLayerId.)#"  , py::arg("theLayerId")=static_cast<const Graphic3d_ZLayerId>(Graphic3d_ZLayerId_UNKNOWN))
        .def("Remove",
             (void (Graphic3d_StructureManager::*)() ) static_cast<void (Graphic3d_StructureManager::*)() >(&Graphic3d_StructureManager::Remove),
             R"#(Deletes and erases the 3D structure manager.)#" )
        .def("Erase",
             (void (Graphic3d_StructureManager::*)() ) static_cast<void (Graphic3d_StructureManager::*)() >(&Graphic3d_StructureManager::Erase),
             R"#(Erases all the structures.)#" )
        .def("DisplayedStructures",
             (void (Graphic3d_StructureManager::*)( NCollection_Map<opencascade::handle<Graphic3d_Structure> > &  ) const) static_cast<void (Graphic3d_StructureManager::*)( NCollection_Map<opencascade::handle<Graphic3d_Structure> > &  ) const>(&Graphic3d_StructureManager::DisplayedStructures),
             R"#(Returns the set of structures displayed in visualiser <me>.)#"  , py::arg("SG"))
        .def("HighlightedStructures",
             (void (Graphic3d_StructureManager::*)( NCollection_Map<opencascade::handle<Graphic3d_Structure> > &  ) const) static_cast<void (Graphic3d_StructureManager::*)( NCollection_Map<opencascade::handle<Graphic3d_Structure> > &  ) const>(&Graphic3d_StructureManager::HighlightedStructures),
             R"#(Returns the set of highlighted structures in a visualiser <me>.)#"  , py::arg("SG"))
        .def("ReCompute",
             (void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> &  ) >(&Graphic3d_StructureManager::ReCompute),
             R"#(Forces a new construction of the structure. if <theStructure> is displayed and TOS_COMPUTED.)#"  , py::arg("theStructure"))
        .def("ReCompute",
             (void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> & ,  const opencascade::handle<Graphic3d_DataStructureManager> &  ) ) static_cast<void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> & ,  const opencascade::handle<Graphic3d_DataStructureManager> &  ) >(&Graphic3d_StructureManager::ReCompute),
             R"#(Forces a new construction of the structure. if <theStructure> is displayed in <theProjector> and TOS_COMPUTED.)#"  , py::arg("theStructure"),  py::arg("theProjector"))
        .def("Clear",
             (void (Graphic3d_StructureManager::*)( Graphic3d_Structure * ,  const Standard_Boolean  ) ) static_cast<void (Graphic3d_StructureManager::*)( Graphic3d_Structure * ,  const Standard_Boolean  ) >(&Graphic3d_StructureManager::Clear),
             R"#(Clears the structure.)#"  , py::arg("theStructure"),  py::arg("theWithDestruction"))
        .def("Connect",
             (void (Graphic3d_StructureManager::*)( const Graphic3d_Structure * ,  const Graphic3d_Structure *  ) ) static_cast<void (Graphic3d_StructureManager::*)( const Graphic3d_Structure * ,  const Graphic3d_Structure *  ) >(&Graphic3d_StructureManager::Connect),
             R"#(Connects the structures.)#"  , py::arg("theMother"),  py::arg("theDaughter"))
        .def("Disconnect",
             (void (Graphic3d_StructureManager::*)( const Graphic3d_Structure * ,  const Graphic3d_Structure *  ) ) static_cast<void (Graphic3d_StructureManager::*)( const Graphic3d_Structure * ,  const Graphic3d_Structure *  ) >(&Graphic3d_StructureManager::Disconnect),
             R"#(Disconnects the structures.)#"  , py::arg("theMother"),  py::arg("theDaughter"))
        .def("Display",
             (void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> &  ) >(&Graphic3d_StructureManager::Display),
             R"#(Display the structure.)#"  , py::arg("theStructure"))
        .def("Erase",
             (void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> &  ) >(&Graphic3d_StructureManager::Erase),
             R"#(Erases the structure.)#"  , py::arg("theStructure"))
        .def("Highlight",
             (void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> &  ) >(&Graphic3d_StructureManager::Highlight),
             R"#(Highlights the structure.)#"  , py::arg("theStructure"))
        .def("SetTransform",
             (void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> & ,  const opencascade::handle<Geom_Transformation> &  ) ) static_cast<void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> & ,  const opencascade::handle<Geom_Transformation> &  ) >(&Graphic3d_StructureManager::SetTransform),
             R"#(Transforms the structure.)#"  , py::arg("theStructure"),  py::arg("theTrsf"))
        .def("ChangeDisplayPriority",
             (void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&Graphic3d_StructureManager::ChangeDisplayPriority),
             R"#(Changes the display priority of the structure <AStructure>.)#"  , py::arg("theStructure"),  py::arg("theOldPriority"),  py::arg("theNewPriority"))
        .def("ChangeZLayer",
             (void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> & ,  const Graphic3d_ZLayerId  ) >(&Graphic3d_StructureManager::ChangeZLayer),
             R"#(Change Z layer for structure. The Z layer mechanism allows to display structures in higher layers in overlay of structures in lower layers.)#"  , py::arg("theStructure"),  py::arg("theLayerId"))
        .def("GraphicDriver",
             (const opencascade::handle<Graphic3d_GraphicDriver> & (Graphic3d_StructureManager::*)() const) static_cast<const opencascade::handle<Graphic3d_GraphicDriver> & (Graphic3d_StructureManager::*)() const>(&Graphic3d_StructureManager::GraphicDriver),
             R"#(Returns the graphic driver of <me>.)#" )
        .def("Identification",
             (Standard_Integer (Graphic3d_StructureManager::*)( Graphic3d_CView *  ) ) static_cast<Standard_Integer (Graphic3d_StructureManager::*)( Graphic3d_CView *  ) >(&Graphic3d_StructureManager::Identification),
             R"#(Attaches the view to this structure manager and sets its identification number within the manager.)#"  , py::arg("theView"))
        .def("UnIdentification",
             (void (Graphic3d_StructureManager::*)( Graphic3d_CView *  ) ) static_cast<void (Graphic3d_StructureManager::*)( Graphic3d_CView *  ) >(&Graphic3d_StructureManager::UnIdentification),
             R"#(Detach the view from this structure manager and release its identification.)#"  , py::arg("theView"))
        .def("DefinedViews",
             (const Graphic3d_IndexedMapOfView & (Graphic3d_StructureManager::*)() const) static_cast<const Graphic3d_IndexedMapOfView & (Graphic3d_StructureManager::*)() const>(&Graphic3d_StructureManager::DefinedViews),
             R"#(Returns the group of views defined in the structure manager.)#" )
        .def("MaxNumOfViews",
             (Standard_Integer (Graphic3d_StructureManager::*)() const) static_cast<Standard_Integer (Graphic3d_StructureManager::*)() const>(&Graphic3d_StructureManager::MaxNumOfViews),
             R"#(Returns the theoretical maximum number of definable views in the manager. Warning: It's not possible to accept an infinite number of definable views because each view must have an identification and we have different managers.)#" )
        .def("Identification",
             (opencascade::handle<Graphic3d_Structure> (Graphic3d_StructureManager::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Graphic3d_Structure> (Graphic3d_StructureManager::*)( const Standard_Integer  ) const>(&Graphic3d_StructureManager::Identification),
             R"#(Returns the structure with the identification number <AId>.)#"  , py::arg("AId"))
        .def("UnHighlight",
             (void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (Graphic3d_StructureManager::*)( const opencascade::handle<Graphic3d_Structure> &  ) >(&Graphic3d_StructureManager::UnHighlight),
             R"#(Suppress the highlighting on the structure <AStructure>.)#"  , py::arg("AStructure"))
        .def("UnHighlight",
             (void (Graphic3d_StructureManager::*)() ) static_cast<void (Graphic3d_StructureManager::*)() >(&Graphic3d_StructureManager::UnHighlight),
             R"#(Suppresses the highlighting on all the structures in <me>.)#" )
        .def("RecomputeStructures",
             (void (Graphic3d_StructureManager::*)() ) static_cast<void (Graphic3d_StructureManager::*)() >(&Graphic3d_StructureManager::RecomputeStructures),
             R"#(Recomputes all structures in the manager. Resets Device Lost flag.)#" )
        .def("RecomputeStructures",
             (void (Graphic3d_StructureManager::*)( const NCollection_Map<Graphic3d_Structure *> &  ) ) static_cast<void (Graphic3d_StructureManager::*)( const NCollection_Map<Graphic3d_Structure *> &  ) >(&Graphic3d_StructureManager::RecomputeStructures),
             R"#(Recomputes all structures from theStructures.)#"  , py::arg("theStructures"))
        .def("RegisterObject",
             (opencascade::handle<Graphic3d_ViewAffinity> (Graphic3d_StructureManager::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<opencascade::handle<Graphic3d_ViewAffinity> (Graphic3d_StructureManager::*)( const opencascade::handle<Standard_Transient> &  ) >(&Graphic3d_StructureManager::RegisterObject),
             R"#(None)#"  , py::arg("theObject"))
        .def("UnregisterObject",
             (void (Graphic3d_StructureManager::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Graphic3d_StructureManager::*)( const opencascade::handle<Standard_Transient> &  ) >(&Graphic3d_StructureManager::UnregisterObject),
             R"#(None)#"  , py::arg("theObject"))
        .def("ObjectAffinity",
             (opencascade::handle<Graphic3d_ViewAffinity> (Graphic3d_StructureManager::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<opencascade::handle<Graphic3d_ViewAffinity> (Graphic3d_StructureManager::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Graphic3d_StructureManager::ObjectAffinity),
             R"#(None)#"  , py::arg("theObject"))
        .def("IsDeviceLost",
             (Standard_Boolean (Graphic3d_StructureManager::*)() const) static_cast<Standard_Boolean (Graphic3d_StructureManager::*)() const>(&Graphic3d_StructureManager::IsDeviceLost),
             R"#(Returns TRUE if Device Lost flag has been set and presentation data should be reuploaded onto graphics driver.)#" )
        .def("SetDeviceLost",
             (void (Graphic3d_StructureManager::*)() ) static_cast<void (Graphic3d_StructureManager::*)() >(&Graphic3d_StructureManager::SetDeviceLost),
             R"#(Sets Device Lost flag.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_StructureManager::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_StructureManager::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Text ,opencascade::handle<Graphic3d_Text>  , Standard_Transient >>(m.attr("Graphic3d_Text"))
    // constructors
        .def(py::init< const Standard_ShortReal >()  , py::arg("theHeight") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_Text::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_Text::*)() const>(&Graphic3d_Text::DynamicType),
             R"#(None)#" )
        .def("Text",
             (const NCollection_String & (Graphic3d_Text::*)() const) static_cast<const NCollection_String & (Graphic3d_Text::*)() const>(&Graphic3d_Text::Text),
             R"#(Returns text value.)#" )
        .def("SetText",
             (void (Graphic3d_Text::*)(  const NCollection_Utf8String &  ) ) static_cast<void (Graphic3d_Text::*)(  const NCollection_Utf8String &  ) >(&Graphic3d_Text::SetText),
             R"#(Sets text value.)#"  , py::arg("theText"))
        .def("SetText",
             (void (Graphic3d_Text::*)( const TCollection_AsciiString &  ) ) static_cast<void (Graphic3d_Text::*)( const TCollection_AsciiString &  ) >(&Graphic3d_Text::SetText),
             R"#(Sets text value.)#"  , py::arg("theText"))
        .def("SetText",
             (void (Graphic3d_Text::*)( Standard_CString  ) ) static_cast<void (Graphic3d_Text::*)( Standard_CString  ) >(&Graphic3d_Text::SetText),
             R"#(Sets text value.)#"  , py::arg("theText"))
        .def("Position",
             (const gp_Pnt & (Graphic3d_Text::*)() const) static_cast<const gp_Pnt & (Graphic3d_Text::*)() const>(&Graphic3d_Text::Position),
             R"#(The 3D point of attachment is projected. If the orientation is defined, the text is written in the plane of projection.)#" )
        .def("SetPosition",
             (void (Graphic3d_Text::*)( const gp_Pnt &  ) ) static_cast<void (Graphic3d_Text::*)( const gp_Pnt &  ) >(&Graphic3d_Text::SetPosition),
             R"#(Sets text point.)#"  , py::arg("thePoint"))
        .def("Orientation",
             (const gp_Ax2 & (Graphic3d_Text::*)() const) static_cast<const gp_Ax2 & (Graphic3d_Text::*)() const>(&Graphic3d_Text::Orientation),
             R"#(Returns text orientation in 3D space.)#" )
        .def("HasPlane",
             (Standard_Boolean (Graphic3d_Text::*)() const) static_cast<Standard_Boolean (Graphic3d_Text::*)() const>(&Graphic3d_Text::HasPlane),
             R"#(Returns true if the text is filled by a point)#" )
        .def("SetOrientation",
             (void (Graphic3d_Text::*)( const gp_Ax2 &  ) ) static_cast<void (Graphic3d_Text::*)( const gp_Ax2 &  ) >(&Graphic3d_Text::SetOrientation),
             R"#(Sets text orientation in 3D space.)#"  , py::arg("theOrientation"))
        .def("ResetOrientation",
             (void (Graphic3d_Text::*)() ) static_cast<void (Graphic3d_Text::*)() >(&Graphic3d_Text::ResetOrientation),
             R"#(Reset text orientation in 3D space.)#" )
        .def("HasOwnAnchorPoint",
             (Standard_Boolean (Graphic3d_Text::*)() const) static_cast<Standard_Boolean (Graphic3d_Text::*)() const>(&Graphic3d_Text::HasOwnAnchorPoint),
             R"#(Returns true if the text has an anchor point)#" )
        .def("SetOwnAnchorPoint",
             (void (Graphic3d_Text::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_Text::*)( const Standard_Boolean  ) >(&Graphic3d_Text::SetOwnAnchorPoint),
             R"#(Returns true if the text has an anchor point)#"  , py::arg("theHasOwnAnchor"))
        .def("Height",
             (Standard_ShortReal (Graphic3d_Text::*)() const) static_cast<Standard_ShortReal (Graphic3d_Text::*)() const>(&Graphic3d_Text::Height),
             R"#(Sets height of text. (Relative to the Normalized Projection Coordinates (NPC) Space).)#" )
        .def("SetHeight",
             (void (Graphic3d_Text::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_Text::*)( const Standard_ShortReal  ) >(&Graphic3d_Text::SetHeight),
             R"#(Returns height of text)#"  , py::arg("theHeight"))
        .def("HorizontalAlignment",
             (Graphic3d_HorizontalTextAlignment (Graphic3d_Text::*)() const) static_cast<Graphic3d_HorizontalTextAlignment (Graphic3d_Text::*)() const>(&Graphic3d_Text::HorizontalAlignment),
             R"#(Returns horizontal alignment of text.)#" )
        .def("SetHorizontalAlignment",
             (void (Graphic3d_Text::*)( const Graphic3d_HorizontalTextAlignment  ) ) static_cast<void (Graphic3d_Text::*)( const Graphic3d_HorizontalTextAlignment  ) >(&Graphic3d_Text::SetHorizontalAlignment),
             R"#(Sets horizontal alignment of text.)#"  , py::arg("theJustification"))
        .def("VerticalAlignment",
             (Graphic3d_VerticalTextAlignment (Graphic3d_Text::*)() const) static_cast<Graphic3d_VerticalTextAlignment (Graphic3d_Text::*)() const>(&Graphic3d_Text::VerticalAlignment),
             R"#(Returns vertical alignment of text.)#" )
        .def("SetVerticalAlignment",
             (void (Graphic3d_Text::*)( const Graphic3d_VerticalTextAlignment  ) ) static_cast<void (Graphic3d_Text::*)( const Graphic3d_VerticalTextAlignment  ) >(&Graphic3d_Text::SetVerticalAlignment),
             R"#(Sets vertical alignment of text.)#"  , py::arg("theJustification"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_Text::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_Text::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_TextureParams ,opencascade::handle<Graphic3d_TextureParams>  , Standard_Transient >>(m.attr("Graphic3d_TextureParams"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_TextureParams::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_TextureParams::*)() const>(&Graphic3d_TextureParams::DynamicType),
             R"#(None)#" )
        .def("TextureUnit",
             (Graphic3d_TextureUnit (Graphic3d_TextureParams::*)() const) static_cast<Graphic3d_TextureUnit (Graphic3d_TextureParams::*)() const>(&Graphic3d_TextureParams::TextureUnit),
             R"#(Default texture unit to be used, default is Graphic3d_TextureUnit_BaseColor.)#" )
        .def("SetTextureUnit",
             (void (Graphic3d_TextureParams::*)( Graphic3d_TextureUnit  ) ) static_cast<void (Graphic3d_TextureParams::*)( Graphic3d_TextureUnit  ) >(&Graphic3d_TextureParams::SetTextureUnit),
             R"#(Setup default texture unit.)#"  , py::arg("theUnit"))
        .def("IsModulate",
             (Standard_Boolean (Graphic3d_TextureParams::*)() const) static_cast<Standard_Boolean (Graphic3d_TextureParams::*)() const>(&Graphic3d_TextureParams::IsModulate),
             R"#(Returns TRUE if the texture is modulate. Default value is FALSE.)#" )
        .def("SetModulate",
             (void (Graphic3d_TextureParams::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_TextureParams::*)( const Standard_Boolean  ) >(&Graphic3d_TextureParams::SetModulate),
             R"#()#"  , py::arg("theToModulate"))
        .def("IsRepeat",
             (Standard_Boolean (Graphic3d_TextureParams::*)() const) static_cast<Standard_Boolean (Graphic3d_TextureParams::*)() const>(&Graphic3d_TextureParams::IsRepeat),
             R"#(Returns TRUE if the texture repeat is enabled. Default value is FALSE.)#" )
        .def("SetRepeat",
             (void (Graphic3d_TextureParams::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_TextureParams::*)( const Standard_Boolean  ) >(&Graphic3d_TextureParams::SetRepeat),
             R"#()#"  , py::arg("theToRepeat"))
        .def("Filter",
             (Graphic3d_TypeOfTextureFilter (Graphic3d_TextureParams::*)() const) static_cast<Graphic3d_TypeOfTextureFilter (Graphic3d_TextureParams::*)() const>(&Graphic3d_TextureParams::Filter),
             R"#(Returns texture interpolation filter. Default value is Graphic3d_TOTF_NEAREST.)#" )
        .def("SetFilter",
             (void (Graphic3d_TextureParams::*)( const Graphic3d_TypeOfTextureFilter  ) ) static_cast<void (Graphic3d_TextureParams::*)( const Graphic3d_TypeOfTextureFilter  ) >(&Graphic3d_TextureParams::SetFilter),
             R"#()#"  , py::arg("theFilter"))
        .def("AnisoFilter",
             (Graphic3d_LevelOfTextureAnisotropy (Graphic3d_TextureParams::*)() const) static_cast<Graphic3d_LevelOfTextureAnisotropy (Graphic3d_TextureParams::*)() const>(&Graphic3d_TextureParams::AnisoFilter),
             R"#(Returns level of anisontropy texture filter. Default value is Graphic3d_LOTA_OFF.)#" )
        .def("SetAnisoFilter",
             (void (Graphic3d_TextureParams::*)( const Graphic3d_LevelOfTextureAnisotropy  ) ) static_cast<void (Graphic3d_TextureParams::*)( const Graphic3d_LevelOfTextureAnisotropy  ) >(&Graphic3d_TextureParams::SetAnisoFilter),
             R"#()#"  , py::arg("theLevel"))
        .def("Rotation",
             (Standard_ShortReal (Graphic3d_TextureParams::*)() const) static_cast<Standard_ShortReal (Graphic3d_TextureParams::*)() const>(&Graphic3d_TextureParams::Rotation),
             R"#(Returns rotation angle in degrees Default value is 0.)#" )
        .def("SetRotation",
             (void (Graphic3d_TextureParams::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_TextureParams::*)( const Standard_ShortReal  ) >(&Graphic3d_TextureParams::SetRotation),
             R"#()#"  , py::arg("theAngleDegrees"))
        .def("Scale",
             (const Graphic3d_Vec2 & (Graphic3d_TextureParams::*)() const) static_cast<const Graphic3d_Vec2 & (Graphic3d_TextureParams::*)() const>(&Graphic3d_TextureParams::Scale),
             R"#(Returns scale factor Default value is no scaling (1.0; 1.0).)#" )
        .def("SetScale",
             (void (Graphic3d_TextureParams::*)(  const NCollection_Vec2<Standard_ShortReal>  ) ) static_cast<void (Graphic3d_TextureParams::*)(  const NCollection_Vec2<Standard_ShortReal>  ) >(&Graphic3d_TextureParams::SetScale),
             R"#()#"  , py::arg("theScale"))
        .def("Translation",
             (const Graphic3d_Vec2 & (Graphic3d_TextureParams::*)() const) static_cast<const Graphic3d_Vec2 & (Graphic3d_TextureParams::*)() const>(&Graphic3d_TextureParams::Translation),
             R"#(Returns translation vector Default value is no translation (0.0; 0.0).)#" )
        .def("SetTranslation",
             (void (Graphic3d_TextureParams::*)(  const NCollection_Vec2<Standard_ShortReal>  ) ) static_cast<void (Graphic3d_TextureParams::*)(  const NCollection_Vec2<Standard_ShortReal>  ) >(&Graphic3d_TextureParams::SetTranslation),
             R"#()#"  , py::arg("theVec"))
        .def("GenMode",
             (Graphic3d_TypeOfTextureMode (Graphic3d_TextureParams::*)() const) static_cast<Graphic3d_TypeOfTextureMode (Graphic3d_TextureParams::*)() const>(&Graphic3d_TextureParams::GenMode),
             R"#(Returns texture coordinates generation mode. Default value is Graphic3d_TOTM_MANUAL.)#" )
        .def("GenPlaneS",
             (const Graphic3d_Vec4 & (Graphic3d_TextureParams::*)() const) static_cast<const Graphic3d_Vec4 & (Graphic3d_TextureParams::*)() const>(&Graphic3d_TextureParams::GenPlaneS),
             R"#(Returns texture coordinates generation plane S.)#" )
        .def("GenPlaneT",
             (const Graphic3d_Vec4 & (Graphic3d_TextureParams::*)() const) static_cast<const Graphic3d_Vec4 & (Graphic3d_TextureParams::*)() const>(&Graphic3d_TextureParams::GenPlaneT),
             R"#(Returns texture coordinates generation plane T.)#" )
        .def("SetGenMode",
             (void (Graphic3d_TextureParams::*)( const Graphic3d_TypeOfTextureMode ,   const NCollection_Vec4<Standard_ShortReal> ,   const NCollection_Vec4<Standard_ShortReal>  ) ) static_cast<void (Graphic3d_TextureParams::*)( const Graphic3d_TypeOfTextureMode ,   const NCollection_Vec4<Standard_ShortReal> ,   const NCollection_Vec4<Standard_ShortReal>  ) >(&Graphic3d_TextureParams::SetGenMode),
             R"#(Setup texture coordinates generation mode.)#"  , py::arg("theMode"),  py::arg("thePlaneS"),  py::arg("thePlaneT"))
        .def("SamplerRevision",
             (unsigned int (Graphic3d_TextureParams::*)() const) static_cast<unsigned int (Graphic3d_TextureParams::*)() const>(&Graphic3d_TextureParams::SamplerRevision),
             R"#(Return modification counter of parameters related to sampler state.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_TextureParams::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_TextureParams::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_TextureRoot ,opencascade::handle<Graphic3d_TextureRoot>  , Standard_Transient >>(m.attr("Graphic3d_TextureRoot"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_TextureRoot::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_TextureRoot::*)() const>(&Graphic3d_TextureRoot::DynamicType),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (Graphic3d_TextureRoot::*)() const) static_cast<Standard_Boolean (Graphic3d_TextureRoot::*)() const>(&Graphic3d_TextureRoot::IsDone),
             R"#(Checks if a texture class is valid or not.)#" )
        .def("Path",
             (const OSD_Path & (Graphic3d_TextureRoot::*)() const) static_cast<const OSD_Path & (Graphic3d_TextureRoot::*)() const>(&Graphic3d_TextureRoot::Path),
             R"#(Returns the full path of the defined texture. It could be empty path if GetImage() is overridden to load image not from file.)#" )
        .def("Type",
             (Graphic3d_TypeOfTexture (Graphic3d_TextureRoot::*)() const) static_cast<Graphic3d_TypeOfTexture (Graphic3d_TextureRoot::*)() const>(&Graphic3d_TextureRoot::Type),
             R"#(Returns the texture type.)#" )
        .def("GetId",
             (const TCollection_AsciiString & (Graphic3d_TextureRoot::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_TextureRoot::*)() const>(&Graphic3d_TextureRoot::GetId),
             R"#(This ID will be used to manage resource in graphic driver.)#" )
        .def("Revision",
             (Standard_Size (Graphic3d_TextureRoot::*)() const) static_cast<Standard_Size (Graphic3d_TextureRoot::*)() const>(&Graphic3d_TextureRoot::Revision),
             R"#(Return image revision.)#" )
        .def("UpdateRevision",
             (void (Graphic3d_TextureRoot::*)() ) static_cast<void (Graphic3d_TextureRoot::*)() >(&Graphic3d_TextureRoot::UpdateRevision),
             R"#(Update image revision. Can be used for signaling changes in the texture source (e.g. file update, pixmap update) without re-creating texture source itself (since unique id should be never modified).)#" )
        .def("GetImage",
             (opencascade::handle<Image_PixMap> (Graphic3d_TextureRoot::*)() const) static_cast<opencascade::handle<Image_PixMap> (Graphic3d_TextureRoot::*)() const>(&Graphic3d_TextureRoot::GetImage),
             R"#(This method will be called by graphic driver each time when texture resource should be created. Default constructors allow defining the texture source as path to texture image or directly as pixmap. If the source is defined as path, then the image will be dynamically loaded when this method is called (and no copy will be preserved in this class instance). Inheritors may dynamically generate the image. Notice, image data should be in Bottom-Up order (see Image_PixMap::IsTopDown())!)#" )
        .def("GetParams",
             (const opencascade::handle<Graphic3d_TextureParams> & (Graphic3d_TextureRoot::*)() const) static_cast<const opencascade::handle<Graphic3d_TextureParams> & (Graphic3d_TextureRoot::*)() const>(&Graphic3d_TextureRoot::GetParams),
             R"#(Returns low-level texture parameters)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_TextureRoot::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_TextureRoot::get_type_descriptor),
                    R"#(None)#" )
        .def_static("TexturesFolder_s",
                    (TCollection_AsciiString (*)() ) static_cast<TCollection_AsciiString (*)() >(&Graphic3d_TextureRoot::TexturesFolder),
                    R"#(The path to textures determined from CSF_MDTVTexturesDirectory or CASROOT environment variables.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_TextureSet ,opencascade::handle<Graphic3d_TextureSet>  , Standard_Transient >>(m.attr("Graphic3d_TextureSet"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< Standard_Integer >()  , py::arg("theNbTextures") )
        .def(py::init< const opencascade::handle<Graphic3d_TextureMap> & >()  , py::arg("theTexture") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_TextureSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_TextureSet::*)() const>(&Graphic3d_TextureSet::DynamicType),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (Graphic3d_TextureSet::*)() const) static_cast<Standard_Boolean (Graphic3d_TextureSet::*)() const>(&Graphic3d_TextureSet::IsEmpty),
             R"#(Return TRUE if texture array is empty.)#" )
        .def("Size",
             (Standard_Integer (Graphic3d_TextureSet::*)() const) static_cast<Standard_Integer (Graphic3d_TextureSet::*)() const>(&Graphic3d_TextureSet::Size),
             R"#(Return number of textures.)#" )
        .def("Lower",
             (Standard_Integer (Graphic3d_TextureSet::*)() const) static_cast<Standard_Integer (Graphic3d_TextureSet::*)() const>(&Graphic3d_TextureSet::Lower),
             R"#(Return the lower index in texture set.)#" )
        .def("Upper",
             (Standard_Integer (Graphic3d_TextureSet::*)() const) static_cast<Standard_Integer (Graphic3d_TextureSet::*)() const>(&Graphic3d_TextureSet::Upper),
             R"#(Return the upper index in texture set.)#" )
        .def("First",
             (const opencascade::handle<Graphic3d_TextureMap> & (Graphic3d_TextureSet::*)() const) static_cast<const opencascade::handle<Graphic3d_TextureMap> & (Graphic3d_TextureSet::*)() const>(&Graphic3d_TextureSet::First),
             R"#(Return the first texture.)#" )
        .def("SetFirst",
             (void (Graphic3d_TextureSet::*)( const opencascade::handle<Graphic3d_TextureMap> &  ) ) static_cast<void (Graphic3d_TextureSet::*)( const opencascade::handle<Graphic3d_TextureMap> &  ) >(&Graphic3d_TextureSet::SetFirst),
             R"#(Return the first texture.)#"  , py::arg("theTexture"))
        .def("Value",
             (const opencascade::handle<Graphic3d_TextureMap> & (Graphic3d_TextureSet::*)( Standard_Integer  ) const) static_cast<const opencascade::handle<Graphic3d_TextureMap> & (Graphic3d_TextureSet::*)( Standard_Integer  ) const>(&Graphic3d_TextureSet::Value),
             R"#(Return the texture at specified position within [0, Size()) range.)#"  , py::arg("theIndex"))
        .def("SetValue",
             (void (Graphic3d_TextureSet::*)( Standard_Integer ,  const opencascade::handle<Graphic3d_TextureMap> &  ) ) static_cast<void (Graphic3d_TextureSet::*)( Standard_Integer ,  const opencascade::handle<Graphic3d_TextureMap> &  ) >(&Graphic3d_TextureSet::SetValue),
             R"#(Return the texture at specified position within [0, Size()) range.)#"  , py::arg("theIndex"),  py::arg("theTexture"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_TextureSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_TextureSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_TransformPers ,opencascade::handle<Graphic3d_TransformPers>  , Standard_Transient >>(m.attr("Graphic3d_TransformPers"))
    // constructors
        .def(py::init< const Graphic3d_TransModeFlags >()  , py::arg("theMode") )
        .def(py::init< const Graphic3d_TransModeFlags,const gp_Pnt & >()  , py::arg("theMode"),  py::arg("thePnt") )
        .def(py::init< const Graphic3d_TransModeFlags,const Aspect_TypeOfTriedronPosition, const NCollection_Vec2<Standard_Integer> & >()  , py::arg("theMode"),  py::arg("theCorner"),  py::arg("theOffset")=static_cast< const NCollection_Vec2<Standard_Integer> &>(Graphic3d_Vec2i ( 0 , 0 )) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_TransformPers::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_TransformPers::*)() const>(&Graphic3d_TransformPers::DynamicType),
             R"#(None)#" )
        .def("IsZoomOrRotate",
             (Standard_Boolean (Graphic3d_TransformPers::*)() const) static_cast<Standard_Boolean (Graphic3d_TransformPers::*)() const>(&Graphic3d_TransformPers::IsZoomOrRotate),
             R"#(Return true for Graphic3d_TMF_ZoomPers, Graphic3d_TMF_ZoomRotatePers or Graphic3d_TMF_RotatePers modes.)#" )
        .def("IsTrihedronOr2d",
             (Standard_Boolean (Graphic3d_TransformPers::*)() const) static_cast<Standard_Boolean (Graphic3d_TransformPers::*)() const>(&Graphic3d_TransformPers::IsTrihedronOr2d),
             R"#(Return true for Graphic3d_TMF_TriedronPers and Graphic3d_TMF_2d modes.)#" )
        .def("Mode",
             (Graphic3d_TransModeFlags (Graphic3d_TransformPers::*)() const) static_cast<Graphic3d_TransModeFlags (Graphic3d_TransformPers::*)() const>(&Graphic3d_TransformPers::Mode),
             R"#(Transformation persistence mode flags.)#" )
        .def("Flags",
             (Graphic3d_TransModeFlags (Graphic3d_TransformPers::*)() const) static_cast<Graphic3d_TransModeFlags (Graphic3d_TransformPers::*)() const>(&Graphic3d_TransformPers::Flags),
             R"#(Transformation persistence mode flags.)#" )
        .def("SetPersistence",
             (void (Graphic3d_TransformPers::*)( const Graphic3d_TransModeFlags ,  const gp_Pnt &  ) ) static_cast<void (Graphic3d_TransformPers::*)( const Graphic3d_TransModeFlags ,  const gp_Pnt &  ) >(&Graphic3d_TransformPers::SetPersistence),
             R"#(Set Zoom/Rotate transformation persistence with an anchor 3D point. Throws an exception if persistence mode is not Graphic3d_TMF_ZoomPers, Graphic3d_TMF_ZoomRotatePers or Graphic3d_TMF_RotatePers.)#"  , py::arg("theMode"),  py::arg("thePnt"))
        .def("SetPersistence",
             (void (Graphic3d_TransformPers::*)( const Graphic3d_TransModeFlags ,  const Aspect_TypeOfTriedronPosition ,   const NCollection_Vec2<Standard_Integer> &  ) ) static_cast<void (Graphic3d_TransformPers::*)( const Graphic3d_TransModeFlags ,  const Aspect_TypeOfTriedronPosition ,   const NCollection_Vec2<Standard_Integer> &  ) >(&Graphic3d_TransformPers::SetPersistence),
             R"#(Set 2d/trihedron transformation persistence with a corner and 2D offset. Throws an exception if persistence mode is not Graphic3d_TMF_TriedronPers or Graphic3d_TMF_2d.)#"  , py::arg("theMode"),  py::arg("theCorner"),  py::arg("theOffset"))
        .def("AnchorPoint",
             (gp_Pnt (Graphic3d_TransformPers::*)() const) static_cast<gp_Pnt (Graphic3d_TransformPers::*)() const>(&Graphic3d_TransformPers::AnchorPoint),
             R"#(Return the anchor point for zoom/rotate transformation persistence.)#" )
        .def("SetAnchorPoint",
             (void (Graphic3d_TransformPers::*)( const gp_Pnt &  ) ) static_cast<void (Graphic3d_TransformPers::*)( const gp_Pnt &  ) >(&Graphic3d_TransformPers::SetAnchorPoint),
             R"#(Set the anchor point for zoom/rotate transformation persistence.)#"  , py::arg("thePnt"))
        .def("Corner2d",
             (Aspect_TypeOfTriedronPosition (Graphic3d_TransformPers::*)() const) static_cast<Aspect_TypeOfTriedronPosition (Graphic3d_TransformPers::*)() const>(&Graphic3d_TransformPers::Corner2d),
             R"#(Return the corner for 2d/trihedron transformation persistence.)#" )
        .def("SetCorner2d",
             (void (Graphic3d_TransformPers::*)( const Aspect_TypeOfTriedronPosition  ) ) static_cast<void (Graphic3d_TransformPers::*)( const Aspect_TypeOfTriedronPosition  ) >(&Graphic3d_TransformPers::SetCorner2d),
             R"#(Set the corner for 2d/trihedron transformation persistence.)#"  , py::arg("thePos"))
        .def("Offset2d",
             (Graphic3d_Vec2i (Graphic3d_TransformPers::*)() const) static_cast<Graphic3d_Vec2i (Graphic3d_TransformPers::*)() const>(&Graphic3d_TransformPers::Offset2d),
             R"#(Return the offset from the corner for 2d/trihedron transformation persistence.)#" )
        .def("SetOffset2d",
             (void (Graphic3d_TransformPers::*)(  const NCollection_Vec2<Standard_Integer> &  ) ) static_cast<void (Graphic3d_TransformPers::*)(  const NCollection_Vec2<Standard_Integer> &  ) >(&Graphic3d_TransformPers::SetOffset2d),
             R"#(Set the offset from the corner for 2d/trihedron transformation persistence.)#"  , py::arg("theOffset"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_TransformPers::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_TransformPers::get_type_descriptor),
                    R"#(None)#" )
        .def_static("IsZoomOrRotate_s",
                    (Standard_Boolean (*)( Graphic3d_TransModeFlags  ) ) static_cast<Standard_Boolean (*)( Graphic3d_TransModeFlags  ) >(&Graphic3d_TransformPers::IsZoomOrRotate),
                    R"#(Return true if specified mode is zoom/rotate transformation persistence.)#"  , py::arg("theMode"))
        .def_static("IsTrihedronOr2d_s",
                    (Standard_Boolean (*)( Graphic3d_TransModeFlags  ) ) static_cast<Standard_Boolean (*)( Graphic3d_TransModeFlags  ) >(&Graphic3d_TransformPers::IsTrihedronOr2d),
                    R"#(Return true if specified mode is 2d/trihedron transformation persistence.)#"  , py::arg("theMode"))
        .def_static("FromDeprecatedParams_s",
                    (opencascade::handle<Graphic3d_TransformPers> (*)( Graphic3d_TransModeFlags ,  const gp_Pnt &  ) ) static_cast<opencascade::handle<Graphic3d_TransformPers> (*)( Graphic3d_TransModeFlags ,  const gp_Pnt &  ) >(&Graphic3d_TransformPers::FromDeprecatedParams),
                    R"#(Create Graphic3d_TransformPers instance from deprecated parameters set decoding 2D corner + offset parameters from 3D point.)#"  , py::arg("theFlag"),  py::arg("thePoint"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Graphic3d_UniformValueTypeID<Graphic3d_Vec2> , shared_ptr<Graphic3d_UniformValueTypeID<Graphic3d_Vec2>>>(m,"Graphic3d_UniformValueTypeID_Graphic3d_Vec2");

    static_cast<py::class_<Graphic3d_UniformValueTypeID<Graphic3d_Vec2> , shared_ptr<Graphic3d_UniformValueTypeID<Graphic3d_Vec2>>  >>(m.attr("Graphic3d_UniformValueTypeID_Graphic3d_Vec2"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Graphic3d_UniformValueTypeID<Graphic3d_Vec2i> , shared_ptr<Graphic3d_UniformValueTypeID<Graphic3d_Vec2i>>>(m,"Graphic3d_UniformValueTypeID_Graphic3d_Vec2i");

    static_cast<py::class_<Graphic3d_UniformValueTypeID<Graphic3d_Vec2i> , shared_ptr<Graphic3d_UniformValueTypeID<Graphic3d_Vec2i>>  >>(m.attr("Graphic3d_UniformValueTypeID_Graphic3d_Vec2i"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Graphic3d_UniformValueTypeID<Graphic3d_Vec3> , shared_ptr<Graphic3d_UniformValueTypeID<Graphic3d_Vec3>>>(m,"Graphic3d_UniformValueTypeID_Graphic3d_Vec3");

    static_cast<py::class_<Graphic3d_UniformValueTypeID<Graphic3d_Vec3> , shared_ptr<Graphic3d_UniformValueTypeID<Graphic3d_Vec3>>  >>(m.attr("Graphic3d_UniformValueTypeID_Graphic3d_Vec3"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Graphic3d_UniformValueTypeID<Graphic3d_Vec3i> , shared_ptr<Graphic3d_UniformValueTypeID<Graphic3d_Vec3i>>>(m,"Graphic3d_UniformValueTypeID_Graphic3d_Vec3i");

    static_cast<py::class_<Graphic3d_UniformValueTypeID<Graphic3d_Vec3i> , shared_ptr<Graphic3d_UniformValueTypeID<Graphic3d_Vec3i>>  >>(m.attr("Graphic3d_UniformValueTypeID_Graphic3d_Vec3i"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Graphic3d_UniformValueTypeID<Graphic3d_Vec4> , shared_ptr<Graphic3d_UniformValueTypeID<Graphic3d_Vec4>>>(m,"Graphic3d_UniformValueTypeID_Graphic3d_Vec4");

    static_cast<py::class_<Graphic3d_UniformValueTypeID<Graphic3d_Vec4> , shared_ptr<Graphic3d_UniformValueTypeID<Graphic3d_Vec4>>  >>(m.attr("Graphic3d_UniformValueTypeID_Graphic3d_Vec4"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Graphic3d_UniformValueTypeID<Graphic3d_Vec4i> , shared_ptr<Graphic3d_UniformValueTypeID<Graphic3d_Vec4i>>>(m,"Graphic3d_UniformValueTypeID_Graphic3d_Vec4i");

    static_cast<py::class_<Graphic3d_UniformValueTypeID<Graphic3d_Vec4i> , shared_ptr<Graphic3d_UniformValueTypeID<Graphic3d_Vec4i>>  >>(m.attr("Graphic3d_UniformValueTypeID_Graphic3d_Vec4i"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Graphic3d_UniformValueTypeID<Standard_Integer> , shared_ptr<Graphic3d_UniformValueTypeID<Standard_Integer>>>(m,"Graphic3d_UniformValueTypeID_Standard_Integer");

    static_cast<py::class_<Graphic3d_UniformValueTypeID<Standard_Integer> , shared_ptr<Graphic3d_UniformValueTypeID<Standard_Integer>>  >>(m.attr("Graphic3d_UniformValueTypeID_Standard_Integer"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Graphic3d_UniformValueTypeID<Standard_ShortReal> , shared_ptr<Graphic3d_UniformValueTypeID<Standard_ShortReal>>>(m,"Graphic3d_UniformValueTypeID_Standard_ShortReal");

    static_cast<py::class_<Graphic3d_UniformValueTypeID<Standard_ShortReal> , shared_ptr<Graphic3d_UniformValueTypeID<Standard_ShortReal>>  >>(m.attr("Graphic3d_UniformValueTypeID_Standard_ShortReal"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ValidatedCubeMapOrder , shared_ptr<Graphic3d_ValidatedCubeMapOrder>  >>(m.attr("Graphic3d_ValidatedCubeMapOrder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ValueInterface , shared_ptr<Graphic3d_ValueInterface> ,Py_Graphic3d_ValueInterface >>(m.attr("Graphic3d_ValueInterface"))
    // constructors
    // custom constructors
    // methods
        .def("TypeID",
             (Standard_Size (Graphic3d_ValueInterface::*)() const) static_cast<Standard_Size (Graphic3d_ValueInterface::*)() const>(&Graphic3d_ValueInterface::TypeID),
             R"#(Returns unique identifier of value type.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Vertex , shared_ptr<Graphic3d_Vertex>  >>(m.attr("Graphic3d_Vertex"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Graphic3d_Vertex & >()  , py::arg("thePoint") )
        .def(py::init< const Standard_ShortReal,const Standard_ShortReal,const Standard_ShortReal >()  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ") )
    // custom constructors
    // methods
        .def("SetCoord",
             (void (Graphic3d_Vertex::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) ) static_cast<void (Graphic3d_Vertex::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) >(&Graphic3d_Vertex::SetCoord),
             R"#(Modifies the coordinates.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("SetCoord",
             (void (Graphic3d_Vertex::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Graphic3d_Vertex::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Graphic3d_Vertex::SetCoord),
             R"#(Modifies the coordinates.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("Coord",
             (void (Graphic3d_Vertex::*)( Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) const) static_cast<void (Graphic3d_Vertex::*)( Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) const>(&Graphic3d_Vertex::Coord),
             R"#(Returns the coordinates.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("X",
             (Standard_ShortReal (Graphic3d_Vertex::*)() const) static_cast<Standard_ShortReal (Graphic3d_Vertex::*)() const>(&Graphic3d_Vertex::X),
             R"#(Returns the X coordinates.)#" )
        .def("Y",
             (Standard_ShortReal (Graphic3d_Vertex::*)() const) static_cast<Standard_ShortReal (Graphic3d_Vertex::*)() const>(&Graphic3d_Vertex::Y),
             R"#(Returns the Y coordinate.)#" )
        .def("Z",
             (Standard_ShortReal (Graphic3d_Vertex::*)() const) static_cast<Standard_ShortReal (Graphic3d_Vertex::*)() const>(&Graphic3d_Vertex::Z),
             R"#(Returns the Z coordinate.)#" )
        .def("Distance",
             (Standard_ShortReal (Graphic3d_Vertex::*)( const Graphic3d_Vertex &  ) const) static_cast<Standard_ShortReal (Graphic3d_Vertex::*)( const Graphic3d_Vertex &  ) const>(&Graphic3d_Vertex::Distance),
             R"#(Returns the distance between two points.)#"  , py::arg("theOther"))
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( Graphic3d_Vertex &self   ){ Standard_Real  theX; Standard_Real  theY; Standard_Real  theZ; self.Coord(theX,theY,theZ); return std::make_tuple(theX,theY,theZ); },
             R"#(Returns the coordinates.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ViewAffinity ,opencascade::handle<Graphic3d_ViewAffinity>  , Standard_Transient >>(m.attr("Graphic3d_ViewAffinity"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsVisible",
             (bool (Graphic3d_ViewAffinity::*)( const Standard_Integer  ) const) static_cast<bool (Graphic3d_ViewAffinity::*)( const Standard_Integer  ) const>(&Graphic3d_ViewAffinity::IsVisible),
             R"#(Return visibility flag.)#"  , py::arg("theViewId"))
        .def("SetVisible",
             (void (Graphic3d_ViewAffinity::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_ViewAffinity::*)( const Standard_Boolean  ) >(&Graphic3d_ViewAffinity::SetVisible),
             R"#(Setup visibility flag for all views.)#"  , py::arg("theIsVisible"))
        .def("SetVisible",
             (void (Graphic3d_ViewAffinity::*)( const Standard_Integer ,  const bool  ) ) static_cast<void (Graphic3d_ViewAffinity::*)( const Standard_Integer ,  const bool  ) >(&Graphic3d_ViewAffinity::SetVisible),
             R"#(Setup visibility flag.)#"  , py::arg("theViewId"),  py::arg("theIsVisible"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ViewAffinity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ViewAffinity::*)() const>(&Graphic3d_ViewAffinity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ViewAffinity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ViewAffinity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_WorldViewProjState , shared_ptr<Graphic3d_WorldViewProjState>  >>(m.attr("Graphic3d_WorldViewProjState"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Size,const Standard_Size,const Standard_Transient * >()  , py::arg("theProjectionState"),  py::arg("theWorldViewState"),  py::arg("theCamera")=static_cast<const Standard_Transient *>(NULL) )
    // custom constructors
    // methods
        .def("IsValid",
             (Standard_Boolean (Graphic3d_WorldViewProjState::*)() ) static_cast<Standard_Boolean (Graphic3d_WorldViewProjState::*)() >(&Graphic3d_WorldViewProjState::IsValid),
             R"#(Check state validity.)#" )
        .def("Reset",
             (void (Graphic3d_WorldViewProjState::*)() ) static_cast<void (Graphic3d_WorldViewProjState::*)() >(&Graphic3d_WorldViewProjState::Reset),
             R"#(Invalidate world view projection state.)#" )
        .def("Initialize",
             (void (Graphic3d_WorldViewProjState::*)( const Standard_Size ,  const Standard_Size ,  const Standard_Transient *  ) ) static_cast<void (Graphic3d_WorldViewProjState::*)( const Standard_Size ,  const Standard_Size ,  const Standard_Transient *  ) >(&Graphic3d_WorldViewProjState::Initialize),
             R"#(Initialize world view projection state.)#"  , py::arg("theProjectionState"),  py::arg("theWorldViewState"),  py::arg("theCamera")=static_cast<const Standard_Transient *>(NULL))
        .def("Initialize",
             (void (Graphic3d_WorldViewProjState::*)( const Standard_Transient *  ) ) static_cast<void (Graphic3d_WorldViewProjState::*)( const Standard_Transient *  ) >(&Graphic3d_WorldViewProjState::Initialize),
             R"#(Initialize world view projection state.)#"  , py::arg("theCamera")=static_cast<const Standard_Transient *>(NULL))
        .def("ProjectionState",
             (Standard_Size & (Graphic3d_WorldViewProjState::*)() ) static_cast<Standard_Size & (Graphic3d_WorldViewProjState::*)() >(&Graphic3d_WorldViewProjState::ProjectionState),
             R"#(Returns projection state counter.)#" )
        .def("WorldViewState",
             (Standard_Size & (Graphic3d_WorldViewProjState::*)() ) static_cast<Standard_Size & (Graphic3d_WorldViewProjState::*)() >(&Graphic3d_WorldViewProjState::WorldViewState),
             R"#(Returns world view state counter.)#" )
        .def("IsProjectionChanged",
             (Standard_Boolean (Graphic3d_WorldViewProjState::*)( const Graphic3d_WorldViewProjState &  ) ) static_cast<Standard_Boolean (Graphic3d_WorldViewProjState::*)( const Graphic3d_WorldViewProjState &  ) >(&Graphic3d_WorldViewProjState::IsProjectionChanged),
             R"#(Compare projection with other state.)#"  , py::arg("theState"))
        .def("IsWorldViewChanged",
             (Standard_Boolean (Graphic3d_WorldViewProjState::*)( const Graphic3d_WorldViewProjState &  ) ) static_cast<Standard_Boolean (Graphic3d_WorldViewProjState::*)( const Graphic3d_WorldViewProjState &  ) >(&Graphic3d_WorldViewProjState::IsWorldViewChanged),
             R"#(Compare world view transformation with other state.)#"  , py::arg("theState"))
        .def("IsChanged",
             (Standard_Boolean (Graphic3d_WorldViewProjState::*)( const Graphic3d_WorldViewProjState &  ) ) static_cast<Standard_Boolean (Graphic3d_WorldViewProjState::*)( const Graphic3d_WorldViewProjState &  ) >(&Graphic3d_WorldViewProjState::IsChanged),
             R"#(Compare with other world view projection state.)#"  , py::arg("theState"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ZLayerSettings , shared_ptr<Graphic3d_ZLayerSettings>  >>(m.attr("Graphic3d_ZLayerSettings"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Name",
             (const TCollection_AsciiString & (Graphic3d_ZLayerSettings::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::Name),
             R"#(Return user-provided name.)#" )
        .def("SetName",
             (void (Graphic3d_ZLayerSettings::*)( const TCollection_AsciiString &  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( const TCollection_AsciiString &  ) >(&Graphic3d_ZLayerSettings::SetName),
             R"#(Set custom name.)#"  , py::arg("theName"))
        .def("Lights",
             (const opencascade::handle<Graphic3d_LightSet> & (Graphic3d_ZLayerSettings::*)() const) static_cast<const opencascade::handle<Graphic3d_LightSet> & (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::Lights),
             R"#(Return lights list to be used for rendering presentations within this Z-Layer; NULL by default. NULL list (but not empty list!) means that default lights assigned to the View should be used instead of per-layer lights.)#" )
        .def("SetLights",
             (void (Graphic3d_ZLayerSettings::*)( const opencascade::handle<Graphic3d_LightSet> &  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( const opencascade::handle<Graphic3d_LightSet> &  ) >(&Graphic3d_ZLayerSettings::SetLights),
             R"#(Assign lights list to be used.)#"  , py::arg("theLights"))
        .def("Origin",
             (const gp_XYZ & (Graphic3d_ZLayerSettings::*)() const) static_cast<const gp_XYZ & (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::Origin),
             R"#(Return the origin of all objects within the layer.)#" )
        .def("OriginTransformation",
             (const opencascade::handle<Geom_Transformation> & (Graphic3d_ZLayerSettings::*)() const) static_cast<const opencascade::handle<Geom_Transformation> & (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::OriginTransformation),
             R"#(Return the transformation to the origin.)#" )
        .def("SetOrigin",
             (void (Graphic3d_ZLayerSettings::*)( const gp_XYZ &  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( const gp_XYZ &  ) >(&Graphic3d_ZLayerSettings::SetOrigin),
             R"#(Set the origin of all objects within the layer.)#"  , py::arg("theOrigin"))
        .def("HasCullingDistance",
             (Standard_Boolean (Graphic3d_ZLayerSettings::*)() const) static_cast<Standard_Boolean (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::HasCullingDistance),
             R"#(Return TRUE, if culling of distant objects (distance culling) should be performed; FALSE by default.)#" )
        .def("CullingDistance",
             (Standard_Real (Graphic3d_ZLayerSettings::*)() const) static_cast<Standard_Real (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::CullingDistance),
             R"#(Return the distance to discard drawing of distant objects (distance from camera Eye point); by default it is Infinite (distance culling is disabled). Since camera eye definition has no strong meaning within orthographic projection, option is considered only within perspective projection. Note also that this option has effect only when frustum culling is enabled.)#" )
        .def("SetCullingDistance",
             (void (Graphic3d_ZLayerSettings::*)( Standard_Real  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( Standard_Real  ) >(&Graphic3d_ZLayerSettings::SetCullingDistance),
             R"#(Set the distance to discard drawing objects.)#"  , py::arg("theDistance"))
        .def("HasCullingSize",
             (Standard_Boolean (Graphic3d_ZLayerSettings::*)() const) static_cast<Standard_Boolean (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::HasCullingSize),
             R"#(Return TRUE, if culling of small objects (size culling) should be performed; FALSE by default.)#" )
        .def("CullingSize",
             (Standard_Real (Graphic3d_ZLayerSettings::*)() const) static_cast<Standard_Real (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::CullingSize),
             R"#(Return the size to discard drawing of small objects; by default it is Infinite (size culling is disabled). Current implementation checks the length of projected diagonal of bounding box in pixels for discarding. Note that this option has effect only when frustum culling is enabled.)#" )
        .def("SetCullingSize",
             (void (Graphic3d_ZLayerSettings::*)( Standard_Real  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( Standard_Real  ) >(&Graphic3d_ZLayerSettings::SetCullingSize),
             R"#(Set the distance to discard drawing objects.)#"  , py::arg("theSize"))
        .def("IsImmediate",
             (Standard_Boolean (Graphic3d_ZLayerSettings::*)() const) static_cast<Standard_Boolean (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::IsImmediate),
             R"#(Return true if this layer should be drawn after all normal (non-immediate) layers.)#" )
        .def("SetImmediate",
             (void (Graphic3d_ZLayerSettings::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( const Standard_Boolean  ) >(&Graphic3d_ZLayerSettings::SetImmediate),
             R"#(Set the flag indicating the immediate layer, which should be drawn after all normal (non-immediate) layers.)#"  , py::arg("theValue"))
        .def("IsRaytracable",
             (Standard_Boolean (Graphic3d_ZLayerSettings::*)() const) static_cast<Standard_Boolean (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::IsRaytracable),
             R"#(Returns TRUE if layer should be processed by ray-tracing renderer; TRUE by default. Note that this flag is IGNORED for layers with IsImmediate() flag.)#" )
        .def("SetRaytracable",
             (void (Graphic3d_ZLayerSettings::*)( Standard_Boolean  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( Standard_Boolean  ) >(&Graphic3d_ZLayerSettings::SetRaytracable),
             R"#(Sets if layer should be processed by ray-tracing renderer.)#"  , py::arg("theToRaytrace"))
        .def("UseEnvironmentTexture",
             (Standard_Boolean (Graphic3d_ZLayerSettings::*)() const) static_cast<Standard_Boolean (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::UseEnvironmentTexture),
             R"#(Return flag to allow/prevent environment texture mapping usage for specific layer.)#" )
        .def("SetEnvironmentTexture",
             (void (Graphic3d_ZLayerSettings::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( const Standard_Boolean  ) >(&Graphic3d_ZLayerSettings::SetEnvironmentTexture),
             R"#(Set the flag to allow/prevent environment texture mapping usage for specific layer.)#"  , py::arg("theValue"))
        .def("ToEnableDepthTest",
             (Standard_Boolean (Graphic3d_ZLayerSettings::*)() const) static_cast<Standard_Boolean (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::ToEnableDepthTest),
             R"#(Return true if depth test should be enabled.)#" )
        .def("SetEnableDepthTest",
             (void (Graphic3d_ZLayerSettings::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( const Standard_Boolean  ) >(&Graphic3d_ZLayerSettings::SetEnableDepthTest),
             R"#(Set if depth test should be enabled.)#"  , py::arg("theValue"))
        .def("ToEnableDepthWrite",
             (Standard_Boolean (Graphic3d_ZLayerSettings::*)() const) static_cast<Standard_Boolean (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::ToEnableDepthWrite),
             R"#(Return true depth values should be written during rendering.)#" )
        .def("SetEnableDepthWrite",
             (void (Graphic3d_ZLayerSettings::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( const Standard_Boolean  ) >(&Graphic3d_ZLayerSettings::SetEnableDepthWrite),
             R"#(Set if depth values should be written during rendering.)#"  , py::arg("theValue"))
        .def("ToClearDepth",
             (Standard_Boolean (Graphic3d_ZLayerSettings::*)() const) static_cast<Standard_Boolean (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::ToClearDepth),
             R"#(Return true if depth values should be cleared before drawing the layer.)#" )
        .def("SetClearDepth",
             (void (Graphic3d_ZLayerSettings::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( const Standard_Boolean  ) >(&Graphic3d_ZLayerSettings::SetClearDepth),
             R"#(Set if depth values should be cleared before drawing the layer.)#"  , py::arg("theValue"))
        .def("ToRenderInDepthPrepass",
             (Standard_Boolean (Graphic3d_ZLayerSettings::*)() const) static_cast<Standard_Boolean (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::ToRenderInDepthPrepass),
             R"#(Return TRUE if layer should be rendered within depth pre-pass; TRUE by default.)#" )
        .def("SetRenderInDepthPrepass",
             (void (Graphic3d_ZLayerSettings::*)( Standard_Boolean  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( Standard_Boolean  ) >(&Graphic3d_ZLayerSettings::SetRenderInDepthPrepass),
             R"#(Set if layer should be rendered within depth pre-pass.)#"  , py::arg("theToRender"))
        .def("PolygonOffset",
             (const Graphic3d_PolygonOffset & (Graphic3d_ZLayerSettings::*)() const) static_cast<const Graphic3d_PolygonOffset & (Graphic3d_ZLayerSettings::*)() const>(&Graphic3d_ZLayerSettings::PolygonOffset),
             R"#(Return glPolygonOffset() arguments.)#" )
        .def("SetPolygonOffset",
             (void (Graphic3d_ZLayerSettings::*)( const Graphic3d_PolygonOffset &  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( const Graphic3d_PolygonOffset &  ) >(&Graphic3d_ZLayerSettings::SetPolygonOffset),
             R"#(Setup glPolygonOffset() arguments.)#"  , py::arg("theParams"))
        .def("ChangePolygonOffset",
             (Graphic3d_PolygonOffset & (Graphic3d_ZLayerSettings::*)() ) static_cast<Graphic3d_PolygonOffset & (Graphic3d_ZLayerSettings::*)() >(&Graphic3d_ZLayerSettings::ChangePolygonOffset),
             R"#(Modify glPolygonOffset() arguments.)#" )
        .def("IsSettingEnabled",
             (Standard_Boolean (Graphic3d_ZLayerSettings::*)( const Graphic3d_ZLayerSetting  ) const) static_cast<Standard_Boolean (Graphic3d_ZLayerSettings::*)( const Graphic3d_ZLayerSetting  ) const>(&Graphic3d_ZLayerSettings::IsSettingEnabled),
             R"#(Returns true if theSetting is enabled.)#"  , py::arg("theSetting"))
        .def("EnableSetting",
             (void (Graphic3d_ZLayerSettings::*)( const Graphic3d_ZLayerSetting  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( const Graphic3d_ZLayerSetting  ) >(&Graphic3d_ZLayerSettings::EnableSetting),
             R"#(Enables theSetting)#"  , py::arg("theSetting"))
        .def("DisableSetting",
             (void (Graphic3d_ZLayerSettings::*)( const Graphic3d_ZLayerSetting  ) ) static_cast<void (Graphic3d_ZLayerSettings::*)( const Graphic3d_ZLayerSetting  ) >(&Graphic3d_ZLayerSettings::DisableSetting),
             R"#(Disables theSetting)#"  , py::arg("theSetting"))
        .def("SetDepthOffsetPositive",
             (void (Graphic3d_ZLayerSettings::*)() ) static_cast<void (Graphic3d_ZLayerSettings::*)() >(&Graphic3d_ZLayerSettings::SetDepthOffsetPositive),
             R"#(Sets minimal possible positive depth offset.)#" )
        .def("SetDepthOffsetNegative",
             (void (Graphic3d_ZLayerSettings::*)() ) static_cast<void (Graphic3d_ZLayerSettings::*)() >(&Graphic3d_ZLayerSettings::SetDepthOffsetNegative),
             R"#(Sets minimal possible negative depth offset.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ArrayOfPoints ,opencascade::handle<Graphic3d_ArrayOfPoints>  , Graphic3d_ArrayOfPrimitives >>(m.attr("Graphic3d_ArrayOfPoints"))
    // constructors
        .def(py::init< Standard_Integer,Graphic3d_ArrayFlags >()  , py::arg("theMaxVertexs"),  py::arg("theArrayFlags") )
        .def(py::init< Standard_Integer,Standard_Boolean,Standard_Boolean >()  , py::arg("theMaxVertexs"),  py::arg("theHasVColors")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasVNormals")=static_cast<Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfPoints::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfPoints::*)() const>(&Graphic3d_ArrayOfPoints::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ArrayOfPoints::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ArrayOfPoints::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ArrayOfPolygons ,opencascade::handle<Graphic3d_ArrayOfPolygons>  , Graphic3d_ArrayOfPrimitives >>(m.attr("Graphic3d_ArrayOfPolygons"))
    // constructors
        .def(py::init< Standard_Integer,Standard_Integer,Standard_Integer,Graphic3d_ArrayFlags >()  , py::arg("theMaxVertexs"),  py::arg("theMaxBounds"),  py::arg("theMaxEdges"),  py::arg("theArrayFlags") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theMaxVertexs"),  py::arg("theMaxBounds")=static_cast<const Standard_Integer>(0),  py::arg("theMaxEdges")=static_cast<const Standard_Integer>(0),  py::arg("theHasVNormals")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theHasVColors")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theHasBColors")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theHasVTexels")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfPolygons::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfPolygons::*)() const>(&Graphic3d_ArrayOfPolygons::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ArrayOfPolygons::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ArrayOfPolygons::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ArrayOfPolylines ,opencascade::handle<Graphic3d_ArrayOfPolylines>  , Graphic3d_ArrayOfPrimitives >>(m.attr("Graphic3d_ArrayOfPolylines"))
    // constructors
        .def(py::init< Standard_Integer,Standard_Integer,Standard_Integer,Graphic3d_ArrayFlags >()  , py::arg("theMaxVertexs"),  py::arg("theMaxBounds"),  py::arg("theMaxEdges"),  py::arg("theArrayFlags") )
        .def(py::init< Standard_Integer,Standard_Integer,Standard_Integer,Standard_Boolean,Standard_Boolean >()  , py::arg("theMaxVertexs"),  py::arg("theMaxBounds")=static_cast<Standard_Integer>(0),  py::arg("theMaxEdges")=static_cast<Standard_Integer>(0),  py::arg("theHasVColors")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasBColors")=static_cast<Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfPolylines::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfPolylines::*)() const>(&Graphic3d_ArrayOfPolylines::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ArrayOfPolylines::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ArrayOfPolylines::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ArrayOfQuadrangleStrips ,opencascade::handle<Graphic3d_ArrayOfQuadrangleStrips>  , Graphic3d_ArrayOfPrimitives >>(m.attr("Graphic3d_ArrayOfQuadrangleStrips"))
    // constructors
        .def(py::init< Standard_Integer,Standard_Integer,Graphic3d_ArrayFlags >()  , py::arg("theMaxVertexs"),  py::arg("theMaxStrips"),  py::arg("theArrayFlags") )
        .def(py::init< Standard_Integer,Standard_Integer,Standard_Boolean,Standard_Boolean,Standard_Boolean,Standard_Boolean >()  , py::arg("theMaxVertexs"),  py::arg("theMaxStrips")=static_cast<Standard_Integer>(0),  py::arg("theHasVNormals")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasVColors")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasSColors")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasVTexels")=static_cast<Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfQuadrangleStrips::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfQuadrangleStrips::*)() const>(&Graphic3d_ArrayOfQuadrangleStrips::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ArrayOfQuadrangleStrips::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ArrayOfQuadrangleStrips::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ArrayOfQuadrangles ,opencascade::handle<Graphic3d_ArrayOfQuadrangles>  , Graphic3d_ArrayOfPrimitives >>(m.attr("Graphic3d_ArrayOfQuadrangles"))
    // constructors
        .def(py::init< Standard_Integer,Standard_Integer,Graphic3d_ArrayFlags >()  , py::arg("theMaxVertexs"),  py::arg("theMaxEdges"),  py::arg("theArrayFlags") )
        .def(py::init< Standard_Integer,Standard_Integer,Standard_Boolean,Standard_Boolean,Standard_Boolean >()  , py::arg("theMaxVertexs"),  py::arg("theMaxEdges")=static_cast<Standard_Integer>(0),  py::arg("theHasVNormals")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasVColors")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasVTexels")=static_cast<Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfQuadrangles::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfQuadrangles::*)() const>(&Graphic3d_ArrayOfQuadrangles::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ArrayOfQuadrangles::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ArrayOfQuadrangles::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ArrayOfSegments ,opencascade::handle<Graphic3d_ArrayOfSegments>  , Graphic3d_ArrayOfPrimitives >>(m.attr("Graphic3d_ArrayOfSegments"))
    // constructors
        .def(py::init< Standard_Integer,Standard_Integer,Graphic3d_ArrayFlags >()  , py::arg("theMaxVertexs"),  py::arg("theMaxEdges"),  py::arg("theArrayFlags") )
        .def(py::init< Standard_Integer,Standard_Integer,Standard_Boolean >()  , py::arg("theMaxVertexs"),  py::arg("theMaxEdges")=static_cast<Standard_Integer>(0),  py::arg("theHasVColors")=static_cast<Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfSegments::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfSegments::*)() const>(&Graphic3d_ArrayOfSegments::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ArrayOfSegments::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ArrayOfSegments::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ArrayOfTriangleFans ,opencascade::handle<Graphic3d_ArrayOfTriangleFans>  , Graphic3d_ArrayOfPrimitives >>(m.attr("Graphic3d_ArrayOfTriangleFans"))
    // constructors
        .def(py::init< Standard_Integer,Standard_Integer,Graphic3d_ArrayFlags >()  , py::arg("theMaxVertexs"),  py::arg("theMaxFans"),  py::arg("theArrayFlags") )
        .def(py::init< Standard_Integer,Standard_Integer,Standard_Boolean,Standard_Boolean,Standard_Boolean,Standard_Boolean >()  , py::arg("theMaxVertexs"),  py::arg("theMaxFans")=static_cast<Standard_Integer>(0),  py::arg("theHasVNormals")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasVColors")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasBColors")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasVTexels")=static_cast<Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfTriangleFans::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfTriangleFans::*)() const>(&Graphic3d_ArrayOfTriangleFans::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ArrayOfTriangleFans::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ArrayOfTriangleFans::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ArrayOfTriangleStrips ,opencascade::handle<Graphic3d_ArrayOfTriangleStrips>  , Graphic3d_ArrayOfPrimitives >>(m.attr("Graphic3d_ArrayOfTriangleStrips"))
    // constructors
        .def(py::init< Standard_Integer,Standard_Integer,Graphic3d_ArrayFlags >()  , py::arg("theMaxVertexs"),  py::arg("theMaxStrips"),  py::arg("theArrayFlags") )
        .def(py::init< Standard_Integer,Standard_Integer,Standard_Boolean,Standard_Boolean,Standard_Boolean,Standard_Boolean >()  , py::arg("theMaxVertexs"),  py::arg("theMaxStrips")=static_cast<Standard_Integer>(0),  py::arg("theHasVNormals")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasVColors")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasBColors")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasVTexels")=static_cast<Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfTriangleStrips::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfTriangleStrips::*)() const>(&Graphic3d_ArrayOfTriangleStrips::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ArrayOfTriangleStrips::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ArrayOfTriangleStrips::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_ArrayOfTriangles ,opencascade::handle<Graphic3d_ArrayOfTriangles>  , Graphic3d_ArrayOfPrimitives >>(m.attr("Graphic3d_ArrayOfTriangles"))
    // constructors
        .def(py::init< Standard_Integer,Standard_Integer,Graphic3d_ArrayFlags >()  , py::arg("theMaxVertexs"),  py::arg("theMaxEdges"),  py::arg("theArrayFlags") )
        .def(py::init< Standard_Integer,Standard_Integer,Standard_Boolean,Standard_Boolean,Standard_Boolean >()  , py::arg("theMaxVertexs"),  py::arg("theMaxEdges")=static_cast<Standard_Integer>(0),  py::arg("theHasVNormals")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasVColors")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theHasVTexels")=static_cast<Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfTriangles::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_ArrayOfTriangles::*)() const>(&Graphic3d_ArrayOfTriangles::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_ArrayOfTriangles::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_ArrayOfTriangles::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_AspectFillArea3d ,opencascade::handle<Graphic3d_AspectFillArea3d>  , Graphic3d_Aspects >>(m.attr("Graphic3d_AspectFillArea3d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Aspect_InteriorStyle,const Quantity_Color &,const Quantity_Color &,const Aspect_TypeOfLine,const Standard_Real,const Graphic3d_MaterialAspect &,const Graphic3d_MaterialAspect & >()  , py::arg("theInterior"),  py::arg("theInteriorColor"),  py::arg("theEdgeColor"),  py::arg("theEdgeLineType"),  py::arg("theEdgeWidth"),  py::arg("theFrontMaterial"),  py::arg("theBackMaterial") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_AspectFillArea3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_AspectFillArea3d::*)() const>(&Graphic3d_AspectFillArea3d::DynamicType),
             R"#(None)#" )
        .def("Edge",
             (bool (Graphic3d_AspectFillArea3d::*)() const) static_cast<bool (Graphic3d_AspectFillArea3d::*)() const>(&Graphic3d_AspectFillArea3d::Edge),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_AspectFillArea3d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_AspectFillArea3d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_AspectLine3d ,opencascade::handle<Graphic3d_AspectLine3d>  , Graphic3d_Aspects >>(m.attr("Graphic3d_AspectLine3d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Quantity_Color &,Aspect_TypeOfLine,Standard_Real >()  , py::arg("theColor"),  py::arg("theType"),  py::arg("theWidth") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_AspectLine3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_AspectLine3d::*)() const>(&Graphic3d_AspectLine3d::DynamicType),
             R"#(None)#" )
        .def("Type",
             (Aspect_TypeOfLine (Graphic3d_AspectLine3d::*)() const) static_cast<Aspect_TypeOfLine (Graphic3d_AspectLine3d::*)() const>(&Graphic3d_AspectLine3d::Type),
             R"#(Return line type.)#" )
        .def("SetType",
             (void (Graphic3d_AspectLine3d::*)( const Aspect_TypeOfLine  ) ) static_cast<void (Graphic3d_AspectLine3d::*)( const Aspect_TypeOfLine  ) >(&Graphic3d_AspectLine3d::SetType),
             R"#(Modifies the type of line.)#"  , py::arg("theType"))
        .def("Width",
             (Standard_ShortReal (Graphic3d_AspectLine3d::*)() const) static_cast<Standard_ShortReal (Graphic3d_AspectLine3d::*)() const>(&Graphic3d_AspectLine3d::Width),
             R"#(Return line width.)#" )
        .def("SetWidth",
             (void (Graphic3d_AspectLine3d::*)( const Standard_Real  ) ) static_cast<void (Graphic3d_AspectLine3d::*)( const Standard_Real  ) >(&Graphic3d_AspectLine3d::SetWidth),
             R"#(Modifies the line thickness. Warning: Raises Standard_OutOfRange if the width is a negative value.)#"  , py::arg("theWidth"))
        .def("SetWidth",
             (void (Graphic3d_AspectLine3d::*)( Standard_ShortReal  ) ) static_cast<void (Graphic3d_AspectLine3d::*)( Standard_ShortReal  ) >(&Graphic3d_AspectLine3d::SetWidth),
             R"#(Modifies the line thickness. Warning: Raises Standard_OutOfRange if the width is a negative value.)#"  , py::arg("theWidth"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_AspectLine3d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_AspectLine3d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_AspectMarker3d ,opencascade::handle<Graphic3d_AspectMarker3d>  , Graphic3d_Aspects >>(m.attr("Graphic3d_AspectMarker3d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Aspect_TypeOfMarker,const Quantity_Color &,const Standard_Real >()  , py::arg("theType"),  py::arg("theColor"),  py::arg("theScale") )
        .def(py::init< const Quantity_Color &,const Standard_Integer,const Standard_Integer,const opencascade::handle<TColStd_HArray1OfByte> & >()  , py::arg("theColor"),  py::arg("theWidth"),  py::arg("theHeight"),  py::arg("theTextureBitmap") )
        .def(py::init< const opencascade::handle<Image_PixMap> & >()  , py::arg("theTextureImage") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_AspectMarker3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_AspectMarker3d::*)() const>(&Graphic3d_AspectMarker3d::DynamicType),
             R"#(None)#" )
        .def("Scale",
             (Standard_ShortReal (Graphic3d_AspectMarker3d::*)() const) static_cast<Standard_ShortReal (Graphic3d_AspectMarker3d::*)() const>(&Graphic3d_AspectMarker3d::Scale),
             R"#(Return scale factor.)#" )
        .def("SetScale",
             (void (Graphic3d_AspectMarker3d::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_AspectMarker3d::*)( const Standard_ShortReal  ) >(&Graphic3d_AspectMarker3d::SetScale),
             R"#(Modifies the scale factor. Marker type Aspect_TOM_POINT is not affected by the marker size scale factor. It is always the smallest displayable dot. Warning: Raises Standard_OutOfRange if the scale is a negative value.)#"  , py::arg("theScale"))
        .def("SetScale",
             (void (Graphic3d_AspectMarker3d::*)( const Standard_Real  ) ) static_cast<void (Graphic3d_AspectMarker3d::*)( const Standard_Real  ) >(&Graphic3d_AspectMarker3d::SetScale),
             R"#(Assign scale factor.)#"  , py::arg("theScale"))
        .def("Type",
             (Aspect_TypeOfMarker (Graphic3d_AspectMarker3d::*)() const) static_cast<Aspect_TypeOfMarker (Graphic3d_AspectMarker3d::*)() const>(&Graphic3d_AspectMarker3d::Type),
             R"#(Return marker type.)#" )
        .def("SetType",
             (void (Graphic3d_AspectMarker3d::*)( const Aspect_TypeOfMarker  ) ) static_cast<void (Graphic3d_AspectMarker3d::*)( const Aspect_TypeOfMarker  ) >(&Graphic3d_AspectMarker3d::SetType),
             R"#(Modifies the type of marker.)#"  , py::arg("theType"))
        .def("GetMarkerImage",
             (const opencascade::handle<Graphic3d_MarkerImage> & (Graphic3d_AspectMarker3d::*)() const) static_cast<const opencascade::handle<Graphic3d_MarkerImage> & (Graphic3d_AspectMarker3d::*)() const>(&Graphic3d_AspectMarker3d::GetMarkerImage),
             R"#(Returns marker's image texture. Could be null handle if marker aspect has been initialized as default type of marker.)#" )
        .def("SetBitMap",
             (void (Graphic3d_AspectMarker3d::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfByte> &  ) ) static_cast<void (Graphic3d_AspectMarker3d::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfByte> &  ) >(&Graphic3d_AspectMarker3d::SetBitMap),
             R"#(None)#"  , py::arg("theWidth"),  py::arg("theHeight"),  py::arg("theTexture"))
    // methods using call by reference i.s.o. return
        .def("GetTextureSize",
             []( Graphic3d_AspectMarker3d &self   ){ Standard_Integer  theWidth; Standard_Integer  theHeight; self.GetTextureSize(theWidth,theHeight); return std::make_tuple(theWidth,theHeight); },
             R"#(Returns marker's texture size.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_AspectMarker3d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_AspectMarker3d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_AspectText3d ,opencascade::handle<Graphic3d_AspectText3d>  , Graphic3d_Aspects >>(m.attr("Graphic3d_AspectText3d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Quantity_Color &,Standard_CString,Standard_Real,Standard_Real,Aspect_TypeOfStyleText,Aspect_TypeOfDisplayText >()  , py::arg("theColor"),  py::arg("theFont"),  py::arg("theExpansionFactor"),  py::arg("theSpace"),  py::arg("theStyle")=static_cast<Aspect_TypeOfStyleText>(Aspect_TOST_NORMAL),  py::arg("theDisplayType")=static_cast<Aspect_TypeOfDisplayText>(Aspect_TODT_NORMAL) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_AspectText3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_AspectText3d::*)() const>(&Graphic3d_AspectText3d::DynamicType),
             R"#(None)#" )
        .def("Color",
             (const Quantity_Color & (Graphic3d_AspectText3d::*)() const) static_cast<const Quantity_Color & (Graphic3d_AspectText3d::*)() const>(&Graphic3d_AspectText3d::Color),
             R"#(Return the text color.)#" )
        .def("ColorRGBA",
             (const Quantity_ColorRGBA & (Graphic3d_AspectText3d::*)() const) static_cast<const Quantity_ColorRGBA & (Graphic3d_AspectText3d::*)() const>(&Graphic3d_AspectText3d::ColorRGBA),
             R"#(Return the text color.)#" )
        .def("SetColor",
             (void (Graphic3d_AspectText3d::*)( const Quantity_Color &  ) ) static_cast<void (Graphic3d_AspectText3d::*)( const Quantity_Color &  ) >(&Graphic3d_AspectText3d::SetColor),
             R"#(Modifies the color.)#"  , py::arg("theColor"))
        .def("SetColor",
             (void (Graphic3d_AspectText3d::*)( const Quantity_ColorRGBA &  ) ) static_cast<void (Graphic3d_AspectText3d::*)( const Quantity_ColorRGBA &  ) >(&Graphic3d_AspectText3d::SetColor),
             R"#(Modifies the color.)#"  , py::arg("theColor"))
        .def("Font",
             (const TCollection_AsciiString & (Graphic3d_AspectText3d::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_AspectText3d::*)() const>(&Graphic3d_AspectText3d::Font),
             R"#(Return the font.)#" )
        .def("SetFont",
             (void (Graphic3d_AspectText3d::*)( const TCollection_AsciiString &  ) ) static_cast<void (Graphic3d_AspectText3d::*)( const TCollection_AsciiString &  ) >(&Graphic3d_AspectText3d::SetFont),
             R"#(Modifies the font.)#"  , py::arg("theFont"))
        .def("SetFont",
             (void (Graphic3d_AspectText3d::*)( const Standard_CString  ) ) static_cast<void (Graphic3d_AspectText3d::*)( const Standard_CString  ) >(&Graphic3d_AspectText3d::SetFont),
             R"#(Modifies the font.)#"  , py::arg("theFont"))
        .def("Style",
             (Aspect_TypeOfStyleText (Graphic3d_AspectText3d::*)() const) static_cast<Aspect_TypeOfStyleText (Graphic3d_AspectText3d::*)() const>(&Graphic3d_AspectText3d::Style),
             R"#(Return the text style.)#" )
        .def("SetStyle",
             (void (Graphic3d_AspectText3d::*)( Aspect_TypeOfStyleText  ) ) static_cast<void (Graphic3d_AspectText3d::*)( Aspect_TypeOfStyleText  ) >(&Graphic3d_AspectText3d::SetStyle),
             R"#(Modifies the style of the text.)#"  , py::arg("theStyle"))
        .def("DisplayType",
             (Aspect_TypeOfDisplayText (Graphic3d_AspectText3d::*)() const) static_cast<Aspect_TypeOfDisplayText (Graphic3d_AspectText3d::*)() const>(&Graphic3d_AspectText3d::DisplayType),
             R"#(Return display type.)#" )
        .def("SetDisplayType",
             (void (Graphic3d_AspectText3d::*)( Aspect_TypeOfDisplayText  ) ) static_cast<void (Graphic3d_AspectText3d::*)( Aspect_TypeOfDisplayText  ) >(&Graphic3d_AspectText3d::SetDisplayType),
             R"#(Define the display type of the text.)#"  , py::arg("theDisplayType"))
        .def("GetTextZoomable",
             (bool (Graphic3d_AspectText3d::*)() const) static_cast<bool (Graphic3d_AspectText3d::*)() const>(&Graphic3d_AspectText3d::GetTextZoomable),
             R"#(Returns TRUE when the Text Zoomable is on.)#" )
        .def("GetTextAngle",
             (Standard_ShortReal (Graphic3d_AspectText3d::*)() const) static_cast<Standard_ShortReal (Graphic3d_AspectText3d::*)() const>(&Graphic3d_AspectText3d::GetTextAngle),
             R"#(Returns Angle of degree)#" )
        .def("SetTextAngle",
             (void (Graphic3d_AspectText3d::*)( const Standard_Real  ) ) static_cast<void (Graphic3d_AspectText3d::*)( const Standard_Real  ) >(&Graphic3d_AspectText3d::SetTextAngle),
             R"#(Turns usage of text rotated)#"  , py::arg("theAngle"))
        .def("GetTextFontAspect",
             (Font_FontAspect (Graphic3d_AspectText3d::*)() const) static_cast<Font_FontAspect (Graphic3d_AspectText3d::*)() const>(&Graphic3d_AspectText3d::GetTextFontAspect),
             R"#(Returns text FontAspect)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_AspectText3d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_AspectText3d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_AttribBuffer ,opencascade::handle<Graphic3d_AttribBuffer>  , Graphic3d_Buffer >>(m.attr("Graphic3d_AttribBuffer"))
    // constructors
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAlloc") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_AttribBuffer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_AttribBuffer::*)() const>(&Graphic3d_AttribBuffer::DynamicType),
             R"#(None)#" )
        .def("Init",
             (bool (Graphic3d_AttribBuffer::*)( const Standard_Integer ,  const Graphic3d_Attribute * ,  const Standard_Integer  ) ) static_cast<bool (Graphic3d_AttribBuffer::*)( const Standard_Integer ,  const Graphic3d_Attribute * ,  const Standard_Integer  ) >(&Graphic3d_AttribBuffer::Init),
             R"#(Allocates new empty array)#"  , py::arg("theNbElems"),  py::arg("theAttribs"),  py::arg("theNbAttribs"))
        .def("Init",
             (bool (Graphic3d_AttribBuffer::*)( const Standard_Integer ,   const NCollection_Array1<Graphic3d_Attribute> &  ) ) static_cast<bool (Graphic3d_AttribBuffer::*)( const Standard_Integer ,   const NCollection_Array1<Graphic3d_Attribute> &  ) >(&Graphic3d_AttribBuffer::Init),
             R"#(Allocates new empty array)#"  , py::arg("theNbElems"),  py::arg("theAttribs"))
        .def("IsMutable",
             (Standard_Boolean (Graphic3d_AttribBuffer::*)() const) static_cast<Standard_Boolean (Graphic3d_AttribBuffer::*)() const>(&Graphic3d_AttribBuffer::IsMutable),
             R"#(Return TRUE if data can be invalidated; FALSE by default.)#" )
        .def("SetMutable",
             (void (Graphic3d_AttribBuffer::*)( Standard_Boolean  ) ) static_cast<void (Graphic3d_AttribBuffer::*)( Standard_Boolean  ) >(&Graphic3d_AttribBuffer::SetMutable),
             R"#(Set if data can be invalidated.)#"  , py::arg("theMutable"))
        .def("IsInterleaved",
             (Standard_Boolean (Graphic3d_AttribBuffer::*)() const) static_cast<Standard_Boolean (Graphic3d_AttribBuffer::*)() const>(&Graphic3d_AttribBuffer::IsInterleaved),
             R"#(Return TRUE for interleaved array; TRUE by default.)#" )
        .def("SetInterleaved",
             (void (Graphic3d_AttribBuffer::*)( Standard_Boolean  ) ) static_cast<void (Graphic3d_AttribBuffer::*)( Standard_Boolean  ) >(&Graphic3d_AttribBuffer::SetInterleaved),
             R"#(Setup interleaved/non-interleaved array. WARNING! Filling non-interleaved buffer should be implemented on user side without Graphic3d_Buffer auxiliary methods designed for interleaved data.)#"  , py::arg("theIsInterleaved"))
        .def("InvalidatedRange",
             (Graphic3d_BufferRange (Graphic3d_AttribBuffer::*)() const) static_cast<Graphic3d_BufferRange (Graphic3d_AttribBuffer::*)() const>(&Graphic3d_AttribBuffer::InvalidatedRange),
             R"#(Return invalidated range.)#" )
        .def("Validate",
             (void (Graphic3d_AttribBuffer::*)() ) static_cast<void (Graphic3d_AttribBuffer::*)() >(&Graphic3d_AttribBuffer::Validate),
             R"#(Reset invalidated range.)#" )
        .def("Invalidate",
             (void (Graphic3d_AttribBuffer::*)() ) static_cast<void (Graphic3d_AttribBuffer::*)() >(&Graphic3d_AttribBuffer::Invalidate),
             R"#(Invalidate the entire buffer data.)#" )
        .def("Invalidate",
             (void (Graphic3d_AttribBuffer::*)( Standard_Integer  ) ) static_cast<void (Graphic3d_AttribBuffer::*)( Standard_Integer  ) >(&Graphic3d_AttribBuffer::Invalidate),
             R"#(Invalidate the entire attribute data.)#"  , py::arg("theAttributeIndex"))
        .def("Invalidate",
             (void (Graphic3d_AttribBuffer::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) ) static_cast<void (Graphic3d_AttribBuffer::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) >(&Graphic3d_AttribBuffer::Invalidate),
             R"#(Invalidate attribute data within specified sub-range (starting from 0).)#"  , py::arg("theAttributeIndex"),  py::arg("theVertexLower"),  py::arg("theVertexUpper"))
        .def("Invalidate",
             (void (Graphic3d_AttribBuffer::*)( Standard_Integer ,  Standard_Integer  ) ) static_cast<void (Graphic3d_AttribBuffer::*)( Standard_Integer ,  Standard_Integer  ) >(&Graphic3d_AttribBuffer::Invalidate),
             R"#(Invalidate all attribute data within specified vertex sub-range (starting from 0).)#"  , py::arg("theVertexLower"),  py::arg("theVertexUpper"))
        .def("invalidate",
             (void (Graphic3d_AttribBuffer::*)( const Graphic3d_BufferRange &  ) ) static_cast<void (Graphic3d_AttribBuffer::*)( const Graphic3d_BufferRange &  ) >(&Graphic3d_AttribBuffer::invalidate),
             R"#(Invalidate specified sub-range of data (as byte offsets).)#"  , py::arg("theRange"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_AttribBuffer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_AttribBuffer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_CView ,opencascade::handle<Graphic3d_CView> ,Py_Graphic3d_CView , Graphic3d_DataStructureManager >>(m.attr("Graphic3d_CView"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_StructureManager> & >()  , py::arg("theMgr") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_CView::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_CView::*)() const>(&Graphic3d_CView::DynamicType),
             R"#(None)#" )
        .def("Identification",
             (Standard_Integer (Graphic3d_CView::*)() const) static_cast<Standard_Integer (Graphic3d_CView::*)() const>(&Graphic3d_CView::Identification),
             R"#(Returns the identification number of the view.)#" )
        .def("Activate",
             (void (Graphic3d_CView::*)() ) static_cast<void (Graphic3d_CView::*)() >(&Graphic3d_CView::Activate),
             R"#(Activates the view. Maps presentations defined within structure manager onto this view.)#" )
        .def("Deactivate",
             (void (Graphic3d_CView::*)() ) static_cast<void (Graphic3d_CView::*)() >(&Graphic3d_CView::Deactivate),
             R"#(Deactivates the view. Unmaps presentations defined within structure manager. The view in deactivated state will ignore actions on structures such as Display().)#" )
        .def("IsActive",
             (Standard_Boolean (Graphic3d_CView::*)() const) static_cast<Standard_Boolean (Graphic3d_CView::*)() const>(&Graphic3d_CView::IsActive),
             R"#(Returns the activity flag of the view.)#" )
        .def("Remove",
             (void (Graphic3d_CView::*)() ) static_cast<void (Graphic3d_CView::*)() >(&Graphic3d_CView::Remove),
             R"#(Erases the view and removes from graphic driver. No more graphic operations are allowed in this view after the call.)#" )
        .def("IsRemoved",
             (Standard_Boolean (Graphic3d_CView::*)() const) static_cast<Standard_Boolean (Graphic3d_CView::*)() const>(&Graphic3d_CView::IsRemoved),
             R"#(Returns true if the view was removed.)#" )
        .def("Camera",
             (const opencascade::handle<Graphic3d_Camera> & (Graphic3d_CView::*)() const) static_cast<const opencascade::handle<Graphic3d_Camera> & (Graphic3d_CView::*)() const>(&Graphic3d_CView::Camera),
             R"#(Returns camera object of the view.)#" )
        .def("SetCamera",
             (void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_Camera> &  ) ) static_cast<void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_Camera> &  ) >(&Graphic3d_CView::SetCamera),
             R"#(Sets camera used by the view.)#"  , py::arg("theCamera"))
        .def("ShadingModel",
             (Graphic3d_TypeOfShadingModel (Graphic3d_CView::*)() const) static_cast<Graphic3d_TypeOfShadingModel (Graphic3d_CView::*)() const>(&Graphic3d_CView::ShadingModel),
             R"#(Returns default Shading Model of the view; Graphic3d_TOSM_FRAGMENT by default.)#" )
        .def("SetShadingModel",
             (void (Graphic3d_CView::*)( Graphic3d_TypeOfShadingModel  ) ) static_cast<void (Graphic3d_CView::*)( Graphic3d_TypeOfShadingModel  ) >(&Graphic3d_CView::SetShadingModel),
             R"#(Sets default Shading Model of the view. Will throw an exception on attempt to set Graphic3d_TOSM_DEFAULT.)#"  , py::arg("theModel"))
        .def("VisualizationType",
             (Graphic3d_TypeOfVisualization (Graphic3d_CView::*)() const) static_cast<Graphic3d_TypeOfVisualization (Graphic3d_CView::*)() const>(&Graphic3d_CView::VisualizationType),
             R"#(Returns visualization type of the view.)#" )
        .def("SetVisualizationType",
             (void (Graphic3d_CView::*)( const Graphic3d_TypeOfVisualization  ) ) static_cast<void (Graphic3d_CView::*)( const Graphic3d_TypeOfVisualization  ) >(&Graphic3d_CView::SetVisualizationType),
             R"#(Sets visualization type of the view.)#"  , py::arg("theType"))
        .def("SetComputedMode",
             (void (Graphic3d_CView::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_CView::*)( const Standard_Boolean  ) >(&Graphic3d_CView::SetComputedMode),
             R"#(Switches computed HLR mode in the view)#"  , py::arg("theMode"))
        .def("ComputedMode",
             (Standard_Boolean (Graphic3d_CView::*)() const) static_cast<Standard_Boolean (Graphic3d_CView::*)() const>(&Graphic3d_CView::ComputedMode),
             R"#(Returns the computed HLR mode state)#" )
        .def("ReCompute",
             (void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_Structure> &  ) >(&Graphic3d_CView::ReCompute),
             R"#(Computes the new presentation of the structure displayed in this view with the type Graphic3d_TOS_COMPUTED.)#"  , py::arg("theStructure"))
        .def("Update",
             (void (Graphic3d_CView::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (Graphic3d_CView::*)( const Graphic3d_ZLayerId  ) >(&Graphic3d_CView::Update),
             R"#(Invalidates bounding box of specified ZLayerId.)#"  , py::arg("theLayerId")=static_cast<const Graphic3d_ZLayerId>(Graphic3d_ZLayerId_UNKNOWN))
        .def("Compute",
             (void (Graphic3d_CView::*)() ) static_cast<void (Graphic3d_CView::*)() >(&Graphic3d_CView::Compute),
             R"#(Computes the new presentation of the structures displayed in this view with the type Graphic3d_TOS_COMPUTED.)#" )
        .def("ContainsFacet",
             (Standard_Boolean (Graphic3d_CView::*)() const) static_cast<Standard_Boolean (Graphic3d_CView::*)() const>(&Graphic3d_CView::ContainsFacet),
             R"#(Returns Standard_True if one of the structures displayed in the view contains Polygons, Triangles or Quadrangles.)#" )
        .def("ContainsFacet",
             (Standard_Boolean (Graphic3d_CView::*)(  const NCollection_Map<opencascade::handle<Graphic3d_Structure> > &  ) const) static_cast<Standard_Boolean (Graphic3d_CView::*)(  const NCollection_Map<opencascade::handle<Graphic3d_Structure> > &  ) const>(&Graphic3d_CView::ContainsFacet),
             R"#(Returns Standard_True if one of the structures in the set contains Polygons, Triangles or Quadrangles.)#"  , py::arg("theSet"))
        .def("DisplayedStructures",
             (void (Graphic3d_CView::*)( NCollection_Map<opencascade::handle<Graphic3d_Structure> > &  ) const) static_cast<void (Graphic3d_CView::*)( NCollection_Map<opencascade::handle<Graphic3d_Structure> > &  ) const>(&Graphic3d_CView::DisplayedStructures),
             R"#(Returns the set of structures displayed in this view.)#"  , py::arg("theStructures"))
        .def("NumberOfDisplayedStructures",
             (Standard_Integer (Graphic3d_CView::*)() const) static_cast<Standard_Integer (Graphic3d_CView::*)() const>(&Graphic3d_CView::NumberOfDisplayedStructures),
             R"#(Returns number of displayed structures in the view.)#" )
        .def("HiddenObjects",
             (const opencascade::handle<Graphic3d_NMapOfTransient> & (Graphic3d_CView::*)() const) static_cast<const opencascade::handle<Graphic3d_NMapOfTransient> & (Graphic3d_CView::*)() const>(&Graphic3d_CView::HiddenObjects),
             R"#(Returns map of objects hidden within this specific view (not viewer-wise).)#" )
        .def("ChangeHiddenObjects",
             (opencascade::handle<Graphic3d_NMapOfTransient> & (Graphic3d_CView::*)() ) static_cast<opencascade::handle<Graphic3d_NMapOfTransient> & (Graphic3d_CView::*)() >(&Graphic3d_CView::ChangeHiddenObjects),
             R"#(Returns map of objects hidden within this specific view (not viewer-wise).)#" )
        .def("IsComputed",
             (Standard_Boolean (Graphic3d_CView::*)( const Standard_Integer ,  opencascade::handle<Graphic3d_Structure> &  ) const) static_cast<Standard_Boolean (Graphic3d_CView::*)( const Standard_Integer ,  opencascade::handle<Graphic3d_Structure> &  ) const>(&Graphic3d_CView::IsComputed),
             R"#(Returns Standard_True in case if the structure with the given <theStructId> is in list of structures to be computed and stores computed struct to <theComputedStruct>.)#"  , py::arg("theStructId"),  py::arg("theComputedStruct"))
        .def("MinMaxValues",
             (Bnd_Box (Graphic3d_CView::*)( const Standard_Boolean  ) const) static_cast<Bnd_Box (Graphic3d_CView::*)( const Standard_Boolean  ) const>(&Graphic3d_CView::MinMaxValues),
             R"#(Returns the bounding box of all structures displayed in the view. If theToIncludeAuxiliary is TRUE, then the boundary box also includes minimum and maximum limits of graphical elements forming parts of infinite and other auxiliary structures.)#"  , py::arg("theToIncludeAuxiliary")=static_cast<const Standard_Boolean>(Standard_False))
        .def("MinMaxValues",
             (Bnd_Box (Graphic3d_CView::*)(  const NCollection_Map<opencascade::handle<Graphic3d_Structure> > & ,  const Standard_Boolean  ) const) static_cast<Bnd_Box (Graphic3d_CView::*)(  const NCollection_Map<opencascade::handle<Graphic3d_Structure> > & ,  const Standard_Boolean  ) const>(&Graphic3d_CView::MinMaxValues),
             R"#(Returns the coordinates of the boundary box of all structures in the set <theSet>. If <theToIgnoreInfiniteFlag> is TRUE, then the boundary box also includes minimum and maximum limits of graphical elements forming parts of infinite structures.)#"  , py::arg("theSet"),  py::arg("theToIncludeAuxiliary")=static_cast<const Standard_Boolean>(Standard_False))
        .def("StructureManager",
             (const opencascade::handle<Graphic3d_StructureManager> & (Graphic3d_CView::*)() const) static_cast<const opencascade::handle<Graphic3d_StructureManager> & (Graphic3d_CView::*)() const>(&Graphic3d_CView::StructureManager),
             R"#(Returns the structure manager handle which manage structures associated with this view.)#" )
        .def("Redraw",
             (void (Graphic3d_CView::*)() ) static_cast<void (Graphic3d_CView::*)() >(&Graphic3d_CView::Redraw),
             R"#(Redraw content of the view.)#" )
        .def("RedrawImmediate",
             (void (Graphic3d_CView::*)() ) static_cast<void (Graphic3d_CView::*)() >(&Graphic3d_CView::RedrawImmediate),
             R"#(Redraw immediate content of the view.)#" )
        .def("Invalidate",
             (void (Graphic3d_CView::*)() ) static_cast<void (Graphic3d_CView::*)() >(&Graphic3d_CView::Invalidate),
             R"#(Invalidates content of the view but does not redraw it.)#" )
        .def("IsInvalidated",
             (Standard_Boolean (Graphic3d_CView::*)() ) static_cast<Standard_Boolean (Graphic3d_CView::*)() >(&Graphic3d_CView::IsInvalidated),
             R"#(Return true if view content cache has been invalidated.)#" )
        .def("Resized",
             (void (Graphic3d_CView::*)() ) static_cast<void (Graphic3d_CView::*)() >(&Graphic3d_CView::Resized),
             R"#(Handle changing size of the rendering window.)#" )
        .def("SetImmediateModeDrawToFront",
             (Standard_Boolean (Graphic3d_CView::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (Graphic3d_CView::*)( const Standard_Boolean  ) >(&Graphic3d_CView::SetImmediateModeDrawToFront),
             R"#(Returns previous mode.)#"  , py::arg("theDrawToFrontBuffer"))
        .def("SetWindow",
             (void (Graphic3d_CView::*)( const opencascade::handle<Aspect_Window> & ,  const Aspect_RenderingContext  ) ) static_cast<void (Graphic3d_CView::*)( const opencascade::handle<Aspect_Window> & ,  const Aspect_RenderingContext  ) >(&Graphic3d_CView::SetWindow),
             R"#(Creates and maps rendering window to the view.)#"  , py::arg("theWindow"),  py::arg("theContext")=static_cast<const Aspect_RenderingContext>(NULL))
        .def("Window",
             (opencascade::handle<Aspect_Window> (Graphic3d_CView::*)() const) static_cast<opencascade::handle<Aspect_Window> (Graphic3d_CView::*)() const>(&Graphic3d_CView::Window),
             R"#(Returns the window associated to the view.)#" )
        .def("IsDefined",
             (Standard_Boolean (Graphic3d_CView::*)() const) static_cast<Standard_Boolean (Graphic3d_CView::*)() const>(&Graphic3d_CView::IsDefined),
             R"#(Returns True if the window associated to the view is defined.)#" )
        .def("BufferDump",
             (Standard_Boolean (Graphic3d_CView::*)( Image_PixMap & ,  const Graphic3d_BufferType &  ) ) static_cast<Standard_Boolean (Graphic3d_CView::*)( Image_PixMap & ,  const Graphic3d_BufferType &  ) >(&Graphic3d_CView::BufferDump),
             R"#(Dump active rendering buffer into specified memory buffer.)#"  , py::arg("theImage"),  py::arg("theBufferType"))
        .def("InvalidateBVHData",
             (void (Graphic3d_CView::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (Graphic3d_CView::*)( const Graphic3d_ZLayerId  ) >(&Graphic3d_CView::InvalidateBVHData),
             R"#(Marks BVH tree and the set of BVH primitives of correspondent priority list with id theLayerId as outdated.)#"  , py::arg("theLayerId"))
        .def("InsertLayerBefore",
             (void (Graphic3d_CView::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (Graphic3d_CView::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) >(&Graphic3d_CView::InsertLayerBefore),
             R"#(Add a layer to the view.)#"  , py::arg("theNewLayerId"),  py::arg("theSettings"),  py::arg("theLayerAfter"))
        .def("InsertLayerAfter",
             (void (Graphic3d_CView::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (Graphic3d_CView::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) >(&Graphic3d_CView::InsertLayerAfter),
             R"#(Add a layer to the view.)#"  , py::arg("theNewLayerId"),  py::arg("theSettings"),  py::arg("theLayerBefore"))
        .def("ZLayerMax",
             (Standard_Integer (Graphic3d_CView::*)() const) static_cast<Standard_Integer (Graphic3d_CView::*)() const>(&Graphic3d_CView::ZLayerMax),
             R"#(Returns the maximum Z layer ID. First layer ID is Graphic3d_ZLayerId_Default, last ID is ZLayerMax().)#" )
        .def("Layers",
             (const NCollection_List<opencascade::handle<Graphic3d_Layer> > & (Graphic3d_CView::*)() const) static_cast<const NCollection_List<opencascade::handle<Graphic3d_Layer> > & (Graphic3d_CView::*)() const>(&Graphic3d_CView::Layers),
             R"#(Returns the list of layers.)#" )
        .def("Layer",
             (opencascade::handle<Graphic3d_Layer> (Graphic3d_CView::*)( const Graphic3d_ZLayerId  ) const) static_cast<opencascade::handle<Graphic3d_Layer> (Graphic3d_CView::*)( const Graphic3d_ZLayerId  ) const>(&Graphic3d_CView::Layer),
             R"#(Returns layer with given ID or NULL if undefined.)#"  , py::arg("theLayerId"))
        .def("InvalidateZLayerBoundingBox",
             (void (Graphic3d_CView::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (Graphic3d_CView::*)( const Graphic3d_ZLayerId  ) >(&Graphic3d_CView::InvalidateZLayerBoundingBox),
             R"#(Returns the bounding box of all structures displayed in the Z layer.)#"  , py::arg("theLayerId"))
        .def("RemoveZLayer",
             (void (Graphic3d_CView::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (Graphic3d_CView::*)( const Graphic3d_ZLayerId  ) >(&Graphic3d_CView::RemoveZLayer),
             R"#(Remove Z layer from the specified view. All structures displayed at the moment in layer will be displayed in default layer ( the bottom-level z layer ). To unset layer ID from associated structures use method UnsetZLayer (...).)#"  , py::arg("theLayerId"))
        .def("SetZLayerSettings",
             (void (Graphic3d_CView::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) ) static_cast<void (Graphic3d_CView::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) >(&Graphic3d_CView::SetZLayerSettings),
             R"#(Sets the settings for a single Z layer of specified view.)#"  , py::arg("theLayerId"),  py::arg("theSettings"))
        .def("ConsiderZoomPersistenceObjects",
             (Standard_Real (Graphic3d_CView::*)() ) static_cast<Standard_Real (Graphic3d_CView::*)() >(&Graphic3d_CView::ConsiderZoomPersistenceObjects),
             R"#(Returns zoom-scale factor.)#" )
        .def("FBO",
             (opencascade::handle<Standard_Transient> (Graphic3d_CView::*)() const) static_cast<opencascade::handle<Standard_Transient> (Graphic3d_CView::*)() const>(&Graphic3d_CView::FBO),
             R"#(Returns pointer to an assigned framebuffer object.)#" )
        .def("SetFBO",
             (void (Graphic3d_CView::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Graphic3d_CView::*)( const opencascade::handle<Standard_Transient> &  ) >(&Graphic3d_CView::SetFBO),
             R"#(Sets framebuffer object for offscreen rendering.)#"  , py::arg("theFbo"))
        .def("FBOCreate",
             (opencascade::handle<Standard_Transient> (Graphic3d_CView::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<opencascade::handle<Standard_Transient> (Graphic3d_CView::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Graphic3d_CView::FBOCreate),
             R"#(Generate offscreen FBO in the graphic library. If not supported on hardware returns NULL.)#"  , py::arg("theWidth"),  py::arg("theHeight"))
        .def("FBORelease",
             (void (Graphic3d_CView::*)( opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Graphic3d_CView::*)( opencascade::handle<Standard_Transient> &  ) >(&Graphic3d_CView::FBORelease),
             R"#(Remove offscreen FBO from the graphic library)#"  , py::arg("theFbo"))
        .def("FBOChangeViewport",
             (void (Graphic3d_CView::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Graphic3d_CView::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&Graphic3d_CView::FBOChangeViewport),
             R"#(Change offscreen FBO viewport.)#"  , py::arg("theFbo"),  py::arg("theWidth"),  py::arg("theHeight"))
        .def("CopySettings",
             (void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_CView> &  ) ) static_cast<void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_CView> &  ) >(&Graphic3d_CView::CopySettings),
             R"#(Copy visualization settings from another view. Method is used for cloning views in viewer when its required to create view with same view properties.)#"  , py::arg("theOther"))
        .def("RenderingParams",
             (const Graphic3d_RenderingParams & (Graphic3d_CView::*)() const) static_cast<const Graphic3d_RenderingParams & (Graphic3d_CView::*)() const>(&Graphic3d_CView::RenderingParams),
             R"#(Returns current rendering parameters and effect settings.)#" )
        .def("ChangeRenderingParams",
             (Graphic3d_RenderingParams & (Graphic3d_CView::*)() ) static_cast<Graphic3d_RenderingParams & (Graphic3d_CView::*)() >(&Graphic3d_CView::ChangeRenderingParams),
             R"#(Returns reference to current rendering parameters and effect settings.)#" )
        .def("Background",
             (Aspect_Background (Graphic3d_CView::*)() const) static_cast<Aspect_Background (Graphic3d_CView::*)() const>(&Graphic3d_CView::Background),
             R"#(Returns background fill color.)#" )
        .def("SetBackground",
             (void (Graphic3d_CView::*)( const Aspect_Background &  ) ) static_cast<void (Graphic3d_CView::*)( const Aspect_Background &  ) >(&Graphic3d_CView::SetBackground),
             R"#(Sets background fill color.)#"  , py::arg("theBackground"))
        .def("GradientBackground",
             (Aspect_GradientBackground (Graphic3d_CView::*)() const) static_cast<Aspect_GradientBackground (Graphic3d_CView::*)() const>(&Graphic3d_CView::GradientBackground),
             R"#(Returns gradient background fill colors.)#" )
        .def("SetGradientBackground",
             (void (Graphic3d_CView::*)( const Aspect_GradientBackground &  ) ) static_cast<void (Graphic3d_CView::*)( const Aspect_GradientBackground &  ) >(&Graphic3d_CView::SetGradientBackground),
             R"#(Sets gradient background fill colors.)#"  , py::arg("theBackground"))
        .def("BackgroundImage",
             (TCollection_AsciiString (Graphic3d_CView::*)() ) static_cast<TCollection_AsciiString (Graphic3d_CView::*)() >(&Graphic3d_CView::BackgroundImage),
             R"#(Returns background image texture file path.)#" )
        .def("SetBackgroundImage",
             (void (Graphic3d_CView::*)( const TCollection_AsciiString &  ) ) static_cast<void (Graphic3d_CView::*)( const TCollection_AsciiString &  ) >(&Graphic3d_CView::SetBackgroundImage),
             R"#(Sets background image texture file path.)#"  , py::arg("theFilePath"))
        .def("BackgroundImageStyle",
             (Aspect_FillMethod (Graphic3d_CView::*)() const) static_cast<Aspect_FillMethod (Graphic3d_CView::*)() const>(&Graphic3d_CView::BackgroundImageStyle),
             R"#(Returns background image fill style.)#" )
        .def("SetBackgroundImageStyle",
             (void (Graphic3d_CView::*)( const Aspect_FillMethod  ) ) static_cast<void (Graphic3d_CView::*)( const Aspect_FillMethod  ) >(&Graphic3d_CView::SetBackgroundImageStyle),
             R"#(Sets background image fill style.)#"  , py::arg("theFillStyle"))
        .def("BackgroundCubeMap",
             (opencascade::handle<Graphic3d_CubeMap> (Graphic3d_CView::*)() const) static_cast<opencascade::handle<Graphic3d_CubeMap> (Graphic3d_CView::*)() const>(&Graphic3d_CView::BackgroundCubeMap),
             R"#(Returns cubemap being setted last time on background.)#" )
        .def("SetBackgroundCubeMap",
             (void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_CubeMap> &  ) ) static_cast<void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_CubeMap> &  ) >(&Graphic3d_CView::SetBackgroundCubeMap),
             R"#(Sets environment cubemap as background.)#"  , py::arg("theCubeMap"))
        .def("TextureEnv",
             (opencascade::handle<Graphic3d_TextureEnv> (Graphic3d_CView::*)() const) static_cast<opencascade::handle<Graphic3d_TextureEnv> (Graphic3d_CView::*)() const>(&Graphic3d_CView::TextureEnv),
             R"#(Returns environment texture set for the view.)#" )
        .def("SetTextureEnv",
             (void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_TextureEnv> &  ) ) static_cast<void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_TextureEnv> &  ) >(&Graphic3d_CView::SetTextureEnv),
             R"#(Sets environment texture for the view.)#"  , py::arg("theTextureEnv"))
        .def("BackfacingModel",
             (Graphic3d_TypeOfBackfacingModel (Graphic3d_CView::*)() const) static_cast<Graphic3d_TypeOfBackfacingModel (Graphic3d_CView::*)() const>(&Graphic3d_CView::BackfacingModel),
             R"#(Return backfacing model used for the view.)#" )
        .def("SetBackfacingModel",
             (void (Graphic3d_CView::*)( const Graphic3d_TypeOfBackfacingModel  ) ) static_cast<void (Graphic3d_CView::*)( const Graphic3d_TypeOfBackfacingModel  ) >(&Graphic3d_CView::SetBackfacingModel),
             R"#(Sets backfacing model for the view.)#"  , py::arg("theModel"))
        .def("Lights",
             (const opencascade::handle<Graphic3d_LightSet> & (Graphic3d_CView::*)() const) static_cast<const opencascade::handle<Graphic3d_LightSet> & (Graphic3d_CView::*)() const>(&Graphic3d_CView::Lights),
             R"#(Returns list of lights of the view.)#" )
        .def("SetLights",
             (void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_LightSet> &  ) ) static_cast<void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_LightSet> &  ) >(&Graphic3d_CView::SetLights),
             R"#(Sets list of lights for the view.)#"  , py::arg("theLights"))
        .def("ClipPlanes",
             (const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (Graphic3d_CView::*)() const) static_cast<const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (Graphic3d_CView::*)() const>(&Graphic3d_CView::ClipPlanes),
             R"#(Returns list of clip planes set for the view.)#" )
        .def("SetClipPlanes",
             (void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) ) static_cast<void (Graphic3d_CView::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) >(&Graphic3d_CView::SetClipPlanes),
             R"#(Sets list of clip planes for the view.)#"  , py::arg("thePlanes"))
        .def("DiagnosticInformation",
             (void (Graphic3d_CView::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> & ,  Graphic3d_DiagnosticInfo  ) const) static_cast<void (Graphic3d_CView::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> & ,  Graphic3d_DiagnosticInfo  ) const>(&Graphic3d_CView::DiagnosticInformation),
             R"#(Fill in the dictionary with diagnostic info. Should be called within rendering thread.)#"  , py::arg("theDict"),  py::arg("theFlags"))
        .def("StatisticInformation",
             (TCollection_AsciiString (Graphic3d_CView::*)() const) static_cast<TCollection_AsciiString (Graphic3d_CView::*)() const>(&Graphic3d_CView::StatisticInformation),
             R"#(Returns string with statistic performance info.)#" )
        .def("StatisticInformation",
             (void (Graphic3d_CView::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> &  ) const) static_cast<void (Graphic3d_CView::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> &  ) const>(&Graphic3d_CView::StatisticInformation),
             R"#(Fills in the dictionary with statistic performance info.)#"  , py::arg("theDict"))
        .def("GetGraduatedTrihedron",
             (const Graphic3d_GraduatedTrihedron & (Graphic3d_CView::*)() ) static_cast<const Graphic3d_GraduatedTrihedron & (Graphic3d_CView::*)() >(&Graphic3d_CView::GetGraduatedTrihedron),
             R"#(Returns data of a graduated trihedron)#" )
        .def("GraduatedTrihedronDisplay",
             (void (Graphic3d_CView::*)( const Graphic3d_GraduatedTrihedron &  ) ) static_cast<void (Graphic3d_CView::*)( const Graphic3d_GraduatedTrihedron &  ) >(&Graphic3d_CView::GraduatedTrihedronDisplay),
             R"#(Displays Graduated Trihedron.)#"  , py::arg("theTrihedronData"))
        .def("GraduatedTrihedronErase",
             (void (Graphic3d_CView::*)() ) static_cast<void (Graphic3d_CView::*)() >(&Graphic3d_CView::GraduatedTrihedronErase),
             R"#(Erases Graduated Trihedron.)#" )
        .def("GraduatedTrihedronMinMaxValues",
             (void (Graphic3d_CView::*)(  const NCollection_Vec3<Standard_ShortReal> ,   const NCollection_Vec3<Standard_ShortReal>  ) ) static_cast<void (Graphic3d_CView::*)(  const NCollection_Vec3<Standard_ShortReal> ,   const NCollection_Vec3<Standard_ShortReal>  ) >(&Graphic3d_CView::GraduatedTrihedronMinMaxValues),
             R"#(Sets minimum and maximum points of scene bounding box for Graduated Trihedron stored in graphic view object.)#"  , py::arg("theMin"),  py::arg("theMax"))
    // methods using call by reference i.s.o. return
        .def("FBOGetDimensions",
             []( Graphic3d_CView &self , const opencascade::handle<Standard_Transient> & theFbo ){ Standard_Integer  theWidth; Standard_Integer  theHeight; Standard_Integer  theWidthMax; Standard_Integer  theHeightMax; self.FBOGetDimensions(theFbo,theWidth,theHeight,theWidthMax,theHeightMax); return std::make_tuple(theWidth,theHeight,theWidthMax,theHeightMax); },
             R"#(Read offscreen FBO configuration.)#"  , py::arg("theFbo"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_CView::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_CView::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_FrameStatsDataTmp , shared_ptr<Graphic3d_FrameStatsDataTmp>  , Graphic3d_FrameStatsData >>(m.attr("Graphic3d_FrameStatsDataTmp"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("FlushTimers",
             (void (Graphic3d_FrameStatsDataTmp::*)( Standard_Size ,  bool  ) ) static_cast<void (Graphic3d_FrameStatsDataTmp::*)( Standard_Size ,  bool  ) >(&Graphic3d_FrameStatsDataTmp::FlushTimers),
             R"#(Compute average data considering the amount of rendered frames.)#"  , py::arg("theNbFrames"),  py::arg("theIsFinal"))
        .def("Reset",
             (void (Graphic3d_FrameStatsDataTmp::*)() ) static_cast<void (Graphic3d_FrameStatsDataTmp::*)() >(&Graphic3d_FrameStatsDataTmp::Reset),
             R"#(Reset data.)#" )
        .def("ChangeFrameRate",
             (Standard_Real & (Graphic3d_FrameStatsDataTmp::*)() ) static_cast<Standard_Real & (Graphic3d_FrameStatsDataTmp::*)() >(&Graphic3d_FrameStatsDataTmp::ChangeFrameRate),
             R"#(Returns FPS (frames per seconds, elapsed time).)#" )
        .def("ChangeFrameRateCpu",
             (Standard_Real & (Graphic3d_FrameStatsDataTmp::*)() ) static_cast<Standard_Real & (Graphic3d_FrameStatsDataTmp::*)() >(&Graphic3d_FrameStatsDataTmp::ChangeFrameRateCpu),
             R"#(Returns CPU FPS (frames per seconds, CPU time).)#" )
        .def("ChangeTimer",
             (OSD_Timer & (Graphic3d_FrameStatsDataTmp::*)( Graphic3d_FrameStatsTimer  ) ) static_cast<OSD_Timer & (Graphic3d_FrameStatsDataTmp::*)( Graphic3d_FrameStatsTimer  ) >(&Graphic3d_FrameStatsDataTmp::ChangeTimer),
             R"#(Return a timer object for time measurements.)#"  , py::arg("theTimer"))
        .def("ChangeCounterValue",
             (Standard_Size & (Graphic3d_FrameStatsDataTmp::*)( Graphic3d_FrameStatsCounter  ) ) static_cast<Standard_Size & (Graphic3d_FrameStatsDataTmp::*)( Graphic3d_FrameStatsCounter  ) >(&Graphic3d_FrameStatsDataTmp::ChangeCounterValue),
             R"#(Get counter value.)#"  , py::arg("theIndex"))
        .def("ChangeTimerValue",
             (Standard_Real & (Graphic3d_FrameStatsDataTmp::*)( Graphic3d_FrameStatsTimer  ) ) static_cast<Standard_Real & (Graphic3d_FrameStatsDataTmp::*)( Graphic3d_FrameStatsTimer  ) >(&Graphic3d_FrameStatsDataTmp::ChangeTimerValue),
             R"#(Modify timer value.)#"  , py::arg("theIndex"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_IndexBuffer ,opencascade::handle<Graphic3d_IndexBuffer>  , Graphic3d_Buffer >>(m.attr("Graphic3d_IndexBuffer"))
    // constructors
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAlloc") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_IndexBuffer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_IndexBuffer::*)() const>(&Graphic3d_IndexBuffer::DynamicType),
             R"#(None)#" )
        .def("InitInt32",
             (bool (Graphic3d_IndexBuffer::*)( const Standard_Integer  ) ) static_cast<bool (Graphic3d_IndexBuffer::*)( const Standard_Integer  ) >(&Graphic3d_IndexBuffer::InitInt32),
             R"#(Allocates new empty index array)#"  , py::arg("theNbElems"))
        .def("Index",
             (Standard_Integer (Graphic3d_IndexBuffer::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Graphic3d_IndexBuffer::*)( const Standard_Integer  ) const>(&Graphic3d_IndexBuffer::Index),
             R"#(Access index at specified position)#"  , py::arg("theIndex"))
        .def("SetIndex",
             (void (Graphic3d_IndexBuffer::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Graphic3d_IndexBuffer::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Graphic3d_IndexBuffer::SetIndex),
             R"#(Change index at specified position)#"  , py::arg("theIndex"),  py::arg("theValue"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_IndexBuffer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_IndexBuffer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_MediaTextureSet ,opencascade::handle<Graphic3d_MediaTextureSet>  , Graphic3d_TextureSet >>(m.attr("Graphic3d_MediaTextureSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_MediaTextureSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_MediaTextureSet::*)() const>(&Graphic3d_MediaTextureSet::DynamicType),
             R"#(None)#" )
        .def("SetCallback",
             (void (Graphic3d_MediaTextureSet::*)( Graphic3d_MediaTextureSet::CallbackOnUpdate_t ,  void *  ) ) static_cast<void (Graphic3d_MediaTextureSet::*)( Graphic3d_MediaTextureSet::CallbackOnUpdate_t ,  void *  ) >(&Graphic3d_MediaTextureSet::SetCallback),
             R"#(Setup callback to be called on queue progress (e.g. when new frame should be displayed).)#"  , py::arg("theCallbackFunction"),  py::arg("theCallbackUserPtr"))
        .def("Notify",
             (void (Graphic3d_MediaTextureSet::*)() ) static_cast<void (Graphic3d_MediaTextureSet::*)() >(&Graphic3d_MediaTextureSet::Notify),
             R"#(Call callback.)#" )
        .def("Input",
             (const TCollection_AsciiString & (Graphic3d_MediaTextureSet::*)() const) static_cast<const TCollection_AsciiString & (Graphic3d_MediaTextureSet::*)() const>(&Graphic3d_MediaTextureSet::Input),
             R"#(Return input media.)#" )
        .def("OpenInput",
             (void (Graphic3d_MediaTextureSet::*)( const TCollection_AsciiString & ,  Standard_Boolean  ) ) static_cast<void (Graphic3d_MediaTextureSet::*)( const TCollection_AsciiString & ,  Standard_Boolean  ) >(&Graphic3d_MediaTextureSet::OpenInput),
             R"#(Open specified file. Passing an empty path would close current input.)#"  , py::arg("thePath"),  py::arg("theToWait"))
        .def("PlayerContext",
             (const opencascade::handle<Media_PlayerContext> & (Graphic3d_MediaTextureSet::*)() const) static_cast<const opencascade::handle<Media_PlayerContext> & (Graphic3d_MediaTextureSet::*)() const>(&Graphic3d_MediaTextureSet::PlayerContext),
             R"#(Return player context; it can be NULL until first OpenInput().)#" )
        .def("SwapFrames",
             (Standard_Boolean (Graphic3d_MediaTextureSet::*)() ) static_cast<Standard_Boolean (Graphic3d_MediaTextureSet::*)() >(&Graphic3d_MediaTextureSet::SwapFrames),
             R"#(Swap front/back frames.)#" )
        .def("FrameSize",
             (Graphic3d_Vec2i (Graphic3d_MediaTextureSet::*)() const) static_cast<Graphic3d_Vec2i (Graphic3d_MediaTextureSet::*)() const>(&Graphic3d_MediaTextureSet::FrameSize),
             R"#(Return front frame dimensions.)#" )
        .def("ShaderProgram",
             (opencascade::handle<Graphic3d_ShaderProgram> (Graphic3d_MediaTextureSet::*)() const) static_cast<opencascade::handle<Graphic3d_ShaderProgram> (Graphic3d_MediaTextureSet::*)() const>(&Graphic3d_MediaTextureSet::ShaderProgram),
             R"#(Return shader program for displaying texture set.)#" )
        .def("IsPlanarYUV",
             (Standard_Boolean (Graphic3d_MediaTextureSet::*)() const) static_cast<Standard_Boolean (Graphic3d_MediaTextureSet::*)() const>(&Graphic3d_MediaTextureSet::IsPlanarYUV),
             R"#(Return TRUE if texture set defined 3 YUV planes.)#" )
        .def("IsFullRangeYUV",
             (Standard_Boolean (Graphic3d_MediaTextureSet::*)() const) static_cast<Standard_Boolean (Graphic3d_MediaTextureSet::*)() const>(&Graphic3d_MediaTextureSet::IsFullRangeYUV),
             R"#(Return TRUE if YUV range is full.)#" )
        .def("Duration",
             (double (Graphic3d_MediaTextureSet::*)() const) static_cast<double (Graphic3d_MediaTextureSet::*)() const>(&Graphic3d_MediaTextureSet::Duration),
             R"#(Return duration in seconds.)#" )
        .def("Progress",
             (double (Graphic3d_MediaTextureSet::*)() const) static_cast<double (Graphic3d_MediaTextureSet::*)() const>(&Graphic3d_MediaTextureSet::Progress),
             R"#(Return playback progress in seconds.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_MediaTextureSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_MediaTextureSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_TextureEnv ,opencascade::handle<Graphic3d_TextureEnv>  , Graphic3d_TextureRoot >>(m.attr("Graphic3d_TextureEnv"))
    // constructors
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theFileName") )
        .def(py::init< const Graphic3d_NameOfTextureEnv >()  , py::arg("theName") )
        .def(py::init< const opencascade::handle<Image_PixMap> & >()  , py::arg("thePixMap") )
    // custom constructors
    // methods
        .def("Name",
             (Graphic3d_NameOfTextureEnv (Graphic3d_TextureEnv::*)() const) static_cast<Graphic3d_NameOfTextureEnv (Graphic3d_TextureEnv::*)() const>(&Graphic3d_TextureEnv::Name),
             R"#(Returns the name of the predefined textures or NOT_ENV_UNKNOWN when the name is given as a filename.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_TextureEnv::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_TextureEnv::*)() const>(&Graphic3d_TextureEnv::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NumberOfTextures_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Graphic3d_TextureEnv::NumberOfTextures),
                    R"#(Returns the number of predefined textures.)#" )
        .def_static("TextureName_s",
                    (TCollection_AsciiString (*)( const Standard_Integer  ) ) static_cast<TCollection_AsciiString (*)( const Standard_Integer  ) >(&Graphic3d_TextureEnv::TextureName),
                    R"#(Returns the name of the predefined texture of rank <aRank>)#"  , py::arg("theRank"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_TextureEnv::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_TextureEnv::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_TextureMap ,opencascade::handle<Graphic3d_TextureMap>  , Graphic3d_TextureRoot >>(m.attr("Graphic3d_TextureMap"))
    // constructors
    // custom constructors
    // methods
        .def("EnableSmooth",
             (void (Graphic3d_TextureMap::*)() ) static_cast<void (Graphic3d_TextureMap::*)() >(&Graphic3d_TextureMap::EnableSmooth),
             R"#(enable texture smoothing)#" )
        .def("IsSmoothed",
             (Standard_Boolean (Graphic3d_TextureMap::*)() const) static_cast<Standard_Boolean (Graphic3d_TextureMap::*)() const>(&Graphic3d_TextureMap::IsSmoothed),
             R"#(Returns TRUE if the texture is smoothed.)#" )
        .def("DisableSmooth",
             (void (Graphic3d_TextureMap::*)() ) static_cast<void (Graphic3d_TextureMap::*)() >(&Graphic3d_TextureMap::DisableSmooth),
             R"#(disable texture smoothing)#" )
        .def("EnableModulate",
             (void (Graphic3d_TextureMap::*)() ) static_cast<void (Graphic3d_TextureMap::*)() >(&Graphic3d_TextureMap::EnableModulate),
             R"#(enable texture modulate mode. the image is modulate with the shading of the surface.)#" )
        .def("DisableModulate",
             (void (Graphic3d_TextureMap::*)() ) static_cast<void (Graphic3d_TextureMap::*)() >(&Graphic3d_TextureMap::DisableModulate),
             R"#(disable texture modulate mode. the image is directly decal on the surface.)#" )
        .def("IsModulate",
             (Standard_Boolean (Graphic3d_TextureMap::*)() const) static_cast<Standard_Boolean (Graphic3d_TextureMap::*)() const>(&Graphic3d_TextureMap::IsModulate),
             R"#(Returns TRUE if the texture is modulate.)#" )
        .def("EnableRepeat",
             (void (Graphic3d_TextureMap::*)() ) static_cast<void (Graphic3d_TextureMap::*)() >(&Graphic3d_TextureMap::EnableRepeat),
             R"#(use this methods if you want to enable texture repetition on your objects.)#" )
        .def("DisableRepeat",
             (void (Graphic3d_TextureMap::*)() ) static_cast<void (Graphic3d_TextureMap::*)() >(&Graphic3d_TextureMap::DisableRepeat),
             R"#(use this methods if you want to disable texture repetition on your objects.)#" )
        .def("IsRepeat",
             (Standard_Boolean (Graphic3d_TextureMap::*)() const) static_cast<Standard_Boolean (Graphic3d_TextureMap::*)() const>(&Graphic3d_TextureMap::IsRepeat),
             R"#(Returns TRUE if the texture repeat is enable.)#" )
        .def("AnisoFilter",
             (Graphic3d_LevelOfTextureAnisotropy (Graphic3d_TextureMap::*)() const) static_cast<Graphic3d_LevelOfTextureAnisotropy (Graphic3d_TextureMap::*)() const>(&Graphic3d_TextureMap::AnisoFilter),
             R"#(Returns level of anisontropy texture filter. Default value is Graphic3d_LOTA_OFF.)#" )
        .def("SetAnisoFilter",
             (void (Graphic3d_TextureMap::*)( const Graphic3d_LevelOfTextureAnisotropy  ) ) static_cast<void (Graphic3d_TextureMap::*)( const Graphic3d_LevelOfTextureAnisotropy  ) >(&Graphic3d_TextureMap::SetAnisoFilter),
             R"#()#"  , py::arg("theLevel"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_TextureMap::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_TextureMap::*)() const>(&Graphic3d_TextureMap::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_TextureMap::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_TextureMap::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_CubeMap ,opencascade::handle<Graphic3d_CubeMap> ,Py_Graphic3d_CubeMap , Graphic3d_TextureMap >>(m.attr("Graphic3d_CubeMap"))
    // constructors
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theFileName") )
        .def(py::init< const opencascade::handle<Image_PixMap> & >()  , py::arg("thePixmap")=static_cast<const opencascade::handle<Image_PixMap> &>(Handle ( Image_PixMap ) ( )) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_CubeMap::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_CubeMap::*)() const>(&Graphic3d_CubeMap::DynamicType),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (Graphic3d_CubeMap::*)() const) static_cast<Standard_Boolean (Graphic3d_CubeMap::*)() const>(&Graphic3d_CubeMap::More),
             R"#(Returns whether the iterator has reached the end (true if it hasn't).)#" )
        .def("CurrentSide",
             (Graphic3d_CubeMapSide (Graphic3d_CubeMap::*)() const) static_cast<Graphic3d_CubeMapSide (Graphic3d_CubeMap::*)() const>(&Graphic3d_CubeMap::CurrentSide),
             R"#(Returns current cubemap side (iterator state).)#" )
        .def("Next",
             (void (Graphic3d_CubeMap::*)() ) static_cast<void (Graphic3d_CubeMap::*)() >(&Graphic3d_CubeMap::Next),
             R"#(Moves iterator to the next cubemap side. Uses OpenGL cubemap sides order +X -> -X -> +Y -> -Y -> +Z -> -Z.)#" )
        .def("IsTopDown",
             (Standard_Boolean (Graphic3d_CubeMap::*)() const) static_cast<Standard_Boolean (Graphic3d_CubeMap::*)() const>(&Graphic3d_CubeMap::IsTopDown),
             R"#(Returns whether row's memory layout is top-down.)#" )
        .def("SetZInversion",
             (void (Graphic3d_CubeMap::*)( Standard_Boolean  ) ) static_cast<void (Graphic3d_CubeMap::*)( Standard_Boolean  ) >(&Graphic3d_CubeMap::SetZInversion),
             R"#(Sets Z axis inversion (vertical flipping).)#"  , py::arg("theZIsInverted"))
        .def("ZIsInverted",
             (Standard_Boolean (Graphic3d_CubeMap::*)() const) static_cast<Standard_Boolean (Graphic3d_CubeMap::*)() const>(&Graphic3d_CubeMap::ZIsInverted),
             R"#(Returns whether Z axis is inverted.)#" )
        .def("Value",
             (opencascade::handle<Image_PixMap> (Graphic3d_CubeMap::*)() ) static_cast<opencascade::handle<Image_PixMap> (Graphic3d_CubeMap::*)() >(&Graphic3d_CubeMap::Value),
             R"#(Returns PixMap containing current side of cubemap. Returns null handle if current side is invalid.)#" )
        .def("Reset",
             (Graphic3d_CubeMap & (Graphic3d_CubeMap::*)() ) static_cast<Graphic3d_CubeMap & (Graphic3d_CubeMap::*)() >(&Graphic3d_CubeMap::Reset),
             R"#(Sets iterator state to +X cubemap side.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_CubeMap::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_CubeMap::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_MutableIndexBuffer ,opencascade::handle<Graphic3d_MutableIndexBuffer>  , Graphic3d_IndexBuffer >>(m.attr("Graphic3d_MutableIndexBuffer"))
    // constructors
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAlloc") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_MutableIndexBuffer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_MutableIndexBuffer::*)() const>(&Graphic3d_MutableIndexBuffer::DynamicType),
             R"#(None)#" )
        .def("IsMutable",
             (Standard_Boolean (Graphic3d_MutableIndexBuffer::*)() const) static_cast<Standard_Boolean (Graphic3d_MutableIndexBuffer::*)() const>(&Graphic3d_MutableIndexBuffer::IsMutable),
             R"#(Return TRUE if data can be invalidated.)#" )
        .def("InvalidatedRange",
             (Graphic3d_BufferRange (Graphic3d_MutableIndexBuffer::*)() const) static_cast<Graphic3d_BufferRange (Graphic3d_MutableIndexBuffer::*)() const>(&Graphic3d_MutableIndexBuffer::InvalidatedRange),
             R"#(Return invalidated range.)#" )
        .def("Validate",
             (void (Graphic3d_MutableIndexBuffer::*)() ) static_cast<void (Graphic3d_MutableIndexBuffer::*)() >(&Graphic3d_MutableIndexBuffer::Validate),
             R"#(Reset invalidated range.)#" )
        .def("Invalidate",
             (void (Graphic3d_MutableIndexBuffer::*)() ) static_cast<void (Graphic3d_MutableIndexBuffer::*)() >(&Graphic3d_MutableIndexBuffer::Invalidate),
             R"#(Invalidate the entire buffer data.)#" )
        .def("Invalidate",
             (void (Graphic3d_MutableIndexBuffer::*)( Standard_Integer ,  Standard_Integer  ) ) static_cast<void (Graphic3d_MutableIndexBuffer::*)( Standard_Integer ,  Standard_Integer  ) >(&Graphic3d_MutableIndexBuffer::Invalidate),
             R"#(Invalidate the given indexes (starting from 0))#"  , py::arg("theIndexLower"),  py::arg("theIndexUpper"))
        .def("invalidate",
             (void (Graphic3d_MutableIndexBuffer::*)( const Graphic3d_BufferRange &  ) ) static_cast<void (Graphic3d_MutableIndexBuffer::*)( const Graphic3d_BufferRange &  ) >(&Graphic3d_MutableIndexBuffer::invalidate),
             R"#(Invalidate specified sub-range of data (as byte offsets).)#"  , py::arg("theRange"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_MutableIndexBuffer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_MutableIndexBuffer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Texture1D ,opencascade::handle<Graphic3d_Texture1D>  , Graphic3d_TextureMap >>(m.attr("Graphic3d_Texture1D"))
    // constructors
    // custom constructors
    // methods
        .def("Name",
             (Graphic3d_NameOfTexture1D (Graphic3d_Texture1D::*)() const) static_cast<Graphic3d_NameOfTexture1D (Graphic3d_Texture1D::*)() const>(&Graphic3d_Texture1D::Name),
             R"#(Returns the name of the predefined textures or NOT_1D_UNKNOWN when the name is given as a filename.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_Texture1D::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_Texture1D::*)() const>(&Graphic3d_Texture1D::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NumberOfTextures_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Graphic3d_Texture1D::NumberOfTextures),
                    R"#(Returns the number of predefined textures.)#" )
        .def_static("TextureName_s",
                    (TCollection_AsciiString (*)( const Standard_Integer  ) ) static_cast<TCollection_AsciiString (*)( const Standard_Integer  ) >(&Graphic3d_Texture1D::TextureName),
                    R"#(Returns the name of the predefined texture of rank <aRank>)#"  , py::arg("aRank"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_Texture1D::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_Texture1D::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Texture2D ,opencascade::handle<Graphic3d_Texture2D>  , Graphic3d_TextureMap >>(m.attr("Graphic3d_Texture2D"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_Texture2D::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_Texture2D::*)() const>(&Graphic3d_Texture2D::DynamicType),
             R"#(None)#" )
        .def("Name",
             (Graphic3d_NameOfTexture2D (Graphic3d_Texture2D::*)() const) static_cast<Graphic3d_NameOfTexture2D (Graphic3d_Texture2D::*)() const>(&Graphic3d_Texture2D::Name),
             R"#(Returns the name of the predefined textures or NOT_2D_UNKNOWN when the name is given as a filename.)#" )
        .def("SetImage",
             (void (Graphic3d_Texture2D::*)( const opencascade::handle<Image_PixMap> &  ) ) static_cast<void (Graphic3d_Texture2D::*)( const opencascade::handle<Image_PixMap> &  ) >(&Graphic3d_Texture2D::SetImage),
             R"#(Assign new image to the texture. Note that this method does not invalidate already uploaded resources - consider calling ::UpdateRevision() if needed.)#"  , py::arg("thePixMap"))
        .def("HasMipMaps",
             (Standard_Boolean (Graphic3d_Texture2D::*)() const) static_cast<Standard_Boolean (Graphic3d_Texture2D::*)() const>(&Graphic3d_Texture2D::HasMipMaps),
             R"#(Return true if mip-maps should be used.)#" )
        .def("SetMipMaps",
             (void (Graphic3d_Texture2D::*)( const Standard_Boolean  ) ) static_cast<void (Graphic3d_Texture2D::*)( const Standard_Boolean  ) >(&Graphic3d_Texture2D::SetMipMaps),
             R"#(Set if mip-maps should be used (generated if needed). Note that this method should be called before loading / using the texture.)#"  , py::arg("theToUse"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_Texture2D::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_Texture2D::get_type_descriptor),
                    R"#(None)#" )
        .def_static("NumberOfTextures_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Graphic3d_Texture2D::NumberOfTextures),
                    R"#(Returns the number of predefined textures.)#" )
        .def_static("TextureName_s",
                    (TCollection_AsciiString (*)( const Standard_Integer  ) ) static_cast<TCollection_AsciiString (*)( const Standard_Integer  ) >(&Graphic3d_Texture2D::TextureName),
                    R"#(Returns the name of the predefined texture of rank <aRank>)#"  , py::arg("theRank"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_CubeMapPacked ,opencascade::handle<Graphic3d_CubeMapPacked>  , Graphic3d_CubeMap >>(m.attr("Graphic3d_CubeMapPacked"))
    // constructors
        .def(py::init< const TCollection_AsciiString &,const Graphic3d_ValidatedCubeMapOrder >()  , py::arg("theFileName"),  py::arg("theOrder")=static_cast<const Graphic3d_ValidatedCubeMapOrder>(Graphic3d_CubeMapOrder :: Default ( )) )
        .def(py::init< const opencascade::handle<Image_PixMap> &,const Graphic3d_ValidatedCubeMapOrder >()  , py::arg("theImage"),  py::arg("theOrder")=static_cast<const Graphic3d_ValidatedCubeMapOrder>(Graphic3d_CubeMapOrder :: Default ( )) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_CubeMapPacked::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_CubeMapPacked::*)() const>(&Graphic3d_CubeMapPacked::DynamicType),
             R"#(None)#" )
        .def("Value",
             (opencascade::handle<Image_PixMap> (Graphic3d_CubeMapPacked::*)() ) static_cast<opencascade::handle<Image_PixMap> (Graphic3d_CubeMapPacked::*)() >(&Graphic3d_CubeMapPacked::Value),
             R"#(Returns current cubemap side as PixMap. Resulting PixMap is memory wrapper over original image. Returns null handle if current side or whole cubemap is invalid. Origin image has to contain six quad tiles having one sizes without any gaps to be valid.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_CubeMapPacked::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_CubeMapPacked::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_CubeMapSeparate ,opencascade::handle<Graphic3d_CubeMapSeparate>  , Graphic3d_CubeMap >>(m.attr("Graphic3d_CubeMapSeparate"))
    // constructors
        .def(py::init< const NCollection_Array1<TCollection_AsciiString> & >()  , py::arg("thePaths") )
        .def(py::init< const NCollection_Array1<opencascade::handle<Image_PixMap> > & >()  , py::arg("theImages") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_CubeMapSeparate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_CubeMapSeparate::*)() const>(&Graphic3d_CubeMapSeparate::DynamicType),
             R"#(None)#" )
        .def("Value",
             (opencascade::handle<Image_PixMap> (Graphic3d_CubeMapSeparate::*)() ) static_cast<opencascade::handle<Image_PixMap> (Graphic3d_CubeMapSeparate::*)() >(&Graphic3d_CubeMapSeparate::Value),
             R"#(Returns current side of cubemap as PixMap. Returns null handle if current side or whole cubemap is invalid. All origin images have to have the same sizes, format and quad shapes to form valid cubemap.)#" )
        .def("GetImage",
             (opencascade::handle<Image_PixMap> (Graphic3d_CubeMapSeparate::*)() const) static_cast<opencascade::handle<Image_PixMap> (Graphic3d_CubeMapSeparate::*)() const>(&Graphic3d_CubeMapSeparate::GetImage),
             R"#(Returns NULL.)#" )
        .def("IsDone",
             (Standard_Boolean (Graphic3d_CubeMapSeparate::*)() const) static_cast<Standard_Boolean (Graphic3d_CubeMapSeparate::*)() const>(&Graphic3d_CubeMapSeparate::IsDone),
             R"#(Checks if a texture class is valid or not. Returns true if the construction of the class is correct.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_CubeMapSeparate::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_CubeMapSeparate::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_MediaTexture ,opencascade::handle<Graphic3d_MediaTexture>  , Graphic3d_Texture2D >>(m.attr("Graphic3d_MediaTexture"))
    // constructors
        .def(py::init< const opencascade::handle<Media_HMutex> &,Standard_Integer >()  , py::arg("theMutex"),  py::arg("thePlane")=static_cast<Standard_Integer>(- 1) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_MediaTexture::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_MediaTexture::*)() const>(&Graphic3d_MediaTexture::DynamicType),
             R"#(None)#" )
        .def("GetImage",
             (opencascade::handle<Image_PixMap> (Graphic3d_MediaTexture::*)() const) static_cast<opencascade::handle<Image_PixMap> (Graphic3d_MediaTexture::*)() const>(&Graphic3d_MediaTexture::GetImage),
             R"#(Image reader.)#" )
        .def("Frame",
             (const opencascade::handle<Media_Frame> & (Graphic3d_MediaTexture::*)() const) static_cast<const opencascade::handle<Media_Frame> & (Graphic3d_MediaTexture::*)() const>(&Graphic3d_MediaTexture::Frame),
             R"#(Return the frame.)#" )
        .def("SetFrame",
             (void (Graphic3d_MediaTexture::*)( const opencascade::handle<Media_Frame> &  ) ) static_cast<void (Graphic3d_MediaTexture::*)( const opencascade::handle<Media_Frame> &  ) >(&Graphic3d_MediaTexture::SetFrame),
             R"#(Set the frame.)#"  , py::arg("theFrame"))
        .def("GenerateNewId",
             (void (Graphic3d_MediaTexture::*)() ) static_cast<void (Graphic3d_MediaTexture::*)() >(&Graphic3d_MediaTexture::GenerateNewId),
             R"#(Regenerate a new texture id)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_MediaTexture::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_MediaTexture::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Texture1Dmanual ,opencascade::handle<Graphic3d_Texture1Dmanual>  , Graphic3d_Texture1D >>(m.attr("Graphic3d_Texture1Dmanual"))
    // constructors
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theFileName") )
        .def(py::init< const Graphic3d_NameOfTexture1D >()  , py::arg("theNOT") )
        .def(py::init< const opencascade::handle<Image_PixMap> & >()  , py::arg("thePixMap") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_Texture1Dmanual::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_Texture1Dmanual::*)() const>(&Graphic3d_Texture1Dmanual::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_Texture1Dmanual::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_Texture1Dmanual::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Texture1Dsegment ,opencascade::handle<Graphic3d_Texture1Dsegment>  , Graphic3d_Texture1D >>(m.attr("Graphic3d_Texture1Dsegment"))
    // constructors
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theFileName") )
        .def(py::init< const Graphic3d_NameOfTexture1D >()  , py::arg("theNOT") )
        .def(py::init< const opencascade::handle<Image_PixMap> & >()  , py::arg("thePixMap") )
    // custom constructors
    // methods
        .def("SetSegment",
             (void (Graphic3d_Texture1Dsegment::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) ) static_cast<void (Graphic3d_Texture1Dsegment::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) >(&Graphic3d_Texture1Dsegment::SetSegment),
             R"#(Sets the texture application bounds. Defines the way the texture is stretched across facets. Default values are <0.0, 0.0, 0.0> , <0.0, 0.0, 1.0>)#"  , py::arg("theX1"),  py::arg("theY1"),  py::arg("theZ1"),  py::arg("theX2"),  py::arg("theY2"),  py::arg("theZ2"))
        .def("Segment",
             (void (Graphic3d_Texture1Dsegment::*)( Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) const) static_cast<void (Graphic3d_Texture1Dsegment::*)( Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) const>(&Graphic3d_Texture1Dsegment::Segment),
             R"#(Returns the values of the current segment X1, Y1, Z1 , X2, Y2, Z2.)#"  , py::arg("theX1"),  py::arg("theY1"),  py::arg("theZ1"),  py::arg("theX2"),  py::arg("theY2"),  py::arg("theZ2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_Texture1Dsegment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_Texture1Dsegment::*)() const>(&Graphic3d_Texture1Dsegment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_Texture1Dsegment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_Texture1Dsegment::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Texture2Dmanual ,opencascade::handle<Graphic3d_Texture2Dmanual>  , Graphic3d_Texture2D >>(m.attr("Graphic3d_Texture2Dmanual"))
    // constructors
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theFileName") )
        .def(py::init< const Graphic3d_NameOfTexture2D >()  , py::arg("theNOT") )
        .def(py::init< const opencascade::handle<Image_PixMap> & >()  , py::arg("thePixMap") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_Texture2Dmanual::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_Texture2Dmanual::*)() const>(&Graphic3d_Texture2Dmanual::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_Texture2Dmanual::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_Texture2Dmanual::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Graphic3d_Texture2Dplane ,opencascade::handle<Graphic3d_Texture2Dplane>  , Graphic3d_Texture2D >>(m.attr("Graphic3d_Texture2Dplane"))
    // constructors
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theFileName") )
        .def(py::init< const Graphic3d_NameOfTexture2D >()  , py::arg("theNOT") )
        .def(py::init< const opencascade::handle<Image_PixMap> & >()  , py::arg("thePixMap") )
    // custom constructors
    // methods
        .def("SetPlaneS",
             (void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) ) static_cast<void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) >(&Graphic3d_Texture2Dplane::SetPlaneS),
             R"#(Defines the texture projection plane for texture coordinate S default is <1.0, 0.0, 0.0, 0.0>)#"  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D"))
        .def("SetPlaneT",
             (void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) ) static_cast<void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_ShortReal  ) >(&Graphic3d_Texture2Dplane::SetPlaneT),
             R"#(Defines the texture projection plane for texture coordinate T default is <0.0, 1.0, 0.0, 0.0>)#"  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D"))
        .def("SetPlane",
             (void (Graphic3d_Texture2Dplane::*)( const Graphic3d_NameOfTexturePlane  ) ) static_cast<void (Graphic3d_Texture2Dplane::*)( const Graphic3d_NameOfTexturePlane  ) >(&Graphic3d_Texture2Dplane::SetPlane),
             R"#(Defines the texture projection plane for both S and T texture coordinate default is NOTP_XY meaning: <1.0, 0.0, 0.0, 0.0> for S and <0.0, 1.0, 0.0, 0.0> for T)#"  , py::arg("thePlane"))
        .def("SetScaleS",
             (void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal  ) >(&Graphic3d_Texture2Dplane::SetScaleS),
             R"#(Defines the texture scale for the S texture coordinate much easier than recomputing the S plane equation but the result is the same default to 1.0)#"  , py::arg("theVal"))
        .def("SetScaleT",
             (void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal  ) >(&Graphic3d_Texture2Dplane::SetScaleT),
             R"#(Defines the texture scale for the T texture coordinate much easier than recompution the T plane equation but the result is the same default to 1.0)#"  , py::arg("theVal"))
        .def("SetTranslateS",
             (void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal  ) >(&Graphic3d_Texture2Dplane::SetTranslateS),
             R"#(Defines the texture translation for the S texture coordinate you can obtain the same effect by modifying the S plane equation but its not easier. default to 0.0)#"  , py::arg("theVal"))
        .def("SetTranslateT",
             (void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal  ) >(&Graphic3d_Texture2Dplane::SetTranslateT),
             R"#(Defines the texture translation for the T texture coordinate you can obtain the same effect by modifying the T plane equation but its not easier. default to 0.0)#"  , py::arg("theVal"))
        .def("SetRotation",
             (void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal  ) ) static_cast<void (Graphic3d_Texture2Dplane::*)( const Standard_ShortReal  ) >(&Graphic3d_Texture2Dplane::SetRotation),
             R"#(Sets the rotation angle of the whole texture. the same result might be achieved by recomputing the S and T plane equation but it's not the easiest way... the angle is expressed in degrees default is 0.0)#"  , py::arg("theVal"))
        .def("Plane",
             (Graphic3d_NameOfTexturePlane (Graphic3d_Texture2Dplane::*)() const) static_cast<Graphic3d_NameOfTexturePlane (Graphic3d_Texture2Dplane::*)() const>(&Graphic3d_Texture2Dplane::Plane),
             R"#(Returns the current texture plane name or NOTP_UNKNOWN when the plane is user defined.)#" )
        .def("PlaneS",
             (void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) const) static_cast<void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) const>(&Graphic3d_Texture2Dplane::PlaneS),
             R"#(Returns the current texture plane S equation)#"  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D"))
        .def("PlaneT",
             (void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) const) static_cast<void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) const>(&Graphic3d_Texture2Dplane::PlaneT),
             R"#(Returns the current texture plane T equation)#"  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D"))
        .def("TranslateS",
             (void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal &  ) const) static_cast<void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal &  ) const>(&Graphic3d_Texture2Dplane::TranslateS),
             R"#(Returns the current texture S translation value)#"  , py::arg("theVal"))
        .def("TranslateT",
             (void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal &  ) const) static_cast<void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal &  ) const>(&Graphic3d_Texture2Dplane::TranslateT),
             R"#(Returns the current texture T translation value)#"  , py::arg("theVal"))
        .def("ScaleS",
             (void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal &  ) const) static_cast<void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal &  ) const>(&Graphic3d_Texture2Dplane::ScaleS),
             R"#(Returns the current texture S scale value)#"  , py::arg("theVal"))
        .def("ScaleT",
             (void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal &  ) const) static_cast<void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal &  ) const>(&Graphic3d_Texture2Dplane::ScaleT),
             R"#(Returns the current texture T scale value)#"  , py::arg("theVal"))
        .def("Rotation",
             (void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal &  ) const) static_cast<void (Graphic3d_Texture2Dplane::*)( Standard_ShortReal &  ) const>(&Graphic3d_Texture2Dplane::Rotation),
             R"#(Returns the current texture rotation angle)#"  , py::arg("theVal"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Graphic3d_Texture2Dplane::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Graphic3d_Texture2Dplane::*)() const>(&Graphic3d_Texture2Dplane::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Graphic3d_Texture2Dplane::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Graphic3d_Texture2Dplane::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Graphic3d_Vertex.hxx
// ./opencascade/Graphic3d_BufferRange.hxx
// ./opencascade/Graphic3d_MapOfStructure.hxx
// ./opencascade/Graphic3d_BndBox4d.hxx
// ./opencascade/Graphic3d_Vec3.hxx
// ./opencascade/Graphic3d_SequenceOfGroup.hxx
// ./opencascade/Graphic3d_BSDF.hxx
// ./opencascade/Graphic3d_IndexBuffer.hxx
// ./opencascade/Graphic3d_DataStructureManager.hxx
// ./opencascade/Graphic3d_TypeOfAnswer.hxx
// ./opencascade/Graphic3d_ArrayOfPolygons.hxx
// ./opencascade/Graphic3d_ShaderProgram.hxx
// ./opencascade/Graphic3d_MapOfAspectsToAspects.hxx
// ./opencascade/Graphic3d_StructureDefinitionError.hxx
// ./opencascade/Graphic3d_BoundBuffer.hxx
// ./opencascade/Graphic3d_ArrayOfPolylines.hxx
// ./opencascade/Graphic3d_FrameStats.hxx
// ./opencascade/Graphic3d_BndBox4f.hxx
// ./opencascade/Graphic3d_ArrayOfTriangles.hxx
// ./opencascade/Graphic3d_GroupAspect.hxx
// ./opencascade/Graphic3d_AspectFillArea3d.hxx
// ./opencascade/Graphic3d_TextureSet.hxx
// ./opencascade/Graphic3d_Layer.hxx
// ./opencascade/Graphic3d_RenderingMode.hxx
// ./opencascade/Graphic3d_AspectMarker3d.hxx
// ./opencascade/Graphic3d_TypeOfBackground.hxx
// ./opencascade/Graphic3d_LevelOfTextureAnisotropy.hxx
// ./opencascade/Graphic3d_Group.hxx
// ./opencascade/Graphic3d_CLight.hxx
// ./opencascade/Graphic3d_TypeOfReflection.hxx
// ./opencascade/Graphic3d_Structure.hxx
// ./opencascade/Graphic3d_MapIteratorOfMapOfStructure.hxx
// ./opencascade/Graphic3d_TypeOfStructure.hxx
// ./opencascade/Graphic3d_TextureEnv.hxx
// ./opencascade/Graphic3d_TextureUnit.hxx
// ./opencascade/Graphic3d_BvhCStructureSet.hxx
// ./opencascade/Graphic3d_Texture1Dsegment.hxx
// ./opencascade/Graphic3d_MapOfObject.hxx
// ./opencascade/Graphic3d_Text.hxx
// ./opencascade/Graphic3d_Vec.hxx
// ./opencascade/Graphic3d_PresentationAttributes.hxx
// ./opencascade/Graphic3d_Buffer.hxx
// ./opencascade/Graphic3d_Texture1Dmanual.hxx
// ./opencascade/Graphic3d_Mat4.hxx
// ./opencascade/Graphic3d_MediaTextureSet.hxx
// ./opencascade/Graphic3d_CappingFlags.hxx
// ./opencascade/Graphic3d_FrameStatsCounter.hxx
// ./opencascade/Graphic3d_TransformError.hxx
// ./opencascade/Graphic3d_Texture2Dmanual.hxx
// ./opencascade/Graphic3d_TypeOfComposition.hxx
// ./opencascade/Graphic3d_ArrayFlags.hxx
// ./opencascade/Graphic3d_CView.hxx
// ./opencascade/Graphic3d_TypeOfMaterial.hxx
// ./opencascade/Graphic3d_ArrayOfTriangleFans.hxx
// ./opencascade/Graphic3d_DiagnosticInfo.hxx
// ./opencascade/Graphic3d_TextureParams.hxx
// ./opencascade/Graphic3d_ArrayOfSegments.hxx
// ./opencascade/Graphic3d_StructureManager.hxx
// ./opencascade/Graphic3d_NameOfTextureEnv.hxx
// ./opencascade/Graphic3d_NMapOfTransient.hxx
// ./opencascade/Graphic3d_MediaTexture.hxx
// ./opencascade/Graphic3d_ShaderVariable.hxx
// ./opencascade/Graphic3d_ShaderAttribute.hxx
// ./opencascade/Graphic3d_Camera.hxx
// ./opencascade/Graphic3d_CubeMapPacked.hxx
// ./opencascade/Graphic3d_CubeMapSide.hxx
// ./opencascade/Graphic3d_ZLayerSettings.hxx
// ./opencascade/Graphic3d_ViewAffinity.hxx
// ./opencascade/Graphic3d_TypeOfTexture.hxx
// ./opencascade/Graphic3d_TypeOfShaderObject.hxx
// ./opencascade/Graphic3d_ToneMappingMethod.hxx
// ./opencascade/Graphic3d_TransformPers.hxx
// ./opencascade/Graphic3d_ClipPlane.hxx
// ./opencascade/Graphic3d_StereoMode.hxx
// ./opencascade/Graphic3d_VerticalTextAlignment.hxx
// ./opencascade/Graphic3d_TextPath.hxx
// ./opencascade/Graphic3d_CStructure.hxx
// ./opencascade/Graphic3d_CullingTool.hxx
// ./opencascade/Graphic3d_ShaderObject.hxx
// ./opencascade/Graphic3d_SequenceOfStructure.hxx
// ./opencascade/Graphic3d_GraduatedTrihedron.hxx
// ./opencascade/Graphic3d_Texture1D.hxx
// ./opencascade/Graphic3d_SequenceOfHClipPlane.hxx
// ./opencascade/Graphic3d_TypeOfVisualization.hxx
// ./opencascade/Graphic3d_ZLayerId.hxx
// ./opencascade/Graphic3d_Vec4.hxx
// ./opencascade/Graphic3d_HighlightStyle.hxx
// ./opencascade/Graphic3d_CameraTile.hxx
// ./opencascade/Graphic3d_AlphaMode.hxx
// ./opencascade/Graphic3d_NameOfTexture1D.hxx
// ./opencascade/Graphic3d_TypeOfTextureMode.hxx
// ./opencascade/Graphic3d_MutableIndexBuffer.hxx
// ./opencascade/Graphic3d_MarkerImage.hxx
// ./opencascade/Graphic3d_FrameStatsData.hxx
// ./opencascade/Graphic3d_TypeOfTextureFilter.hxx
// ./opencascade/Graphic3d_CTexture.hxx
// ./opencascade/Graphic3d_MaterialAspect.hxx
// ./opencascade/Graphic3d_Mat4d.hxx
// ./opencascade/Graphic3d_BndBox3d.hxx
// ./opencascade/Graphic3d_TextureRoot.hxx
// ./opencascade/Graphic3d_AspectText3d.hxx
// ./opencascade/Graphic3d_RenderTransparentMethod.hxx
// ./opencascade/Graphic3d_ArrayOfQuadrangles.hxx
// ./opencascade/Graphic3d_CubeMap.hxx
// ./opencascade/Graphic3d_TypeOfShadingModel.hxx
// ./opencascade/Graphic3d_LightSet.hxx
// ./opencascade/Graphic3d_PolygonOffset.hxx
// ./opencascade/Graphic3d_ArrayOfPrimitives.hxx
// ./opencascade/Graphic3d_FrameStatsTimer.hxx
// ./opencascade/Graphic3d_CubeMapOrder.hxx
// ./opencascade/Graphic3d_TypeOfLimit.hxx
// ./opencascade/Graphic3d_BvhCStructureSetTrsfPers.hxx
// ./opencascade/Graphic3d_WorldViewProjState.hxx
// ./opencascade/Graphic3d_TypeOfPrimitiveArray.hxx
// ./opencascade/Graphic3d_NameOfMaterial.hxx
// ./opencascade/Graphic3d_ArrayOfTriangleStrips.hxx
// ./opencascade/Graphic3d_PriorityDefinitionError.hxx
// ./opencascade/Graphic3d_GraphicDriver.hxx
// ./opencascade/Graphic3d_Vec2.hxx
// ./opencascade/Graphic3d_CubeMapSeparate.hxx
// ./opencascade/Graphic3d_HorizontalTextAlignment.hxx
// ./opencascade/Graphic3d_GroupDefinitionError.hxx
// ./opencascade/Graphic3d_RenderingParams.hxx
// ./opencascade/Graphic3d_TransformUtils.hxx
// ./opencascade/Graphic3d_ArrayOfQuadrangleStrips.hxx
// ./opencascade/Graphic3d_AspectLine3d.hxx
// ./opencascade/Graphic3d_Aspects.hxx
// ./opencascade/Graphic3d_AttribBuffer.hxx
// ./opencascade/Graphic3d_Texture2Dplane.hxx
// ./opencascade/Graphic3d_TypeOfConnection.hxx
// ./opencascade/Graphic3d_Texture2D.hxx
// ./opencascade/Graphic3d_TypeOfLightSource.hxx
// ./opencascade/Graphic3d_TypeOfBackfacingModel.hxx
// ./opencascade/Graphic3d_ArrayOfPoints.hxx
// ./opencascade/Graphic3d_BufferType.hxx
// ./opencascade/Graphic3d_MaterialDefinitionError.hxx
// ./opencascade/Graphic3d_MapOfZLayerSettings.hxx
// ./opencascade/Graphic3d_TransModeFlags.hxx
// ./opencascade/Graphic3d_TextureMap.hxx
// ./opencascade/Graphic3d_NameOfTexture2D.hxx
// ./opencascade/Graphic3d_HatchStyle.hxx
// ./opencascade/Graphic3d_NameOfTexturePlane.hxx

// operators

// register typdefs
    register_template_BVH_Box<Standard_Real, 4>(m,"Graphic3d_BndBox4d");  
    register_template_NCollection_Vec3<Standard_ShortReal>(m,"Graphic3d_Vec3");  
    register_template_NCollection_Vec3<Standard_Integer>(m,"Graphic3d_Vec3i");  
    register_template_NCollection_Vec3<Standard_Byte>(m,"Graphic3d_Vec3ub");  
    register_template_NCollection_Vec3<Standard_Character>(m,"Graphic3d_Vec3b");  
    register_template_NCollection_Sequence<opencascade::handle<Graphic3d_Group> >(m,"Graphic3d_SequenceOfGroup");  
    register_template_NCollection_Sequence<opencascade::handle<Graphic3d_ShaderObject> >(m,"Graphic3d_ShaderObjectList");  
    register_template_NCollection_Sequence<opencascade::handle<Graphic3d_ShaderVariable> >(m,"Graphic3d_ShaderVariableList");  
    register_template_NCollection_Sequence<opencascade::handle<Graphic3d_ShaderAttribute> >(m,"Graphic3d_ShaderAttributeList");  
    register_template_BVH_Box<Standard_ShortReal, 4>(m,"Graphic3d_BndBox4f");  
    register_template_NCollection_IndexedMap<const Graphic3d_CStructure *>(m,"Graphic3d_IndexedMapOfStructure");  
    register_template_NCollection_Array1<Graphic3d_IndexedMapOfStructure>(m,"Graphic3d_ArrayOfIndexedMapOfStructure");  
    register_template_NCollection_Array1<Graphic3d_Attribute>(m,"Graphic3d_Array1OfAttribute");  
    register_template_NCollection_Mat4<Standard_ShortReal>(m,"Graphic3d_Mat4");  
    register_template_Graphic3d_UniformValue<Standard_Integer>(m,"Graphic3d_UniformInt");  
    register_template_Graphic3d_UniformValue<Graphic3d_Vec2i>(m,"Graphic3d_UniformVec2i");  
    register_template_Graphic3d_UniformValue<Graphic3d_Vec3i>(m,"Graphic3d_UniformVec3i");  
    register_template_Graphic3d_UniformValue<Graphic3d_Vec4i>(m,"Graphic3d_UniformVec4i");  
    register_template_Graphic3d_UniformValue<Standard_ShortReal>(m,"Graphic3d_UniformFloat");  
    register_template_Graphic3d_UniformValue<Graphic3d_Vec2>(m,"Graphic3d_UniformVec2");  
    register_template_Graphic3d_UniformValue<Graphic3d_Vec3>(m,"Graphic3d_UniformVec3");  
    register_template_Graphic3d_UniformValue<Graphic3d_Vec4>(m,"Graphic3d_UniformVec4");  
    register_template_NCollection_Lerp<opencascade::handle<Graphic3d_Camera> >(m,"Graphic3d_CameraLerp");  
    register_template_NCollection_Sequence<opencascade::handle<Graphic3d_Structure> >(m,"Graphic3d_SequenceOfStructure");  
    register_template_NCollection_Vec4<Standard_ShortReal>(m,"Graphic3d_Vec4");  
    register_template_NCollection_Vec4<Standard_Real>(m,"Graphic3d_Vec4d");  
    register_template_NCollection_Vec4<Standard_Integer>(m,"Graphic3d_Vec4i");  
    register_template_NCollection_Vec4<Standard_Byte>(m,"Graphic3d_Vec4ub");  
    register_template_NCollection_Vec4<Standard_Character>(m,"Graphic3d_Vec4b");  
    register_template_NCollection_Mat4<Standard_Real>(m,"Graphic3d_Mat4d");  
    register_template_BVH_Box<Standard_Real, 3>(m,"Graphic3d_BndBox3d");  
    register_template_NCollection_Vec2<Standard_ShortReal>(m,"Graphic3d_Vec2");  
    register_template_NCollection_Vec2<Standard_Real>(m,"Graphic3d_Vec2d");  
    register_template_NCollection_Vec2<Standard_Integer>(m,"Graphic3d_Vec2i");  
    register_template_NCollection_Vec2<Standard_Byte>(m,"Graphic3d_Vec2ub");  
    register_template_NCollection_Vec2<Standard_Character>(m,"Graphic3d_Vec2b");  
    register_template_NCollection_DataMap<Graphic3d_ZLayerId, Graphic3d_ZLayerSettings>(m,"Graphic3d_MapOfZLayerSettings");  


// exceptions
register_occ_exception<Graphic3d_GroupDefinitionError>(m, "Graphic3d_GroupDefinitionError");
register_occ_exception<Graphic3d_MaterialDefinitionError>(m, "Graphic3d_MaterialDefinitionError");
register_occ_exception<Graphic3d_PriorityDefinitionError>(m, "Graphic3d_PriorityDefinitionError");
register_occ_exception<Graphic3d_StructureDefinitionError>(m, "Graphic3d_StructureDefinitionError");
register_occ_exception<Graphic3d_TransformError>(m, "Graphic3d_TransformError");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

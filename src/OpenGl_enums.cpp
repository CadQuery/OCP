
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <OpenGl_Structure.hxx>
#include <OpenGl_Element.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_Text.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_Window.hxx>
#include <OpenGl_Texture.hxx>
#include <OpenGl_Element.hxx>
#include <OpenGl_Workspace.hxx>
#include <OpenGl_PointSprite.hxx>
#include <OpenGl_ShaderProgram.hxx>
#include <OpenGl_View.hxx>
#include <Graphic3d_PresentationAttributes.hxx>
#include <OpenGl_AspectFace.hxx>
#include <OpenGl_FrameBuffer.hxx>
#include <OpenGl_Sampler.hxx>
#include <OpenGl_ShaderProgram.hxx>
#include <OpenGl_ShaderManager.hxx>
#include <OpenGl_FrameStats.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_CappingPlaneResource.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_Context.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <OpenGl_ShaderProgram.hxx>
#include <OpenGl_Workspace.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_Texture.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_Element.hxx>
#include <OpenGl_Group.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_PrimitiveArray.hxx>
#include <OpenGl_ShaderProgram.hxx>
#include <OpenGl_Texture.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <gp_Ax2.hxx>
#include <OpenGl_Workspace.hxx>
#include <OpenGl_Context.hxx>
#include <Font_FTFont.hxx>
#include <OpenGl_Context.hxx>

// module includes
#include <OpenGl_ArbDbg.hxx>
#include <OpenGl_ArbFBO.hxx>
#include <OpenGl_ArbIns.hxx>
#include <OpenGl_ArbSamplerObject.hxx>
#include <OpenGl_ArbTBO.hxx>
#include <OpenGl_ArbTexBindless.hxx>
#include <OpenGl_AspectFace.hxx>
#include <OpenGl_AspectLine.hxx>
#include <OpenGl_AspectMarker.hxx>
#include <OpenGl_AspectText.hxx>
#include <OpenGl_BackgroundArray.hxx>
#include <OpenGl_BVHClipPrimitiveSet.hxx>
#include <OpenGl_BVHClipPrimitiveTrsfPersSet.hxx>
#include <OpenGl_BVHTreeSelector.hxx>
#include <OpenGl_CappingAlgo.hxx>
#include <OpenGl_CappingPlaneResource.hxx>
#include <OpenGl_Caps.hxx>
#include <OpenGl_Clipping.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_Element.hxx>
#include <OpenGl_ExtGS.hxx>
#include <OpenGl_Flipper.hxx>
#include <OpenGl_Font.hxx>
#include <OpenGl_FrameBuffer.hxx>
#include <OpenGl_FrameStats.hxx>
#include <OpenGl_FrameStatsPrs.hxx>
#include <OpenGl_GlCore11.hxx>
#include <OpenGl_GlCore11Fwd.hxx>
#include <OpenGl_GlCore12.hxx>
#include <OpenGl_GlCore13.hxx>
#include <OpenGl_GlCore14.hxx>
#include <OpenGl_GlCore15.hxx>
#include <OpenGl_GlCore20.hxx>
#include <OpenGl_GlCore21.hxx>
#include <OpenGl_GlCore30.hxx>
#include <OpenGl_GlCore31.hxx>
#include <OpenGl_GlCore32.hxx>
#include <OpenGl_GlCore33.hxx>
#include <OpenGl_GlCore40.hxx>
#include <OpenGl_GlCore41.hxx>
#include <OpenGl_GlCore42.hxx>
#include <OpenGl_GlCore43.hxx>
#include <OpenGl_GlCore44.hxx>
#include <OpenGl_GlFunctions.hxx>
#include <OpenGl_GraduatedTrihedron.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <OpenGl_Group.hxx>
#include <OpenGl_HaltonSampler.hxx>
#include <OpenGl_IndexBuffer.hxx>
#include <OpenGl_Layer.hxx>
#include <OpenGl_LayerFilter.hxx>
#include <OpenGl_LayerList.hxx>
#include <OpenGl_LineAttributes.hxx>
#include <OpenGl_MapOfZLayerSettings.hxx>
#include <OpenGl_Material.hxx>
#include <OpenGl_MaterialState.hxx>
#include <OpenGl_Matrix.hxx>
#include <OpenGl_MatrixState.hxx>
#include <OpenGl_NamedResource.hxx>
#include <OpenGl_PointSprite.hxx>
#include <OpenGl_PrimitiveArray.hxx>
#include <OpenGl_RenderFilter.hxx>
#include <OpenGl_Resource.hxx>
#include <OpenGl_Sampler.hxx>
#include <OpenGl_SceneGeometry.hxx>
#include <OpenGl_SetOfShaderPrograms.hxx>
#include <OpenGl_ShaderManager.hxx>
#include <OpenGl_ShaderObject.hxx>
#include <OpenGl_ShaderProgram.hxx>
#include <OpenGl_ShaderStates.hxx>
#include <OpenGl_StencilTest.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_StructureShadow.hxx>
#include <OpenGl_Text.hxx>
#include <OpenGl_TextBuilder.hxx>
#include <OpenGl_TextParam.hxx>
#include <OpenGl_Texture.hxx>
#include <OpenGl_TextureBufferArb.hxx>
#include <OpenGl_TextureSet.hxx>
#include <OpenGl_TileSampler.hxx>
#include <OpenGl_Vec.hxx>
#include <OpenGl_VertexBuffer.hxx>
#include <OpenGl_VertexBufferCompat.hxx>
#include <OpenGl_VertexBufferEditor.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_Window.hxx>
#include <OpenGl_Workspace.hxx>

// template related includes
// ./opencascade/OpenGl_GlCore30.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore30.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore33.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore33.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Context.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Layer.hxx
#include "NCollection.hxx"
// ./opencascade/OpenGl_Structure.hxx
#include "NCollection.hxx"
// ./opencascade/OpenGl_ShaderProgram.hxx
#include "NCollection.hxx"
// ./opencascade/OpenGl_FrameBuffer.hxx
#include "NCollection.hxx"
// ./opencascade/OpenGl_ShaderManager.hxx
#include "NCollection.hxx"
// ./opencascade/OpenGl_SceneGeometry.hxx
#include "BVH.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <Message_Messenger.hxx>

// Module definiiton
void register_OpenGl_enums(py::module &main_module) {


py::module m = main_module.def_submodule("OpenGl", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<OpenGl_FeatureFlag>(m, "OpenGl_FeatureFlag",R"#(None)#")
        .value("OpenGl_FeatureNotAvailable",OpenGl_FeatureFlag::OpenGl_FeatureNotAvailable)
        .value("OpenGl_FeatureInExtensions",OpenGl_FeatureFlag::OpenGl_FeatureInExtensions)
        .value("OpenGl_FeatureInCore",OpenGl_FeatureFlag::OpenGl_FeatureInCore).export_values();
    py::enum_<OpenGl_ProgramOptions>(m, "OpenGl_ProgramOptions",R"#(Standard GLSL program combination bits.)#")
        .value("OpenGl_PO_Point",OpenGl_ProgramOptions::OpenGl_PO_Point)
        .value("OpenGl_PO_VertColor",OpenGl_ProgramOptions::OpenGl_PO_VertColor)
        .value("OpenGl_PO_TextureRGB",OpenGl_ProgramOptions::OpenGl_PO_TextureRGB)
        .value("OpenGl_PO_TextureA",OpenGl_ProgramOptions::OpenGl_PO_TextureA)
        .value("OpenGl_PO_TextureEnv",OpenGl_ProgramOptions::OpenGl_PO_TextureEnv)
        .value("OpenGl_PO_StippleLine",OpenGl_ProgramOptions::OpenGl_PO_StippleLine)
        .value("OpenGl_PO_ClipPlanes1",OpenGl_ProgramOptions::OpenGl_PO_ClipPlanes1)
        .value("OpenGl_PO_ClipPlanes2",OpenGl_ProgramOptions::OpenGl_PO_ClipPlanes2)
        .value("OpenGl_PO_ClipPlanesN",OpenGl_ProgramOptions::OpenGl_PO_ClipPlanesN)
        .value("OpenGl_PO_AlphaTest",OpenGl_ProgramOptions::OpenGl_PO_AlphaTest)
        .value("OpenGl_PO_WriteOit",OpenGl_ProgramOptions::OpenGl_PO_WriteOit)
        .value("OpenGl_PO_NB",OpenGl_ProgramOptions::OpenGl_PO_NB).export_values();
    py::enum_<OpenGl_LayerFilter>(m, "OpenGl_LayerFilter",R"#(Tool object to specify processed OpenGL layers.)#")
        .value("OpenGl_LF_All",OpenGl_LayerFilter::OpenGl_LF_All)
        .value("OpenGl_LF_Upper",OpenGl_LayerFilter::OpenGl_LF_Upper)
        .value("OpenGl_LF_Bottom",OpenGl_LayerFilter::OpenGl_LF_Bottom)
        .value("OpenGl_LF_Default",OpenGl_LayerFilter::OpenGl_LF_Default).export_values();
    py::enum_<OpenGl_MaterialFlag>(m, "OpenGl_MaterialFlag",R"#(Material flag)#")
        .value("OpenGl_MaterialFlag_Front",OpenGl_MaterialFlag::OpenGl_MaterialFlag_Front)
        .value("OpenGl_MaterialFlag_Back",OpenGl_MaterialFlag::OpenGl_MaterialFlag_Back).export_values();
    py::enum_<OpenGl_StateVariable>(m, "OpenGl_StateVariable",R"#(The enumeration of OCCT-specific OpenGL/GLSL variables.)#")
        .value("OpenGl_OCC_MODEL_WORLD_MATRIX",OpenGl_StateVariable::OpenGl_OCC_MODEL_WORLD_MATRIX)
        .value("OpenGl_OCC_WORLD_VIEW_MATRIX",OpenGl_StateVariable::OpenGl_OCC_WORLD_VIEW_MATRIX)
        .value("OpenGl_OCC_PROJECTION_MATRIX",OpenGl_StateVariable::OpenGl_OCC_PROJECTION_MATRIX)
        .value("OpenGl_OCC_MODEL_WORLD_MATRIX_INVERSE",OpenGl_StateVariable::OpenGl_OCC_MODEL_WORLD_MATRIX_INVERSE)
        .value("OpenGl_OCC_WORLD_VIEW_MATRIX_INVERSE",OpenGl_StateVariable::OpenGl_OCC_WORLD_VIEW_MATRIX_INVERSE)
        .value("OpenGl_OCC_PROJECTION_MATRIX_INVERSE",OpenGl_StateVariable::OpenGl_OCC_PROJECTION_MATRIX_INVERSE)
        .value("OpenGl_OCC_MODEL_WORLD_MATRIX_TRANSPOSE",OpenGl_StateVariable::OpenGl_OCC_MODEL_WORLD_MATRIX_TRANSPOSE)
        .value("OpenGl_OCC_WORLD_VIEW_MATRIX_TRANSPOSE",OpenGl_StateVariable::OpenGl_OCC_WORLD_VIEW_MATRIX_TRANSPOSE)
        .value("OpenGl_OCC_PROJECTION_MATRIX_TRANSPOSE",OpenGl_StateVariable::OpenGl_OCC_PROJECTION_MATRIX_TRANSPOSE)
        .value("OpenGl_OCC_MODEL_WORLD_MATRIX_INVERSE_TRANSPOSE",OpenGl_StateVariable::OpenGl_OCC_MODEL_WORLD_MATRIX_INVERSE_TRANSPOSE)
        .value("OpenGl_OCC_WORLD_VIEW_MATRIX_INVERSE_TRANSPOSE",OpenGl_StateVariable::OpenGl_OCC_WORLD_VIEW_MATRIX_INVERSE_TRANSPOSE)
        .value("OpenGl_OCC_PROJECTION_MATRIX_INVERSE_TRANSPOSE",OpenGl_StateVariable::OpenGl_OCC_PROJECTION_MATRIX_INVERSE_TRANSPOSE)
        .value("OpenGl_OCC_CLIP_PLANE_EQUATIONS",OpenGl_StateVariable::OpenGl_OCC_CLIP_PLANE_EQUATIONS)
        .value("OpenGl_OCC_CLIP_PLANE_COUNT",OpenGl_StateVariable::OpenGl_OCC_CLIP_PLANE_COUNT)
        .value("OpenGl_OCC_LIGHT_SOURCE_COUNT",OpenGl_StateVariable::OpenGl_OCC_LIGHT_SOURCE_COUNT)
        .value("OpenGl_OCC_LIGHT_SOURCE_TYPES",OpenGl_StateVariable::OpenGl_OCC_LIGHT_SOURCE_TYPES)
        .value("OpenGl_OCC_LIGHT_SOURCE_PARAMS",OpenGl_StateVariable::OpenGl_OCC_LIGHT_SOURCE_PARAMS)
        .value("OpenGl_OCC_LIGHT_AMBIENT",OpenGl_StateVariable::OpenGl_OCC_LIGHT_AMBIENT)
        .value("OpenGl_OCCT_TEXTURE_ENABLE",OpenGl_StateVariable::OpenGl_OCCT_TEXTURE_ENABLE)
        .value("OpenGl_OCCT_DISTINGUISH_MODE",OpenGl_StateVariable::OpenGl_OCCT_DISTINGUISH_MODE)
        .value("OpenGl_OCCT_FRONT_MATERIAL",OpenGl_StateVariable::OpenGl_OCCT_FRONT_MATERIAL)
        .value("OpenGl_OCCT_BACK_MATERIAL",OpenGl_StateVariable::OpenGl_OCCT_BACK_MATERIAL)
        .value("OpenGl_OCCT_ALPHA_CUTOFF",OpenGl_StateVariable::OpenGl_OCCT_ALPHA_CUTOFF)
        .value("OpenGl_OCCT_COLOR",OpenGl_StateVariable::OpenGl_OCCT_COLOR)
        .value("OpenGl_OCCT_OIT_OUTPUT",OpenGl_StateVariable::OpenGl_OCCT_OIT_OUTPUT)
        .value("OpenGl_OCCT_OIT_DEPTH_FACTOR",OpenGl_StateVariable::OpenGl_OCCT_OIT_DEPTH_FACTOR)
        .value("OpenGl_OCCT_TEXTURE_TRSF2D",OpenGl_StateVariable::OpenGl_OCCT_TEXTURE_TRSF2D)
        .value("OpenGl_OCCT_POINT_SIZE",OpenGl_StateVariable::OpenGl_OCCT_POINT_SIZE)
        .value("OpenGl_OCCT_NUMBER_OF_STATE_VARIABLES",OpenGl_StateVariable::OpenGl_OCCT_NUMBER_OF_STATE_VARIABLES).export_values();
    py::enum_<OpenGl_UniformStateType>(m, "OpenGl_UniformStateType",R"#(Defines types of uniform state variables.)#")
        .value("OpenGl_LIGHT_SOURCES_STATE",OpenGl_UniformStateType::OpenGl_LIGHT_SOURCES_STATE)
        .value("OpenGl_CLIP_PLANES_STATE",OpenGl_UniformStateType::OpenGl_CLIP_PLANES_STATE)
        .value("OpenGl_MODEL_WORLD_STATE",OpenGl_UniformStateType::OpenGl_MODEL_WORLD_STATE)
        .value("OpenGl_WORLD_VIEW_STATE",OpenGl_UniformStateType::OpenGl_WORLD_VIEW_STATE)
        .value("OpenGl_PROJECTION_STATE",OpenGl_UniformStateType::OpenGl_PROJECTION_STATE)
        .value("OpenGl_MATERIAL_STATE",OpenGl_UniformStateType::OpenGl_MATERIAL_STATE)
        .value("OpenGl_SURF_DETAIL_STATE",OpenGl_UniformStateType::OpenGl_SURF_DETAIL_STATE)
        .value("OpenGL_OIT_STATE",OpenGl_UniformStateType::OpenGL_OIT_STATE)
        .value("OpenGl_UniformStateType_NB",OpenGl_UniformStateType::OpenGl_UniformStateType_NB).export_values();

//Python trampoline classes
    class Py_OpenGl_Element : public OpenGl_Element{
    public:
        using OpenGl_Element::OpenGl_Element;
        
        // public pure virtual
        void Render(const opencascade::handle<OpenGl_Workspace> & theWorkspace) const  override { PYBIND11_OVERLOAD_PURE(void,OpenGl_Element,Render,theWorkspace) };
        void Release(OpenGl_Context * theContext) override { PYBIND11_OVERLOAD_PURE(void,OpenGl_Element,Release,theContext) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_OpenGl_RenderFilter : public OpenGl_RenderFilter{
    public:
        using OpenGl_RenderFilter::OpenGl_RenderFilter;
        
        // public pure virtual
        Standard_Boolean ShouldRender(const opencascade::handle<OpenGl_Workspace> & theWorkspace,const OpenGl_Element * theElement) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,OpenGl_RenderFilter,ShouldRender,theWorkspace,theElement) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_OpenGl_Resource : public OpenGl_Resource{
    public:
        using OpenGl_Resource::OpenGl_Resource;
        
        // public pure virtual
        void Release(OpenGl_Context * theGlCtx) override { PYBIND11_OVERLOAD_PURE(void,OpenGl_Resource,Release,theGlCtx) };
        Standard_Size EstimatedDataSize() const  override { PYBIND11_OVERLOAD_PURE(Standard_Size,OpenGl_Resource,EstimatedDataSize,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_OpenGl_NamedResource : public OpenGl_NamedResource{
    public:
        using OpenGl_NamedResource::OpenGl_NamedResource;
        
        // public pure virtual
        
        void Release(OpenGl_Context * theGlCtx) override { PYBIND11_OVERLOAD_PURE(void,OpenGl_Resource,Release,theGlCtx) };
        Standard_Size EstimatedDataSize() const  override { PYBIND11_OVERLOAD_PURE(Standard_Size,OpenGl_Resource,EstimatedDataSize,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs
    preregister_template_OpenGl_TmplCore30<OpenGl_GlCore21>(m,"OpenGl_GlCore30");  
    preregister_template_OpenGl_TmplCore30<OpenGl_GlCore21Fwd>(m,"OpenGl_GlCore30Fwd");  
    preregister_template_OpenGl_TmplCore33<OpenGl_GlCore32Back>(m,"OpenGl_GlCore33Back");  
    preregister_template_OpenGl_TmplCore33<OpenGl_GlCore32>(m,"OpenGl_GlCore33");  
    preregister_template_OpenGl_TmplCore12<OpenGl_GlCore11>(m,"OpenGl_GlCore12");  
    preregister_template_OpenGl_TmplCore12<OpenGl_GlCore11Fwd>(m,"OpenGl_GlCore12Fwd");  
    preregister_template_OpenGl_TmplCore14<OpenGl_GlCore13>(m,"OpenGl_GlCore14");  
    preregister_template_OpenGl_TmplCore14<OpenGl_GlCore13Fwd>(m,"OpenGl_GlCore14Fwd");  
    preregister_template_OpenGl_TmplCore15<OpenGl_GlCore14>(m,"OpenGl_GlCore15");  
    preregister_template_OpenGl_TmplCore15<OpenGl_GlCore14Fwd>(m,"OpenGl_GlCore15Fwd");  
    preregister_template_OpenGl_TmplCore20<OpenGl_GlCore15>(m,"OpenGl_GlCore20");  
    preregister_template_OpenGl_TmplCore20<OpenGl_GlCore15Fwd>(m,"OpenGl_GlCore20Fwd");  
    preregister_template_OpenGl_TmplCore21<OpenGl_GlCore20>(m,"OpenGl_GlCore21");  
    preregister_template_OpenGl_TmplCore21<OpenGl_GlCore20Fwd>(m,"OpenGl_GlCore21Fwd");  
    preregister_template_OpenGl_TmplCore31<OpenGl_GlCore30>(m,"OpenGl_GlCore31Back");  
    preregister_template_OpenGl_TmplCore31<OpenGl_GlCore30Fwd>(m,"OpenGl_GlCore31");  
    preregister_template_OpenGl_TmplCore32<OpenGl_GlCore31Back>(m,"OpenGl_GlCore32Back");  
    preregister_template_OpenGl_TmplCore32<OpenGl_GlCore31>(m,"OpenGl_GlCore32");  
    preregister_template_OpenGl_TmplCore40<OpenGl_GlCore33Back>(m,"OpenGl_GlCore40Back");  
    preregister_template_OpenGl_TmplCore40<OpenGl_GlCore33>(m,"OpenGl_GlCore40");  
    preregister_template_OpenGl_TmplCore41<OpenGl_GlCore40Back>(m,"OpenGl_GlCore41Back");  
    preregister_template_OpenGl_TmplCore41<OpenGl_GlCore40>(m,"OpenGl_GlCore41");  
    preregister_template_OpenGl_TmplCore42<OpenGl_GlCore41Back>(m,"OpenGl_GlCore42Back");  
    preregister_template_OpenGl_TmplCore42<OpenGl_GlCore41>(m,"OpenGl_GlCore42");  
    preregister_template_OpenGl_TmplCore43<OpenGl_GlCore42Back>(m,"OpenGl_GlCore43Back");  
    preregister_template_OpenGl_TmplCore43<OpenGl_GlCore42>(m,"OpenGl_GlCore43");  
    preregister_template_OpenGl_TmplCore44<OpenGl_GlCore43Back>(m,"OpenGl_GlCore44Back");  
    preregister_template_OpenGl_TmplCore44<OpenGl_GlCore43>(m,"OpenGl_GlCore44");  
    preregister_template_NCollection_Array1<OpenGl_IndexedMapOfStructure>(m,"OpenGl_ArrayOfIndexedMapOfStructure");  
    preregister_template_NCollection_List<const OpenGl_Structure *>(m,"OpenGl_ListOfStructure");  
    preregister_template_NCollection_Sequence<opencascade::handle<OpenGl_ShaderObject> >(m,"OpenGl_ShaderList");  
    preregister_template_NCollection_Vector<GLint>(m,"OpenGl_ColorFormats");  
    preregister_template_NCollection_Sequence<opencascade::handle<OpenGl_ShaderProgram> >(m,"OpenGl_ShaderProgramList");  
    preregister_template_BVH_Triangulation<Standard_ShortReal, 3>(m,"OpenGl_BVHTriangulation3f");  

// classes forward declarations only
    py::class_<OpenGl_BVHClipPrimitiveSet , shared_ptr<OpenGl_BVHClipPrimitiveSet>  >(m,"OpenGl_BVHClipPrimitiveSet",R"#(Set of OpenGl_Structures for building BVH tree.)#");
    py::class_<OpenGl_BVHClipPrimitiveTrsfPersSet , shared_ptr<OpenGl_BVHClipPrimitiveTrsfPersSet>  >(m,"OpenGl_BVHClipPrimitiveTrsfPersSet",R"#(Set of transformation persistent OpenGl_Structure for building BVH tree. Provides built-in mechanism to invalidate tree when world view projection state changes. Due to frequent invalidation of BVH tree the choice of BVH tree builder is made in favor of BVH linear builder (quick rebuild).)#");
    py::class_<OpenGl_BVHTreeSelector , shared_ptr<OpenGl_BVHTreeSelector>  >(m,"OpenGl_BVHTreeSelector",R"#(BVHTreeSelector class provides a possibility to store parameters of view volume, such as its vertices and equations, and contains methods detecting if given AABB overlaps view volume.)#");
    py::class_<OpenGl_CappingAlgo , shared_ptr<OpenGl_CappingAlgo>  >(m,"OpenGl_CappingAlgo",R"#(Capping surface rendering algorithm.)#");
    py::class_<OpenGl_Caps ,opencascade::handle<OpenGl_Caps>  , Standard_Transient >(m,"OpenGl_Caps",R"#(Class to define graphic driver capabilities. Notice that these options will be ignored if particular functionality does not provided by GL driverClass to define graphic driver capabilities. Notice that these options will be ignored if particular functionality does not provided by GL driver)#");
    py::class_<OpenGl_Clipping , shared_ptr<OpenGl_Clipping>  >(m,"OpenGl_Clipping",R"#(This class contains logics related to tracking and modification of clipping plane state for particular OpenGl context. It contains information about enabled clipping planes and provides method to change clippings in context. The methods should be executed within OpenGl context associated with instance of this class.)#");
    py::class_<OpenGl_ClippingIterator , shared_ptr<OpenGl_ClippingIterator>  >(m,"OpenGl_ClippingIterator",R"#(The iterator through clipping planes.The iterator through clipping planes.)#");
    py::class_<OpenGl_ClippingState , shared_ptr<OpenGl_ClippingState>  >(m,"OpenGl_ClippingState",R"#(Defines generic state of OCCT clipping state.)#");
    py::class_<OpenGl_Context ,opencascade::handle<OpenGl_Context>  , Standard_Transient >(m,"OpenGl_Context",R"#(This class generalize access to the GL context and available extensions.This class generalize access to the GL context and available extensions.)#");
    py::class_<OpenGl_Element , shared_ptr_nodelete<OpenGl_Element> ,Py_OpenGl_Element >(m,"OpenGl_Element",R"#(Base interface for drawable elements.)#");
    py::class_<OpenGl_FrameStats ,opencascade::handle<OpenGl_FrameStats>  , Standard_Transient >(m,"OpenGl_FrameStats",R"#(Class storing the frame statistics.Class storing the frame statistics.)#");
    py::class_<OpenGl_GraphicDriver ,opencascade::handle<OpenGl_GraphicDriver>  , Graphic3d_GraphicDriver >(m,"OpenGl_GraphicDriver",R"#(This class defines an OpenGl graphic driverThis class defines an OpenGl graphic driver)#");
    py::class_<OpenGl_Group ,opencascade::handle<OpenGl_Group>  , Graphic3d_Group >(m,"OpenGl_Group",R"#(Implementation of low-level graphic group.Implementation of low-level graphic group.Implementation of low-level graphic group.)#");
    py::class_<OpenGl_HaltonSampler , shared_ptr<OpenGl_HaltonSampler>  >(m,"OpenGl_HaltonSampler",R"#(Compute points of the Halton sequence with with digit-permutations for different bases.)#");
    py::class_<OpenGl_Layer ,opencascade::handle<OpenGl_Layer>  , Standard_Transient >(m,"OpenGl_Layer",R"#(Presentations list sorted within priorities.)#");
    py::class_<OpenGl_LayerList , shared_ptr<OpenGl_LayerList>  >(m,"OpenGl_LayerList",R"#(Class defining the list of layers.)#");
    py::class_<OpenGl_RaytraceGeometry , shared_ptr<OpenGl_RaytraceGeometry>  >(m,"OpenGl_RaytraceGeometry",R"#(Stores geometry of ray-tracing scene.)#");
    py::class_<OpenGl_RaytraceLight , shared_ptr<OpenGl_RaytraceLight>  >(m,"OpenGl_RaytraceLight",R"#(Stores properties of OpenGL light source.)#");
    py::class_<OpenGl_RaytraceMaterial , shared_ptr<OpenGl_RaytraceMaterial>  >(m,"OpenGl_RaytraceMaterial",R"#(Stores properties of surface material.)#");
    py::class_<OpenGl_RenderFilter ,opencascade::handle<OpenGl_RenderFilter> ,Py_OpenGl_RenderFilter , Standard_Transient >(m,"OpenGl_RenderFilter",R"#(Base class for defining element rendering filters. This class can be used in pair with advance rendering passes, and for disabling rendering (setting up) graphical aspects.Base class for defining element rendering filters. This class can be used in pair with advance rendering passes, and for disabling rendering (setting up) graphical aspects.Base class for defining element rendering filters. This class can be used in pair with advance rendering passes, and for disabling rendering (setting up) graphical aspects.)#");
    py::class_<OpenGl_Resource ,opencascade::handle<OpenGl_Resource> ,Py_OpenGl_Resource , Standard_Transient >(m,"OpenGl_Resource",R"#(Interface for OpenGl resource with following meaning: - object can be constructed at any time; - should be explicitly Initialized within active OpenGL context; - should be explicitly Released within active OpenGL context (virtual Release() method); - can be destroyed at any time. Destruction of object with unreleased GPU resources will cause leaks which will be ignored in release mode and will immediately stop program execution in debug mode using assert.Interface for OpenGl resource with following meaning: - object can be constructed at any time; - should be explicitly Initialized within active OpenGL context; - should be explicitly Released within active OpenGL context (virtual Release() method); - can be destroyed at any time. Destruction of object with unreleased GPU resources will cause leaks which will be ignored in release mode and will immediately stop program execution in debug mode using assert.)#");
    py::class_<OpenGl_SetOfShaderPrograms ,opencascade::handle<OpenGl_SetOfShaderPrograms>  , Standard_Transient >(m,"OpenGl_SetOfShaderPrograms",R"#(Alias to programs array of predefined lengthAlias to programs array of predefined length)#");
    py::class_<OpenGl_ShaderManager ,opencascade::handle<OpenGl_ShaderManager>  , Standard_Transient >(m,"OpenGl_ShaderManager",R"#(This class is responsible for managing shader programs.This class is responsible for managing shader programs.)#");
    py::class_<OpenGl_StateCounter , shared_ptr<OpenGl_StateCounter>  >(m,"OpenGl_StateCounter",R"#(Tool class to implement consistent state counter for objects inside the same driver instance.)#");
    py::class_<OpenGl_StateInterface , shared_ptr<OpenGl_StateInterface>  >(m,"OpenGl_StateInterface",R"#(Defines interface for OpenGL state.)#");
    py::class_<OpenGl_Structure ,opencascade::handle<OpenGl_Structure>  , Graphic3d_CStructure >(m,"OpenGl_Structure",R"#(Implementation of low-level graphic structure.Implementation of low-level graphic structure.Implementation of low-level graphic structure.)#");
    py::class_<OpenGl_TextBuilder , shared_ptr<OpenGl_TextBuilder>  >(m,"OpenGl_TextBuilder",R"#(This class generates primitive array required for rendering textured text using OpenGl_Font instance.)#");
    py::class_<OpenGl_TextureFormat , shared_ptr<OpenGl_TextureFormat>  >(m,"OpenGl_TextureFormat",R"#(Stores parameters of OpenGL texture format.)#");
    py::class_<OpenGl_TextureSet ,opencascade::handle<OpenGl_TextureSet>  , Standard_Transient >(m,"OpenGl_TextureSet",R"#(Class holding array of textures to be mapped as a set.)#");
    py::class_<OpenGl_TileSampler , shared_ptr<OpenGl_TileSampler>  >(m,"OpenGl_TileSampler",R"#(Tool object used for sampling screen tiles according to estimated pixel variance (used in path tracing engine). To improve GPU thread coherency, rendering window is split into pixel blocks or tiles. The important feature of this approach is that it is possible to keep the same number of tiles for any screen resolution (e.g. 256 tiles can be used for both 512 x 512 window and 1920 x 1080 window). So, a smaller number of tiles allows to increase interactivity (FPS), but at the cost of higher per-frame variance ('noise'). On the contrary a larger number of tiles decrease interactivity, but leads to lower per-frame variance. Note that the total time needed to produce final final image is the same for both cases.)#");
    py::class_<OpenGl_TriangleSet , shared_ptr<OpenGl_TriangleSet>  , OpenGl_BVHTriangulation3f >(m,"OpenGl_TriangleSet",R"#(Triangulation of single OpenGL primitive array.)#");
    py::class_<OpenGl_VariableSetterSelector , shared_ptr<OpenGl_VariableSetterSelector>  >(m,"OpenGl_VariableSetterSelector",R"#(Support tool for setting user-defined uniform variables.)#");
    py::class_<OpenGl_View ,opencascade::handle<OpenGl_View>  , Graphic3d_CView >(m,"OpenGl_View",R"#(Implementation of OpenGl view.Implementation of OpenGl view.Implementation of OpenGl view.)#");
    py::class_<OpenGl_Window ,opencascade::handle<OpenGl_Window>  , Standard_Transient >(m,"OpenGl_Window",R"#(This class represents low-level wrapper over window with GL context. The window itself should be provided to constructor.This class represents low-level wrapper over window with GL context. The window itself should be provided to constructor.This class represents low-level wrapper over window with GL context. The window itself should be provided to constructor.)#");
    py::class_<OpenGl_Workspace ,opencascade::handle<OpenGl_Workspace>  , Standard_Transient >(m,"OpenGl_Workspace",R"#(Rendering workspace. Provides methods to render primitives and maintain GL state.Rendering workspace. Provides methods to render primitives and maintain GL state.Rendering workspace. Provides methods to render primitives and maintain GL state.)#");
    py::class_<OpenGl_AspectFace , shared_ptr<OpenGl_AspectFace>  , OpenGl_Element >(m,"OpenGl_AspectFace",R"#(The element holding Graphic3d_AspectFillArea3d.)#");
    py::class_<OpenGl_AspectLine , shared_ptr<OpenGl_AspectLine>  , OpenGl_Element >(m,"OpenGl_AspectLine",R"#(The element holding Graphic3d_AspectLine3d.)#");
    py::class_<OpenGl_AspectMarker , shared_ptr<OpenGl_AspectMarker>  , OpenGl_Element >(m,"OpenGl_AspectMarker",R"#(The element holding Graphic3d_AspectMarker3d.)#");
    py::class_<OpenGl_AspectText , shared_ptr<OpenGl_AspectText>  , OpenGl_Element >(m,"OpenGl_AspectText",R"#(Text representation parameters)#");
    py::class_<OpenGl_CappingAlgoFilter ,opencascade::handle<OpenGl_CappingAlgoFilter>  , OpenGl_RenderFilter >(m,"OpenGl_CappingAlgoFilter",R"#(Graphical capping rendering algorithm filter. Filters out everything except shaded primitives.Graphical capping rendering algorithm filter. Filters out everything except shaded primitives.Graphical capping rendering algorithm filter. Filters out everything except shaded primitives.)#");
    py::class_<OpenGl_CappingPlaneResource ,opencascade::handle<OpenGl_CappingPlaneResource>  , OpenGl_Resource >(m,"OpenGl_CappingPlaneResource",R"#(Container of graphical resources for rendering capping plane associated to graphical clipping plane. This resource holds data necessary for OpenGl_CappingAlgo. This object is implemented as OpenGl resource for the following reasons: - one instance should be shared between contexts. - instance associated to Graphic3d_ClipPlane data by id. - should created and released within context (owns OpenGl elements and resources).Container of graphical resources for rendering capping plane associated to graphical clipping plane. This resource holds data necessary for OpenGl_CappingAlgo. This object is implemented as OpenGl resource for the following reasons: - one instance should be shared between contexts. - instance associated to Graphic3d_ClipPlane data by id. - should created and released within context (owns OpenGl elements and resources).Container of graphical resources for rendering capping plane associated to graphical clipping plane. This resource holds data necessary for OpenGl_CappingAlgo. This object is implemented as OpenGl resource for the following reasons: - one instance should be shared between contexts. - instance associated to Graphic3d_ClipPlane data by id. - should created and released within context (owns OpenGl elements and resources).)#");
    py::class_<OpenGl_Flipper , shared_ptr<OpenGl_Flipper>  , OpenGl_Element >(m,"OpenGl_Flipper",R"#(Being rendered, the elements modifies current model-view matrix such that the axes of the specified reference system (in model space) become oriented in the following way: - X - heads to the right side of view. - Y - heads to the up side of view. - N(Z) - heads towards the screen. Originally, this element serves for need of flipping the 3D text of dimension presentations.)#");
    py::class_<OpenGl_Font ,opencascade::handle<OpenGl_Font>  , OpenGl_Resource >(m,"OpenGl_Font",R"#(Texture font.Texture font.)#");
    py::class_<OpenGl_FrameBuffer ,opencascade::handle<OpenGl_FrameBuffer>  , OpenGl_Resource >(m,"OpenGl_FrameBuffer",R"#(Class implements FrameBuffer Object (FBO) resource intended for off-screen rendering.Class implements FrameBuffer Object (FBO) resource intended for off-screen rendering.Class implements FrameBuffer Object (FBO) resource intended for off-screen rendering.)#");
    py::class_<OpenGl_GraduatedTrihedron , shared_ptr<OpenGl_GraduatedTrihedron>  , OpenGl_Element >(m,"OpenGl_GraduatedTrihedron",R"#(This class allows to render Graduated Trihedron, i.e. trihedron with grid. it is based on Graphic3d_GraduatedTrihedron parameters and support its customization on construction level only.)#");
    py::class_<OpenGl_LightSourceState , shared_ptr<OpenGl_LightSourceState>  , OpenGl_StateInterface >(m,"OpenGl_LightSourceState",R"#(Defines state of OCCT light sources.)#");
    py::class_<OpenGl_LineAttributes ,opencascade::handle<OpenGl_LineAttributes>  , OpenGl_Resource >(m,"OpenGl_LineAttributes",R"#(Utility class to manage OpenGL state of polygon hatching rasterization and keeping its cached state. The hatching rasterization is implemented using glPolygonStipple function of OpenGL. State of hatching is controlled by two parameters - type of hatching and IsEnabled parameter. The hatching rasterization is enabled only if non-zero index pattern type is selected (zero by default is reserved for solid filling) and if IsEnabled flag is set to true. The IsEnabled parameter is useful for temporarily turning on/off the hatching rasterization without making any costly GL calls for changing the hatch pattern. This is a sharable resource class - it creates OpenGL context objects for each hatch pattern to achieve quicker switching between them, thesse GL objects are freed when the resource is released by owner context.Utility class to manage OpenGL state of polygon hatching rasterization and keeping its cached state. The hatching rasterization is implemented using glPolygonStipple function of OpenGL. State of hatching is controlled by two parameters - type of hatching and IsEnabled parameter. The hatching rasterization is enabled only if non-zero index pattern type is selected (zero by default is reserved for solid filling) and if IsEnabled flag is set to true. The IsEnabled parameter is useful for temporarily turning on/off the hatching rasterization without making any costly GL calls for changing the hatch pattern. This is a sharable resource class - it creates OpenGL context objects for each hatch pattern to achieve quicker switching between them, thesse GL objects are freed when the resource is released by owner context.)#");
    py::class_<OpenGl_MaterialState , shared_ptr<OpenGl_MaterialState>  , OpenGl_StateInterface >(m,"OpenGl_MaterialState",R"#(Defines generic state of material properties.)#");
    py::class_<OpenGl_ModelWorldState , shared_ptr<OpenGl_ModelWorldState>  , OpenGl_StateInterface >(m,"OpenGl_ModelWorldState",R"#(Defines state of OCCT model-world transformation.)#");
    py::class_<OpenGl_NamedResource ,opencascade::handle<OpenGl_NamedResource> ,Py_OpenGl_NamedResource , OpenGl_Resource >(m,"OpenGl_NamedResource",R"#(Named resource object.)#");
    py::class_<OpenGl_OitState , shared_ptr<OpenGl_OitState>  , OpenGl_StateInterface >(m,"OpenGl_OitState",R"#(Defines generic state of order-independent transparency rendering properties.)#");
    py::class_<OpenGl_PrimitiveArray , shared_ptr<OpenGl_PrimitiveArray>  , OpenGl_Element >(m,"OpenGl_PrimitiveArray",R"#(Class for rendering of arbitrary primitive array.)#");
    py::class_<OpenGl_ProjectionState , shared_ptr<OpenGl_ProjectionState>  , OpenGl_StateInterface >(m,"OpenGl_ProjectionState",R"#(Defines state of OCCT projection transformation.)#");
    py::class_<OpenGl_RaytraceFilter ,opencascade::handle<OpenGl_RaytraceFilter>  , OpenGl_RenderFilter >(m,"OpenGl_RaytraceFilter",R"#(Graphical ray-tracing filter. Filters out all raytracable structures.Graphical ray-tracing filter. Filters out all raytracable structures.Graphical ray-tracing filter. Filters out all raytracable structures.)#");
    py::class_<OpenGl_Sampler ,opencascade::handle<OpenGl_Sampler>  , OpenGl_Resource >(m,"OpenGl_Sampler",R"#(Class implements OpenGL sampler object resource that stores the sampling parameters for a texture access.Class implements OpenGL sampler object resource that stores the sampling parameters for a texture access.)#");
    py::class_<OpenGl_ShaderObject ,opencascade::handle<OpenGl_ShaderObject>  , OpenGl_Resource >(m,"OpenGl_ShaderObject",R"#(Wrapper for OpenGL shader object.Wrapper for OpenGL shader object.)#");
    py::class_<OpenGl_StencilTest , shared_ptr_nodelete<OpenGl_StencilTest>  , OpenGl_Element >(m,"OpenGl_StencilTest",R"#(None)#");
    py::class_<OpenGl_StructureShadow ,opencascade::handle<OpenGl_StructureShadow>  , OpenGl_Structure >(m,"OpenGl_StructureShadow",R"#(Dummy structure which just redirects to groups of another structure.Dummy structure which just redirects to groups of another structure.)#");
    py::class_<OpenGl_Text , shared_ptr_nodelete<OpenGl_Text>  , OpenGl_Element >(m,"OpenGl_Text",R"#(Text rendering)#");
    py::class_<OpenGl_VertexBuffer ,opencascade::handle<OpenGl_VertexBuffer>  , OpenGl_Resource >(m,"OpenGl_VertexBuffer",R"#(Vertex Buffer Object - is a general storage object for vertex attributes (position, normal, color). Notice that you should use OpenGl_IndexBuffer specialization for array of indices.Vertex Buffer Object - is a general storage object for vertex attributes (position, normal, color). Notice that you should use OpenGl_IndexBuffer specialization for array of indices.)#");
    py::class_<OpenGl_WorldViewState , shared_ptr<OpenGl_WorldViewState>  , OpenGl_StateInterface >(m,"OpenGl_WorldViewState",R"#(Defines state of OCCT world-view transformation.)#");
    py::class_<OpenGl_BackgroundArray , shared_ptr<OpenGl_BackgroundArray>  , OpenGl_PrimitiveArray >(m,"OpenGl_BackgroundArray",R"#(Tool class for generating reusable data for gradient or texture background rendering.)#");
    py::class_<OpenGl_FrameStatsPrs , shared_ptr<OpenGl_FrameStatsPrs>  , OpenGl_Text >(m,"OpenGl_FrameStatsPrs",R"#(Element rendering frame statistics.)#");
    py::class_<OpenGl_IndexBuffer ,opencascade::handle<OpenGl_IndexBuffer>  , OpenGl_VertexBuffer >(m,"OpenGl_IndexBuffer",R"#(Index buffer is just a VBO with special target (GL_ELEMENT_ARRAY_BUFFER).Index buffer is just a VBO with special target (GL_ELEMENT_ARRAY_BUFFER).)#");
    py::class_<OpenGl_ShaderProgram ,opencascade::handle<OpenGl_ShaderProgram>  , OpenGl_NamedResource >(m,"OpenGl_ShaderProgram",R"#(Wrapper for OpenGL program object.Wrapper for OpenGL program object.Wrapper for OpenGL program object.)#");
    py::class_<OpenGl_Texture ,opencascade::handle<OpenGl_Texture>  , OpenGl_NamedResource >(m,"OpenGl_Texture",R"#(Texture resource.Texture resource.)#");
    py::class_<OpenGl_TextureBufferArb ,opencascade::handle<OpenGl_TextureBufferArb>  , OpenGl_VertexBuffer >(m,"OpenGl_TextureBufferArb",R"#(Texture Buffer Object. This is a special 1D texture that VBO-style initialized. The main differences from general 1D texture: - no interpolation between field; - greater sizes; - special sampler object in GLSL shader to access data by index.Texture Buffer Object. This is a special 1D texture that VBO-style initialized. The main differences from general 1D texture: - no interpolation between field; - greater sizes; - special sampler object in GLSL shader to access data by index.)#");
    py::class_<OpenGl_VertexBufferCompat ,opencascade::handle<OpenGl_VertexBufferCompat>  , OpenGl_VertexBuffer >(m,"OpenGl_VertexBufferCompat",R"#(Compatibility layer for old OpenGL without VBO. Make sure to pass pointer from GetDataOffset() instead of NULL. Method GetDataOffset() returns pointer to real data in this class (while base class OpenGl_VertexBuffer always return NULL).Compatibility layer for old OpenGL without VBO. Make sure to pass pointer from GetDataOffset() instead of NULL. Method GetDataOffset() returns pointer to real data in this class (while base class OpenGl_VertexBuffer always return NULL).)#");
    py::class_<OpenGl_PointSprite ,opencascade::handle<OpenGl_PointSprite>  , OpenGl_Texture >(m,"OpenGl_PointSprite",R"#(Point sprite resource. On modern hardware it will be texture with extra parameters. On ancient hardware sprites will be drawn using bitmaps.Point sprite resource. On modern hardware it will be texture with extra parameters. On ancient hardware sprites will be drawn using bitmaps.Point sprite resource. On modern hardware it will be texture with extra parameters. On ancient hardware sprites will be drawn using bitmaps.)#");

};

// user-defined post-inclusion per module

// user-defined post

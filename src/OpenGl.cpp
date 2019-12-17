
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <OpenGl_ShaderProgram.hxx>
#include <OpenGl_Element.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_Text.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_Window.hxx>
#include <OpenGl_Texture.hxx>
#include <OpenGl_Element.hxx>
#include <OpenGl_Group.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_PrimitiveArray.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_Workspace.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <Graphic3d_PresentationAttributes.hxx>
#include <OpenGl_AspectFace.hxx>
#include <OpenGl_FrameBuffer.hxx>
#include <OpenGl_Sampler.hxx>
#include <OpenGl_ShaderProgram.hxx>
#include <OpenGl_ShaderManager.hxx>
#include <OpenGl_FrameStats.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_Texture.hxx>
#include <OpenGl_Element.hxx>
#include <OpenGl_Workspace.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_Workspace.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_ShaderProgram.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_PointSprite.hxx>
#include <OpenGl_ShaderProgram.hxx>
#include <OpenGl_Texture.hxx>
#include <OpenGl_Context.hxx>
#include <Font_FTFont.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <gp_Ax2.hxx>
#include <OpenGl_CappingPlaneResource.hxx>
#include <OpenGl_Structure.hxx>

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
// ./opencascade/OpenGl_GlCore20.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore20.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore44.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore44.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore40.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore40.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_SceneGeometry.hxx
#include "BVH.hxx"
// ./opencascade/OpenGl_GlCore21.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore21.hxx
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
// ./opencascade/OpenGl_ShaderProgram.hxx
#include "NCollection.hxx"
// ./opencascade/OpenGl_Structure.hxx
#include "NCollection.hxx"
// ./opencascade/OpenGl_ShaderManager.hxx
#include "NCollection.hxx"
// ./opencascade/OpenGl_Layer.hxx
#include "NCollection.hxx"
// ./opencascade/OpenGl_FrameBuffer.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <Message_Messenger.hxx>

// Module definiiton
void register_OpenGl(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("OpenGl"));


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

// classes


    static_cast<py::class_<OpenGl_Element ,std::unique_ptr<OpenGl_Element, py::nodelete> ,Py_OpenGl_Element >>(m.attr("OpenGl_Element"))
        .def(py::init<  >()  )
        .def("Render",
             (void (OpenGl_Element::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_Element::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_Element::Render),
             R"#(None)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_Element::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_Element::*)( OpenGl_Context *  ) >(&OpenGl_Element::Release),
             R"#(Release GPU resources. Pointer to the context is used because this method might be called when the context is already being destroyed and usage of a handle would be unsafe)#"  , py::arg("theContext"))
        .def("IsFillDrawMode",
             (Standard_Boolean (OpenGl_Element::*)() const) static_cast<Standard_Boolean (OpenGl_Element::*)() const>(&OpenGl_Element::IsFillDrawMode),
             R"#(Return TRUE if primitive type generates shaded triangulation (to be used in filters).)#" )
        .def("RenderFiltered",
             (Standard_Boolean (OpenGl_Element::*)( const opencascade::handle<OpenGl_Workspace> & ,  const opencascade::handle<OpenGl_RenderFilter> &  ) const) static_cast<Standard_Boolean (OpenGl_Element::*)( const opencascade::handle<OpenGl_Workspace> & ,  const opencascade::handle<OpenGl_RenderFilter> &  ) const>(&OpenGl_Element::RenderFiltered),
             R"#(Render element if it passes the filtering procedure. This method should be used for elements which can be used in scope of rendering algorithms. E.g. elements of groups during recursive rendering. If render filter is null, pure rendering is performed.)#"  , py::arg("theWorkspace"),  py::arg("theFilter"))
;


    static_cast<py::class_<OpenGl_AspectLine ,std::unique_ptr<OpenGl_AspectLine>  , OpenGl_Element >>(m.attr("OpenGl_AspectLine"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Graphic3d_AspectLine3d> & >()  , py::arg("theAspect") )
        .def("Aspect",
             (const opencascade::handle<Graphic3d_AspectLine3d> & (OpenGl_AspectLine::*)() const) static_cast<const opencascade::handle<Graphic3d_AspectLine3d> & (OpenGl_AspectLine::*)() const>(&OpenGl_AspectLine::Aspect),
             R"#(Return line aspect.)#" )
        .def("SetAspect",
             (void (OpenGl_AspectLine::*)( const opencascade::handle<Graphic3d_AspectLine3d> &  ) ) static_cast<void (OpenGl_AspectLine::*)( const opencascade::handle<Graphic3d_AspectLine3d> &  ) >(&OpenGl_AspectLine::SetAspect),
             R"#(Assign line aspect.)#"  , py::arg("theAspect"))
        .def("ShaderProgramRes",
             (const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_AspectLine::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_AspectLine::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_AspectLine::ShaderProgramRes),
             R"#(Init and return OpenGl shader program resource.)#"  , py::arg("theCtx"))
        .def("Render",
             (void (OpenGl_AspectLine::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_AspectLine::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_AspectLine::Render),
             R"#(None)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_AspectLine::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_AspectLine::*)( OpenGl_Context *  ) >(&OpenGl_AspectLine::Release),
             R"#(None)#"  , py::arg("theContext"))
;


    static_cast<py::class_<OpenGl_TextureSet ,opencascade::handle<OpenGl_TextureSet>  , Standard_Transient >>(m.attr("OpenGl_TextureSet"))
        .def(py::init<  >()  )
        .def(py::init< Standard_Integer >()  , py::arg("theNbTextures") )
        .def(py::init< const opencascade::handle<OpenGl_Texture> & >()  , py::arg("theTexture") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_TextureSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_TextureSet::*)() const>(&OpenGl_TextureSet::DynamicType),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (OpenGl_TextureSet::*)() const) static_cast<Standard_Boolean (OpenGl_TextureSet::*)() const>(&OpenGl_TextureSet::IsEmpty),
             R"#(Return TRUE if texture array is empty.)#" )
        .def("Size",
             (Standard_Integer (OpenGl_TextureSet::*)() const) static_cast<Standard_Integer (OpenGl_TextureSet::*)() const>(&OpenGl_TextureSet::Size),
             R"#(Return number of textures.)#" )
        .def("Lower",
             (Standard_Integer (OpenGl_TextureSet::*)() const) static_cast<Standard_Integer (OpenGl_TextureSet::*)() const>(&OpenGl_TextureSet::Lower),
             R"#(Return the lower index in texture set.)#" )
        .def("Upper",
             (Standard_Integer (OpenGl_TextureSet::*)() const) static_cast<Standard_Integer (OpenGl_TextureSet::*)() const>(&OpenGl_TextureSet::Upper),
             R"#(Return the upper index in texture set.)#" )
        .def("First",
             (const opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)() const) static_cast<const opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)() const>(&OpenGl_TextureSet::First),
             R"#(Return the first texture.)#" )
        .def("ChangeFirst",
             (opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)() ) static_cast<opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)() >(&OpenGl_TextureSet::ChangeFirst),
             R"#(Return the first texture.)#" )
        .def("Value",
             (const opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)( Standard_Integer  ) const) static_cast<const opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)( Standard_Integer  ) const>(&OpenGl_TextureSet::Value),
             R"#(Return the texture at specified position within [0, Size()) range.)#"  , py::arg("theIndex"))
        .def("ChangeValue",
             (opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)( Standard_Integer  ) ) static_cast<opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)( Standard_Integer  ) >(&OpenGl_TextureSet::ChangeValue),
             R"#(Return the texture at specified position within [0, Size()) range.)#"  , py::arg("theIndex"))
        .def("IsModulate",
             (bool (OpenGl_TextureSet::*)() const) static_cast<bool (OpenGl_TextureSet::*)() const>(&OpenGl_TextureSet::IsModulate),
             R"#(Return TRUE if texture color modulation has been enabled for the first texture or if texture is not set at all.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_TextureSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_TextureSet::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_SetOfShaderPrograms ,opencascade::handle<OpenGl_SetOfShaderPrograms>  , Standard_Transient >>(m.attr("OpenGl_SetOfShaderPrograms"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_SetOfShaderPrograms::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_SetOfShaderPrograms::*)() const>(&OpenGl_SetOfShaderPrograms::DynamicType),
             R"#(None)#" )
        .def("ChangeValue",
             (opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_SetOfShaderPrograms::*)( Graphic3d_TypeOfShadingModel ,  Standard_Integer  ) ) static_cast<opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_SetOfShaderPrograms::*)( Graphic3d_TypeOfShadingModel ,  Standard_Integer  ) >(&OpenGl_SetOfShaderPrograms::ChangeValue),
             R"#(Access program by index)#"  , py::arg("theShadingModel"),  py::arg("theProgramBits"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_SetOfShaderPrograms::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_SetOfShaderPrograms::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_Workspace ,opencascade::handle<OpenGl_Workspace>  , Standard_Transient >>(m.attr("OpenGl_Workspace"))
        .def(py::init< OpenGl_View *,const opencascade::handle<OpenGl_Window> & >()  , py::arg("theView"),  py::arg("theWindow") )
        .def("Activate",
             (Standard_Boolean (OpenGl_Workspace::*)() ) static_cast<Standard_Boolean (OpenGl_Workspace::*)() >(&OpenGl_Workspace::Activate),
             R"#(Activate rendering context.)#" )
        .def("View",
             (OpenGl_View * (OpenGl_Workspace::*)() const) static_cast<OpenGl_View * (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::View),
             R"#(None)#" )
        .def("GetGlContext",
             (const opencascade::handle<OpenGl_Context> & (OpenGl_Workspace::*)() ) static_cast<const opencascade::handle<OpenGl_Context> & (OpenGl_Workspace::*)() >(&OpenGl_Workspace::GetGlContext),
             R"#(None)#" )
        .def("FBOCreate",
             (opencascade::handle<OpenGl_FrameBuffer> (OpenGl_Workspace::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<opencascade::handle<OpenGl_FrameBuffer> (OpenGl_Workspace::*)( const Standard_Integer ,  const Standard_Integer  ) >(&OpenGl_Workspace::FBOCreate),
             R"#(None)#"  , py::arg("theWidth"),  py::arg("theHeight"))
        .def("FBORelease",
             (void (OpenGl_Workspace::*)( opencascade::handle<OpenGl_FrameBuffer> &  ) ) static_cast<void (OpenGl_Workspace::*)( opencascade::handle<OpenGl_FrameBuffer> &  ) >(&OpenGl_Workspace::FBORelease),
             R"#(None)#"  , py::arg("theFbo"))
        .def("BufferDump",
             (Standard_Boolean (OpenGl_Workspace::*)( const opencascade::handle<OpenGl_FrameBuffer> & ,  Image_PixMap & ,  const Graphic3d_BufferType &  ) ) static_cast<Standard_Boolean (OpenGl_Workspace::*)( const opencascade::handle<OpenGl_FrameBuffer> & ,  Image_PixMap & ,  const Graphic3d_BufferType &  ) >(&OpenGl_Workspace::BufferDump),
             R"#(None)#"  , py::arg("theFbo"),  py::arg("theImage"),  py::arg("theBufferType"))
        .def("Width",
             (Standard_Integer (OpenGl_Workspace::*)() const) static_cast<Standard_Integer (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::Width),
             R"#(None)#" )
        .def("Height",
             (Standard_Integer (OpenGl_Workspace::*)() const) static_cast<Standard_Integer (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::Height),
             R"#(None)#" )
        .def("SetUseZBuffer",
             (Standard_Boolean (OpenGl_Workspace::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (OpenGl_Workspace::*)( const Standard_Boolean  ) >(&OpenGl_Workspace::SetUseZBuffer),
             R"#(Setup Z-buffer usage flag (without affecting GL state!). Returns previously set flag.)#"  , py::arg("theToUse"))
        .def("UseZBuffer",
             (Standard_Boolean & (OpenGl_Workspace::*)() ) static_cast<Standard_Boolean & (OpenGl_Workspace::*)() >(&OpenGl_Workspace::UseZBuffer),
             R"#(Returns true if usage of Z buffer is enabled.)#" )
        .def("UseDepthWrite",
             (Standard_Boolean & (OpenGl_Workspace::*)() ) static_cast<Standard_Boolean & (OpenGl_Workspace::*)() >(&OpenGl_Workspace::UseDepthWrite),
             R"#(Returns true if depth writing is enabled.)#" )
        .def("IsCullingEnabled",
             (Standard_Boolean (OpenGl_Workspace::*)() const) static_cast<Standard_Boolean (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::IsCullingEnabled),
             R"#(Returns true if clipping algorithm enabled)#" )
        .def("ToAllowFaceCulling",
             (bool (OpenGl_Workspace::*)() const) static_cast<bool (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::ToAllowFaceCulling),
             R"#(Return true if active group might activate face culling (e.g. primitives are closed).)#" )
        .def("SetAllowFaceCulling",
             (void (OpenGl_Workspace::*)( bool  ) ) static_cast<void (OpenGl_Workspace::*)( bool  ) >(&OpenGl_Workspace::SetAllowFaceCulling),
             R"#(Allow or disallow face culling. This call does NOT affect current state of back face culling; ApplyAspectFace() should be called to update state.)#"  , py::arg("theToAllow"))
        .def("ToHighlight",
             (bool (OpenGl_Workspace::*)() const) static_cast<bool (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::ToHighlight),
             R"#(Return true if following structures should apply highlight color.)#" )
        .def("HighlightStyle",
             (const opencascade::handle<Graphic3d_PresentationAttributes> & (OpenGl_Workspace::*)() const) static_cast<const opencascade::handle<Graphic3d_PresentationAttributes> & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::HighlightStyle),
             R"#(Return highlight style.)#" )
        .def("SetHighlightStyle",
             (void (OpenGl_Workspace::*)( const opencascade::handle<Graphic3d_PresentationAttributes> &  ) ) static_cast<void (OpenGl_Workspace::*)( const opencascade::handle<Graphic3d_PresentationAttributes> &  ) >(&OpenGl_Workspace::SetHighlightStyle),
             R"#(Set highlight style.)#"  , py::arg("theStyle"))
        .def("LineColor",
             (const OpenGl_Vec4 & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Vec4 & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::LineColor),
             R"#(Return line color taking into account highlight flag.)#" )
        .def("EdgeColor",
             (const OpenGl_Vec4 & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Vec4 & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::EdgeColor),
             R"#(Return edge color taking into account highlight flag.)#" )
        .def("MarkerColor",
             (const OpenGl_Vec4 & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Vec4 & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::MarkerColor),
             R"#(Return marker color taking into account highlight flag.)#" )
        .def("InteriorColor",
             (const OpenGl_Vec4 & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Vec4 & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::InteriorColor),
             R"#(Return Interior color taking into account highlight flag.)#" )
        .def("TextColor",
             (const OpenGl_Vec4 & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Vec4 & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::TextColor),
             R"#(Return text color taking into account highlight flag.)#" )
        .def("TextSubtitleColor",
             (const OpenGl_Vec4 & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Vec4 & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::TextSubtitleColor),
             R"#(Return text Subtitle color taking into account highlight flag.)#" )
        .def("AspectLine",
             (const OpenGl_AspectLine * (OpenGl_Workspace::*)() const) static_cast<const OpenGl_AspectLine * (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::AspectLine),
             R"#(Currently set line aspect (can differ from applied).)#" )
        .def("AspectFace",
             (const OpenGl_AspectFace * (OpenGl_Workspace::*)() const) static_cast<const OpenGl_AspectFace * (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::AspectFace),
             R"#(Currently set face aspect (can differ from applied).)#" )
        .def("AspectMarker",
             (const OpenGl_AspectMarker * (OpenGl_Workspace::*)() const) static_cast<const OpenGl_AspectMarker * (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::AspectMarker),
             R"#(Currently set marker aspect (can differ from applied).)#" )
        .def("AspectText",
             (const OpenGl_AspectText * (OpenGl_Workspace::*)() const) static_cast<const OpenGl_AspectText * (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::AspectText),
             R"#(Currently set text aspect (can differ from applied).)#" )
        .def("SetAspectLine",
             (const OpenGl_AspectLine * (OpenGl_Workspace::*)( const OpenGl_AspectLine *  ) ) static_cast<const OpenGl_AspectLine * (OpenGl_Workspace::*)( const OpenGl_AspectLine *  ) >(&OpenGl_Workspace::SetAspectLine),
             R"#(Assign new line aspect (will be applied within ApplyAspectLine()).)#"  , py::arg("theAspect"))
        .def("SetAspectFace",
             (const OpenGl_AspectFace * (OpenGl_Workspace::*)( const OpenGl_AspectFace *  ) ) static_cast<const OpenGl_AspectFace * (OpenGl_Workspace::*)( const OpenGl_AspectFace *  ) >(&OpenGl_Workspace::SetAspectFace),
             R"#(Assign new face aspect (will be applied within ApplyAspectFace()).)#"  , py::arg("theAspect"))
        .def("SetAspectMarker",
             (const OpenGl_AspectMarker * (OpenGl_Workspace::*)( const OpenGl_AspectMarker *  ) ) static_cast<const OpenGl_AspectMarker * (OpenGl_Workspace::*)( const OpenGl_AspectMarker *  ) >(&OpenGl_Workspace::SetAspectMarker),
             R"#(Assign new marker aspect (will be applied within ApplyAspectMarker()).)#"  , py::arg("theAspect"))
        .def("SetAspectText",
             (const OpenGl_AspectText * (OpenGl_Workspace::*)( const OpenGl_AspectText *  ) ) static_cast<const OpenGl_AspectText * (OpenGl_Workspace::*)( const OpenGl_AspectText *  ) >(&OpenGl_Workspace::SetAspectText),
             R"#(Assign new text aspect (will be applied within ApplyAspectText()).)#"  , py::arg("theAspect"))
        .def("ApplyAspectLine",
             (const OpenGl_AspectLine * (OpenGl_Workspace::*)() ) static_cast<const OpenGl_AspectLine * (OpenGl_Workspace::*)() >(&OpenGl_Workspace::ApplyAspectLine),
             R"#(Apply line aspect.)#" )
        .def("ApplyAspectFace",
             (const OpenGl_AspectFace * (OpenGl_Workspace::*)() ) static_cast<const OpenGl_AspectFace * (OpenGl_Workspace::*)() >(&OpenGl_Workspace::ApplyAspectFace),
             R"#(Apply face aspect.)#" )
        .def("ApplyAspectMarker",
             (const OpenGl_AspectMarker * (OpenGl_Workspace::*)() ) static_cast<const OpenGl_AspectMarker * (OpenGl_Workspace::*)() >(&OpenGl_Workspace::ApplyAspectMarker),
             R"#(Apply marker aspect.)#" )
        .def("ApplyAspectText",
             (const OpenGl_AspectText * (OpenGl_Workspace::*)() ) static_cast<const OpenGl_AspectText * (OpenGl_Workspace::*)() >(&OpenGl_Workspace::ApplyAspectText),
             R"#(Apply text aspect.)#" )
        .def("ResetAppliedAspect",
             (void (OpenGl_Workspace::*)() ) static_cast<void (OpenGl_Workspace::*)() >(&OpenGl_Workspace::ResetAppliedAspect),
             R"#(Clear the applied aspect state to default values.)#" )
        .def("SetRenderFilter",
             (void (OpenGl_Workspace::*)( const opencascade::handle<OpenGl_RenderFilter> &  ) ) static_cast<void (OpenGl_Workspace::*)( const opencascade::handle<OpenGl_RenderFilter> &  ) >(&OpenGl_Workspace::SetRenderFilter),
             R"#(Set filter for restricting rendering of particular elements. Filter can be applied for rendering passes used by recursive rendering algorithms for rendering elements of groups.)#"  , py::arg("theFilter"))
        .def("GetRenderFilter",
             (const opencascade::handle<OpenGl_RenderFilter> & (OpenGl_Workspace::*)() const) static_cast<const opencascade::handle<OpenGl_RenderFilter> & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::GetRenderFilter),
             R"#(Get rendering filter.)#" )
        .def("ViewMatrix",
             (const OpenGl_Matrix * (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Matrix * (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::ViewMatrix),
             R"#(Returns applied view matrix.)#" )
        .def("ModelMatrix",
             (const OpenGl_Matrix * (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Matrix * (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::ModelMatrix),
             R"#(Returns applied model structure matrix.)#" )
        .def("FontFaceAspect",
             (const OpenGl_AspectFace & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_AspectFace & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::FontFaceAspect),
             R"#(Returns face aspect for textured font rendering.)#" )
        .def("DefaultCappingAlgoFilter",
             (const opencascade::handle<OpenGl_CappingAlgoFilter> & (OpenGl_Workspace::*)() const) static_cast<const opencascade::handle<OpenGl_CappingAlgoFilter> & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::DefaultCappingAlgoFilter),
             R"#(Returns capping algorithm rendering filter.)#" )
        .def("NoneCulling",
             (const OpenGl_AspectFace & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_AspectFace & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::NoneCulling),
             R"#(Returns face aspect for none culling mode.)#" )
        .def("FrontCulling",
             (const OpenGl_AspectFace & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_AspectFace & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::FrontCulling),
             R"#(Returns face aspect for front face culling mode.)#" )
        .def("SetEnvironmentTexture",
             (void (OpenGl_Workspace::*)( const opencascade::handle<OpenGl_TextureSet> &  ) ) static_cast<void (OpenGl_Workspace::*)( const opencascade::handle<OpenGl_TextureSet> &  ) >(&OpenGl_Workspace::SetEnvironmentTexture),
             R"#(Sets a new environment texture.)#"  , py::arg("theTexture"))
        .def("EnvironmentTexture",
             (const opencascade::handle<OpenGl_TextureSet> & (OpenGl_Workspace::*)() const) static_cast<const opencascade::handle<OpenGl_TextureSet> & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::EnvironmentTexture),
             R"#(Returns environment texture.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Workspace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Workspace::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Workspace::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_LayerList ,std::unique_ptr<OpenGl_LayerList>  >>(m.attr("OpenGl_LayerList"))
        .def(py::init< const Standard_Integer >()  , py::arg("theNbPriorities") )
        .def("NbPriorities",
             (Standard_Integer (OpenGl_LayerList::*)() const) static_cast<Standard_Integer (OpenGl_LayerList::*)() const>(&OpenGl_LayerList::NbPriorities),
             R"#(Method returns the number of available priorities)#" )
        .def("NbStructures",
             (Standard_Integer (OpenGl_LayerList::*)() const) static_cast<Standard_Integer (OpenGl_LayerList::*)() const>(&OpenGl_LayerList::NbStructures),
             R"#(Number of displayed structures)#" )
        .def("NbImmediateStructures",
             (Standard_Integer (OpenGl_LayerList::*)() const) static_cast<Standard_Integer (OpenGl_LayerList::*)() const>(&OpenGl_LayerList::NbImmediateStructures),
             R"#(Return number of structures within immediate layers)#" )
        .def("AddLayer",
             (void (OpenGl_LayerList::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_LayerList::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_LayerList::AddLayer),
             R"#(Insert a new layer with id.)#"  , py::arg("theLayerId"))
        .def("RemoveLayer",
             (void (OpenGl_LayerList::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_LayerList::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_LayerList::RemoveLayer),
             R"#(Remove layer by its id.)#"  , py::arg("theLayerId"))
        .def("AddStructure",
             (void (OpenGl_LayerList::*)( const OpenGl_Structure * ,  const Graphic3d_ZLayerId ,  const Standard_Integer ,  Standard_Boolean  ) ) static_cast<void (OpenGl_LayerList::*)( const OpenGl_Structure * ,  const Graphic3d_ZLayerId ,  const Standard_Integer ,  Standard_Boolean  ) >(&OpenGl_LayerList::AddStructure),
             R"#(Add structure to list with given priority. The structure will be inserted to specified layer. If the layer isn't found, the structure will be put to default bottom-level layer.)#"  , py::arg("theStruct"),  py::arg("theLayerId"),  py::arg("thePriority"),  py::arg("isForChangePriority")=static_cast<Standard_Boolean>(Standard_False))
        .def("RemoveStructure",
             (void (OpenGl_LayerList::*)( const OpenGl_Structure *  ) ) static_cast<void (OpenGl_LayerList::*)( const OpenGl_Structure *  ) >(&OpenGl_LayerList::RemoveStructure),
             R"#(Remove structure from structure list and return its previous priority)#"  , py::arg("theStructure"))
        .def("ChangeLayer",
             (void (OpenGl_LayerList::*)( const OpenGl_Structure * ,  const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_LayerList::*)( const OpenGl_Structure * ,  const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerId  ) >(&OpenGl_LayerList::ChangeLayer),
             R"#(Change structure z layer If the new layer is not presented, the structure will be displayed in default z layer)#"  , py::arg("theStructure"),  py::arg("theOldLayerId"),  py::arg("theNewLayerId"))
        .def("ChangePriority",
             (void (OpenGl_LayerList::*)( const OpenGl_Structure * ,  const Graphic3d_ZLayerId ,  const Standard_Integer  ) ) static_cast<void (OpenGl_LayerList::*)( const OpenGl_Structure * ,  const Graphic3d_ZLayerId ,  const Standard_Integer  ) >(&OpenGl_LayerList::ChangePriority),
             R"#(Changes structure priority within its ZLayer)#"  , py::arg("theStructure"),  py::arg("theLayerId"),  py::arg("theNewPriority"))
        .def("Layer",
             (OpenGl_Layer & (OpenGl_LayerList::*)( const Graphic3d_ZLayerId  ) ) static_cast<OpenGl_Layer & (OpenGl_LayerList::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_LayerList::Layer),
             R"#(Returns reference to the layer with given ID.)#"  , py::arg("theLayerId"))
        .def("Layer",
             (const OpenGl_Layer & (OpenGl_LayerList::*)( const Graphic3d_ZLayerId  ) const) static_cast<const OpenGl_Layer & (OpenGl_LayerList::*)( const Graphic3d_ZLayerId  ) const>(&OpenGl_LayerList::Layer),
             R"#(Returns reference to the layer with given ID.)#"  , py::arg("theLayerId"))
        .def("SetLayerSettings",
             (void (OpenGl_LayerList::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) ) static_cast<void (OpenGl_LayerList::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) >(&OpenGl_LayerList::SetLayerSettings),
             R"#(Assign new settings to the layer.)#"  , py::arg("theLayerId"),  py::arg("theSettings"))
        .def("UpdateCulling",
             (void (OpenGl_LayerList::*)( const opencascade::handle<OpenGl_Workspace> & ,  const Standard_Boolean  ) ) static_cast<void (OpenGl_LayerList::*)( const opencascade::handle<OpenGl_Workspace> & ,  const Standard_Boolean  ) >(&OpenGl_LayerList::UpdateCulling),
             R"#(Update culling state - should be called before rendering.)#"  , py::arg("theWorkspace"),  py::arg("theToDrawImmediate"))
        .def("Render",
             (void (OpenGl_LayerList::*)( const opencascade::handle<OpenGl_Workspace> & ,  const Standard_Boolean ,  const OpenGl_LayerFilter ,  OpenGl_FrameBuffer * ,  OpenGl_FrameBuffer *  ) const) static_cast<void (OpenGl_LayerList::*)( const opencascade::handle<OpenGl_Workspace> & ,  const Standard_Boolean ,  const OpenGl_LayerFilter ,  OpenGl_FrameBuffer * ,  OpenGl_FrameBuffer *  ) const>(&OpenGl_LayerList::Render),
             R"#(Render this element)#"  , py::arg("theWorkspace"),  py::arg("theToDrawImmediate"),  py::arg("theLayersToProcess"),  py::arg("theReadDrawFbo"),  py::arg("theOitAccumFbo"))
        .def("Layers",
             (const OpenGl_SequenceOfLayers & (OpenGl_LayerList::*)() const) static_cast<const OpenGl_SequenceOfLayers & (OpenGl_LayerList::*)() const>(&OpenGl_LayerList::Layers),
             R"#(Returns the set of OpenGL Z-layers.)#" )
        .def("LayerIDs",
             (const OpenGl_LayerSeqIds & (OpenGl_LayerList::*)() const) static_cast<const OpenGl_LayerSeqIds & (OpenGl_LayerList::*)() const>(&OpenGl_LayerList::LayerIDs),
             R"#(Returns the map of Z-layer IDs to indexes.)#" )
        .def("InvalidateBVHData",
             (void (OpenGl_LayerList::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_LayerList::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_LayerList::InvalidateBVHData),
             R"#(Marks BVH tree for given priority list as dirty and marks primitive set for rebuild.)#"  , py::arg("theLayerId"))
        .def("ModificationStateOfRaytracable",
             (Standard_Size (OpenGl_LayerList::*)() const) static_cast<Standard_Size (OpenGl_LayerList::*)() const>(&OpenGl_LayerList::ModificationStateOfRaytracable),
             R"#(Returns structure modification state (for ray-tracing).)#" )
        .def("FrustumCullingBVHBuilder",
             (const opencascade::handle<Select3D_BVHBuilder3d> & (OpenGl_LayerList::*)() const) static_cast<const opencascade::handle<Select3D_BVHBuilder3d> & (OpenGl_LayerList::*)() const>(&OpenGl_LayerList::FrustumCullingBVHBuilder),
             R"#(Returns BVH tree builder for frustom culling.)#" )
        .def("SetFrustumCullingBVHBuilder",
             (void (OpenGl_LayerList::*)( const opencascade::handle<Select3D_BVHBuilder3d> &  ) ) static_cast<void (OpenGl_LayerList::*)( const opencascade::handle<Select3D_BVHBuilder3d> &  ) >(&OpenGl_LayerList::SetFrustumCullingBVHBuilder),
             R"#(Assigns BVH tree builder for frustom culling.)#"  , py::arg("theBuilder"))
;


    static_cast<py::class_<OpenGl_RenderFilter ,opencascade::handle<OpenGl_RenderFilter> ,Py_OpenGl_RenderFilter , Standard_Transient >>(m.attr("OpenGl_RenderFilter"))
        .def("ShouldRender",
             (Standard_Boolean (OpenGl_RenderFilter::*)( const opencascade::handle<OpenGl_Workspace> & ,  const OpenGl_Element *  ) ) static_cast<Standard_Boolean (OpenGl_RenderFilter::*)( const opencascade::handle<OpenGl_Workspace> & ,  const OpenGl_Element *  ) >(&OpenGl_RenderFilter::ShouldRender),
             R"#(Checks whether the element can be rendered or not.)#"  , py::arg("theWorkspace"),  py::arg("theElement"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_RenderFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_RenderFilter::*)() const>(&OpenGl_RenderFilter::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_RenderFilter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_RenderFilter::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_Structure ,opencascade::handle<OpenGl_Structure>  , Graphic3d_CStructure >>(m.attr("OpenGl_Structure"))
        .def(py::init< const opencascade::handle<Graphic3d_StructureManager> & >()  , py::arg("theManager") )
        .def("OnVisibilityChanged",
             (void (OpenGl_Structure::*)() ) static_cast<void (OpenGl_Structure::*)() >(&OpenGl_Structure::OnVisibilityChanged),
             R"#(Setup structure graphic state)#" )
        .def("Clear",
             (void (OpenGl_Structure::*)() ) static_cast<void (OpenGl_Structure::*)() >(&OpenGl_Structure::Clear),
             R"#(Clear graphic data)#" )
        .def("Connect",
             (void (OpenGl_Structure::*)( Graphic3d_CStructure &  ) ) static_cast<void (OpenGl_Structure::*)( Graphic3d_CStructure &  ) >(&OpenGl_Structure::Connect),
             R"#(Connect other structure to this one)#"  , py::arg("theStructure"))
        .def("Disconnect",
             (void (OpenGl_Structure::*)( Graphic3d_CStructure &  ) ) static_cast<void (OpenGl_Structure::*)( Graphic3d_CStructure &  ) >(&OpenGl_Structure::Disconnect),
             R"#(Disconnect other structure to this one)#"  , py::arg("theStructure"))
        .def("SetTransformation",
             (void (OpenGl_Structure::*)( const opencascade::handle<Geom_Transformation> &  ) ) static_cast<void (OpenGl_Structure::*)( const opencascade::handle<Geom_Transformation> &  ) >(&OpenGl_Structure::SetTransformation),
             R"#(Synchronize structure transformation)#"  , py::arg("theTrsf"))
        .def("SetTransformPersistence",
             (void (OpenGl_Structure::*)( const opencascade::handle<Graphic3d_TransformPers> &  ) ) static_cast<void (OpenGl_Structure::*)( const opencascade::handle<Graphic3d_TransformPers> &  ) >(&OpenGl_Structure::SetTransformPersistence),
             R"#(Set transformation persistence.)#"  , py::arg("theTrsfPers"))
        .def("SetZLayer",
             (void (OpenGl_Structure::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_Structure::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_Structure::SetZLayer),
             R"#(Set z layer ID to display the structure in specified layer)#"  , py::arg("theLayerIndex"))
        .def("GraphicHighlight",
             (void (OpenGl_Structure::*)( const opencascade::handle<Graphic3d_PresentationAttributes> & ,  const opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (OpenGl_Structure::*)( const opencascade::handle<Graphic3d_PresentationAttributes> & ,  const opencascade::handle<Graphic3d_Structure> &  ) >(&OpenGl_Structure::GraphicHighlight),
             R"#(Highlights structure according to the given style and updates corresponding class fields (highlight status and style))#"  , py::arg("theStyle"),  py::arg("theStruct"))
        .def("GraphicUnhighlight",
             (void (OpenGl_Structure::*)() ) static_cast<void (OpenGl_Structure::*)() >(&OpenGl_Structure::GraphicUnhighlight),
             R"#(Unighlights structure and updates corresponding class fields (highlight status and style))#" )
        .def("ShadowLink",
             (opencascade::handle<Graphic3d_CStructure> (OpenGl_Structure::*)( const opencascade::handle<Graphic3d_StructureManager> &  ) const) static_cast<opencascade::handle<Graphic3d_CStructure> (OpenGl_Structure::*)( const opencascade::handle<Graphic3d_StructureManager> &  ) const>(&OpenGl_Structure::ShadowLink),
             R"#(Create shadow link to this structure)#"  , py::arg("theManager"))
        .def("NewGroup",
             (opencascade::handle<Graphic3d_Group> (OpenGl_Structure::*)( const opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<opencascade::handle<Graphic3d_Group> (OpenGl_Structure::*)( const opencascade::handle<Graphic3d_Structure> &  ) >(&OpenGl_Structure::NewGroup),
             R"#(Create new group within this structure)#"  , py::arg("theStruct"))
        .def("RemoveGroup",
             (void (OpenGl_Structure::*)( const opencascade::handle<Graphic3d_Group> &  ) ) static_cast<void (OpenGl_Structure::*)( const opencascade::handle<Graphic3d_Group> &  ) >(&OpenGl_Structure::RemoveGroup),
             R"#(Remove group from this structure)#"  , py::arg("theGroup"))
        .def("GlDriver",
             (OpenGl_GraphicDriver * (OpenGl_Structure::*)() const) static_cast<OpenGl_GraphicDriver * (OpenGl_Structure::*)() const>(&OpenGl_Structure::GlDriver),
             R"#(Access graphic driver)#" )
        .def("Clear",
             (void (OpenGl_Structure::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_Structure::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_Structure::Clear),
             R"#(None)#"  , py::arg("theGlCtx"))
        .def("Render",
             (void (OpenGl_Structure::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_Structure::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_Structure::Render),
             R"#(Renders the structure.)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_Structure::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_Structure::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_Structure::Release),
             R"#(Releases structure resources.)#"  , py::arg("theGlCtx"))
        .def("SetCulled",
             (void (OpenGl_Structure::*)( Standard_Boolean  ) const) static_cast<void (OpenGl_Structure::*)( Standard_Boolean  ) const>(&OpenGl_Structure::SetCulled),
             R"#(Marks structure as culled/not culled - note that IsAlwaysRendered() is ignored here!)#"  , py::arg("theIsCulled"))
        .def("MarkAsNotCulled",
             (void (OpenGl_Structure::*)() const) static_cast<void (OpenGl_Structure::*)() const>(&OpenGl_Structure::MarkAsNotCulled),
             R"#(Marks structure as overlapping the current view volume one. The method is called during traverse of BVH tree.)#" )
        .def("IsCulled",
             (Standard_Boolean (OpenGl_Structure::*)() const) static_cast<Standard_Boolean (OpenGl_Structure::*)() const>(&OpenGl_Structure::IsCulled),
             R"#(Returns Standard_False if the structure hits the current view volume, otherwise returns Standard_True. The default value for all structures before each traverse of BVH tree is Standard_True.)#" )
        .def("IsAlwaysRendered",
             (Standard_Boolean (OpenGl_Structure::*)() const) static_cast<Standard_Boolean (OpenGl_Structure::*)() const>(&OpenGl_Structure::IsAlwaysRendered),
             R"#(Checks if the structure should be included into BVH tree or not.)#" )
        .def("ReleaseGlResources",
             (void (OpenGl_Structure::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_Structure::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_Structure::ReleaseGlResources),
             R"#(This method releases GL resources without actual elements destruction. As result structure could be correctly destroyed layer without GL context (after last window was closed for example).)#"  , py::arg("theGlCtx"))
        .def("InstancedStructure",
             (const OpenGl_Structure * (OpenGl_Structure::*)() const) static_cast<const OpenGl_Structure * (OpenGl_Structure::*)() const>(&OpenGl_Structure::InstancedStructure),
             R"#(Returns instanced OpenGL structure.)#" )
        .def("ModificationState",
             (Standard_Size (OpenGl_Structure::*)() const) static_cast<Standard_Size (OpenGl_Structure::*)() const>(&OpenGl_Structure::ModificationState),
             R"#(Returns structure modification state (for ray-tracing).)#" )
        .def("ResetModificationState",
             (void (OpenGl_Structure::*)() const) static_cast<void (OpenGl_Structure::*)() const>(&OpenGl_Structure::ResetModificationState),
             R"#(Resets structure modification state (for ray-tracing).)#" )
        .def("IsRaytracable",
             (Standard_Boolean (OpenGl_Structure::*)() const) static_cast<Standard_Boolean (OpenGl_Structure::*)() const>(&OpenGl_Structure::IsRaytracable),
             R"#(Is the structure ray-tracable (contains ray-tracable elements)?)#" )
        .def("updateLayerTransformation",
             (void (OpenGl_Structure::*)() ) static_cast<void (OpenGl_Structure::*)() >(&OpenGl_Structure::updateLayerTransformation),
             R"#(Update render transformation matrix.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Structure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Structure::*)() const>(&OpenGl_Structure::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Structure::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Structure::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_Caps ,opencascade::handle<OpenGl_Caps>  , Standard_Transient >>(m.attr("OpenGl_Caps"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Caps::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Caps::*)() const>(&OpenGl_Caps::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Caps::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Caps::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_FrameStats ,opencascade::handle<OpenGl_FrameStats>  , Standard_Transient >>(m.attr("OpenGl_FrameStats"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_FrameStats::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_FrameStats::*)() const>(&OpenGl_FrameStats::DynamicType),
             R"#(None)#" )
        .def("UpdateInterval",
             (Standard_Real (OpenGl_FrameStats::*)() const) static_cast<Standard_Real (OpenGl_FrameStats::*)() const>(&OpenGl_FrameStats::UpdateInterval),
             R"#(Returns interval in seconds for updating meters across several frames; 1 second by default.)#" )
        .def("SetUpdateInterval",
             (void (OpenGl_FrameStats::*)( Standard_Real  ) ) static_cast<void (OpenGl_FrameStats::*)( Standard_Real  ) >(&OpenGl_FrameStats::SetUpdateInterval),
             R"#(Sets interval in seconds for updating values.)#"  , py::arg("theInterval"))
        .def("IsLongLineFormat",
             (Standard_Boolean (OpenGl_FrameStats::*)() const) static_cast<Standard_Boolean (OpenGl_FrameStats::*)() const>(&OpenGl_FrameStats::IsLongLineFormat),
             R"#(Prefer longer lines over more greater of lines.)#" )
        .def("SetLongLineFormat",
             (void (OpenGl_FrameStats::*)( Standard_Boolean  ) ) static_cast<void (OpenGl_FrameStats::*)( Standard_Boolean  ) >(&OpenGl_FrameStats::SetLongLineFormat),
             R"#(Set if format should prefer longer lines over greater number of lines.)#"  , py::arg("theValue"))
        .def("FrameStart",
             (void (OpenGl_FrameStats::*)( const opencascade::handle<OpenGl_Workspace> &  ) ) static_cast<void (OpenGl_FrameStats::*)( const opencascade::handle<OpenGl_Workspace> &  ) >(&OpenGl_FrameStats::FrameStart),
             R"#(Frame redraw started.)#"  , py::arg("theWorkspace")=static_cast<const opencascade::handle<OpenGl_Workspace> &>(Handle ( OpenGl_Workspace ) ( )))
        .def("FrameEnd",
             (void (OpenGl_FrameStats::*)( const opencascade::handle<OpenGl_Workspace> &  ) ) static_cast<void (OpenGl_FrameStats::*)( const opencascade::handle<OpenGl_Workspace> &  ) >(&OpenGl_FrameStats::FrameEnd),
             R"#(Frame redraw finished.)#"  , py::arg("theWorkspace")=static_cast<const opencascade::handle<OpenGl_Workspace> &>(Handle ( OpenGl_Workspace ) ( )))
        .def("FormatStats",
             (TCollection_AsciiString (OpenGl_FrameStats::*)( Graphic3d_RenderingParams::PerfCounters  ) const) static_cast<TCollection_AsciiString (OpenGl_FrameStats::*)( Graphic3d_RenderingParams::PerfCounters  ) const>(&OpenGl_FrameStats::FormatStats),
             R"#(Returns formatted string.)#"  , py::arg("theFlags"))
        .def("FrameDuration",
             (Standard_Real (OpenGl_FrameStats::*)() const) static_cast<Standard_Real (OpenGl_FrameStats::*)() const>(&OpenGl_FrameStats::FrameDuration),
             R"#(Returns duration of the last frame in seconds.)#" )
        .def("FrameRate",
             (Standard_Real (OpenGl_FrameStats::*)() const) static_cast<Standard_Real (OpenGl_FrameStats::*)() const>(&OpenGl_FrameStats::FrameRate),
             R"#(Returns FPS (frames per seconds, elapsed time). This number indicates an actual frame rate averaged for several frames within UpdateInterval() duration, basing on a real elapsed time between updates.)#" )
        .def("FrameRateCpu",
             (Standard_Real (OpenGl_FrameStats::*)() const) static_cast<Standard_Real (OpenGl_FrameStats::*)() const>(&OpenGl_FrameStats::FrameRateCpu),
             R"#(Returns CPU FPS (frames per seconds, CPU time). This number indicates a PREDICTED frame rate, basing on CPU elapsed time between updates and NOT real elapsed time (which might include periods of CPU inactivity). Number is expected to be greater then actual frame rate returned by FrameRate(). Values significantly greater actual frame rate indicate that rendering is limited by GPU performance (CPU is stalled in-between), while values around actual frame rate indicate rendering being limited by CPU performance (GPU is stalled in-between).)#" )
        .def("CounterValue",
             (Standard_Size (OpenGl_FrameStats::*)( OpenGl_FrameStats::Counter  ) const) static_cast<Standard_Size (OpenGl_FrameStats::*)( OpenGl_FrameStats::Counter  ) const>(&OpenGl_FrameStats::CounterValue),
             R"#(Returns value of specified counter, cached between stats updates. Should NOT be called between ::FrameStart() and ::FrameEnd() calls.)#"  , py::arg("theCounter"))
        .def("HasCulledLayers",
             (Standard_Boolean (OpenGl_FrameStats::*)() const) static_cast<Standard_Boolean (OpenGl_FrameStats::*)() const>(&OpenGl_FrameStats::HasCulledLayers),
             R"#(Returns TRUE if some Layers have been culled.)#" )
        .def("HasCulledStructs",
             (Standard_Boolean (OpenGl_FrameStats::*)() const) static_cast<Standard_Boolean (OpenGl_FrameStats::*)() const>(&OpenGl_FrameStats::HasCulledStructs),
             R"#(Returns TRUE if some structures have been culled.)#" )
        .def("IsEqual",
             (Standard_Boolean (OpenGl_FrameStats::*)( const opencascade::handle<OpenGl_FrameStats> &  ) const) static_cast<Standard_Boolean (OpenGl_FrameStats::*)( const opencascade::handle<OpenGl_FrameStats> &  ) const>(&OpenGl_FrameStats::IsEqual),
             R"#(Returns TRUE if this stats are equal to another.)#"  , py::arg("theOther"))
        .def("CopyFrom",
             (void (OpenGl_FrameStats::*)( const opencascade::handle<OpenGl_FrameStats> &  ) ) static_cast<void (OpenGl_FrameStats::*)( const opencascade::handle<OpenGl_FrameStats> &  ) >(&OpenGl_FrameStats::CopyFrom),
             R"#(Copy stats values from another instance)#"  , py::arg("theOther"))
        .def("ChangeCounter",
             (Standard_Size & (OpenGl_FrameStats::*)( OpenGl_FrameStats::Counter  ) ) static_cast<Standard_Size & (OpenGl_FrameStats::*)( OpenGl_FrameStats::Counter  ) >(&OpenGl_FrameStats::ChangeCounter),
             R"#(Returns value of specified counter for modification, should be called between ::FrameStart() and ::FrameEnd() calls.)#"  , py::arg("theCounter"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_FrameStats::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_FrameStats::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_AspectText ,std::unique_ptr<OpenGl_AspectText>  , OpenGl_Element >>(m.attr("OpenGl_AspectText"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Graphic3d_AspectText3d> & >()  , py::arg("theAspect") )
        .def("Aspect",
             (const opencascade::handle<Graphic3d_AspectText3d> & (OpenGl_AspectText::*)() const) static_cast<const opencascade::handle<Graphic3d_AspectText3d> & (OpenGl_AspectText::*)() const>(&OpenGl_AspectText::Aspect),
             R"#(Return text aspect.)#" )
        .def("SetAspect",
             (void (OpenGl_AspectText::*)( const opencascade::handle<Graphic3d_AspectText3d> &  ) ) static_cast<void (OpenGl_AspectText::*)( const opencascade::handle<Graphic3d_AspectText3d> &  ) >(&OpenGl_AspectText::SetAspect),
             R"#(Assign new parameters.)#"  , py::arg("theAspect"))
        .def("ShaderProgramRes",
             (const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_AspectText::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_AspectText::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_AspectText::ShaderProgramRes),
             R"#(Init and return OpenGl shader program resource.)#"  , py::arg("theCtx"))
        .def("Render",
             (void (OpenGl_AspectText::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_AspectText::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_AspectText::Render),
             R"#(None)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_AspectText::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_AspectText::*)( OpenGl_Context *  ) >(&OpenGl_AspectText::Release),
             R"#(None)#"  , py::arg("theContext"))
;


    static_cast<py::class_<OpenGl_StencilTest ,std::unique_ptr<OpenGl_StencilTest, py::nodelete>  , OpenGl_Element >>(m.attr("OpenGl_StencilTest"))
        .def(py::init<  >()  )
        .def("Render",
             (void (OpenGl_StencilTest::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_StencilTest::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_StencilTest::Render),
             R"#(Render primitives to the window)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_StencilTest::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_StencilTest::*)( OpenGl_Context *  ) >(&OpenGl_StencilTest::Release),
             R"#(None)#"  , py::arg("theContext"))
        .def("SetOptions",
             (void (OpenGl_StencilTest::*)( const Standard_Boolean  ) ) static_cast<void (OpenGl_StencilTest::*)( const Standard_Boolean  ) >(&OpenGl_StencilTest::SetOptions),
             R"#(None)#"  , py::arg("theIsEnabled"))
;


    static_cast<py::class_<OpenGl_ShaderManager ,opencascade::handle<OpenGl_ShaderManager>  , Standard_Transient >>(m.attr("OpenGl_ShaderManager"))
        .def(py::init< OpenGl_Context * >()  , py::arg("theContext") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_ShaderManager::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::DynamicType),
             R"#(None)#" )
        .def("clear",
             (void (OpenGl_ShaderManager::*)() ) static_cast<void (OpenGl_ShaderManager::*)() >(&OpenGl_ShaderManager::clear),
             R"#(Release all resources.)#" )
        .def("LocalOrigin",
             (const gp_XYZ & (OpenGl_ShaderManager::*)() const) static_cast<const gp_XYZ & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::LocalOrigin),
             R"#(Return local camera transformation.)#" )
        .def("SetLocalOrigin",
             (void (OpenGl_ShaderManager::*)( const gp_XYZ &  ) ) static_cast<void (OpenGl_ShaderManager::*)( const gp_XYZ &  ) >(&OpenGl_ShaderManager::SetLocalOrigin),
             R"#(Setup local camera transformation for compensating float precision issues.)#"  , py::arg("theOrigin"))
        .def("Create",
             (Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<Graphic3d_ShaderProgram> & ,  TCollection_AsciiString & ,  opencascade::handle<OpenGl_ShaderProgram> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<Graphic3d_ShaderProgram> & ,  TCollection_AsciiString & ,  opencascade::handle<OpenGl_ShaderProgram> &  ) >(&OpenGl_ShaderManager::Create),
             R"#(Creates new shader program or re-use shared instance.)#"  , py::arg("theProxy"),  py::arg("theShareKey"),  py::arg("theProgram"))
        .def("Unregister",
             (void (OpenGl_ShaderManager::*)( TCollection_AsciiString & ,  opencascade::handle<OpenGl_ShaderProgram> &  ) ) static_cast<void (OpenGl_ShaderManager::*)( TCollection_AsciiString & ,  opencascade::handle<OpenGl_ShaderProgram> &  ) >(&OpenGl_ShaderManager::Unregister),
             R"#(Unregisters specified shader program.)#"  , py::arg("theShareKey"),  py::arg("theProgram"))
        .def("ShaderPrograms",
             (const OpenGl_ShaderProgramList & (OpenGl_ShaderManager::*)() const) static_cast<const OpenGl_ShaderProgramList & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::ShaderPrograms),
             R"#(Returns list of registered shader programs.)#" )
        .def("IsEmpty",
             (Standard_Boolean (OpenGl_ShaderManager::*)() const) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::IsEmpty),
             R"#(Returns true if no program objects are registered in the manager.)#" )
        .def("BindFaceProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  const Graphic3d_TypeOfShadingModel ,  const Graphic3d_AlphaMode ,  const Standard_Boolean ,  const Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  const Graphic3d_TypeOfShadingModel ,  const Graphic3d_AlphaMode ,  const Standard_Boolean ,  const Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) >(&OpenGl_ShaderManager::BindFaceProgram),
             R"#(Bind program for filled primitives rendering)#"  , py::arg("theTextures"),  py::arg("theShadingModel"),  py::arg("theAlphaMode"),  py::arg("theHasVertColor"),  py::arg("theEnableEnvMap"),  py::arg("theCustomProgram"))
        .def("BindLineProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  const Aspect_TypeOfLine ,  const Graphic3d_TypeOfShadingModel ,  const Graphic3d_AlphaMode ,  const Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  const Aspect_TypeOfLine ,  const Graphic3d_TypeOfShadingModel ,  const Graphic3d_AlphaMode ,  const Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) >(&OpenGl_ShaderManager::BindLineProgram),
             R"#(Bind program for line rendering)#"  , py::arg("theTextures"),  py::arg("theLineType"),  py::arg("theShadingModel"),  py::arg("theAlphaMode"),  py::arg("theHasVertColor"),  py::arg("theCustomProgram"))
        .def("BindMarkerProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  const Graphic3d_TypeOfShadingModel ,  const Graphic3d_AlphaMode ,  const Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  const Graphic3d_TypeOfShadingModel ,  const Graphic3d_AlphaMode ,  const Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) >(&OpenGl_ShaderManager::BindMarkerProgram),
             R"#(Bind program for point rendering)#"  , py::arg("theTextures"),  py::arg("theShadingModel"),  py::arg("theAlphaMode"),  py::arg("theHasVertColor"),  py::arg("theCustomProgram"))
        .def("BindFontProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) >(&OpenGl_ShaderManager::BindFontProgram),
             R"#(Bind program for rendering alpha-textured font.)#"  , py::arg("theCustomProgram"))
        .def("BindFboBlitProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)() ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)() >(&OpenGl_ShaderManager::BindFboBlitProgram),
             R"#(Bind program for FBO blit operation.)#" )
        .def("BindOitCompositingProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const Standard_Boolean  ) >(&OpenGl_ShaderManager::BindOitCompositingProgram),
             R"#(Bind program for blended order-independent transparency buffers compositing.)#"  , py::arg("theIsMSAAEnabled"))
        .def("BindStereoProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)( const Graphic3d_StereoMode  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const Graphic3d_StereoMode  ) >(&OpenGl_ShaderManager::BindStereoProgram),
             R"#(Bind program for rendering stereoscopic image.)#"  , py::arg("theStereoMode"))
        .def("LightSourceState",
             (const OpenGl_LightSourceState & (OpenGl_ShaderManager::*)() const) static_cast<const OpenGl_LightSourceState & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::LightSourceState),
             R"#(Returns current state of OCCT light sources.)#" )
        .def("UpdateLightSourceStateTo",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<Graphic3d_LightSet> &  ) ) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<Graphic3d_LightSet> &  ) >(&OpenGl_ShaderManager::UpdateLightSourceStateTo),
             R"#(Updates state of OCCT light sources.)#"  , py::arg("theLights"))
        .def("UpdateLightSourceState",
             (void (OpenGl_ShaderManager::*)() ) static_cast<void (OpenGl_ShaderManager::*)() >(&OpenGl_ShaderManager::UpdateLightSourceState),
             R"#(Invalidate state of OCCT light sources.)#" )
        .def("PushLightSourceState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::PushLightSourceState),
             R"#(Pushes current state of OCCT light sources to specified program.)#"  , py::arg("theProgram"))
        .def("ProjectionState",
             (const OpenGl_ProjectionState & (OpenGl_ShaderManager::*)() const) static_cast<const OpenGl_ProjectionState & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::ProjectionState),
             R"#(Returns current state of OCCT projection transform.)#" )
        .def("UpdateProjectionStateTo",
             (void (OpenGl_ShaderManager::*)(  const Graphic3d_Mat4 &  ) ) static_cast<void (OpenGl_ShaderManager::*)(  const Graphic3d_Mat4 &  ) >(&OpenGl_ShaderManager::UpdateProjectionStateTo),
             R"#(Updates state of OCCT projection transform.)#"  , py::arg("theProjectionMatrix"))
        .def("PushProjectionState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::PushProjectionState),
             R"#(Pushes current state of OCCT projection transform to specified program.)#"  , py::arg("theProgram"))
        .def("ModelWorldState",
             (const OpenGl_ModelWorldState & (OpenGl_ShaderManager::*)() const) static_cast<const OpenGl_ModelWorldState & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::ModelWorldState),
             R"#(Returns current state of OCCT model-world transform.)#" )
        .def("UpdateModelWorldStateTo",
             (void (OpenGl_ShaderManager::*)(  const Graphic3d_Mat4 &  ) ) static_cast<void (OpenGl_ShaderManager::*)(  const Graphic3d_Mat4 &  ) >(&OpenGl_ShaderManager::UpdateModelWorldStateTo),
             R"#(Updates state of OCCT model-world transform.)#"  , py::arg("theModelWorldMatrix"))
        .def("PushModelWorldState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::PushModelWorldState),
             R"#(Pushes current state of OCCT model-world transform to specified program.)#"  , py::arg("theProgram"))
        .def("WorldViewState",
             (const OpenGl_WorldViewState & (OpenGl_ShaderManager::*)() const) static_cast<const OpenGl_WorldViewState & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::WorldViewState),
             R"#(Returns current state of OCCT world-view transform.)#" )
        .def("UpdateWorldViewStateTo",
             (void (OpenGl_ShaderManager::*)(  const Graphic3d_Mat4 &  ) ) static_cast<void (OpenGl_ShaderManager::*)(  const Graphic3d_Mat4 &  ) >(&OpenGl_ShaderManager::UpdateWorldViewStateTo),
             R"#(Updates state of OCCT world-view transform.)#"  , py::arg("theWorldViewMatrix"))
        .def("PushWorldViewState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::PushWorldViewState),
             R"#(Pushes current state of OCCT world-view transform to specified program.)#"  , py::arg("theProgram"))
        .def("UpdateClippingState",
             (void (OpenGl_ShaderManager::*)() ) static_cast<void (OpenGl_ShaderManager::*)() >(&OpenGl_ShaderManager::UpdateClippingState),
             R"#(Updates state of OCCT clipping planes.)#" )
        .def("RevertClippingState",
             (void (OpenGl_ShaderManager::*)() ) static_cast<void (OpenGl_ShaderManager::*)() >(&OpenGl_ShaderManager::RevertClippingState),
             R"#(Reverts state of OCCT clipping planes.)#" )
        .def("PushClippingState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::PushClippingState),
             R"#(Pushes current state of OCCT clipping planes to specified program.)#"  , py::arg("theProgram"))
        .def("MaterialState",
             (const OpenGl_MaterialState & (OpenGl_ShaderManager::*)() const) static_cast<const OpenGl_MaterialState & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::MaterialState),
             R"#(Returns current state of material.)#" )
        .def("UpdateMaterialStateTo",
             (void (OpenGl_ShaderManager::*)( const OpenGl_Material & ,  const OpenGl_Material & ,  const float ,  const bool ,  const bool  ) ) static_cast<void (OpenGl_ShaderManager::*)( const OpenGl_Material & ,  const OpenGl_Material & ,  const float ,  const bool ,  const bool  ) >(&OpenGl_ShaderManager::UpdateMaterialStateTo),
             R"#(Updates state of material.)#"  , py::arg("theFrontMat"),  py::arg("theBackMat"),  py::arg("theAlphaCutoff"),  py::arg("theToDistinguish"),  py::arg("theToMapTexture"))
        .def("UpdateMaterialState",
             (void (OpenGl_ShaderManager::*)() ) static_cast<void (OpenGl_ShaderManager::*)() >(&OpenGl_ShaderManager::UpdateMaterialState),
             R"#(Updates state of material.)#" )
        .def("PushMaterialState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::PushMaterialState),
             R"#(Pushes current state of material to specified program.)#"  , py::arg("theProgram"))
        .def("OitState",
             (const OpenGl_OitState & (OpenGl_ShaderManager::*)() const) static_cast<const OpenGl_OitState & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::OitState),
             R"#(Returns state of OIT uniforms.)#" )
        .def("SetOitState",
             (void (OpenGl_ShaderManager::*)( const bool ,  const float  ) ) static_cast<void (OpenGl_ShaderManager::*)( const bool ,  const float  ) >(&OpenGl_ShaderManager::SetOitState),
             R"#(Set the state of OIT rendering pass.)#"  , py::arg("theToEnableOitWrite"),  py::arg("theDepthFactor"))
        .def("PushOitState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::PushOitState),
             R"#(Pushes state of OIT uniforms to the specified program.)#"  , py::arg("theProgram"))
        .def("PushState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::PushState),
             R"#(Pushes current state of OCCT graphics parameters to specified program.)#"  , py::arg("theProgram"))
        .def("SetContext",
             (void (OpenGl_ShaderManager::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_ShaderManager::*)( OpenGl_Context *  ) >(&OpenGl_ShaderManager::SetContext),
             R"#(Overwrites context)#"  , py::arg("theCtx"))
        .def("IsSameContext",
             (bool (OpenGl_ShaderManager::*)( OpenGl_Context *  ) const) static_cast<bool (OpenGl_ShaderManager::*)( OpenGl_Context *  ) const>(&OpenGl_ShaderManager::IsSameContext),
             R"#(Returns true when provided context is the same as used one by shader manager.)#"  , py::arg("theCtx"))
        .def("ChooseFaceShadingModel",
             (Graphic3d_TypeOfShadingModel (OpenGl_ShaderManager::*)( Graphic3d_TypeOfShadingModel ,  bool  ) const) static_cast<Graphic3d_TypeOfShadingModel (OpenGl_ShaderManager::*)( Graphic3d_TypeOfShadingModel ,  bool  ) const>(&OpenGl_ShaderManager::ChooseFaceShadingModel),
             R"#(Choose Shading Model for filled primitives. Fallbacks to FACET model if there are no normal attributes.)#"  , py::arg("theCustomModel"),  py::arg("theHasNodalNormals"))
        .def("ChooseLineShadingModel",
             (Graphic3d_TypeOfShadingModel (OpenGl_ShaderManager::*)( Graphic3d_TypeOfShadingModel ,  bool  ) const) static_cast<Graphic3d_TypeOfShadingModel (OpenGl_ShaderManager::*)( Graphic3d_TypeOfShadingModel ,  bool  ) const>(&OpenGl_ShaderManager::ChooseLineShadingModel),
             R"#(Choose Shading Model for line primitives. Fallbacks to UNLIT model if there are no normal attributes.)#"  , py::arg("theCustomModel"),  py::arg("theHasNodalNormals"))
        .def("ChooseMarkerShadingModel",
             (Graphic3d_TypeOfShadingModel (OpenGl_ShaderManager::*)( Graphic3d_TypeOfShadingModel ,  bool  ) const) static_cast<Graphic3d_TypeOfShadingModel (OpenGl_ShaderManager::*)( Graphic3d_TypeOfShadingModel ,  bool  ) const>(&OpenGl_ShaderManager::ChooseMarkerShadingModel),
             R"#(Choose Shading Model for Marker primitives.)#"  , py::arg("theCustomModel"),  py::arg("theHasNodalNormals"))
        .def("ShadingModel",
             (Graphic3d_TypeOfShadingModel (OpenGl_ShaderManager::*)() const) static_cast<Graphic3d_TypeOfShadingModel (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::ShadingModel),
             R"#(Returns default Shading Model.)#" )
        .def("SetShadingModel",
             (void (OpenGl_ShaderManager::*)( const Graphic3d_TypeOfShadingModel  ) ) static_cast<void (OpenGl_ShaderManager::*)( const Graphic3d_TypeOfShadingModel  ) >(&OpenGl_ShaderManager::SetShadingModel),
             R"#(Sets shading model.)#"  , py::arg("theModel"))
        .def("SetLastView",
             (void (OpenGl_ShaderManager::*)( const OpenGl_View *  ) ) static_cast<void (OpenGl_ShaderManager::*)( const OpenGl_View *  ) >(&OpenGl_ShaderManager::SetLastView),
             R"#(Sets last view manger used with. Helps to handle matrix states in multi-view configurations.)#"  , py::arg("theLastView"))
        .def("IsSameView",
             (bool (OpenGl_ShaderManager::*)( const OpenGl_View *  ) const) static_cast<bool (OpenGl_ShaderManager::*)( const OpenGl_View *  ) const>(&OpenGl_ShaderManager::IsSameView),
             R"#(Returns true when provided view is the same as cached one.)#"  , py::arg("theView"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_ShaderManager::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_ShaderManager::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_AspectMarker ,std::unique_ptr<OpenGl_AspectMarker>  , OpenGl_Element >>(m.attr("OpenGl_AspectMarker"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Graphic3d_AspectMarker3d> & >()  , py::arg("theAspect") )
        .def("Aspect",
             (const opencascade::handle<Graphic3d_AspectMarker3d> & (OpenGl_AspectMarker::*)() const) static_cast<const opencascade::handle<Graphic3d_AspectMarker3d> & (OpenGl_AspectMarker::*)() const>(&OpenGl_AspectMarker::Aspect),
             R"#(Return the aspect.)#" )
        .def("SetAspect",
             (void (OpenGl_AspectMarker::*)( const opencascade::handle<Graphic3d_AspectMarker3d> &  ) ) static_cast<void (OpenGl_AspectMarker::*)( const opencascade::handle<Graphic3d_AspectMarker3d> &  ) >(&OpenGl_AspectMarker::SetAspect),
             R"#(Assign new aspect.)#"  , py::arg("theAspect"))
        .def("MarkerSize",
             (Standard_ShortReal (OpenGl_AspectMarker::*)() const) static_cast<Standard_ShortReal (OpenGl_AspectMarker::*)() const>(&OpenGl_AspectMarker::MarkerSize),
             R"#(Returns marker size)#" )
        .def("SpriteRes",
             (const opencascade::handle<OpenGl_TextureSet> & (OpenGl_AspectMarker::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<const opencascade::handle<OpenGl_TextureSet> & (OpenGl_AspectMarker::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_AspectMarker::SpriteRes),
             R"#(Init and return OpenGl point sprite resource.)#"  , py::arg("theCtx"))
        .def("SpriteHighlightRes",
             (const opencascade::handle<OpenGl_TextureSet> & (OpenGl_AspectMarker::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<const opencascade::handle<OpenGl_TextureSet> & (OpenGl_AspectMarker::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_AspectMarker::SpriteHighlightRes),
             R"#(Init and return OpenGl highlight point sprite resource.)#"  , py::arg("theCtx"))
        .def("ShaderProgramRes",
             (const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_AspectMarker::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_AspectMarker::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_AspectMarker::ShaderProgramRes),
             R"#(Init and return OpenGl shader program resource.)#"  , py::arg("theCtx"))
        .def("Render",
             (void (OpenGl_AspectMarker::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_AspectMarker::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_AspectMarker::Render),
             R"#(None)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_AspectMarker::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_AspectMarker::*)( OpenGl_Context *  ) >(&OpenGl_AspectMarker::Release),
             R"#(None)#"  , py::arg("theContext"))
;


    static_cast<py::class_<OpenGl_AspectFace ,std::unique_ptr<OpenGl_AspectFace>  , OpenGl_Element >>(m.attr("OpenGl_AspectFace"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Graphic3d_AspectFillArea3d> & >()  , py::arg("theAspect") )
        .def("Aspect",
             (const opencascade::handle<Graphic3d_AspectFillArea3d> & (OpenGl_AspectFace::*)() const) static_cast<const opencascade::handle<Graphic3d_AspectFillArea3d> & (OpenGl_AspectFace::*)() const>(&OpenGl_AspectFace::Aspect),
             R"#(Return aspect.)#" )
        .def("SetAspect",
             (void (OpenGl_AspectFace::*)( const opencascade::handle<Graphic3d_AspectFillArea3d> &  ) ) static_cast<void (OpenGl_AspectFace::*)( const opencascade::handle<Graphic3d_AspectFillArea3d> &  ) >(&OpenGl_AspectFace::SetAspect),
             R"#(Assign parameters.)#"  , py::arg("theAspect"))
        .def("SetAspectEdge",
             (void (OpenGl_AspectFace::*)( const OpenGl_AspectLine *  ) ) static_cast<void (OpenGl_AspectFace::*)( const OpenGl_AspectLine *  ) >(&OpenGl_AspectFace::SetAspectEdge),
             R"#(Set edge aspect.)#"  , py::arg("theAspectEdge"))
        .def("AspectEdge",
             (const OpenGl_AspectLine * (OpenGl_AspectFace::*)() const) static_cast<const OpenGl_AspectLine * (OpenGl_AspectFace::*)() const>(&OpenGl_AspectFace::AspectEdge),
             R"#(Returns edge aspect.)#" )
        .def("ShadingModel",
             (Graphic3d_TypeOfShadingModel (OpenGl_AspectFace::*)() const) static_cast<Graphic3d_TypeOfShadingModel (OpenGl_AspectFace::*)() const>(&OpenGl_AspectFace::ShadingModel),
             R"#(Returns Shading Model.)#" )
        .def("SetNoLighting",
             (void (OpenGl_AspectFace::*)() ) static_cast<void (OpenGl_AspectFace::*)() >(&OpenGl_AspectFace::SetNoLighting),
             R"#(Set if lighting should be disabled or not.)#" )
        .def("TextureSet",
             (const opencascade::handle<OpenGl_TextureSet> & (OpenGl_AspectFace::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<const opencascade::handle<OpenGl_TextureSet> & (OpenGl_AspectFace::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_AspectFace::TextureSet),
             R"#(Returns textures map.)#"  , py::arg("theCtx"))
        .def("ShaderProgramRes",
             (const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_AspectFace::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_AspectFace::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_AspectFace::ShaderProgramRes),
             R"#(Init and return OpenGl shader program resource.)#"  , py::arg("theCtx"))
        .def("Render",
             (void (OpenGl_AspectFace::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_AspectFace::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_AspectFace::Render),
             R"#(None)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_AspectFace::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_AspectFace::*)( OpenGl_Context *  ) >(&OpenGl_AspectFace::Release),
             R"#(None)#"  , py::arg("theContext"))
;


    static_cast<py::class_<OpenGl_Resource ,opencascade::handle<OpenGl_Resource> ,Py_OpenGl_Resource , Standard_Transient >>(m.attr("OpenGl_Resource"))
        .def(py::init<  >()  )
        .def("Release",
             (void (OpenGl_Resource::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_Resource::*)( OpenGl_Context *  ) >(&OpenGl_Resource::Release),
             R"#(Release GPU resources. Notice that implementation should be SAFE for several consecutive calls (thus should invalidate internal structures / ids to avoid multiple-free errors).)#"  , py::arg("theGlCtx"))
        .def("EstimatedDataSize",
             (Standard_Size (OpenGl_Resource::*)() const) static_cast<Standard_Size (OpenGl_Resource::*)() const>(&OpenGl_Resource::EstimatedDataSize),
             R"#(Returns estimated GPU memory usage for holding data without considering overheads and allocation alignment rules.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Resource::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Resource::*)() const>(&OpenGl_Resource::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Resource::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Resource::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_PrimitiveArray ,std::unique_ptr<OpenGl_PrimitiveArray>  , OpenGl_Element >>(m.attr("OpenGl_PrimitiveArray"))
        .def(py::init< const OpenGl_GraphicDriver * >()  , py::arg("theDriver") )
        .def(py::init< const OpenGl_GraphicDriver *,const Graphic3d_TypeOfPrimitiveArray,const opencascade::handle<Graphic3d_IndexBuffer> &,const opencascade::handle<Graphic3d_Buffer> &,const opencascade::handle<Graphic3d_BoundBuffer> & >()  , py::arg("theDriver"),  py::arg("theType"),  py::arg("theIndices"),  py::arg("theAttribs"),  py::arg("theBounds") )
        .def("Render",
             (void (OpenGl_PrimitiveArray::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_PrimitiveArray::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_PrimitiveArray::Render),
             R"#(Render primitives to the window)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_PrimitiveArray::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_PrimitiveArray::*)( OpenGl_Context *  ) >(&OpenGl_PrimitiveArray::Release),
             R"#(Release OpenGL resources (VBOs))#"  , py::arg("theContext"))
        .def("IsInitialized",
             (Standard_Boolean (OpenGl_PrimitiveArray::*)() const) static_cast<Standard_Boolean (OpenGl_PrimitiveArray::*)() const>(&OpenGl_PrimitiveArray::IsInitialized),
             R"#(Return true if VBOs initialization has been performed. VBO initialization is performed during first Render() call. Notice that this flag does not indicate VBOs validity.)#" )
        .def("Invalidate",
             (void (OpenGl_PrimitiveArray::*)() const) static_cast<void (OpenGl_PrimitiveArray::*)() const>(&OpenGl_PrimitiveArray::Invalidate),
             R"#(Invalidate VBO content without destruction.)#" )
        .def("DrawMode",
             (GLint (OpenGl_PrimitiveArray::*)() const) static_cast<GLint (OpenGl_PrimitiveArray::*)() const>(&OpenGl_PrimitiveArray::DrawMode),
             R"#(Returns primitive type (GL_LINES, GL_TRIANGLES and others))#" )
        .def("IsFillDrawMode",
             (Standard_Boolean (OpenGl_PrimitiveArray::*)() const) static_cast<Standard_Boolean (OpenGl_PrimitiveArray::*)() const>(&OpenGl_PrimitiveArray::IsFillDrawMode),
             R"#(Return TRUE if primitive type generates shaded triangulation.)#" )
        .def("Indices",
             (const opencascade::handle<Graphic3d_IndexBuffer> & (OpenGl_PrimitiveArray::*)() const) static_cast<const opencascade::handle<Graphic3d_IndexBuffer> & (OpenGl_PrimitiveArray::*)() const>(&OpenGl_PrimitiveArray::Indices),
             R"#(Returns indices array)#" )
        .def("Attributes",
             (const opencascade::handle<Graphic3d_Buffer> & (OpenGl_PrimitiveArray::*)() const) static_cast<const opencascade::handle<Graphic3d_Buffer> & (OpenGl_PrimitiveArray::*)() const>(&OpenGl_PrimitiveArray::Attributes),
             R"#(Returns attributes array)#" )
        .def("Bounds",
             (const opencascade::handle<Graphic3d_BoundBuffer> & (OpenGl_PrimitiveArray::*)() const) static_cast<const opencascade::handle<Graphic3d_BoundBuffer> & (OpenGl_PrimitiveArray::*)() const>(&OpenGl_PrimitiveArray::Bounds),
             R"#(Returns bounds array)#" )
        .def("GetUID",
             (Standard_Size (OpenGl_PrimitiveArray::*)() const) static_cast<Standard_Size (OpenGl_PrimitiveArray::*)() const>(&OpenGl_PrimitiveArray::GetUID),
             R"#(Returns unique ID of primitive array.)#" )
        .def("InitBuffers",
             (void (OpenGl_PrimitiveArray::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TypeOfPrimitiveArray ,  const opencascade::handle<Graphic3d_IndexBuffer> & ,  const opencascade::handle<Graphic3d_Buffer> & ,  const opencascade::handle<Graphic3d_BoundBuffer> &  ) ) static_cast<void (OpenGl_PrimitiveArray::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TypeOfPrimitiveArray ,  const opencascade::handle<Graphic3d_IndexBuffer> & ,  const opencascade::handle<Graphic3d_Buffer> & ,  const opencascade::handle<Graphic3d_BoundBuffer> &  ) >(&OpenGl_PrimitiveArray::InitBuffers),
             R"#(Initialize indices, attributes and bounds with new data.)#"  , py::arg("theContext"),  py::arg("theType"),  py::arg("theIndices"),  py::arg("theAttribs"),  py::arg("theBounds"))
        .def("IndexVbo",
             (const opencascade::handle<OpenGl_VertexBuffer> & (OpenGl_PrimitiveArray::*)() const) static_cast<const opencascade::handle<OpenGl_VertexBuffer> & (OpenGl_PrimitiveArray::*)() const>(&OpenGl_PrimitiveArray::IndexVbo),
             R"#(Returns index VBO.)#" )
        .def("AttributesVbo",
             (const opencascade::handle<OpenGl_VertexBuffer> & (OpenGl_PrimitiveArray::*)() const) static_cast<const opencascade::handle<OpenGl_VertexBuffer> & (OpenGl_PrimitiveArray::*)() const>(&OpenGl_PrimitiveArray::AttributesVbo),
             R"#(Returns attributes VBO.)#" )
;


    static_cast<py::class_<OpenGl_FrameBuffer ,opencascade::handle<OpenGl_FrameBuffer>  , OpenGl_Resource >>(m.attr("OpenGl_FrameBuffer"))
        .def(py::init<  >()  )
        .def("Release",
             (void (OpenGl_FrameBuffer::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_FrameBuffer::*)( OpenGl_Context *  ) >(&OpenGl_FrameBuffer::Release),
             R"#(Destroy object - will release GPU memory if any.)#"  , py::arg("theGlCtx"))
        .def("NbSamples",
             (GLsizei (OpenGl_FrameBuffer::*)() const) static_cast<GLsizei (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::NbSamples),
             R"#(Number of multisampling samples.)#" )
        .def("NbColorBuffers",
             (GLsizei (OpenGl_FrameBuffer::*)() const) static_cast<GLsizei (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::NbColorBuffers),
             R"#(Number of color buffers.)#" )
        .def("HasColor",
             (bool (OpenGl_FrameBuffer::*)() const) static_cast<bool (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::HasColor),
             R"#(Return true if FBO has been created with color attachment.)#" )
        .def("HasDepth",
             (bool (OpenGl_FrameBuffer::*)() const) static_cast<bool (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::HasDepth),
             R"#(Return true if FBO has been created with depth attachment.)#" )
        .def("GetSizeX",
             (GLsizei (OpenGl_FrameBuffer::*)() const) static_cast<GLsizei (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::GetSizeX),
             R"#(Textures width.)#" )
        .def("GetSizeY",
             (GLsizei (OpenGl_FrameBuffer::*)() const) static_cast<GLsizei (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::GetSizeY),
             R"#(Textures height.)#" )
        .def("GetVPSizeX",
             (GLsizei (OpenGl_FrameBuffer::*)() const) static_cast<GLsizei (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::GetVPSizeX),
             R"#(Viewport width.)#" )
        .def("GetVPSizeY",
             (GLsizei (OpenGl_FrameBuffer::*)() const) static_cast<GLsizei (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::GetVPSizeY),
             R"#(Viewport height.)#" )
        .def("GetInitVPSizeX",
             (GLsizei (OpenGl_FrameBuffer::*)() const) static_cast<GLsizei (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::GetInitVPSizeX),
             R"#(Viewport width.)#" )
        .def("GetInitVPSizeY",
             (GLsizei (OpenGl_FrameBuffer::*)() const) static_cast<GLsizei (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::GetInitVPSizeY),
             R"#(Viewport height.)#" )
        .def("IsValid",
             (Standard_Boolean (OpenGl_FrameBuffer::*)() const) static_cast<Standard_Boolean (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::IsValid),
             R"#(Returns true if current object was initialized)#" )
        .def("Init",
             (Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,   const NCollection_Vector<GLint> & ,  const opencascade::handle<OpenGl_Texture> & ,  const GLsizei  ) ) static_cast<Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,   const NCollection_Vector<GLint> & ,  const opencascade::handle<OpenGl_Texture> & ,  const GLsizei  ) >(&OpenGl_FrameBuffer::Init),
             R"#(Initialize FBO for rendering into single/multiple color buffer and depth textures.)#"  , py::arg("theGlCtx"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theColorFormats"),  py::arg("theDepthStencilTexture"),  py::arg("theNbSamples")=static_cast<const GLsizei>(0))
        .def("Init",
             (Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLint ,  const GLint ,  const GLsizei  ) ) static_cast<Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLint ,  const GLint ,  const GLsizei  ) >(&OpenGl_FrameBuffer::Init),
             R"#(Initialize FBO for rendering into textures.)#"  , py::arg("theGlCtx"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theColorFormat"),  py::arg("theDepthFormat"),  py::arg("theNbSamples")=static_cast<const GLsizei>(0))
        .def("Init",
             (Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,   const NCollection_Vector<GLint> & ,  const GLint ,  const GLsizei  ) ) static_cast<Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,   const NCollection_Vector<GLint> & ,  const GLint ,  const GLsizei  ) >(&OpenGl_FrameBuffer::Init),
             R"#(Initialize FBO for rendering into single/multiple color buffer and depth textures.)#"  , py::arg("theGlCtx"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theColorFormats"),  py::arg("theDepthFormat"),  py::arg("theNbSamples")=static_cast<const GLsizei>(0))
        .def("InitLazy",
             (Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLint ,  const GLint ,  const GLsizei  ) ) static_cast<Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLint ,  const GLint ,  const GLsizei  ) >(&OpenGl_FrameBuffer::InitLazy),
             R"#((Re-)initialize FBO with specified dimensions.)#"  , py::arg("theGlCtx"),  py::arg("theViewportSizeX"),  py::arg("theViewportSizeY"),  py::arg("theColorFormat"),  py::arg("theDepthFormat"),  py::arg("theNbSamples")=static_cast<const GLsizei>(0))
        .def("InitLazy",
             (Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,   const NCollection_Vector<GLint> & ,  const GLint ,  const GLsizei  ) ) static_cast<Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,   const NCollection_Vector<GLint> & ,  const GLint ,  const GLsizei  ) >(&OpenGl_FrameBuffer::InitLazy),
             R"#((Re-)initialize FBO with specified dimensions.)#"  , py::arg("theGlCtx"),  py::arg("theViewportSizeX"),  py::arg("theViewportSizeY"),  py::arg("theColorFormats"),  py::arg("theDepthFormat"),  py::arg("theNbSamples")=static_cast<const GLsizei>(0))
        .def("InitLazy",
             (Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const OpenGl_FrameBuffer &  ) ) static_cast<Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const OpenGl_FrameBuffer &  ) >(&OpenGl_FrameBuffer::InitLazy),
             R"#((Re-)initialize FBO with properties taken from another FBO.)#"  , py::arg("theGlCtx"),  py::arg("theFbo"))
        .def("InitWithRB",
             (Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLint ,  const GLint ,  const GLuint  ) ) static_cast<Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLint ,  const GLint ,  const GLuint  ) >(&OpenGl_FrameBuffer::InitWithRB),
             R"#((Re-)initialize FBO with specified dimensions. The Render Buffer Objects will be used for Color, Depth and Stencil attachments (as opposite to textures).)#"  , py::arg("theGlCtx"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theColorFormat"),  py::arg("theDepthFormat"),  py::arg("theColorRBufferFromWindow")=static_cast<const GLuint>(0))
        .def("InitWrapper",
             (Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<Standard_Boolean (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_FrameBuffer::InitWrapper),
             R"#(Initialize class from currently bound FBO. Retrieved OpenGL objects will not be destroyed on Release.)#"  , py::arg("theGlCtx"))
        .def("SetupViewport",
             (void (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_FrameBuffer::SetupViewport),
             R"#(Setup viewport to render into FBO)#"  , py::arg("theGlCtx"))
        .def("ChangeViewport",
             (void (OpenGl_FrameBuffer::*)( const GLsizei ,  const GLsizei  ) ) static_cast<void (OpenGl_FrameBuffer::*)( const GLsizei ,  const GLsizei  ) >(&OpenGl_FrameBuffer::ChangeViewport),
             R"#(Override viewport settings)#"  , py::arg("theVPSizeX"),  py::arg("theVPSizeY"))
        .def("BindBuffer",
             (void (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_FrameBuffer::BindBuffer),
             R"#(Bind frame buffer for drawing and reading (to render into the texture).)#"  , py::arg("theGlCtx"))
        .def("BindDrawBuffer",
             (void (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_FrameBuffer::BindDrawBuffer),
             R"#(Bind frame buffer for drawing GL_DRAW_FRAMEBUFFER (to render into the texture).)#"  , py::arg("theGlCtx"))
        .def("BindReadBuffer",
             (void (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_FrameBuffer::BindReadBuffer),
             R"#(Bind frame buffer for reading GL_READ_FRAMEBUFFER)#"  , py::arg("theGlCtx"))
        .def("UnbindBuffer",
             (void (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_FrameBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_FrameBuffer::UnbindBuffer),
             R"#(Unbind frame buffer.)#"  , py::arg("theGlCtx"))
        .def("ColorTexture",
             (const opencascade::handle<OpenGl_Texture> & (OpenGl_FrameBuffer::*)( const GLint  ) const) static_cast<const opencascade::handle<OpenGl_Texture> & (OpenGl_FrameBuffer::*)( const GLint  ) const>(&OpenGl_FrameBuffer::ColorTexture),
             R"#(Returns the color texture for the given color buffer index.)#"  , py::arg("theColorBufferIndex")=static_cast<const GLint>(0))
        .def("DepthStencilTexture",
             (const opencascade::handle<OpenGl_Texture> & (OpenGl_FrameBuffer::*)() const) static_cast<const opencascade::handle<OpenGl_Texture> & (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::DepthStencilTexture),
             R"#(Returns the depth-stencil texture.)#" )
        .def("ColorRenderBuffer",
             (GLuint (OpenGl_FrameBuffer::*)() const) static_cast<GLuint (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::ColorRenderBuffer),
             R"#(Returns the color Render Buffer.)#" )
        .def("DepthStencilRenderBuffer",
             (GLuint (OpenGl_FrameBuffer::*)() const) static_cast<GLuint (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::DepthStencilRenderBuffer),
             R"#(Returns the depth Render Buffer.)#" )
        .def("EstimatedDataSize",
             (Standard_Size (OpenGl_FrameBuffer::*)() const) static_cast<Standard_Size (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::EstimatedDataSize),
             R"#(Returns estimated GPU memory usage for holding data without considering overheads and allocation alignment rules.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_FrameBuffer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_FrameBuffer::*)() const>(&OpenGl_FrameBuffer::DynamicType),
             R"#(None)#" )
        .def_static("BufferDump_s",
                    (Standard_Boolean (*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_FrameBuffer> & ,  Image_PixMap & ,  Graphic3d_BufferType  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_FrameBuffer> & ,  Image_PixMap & ,  Graphic3d_BufferType  ) >(&OpenGl_FrameBuffer::BufferDump),
                    R"#(Dump content into image.)#"  , py::arg("theGlCtx"),  py::arg("theFbo"),  py::arg("theImage"),  py::arg("theBufferType"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_FrameBuffer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_FrameBuffer::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_CappingAlgoFilter ,opencascade::handle<OpenGl_CappingAlgoFilter>  , OpenGl_RenderFilter >>(m.attr("OpenGl_CappingAlgoFilter"))
        .def(py::init<  >()  )
        .def("SetPreviousFilter",
             (void (OpenGl_CappingAlgoFilter::*)( const opencascade::handle<OpenGl_RenderFilter> &  ) ) static_cast<void (OpenGl_CappingAlgoFilter::*)( const opencascade::handle<OpenGl_RenderFilter> &  ) >(&OpenGl_CappingAlgoFilter::SetPreviousFilter),
             R"#(Sets the current active filter in workspace.)#"  , py::arg("thePrevFitler"))
        .def("ShouldRender",
             (Standard_Boolean (OpenGl_CappingAlgoFilter::*)( const opencascade::handle<OpenGl_Workspace> & ,  const OpenGl_Element *  ) ) static_cast<Standard_Boolean (OpenGl_CappingAlgoFilter::*)( const opencascade::handle<OpenGl_Workspace> & ,  const OpenGl_Element *  ) >(&OpenGl_CappingAlgoFilter::ShouldRender),
             R"#(Checks whether the element can be rendered or not.)#"  , py::arg("theWorkspace"),  py::arg("theGlElement"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_CappingAlgoFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_CappingAlgoFilter::*)() const>(&OpenGl_CappingAlgoFilter::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_CappingAlgoFilter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_CappingAlgoFilter::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_ShaderObject ,opencascade::handle<OpenGl_ShaderObject>  , OpenGl_Resource >>(m.attr("OpenGl_ShaderObject"))
        .def(py::init< GLenum >()  , py::arg("theType") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_ShaderObject::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_ShaderObject::*)() const>(&OpenGl_ShaderObject::DynamicType),
             R"#(None)#" )
        .def("LoadSource",
             (Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_AsciiString &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_AsciiString &  ) >(&OpenGl_ShaderObject::LoadSource),
             R"#(Loads shader source code.)#"  , py::arg("theCtx"),  py::arg("theSource"))
        .def("Compile",
             (Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_ShaderObject::Compile),
             R"#(Compiles the shader object.)#"  , py::arg("theCtx"))
        .def("FetchInfoLog",
             (Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> & ,  TCollection_AsciiString &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> & ,  TCollection_AsciiString &  ) >(&OpenGl_ShaderObject::FetchInfoLog),
             R"#(Fetches information log of the last compile operation.)#"  , py::arg("theCtx"),  py::arg("theLog"))
        .def("Create",
             (Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_ShaderObject::Create),
             R"#(Creates new empty shader object of specified type.)#"  , py::arg("theCtx"))
        .def("Release",
             (void (OpenGl_ShaderObject::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_ShaderObject::*)( OpenGl_Context *  ) >(&OpenGl_ShaderObject::Release),
             R"#(Destroys shader object.)#"  , py::arg("theCtx"))
        .def("EstimatedDataSize",
             (Standard_Size (OpenGl_ShaderObject::*)() const) static_cast<Standard_Size (OpenGl_ShaderObject::*)() const>(&OpenGl_ShaderObject::EstimatedDataSize),
             R"#(Returns estimated GPU memory usage - not implemented.)#" )
        .def("Type",
             (GLenum (OpenGl_ShaderObject::*)() const) static_cast<GLenum (OpenGl_ShaderObject::*)() const>(&OpenGl_ShaderObject::Type),
             R"#(Returns type of shader object.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_ShaderObject::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_ShaderObject::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_StructureShadow ,opencascade::handle<OpenGl_StructureShadow>  , OpenGl_Structure >>(m.attr("OpenGl_StructureShadow"))
        .def(py::init< const opencascade::handle<Graphic3d_StructureManager> &,const opencascade::handle<OpenGl_Structure> & >()  , py::arg("theManager"),  py::arg("theStructure") )
        .def("Connect",
             (void (OpenGl_StructureShadow::*)( Graphic3d_CStructure &  ) ) static_cast<void (OpenGl_StructureShadow::*)( Graphic3d_CStructure &  ) >(&OpenGl_StructureShadow::Connect),
             R"#(Raise exception on API misuse.)#"  , py::arg(""))
        .def("Disconnect",
             (void (OpenGl_StructureShadow::*)( Graphic3d_CStructure &  ) ) static_cast<void (OpenGl_StructureShadow::*)( Graphic3d_CStructure &  ) >(&OpenGl_StructureShadow::Disconnect),
             R"#(Raise exception on API misuse.)#"  , py::arg(""))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_StructureShadow::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_StructureShadow::*)() const>(&OpenGl_StructureShadow::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_StructureShadow::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_StructureShadow::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_Text ,std::unique_ptr<OpenGl_Text, py::nodelete>  , OpenGl_Element >>(m.attr("OpenGl_Text"))
        .def(py::init< const Standard_Utf8Char *, const Graphic3d_Vec3 &,const OpenGl_TextParam & >()  , py::arg("theText"),  py::arg("thePoint"),  py::arg("theParams") )
        .def(py::init< const Standard_Utf8Char *,const gp_Ax2 &,const OpenGl_TextParam &,const bool >()  , py::arg("theText"),  py::arg("theOrientation"),  py::arg("theParams"),  py::arg("theHasOwnAnchor")=static_cast<const bool>(true) )
        .def(py::init<  >()  )
        .def("Init",
             (void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Utf8Char * ,   const Graphic3d_Vec3 &  ) ) static_cast<void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Utf8Char * ,   const Graphic3d_Vec3 &  ) >(&OpenGl_Text::Init),
             R"#(Setup new string and position)#"  , py::arg("theCtx"),  py::arg("theText"),  py::arg("thePoint"))
        .def("Init",
             (void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Utf8Char * ,   const Graphic3d_Vec3 & ,  const OpenGl_TextParam &  ) ) static_cast<void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Utf8Char * ,   const Graphic3d_Vec3 & ,  const OpenGl_TextParam &  ) >(&OpenGl_Text::Init),
             R"#(Setup new string and parameters)#"  , py::arg("theCtx"),  py::arg("theText"),  py::arg("thePoint"),  py::arg("theParams"))
        .def("SetPosition",
             (void (OpenGl_Text::*)(  const Graphic3d_Vec3 &  ) ) static_cast<void (OpenGl_Text::*)(  const Graphic3d_Vec3 &  ) >(&OpenGl_Text::SetPosition),
             R"#(Setup new position)#"  , py::arg("thePoint"))
        .def("SetFontSize",
             (void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Integer  ) ) static_cast<void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Integer  ) >(&OpenGl_Text::SetFontSize),
             R"#(Setup new font size)#"  , py::arg("theContext"),  py::arg("theFontSize"))
        .def("Render",
             (void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_Text::Render),
             R"#(None)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_Text::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_Text::*)( OpenGl_Context *  ) >(&OpenGl_Text::Release),
             R"#(None)#"  , py::arg("theContext"))
        .def("Init",
             (void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_ExtendedString & ,   const Graphic3d_Vec2 & ,  const OpenGl_TextParam &  ) ) static_cast<void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_ExtendedString & ,   const Graphic3d_Vec2 & ,  const OpenGl_TextParam &  ) >(&OpenGl_Text::Init),
             R"#(Setup new string and parameters)#"  , py::arg("theCtx"),  py::arg("theText"),  py::arg("thePoint"),  py::arg("theParams"))
        .def("Render",
             (void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const OpenGl_AspectText & ,  const unsigned int  ) const) static_cast<void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const OpenGl_AspectText & ,  const unsigned int  ) const>(&OpenGl_Text::Render),
             R"#(Perform rendering)#"  , py::arg("theCtx"),  py::arg("theTextAspect"),  py::arg("theResolution")=static_cast<const unsigned int>(Graphic3d_RenderingParams :: THE_DEFAULT_RESOLUTION))
        .def_static("FontKey_s",
                    (TCollection_AsciiString (*)( const OpenGl_AspectText & ,  const Standard_Integer ,  const unsigned int  ) ) static_cast<TCollection_AsciiString (*)( const OpenGl_AspectText & ,  const Standard_Integer ,  const unsigned int  ) >(&OpenGl_Text::FontKey),
                    R"#(Create key for shared resource)#"  , py::arg("theAspect"),  py::arg("theHeight"),  py::arg("theResolution"))
        .def_static("FindFont_s",
                    (opencascade::handle<OpenGl_Font> (*)( const opencascade::handle<OpenGl_Context> & ,  const OpenGl_AspectText & ,  const Standard_Integer ,  const unsigned int ,  const TCollection_AsciiString  ) ) static_cast<opencascade::handle<OpenGl_Font> (*)( const opencascade::handle<OpenGl_Context> & ,  const OpenGl_AspectText & ,  const Standard_Integer ,  const unsigned int ,  const TCollection_AsciiString  ) >(&OpenGl_Text::FindFont),
                    R"#(Find shared resource for specified font or initialize new one)#"  , py::arg("theCtx"),  py::arg("theAspect"),  py::arg("theHeight"),  py::arg("theResolution"),  py::arg("theKey"))
        .def_static("StringSize_s",
                    (void (*)( const opencascade::handle<OpenGl_Context> & ,   const NCollection_Utf8String & ,  const OpenGl_AspectText & ,  const OpenGl_TextParam & ,  const unsigned int ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) ) static_cast<void (*)( const opencascade::handle<OpenGl_Context> & ,   const NCollection_Utf8String & ,  const OpenGl_AspectText & ,  const OpenGl_TextParam & ,  const unsigned int ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) >(&OpenGl_Text::StringSize),
                    R"#(Compute text width)#"  , py::arg("theCtx"),  py::arg("theText"),  py::arg("theTextAspect"),  py::arg("theParams"),  py::arg("theResolution"),  py::arg("theWidth"),  py::arg("theAscent"),  py::arg("theDescent"))
;


    static_cast<py::class_<OpenGl_RaytraceFilter ,opencascade::handle<OpenGl_RaytraceFilter>  , OpenGl_RenderFilter >>(m.attr("OpenGl_RaytraceFilter"))
        .def(py::init<  >()  )
        .def("PrevRenderFilter",
             (const opencascade::handle<OpenGl_RenderFilter> & (OpenGl_RaytraceFilter::*)() ) static_cast<const opencascade::handle<OpenGl_RenderFilter> & (OpenGl_RaytraceFilter::*)() >(&OpenGl_RaytraceFilter::PrevRenderFilter),
             R"#(Returns the previously set filter.)#" )
        .def("SetPrevRenderFilter",
             (void (OpenGl_RaytraceFilter::*)( const opencascade::handle<OpenGl_RenderFilter> &  ) ) static_cast<void (OpenGl_RaytraceFilter::*)( const opencascade::handle<OpenGl_RenderFilter> &  ) >(&OpenGl_RaytraceFilter::SetPrevRenderFilter),
             R"#(Remembers the previously set filter.)#"  , py::arg("theFilter"))
        .def("ShouldRender",
             (Standard_Boolean (OpenGl_RaytraceFilter::*)( const opencascade::handle<OpenGl_Workspace> & ,  const OpenGl_Element *  ) ) static_cast<Standard_Boolean (OpenGl_RaytraceFilter::*)( const opencascade::handle<OpenGl_Workspace> & ,  const OpenGl_Element *  ) >(&OpenGl_RaytraceFilter::ShouldRender),
             R"#(Checks whether the element can be rendered or not.)#"  , py::arg("theWorkspace"),  py::arg("theElement"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_RaytraceFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_RaytraceFilter::*)() const>(&OpenGl_RaytraceFilter::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_RaytraceFilter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_RaytraceFilter::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_Context ,opencascade::handle<OpenGl_Context>  , Standard_Transient >>(m.attr("OpenGl_Context"))
        .def(py::init< const opencascade::handle<OpenGl_Caps> & >()  , py::arg("theCaps")=static_cast<const opencascade::handle<OpenGl_Caps> &>(NULL) )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Context::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Context::*)() const>(&OpenGl_Context::DynamicType),
             R"#(None)#" )
        .def("forcedRelease",
             (void (OpenGl_Context::*)() ) static_cast<void (OpenGl_Context::*)() >(&OpenGl_Context::forcedRelease),
             R"#(Release all resources, including shared ones)#" )
        .def("Share",
             (void (OpenGl_Context::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_Context::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_Context::Share),
             R"#(Share GL context resources. theShareCtx - handle to context to retrieve handles to shared resources.)#"  , py::arg("theShareCtx"))
        .def("Init",
             (Standard_Boolean (OpenGl_Context::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (OpenGl_Context::*)( const Standard_Boolean  ) >(&OpenGl_Context::Init),
             R"#(Initialize class from currently bound OpenGL context. Method should be called only once.)#"  , py::arg("theIsCoreProfile")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsValid",
             (Standard_Boolean (OpenGl_Context::*)() const) static_cast<Standard_Boolean (OpenGl_Context::*)() const>(&OpenGl_Context::IsValid),
             R"#(Returns true if this context is valid (has been initialized))#" )
        .def("Init",
             (Standard_Boolean (OpenGl_Context::*)( const Aspect_Drawable ,  const Aspect_Display ,  const Aspect_RenderingContext ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (OpenGl_Context::*)( const Aspect_Drawable ,  const Aspect_Display ,  const Aspect_RenderingContext ,  const Standard_Boolean  ) >(&OpenGl_Context::Init),
             R"#(Initialize class from specified window and rendering context. Method should be called only once.)#"  , py::arg("theWindow"),  py::arg("theDisplay"),  py::arg("theGContext"),  py::arg("theIsCoreProfile")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Window",
             (Aspect_Drawable (OpenGl_Context::*)() const) static_cast<Aspect_Drawable (OpenGl_Context::*)() const>(&OpenGl_Context::Window),
             R"#(Returns the window handle (GLXDrawable) currently bound to this OpenGL context)#" )
        .def("CheckExtension",
             (Standard_Boolean (OpenGl_Context::*)( const char *  ) const) static_cast<Standard_Boolean (OpenGl_Context::*)( const char *  ) const>(&OpenGl_Context::CheckExtension),
             R"#(Check if theExtName extension is supported by active GL context.)#"  , py::arg("theExtName"))
        .def("IsGlGreaterEqual",
             (Standard_Boolean (OpenGl_Context::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (OpenGl_Context::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&OpenGl_Context::IsGlGreaterEqual),
             R"#(Returns true if detected GL version is greater or equal to requested one.)#"  , py::arg("theVerMajor"),  py::arg("theVerMinor"))
        .def("VersionMajor",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::VersionMajor),
             R"#(Return cached GL version major number.)#" )
        .def("VersionMinor",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::VersionMinor),
             R"#(Return cached GL version minor number.)#" )
        .def("Functions",
             (const OpenGl_GlFunctions * (OpenGl_Context::*)() const) static_cast<const OpenGl_GlFunctions * (OpenGl_Context::*)() const>(&OpenGl_Context::Functions),
             R"#(Access entire map of loaded OpenGL functions.)#" )
        .def("ResetErrors",
             (bool (OpenGl_Context::*)( const bool  ) ) static_cast<bool (OpenGl_Context::*)( const bool  ) >(&OpenGl_Context::ResetErrors),
             R"#(Clean up errors stack for this GL context (glGetError() in loop).)#"  , py::arg("theToPrintErrors")=static_cast<const bool>(false))
        .def("IsCurrent",
             (Standard_Boolean (OpenGl_Context::*)() const) static_cast<Standard_Boolean (OpenGl_Context::*)() const>(&OpenGl_Context::IsCurrent),
             R"#(This method uses system-dependent API to retrieve information about GL context bound to the current thread.)#" )
        .def("MakeCurrent",
             (Standard_Boolean (OpenGl_Context::*)() ) static_cast<Standard_Boolean (OpenGl_Context::*)() >(&OpenGl_Context::MakeCurrent),
             R"#(Activates current context. Class should be initialized with appropriate info.)#" )
        .def("SwapBuffers",
             (void (OpenGl_Context::*)() ) static_cast<void (OpenGl_Context::*)() >(&OpenGl_Context::SwapBuffers),
             R"#(Swap front/back buffers for this GL context (should be activated before!).)#" )
        .def("SetSwapInterval",
             (Standard_Boolean (OpenGl_Context::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (OpenGl_Context::*)( const Standard_Integer  ) >(&OpenGl_Context::SetSwapInterval),
             R"#(Setup swap interval (VSync).)#"  , py::arg("theInterval"))
        .def("IsRender",
             (Standard_Boolean (OpenGl_Context::*)() const) static_cast<Standard_Boolean (OpenGl_Context::*)() const>(&OpenGl_Context::IsRender),
             R"#(Return true if active mode is GL_RENDER (cached state))#" )
        .def("IsFeedback",
             (Standard_Boolean (OpenGl_Context::*)() const) static_cast<Standard_Boolean (OpenGl_Context::*)() const>(&OpenGl_Context::IsFeedback),
             R"#(Return true if active mode is GL_FEEDBACK (cached state))#" )
        .def("AvailableMemory",
             (Standard_Size (OpenGl_Context::*)() const) static_cast<Standard_Size (OpenGl_Context::*)() const>(&OpenGl_Context::AvailableMemory),
             R"#(This function retrieves information from GL about free GPU memory that is: - OS-dependent. On some OS it is per-process and on others - for entire system. - Vendor-dependent. Currently available only on NVIDIA and AMD/ATi drivers only. - Numbers meaning may vary. You should use this info only for diagnostics purposes.)#" )
        .def("MemoryInfo",
             (TCollection_AsciiString (OpenGl_Context::*)() const) static_cast<TCollection_AsciiString (OpenGl_Context::*)() const>(&OpenGl_Context::MemoryInfo),
             R"#(This function retrieves information from GL about GPU memory and contains more vendor-specific values than AvailableMemory().)#" )
        .def("MemoryInfo",
             (void (OpenGl_Context::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> &  ) const) static_cast<void (OpenGl_Context::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> &  ) const>(&OpenGl_Context::MemoryInfo),
             R"#(This function retrieves information from GL about GPU memory.)#"  , py::arg("theDict"))
        .def("DiagnosticInformation",
             (void (OpenGl_Context::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> & ,  Graphic3d_DiagnosticInfo  ) const) static_cast<void (OpenGl_Context::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> & ,  Graphic3d_DiagnosticInfo  ) const>(&OpenGl_Context::DiagnosticInformation),
             R"#(Fill in the dictionary with OpenGL info. Should be called with bound context.)#"  , py::arg("theDict"),  py::arg("theFlags"))
        .def("GetResource",
             (const opencascade::handle<OpenGl_Resource> & (OpenGl_Context::*)( const TCollection_AsciiString &  ) const) static_cast<const opencascade::handle<OpenGl_Resource> & (OpenGl_Context::*)( const TCollection_AsciiString &  ) const>(&OpenGl_Context::GetResource),
             R"#(Access shared resource by its name.)#"  , py::arg("theKey"))
        .def("ShareResource",
             (Standard_Boolean (OpenGl_Context::*)( const TCollection_AsciiString & ,  const opencascade::handle<OpenGl_Resource> &  ) ) static_cast<Standard_Boolean (OpenGl_Context::*)( const TCollection_AsciiString & ,  const opencascade::handle<OpenGl_Resource> &  ) >(&OpenGl_Context::ShareResource),
             R"#(Register shared resource. Notice that after registration caller shouldn't release it by himself - it will be automatically released on context destruction.)#"  , py::arg("theKey"),  py::arg("theResource"))
        .def("ReleaseResource",
             (void (OpenGl_Context::*)( const TCollection_AsciiString & ,  const Standard_Boolean  ) ) static_cast<void (OpenGl_Context::*)( const TCollection_AsciiString & ,  const Standard_Boolean  ) >(&OpenGl_Context::ReleaseResource),
             R"#(Release shared resource. If there are more than one reference to this resource (also used by some other existing object) then call will be ignored. This means that current object itself should nullify handle before this call. Notice that this is unrecommended operation at all and should be used only in case of fat resources to release memory for other needs.)#"  , py::arg("theKey"),  py::arg("theToDelay")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReleaseDelayed",
             (void (OpenGl_Context::*)() ) static_cast<void (OpenGl_Context::*)() >(&OpenGl_Context::ReleaseDelayed),
             R"#(Clean up the delayed release queue.)#" )
        .def("SharedResources",
             (const OpenGl_Context::OpenGl_ResourcesMap & (OpenGl_Context::*)() const) static_cast<const OpenGl_Context::OpenGl_ResourcesMap & (OpenGl_Context::*)() const>(&OpenGl_Context::SharedResources),
             R"#(Return map of shared resources.)#" )
        .def("ChangeClipping",
             (OpenGl_Clipping & (OpenGl_Context::*)() ) static_cast<OpenGl_Clipping & (OpenGl_Context::*)() >(&OpenGl_Context::ChangeClipping),
             R"#(Returns tool for management of clippings within this context.)#" )
        .def("Clipping",
             (const OpenGl_Clipping & (OpenGl_Context::*)() const) static_cast<const OpenGl_Clipping & (OpenGl_Context::*)() const>(&OpenGl_Context::Clipping),
             R"#(Returns tool for management of clippings within this context.)#" )
        .def("ShaderManager",
             (const opencascade::handle<OpenGl_ShaderManager> & (OpenGl_Context::*)() const) static_cast<const opencascade::handle<OpenGl_ShaderManager> & (OpenGl_Context::*)() const>(&OpenGl_Context::ShaderManager),
             R"#(Returns tool for management of shader programs within this context.)#" )
        .def("TextureWrapClamp",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::TextureWrapClamp),
             R"#(Either GL_CLAMP_TO_EDGE (1.2+) or GL_CLAMP (1.1).)#" )
        .def("MaxDegreeOfAnisotropy",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::MaxDegreeOfAnisotropy),
             R"#(Returns maximum degree of anisotropy texture filter)#" )
        .def("MaxTextureSize",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::MaxTextureSize),
             R"#(Returns value for GL_MAX_TEXTURE_SIZE)#" )
        .def("MaxCombinedTextureUnits",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::MaxCombinedTextureUnits),
             R"#(Returns value for GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS)#" )
        .def("MaxMsaaSamples",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::MaxMsaaSamples),
             R"#(Returns value for GL_MAX_SAMPLES)#" )
        .def("MaxDrawBuffers",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::MaxDrawBuffers),
             R"#(Returns value for GL_MAX_DRAW_BUFFERS)#" )
        .def("MaxColorAttachments",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::MaxColorAttachments),
             R"#(Returns value for GL_MAX_COLOR_ATTACHMENTS)#" )
        .def("MaxClipPlanes",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::MaxClipPlanes),
             R"#(Get maximum number of clip planes supported by OpenGl. This value is implementation dependent. At least 6 planes should be supported by OpenGl (see specs).)#" )
        .def("HasRayTracing",
             (Standard_Boolean (OpenGl_Context::*)() const) static_cast<Standard_Boolean (OpenGl_Context::*)() const>(&OpenGl_Context::HasRayTracing),
             R"#(Returns TRUE if ray tracing mode is supported)#" )
        .def("HasRayTracingTextures",
             (Standard_Boolean (OpenGl_Context::*)() const) static_cast<Standard_Boolean (OpenGl_Context::*)() const>(&OpenGl_Context::HasRayTracingTextures),
             R"#(Returns TRUE if textures in ray tracing mode are supported)#" )
        .def("HasRayTracingAdaptiveSampling",
             (Standard_Boolean (OpenGl_Context::*)() const) static_cast<Standard_Boolean (OpenGl_Context::*)() const>(&OpenGl_Context::HasRayTracingAdaptiveSampling),
             R"#(Returns TRUE if adaptive screen sampling in ray tracing mode is supported)#" )
        .def("ToUseVbo",
             (bool (OpenGl_Context::*)() const) static_cast<bool (OpenGl_Context::*)() const>(&OpenGl_Context::ToUseVbo),
             R"#(Returns true if VBO is supported and permitted.)#" )
        .def("IsGlNormalizeEnabled",
             (Standard_Boolean (OpenGl_Context::*)() const) static_cast<Standard_Boolean (OpenGl_Context::*)() const>(&OpenGl_Context::IsGlNormalizeEnabled),
             R"#(Returns cached state of GL_NORMALIZE.)#" )
        .def("SetGlNormalizeEnabled",
             (Standard_Boolean (OpenGl_Context::*)( Standard_Boolean  ) ) static_cast<Standard_Boolean (OpenGl_Context::*)( Standard_Boolean  ) >(&OpenGl_Context::SetGlNormalizeEnabled),
             R"#(Sets GL_NORMALIZE enabled or disabled.)#"  , py::arg("isEnabled"))
        .def("PolygonMode",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::PolygonMode),
             R"#(Returns cached state of polygon rasterization mode (glPolygonMode()).)#" )
        .def("SetPolygonMode",
             (Standard_Integer (OpenGl_Context::*)( const Standard_Integer  ) ) static_cast<Standard_Integer (OpenGl_Context::*)( const Standard_Integer  ) >(&OpenGl_Context::SetPolygonMode),
             R"#(Sets polygon rasterization mode (glPolygonMode() function).)#"  , py::arg("theMode"))
        .def("IsPolygonHatchEnabled",
             (bool (OpenGl_Context::*)() const) static_cast<bool (OpenGl_Context::*)() const>(&OpenGl_Context::IsPolygonHatchEnabled),
             R"#(Returns cached enabled state of polygon hatching rasterization.)#" )
        .def("SetPolygonHatchEnabled",
             (bool (OpenGl_Context::*)( const bool  ) ) static_cast<bool (OpenGl_Context::*)( const bool  ) >(&OpenGl_Context::SetPolygonHatchEnabled),
             R"#(Sets enabled state of polygon hatching rasterization without affecting currently selected hatching pattern.)#"  , py::arg("theIsEnabled"))
        .def("PolygonHatchStyle",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::PolygonHatchStyle),
             R"#(Returns cached state of polygon hatch type.)#" )
        .def("SetPolygonHatchStyle",
             (Standard_Integer (OpenGl_Context::*)( const opencascade::handle<Graphic3d_HatchStyle> &  ) ) static_cast<Standard_Integer (OpenGl_Context::*)( const opencascade::handle<Graphic3d_HatchStyle> &  ) >(&OpenGl_Context::SetPolygonHatchStyle),
             R"#(Sets polygon hatch pattern. Zero-index value is a default alias for solid filling.)#"  , py::arg("theStyle"))
        .def("SetPolygonOffset",
             (void (OpenGl_Context::*)( const Graphic3d_PolygonOffset &  ) ) static_cast<void (OpenGl_Context::*)( const Graphic3d_PolygonOffset &  ) >(&OpenGl_Context::SetPolygonOffset),
             R"#(Sets and applies current polygon offset.)#"  , py::arg("theOffset"))
        .def("PolygonOffset",
             (const Graphic3d_PolygonOffset & (OpenGl_Context::*)() const) static_cast<const Graphic3d_PolygonOffset & (OpenGl_Context::*)() const>(&OpenGl_Context::PolygonOffset),
             R"#(Returns currently applied polygon offset parameters.)#" )
        .def("ApplyModelWorldMatrix",
             (void (OpenGl_Context::*)() ) static_cast<void (OpenGl_Context::*)() >(&OpenGl_Context::ApplyModelWorldMatrix),
             R"#(Applies matrix stored in ModelWorldState to OpenGl.)#" )
        .def("ApplyWorldViewMatrix",
             (void (OpenGl_Context::*)() ) static_cast<void (OpenGl_Context::*)() >(&OpenGl_Context::ApplyWorldViewMatrix),
             R"#(Applies matrix stored in WorldViewState to OpenGl.)#" )
        .def("ApplyModelViewMatrix",
             (void (OpenGl_Context::*)() ) static_cast<void (OpenGl_Context::*)() >(&OpenGl_Context::ApplyModelViewMatrix),
             R"#(Applies combination of matrices stored in ModelWorldState and WorldViewState to OpenGl.)#" )
        .def("ApplyProjectionMatrix",
             (void (OpenGl_Context::*)() ) static_cast<void (OpenGl_Context::*)() >(&OpenGl_Context::ApplyProjectionMatrix),
             R"#(Applies matrix stored in ProjectionState to OpenGl.)#" )
        .def("Messenger",
             (const opencascade::handle<Message_Messenger> & (OpenGl_Context::*)() const) static_cast<const opencascade::handle<Message_Messenger> & (OpenGl_Context::*)() const>(&OpenGl_Context::Messenger),
             R"#(Returns messenger instance)#" )
        .def("PushMessage",
             (void (OpenGl_Context::*)( const unsigned int ,  const unsigned int ,  const unsigned int ,  const unsigned int ,  const TCollection_ExtendedString &  ) ) static_cast<void (OpenGl_Context::*)( const unsigned int ,  const unsigned int ,  const unsigned int ,  const unsigned int ,  const TCollection_ExtendedString &  ) >(&OpenGl_Context::PushMessage),
             R"#(Callback for GL_ARB_debug_output extension)#"  , py::arg("theSource"),  py::arg("theType"),  py::arg("theId"),  py::arg("theSeverity"),  py::arg("theMessage"))
        .def("ExcludeMessage",
             (Standard_Boolean (OpenGl_Context::*)( const unsigned int ,  const unsigned int  ) ) static_cast<Standard_Boolean (OpenGl_Context::*)( const unsigned int ,  const unsigned int  ) >(&OpenGl_Context::ExcludeMessage),
             R"#(Adds a filter for messages with theId and theSource (GL_DEBUG_SOURCE_))#"  , py::arg("theSource"),  py::arg("theId"))
        .def("IncludeMessage",
             (Standard_Boolean (OpenGl_Context::*)( const unsigned int ,  const unsigned int  ) ) static_cast<Standard_Boolean (OpenGl_Context::*)( const unsigned int ,  const unsigned int  ) >(&OpenGl_Context::IncludeMessage),
             R"#(Removes a filter for messages with theId and theSource (GL_DEBUG_SOURCE_))#"  , py::arg("theSource"),  py::arg("theId"))
        .def("HasStereoBuffers",
             (Standard_Boolean (OpenGl_Context::*)() const) static_cast<Standard_Boolean (OpenGl_Context::*)() const>(&OpenGl_Context::HasStereoBuffers),
             R"#(Returns true if OpenGl context supports left and right rendering buffers.)#" )
        .def("FrameStats",
             (const opencascade::handle<OpenGl_FrameStats> & (OpenGl_Context::*)() const) static_cast<const opencascade::handle<OpenGl_FrameStats> & (OpenGl_Context::*)() const>(&OpenGl_Context::FrameStats),
             R"#(Return structure holding frame statistics.)#" )
        .def("Viewport",
             (const Standard_Integer * (OpenGl_Context::*)() const) static_cast<const Standard_Integer * (OpenGl_Context::*)() const>(&OpenGl_Context::Viewport),
             R"#(Return cached viewport definition (x, y, width, height).)#" )
        .def("ResizeViewport",
             (void (OpenGl_Context::*)( const Standard_Integer [4]  ) ) static_cast<void (OpenGl_Context::*)( const Standard_Integer [4]  ) >(&OpenGl_Context::ResizeViewport),
             R"#(Resize the viewport (alias for glViewport).)#"  , py::arg("theRect"))
        .def("VirtualViewport",
             (const Standard_Integer * (OpenGl_Context::*)() const) static_cast<const Standard_Integer * (OpenGl_Context::*)() const>(&OpenGl_Context::VirtualViewport),
             R"#(Return virtual viewport definition (x, y, width, height).)#" )
        .def("ReadBuffer",
             (Standard_Integer (OpenGl_Context::*)() ) static_cast<Standard_Integer (OpenGl_Context::*)() >(&OpenGl_Context::ReadBuffer),
             R"#(Return active read buffer.)#" )
        .def("SetReadBuffer",
             (void (OpenGl_Context::*)( const Standard_Integer  ) ) static_cast<void (OpenGl_Context::*)( const Standard_Integer  ) >(&OpenGl_Context::SetReadBuffer),
             R"#(Switch read buffer, wrapper for ::glReadBuffer().)#"  , py::arg("theReadBuffer"))
        .def("DrawBuffer",
             (Standard_Integer (OpenGl_Context::*)( const Standard_Integer  ) ) static_cast<Standard_Integer (OpenGl_Context::*)( const Standard_Integer  ) >(&OpenGl_Context::DrawBuffer),
             R"#(Return active draw buffer attached to a render target referred by index (layout location).)#"  , py::arg("theIndex")=static_cast<const Standard_Integer>(0))
        .def("SetDrawBuffer",
             (void (OpenGl_Context::*)( const Standard_Integer  ) ) static_cast<void (OpenGl_Context::*)( const Standard_Integer  ) >(&OpenGl_Context::SetDrawBuffer),
             R"#(Switch draw buffer, wrapper for ::glDrawBuffer().)#"  , py::arg("theDrawBuffer"))
        .def("SetDrawBuffers",
             (void (OpenGl_Context::*)( const Standard_Integer ,  const Standard_Integer *  ) ) static_cast<void (OpenGl_Context::*)( const Standard_Integer ,  const Standard_Integer *  ) >(&OpenGl_Context::SetDrawBuffers),
             R"#(Switch draw buffer, wrapper for ::glDrawBuffers (GLsizei, const GLenum*).)#"  , py::arg("theNb"),  py::arg("theDrawBuffers"))
        .def("SetReadDrawBuffer",
             (void (OpenGl_Context::*)( const Standard_Integer  ) ) static_cast<void (OpenGl_Context::*)( const Standard_Integer  ) >(&OpenGl_Context::SetReadDrawBuffer),
             R"#(Switch read/draw buffers.)#"  , py::arg("theBuffer"))
        .def("ColorMask",
             (bool (OpenGl_Context::*)() const) static_cast<bool (OpenGl_Context::*)() const>(&OpenGl_Context::ColorMask),
             R"#(Return cached flag indicating writing into color buffer is enabled or disabled (glColorMask).)#" )
        .def("SetColorMask",
             (bool (OpenGl_Context::*)( bool  ) ) static_cast<bool (OpenGl_Context::*)( bool  ) >(&OpenGl_Context::SetColorMask),
             R"#(Enable/disable writing into color buffer (wrapper for glColorMask).)#"  , py::arg("theToWriteColor"))
        .def("SampleAlphaToCoverage",
             (bool (OpenGl_Context::*)() const) static_cast<bool (OpenGl_Context::*)() const>(&OpenGl_Context::SampleAlphaToCoverage),
             R"#(Return GL_SAMPLE_ALPHA_TO_COVERAGE state.)#" )
        .def("SetSampleAlphaToCoverage",
             (bool (OpenGl_Context::*)( bool  ) ) static_cast<bool (OpenGl_Context::*)( bool  ) >(&OpenGl_Context::SetSampleAlphaToCoverage),
             R"#(Enable/disable GL_SAMPLE_ALPHA_TO_COVERAGE.)#"  , py::arg("theToEnable"))
        .def("ToCullBackFaces",
             (bool (OpenGl_Context::*)() const) static_cast<bool (OpenGl_Context::*)() const>(&OpenGl_Context::ToCullBackFaces),
             R"#(Return back face culling state.)#" )
        .def("SetCullBackFaces",
             (void (OpenGl_Context::*)( bool  ) ) static_cast<void (OpenGl_Context::*)( bool  ) >(&OpenGl_Context::SetCullBackFaces),
             R"#(Enable or disable back face culling (glEnable (GL_CULL_FACE)).)#"  , py::arg("theToEnable"))
        .def("FetchState",
             (void (OpenGl_Context::*)() ) static_cast<void (OpenGl_Context::*)() >(&OpenGl_Context::FetchState),
             R"#(Fetch OpenGl context state. This class tracks value of several OpenGl state variables. Consulting the cached values is quicker than doing the same via OpenGl API. Call this method if any of the controlled OpenGl state variables has a possibility of being out-of-date.)#" )
        .def("ActiveTextures",
             (const opencascade::handle<OpenGl_TextureSet> & (OpenGl_Context::*)() const) static_cast<const opencascade::handle<OpenGl_TextureSet> & (OpenGl_Context::*)() const>(&OpenGl_Context::ActiveTextures),
             R"#(Returns active textures)#" )
        .def("BindTextures",
             (opencascade::handle<OpenGl_TextureSet> (OpenGl_Context::*)( const opencascade::handle<OpenGl_TextureSet> &  ) ) static_cast<opencascade::handle<OpenGl_TextureSet> (OpenGl_Context::*)( const opencascade::handle<OpenGl_TextureSet> &  ) >(&OpenGl_Context::BindTextures),
             R"#(Bind specified texture set to current context, or unbind previous one when NULL specified.)#"  , py::arg("theTextures"))
        .def("ActiveProgram",
             (const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_Context::*)() const) static_cast<const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_Context::*)() const>(&OpenGl_Context::ActiveProgram),
             R"#(Returns active GLSL program)#" )
        .def("BindProgram",
             (Standard_Boolean (OpenGl_Context::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) ) static_cast<Standard_Boolean (OpenGl_Context::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) >(&OpenGl_Context::BindProgram),
             R"#(Bind specified program to current context, or unbind previous one when NULL specified.)#"  , py::arg("theProgram"))
        .def("SetShadingMaterial",
             (void (OpenGl_Context::*)( const OpenGl_AspectFace * ,  const opencascade::handle<Graphic3d_PresentationAttributes> &  ) ) static_cast<void (OpenGl_Context::*)( const OpenGl_AspectFace * ,  const opencascade::handle<Graphic3d_PresentationAttributes> &  ) >(&OpenGl_Context::SetShadingMaterial),
             R"#(Setup current shading material.)#"  , py::arg("theAspect"),  py::arg("theHighlight"))
        .def("SetColor4fv",
             (void (OpenGl_Context::*)(  const Graphic3d_Vec4 &  ) ) static_cast<void (OpenGl_Context::*)(  const Graphic3d_Vec4 &  ) >(&OpenGl_Context::SetColor4fv),
             R"#(Setup current color.)#"  , py::arg("theColor"))
        .def("SetTypeOfLine",
             (void (OpenGl_Context::*)( const Aspect_TypeOfLine ,  const Standard_ShortReal  ) ) static_cast<void (OpenGl_Context::*)( const Aspect_TypeOfLine ,  const Standard_ShortReal  ) >(&OpenGl_Context::SetTypeOfLine),
             R"#(Setup type of line.)#"  , py::arg("theType"),  py::arg("theFactor")=static_cast<const Standard_ShortReal>(1.0f))
        .def("SetLineWidth",
             (void (OpenGl_Context::*)( const Standard_ShortReal  ) ) static_cast<void (OpenGl_Context::*)( const Standard_ShortReal  ) >(&OpenGl_Context::SetLineWidth),
             R"#(Setup width of line.)#"  , py::arg("theWidth"))
        .def("SetPointSize",
             (void (OpenGl_Context::*)( const Standard_ShortReal  ) ) static_cast<void (OpenGl_Context::*)( const Standard_ShortReal  ) >(&OpenGl_Context::SetPointSize),
             R"#(Setup point size.)#"  , py::arg("theSize"))
        .def("SetPointSpriteOrigin",
             (void (OpenGl_Context::*)() ) static_cast<void (OpenGl_Context::*)() >(&OpenGl_Context::SetPointSpriteOrigin),
             R"#(Setup point sprite origin using GL_POINT_SPRITE_COORD_ORIGIN state: - GL_UPPER_LEFT when GLSL program is active; flipping should be handled in GLSL program for compatibility with OpenGL ES - GL_LOWER_LEFT for FFP)#" )
        .def("SetTextureMatrix",
             (void (OpenGl_Context::*)( const opencascade::handle<Graphic3d_TextureParams> &  ) ) static_cast<void (OpenGl_Context::*)( const opencascade::handle<Graphic3d_TextureParams> &  ) >(&OpenGl_Context::SetTextureMatrix),
             R"#(Setup texture matrix to active GLSL program or to FFP global state using glMatrixMode (GL_TEXTURE).)#"  , py::arg("theParams"))
        .def("BindDefaultVao",
             (void (OpenGl_Context::*)() ) static_cast<void (OpenGl_Context::*)() >(&OpenGl_Context::BindDefaultVao),
             R"#(Bind default Vertex Array Object)#" )
        .def("DefaultFrameBuffer",
             (const opencascade::handle<OpenGl_FrameBuffer> & (OpenGl_Context::*)() const) static_cast<const opencascade::handle<OpenGl_FrameBuffer> & (OpenGl_Context::*)() const>(&OpenGl_Context::DefaultFrameBuffer),
             R"#(Default Frame Buffer Object.)#" )
        .def("SetDefaultFrameBuffer",
             (opencascade::handle<OpenGl_FrameBuffer> (OpenGl_Context::*)( const opencascade::handle<OpenGl_FrameBuffer> &  ) ) static_cast<opencascade::handle<OpenGl_FrameBuffer> (OpenGl_Context::*)( const opencascade::handle<OpenGl_FrameBuffer> &  ) >(&OpenGl_Context::SetDefaultFrameBuffer),
             R"#(Setup new Default Frame Buffer Object and return previously set. This call doesn't change Active FBO!)#"  , py::arg("theFbo"))
        .def("IsDebugContext",
             (Standard_Boolean (OpenGl_Context::*)() const) static_cast<Standard_Boolean (OpenGl_Context::*)() const>(&OpenGl_Context::IsDebugContext),
             R"#(Return debug context initialization state.)#" )
        .def("EnableFeatures",
             (void (OpenGl_Context::*)() const) static_cast<void (OpenGl_Context::*)() const>(&OpenGl_Context::EnableFeatures),
             R"#(None)#" )
        .def("DisableFeatures",
             (void (OpenGl_Context::*)() const) static_cast<void (OpenGl_Context::*)() const>(&OpenGl_Context::DisableFeatures),
             R"#(None)#" )
        .def("Resolution",
             (unsigned int (OpenGl_Context::*)() const) static_cast<unsigned int (OpenGl_Context::*)() const>(&OpenGl_Context::Resolution),
             R"#(Return resolution for rendering text.)#" )
        .def("ResolutionRatio",
             (Standard_ShortReal (OpenGl_Context::*)() const) static_cast<Standard_ShortReal (OpenGl_Context::*)() const>(&OpenGl_Context::ResolutionRatio),
             R"#(Resolution scale factor (rendered resolution to standard resolution). This scaling factor for parameters like text size to be properly displayed on device (screen / printer).)#" )
        .def("RenderScale",
             (Standard_ShortReal (OpenGl_Context::*)() const) static_cast<Standard_ShortReal (OpenGl_Context::*)() const>(&OpenGl_Context::RenderScale),
             R"#(Rendering scale factor (rendering viewport height to real window buffer height).)#" )
        .def("HasRenderScale",
             (Standard_Boolean (OpenGl_Context::*)() const) static_cast<Standard_Boolean (OpenGl_Context::*)() const>(&OpenGl_Context::HasRenderScale),
             R"#(Return TRUE if rendering scale factor is not 1.)#" )
        .def("RenderScaleInv",
             (Standard_ShortReal (OpenGl_Context::*)() const) static_cast<Standard_ShortReal (OpenGl_Context::*)() const>(&OpenGl_Context::RenderScaleInv),
             R"#(Rendering scale factor (inverted value).)#" )
        .def("SetResolution",
             (void (OpenGl_Context::*)( unsigned int ,  Standard_ShortReal ,  Standard_ShortReal  ) ) static_cast<void (OpenGl_Context::*)( unsigned int ,  Standard_ShortReal ,  Standard_ShortReal  ) >(&OpenGl_Context::SetResolution),
             R"#(Set resolution ratio. Note that this method rounds to nearest integer.)#"  , py::arg("theResolution"),  py::arg("theRatio"),  py::arg("theScale"))
        .def("SetResolutionRatio",
             (void (OpenGl_Context::*)( const Standard_ShortReal  ) ) static_cast<void (OpenGl_Context::*)( const Standard_ShortReal  ) >(&OpenGl_Context::SetResolutionRatio),
             R"#(Set resolution ratio. Note that this method rounds to nearest integer.)#"  , py::arg("theRatio"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Context::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Context::get_type_descriptor),
                    R"#(None)#" )
        .def_static("GetPowerOfTwo_s",
                    (Standard_Integer (*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const Standard_Integer ,  const Standard_Integer  ) >(&OpenGl_Context::GetPowerOfTwo),
                    R"#(Function for getting power of to number larger or equal to input number.)#"  , py::arg("theNumber"),  py::arg("theThreshold"))
        .def_static("ReadGlVersion_s",
                    (void (*)( Standard_Integer & ,  Standard_Integer &  ) ) static_cast<void (*)( Standard_Integer & ,  Standard_Integer &  ) >(&OpenGl_Context::ReadGlVersion),
                    R"#(Read OpenGL version information from active context.)#"  , py::arg("theGlVerMajor"),  py::arg("theGlVerMinor"))
        .def_static("CheckExtension_s",
                    (Standard_Boolean (*)( const char * ,  const char *  ) ) static_cast<Standard_Boolean (*)( const char * ,  const char *  ) >(&OpenGl_Context::CheckExtension),
                    R"#(Check if theExtName extension is in extensions string.)#"  , py::arg("theExtString"),  py::arg("theExtName"))
        .def_static("CheckIsTransparent_s",
                    (Standard_Boolean (*)( const OpenGl_AspectFace * ,  const opencascade::handle<Graphic3d_PresentationAttributes> & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) ) static_cast<Standard_Boolean (*)( const OpenGl_AspectFace * ,  const opencascade::handle<Graphic3d_PresentationAttributes> & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) >(&OpenGl_Context::CheckIsTransparent),
                    R"#(Checks if transparency is required for the given aspect and highlight style.)#"  , py::arg("theAspect"),  py::arg("theHighlight"),  py::arg("theAlphaFront"),  py::arg("theAlphaBack"))
        .def_static("CheckIsTransparent_s",
                    (Standard_Boolean (*)( const OpenGl_AspectFace * ,  const opencascade::handle<Graphic3d_PresentationAttributes> &  ) ) static_cast<Standard_Boolean (*)( const OpenGl_AspectFace * ,  const opencascade::handle<Graphic3d_PresentationAttributes> &  ) >(&OpenGl_Context::CheckIsTransparent),
                    R"#(Checks if transparency is required for the given aspect and highlight style.)#"  , py::arg("theAspect"),  py::arg("theHighlight"))
;


    static_cast<py::class_<OpenGl_CappingPlaneResource ,opencascade::handle<OpenGl_CappingPlaneResource>  , OpenGl_Resource >>(m.attr("OpenGl_CappingPlaneResource"))
        .def(py::init< const opencascade::handle<Graphic3d_ClipPlane> & >()  , py::arg("thePlane") )
        .def("Update",
             (void (OpenGl_CappingPlaneResource::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_AspectFillArea3d> &  ) ) static_cast<void (OpenGl_CappingPlaneResource::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_AspectFillArea3d> &  ) >(&OpenGl_CappingPlaneResource::Update),
             R"#(Update resource data in the passed context.)#"  , py::arg("theContext"),  py::arg("theObjAspect"))
        .def("Release",
             (void (OpenGl_CappingPlaneResource::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_CappingPlaneResource::*)( OpenGl_Context *  ) >(&OpenGl_CappingPlaneResource::Release),
             R"#(Release associated OpenGl resources.)#"  , py::arg("theContext"))
        .def("EstimatedDataSize",
             (Standard_Size (OpenGl_CappingPlaneResource::*)() const) static_cast<Standard_Size (OpenGl_CappingPlaneResource::*)() const>(&OpenGl_CappingPlaneResource::EstimatedDataSize),
             R"#(Returns estimated GPU memory usage - not implemented.)#" )
        .def("Plane",
             (const opencascade::handle<Graphic3d_ClipPlane> & (OpenGl_CappingPlaneResource::*)() const) static_cast<const opencascade::handle<Graphic3d_ClipPlane> & (OpenGl_CappingPlaneResource::*)() const>(&OpenGl_CappingPlaneResource::Plane),
             R"#(Return parent clipping plane structure.)#" )
        .def("AspectFace",
             (const OpenGl_AspectFace * (OpenGl_CappingPlaneResource::*)() const) static_cast<const OpenGl_AspectFace * (OpenGl_CappingPlaneResource::*)() const>(&OpenGl_CappingPlaneResource::AspectFace),
             R"#(Returns aspect face for rendering capping surface.)#" )
        .def("Orientation",
             (const OpenGl_Matrix * (OpenGl_CappingPlaneResource::*)() const) static_cast<const OpenGl_Matrix * (OpenGl_CappingPlaneResource::*)() const>(&OpenGl_CappingPlaneResource::Orientation),
             R"#(Returns evaluated orientation matrix to transform infinite plane.)#" )
        .def("Primitives",
             (const OpenGl_PrimitiveArray & (OpenGl_CappingPlaneResource::*)() const) static_cast<const OpenGl_PrimitiveArray & (OpenGl_CappingPlaneResource::*)() const>(&OpenGl_CappingPlaneResource::Primitives),
             R"#(Returns primitive array of vertices to render infinite plane.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_CappingPlaneResource::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_CappingPlaneResource::*)() const>(&OpenGl_CappingPlaneResource::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_CappingPlaneResource::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_CappingPlaneResource::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_GraduatedTrihedron ,std::unique_ptr<OpenGl_GraduatedTrihedron>  , OpenGl_Element >>(m.attr("OpenGl_GraduatedTrihedron"))
        .def(py::init<  >()  )
        .def("Render",
             (void (OpenGl_GraduatedTrihedron::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_GraduatedTrihedron::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_GraduatedTrihedron::Render),
             R"#(Draw the element.)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_GraduatedTrihedron::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_GraduatedTrihedron::*)( OpenGl_Context *  ) >(&OpenGl_GraduatedTrihedron::Release),
             R"#(Release OpenGL resources.)#"  , py::arg("theCtx"))
        .def("SetValues",
             (void (OpenGl_GraduatedTrihedron::*)( const Graphic3d_GraduatedTrihedron &  ) ) static_cast<void (OpenGl_GraduatedTrihedron::*)( const Graphic3d_GraduatedTrihedron &  ) >(&OpenGl_GraduatedTrihedron::SetValues),
             R"#(Setup configuration.)#"  , py::arg("theData"))
        .def("SetMinMax",
             (void (OpenGl_GraduatedTrihedron::*)(  const Graphic3d_Vec3 & ,   const Graphic3d_Vec3 &  ) ) static_cast<void (OpenGl_GraduatedTrihedron::*)(  const Graphic3d_Vec3 & ,   const Graphic3d_Vec3 &  ) >(&OpenGl_GraduatedTrihedron::SetMinMax),
             R"#(Sets up-to-date values of scene bounding box. Can be used in callback mechanism to get up-to-date values.)#"  , py::arg("theMin"),  py::arg("theMax"))
;


    static_cast<py::class_<OpenGl_View ,opencascade::handle<OpenGl_View>  , Graphic3d_CView >>(m.attr("OpenGl_View"))
        .def(py::init< const opencascade::handle<Graphic3d_StructureManager> &,const opencascade::handle<OpenGl_GraphicDriver> &,const opencascade::handle<OpenGl_Caps> &,OpenGl_StateCounter * >()  , py::arg("theMgr"),  py::arg("theDriver"),  py::arg("theCaps"),  py::arg("theCounter") )
        .def("ReleaseGlResources",
             (void (OpenGl_View::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_View::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_View::ReleaseGlResources),
             R"#(None)#"  , py::arg("theCtx"))
        .def("Remove",
             (void (OpenGl_View::*)() ) static_cast<void (OpenGl_View::*)() >(&OpenGl_View::Remove),
             R"#(Deletes and erases the view.)#" )
        .def("SetImmediateModeDrawToFront",
             (Standard_Boolean (OpenGl_View::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (OpenGl_View::*)( const Standard_Boolean  ) >(&OpenGl_View::SetImmediateModeDrawToFront),
             R"#(Returns previous mode.)#"  , py::arg("theDrawToFrontBuffer"))
        .def("SetWindow",
             (void (OpenGl_View::*)( const opencascade::handle<Aspect_Window> & ,  const Aspect_RenderingContext  ) ) static_cast<void (OpenGl_View::*)( const opencascade::handle<Aspect_Window> & ,  const Aspect_RenderingContext  ) >(&OpenGl_View::SetWindow),
             R"#(Creates and maps rendering window to the view.)#"  , py::arg("theWindow"),  py::arg("theContext"))
        .def("Window",
             (opencascade::handle<Aspect_Window> (OpenGl_View::*)() const) static_cast<opencascade::handle<Aspect_Window> (OpenGl_View::*)() const>(&OpenGl_View::Window),
             R"#(Returns window associated with the view.)#" )
        .def("IsDefined",
             (Standard_Boolean (OpenGl_View::*)() const) static_cast<Standard_Boolean (OpenGl_View::*)() const>(&OpenGl_View::IsDefined),
             R"#(Returns True if the window associated to the view is defined.)#" )
        .def("Resized",
             (void (OpenGl_View::*)() ) static_cast<void (OpenGl_View::*)() >(&OpenGl_View::Resized),
             R"#(Handle changing size of the rendering window.)#" )
        .def("Redraw",
             (void (OpenGl_View::*)() ) static_cast<void (OpenGl_View::*)() >(&OpenGl_View::Redraw),
             R"#(Redraw content of the view.)#" )
        .def("RedrawImmediate",
             (void (OpenGl_View::*)() ) static_cast<void (OpenGl_View::*)() >(&OpenGl_View::RedrawImmediate),
             R"#(Redraw immediate content of the view.)#" )
        .def("Invalidate",
             (void (OpenGl_View::*)() ) static_cast<void (OpenGl_View::*)() >(&OpenGl_View::Invalidate),
             R"#(Marks BVH tree for given priority list as dirty and marks primitive set for rebuild.)#" )
        .def("IsInvalidated",
             (Standard_Boolean (OpenGl_View::*)() ) static_cast<Standard_Boolean (OpenGl_View::*)() >(&OpenGl_View::IsInvalidated),
             R"#(Return true if view content cache has been invalidated.)#" )
        .def("GetGraduatedTrihedron",
             (const Graphic3d_GraduatedTrihedron & (OpenGl_View::*)() ) static_cast<const Graphic3d_GraduatedTrihedron & (OpenGl_View::*)() >(&OpenGl_View::GetGraduatedTrihedron),
             R"#(Returns data of a graduated trihedron)#" )
        .def("GraduatedTrihedronDisplay",
             (void (OpenGl_View::*)( const Graphic3d_GraduatedTrihedron &  ) ) static_cast<void (OpenGl_View::*)( const Graphic3d_GraduatedTrihedron &  ) >(&OpenGl_View::GraduatedTrihedronDisplay),
             R"#(Displays Graduated Trihedron.)#"  , py::arg("theTrihedronData"))
        .def("GraduatedTrihedronErase",
             (void (OpenGl_View::*)() ) static_cast<void (OpenGl_View::*)() >(&OpenGl_View::GraduatedTrihedronErase),
             R"#(Erases Graduated Trihedron.)#" )
        .def("GraduatedTrihedronMinMaxValues",
             (void (OpenGl_View::*)(  const NCollection_Vec3<Standard_ShortReal> ,   const NCollection_Vec3<Standard_ShortReal>  ) ) static_cast<void (OpenGl_View::*)(  const NCollection_Vec3<Standard_ShortReal> ,   const NCollection_Vec3<Standard_ShortReal>  ) >(&OpenGl_View::GraduatedTrihedronMinMaxValues),
             R"#(Sets minimum and maximum points of scene bounding box for Graduated Trihedron stored in graphic view object.)#"  , py::arg("theMin"),  py::arg("theMax"))
        .def("BufferDump",
             (Standard_Boolean (OpenGl_View::*)( Image_PixMap & ,  const Graphic3d_BufferType &  ) ) static_cast<Standard_Boolean (OpenGl_View::*)( Image_PixMap & ,  const Graphic3d_BufferType &  ) >(&OpenGl_View::BufferDump),
             R"#(Dump active rendering buffer into specified memory buffer. In Ray-Tracing allow to get a raw HDR buffer using Graphic3d_BT_RGB_RayTraceHdrLeft buffer type, only Left view will be dumped ignoring stereoscopic parameter.)#"  , py::arg("theImage"),  py::arg("theBufferType"))
        .def("Export",
             (Standard_Boolean (OpenGl_View::*)( const Standard_CString ,  const Graphic3d_ExportFormat ,  const Graphic3d_SortType  ) ) static_cast<Standard_Boolean (OpenGl_View::*)( const Standard_CString ,  const Graphic3d_ExportFormat ,  const Graphic3d_SortType  ) >(&OpenGl_View::Export),
             R"#(Export scene into the one of the Vector graphics formats (SVG, PS, PDF...). In contrast to Bitmaps, Vector graphics is scalable (so you may got quality benefits on printing to laser printer). Notice however that results may differ a lot and do not contain some elements.)#"  , py::arg("theFileName"),  py::arg("theFormat"),  py::arg("theSortType")=static_cast<const Graphic3d_SortType>(Graphic3d_ST_BSP_Tree))
        .def("InvalidateBVHData",
             (void (OpenGl_View::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_View::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_View::InvalidateBVHData),
             R"#(Marks BVH tree and the set of BVH primitives of correspondent priority list with id theLayerId as outdated.)#"  , py::arg("theLayerId"))
        .def("AddZLayer",
             (void (OpenGl_View::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_View::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_View::AddZLayer),
             R"#(Insert a new top-level z layer with the given ID.)#"  , py::arg("theLayerId"))
        .def("RemoveZLayer",
             (void (OpenGl_View::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_View::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_View::RemoveZLayer),
             R"#(Remove a z layer with the given ID.)#"  , py::arg("theLayerId"))
        .def("SetZLayerSettings",
             (void (OpenGl_View::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) ) static_cast<void (OpenGl_View::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) >(&OpenGl_View::SetZLayerSettings),
             R"#(Sets the settings for a single Z layer of specified view.)#"  , py::arg("theLayerId"),  py::arg("theSettings"))
        .def("ZLayerMax",
             (Standard_Integer (OpenGl_View::*)() const) static_cast<Standard_Integer (OpenGl_View::*)() const>(&OpenGl_View::ZLayerMax),
             R"#(Returns the maximum Z layer ID. First layer ID is Graphic3d_ZLayerId_Default, last ID is ZLayerMax().)#" )
        .def("InvalidateZLayerBoundingBox",
             (void (OpenGl_View::*)( const Graphic3d_ZLayerId  ) const) static_cast<void (OpenGl_View::*)( const Graphic3d_ZLayerId  ) const>(&OpenGl_View::InvalidateZLayerBoundingBox),
             R"#(Returns the bounding box of all structures displayed in the Z layer. Never fails. If Z layer does not exist nothing happens.)#"  , py::arg("theLayerId"))
        .def("ZLayerBoundingBox",
             (Bnd_Box (OpenGl_View::*)( const Graphic3d_ZLayerId ,  const opencascade::handle<Graphic3d_Camera> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) const) static_cast<Bnd_Box (OpenGl_View::*)( const Graphic3d_ZLayerId ,  const opencascade::handle<Graphic3d_Camera> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) const>(&OpenGl_View::ZLayerBoundingBox),
             R"#(Returns the bounding box of all structures displayed in the Z layer. If Z layer does not exist the empty box is returned.)#"  , py::arg("theLayerId"),  py::arg("theCamera"),  py::arg("theWindowWidth"),  py::arg("theWindowHeight"),  py::arg("theToIncludeAuxiliary"))
        .def("FBO",
             (opencascade::handle<Standard_Transient> (OpenGl_View::*)() const) static_cast<opencascade::handle<Standard_Transient> (OpenGl_View::*)() const>(&OpenGl_View::FBO),
             R"#(Returns pointer to an assigned framebuffer object.)#" )
        .def("SetFBO",
             (void (OpenGl_View::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (OpenGl_View::*)( const opencascade::handle<Standard_Transient> &  ) >(&OpenGl_View::SetFBO),
             R"#(Sets framebuffer object for offscreen rendering.)#"  , py::arg("theFbo"))
        .def("FBOCreate",
             (opencascade::handle<Standard_Transient> (OpenGl_View::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<opencascade::handle<Standard_Transient> (OpenGl_View::*)( const Standard_Integer ,  const Standard_Integer  ) >(&OpenGl_View::FBOCreate),
             R"#(Generate offscreen FBO in the graphic library. If not supported on hardware returns NULL.)#"  , py::arg("theWidth"),  py::arg("theHeight"))
        .def("FBORelease",
             (void (OpenGl_View::*)( opencascade::handle<Standard_Transient> &  ) ) static_cast<void (OpenGl_View::*)( opencascade::handle<Standard_Transient> &  ) >(&OpenGl_View::FBORelease),
             R"#(Remove offscreen FBO from the graphic library)#"  , py::arg("theFbo"))
        .def("FBOGetDimensions",
             (void (OpenGl_View::*)( const opencascade::handle<Standard_Transient> & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<void (OpenGl_View::*)( const opencascade::handle<Standard_Transient> & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) >(&OpenGl_View::FBOGetDimensions),
             R"#(Read offscreen FBO configuration.)#"  , py::arg("theFbo"),  py::arg("theWidth"),  py::arg("theHeight"),  py::arg("theWidthMax"),  py::arg("theHeightMax"))
        .def("FBOChangeViewport",
             (void (OpenGl_View::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (OpenGl_View::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&OpenGl_View::FBOChangeViewport),
             R"#(Change offscreen FBO viewport.)#"  , py::arg("theFbo"),  py::arg("theWidth"),  py::arg("theHeight"))
        .def("Background",
             (Aspect_Background (OpenGl_View::*)() const) static_cast<Aspect_Background (OpenGl_View::*)() const>(&OpenGl_View::Background),
             R"#(Returns background fill color.)#" )
        .def("SetBackground",
             (void (OpenGl_View::*)( const Aspect_Background &  ) ) static_cast<void (OpenGl_View::*)( const Aspect_Background &  ) >(&OpenGl_View::SetBackground),
             R"#(Sets background fill color.)#"  , py::arg("theBackground"))
        .def("GradientBackground",
             (Aspect_GradientBackground (OpenGl_View::*)() const) static_cast<Aspect_GradientBackground (OpenGl_View::*)() const>(&OpenGl_View::GradientBackground),
             R"#(Returns gradient background fill colors.)#" )
        .def("SetGradientBackground",
             (void (OpenGl_View::*)( const Aspect_GradientBackground &  ) ) static_cast<void (OpenGl_View::*)( const Aspect_GradientBackground &  ) >(&OpenGl_View::SetGradientBackground),
             R"#(Sets gradient background fill colors.)#"  , py::arg("theBackground"))
        .def("BackgroundImage",
             (TCollection_AsciiString (OpenGl_View::*)() ) static_cast<TCollection_AsciiString (OpenGl_View::*)() >(&OpenGl_View::BackgroundImage),
             R"#(Returns background image texture file path.)#" )
        .def("SetBackgroundImage",
             (void (OpenGl_View::*)( const TCollection_AsciiString &  ) ) static_cast<void (OpenGl_View::*)( const TCollection_AsciiString &  ) >(&OpenGl_View::SetBackgroundImage),
             R"#(Sets background image texture file path.)#"  , py::arg("theFilePath"))
        .def("BackgroundImageStyle",
             (Aspect_FillMethod (OpenGl_View::*)() const) static_cast<Aspect_FillMethod (OpenGl_View::*)() const>(&OpenGl_View::BackgroundImageStyle),
             R"#(Returns background image fill style.)#" )
        .def("SetBackgroundImageStyle",
             (void (OpenGl_View::*)( const Aspect_FillMethod  ) ) static_cast<void (OpenGl_View::*)( const Aspect_FillMethod  ) >(&OpenGl_View::SetBackgroundImageStyle),
             R"#(Sets background image fill style.)#"  , py::arg("theFillStyle"))
        .def("TextureEnv",
             (opencascade::handle<Graphic3d_TextureEnv> (OpenGl_View::*)() const) static_cast<opencascade::handle<Graphic3d_TextureEnv> (OpenGl_View::*)() const>(&OpenGl_View::TextureEnv),
             R"#(Returns environment texture set for the view.)#" )
        .def("SetTextureEnv",
             (void (OpenGl_View::*)( const opencascade::handle<Graphic3d_TextureEnv> &  ) ) static_cast<void (OpenGl_View::*)( const opencascade::handle<Graphic3d_TextureEnv> &  ) >(&OpenGl_View::SetTextureEnv),
             R"#(Sets environment texture for the view.)#"  , py::arg("theTextureEnv"))
        .def("IsCullingEnabled",
             (Standard_Boolean (OpenGl_View::*)() const) static_cast<Standard_Boolean (OpenGl_View::*)() const>(&OpenGl_View::IsCullingEnabled),
             R"#(Returns the state of frustum culling optimization.)#" )
        .def("SetCullingEnabled",
             (void (OpenGl_View::*)( const Standard_Boolean  ) ) static_cast<void (OpenGl_View::*)( const Standard_Boolean  ) >(&OpenGl_View::SetCullingEnabled),
             R"#(Enables or disables frustum culling optimization.)#"  , py::arg("theIsEnabled"))
        .def("BackfacingModel",
             (Graphic3d_TypeOfBackfacingModel (OpenGl_View::*)() const) static_cast<Graphic3d_TypeOfBackfacingModel (OpenGl_View::*)() const>(&OpenGl_View::BackfacingModel),
             R"#(Return backfacing model used for the view.)#" )
        .def("SetBackfacingModel",
             (void (OpenGl_View::*)( const Graphic3d_TypeOfBackfacingModel  ) ) static_cast<void (OpenGl_View::*)( const Graphic3d_TypeOfBackfacingModel  ) >(&OpenGl_View::SetBackfacingModel),
             R"#(Sets backfacing model for the view.)#"  , py::arg("theModel"))
        .def("Camera",
             (const opencascade::handle<Graphic3d_Camera> & (OpenGl_View::*)() const) static_cast<const opencascade::handle<Graphic3d_Camera> & (OpenGl_View::*)() const>(&OpenGl_View::Camera),
             R"#(Returns camera object of the view.)#" )
        .def("LocalOrigin",
             (const gp_XYZ & (OpenGl_View::*)() const) static_cast<const gp_XYZ & (OpenGl_View::*)() const>(&OpenGl_View::LocalOrigin),
             R"#(Returns local camera origin currently set for rendering, might be modified during rendering.)#" )
        .def("SetLocalOrigin",
             (void (OpenGl_View::*)( const gp_XYZ &  ) ) static_cast<void (OpenGl_View::*)( const gp_XYZ &  ) >(&OpenGl_View::SetLocalOrigin),
             R"#(Setup local camera origin currently set for rendering.)#"  , py::arg("theOrigin"))
        .def("SetCamera",
             (void (OpenGl_View::*)( const opencascade::handle<Graphic3d_Camera> &  ) ) static_cast<void (OpenGl_View::*)( const opencascade::handle<Graphic3d_Camera> &  ) >(&OpenGl_View::SetCamera),
             R"#(Sets camera used by the view.)#"  , py::arg("theCamera"))
        .def("Lights",
             (const opencascade::handle<Graphic3d_LightSet> & (OpenGl_View::*)() const) static_cast<const opencascade::handle<Graphic3d_LightSet> & (OpenGl_View::*)() const>(&OpenGl_View::Lights),
             R"#(Returns list of lights of the view.)#" )
        .def("SetLights",
             (void (OpenGl_View::*)( const opencascade::handle<Graphic3d_LightSet> &  ) ) static_cast<void (OpenGl_View::*)( const opencascade::handle<Graphic3d_LightSet> &  ) >(&OpenGl_View::SetLights),
             R"#(Sets list of lights for the view.)#"  , py::arg("theLights"))
        .def("ClipPlanes",
             (const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (OpenGl_View::*)() const) static_cast<const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (OpenGl_View::*)() const>(&OpenGl_View::ClipPlanes),
             R"#(Returns list of clip planes set for the view.)#" )
        .def("SetClipPlanes",
             (void (OpenGl_View::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) ) static_cast<void (OpenGl_View::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) >(&OpenGl_View::SetClipPlanes),
             R"#(Sets list of clip planes for the view.)#"  , py::arg("thePlanes"))
        .def("DiagnosticInformation",
             (void (OpenGl_View::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> & ,  Graphic3d_DiagnosticInfo  ) const) static_cast<void (OpenGl_View::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> & ,  Graphic3d_DiagnosticInfo  ) const>(&OpenGl_View::DiagnosticInformation),
             R"#(Fill in the dictionary with diagnostic info. Should be called within rendering thread.)#"  , py::arg("theDict"),  py::arg("theFlags"))
        .def("BackgroundColor",
             (const Quantity_ColorRGBA & (OpenGl_View::*)() const) static_cast<const Quantity_ColorRGBA & (OpenGl_View::*)() const>(&OpenGl_View::BackgroundColor),
             R"#(Returns background color.)#" )
        .def("ChangeGraduatedTrihedron",
             (OpenGl_GraduatedTrihedron & (OpenGl_View::*)() ) static_cast<OpenGl_GraduatedTrihedron & (OpenGl_View::*)() >(&OpenGl_View::ChangeGraduatedTrihedron),
             R"#(Change graduated trihedron.)#" )
        .def("LayerList",
             (const OpenGl_LayerList & (OpenGl_View::*)() const) static_cast<const OpenGl_LayerList & (OpenGl_View::*)() const>(&OpenGl_View::LayerList),
             R"#(Returns list of OpenGL Z-layers.)#" )
        .def("GlWindow",
             (const opencascade::handle<OpenGl_Window> (OpenGl_View::*)() const) static_cast<const opencascade::handle<OpenGl_Window> (OpenGl_View::*)() const>(&OpenGl_View::GlWindow),
             R"#(Returns OpenGL window implementation.)#" )
        .def("GlTextureEnv",
             (const opencascade::handle<OpenGl_TextureSet> & (OpenGl_View::*)() const) static_cast<const opencascade::handle<OpenGl_TextureSet> & (OpenGl_View::*)() const>(&OpenGl_View::GlTextureEnv),
             R"#(Returns OpenGL environment map.)#" )
        .def("BVHTreeSelector",
             (const OpenGl_BVHTreeSelector & (OpenGl_View::*)() const) static_cast<const OpenGl_BVHTreeSelector & (OpenGl_View::*)() const>(&OpenGl_View::BVHTreeSelector),
             R"#(Returns selector for BVH tree, providing a possibility to store information about current view volume and to detect which objects are overlapping it.)#" )
        .def("HasImmediateStructures",
             (bool (OpenGl_View::*)() const) static_cast<bool (OpenGl_View::*)() const>(&OpenGl_View::HasImmediateStructures),
             R"#(Returns true if there are immediate structures to display)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_View::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_View::*)() const>(&OpenGl_View::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_View::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_View::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_Layer ,opencascade::handle<OpenGl_Layer>  , Standard_Transient >>(m.attr("OpenGl_Layer"))
        .def(py::init< const Standard_Integer,const opencascade::handle<Select3D_BVHBuilder3d> & >()  , py::arg("theNbPriorities"),  py::arg("theBuilder") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Layer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Layer::*)() const>(&OpenGl_Layer::DynamicType),
             R"#(None)#" )
        .def("FrustumCullingBVHBuilder",
             (const opencascade::handle<Select3D_BVHBuilder3d> & (OpenGl_Layer::*)() const) static_cast<const opencascade::handle<Select3D_BVHBuilder3d> & (OpenGl_Layer::*)() const>(&OpenGl_Layer::FrustumCullingBVHBuilder),
             R"#(Returns BVH tree builder for frustom culling.)#" )
        .def("SetFrustumCullingBVHBuilder",
             (void (OpenGl_Layer::*)( const opencascade::handle<Select3D_BVHBuilder3d> &  ) ) static_cast<void (OpenGl_Layer::*)( const opencascade::handle<Select3D_BVHBuilder3d> &  ) >(&OpenGl_Layer::SetFrustumCullingBVHBuilder),
             R"#(Assigns BVH tree builder for frustom culling.)#"  , py::arg("theBuilder"))
        .def("IsImmediate",
             (Standard_Boolean (OpenGl_Layer::*)() const) static_cast<Standard_Boolean (OpenGl_Layer::*)() const>(&OpenGl_Layer::IsImmediate),
             R"#(Return true if layer was marked with immediate flag.)#" )
        .def("LayerSettings",
             (const Graphic3d_ZLayerSettings & (OpenGl_Layer::*)() const) static_cast<const Graphic3d_ZLayerSettings & (OpenGl_Layer::*)() const>(&OpenGl_Layer::LayerSettings),
             R"#(Returns settings of the layer object.)#" )
        .def("SetLayerSettings",
             (void (OpenGl_Layer::*)( const Graphic3d_ZLayerSettings &  ) ) static_cast<void (OpenGl_Layer::*)( const Graphic3d_ZLayerSettings &  ) >(&OpenGl_Layer::SetLayerSettings),
             R"#(Sets settings of the layer object.)#"  , py::arg("theSettings"))
        .def("Add",
             (void (OpenGl_Layer::*)( const OpenGl_Structure * ,  const Standard_Integer ,  Standard_Boolean  ) ) static_cast<void (OpenGl_Layer::*)( const OpenGl_Structure * ,  const Standard_Integer ,  Standard_Boolean  ) >(&OpenGl_Layer::Add),
             R"#(None)#"  , py::arg("theStruct"),  py::arg("thePriority"),  py::arg("isForChangePriority")=static_cast<Standard_Boolean>(Standard_False))
        .def("Remove",
             (bool (OpenGl_Layer::*)( const OpenGl_Structure * ,  Standard_Integer & ,  Standard_Boolean  ) ) static_cast<bool (OpenGl_Layer::*)( const OpenGl_Structure * ,  Standard_Integer & ,  Standard_Boolean  ) >(&OpenGl_Layer::Remove),
             R"#(Remove structure and returns its priority, if the structure is not found, method returns negative value)#"  , py::arg("theStruct"),  py::arg("thePriority"),  py::arg("isForChangePriority")=static_cast<Standard_Boolean>(Standard_False))
        .def("NbStructures",
             (Standard_Integer (OpenGl_Layer::*)() const) static_cast<Standard_Integer (OpenGl_Layer::*)() const>(&OpenGl_Layer::NbStructures),
             R"#(Returns the number of structures)#" )
        .def("NbStructuresNotCulled",
             (Standard_Integer (OpenGl_Layer::*)() const) static_cast<Standard_Integer (OpenGl_Layer::*)() const>(&OpenGl_Layer::NbStructuresNotCulled),
             R"#(Number of NOT culled structures in the layer.)#" )
        .def("NbPriorities",
             (Standard_Integer (OpenGl_Layer::*)() const) static_cast<Standard_Integer (OpenGl_Layer::*)() const>(&OpenGl_Layer::NbPriorities),
             R"#(Returns the number of available priority levels)#" )
        .def("Append",
             (Standard_Boolean (OpenGl_Layer::*)( const OpenGl_Layer &  ) ) static_cast<Standard_Boolean (OpenGl_Layer::*)( const OpenGl_Layer &  ) >(&OpenGl_Layer::Append),
             R"#(Append layer of acceptable type (with similar number of priorities or less). Returns Standard_False if the list can not be accepted.)#"  , py::arg("theOther"))
        .def("ArrayOfStructures",
             (const OpenGl_ArrayOfIndexedMapOfStructure & (OpenGl_Layer::*)() const) static_cast<const OpenGl_ArrayOfIndexedMapOfStructure & (OpenGl_Layer::*)() const>(&OpenGl_Layer::ArrayOfStructures),
             R"#(Returns array of OpenGL structures.)#" )
        .def("InvalidateBVHData",
             (void (OpenGl_Layer::*)() ) static_cast<void (OpenGl_Layer::*)() >(&OpenGl_Layer::InvalidateBVHData),
             R"#(Marks BVH tree for given priority list as dirty and marks primitive set for rebuild.)#" )
        .def("InvalidateBoundingBox",
             (void (OpenGl_Layer::*)() const) static_cast<void (OpenGl_Layer::*)() const>(&OpenGl_Layer::InvalidateBoundingBox),
             R"#(Marks cached bounding box as obsolete.)#" )
        .def("BoundingBox",
             (Bnd_Box (OpenGl_Layer::*)( const Standard_Integer ,  const opencascade::handle<Graphic3d_Camera> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) const) static_cast<Bnd_Box (OpenGl_Layer::*)( const Standard_Integer ,  const opencascade::handle<Graphic3d_Camera> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) const>(&OpenGl_Layer::BoundingBox),
             R"#(Returns layer bounding box.)#"  , py::arg("theViewId"),  py::arg("theCamera"),  py::arg("theWindowWidth"),  py::arg("theWindowHeight"),  py::arg("theToIncludeAuxiliary"))
        .def("considerZoomPersistenceObjects",
             (Standard_Real (OpenGl_Layer::*)( const Standard_Integer ,  const opencascade::handle<Graphic3d_Camera> & ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (OpenGl_Layer::*)( const Standard_Integer ,  const opencascade::handle<Graphic3d_Camera> & ,  const Standard_Integer ,  const Standard_Integer  ) const>(&OpenGl_Layer::considerZoomPersistenceObjects),
             R"#(Returns zoom-scale factor.)#"  , py::arg("theViewId"),  py::arg("theCamera"),  py::arg("theWindowWidth"),  py::arg("theWindowHeight"))
        .def("UpdateCulling",
             (void (OpenGl_Layer::*)( const Standard_Integer ,  const OpenGl_BVHTreeSelector & ,  const Standard_Boolean  ) ) static_cast<void (OpenGl_Layer::*)( const Standard_Integer ,  const OpenGl_BVHTreeSelector & ,  const Standard_Boolean  ) >(&OpenGl_Layer::UpdateCulling),
             R"#(Update culling state - should be called before rendering. Traverses through BVH tree to determine which structures are in view volume.)#"  , py::arg("theViewId"),  py::arg("theSelector"),  py::arg("theToTraverse"))
        .def("IsCulled",
             (bool (OpenGl_Layer::*)() const) static_cast<bool (OpenGl_Layer::*)() const>(&OpenGl_Layer::IsCulled),
             R"#(Returns TRUE if layer is empty or has been discarded entirely by culling test.)#" )
        .def("Render",
             (void (OpenGl_Layer::*)( const opencascade::handle<OpenGl_Workspace> & ,  const OpenGl_GlobalLayerSettings &  ) const) static_cast<void (OpenGl_Layer::*)( const opencascade::handle<OpenGl_Workspace> & ,  const OpenGl_GlobalLayerSettings &  ) const>(&OpenGl_Layer::Render),
             R"#(None)#"  , py::arg("theWorkspace"),  py::arg("theDefaultSettings"))
        .def("NbOfTransformPersistenceObjects",
             (Standard_Integer (OpenGl_Layer::*)() const) static_cast<Standard_Integer (OpenGl_Layer::*)() const>(&OpenGl_Layer::NbOfTransformPersistenceObjects),
             R"#(Returns number of transform persistence objects.)#" )
        .def("CullableStructuresBVH",
             (const OpenGl_BVHClipPrimitiveSet & (OpenGl_Layer::*)() const) static_cast<const OpenGl_BVHClipPrimitiveSet & (OpenGl_Layer::*)() const>(&OpenGl_Layer::CullableStructuresBVH),
             R"#(Returns set of OpenGl_Structures structures for building BVH tree.)#" )
        .def("CullableTrsfPersStructuresBVH",
             (const OpenGl_BVHClipPrimitiveTrsfPersSet & (OpenGl_Layer::*)() const) static_cast<const OpenGl_BVHClipPrimitiveTrsfPersSet & (OpenGl_Layer::*)() const>(&OpenGl_Layer::CullableTrsfPersStructuresBVH),
             R"#(Returns set of transform persistent OpenGl_Structures for building BVH tree.)#" )
        .def("NonCullableStructures",
             (const NCollection_IndexedMap<const OpenGl_Structure *> & (OpenGl_Layer::*)() const) static_cast<const NCollection_IndexedMap<const OpenGl_Structure *> & (OpenGl_Layer::*)() const>(&OpenGl_Layer::NonCullableStructures),
             R"#(Returns indexed map of always rendered structures.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Layer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Layer::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_Flipper ,std::unique_ptr<OpenGl_Flipper>  , OpenGl_Element >>(m.attr("OpenGl_Flipper"))
        .def(py::init< const gp_Ax2 & >()  , py::arg("theReferenceSystem") )
        .def("SetOptions",
             (void (OpenGl_Flipper::*)( const Standard_Boolean  ) ) static_cast<void (OpenGl_Flipper::*)( const Standard_Boolean  ) >(&OpenGl_Flipper::SetOptions),
             R"#(Set options for the element.)#"  , py::arg("theIsEnabled"))
        .def("Render",
             (void (OpenGl_Flipper::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_Flipper::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_Flipper::Render),
             R"#(None)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_Flipper::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_Flipper::*)( OpenGl_Context *  ) >(&OpenGl_Flipper::Release),
             R"#(None)#"  , py::arg("theCtx"))
;


    static_cast<py::class_<OpenGl_GraphicDriver ,opencascade::handle<OpenGl_GraphicDriver>  , Graphic3d_GraphicDriver >>(m.attr("OpenGl_GraphicDriver"))
        .def(py::init< const opencascade::handle<Aspect_DisplayConnection> &,const Standard_Boolean >()  , py::arg("theDisp"),  py::arg("theToInitialize")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_GraphicDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_GraphicDriver::*)() const>(&OpenGl_GraphicDriver::DynamicType),
             R"#(None)#" )
        .def("ReleaseContext",
             (void (OpenGl_GraphicDriver::*)() ) static_cast<void (OpenGl_GraphicDriver::*)() >(&OpenGl_GraphicDriver::ReleaseContext),
             R"#(Release default context.)#" )
        .def("InitContext",
             (Standard_Boolean (OpenGl_GraphicDriver::*)() ) static_cast<Standard_Boolean (OpenGl_GraphicDriver::*)() >(&OpenGl_GraphicDriver::InitContext),
             R"#(Perform initialization of default OpenGL context.)#" )
        .def("InquireLimit",
             (Standard_Integer (OpenGl_GraphicDriver::*)( const Graphic3d_TypeOfLimit  ) const) static_cast<Standard_Integer (OpenGl_GraphicDriver::*)( const Graphic3d_TypeOfLimit  ) const>(&OpenGl_GraphicDriver::InquireLimit),
             R"#(Request limit of graphic resource of specific type.)#"  , py::arg("theType"))
        .def("CreateStructure",
             (opencascade::handle<Graphic3d_CStructure> (OpenGl_GraphicDriver::*)( const opencascade::handle<Graphic3d_StructureManager> &  ) ) static_cast<opencascade::handle<Graphic3d_CStructure> (OpenGl_GraphicDriver::*)( const opencascade::handle<Graphic3d_StructureManager> &  ) >(&OpenGl_GraphicDriver::CreateStructure),
             R"#(None)#"  , py::arg("theManager"))
        .def("RemoveStructure",
             (void (OpenGl_GraphicDriver::*)( opencascade::handle<Graphic3d_CStructure> &  ) ) static_cast<void (OpenGl_GraphicDriver::*)( opencascade::handle<Graphic3d_CStructure> &  ) >(&OpenGl_GraphicDriver::RemoveStructure),
             R"#(None)#"  , py::arg("theCStructure"))
        .def("CreateView",
             (opencascade::handle<Graphic3d_CView> (OpenGl_GraphicDriver::*)( const opencascade::handle<Graphic3d_StructureManager> &  ) ) static_cast<opencascade::handle<Graphic3d_CView> (OpenGl_GraphicDriver::*)( const opencascade::handle<Graphic3d_StructureManager> &  ) >(&OpenGl_GraphicDriver::CreateView),
             R"#(None)#"  , py::arg("theMgr"))
        .def("RemoveView",
             (void (OpenGl_GraphicDriver::*)( const opencascade::handle<Graphic3d_CView> &  ) ) static_cast<void (OpenGl_GraphicDriver::*)( const opencascade::handle<Graphic3d_CView> &  ) >(&OpenGl_GraphicDriver::RemoveView),
             R"#(None)#"  , py::arg("theView"))
        .def("CreateRenderWindow",
             (opencascade::handle<OpenGl_Window> (OpenGl_GraphicDriver::*)( const opencascade::handle<Aspect_Window> & ,  const Aspect_RenderingContext  ) ) static_cast<opencascade::handle<OpenGl_Window> (OpenGl_GraphicDriver::*)( const opencascade::handle<Aspect_Window> & ,  const Aspect_RenderingContext  ) >(&OpenGl_GraphicDriver::CreateRenderWindow),
             R"#(None)#"  , py::arg("theWindow"),  py::arg("theContext"))
        .def("TextSize",
             (void (OpenGl_GraphicDriver::*)( const opencascade::handle<Graphic3d_CView> & ,  const Standard_CString ,  const Standard_ShortReal ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) const) static_cast<void (OpenGl_GraphicDriver::*)( const opencascade::handle<Graphic3d_CView> & ,  const Standard_CString ,  const Standard_ShortReal ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) const>(&OpenGl_GraphicDriver::TextSize),
             R"#(None)#"  , py::arg("theView"),  py::arg("theText"),  py::arg("theHeight"),  py::arg("theWidth"),  py::arg("theAscent"),  py::arg("theDescent"))
        .def("DefaultTextHeight",
             (Standard_ShortReal (OpenGl_GraphicDriver::*)() const) static_cast<Standard_ShortReal (OpenGl_GraphicDriver::*)() const>(&OpenGl_GraphicDriver::DefaultTextHeight),
             R"#(None)#" )
        .def("ViewExists",
             (Standard_Boolean (OpenGl_GraphicDriver::*)( const opencascade::handle<Aspect_Window> & ,  opencascade::handle<Graphic3d_CView> &  ) ) static_cast<Standard_Boolean (OpenGl_GraphicDriver::*)( const opencascade::handle<Aspect_Window> & ,  opencascade::handle<Graphic3d_CView> &  ) >(&OpenGl_GraphicDriver::ViewExists),
             R"#(None)#"  , py::arg("theWindow"),  py::arg("theView"))
        .def("AddZLayer",
             (void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_GraphicDriver::AddZLayer),
             R"#(Adds a new top-level z layer with ID theLayerId for all views. Z layers allow drawing structures in higher layers in foreground of structures in lower layers. To add a structure to desired layer on display it is necessary to set the layer index for the structure. The passed theLayerId should be not less than 0 (reserved for default layers).)#"  , py::arg("theLayerId"))
        .def("RemoveZLayer",
             (void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_GraphicDriver::RemoveZLayer),
             R"#(Removes Z layer. All structures displayed at the moment in layer will be displayed in default layer (the bottom-level z layer). By default, there are always default bottom-level layer that can't be removed. The passed theLayerId should be not less than 0 (reserved for default layers that can not be removed).)#"  , py::arg("theLayerId"))
        .def("ZLayers",
             (void (OpenGl_GraphicDriver::*)( NCollection_Sequence<Standard_Integer> &  ) const) static_cast<void (OpenGl_GraphicDriver::*)( NCollection_Sequence<Standard_Integer> &  ) const>(&OpenGl_GraphicDriver::ZLayers),
             R"#(Returns list of Z layers defined for the graphical driver.)#"  , py::arg("theLayerSeq"))
        .def("SetZLayerSettings",
             (void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) ) static_cast<void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) >(&OpenGl_GraphicDriver::SetZLayerSettings),
             R"#(Sets the settings for a single Z layer.)#"  , py::arg("theLayerId"),  py::arg("theSettings"))
        .def("ZLayerSettings",
             (const Graphic3d_ZLayerSettings & (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId  ) const) static_cast<const Graphic3d_ZLayerSettings & (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId  ) const>(&OpenGl_GraphicDriver::ZLayerSettings),
             R"#(Returns the settings of a single Z layer.)#"  , py::arg("theLayerId"))
        .def("Options",
             (const OpenGl_Caps & (OpenGl_GraphicDriver::*)() const) static_cast<const OpenGl_Caps & (OpenGl_GraphicDriver::*)() const>(&OpenGl_GraphicDriver::Options),
             R"#(Returns the visualization options)#" )
        .def("ChangeOptions",
             (OpenGl_Caps & (OpenGl_GraphicDriver::*)() ) static_cast<OpenGl_Caps & (OpenGl_GraphicDriver::*)() >(&OpenGl_GraphicDriver::ChangeOptions),
             R"#(Returns the visualization options)#" )
        .def("SetBuffersNoSwap",
             (void (OpenGl_GraphicDriver::*)( const Standard_Boolean  ) ) static_cast<void (OpenGl_GraphicDriver::*)( const Standard_Boolean  ) >(&OpenGl_GraphicDriver::SetBuffersNoSwap),
             R"#(Specify swap buffer behavior.)#"  , py::arg("theIsNoSwap"))
        .def("EnableVBO",
             (void (OpenGl_GraphicDriver::*)( const Standard_Boolean  ) ) static_cast<void (OpenGl_GraphicDriver::*)( const Standard_Boolean  ) >(&OpenGl_GraphicDriver::EnableVBO),
             R"#(VBO usage can be forbidden by this method even if it is supported by GL driver. Notice that disabling of VBO will cause rendering performance degradation. Warning! This method should be called only before any primitives are displayed in GL scene!)#"  , py::arg("theToTurnOn"))
        .def("MemoryInfo",
             (Standard_Boolean (OpenGl_GraphicDriver::*)( Standard_Size & ,  TCollection_AsciiString &  ) const) static_cast<Standard_Boolean (OpenGl_GraphicDriver::*)( Standard_Size & ,  TCollection_AsciiString &  ) const>(&OpenGl_GraphicDriver::MemoryInfo),
             R"#(Returns information about GPU memory usage. Please read OpenGl_Context::MemoryInfo() for more description.)#"  , py::arg("theFreeBytes"),  py::arg("theInfo"))
        .def("GetSharedContext",
             (const opencascade::handle<OpenGl_Context> & (OpenGl_GraphicDriver::*)() const) static_cast<const opencascade::handle<OpenGl_Context> & (OpenGl_GraphicDriver::*)() const>(&OpenGl_GraphicDriver::GetSharedContext),
             R"#(Method to retrieve valid GL context. Could return NULL-handle if no window created by this driver.)#" )
        .def("addZLayerIndex",
             (void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_GraphicDriver::addZLayerIndex),
             R"#(Insert index layer at proper position.)#"  , py::arg("theLayerId"))
        .def("setDeviceLost",
             (void (OpenGl_GraphicDriver::*)() ) static_cast<void (OpenGl_GraphicDriver::*)() >(&OpenGl_GraphicDriver::setDeviceLost),
             R"#(Set device lost flag for redrawn views.)#" )
        .def("GetStateCounter",
             (OpenGl_StateCounter * (OpenGl_GraphicDriver::*)() const) static_cast<OpenGl_StateCounter * (OpenGl_GraphicDriver::*)() const>(&OpenGl_GraphicDriver::GetStateCounter),
             R"#(State counter for OpenGl structures.)#" )
        .def("GetNextPrimitiveArrayUID",
             (Standard_Size (OpenGl_GraphicDriver::*)() const) static_cast<Standard_Size (OpenGl_GraphicDriver::*)() const>(&OpenGl_GraphicDriver::GetNextPrimitiveArrayUID),
             R"#(Returns unique ID for primitive arrays.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_GraphicDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_GraphicDriver::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_Window ,opencascade::handle<OpenGl_Window>  , Standard_Transient >>(m.attr("OpenGl_Window"))
        .def(py::init< const opencascade::handle<OpenGl_GraphicDriver> &,const opencascade::handle<Aspect_Window> &,Aspect_RenderingContext,const opencascade::handle<OpenGl_Caps> &,const opencascade::handle<OpenGl_Context> & >()  , py::arg("theDriver"),  py::arg("thePlatformWindow"),  py::arg("theGContext"),  py::arg("theCaps"),  py::arg("theShareCtx") )
        .def("Resize",
             (void (OpenGl_Window::*)() ) static_cast<void (OpenGl_Window::*)() >(&OpenGl_Window::Resize),
             R"#(Resizes the window.)#" )
        .def("PlatformWindow",
             (opencascade::handle<Aspect_Window> (OpenGl_Window::*)() ) static_cast<opencascade::handle<Aspect_Window> (OpenGl_Window::*)() >(&OpenGl_Window::PlatformWindow),
             R"#(None)#" )
        .def("Width",
             (Standard_Integer (OpenGl_Window::*)() const) static_cast<Standard_Integer (OpenGl_Window::*)() const>(&OpenGl_Window::Width),
             R"#(None)#" )
        .def("Height",
             (Standard_Integer (OpenGl_Window::*)() const) static_cast<Standard_Integer (OpenGl_Window::*)() const>(&OpenGl_Window::Height),
             R"#(None)#" )
        .def("GetGlContext",
             (const opencascade::handle<OpenGl_Context> & (OpenGl_Window::*)() const) static_cast<const opencascade::handle<OpenGl_Context> & (OpenGl_Window::*)() const>(&OpenGl_Window::GetGlContext),
             R"#(None)#" )
        .def("Init",
             (void (OpenGl_Window::*)() ) static_cast<void (OpenGl_Window::*)() >(&OpenGl_Window::Init),
             R"#(Activates GL context and setup viewport.)#" )
        .def("Activate",
             (Standard_Boolean (OpenGl_Window::*)() ) static_cast<Standard_Boolean (OpenGl_Window::*)() >(&OpenGl_Window::Activate),
             R"#(Makes GL context for this window active in current thread)#" )
        .def("SetSwapInterval",
             (void (OpenGl_Window::*)() ) static_cast<void (OpenGl_Window::*)() >(&OpenGl_Window::SetSwapInterval),
             R"#(Sets swap interval for this window according to the context's settings.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Window::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Window::*)() const>(&OpenGl_Window::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Window::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Window::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_VertexBuffer ,opencascade::handle<OpenGl_VertexBuffer>  , OpenGl_Resource >>(m.attr("OpenGl_VertexBuffer"))
        .def(py::init<  >()  )
        .def("GetTarget",
             (GLenum (OpenGl_VertexBuffer::*)() const) static_cast<GLenum (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::GetTarget),
             R"#(None)#" )
        .def("IsValid",
             (bool (OpenGl_VertexBuffer::*)() const) static_cast<bool (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::IsValid),
             R"#(Returns true if current object was initialized)#" )
        .def("GetComponentsNb",
             (GLuint (OpenGl_VertexBuffer::*)() const) static_cast<GLuint (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::GetComponentsNb),
             R"#(Returns the number of components per generic vertex attribute.)#" )
        .def("GetElemsNb",
             (GLsizei (OpenGl_VertexBuffer::*)() const) static_cast<GLsizei (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::GetElemsNb),
             R"#(Returns number of vertex attributes / number of vertices.)#" )
        .def("GetDataType",
             (GLenum (OpenGl_VertexBuffer::*)() const) static_cast<GLenum (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::GetDataType),
             R"#(Returns data type of each component in the array.)#" )
        .def("GetDataOffset",
             (GLubyte * (OpenGl_VertexBuffer::*)() const) static_cast<GLubyte * (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::GetDataOffset),
             R"#(Returns offset to data, NULL by default)#" )
        .def("Create",
             (bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_VertexBuffer::Create),
             R"#(Creates VBO name (id) if not yet generated. Data should be initialized by another method.)#"  , py::arg("theGlCtx"))
        .def("Release",
             (void (OpenGl_VertexBuffer::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_VertexBuffer::*)( OpenGl_Context *  ) >(&OpenGl_VertexBuffer::Release),
             R"#(Destroy object - will release GPU memory if any.)#"  , py::arg("theGlCtx"))
        .def("Bind",
             (void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_VertexBuffer::Bind),
             R"#(Bind this VBO.)#"  , py::arg("theGlCtx"))
        .def("Unbind",
             (void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_VertexBuffer::Unbind),
             R"#(Unbind this VBO.)#"  , py::arg("theGlCtx"))
        .def("Init",
             (bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLfloat *  ) ) static_cast<bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLfloat *  ) >(&OpenGl_VertexBuffer::Init),
             R"#(Notice that VBO will be unbound after this call.)#"  , py::arg("theGlCtx"),  py::arg("theComponentsNb"),  py::arg("theElemsNb"),  py::arg("theData"))
        .def("Init",
             (bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLuint *  ) ) static_cast<bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLuint *  ) >(&OpenGl_VertexBuffer::Init),
             R"#(Notice that VBO will be unbound after this call.)#"  , py::arg("theGlCtx"),  py::arg("theComponentsNb"),  py::arg("theElemsNb"),  py::arg("theData"))
        .def("Init",
             (bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLushort *  ) ) static_cast<bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLushort *  ) >(&OpenGl_VertexBuffer::Init),
             R"#(Notice that VBO will be unbound after this call.)#"  , py::arg("theGlCtx"),  py::arg("theComponentsNb"),  py::arg("theElemsNb"),  py::arg("theData"))
        .def("Init",
             (bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLubyte *  ) ) static_cast<bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLubyte *  ) >(&OpenGl_VertexBuffer::Init),
             R"#(Notice that VBO will be unbound after this call.)#"  , py::arg("theGlCtx"),  py::arg("theComponentsNb"),  py::arg("theElemsNb"),  py::arg("theData"))
        .def("SubData",
             (bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLfloat *  ) ) static_cast<bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLfloat *  ) >(&OpenGl_VertexBuffer::SubData),
             R"#(Notice that VBO will be unbound after this call. Function replaces portion of data within this VBO using glBufferSubData(). The VBO should be initialized before call.)#"  , py::arg("theGlCtx"),  py::arg("theElemFrom"),  py::arg("theElemsNb"),  py::arg("theData"))
        .def("SubData",
             (bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLuint *  ) ) static_cast<bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLuint *  ) >(&OpenGl_VertexBuffer::SubData),
             R"#(Notice that VBO will be unbound after this call. Function replaces portion of data within this VBO using glBufferSubData(). The VBO should be initialized before call.)#"  , py::arg("theGlCtx"),  py::arg("theElemFrom"),  py::arg("theElemsNb"),  py::arg("theData"))
        .def("SubData",
             (bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLushort *  ) ) static_cast<bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLushort *  ) >(&OpenGl_VertexBuffer::SubData),
             R"#(Notice that VBO will be unbound after this call. Function replaces portion of data within this VBO using glBufferSubData(). The VBO should be initialized before call.)#"  , py::arg("theGlCtx"),  py::arg("theElemFrom"),  py::arg("theElemsNb"),  py::arg("theData"))
        .def("SubData",
             (bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLubyte *  ) ) static_cast<bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const GLubyte *  ) >(&OpenGl_VertexBuffer::SubData),
             R"#(Notice that VBO will be unbound after this call. Function replaces portion of data within this VBO using glBufferSubData(). The VBO should be initialized before call.)#"  , py::arg("theGlCtx"),  py::arg("theElemFrom"),  py::arg("theElemsNb"),  py::arg("theData"))
        .def("BindVertexAttrib",
             (void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint  ) const) static_cast<void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint  ) const>(&OpenGl_VertexBuffer::BindVertexAttrib),
             R"#(Bind this VBO to active GLSL program.)#"  , py::arg("theGlCtx"),  py::arg("theAttribLoc"))
        .def("UnbindVertexAttrib",
             (void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint  ) const) static_cast<void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint  ) const>(&OpenGl_VertexBuffer::UnbindVertexAttrib),
             R"#(Unbind any VBO from active GLSL program.)#"  , py::arg("theGlCtx"),  py::arg("theAttribLoc"))
        .def("BindAttribute",
             (void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TypeOfAttribute  ) const) static_cast<void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TypeOfAttribute  ) const>(&OpenGl_VertexBuffer::BindAttribute),
             R"#(Bind this VBO and enable specified attribute in OpenGl_Context::ActiveProgram() or FFP.)#"  , py::arg("theCtx"),  py::arg("theMode"))
        .def("UnbindAttribute",
             (void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TypeOfAttribute  ) const) static_cast<void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TypeOfAttribute  ) const>(&OpenGl_VertexBuffer::UnbindAttribute),
             R"#(Unbind this VBO and disable specified attribute in OpenGl_Context::ActiveProgram() or FFP.)#"  , py::arg("theCtx"),  py::arg("theMode"))
        .def("EstimatedDataSize",
             (Standard_Size (OpenGl_VertexBuffer::*)() const) static_cast<Standard_Size (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::EstimatedDataSize),
             R"#(Returns estimated GPU memory usage for holding data without considering overheads and allocation alignment rules.)#" )
        .def("init",
             (bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const void * ,  const GLenum ,  const GLsizei  ) ) static_cast<bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const void * ,  const GLenum ,  const GLsizei  ) >(&OpenGl_VertexBuffer::init),
             R"#(Initialize buffer with new data.)#"  , py::arg("theGlCtx"),  py::arg("theComponentsNb"),  py::arg("theElemsNb"),  py::arg("theData"),  py::arg("theDataType"),  py::arg("theStride"))
        .def("init",
             (bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const void * ,  const GLenum  ) ) static_cast<bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const void * ,  const GLenum  ) >(&OpenGl_VertexBuffer::init),
             R"#(Initialize buffer with new data.)#"  , py::arg("theGlCtx"),  py::arg("theComponentsNb"),  py::arg("theElemsNb"),  py::arg("theData"),  py::arg("theDataType"))
        .def("subData",
             (bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const void * ,  const GLenum  ) ) static_cast<bool (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const void * ,  const GLenum  ) >(&OpenGl_VertexBuffer::subData),
             R"#(Update part of the buffer with new data.)#"  , py::arg("theGlCtx"),  py::arg("theElemFrom"),  py::arg("theElemsNb"),  py::arg("theData"),  py::arg("theDataType"))
        .def("HasColorAttribute",
             (bool (OpenGl_VertexBuffer::*)() const) static_cast<bool (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::HasColorAttribute),
             R"#(Returns true if buffer contains per-vertex color attribute)#" )
        .def("HasNormalAttribute",
             (bool (OpenGl_VertexBuffer::*)() const) static_cast<bool (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::HasNormalAttribute),
             R"#(Returns true if buffer contains per-vertex normal attribute)#" )
        .def("BindAllAttributes",
             (void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_VertexBuffer::BindAllAttributes),
             R"#(Bind all vertex attributes to active program OpenGl_Context::ActiveProgram() or for FFP. Default implementation does nothing.)#"  , py::arg("theGlCtx"))
        .def("BindPositionAttribute",
             (void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_VertexBuffer::BindPositionAttribute),
             R"#(Bind vertex position attribute only. Default implementation does nothing.)#"  , py::arg("theGlCtx"))
        .def("UnbindAllAttributes",
             (void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<void (OpenGl_VertexBuffer::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_VertexBuffer::UnbindAllAttributes),
             R"#(Unbind all vertex attributes. Default implementation does nothing.)#"  , py::arg("theGlCtx"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_VertexBuffer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::DynamicType),
             R"#(None)#" )
        .def_static("sizeOfGlType_s",
                    (size_t (*)( const GLenum  ) ) static_cast<size_t (*)( const GLenum  ) >(&OpenGl_VertexBuffer::sizeOfGlType),
                    R"#(Returns size of specified GL type)#"  , py::arg("theType"))
        .def_static("bindAttribute_s",
                    (void (*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TypeOfAttribute ,  const GLint ,  const GLenum ,  const GLsizei ,   const void *  ) ) static_cast<void (*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TypeOfAttribute ,  const GLint ,  const GLenum ,  const GLsizei ,   const void *  ) >(&OpenGl_VertexBuffer::bindAttribute),
                    R"#(Setup array pointer - either for active GLSL program OpenGl_Context::ActiveProgram() or for FFP using bindFixed() when no program bound.)#"  , py::arg("theGlCtx"),  py::arg("theMode"),  py::arg("theNbComp"),  py::arg("theDataType"),  py::arg("theStride"),  py::arg("theOffset"))
        .def_static("unbindAttribute_s",
                    (void (*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TypeOfAttribute  ) ) static_cast<void (*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TypeOfAttribute  ) >(&OpenGl_VertexBuffer::unbindAttribute),
                    R"#(Disable GLSL array pointer - either for active GLSL program OpenGl_Context::ActiveProgram() or for FFP using unbindFixed() when no program bound.)#"  , py::arg("theGlCtx"),  py::arg("theMode"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_VertexBuffer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_VertexBuffer::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_Sampler ,opencascade::handle<OpenGl_Sampler>  , OpenGl_Resource >>(m.attr("OpenGl_Sampler"))
        .def(py::init< const opencascade::handle<Graphic3d_TextureParams> & >()  , py::arg("theParams") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Sampler::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Sampler::*)() const>(&OpenGl_Sampler::DynamicType),
             R"#(None)#" )
        .def("Release",
             (void (OpenGl_Sampler::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_Sampler::*)( OpenGl_Context *  ) >(&OpenGl_Sampler::Release),
             R"#(Destroys object - will release GPU memory if any.)#"  , py::arg("theContext"))
        .def("EstimatedDataSize",
             (Standard_Size (OpenGl_Sampler::*)() const) static_cast<Standard_Size (OpenGl_Sampler::*)() const>(&OpenGl_Sampler::EstimatedDataSize),
             R"#(Returns estimated GPU memory usage - not implemented.)#" )
        .def("Create",
             (Standard_Boolean (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<Standard_Boolean (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_Sampler::Create),
             R"#(Creates an uninitialized sampler object.)#"  , py::arg("theContext"))
        .def("Init",
             (Standard_Boolean (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> & ,  const OpenGl_Texture &  ) ) static_cast<Standard_Boolean (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> & ,  const OpenGl_Texture &  ) >(&OpenGl_Sampler::Init),
             R"#(Creates and initializes sampler object. Existing object will be reused if possible, however if existing Sampler Object has Immutable flag and texture parameters should be re-initialized, then Sampler Object will be recreated.)#"  , py::arg("theContext"),  py::arg("theTexture"))
        .def("IsValid",
             (Standard_Boolean (OpenGl_Sampler::*)() const) static_cast<Standard_Boolean (OpenGl_Sampler::*)() const>(&OpenGl_Sampler::IsValid),
             R"#(Returns true if current object was initialized.)#" )
        .def("Bind",
             (void (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_Sampler::Bind),
             R"#(Binds sampler object to texture unit specified in parameters.)#"  , py::arg("theCtx"))
        .def("Unbind",
             (void (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_Sampler::Unbind),
             R"#(Unbinds sampler object from texture unit specified in parameters.)#"  , py::arg("theCtx"))
        .def("Bind",
             (void (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TextureUnit  ) ) static_cast<void (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TextureUnit  ) >(&OpenGl_Sampler::Bind),
             R"#(Binds sampler object to the given texture unit.)#"  , py::arg("theCtx"),  py::arg("theUnit"))
        .def("Unbind",
             (void (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TextureUnit  ) ) static_cast<void (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TextureUnit  ) >(&OpenGl_Sampler::Unbind),
             R"#(Unbinds sampler object from the given texture unit.)#"  , py::arg("theCtx"),  py::arg("theUnit"))
        .def("SetParameter",
             (void (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> & ,  GLenum ,  GLenum ,  GLint  ) ) static_cast<void (OpenGl_Sampler::*)( const opencascade::handle<OpenGl_Context> & ,  GLenum ,  GLenum ,  GLint  ) >(&OpenGl_Sampler::SetParameter),
             R"#(Sets specific sampler parameter.)#"  , py::arg("theCtx"),  py::arg("theTarget"),  py::arg("theParam"),  py::arg("theValue"))
        .def("SamplerID",
             (GLuint (OpenGl_Sampler::*)() const) static_cast<GLuint (OpenGl_Sampler::*)() const>(&OpenGl_Sampler::SamplerID),
             R"#(Returns OpenGL sampler ID.)#" )
        .def("IsImmutable",
             (bool (OpenGl_Sampler::*)() const) static_cast<bool (OpenGl_Sampler::*)() const>(&OpenGl_Sampler::IsImmutable),
             R"#(Return immutable flag preventing further modifications of sampler parameters, FALSE by default. Immutable flag might be set when Sampler Object is used within Bindless Texture.)#" )
        .def("SetImmutable",
             (void (OpenGl_Sampler::*)() ) static_cast<void (OpenGl_Sampler::*)() >(&OpenGl_Sampler::SetImmutable),
             R"#(Setup immutable flag. It is not possible unsetting this flag without Sampler destruction.)#" )
        .def("Parameters",
             (const opencascade::handle<Graphic3d_TextureParams> & (OpenGl_Sampler::*)() ) static_cast<const opencascade::handle<Graphic3d_TextureParams> & (OpenGl_Sampler::*)() >(&OpenGl_Sampler::Parameters),
             R"#(Returns texture parameters.)#" )
        .def("SetParameters",
             (void (OpenGl_Sampler::*)( const opencascade::handle<Graphic3d_TextureParams> &  ) ) static_cast<void (OpenGl_Sampler::*)( const opencascade::handle<Graphic3d_TextureParams> &  ) >(&OpenGl_Sampler::SetParameters),
             R"#(Sets texture parameters.)#"  , py::arg("theParams"))
        .def("ToUpdateParameters",
             (bool (OpenGl_Sampler::*)() const) static_cast<bool (OpenGl_Sampler::*)() const>(&OpenGl_Sampler::ToUpdateParameters),
             R"#(Returns texture parameters initialization state.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Sampler::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Sampler::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_IndexBuffer ,opencascade::handle<OpenGl_IndexBuffer>  , OpenGl_VertexBuffer >>(m.attr("OpenGl_IndexBuffer"))
        .def(py::init<  >()  )
        .def("GetTarget",
             (GLenum (OpenGl_IndexBuffer::*)() const) static_cast<GLenum (OpenGl_IndexBuffer::*)() const>(&OpenGl_IndexBuffer::GetTarget),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_IndexBuffer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_IndexBuffer::*)() const>(&OpenGl_IndexBuffer::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_IndexBuffer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_IndexBuffer::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_Font ,opencascade::handle<OpenGl_Font>  , OpenGl_Resource >>(m.attr("OpenGl_Font"))
        .def(py::init< const opencascade::handle<Font_FTFont> &,const TCollection_AsciiString & >()  , py::arg("theFont"),  py::arg("theKey")=static_cast<const TCollection_AsciiString &>("") )
        .def("Release",
             (void (OpenGl_Font::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_Font::*)( OpenGl_Context *  ) >(&OpenGl_Font::Release),
             R"#(Destroy object - will release GPU memory if any)#"  , py::arg("theCtx"))
        .def("EstimatedDataSize",
             (Standard_Size (OpenGl_Font::*)() const) static_cast<Standard_Size (OpenGl_Font::*)() const>(&OpenGl_Font::EstimatedDataSize),
             R"#(Returns estimated GPU memory usage.)#" )
        .def("ResourceKey",
             (const TCollection_AsciiString & (OpenGl_Font::*)() const) static_cast<const TCollection_AsciiString & (OpenGl_Font::*)() const>(&OpenGl_Font::ResourceKey),
             R"#(Returns key of shared resource)#" )
        .def("FTFont",
             (const opencascade::handle<Font_FTFont> & (OpenGl_Font::*)() const) static_cast<const opencascade::handle<Font_FTFont> & (OpenGl_Font::*)() const>(&OpenGl_Font::FTFont),
             R"#(Returns FreeType font instance specified on construction.)#" )
        .def("IsValid",
             (bool (OpenGl_Font::*)() const) static_cast<bool (OpenGl_Font::*)() const>(&OpenGl_Font::IsValid),
             R"#(Returns true if font was loaded successfully.)#" )
        .def("WasInitialized",
             (bool (OpenGl_Font::*)() const) static_cast<bool (OpenGl_Font::*)() const>(&OpenGl_Font::WasInitialized),
             R"#(Notice that this method doesn't return initialization success state. Use IsValid() instead.)#" )
        .def("Init",
             (bool (OpenGl_Font::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<bool (OpenGl_Font::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_Font::Init),
             R"#(Initialize GL resources. FreeType font instance should be already initialized!)#"  , py::arg("theCtx"))
        .def("Ascender",
             (float (OpenGl_Font::*)() const) static_cast<float (OpenGl_Font::*)() const>(&OpenGl_Font::Ascender),
             R"#(Returns vertical distance from the horizontal baseline to the highest character coordinate)#" )
        .def("Descender",
             (float (OpenGl_Font::*)() const) static_cast<float (OpenGl_Font::*)() const>(&OpenGl_Font::Descender),
             R"#(Returns vertical distance from the horizontal baseline to the lowest character coordinate)#" )
        .def("LineSpacing",
             (float (OpenGl_Font::*)() const) static_cast<float (OpenGl_Font::*)() const>(&OpenGl_Font::LineSpacing),
             R"#(Returns default line spacing (the baseline-to-baseline distance))#" )
        .def("RenderGlyph",
             (bool (OpenGl_Font::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Utf32Char ,  OpenGl_Font::Tile &  ) ) static_cast<bool (OpenGl_Font::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Utf32Char ,  OpenGl_Font::Tile &  ) >(&OpenGl_Font::RenderGlyph),
             R"#(Render glyph to texture if not already.)#"  , py::arg("theCtx"),  py::arg("theUChar"),  py::arg("theGlyph"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Font::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Font::*)() const>(&OpenGl_Font::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Font::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Font::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_LineAttributes ,opencascade::handle<OpenGl_LineAttributes>  , OpenGl_Resource >>(m.attr("OpenGl_LineAttributes"))
        .def(py::init<  >()  )
        .def("Release",
             (void (OpenGl_LineAttributes::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_LineAttributes::*)( OpenGl_Context *  ) >(&OpenGl_LineAttributes::Release),
             R"#(Release GL resources.)#"  , py::arg("theGlCtx"))
        .def("EstimatedDataSize",
             (Standard_Size (OpenGl_LineAttributes::*)() const) static_cast<Standard_Size (OpenGl_LineAttributes::*)() const>(&OpenGl_LineAttributes::EstimatedDataSize),
             R"#(Returns estimated GPU memory usage - not implemented.)#" )
        .def("TypeOfHatch",
             (int (OpenGl_LineAttributes::*)() const) static_cast<int (OpenGl_LineAttributes::*)() const>(&OpenGl_LineAttributes::TypeOfHatch),
             R"#(Index of currently selected type of hatch.)#" )
        .def("SetTypeOfHatch",
             (int (OpenGl_LineAttributes::*)( const OpenGl_Context * ,  const opencascade::handle<Graphic3d_HatchStyle> &  ) ) static_cast<int (OpenGl_LineAttributes::*)( const OpenGl_Context * ,  const opencascade::handle<Graphic3d_HatchStyle> &  ) >(&OpenGl_LineAttributes::SetTypeOfHatch),
             R"#(Sets type of the hatch.)#"  , py::arg("theGlCtx"),  py::arg("theStyle"))
        .def("IsEnabled",
             (bool (OpenGl_LineAttributes::*)() const) static_cast<bool (OpenGl_LineAttributes::*)() const>(&OpenGl_LineAttributes::IsEnabled),
             R"#(Current enabled state of the hatching rasterization.)#" )
        .def("SetEnabled",
             (bool (OpenGl_LineAttributes::*)( const OpenGl_Context * ,  const bool  ) ) static_cast<bool (OpenGl_LineAttributes::*)( const OpenGl_Context * ,  const bool  ) >(&OpenGl_LineAttributes::SetEnabled),
             R"#(Turns on/off the hatching rasterization rasterization.)#"  , py::arg("theGlCtx"),  py::arg("theToEnable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_LineAttributes::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_LineAttributes::*)() const>(&OpenGl_LineAttributes::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_LineAttributes::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_LineAttributes::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_TextureBufferArb ,opencascade::handle<OpenGl_TextureBufferArb>  , OpenGl_VertexBuffer >>(m.attr("OpenGl_TextureBufferArb"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_TextureBufferArb::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_TextureBufferArb::*)() const>(&OpenGl_TextureBufferArb::DynamicType),
             R"#(None)#" )
        .def("GetTarget",
             (GLenum (OpenGl_TextureBufferArb::*)() const) static_cast<GLenum (OpenGl_TextureBufferArb::*)() const>(&OpenGl_TextureBufferArb::GetTarget),
             R"#(Override VBO target)#" )
        .def("IsValid",
             (bool (OpenGl_TextureBufferArb::*)() const) static_cast<bool (OpenGl_TextureBufferArb::*)() const>(&OpenGl_TextureBufferArb::IsValid),
             R"#(Returns true if TBO is valid. Notice that no any real GL call is performed!)#" )
        .def("Release",
             (void (OpenGl_TextureBufferArb::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_TextureBufferArb::*)( OpenGl_Context *  ) >(&OpenGl_TextureBufferArb::Release),
             R"#(Destroy object - will release GPU memory if any.)#"  , py::arg("theGlCtx"))
        .def("Create",
             (bool (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<bool (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_TextureBufferArb::Create),
             R"#(Creates VBO and Texture names (ids) if not yet generated. Data should be initialized by another method.)#"  , py::arg("theGlCtx"))
        .def("Init",
             (bool (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLfloat *  ) ) static_cast<bool (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLfloat *  ) >(&OpenGl_TextureBufferArb::Init),
             R"#(Perform TBO initialization with specified data. Existing data will be deleted.)#"  , py::arg("theGlCtx"),  py::arg("theComponentsNb"),  py::arg("theElemsNb"),  py::arg("theData"))
        .def("Init",
             (bool (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLuint *  ) ) static_cast<bool (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLuint *  ) >(&OpenGl_TextureBufferArb::Init),
             R"#(Perform TBO initialization with specified data. Existing data will be deleted.)#"  , py::arg("theGlCtx"),  py::arg("theComponentsNb"),  py::arg("theElemsNb"),  py::arg("theData"))
        .def("Init",
             (bool (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLushort *  ) ) static_cast<bool (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLushort *  ) >(&OpenGl_TextureBufferArb::Init),
             R"#(Perform TBO initialization with specified data. Existing data will be deleted.)#"  , py::arg("theGlCtx"),  py::arg("theComponentsNb"),  py::arg("theElemsNb"),  py::arg("theData"))
        .def("Init",
             (bool (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLubyte *  ) ) static_cast<bool (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const GLubyte *  ) >(&OpenGl_TextureBufferArb::Init),
             R"#(Perform TBO initialization with specified data. Existing data will be deleted.)#"  , py::arg("theGlCtx"),  py::arg("theComponentsNb"),  py::arg("theElemsNb"),  py::arg("theData"))
        .def("BindTexture",
             (void (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TextureUnit  ) const) static_cast<void (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TextureUnit  ) const>(&OpenGl_TextureBufferArb::BindTexture),
             R"#(Bind TBO to specified Texture Unit.)#"  , py::arg("theGlCtx"),  py::arg("theTextureUnit"))
        .def("UnbindTexture",
             (void (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TextureUnit  ) const) static_cast<void (OpenGl_TextureBufferArb::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TextureUnit  ) const>(&OpenGl_TextureBufferArb::UnbindTexture),
             R"#(Unbind TBO.)#"  , py::arg("theGlCtx"),  py::arg("theTextureUnit"))
        .def("TextureId",
             (GLuint (OpenGl_TextureBufferArb::*)() const) static_cast<GLuint (OpenGl_TextureBufferArb::*)() const>(&OpenGl_TextureBufferArb::TextureId),
             R"#(Returns name of TBO.)#" )
        .def("TextureFormat",
             (GLenum (OpenGl_TextureBufferArb::*)() const) static_cast<GLenum (OpenGl_TextureBufferArb::*)() const>(&OpenGl_TextureBufferArb::TextureFormat),
             R"#(Returns internal texture format.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_TextureBufferArb::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_TextureBufferArb::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_Group ,opencascade::handle<OpenGl_Group>  , Graphic3d_Group >>(m.attr("OpenGl_Group"))
        .def(py::init< const opencascade::handle<Graphic3d_Structure> & >()  , py::arg("theStruct") )
        .def("Clear",
             (void (OpenGl_Group::*)( const Standard_Boolean  ) ) static_cast<void (OpenGl_Group::*)( const Standard_Boolean  ) >(&OpenGl_Group::Clear),
             R"#(None)#"  , py::arg("theToUpdateStructureMgr"))
        .def("LineAspect",
             (opencascade::handle<Graphic3d_AspectLine3d> (OpenGl_Group::*)() const) static_cast<opencascade::handle<Graphic3d_AspectLine3d> (OpenGl_Group::*)() const>(&OpenGl_Group::LineAspect),
             R"#(Return line aspect.)#" )
        .def("SetGroupPrimitivesAspect",
             (void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectLine3d> &  ) ) static_cast<void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectLine3d> &  ) >(&OpenGl_Group::SetGroupPrimitivesAspect),
             R"#(Update line aspect.)#"  , py::arg("theAspect"))
        .def("SetPrimitivesAspect",
             (void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectLine3d> &  ) ) static_cast<void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectLine3d> &  ) >(&OpenGl_Group::SetPrimitivesAspect),
             R"#(Append line aspect as an element.)#"  , py::arg("theAspect"))
        .def("MarkerAspect",
             (opencascade::handle<Graphic3d_AspectMarker3d> (OpenGl_Group::*)() const) static_cast<opencascade::handle<Graphic3d_AspectMarker3d> (OpenGl_Group::*)() const>(&OpenGl_Group::MarkerAspect),
             R"#(Return marker aspect.)#" )
        .def("SetGroupPrimitivesAspect",
             (void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectMarker3d> &  ) ) static_cast<void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectMarker3d> &  ) >(&OpenGl_Group::SetGroupPrimitivesAspect),
             R"#(Update marker aspect.)#"  , py::arg("theAspect"))
        .def("SetPrimitivesAspect",
             (void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectMarker3d> &  ) ) static_cast<void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectMarker3d> &  ) >(&OpenGl_Group::SetPrimitivesAspect),
             R"#(Append marker aspect as an element.)#"  , py::arg("theAspect"))
        .def("FillAreaAspect",
             (opencascade::handle<Graphic3d_AspectFillArea3d> (OpenGl_Group::*)() const) static_cast<opencascade::handle<Graphic3d_AspectFillArea3d> (OpenGl_Group::*)() const>(&OpenGl_Group::FillAreaAspect),
             R"#(Return fill area aspect.)#" )
        .def("SetGroupPrimitivesAspect",
             (void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectFillArea3d> &  ) ) static_cast<void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectFillArea3d> &  ) >(&OpenGl_Group::SetGroupPrimitivesAspect),
             R"#(Update face aspect.)#"  , py::arg("theAspect"))
        .def("SetPrimitivesAspect",
             (void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectFillArea3d> &  ) ) static_cast<void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectFillArea3d> &  ) >(&OpenGl_Group::SetPrimitivesAspect),
             R"#(Append face aspect as an element.)#"  , py::arg("theAspect"))
        .def("TextAspect",
             (opencascade::handle<Graphic3d_AspectText3d> (OpenGl_Group::*)() const) static_cast<opencascade::handle<Graphic3d_AspectText3d> (OpenGl_Group::*)() const>(&OpenGl_Group::TextAspect),
             R"#(Return marker aspect.)#" )
        .def("SetGroupPrimitivesAspect",
             (void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectText3d> &  ) ) static_cast<void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectText3d> &  ) >(&OpenGl_Group::SetGroupPrimitivesAspect),
             R"#(Update text aspect.)#"  , py::arg("theAspect"))
        .def("SetPrimitivesAspect",
             (void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectText3d> &  ) ) static_cast<void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_AspectText3d> &  ) >(&OpenGl_Group::SetPrimitivesAspect),
             R"#(Append text aspect as an element.)#"  , py::arg("theAspect"))
        .def("AddPrimitiveArray",
             (void (OpenGl_Group::*)( const Graphic3d_TypeOfPrimitiveArray ,  const opencascade::handle<Graphic3d_IndexBuffer> & ,  const opencascade::handle<Graphic3d_Buffer> & ,  const opencascade::handle<Graphic3d_BoundBuffer> & ,  const Standard_Boolean  ) ) static_cast<void (OpenGl_Group::*)( const Graphic3d_TypeOfPrimitiveArray ,  const opencascade::handle<Graphic3d_IndexBuffer> & ,  const opencascade::handle<Graphic3d_Buffer> & ,  const opencascade::handle<Graphic3d_BoundBuffer> & ,  const Standard_Boolean  ) >(&OpenGl_Group::AddPrimitiveArray),
             R"#(Add primitive array element)#"  , py::arg("theType"),  py::arg("theIndices"),  py::arg("theAttribs"),  py::arg("theBounds"),  py::arg("theToEvalMinMax"))
        .def("Text",
             (void (OpenGl_Group::*)( const Standard_CString ,  const Graphic3d_Vertex & ,  const Standard_Real ,  const Standard_Real ,  const Graphic3d_TextPath ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment ,  const Standard_Boolean  ) ) static_cast<void (OpenGl_Group::*)( const Standard_CString ,  const Graphic3d_Vertex & ,  const Standard_Real ,  const Standard_Real ,  const Graphic3d_TextPath ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment ,  const Standard_Boolean  ) >(&OpenGl_Group::Text),
             R"#(Add text element)#"  , py::arg("theTextUtf"),  py::arg("thePoint"),  py::arg("theHeight"),  py::arg("theAngle"),  py::arg("theTp"),  py::arg("theHta"),  py::arg("theVta"),  py::arg("theToEvalMinMax"))
        .def("Text",
             (void (OpenGl_Group::*)( const Standard_CString ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const Graphic3d_TextPath ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (OpenGl_Group::*)( const Standard_CString ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const Graphic3d_TextPath ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&OpenGl_Group::Text),
             R"#(Add text element in 3D space.)#"  , py::arg("theTextUtf"),  py::arg("theOrientation"),  py::arg("theHeight"),  py::arg("theAngle"),  py::arg("theTp"),  py::arg("theHTA"),  py::arg("theVTA"),  py::arg("theToEvalMinMax"),  py::arg("theHasOwnAnchor")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetFlippingOptions",
             (void (OpenGl_Group::*)( const Standard_Boolean ,  const gp_Ax2 &  ) ) static_cast<void (OpenGl_Group::*)( const Standard_Boolean ,  const gp_Ax2 &  ) >(&OpenGl_Group::SetFlippingOptions),
             R"#(Add flipping element)#"  , py::arg("theIsEnabled"),  py::arg("theRefPlane"))
        .def("SetStencilTestOptions",
             (void (OpenGl_Group::*)( const Standard_Boolean  ) ) static_cast<void (OpenGl_Group::*)( const Standard_Boolean  ) >(&OpenGl_Group::SetStencilTestOptions),
             R"#(Add stencil test element)#"  , py::arg("theIsEnabled"))
        .def("GlStruct",
             (OpenGl_Structure * (OpenGl_Group::*)() const) static_cast<OpenGl_Structure * (OpenGl_Group::*)() const>(&OpenGl_Group::GlStruct),
             R"#(None)#" )
        .def("AddElement",
             (void (OpenGl_Group::*)( OpenGl_Element *  ) ) static_cast<void (OpenGl_Group::*)( OpenGl_Element *  ) >(&OpenGl_Group::AddElement),
             R"#(None)#"  , py::arg("theElem"))
        .def("Render",
             (void (OpenGl_Group::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_Group::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_Group::Render),
             R"#(None)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_Group::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_Group::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_Group::Release),
             R"#(None)#"  , py::arg("theGlCtx"))
        .def("FirstNode",
             (const OpenGl_ElementNode * (OpenGl_Group::*)() const) static_cast<const OpenGl_ElementNode * (OpenGl_Group::*)() const>(&OpenGl_Group::FirstNode),
             R"#(Returns first OpenGL element node of the group.)#" )
        .def("AspectFace",
             (const OpenGl_AspectFace * (OpenGl_Group::*)() const) static_cast<const OpenGl_AspectFace * (OpenGl_Group::*)() const>(&OpenGl_Group::AspectFace),
             R"#(Returns OpenGL face aspect.)#" )
        .def("IsRaytracable",
             (Standard_Boolean (OpenGl_Group::*)() const) static_cast<Standard_Boolean (OpenGl_Group::*)() const>(&OpenGl_Group::IsRaytracable),
             R"#(Is the group ray-tracable (contains ray-tracable elements)?)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Group::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Group::*)() const>(&OpenGl_Group::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Group::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Group::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_NamedResource ,opencascade::handle<OpenGl_NamedResource> ,Py_OpenGl_NamedResource , OpenGl_Resource >>(m.attr("OpenGl_NamedResource"))
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theId") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_NamedResource::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_NamedResource::*)() const>(&OpenGl_NamedResource::DynamicType),
             R"#(None)#" )
        .def("ResourceId",
             (const TCollection_AsciiString & (OpenGl_NamedResource::*)() const) static_cast<const TCollection_AsciiString & (OpenGl_NamedResource::*)() const>(&OpenGl_NamedResource::ResourceId),
             R"#(Return resource name.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_NamedResource::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_NamedResource::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_VertexBufferCompat ,opencascade::handle<OpenGl_VertexBufferCompat>  , OpenGl_VertexBuffer >>(m.attr("OpenGl_VertexBufferCompat"))
        .def(py::init<  >()  )
        .def("Create",
             (bool (OpenGl_VertexBufferCompat::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<bool (OpenGl_VertexBufferCompat::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_VertexBufferCompat::Create),
             R"#(Creates VBO name (id) if not yet generated. Data should be initialized by another method.)#"  , py::arg("theGlCtx"))
        .def("Release",
             (void (OpenGl_VertexBufferCompat::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_VertexBufferCompat::*)( OpenGl_Context *  ) >(&OpenGl_VertexBufferCompat::Release),
             R"#(Destroy object - will release memory if any.)#"  , py::arg("theGlCtx"))
        .def("Bind",
             (void (OpenGl_VertexBufferCompat::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<void (OpenGl_VertexBufferCompat::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_VertexBufferCompat::Bind),
             R"#(Bind this VBO.)#"  , py::arg("theGlCtx"))
        .def("Unbind",
             (void (OpenGl_VertexBufferCompat::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<void (OpenGl_VertexBufferCompat::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_VertexBufferCompat::Unbind),
             R"#(Unbind this VBO.)#"  , py::arg("theGlCtx"))
        .def("initLink",
             (bool (OpenGl_VertexBufferCompat::*)( const opencascade::handle<NCollection_Buffer> & ,  const GLuint ,  const GLsizei ,  const GLenum  ) ) static_cast<bool (OpenGl_VertexBufferCompat::*)( const opencascade::handle<NCollection_Buffer> & ,  const GLuint ,  const GLsizei ,  const GLenum  ) >(&OpenGl_VertexBufferCompat::initLink),
             R"#(Initialize buffer with existing data. Data will NOT be copied by this method!)#"  , py::arg("theData"),  py::arg("theComponentsNb"),  py::arg("theElemsNb"),  py::arg("theDataType"))
        .def("init",
             (bool (OpenGl_VertexBufferCompat::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const void * ,  const GLenum ,  const GLsizei  ) ) static_cast<bool (OpenGl_VertexBufferCompat::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint ,  const GLsizei ,  const void * ,  const GLenum ,  const GLsizei  ) >(&OpenGl_VertexBufferCompat::init),
             R"#(Initialize buffer with new data (data will be copied).)#"  , py::arg("theGlCtx"),  py::arg("theComponentsNb"),  py::arg("theElemsNb"),  py::arg("theData"),  py::arg("theDataType"),  py::arg("theStride"))
        .def("subData",
             (bool (OpenGl_VertexBufferCompat::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const void * ,  const GLenum  ) ) static_cast<bool (OpenGl_VertexBufferCompat::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLsizei ,  const void * ,  const GLenum  ) >(&OpenGl_VertexBufferCompat::subData),
             R"#(Update part of the buffer with new data.)#"  , py::arg("theGlCtx"),  py::arg("theElemFrom"),  py::arg("theElemsNb"),  py::arg("theData"),  py::arg("theDataType"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_VertexBufferCompat::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_VertexBufferCompat::*)() const>(&OpenGl_VertexBufferCompat::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_VertexBufferCompat::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_VertexBufferCompat::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_ShaderProgram ,opencascade::handle<OpenGl_ShaderProgram>  , OpenGl_NamedResource >>(m.attr("OpenGl_ShaderProgram"))
        .def(py::init< const opencascade::handle<Graphic3d_ShaderProgram> & >()  , py::arg("theProxy")=static_cast<const opencascade::handle<Graphic3d_ShaderProgram> &>(NULL) )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_ShaderProgram::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_ShaderProgram::*)() const>(&OpenGl_ShaderProgram::DynamicType),
             R"#(None)#" )
        .def("Create",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_ShaderProgram::Create),
             R"#(Creates new empty shader program of specified type.)#"  , py::arg("theCtx"))
        .def("Release",
             (void (OpenGl_ShaderProgram::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_ShaderProgram::*)( OpenGl_Context *  ) >(&OpenGl_ShaderProgram::Release),
             R"#(Destroys shader program.)#"  , py::arg("theCtx"))
        .def("EstimatedDataSize",
             (Standard_Size (OpenGl_ShaderProgram::*)() const) static_cast<Standard_Size (OpenGl_ShaderProgram::*)() const>(&OpenGl_ShaderProgram::EstimatedDataSize),
             R"#(Returns estimated GPU memory usage - cannot be easily estimated.)#" )
        .def("AttachShader",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_ShaderObject> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_ShaderObject> &  ) >(&OpenGl_ShaderProgram::AttachShader),
             R"#(Attaches shader object to the program object.)#"  , py::arg("theCtx"),  py::arg("theShader"))
        .def("DetachShader",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_ShaderObject> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_ShaderObject> &  ) >(&OpenGl_ShaderProgram::DetachShader),
             R"#(Detaches shader object to the program object.)#"  , py::arg("theCtx"),  py::arg("theShader"))
        .def("Initialize",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,   const NCollection_Sequence<opencascade::handle<Graphic3d_ShaderObject> > &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,   const NCollection_Sequence<opencascade::handle<Graphic3d_ShaderObject> > &  ) >(&OpenGl_ShaderProgram::Initialize),
             R"#(Initializes program object with the list of shader objects.)#"  , py::arg("theCtx"),  py::arg("theShaders"))
        .def("Link",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_ShaderProgram::Link),
             R"#(Links the program object.)#"  , py::arg("theCtx"))
        .def("FetchInfoLog",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  TCollection_AsciiString &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  TCollection_AsciiString &  ) >(&OpenGl_ShaderProgram::FetchInfoLog),
             R"#(Fetches information log of the last link operation.)#"  , py::arg("theCtx"),  py::arg("theLog"))
        .def("ApplyVariables",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_ShaderProgram::ApplyVariables),
             R"#(Fetches uniform variables from proxy shader program.)#"  , py::arg("theCtx"))
        .def("IsValid",
             (bool (OpenGl_ShaderProgram::*)() const) static_cast<bool (OpenGl_ShaderProgram::*)() const>(&OpenGl_ShaderProgram::IsValid),
             R"#(Returns true if current object was initialized)#" )
        .def("ProgramId",
             (GLuint (OpenGl_ShaderProgram::*)() const) static_cast<GLuint (OpenGl_ShaderProgram::*)() const>(&OpenGl_ShaderProgram::ProgramId),
             R"#(Returns program ID)#" )
        .def("HasTessellationStage",
             (Standard_Boolean (OpenGl_ShaderProgram::*)() const) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)() const>(&OpenGl_ShaderProgram::HasTessellationStage),
             R"#(Return TRUE if program defines tessellation stage.)#" )
        .def("NbLightsMax",
             (Standard_Integer (OpenGl_ShaderProgram::*)() const) static_cast<Standard_Integer (OpenGl_ShaderProgram::*)() const>(&OpenGl_ShaderProgram::NbLightsMax),
             R"#(Return the length of array of light sources (THE_MAX_LIGHTS), to be used for initialization occLightSources (OpenGl_OCC_LIGHT_SOURCE_PARAMS).)#" )
        .def("NbClipPlanesMax",
             (Standard_Integer (OpenGl_ShaderProgram::*)() const) static_cast<Standard_Integer (OpenGl_ShaderProgram::*)() const>(&OpenGl_ShaderProgram::NbClipPlanesMax),
             R"#(Return the length of array of clipping planes (THE_MAX_CLIP_PLANES), to be used for initialization occClipPlaneEquations (OpenGl_OCC_CLIP_PLANE_EQUATIONS).)#" )
        .def("NbFragmentOutputs",
             (Standard_Integer (OpenGl_ShaderProgram::*)() const) static_cast<Standard_Integer (OpenGl_ShaderProgram::*)() const>(&OpenGl_ShaderProgram::NbFragmentOutputs),
             R"#(Return the length of array of Fragment Shader outputs (THE_NB_FRAG_OUTPUTS), to be used for initialization occFragColorArray/occFragColorN.)#" )
        .def("HasAlphaTest",
             (Standard_Boolean (OpenGl_ShaderProgram::*)() const) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)() const>(&OpenGl_ShaderProgram::HasAlphaTest),
             R"#(Return true if Fragment Shader should perform alpha test; FALSE by default.)#" )
        .def("HasWeightOitOutput",
             (Standard_Boolean (OpenGl_ShaderProgram::*)() const) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)() const>(&OpenGl_ShaderProgram::HasWeightOitOutput),
             R"#(Return true if Fragment Shader color should output the weighted OIT coverage; FALSE by default.)#" )
        .def("GetUniformLocation",
             (GLint (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar *  ) const) static_cast<GLint (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar *  ) const>(&OpenGl_ShaderProgram::GetUniformLocation),
             R"#(Returns location of the specific uniform variable.)#"  , py::arg("theCtx"),  py::arg("theName"))
        .def("GetAttributeLocation",
             (GLint (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar *  ) const) static_cast<GLint (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar *  ) const>(&OpenGl_ShaderProgram::GetAttributeLocation),
             R"#(Returns index of the generic vertex attribute by variable name.)#"  , py::arg("theCtx"),  py::arg("theName"))
        .def("GetStateLocation",
             (GLint (OpenGl_ShaderProgram::*)( const GLuint  ) const) static_cast<GLint (OpenGl_ShaderProgram::*)( const GLuint  ) const>(&OpenGl_ShaderProgram::GetStateLocation),
             R"#(Returns location of the OCCT state uniform variable.)#"  , py::arg("theVariable"))
        .def("GetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  Graphic3d_Vec4i &  ) const) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  Graphic3d_Vec4i &  ) const>(&OpenGl_ShaderProgram::GetUniform),
             R"#(Returns the value of the integer uniform variable.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("GetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  Graphic3d_Vec4i &  ) const) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  Graphic3d_Vec4i &  ) const>(&OpenGl_ShaderProgram::GetUniform),
             R"#(None)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theValue"))
        .def("GetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  Graphic3d_Vec4 &  ) const) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  Graphic3d_Vec4 &  ) const>(&OpenGl_ShaderProgram::GetUniform),
             R"#(Returns the value of the float uniform variable.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("GetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  Graphic3d_Vec4 &  ) const) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  Graphic3d_Vec4 &  ) const>(&OpenGl_ShaderProgram::GetUniform),
             R"#(Returns the value of the float uniform variable.)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theValue"))
        .def("GetAttribute",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  Graphic3d_Vec4i &  ) const) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  Graphic3d_Vec4i &  ) const>(&OpenGl_ShaderProgram::GetAttribute),
             R"#(Returns the integer vertex attribute.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("GetAttribute",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  Graphic3d_Vec4i &  ) const) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  Graphic3d_Vec4i &  ) const>(&OpenGl_ShaderProgram::GetAttribute),
             R"#(Returns the integer vertex attribute.)#"  , py::arg("theCtx"),  py::arg("theIndex"),  py::arg("theValue"))
        .def("GetAttribute",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  Graphic3d_Vec4 &  ) const) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  Graphic3d_Vec4 &  ) const>(&OpenGl_ShaderProgram::GetAttribute),
             R"#(Returns the float vertex attribute.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("GetAttribute",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  Graphic3d_Vec4 &  ) const) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  Graphic3d_Vec4 &  ) const>(&OpenGl_ShaderProgram::GetAttribute),
             R"#(Returns the float vertex attribute.)#"  , py::arg("theCtx"),  py::arg("theIndex"),  py::arg("theValue"))
        .def("SetAttributeName",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  const GLchar *  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  const GLchar *  ) >(&OpenGl_ShaderProgram::SetAttributeName),
             R"#(Wrapper for glBindAttribLocation())#"  , py::arg("theCtx"),  py::arg("theIndex"),  py::arg("theName"))
        .def("SetAttribute",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  GLfloat  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  GLfloat  ) >(&OpenGl_ShaderProgram::SetAttribute),
             R"#(Wrapper for glVertexAttrib1f())#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("SetAttribute",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLfloat  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLfloat  ) >(&OpenGl_ShaderProgram::SetAttribute),
             R"#(Wrapper for glVertexAttrib1f())#"  , py::arg("theCtx"),  py::arg("theIndex"),  py::arg("theValue"))
        .def("SetAttribute",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec2 &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec2 &  ) >(&OpenGl_ShaderProgram::SetAttribute),
             R"#(Wrapper for glVertexAttrib2fv())#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("SetAttribute",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec2 &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec2 &  ) >(&OpenGl_ShaderProgram::SetAttribute),
             R"#(Wrapper for glVertexAttrib2fv())#"  , py::arg("theCtx"),  py::arg("theIndex"),  py::arg("theValue"))
        .def("SetAttribute",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec3 &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec3 &  ) >(&OpenGl_ShaderProgram::SetAttribute),
             R"#(Wrapper for glVertexAttrib3fv())#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("SetAttribute",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec3 &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec3 &  ) >(&OpenGl_ShaderProgram::SetAttribute),
             R"#(Wrapper for glVertexAttrib3fv())#"  , py::arg("theCtx"),  py::arg("theIndex"),  py::arg("theValue"))
        .def("SetAttribute",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec4 &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec4 &  ) >(&OpenGl_ShaderProgram::SetAttribute),
             R"#(Wrapper for glVertexAttrib4fv())#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("SetAttribute",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec4 &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec4 &  ) >(&OpenGl_ShaderProgram::SetAttribute),
             R"#(Wrapper for glVertexAttrib4fv())#"  , py::arg("theCtx"),  py::arg("theIndex"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  GLint  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  GLint  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the integer uniform variable.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLint  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLint  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the integer uniform variable.)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec2i &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec2i &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the integer uniform 2D vector.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec2i &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec2i &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the integer uniform 2D vector.)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec3i &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec3i &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the integer uniform 3D vector.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec3i &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec3i &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the integer uniform 3D vector.)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec4i &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec4i &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the integer uniform 4D vector.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec4i &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec4i &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the integer uniform 4D vector.)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec2u &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec2u &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the unsigned integer uniform 2D vector (uvec2).)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec2u &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec2u &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the unsigned integer uniform 2D vector (uvec2).)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  const GLsizei ,   const Graphic3d_Vec2u *  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  const GLsizei ,   const Graphic3d_Vec2u *  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the uvec2 uniform array)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theCount"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  const GLsizei ,   const Graphic3d_Vec2u *  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  const GLsizei ,   const Graphic3d_Vec2u *  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the uvec2 uniform array)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theCount"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  GLfloat  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  GLfloat  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float uniform variable.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLfloat  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLfloat  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float uniform variable.)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec2 &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec2 &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float uniform 2D vector.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec2 &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec2 &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float uniform 2D vector.)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec3 &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec3 &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float uniform 3D vector.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec3 &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec3 &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float uniform 3D vector.)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec4 &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Vec4 &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float uniform 4D vector.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec4 &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Vec4 &  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float uniform 4D vector.)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theValue"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Mat4 & ,  GLboolean  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,   const Graphic3d_Mat4 & ,  GLboolean  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float uniform 4x4 matrix.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"),  py::arg("theTranspose")=static_cast<GLboolean>(GL_FALSE))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Mat4 & ,  GLboolean  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,   const Graphic3d_Mat4 & ,  GLboolean  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float uniform 4x4 matrix.)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theValue"),  py::arg("theTranspose")=static_cast<GLboolean>(GL_FALSE))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  const OpenGl_Matrix & ,  GLboolean  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  const OpenGl_Matrix & ,  GLboolean  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float uniform 4x4 matrix.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theValue"),  py::arg("theTranspose")=static_cast<GLboolean>(GL_FALSE))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  const OpenGl_Matrix & ,  GLboolean  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  const OpenGl_Matrix & ,  GLboolean  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float uniform 4x4 matrix.)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theValue"),  py::arg("theTranspose")=static_cast<GLboolean>(GL_FALSE))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,  const Standard_ShortReal *  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,  const Standard_ShortReal *  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float uniform array)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theCount"),  py::arg("theData"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,   const Graphic3d_Vec2 *  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,   const Graphic3d_Vec2 *  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float2 uniform array)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theCount"),  py::arg("theData"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,   const Graphic3d_Vec3 *  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,   const Graphic3d_Vec3 *  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float3 uniform array)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theCount"),  py::arg("theData"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,   const Graphic3d_Vec4 *  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,   const Graphic3d_Vec4 *  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the float4 uniform array)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theCount"),  py::arg("theData"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,  const Standard_Integer *  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,  const Standard_Integer *  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the integer uniform array)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theCount"),  py::arg("theData"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,   const Graphic3d_Vec2i *  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,   const Graphic3d_Vec2i *  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the int2 uniform array)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theCount"),  py::arg("theData"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,   const Graphic3d_Vec3i *  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,   const Graphic3d_Vec3i *  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the int3 uniform array)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theCount"),  py::arg("theData"))
        .def("SetUniform",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,   const Graphic3d_Vec4i *  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  GLuint ,   const Graphic3d_Vec4i *  ) >(&OpenGl_ShaderProgram::SetUniform),
             R"#(Specifies the value of the int4 uniform array)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theCount"),  py::arg("theData"))
        .def("SetSampler",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  const Graphic3d_TextureUnit  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar * ,  const Graphic3d_TextureUnit  ) >(&OpenGl_ShaderProgram::SetSampler),
             R"#(Specifies the value of the sampler uniform variable.)#"  , py::arg("theCtx"),  py::arg("theName"),  py::arg("theTextureUnit"))
        .def("SetSampler",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  const Graphic3d_TextureUnit  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  GLint ,  const Graphic3d_TextureUnit  ) >(&OpenGl_ShaderProgram::SetSampler),
             R"#(Specifies the value of the sampler uniform variable.)#"  , py::arg("theCtx"),  py::arg("theLocation"),  py::arg("theTextureUnit"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_ShaderProgram::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_ShaderProgram::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<OpenGl_Texture ,opencascade::handle<OpenGl_Texture>  , OpenGl_NamedResource >>(m.attr("OpenGl_Texture"))
        .def(py::init< const TCollection_AsciiString &,const opencascade::handle<Graphic3d_TextureParams> & >()  , py::arg("theResourceId")=static_cast<const TCollection_AsciiString &>(TCollection_AsciiString ( )),  py::arg("theParams")=static_cast<const opencascade::handle<Graphic3d_TextureParams> &>(Handle ( Graphic3d_TextureParams ) ( )) )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Texture::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Texture::*)() const>(&OpenGl_Texture::DynamicType),
             R"#(None)#" )
        .def("IsValid",
             (bool (OpenGl_Texture::*)() const) static_cast<bool (OpenGl_Texture::*)() const>(&OpenGl_Texture::IsValid),
             R"#(Returns true if current object was initialized)#" )
        .def("GetTarget",
             (GLenum (OpenGl_Texture::*)() const) static_cast<GLenum (OpenGl_Texture::*)() const>(&OpenGl_Texture::GetTarget),
             R"#(Returns target to which the texture is bound (GL_TEXTURE_1D, GL_TEXTURE_2D))#" )
        .def("SizeX",
             (GLsizei (OpenGl_Texture::*)() const) static_cast<GLsizei (OpenGl_Texture::*)() const>(&OpenGl_Texture::SizeX),
             R"#(Returns texture width (0 LOD))#" )
        .def("SizeY",
             (GLsizei (OpenGl_Texture::*)() const) static_cast<GLsizei (OpenGl_Texture::*)() const>(&OpenGl_Texture::SizeY),
             R"#(Returns texture height (0 LOD))#" )
        .def("TextureId",
             (GLuint (OpenGl_Texture::*)() const) static_cast<GLuint (OpenGl_Texture::*)() const>(&OpenGl_Texture::TextureId),
             R"#(Returns texture ID)#" )
        .def("GetFormat",
             (GLenum (OpenGl_Texture::*)() const) static_cast<GLenum (OpenGl_Texture::*)() const>(&OpenGl_Texture::GetFormat),
             R"#(Returns texture format (not sized))#" )
        .def("IsAlpha",
             (bool (OpenGl_Texture::*)() const) static_cast<bool (OpenGl_Texture::*)() const>(&OpenGl_Texture::IsAlpha),
             R"#(Return true for GL_RED and GL_ALPHA formats.)#" )
        .def("SetAlpha",
             (void (OpenGl_Texture::*)( const bool  ) ) static_cast<void (OpenGl_Texture::*)( const bool  ) >(&OpenGl_Texture::SetAlpha),
             R"#(Setup to interprete the format as Alpha by Shader Manager (should be GL_ALPHA within compatible context or GL_RED otherwise).)#"  , py::arg("theValue"))
        .def("Create",
             (bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_Texture::Create),
             R"#(Creates Texture id if not yet generated. Data should be initialized by another method.)#"  , py::arg("theCtx"))
        .def("Release",
             (void (OpenGl_Texture::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_Texture::*)( OpenGl_Context *  ) >(&OpenGl_Texture::Release),
             R"#(Destroy object - will release GPU memory if any.)#"  , py::arg("theCtx"))
        .def("Sampler",
             (const opencascade::handle<OpenGl_Sampler> & (OpenGl_Texture::*)() const) static_cast<const opencascade::handle<OpenGl_Sampler> & (OpenGl_Texture::*)() const>(&OpenGl_Texture::Sampler),
             R"#(Return texture sampler.)#" )
        .def("SetSampler",
             (void (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Sampler> &  ) ) static_cast<void (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Sampler> &  ) >(&OpenGl_Texture::SetSampler),
             R"#(Set texture sampler.)#"  , py::arg("theSampler"))
        .def("InitSamplerObject",
             (bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_Texture::InitSamplerObject),
             R"#(Initialize the Sampler Object (as OpenGL object).)#"  , py::arg("theCtx"))
        .def("Bind",
             (void (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<void (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_Texture::Bind),
             R"#(Bind this Texture to the unit specified in sampler parameters. Also binds Sampler Object if it is allocated.)#"  , py::arg("theCtx"))
        .def("Unbind",
             (void (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<void (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_Texture::Unbind),
             R"#(Unbind texture from the unit specified in sampler parameters. Also unbinds Sampler Object if it is allocated.)#"  , py::arg("theCtx"))
        .def("Bind",
             (void (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TextureUnit  ) const) static_cast<void (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TextureUnit  ) const>(&OpenGl_Texture::Bind),
             R"#(Bind this Texture to specified unit. Also binds Sampler Object if it is allocated.)#"  , py::arg("theCtx"),  py::arg("theTextureUnit"))
        .def("Unbind",
             (void (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TextureUnit  ) const) static_cast<void (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const Graphic3d_TextureUnit  ) const>(&OpenGl_Texture::Unbind),
             R"#(Unbind texture from specified unit. Also unbinds Sampler Object if it is allocated.)#"  , py::arg("theCtx"),  py::arg("theTextureUnit"))
        .def("Revision",
             (Standard_Size (OpenGl_Texture::*)() const) static_cast<Standard_Size (OpenGl_Texture::*)() const>(&OpenGl_Texture::Revision),
             R"#(Revision of associated data source.)#" )
        .def("SetRevision",
             (void (OpenGl_Texture::*)( const Standard_Size  ) ) static_cast<void (OpenGl_Texture::*)( const Standard_Size  ) >(&OpenGl_Texture::SetRevision),
             R"#(Set revision of associated data source.)#"  , py::arg("theRevision"))
        .def("Init",
             (bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const Image_PixMap & ,  const Graphic3d_TypeOfTexture  ) ) static_cast<bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const Image_PixMap & ,  const Graphic3d_TypeOfTexture  ) >(&OpenGl_Texture::Init),
             R"#(Notice that texture will be unbound after this call.)#"  , py::arg("theCtx"),  py::arg("theImage"),  py::arg("theType"))
        .def("Init",
             (bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const GLint ,  const GLenum ,  const GLenum ,  const GLsizei ,  const GLsizei ,  const Graphic3d_TypeOfTexture ,  const Image_PixMap *  ) ) static_cast<bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const GLint ,  const GLenum ,  const GLenum ,  const GLsizei ,  const GLsizei ,  const Graphic3d_TypeOfTexture ,  const Image_PixMap *  ) >(&OpenGl_Texture::Init),
             R"#(Initialize the texture with specified format, size and texture type. If theImage is empty the texture data will contain trash. Notice that texture will be unbound after this call.)#"  , py::arg("theCtx"),  py::arg("theTextFormat"),  py::arg("thePixelFormat"),  py::arg("theDataType"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theType"),  py::arg("theImage")=static_cast<const Image_PixMap *>(NULL))
        .def("Init2DMultisample",
             (bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLint ,  const GLsizei ,  const GLsizei  ) ) static_cast<bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLint ,  const GLsizei ,  const GLsizei  ) >(&OpenGl_Texture::Init2DMultisample),
             R"#(Initialize the 2D multisampling texture using glTexImage2DMultisample().)#"  , py::arg("theCtx"),  py::arg("theNbSamples"),  py::arg("theTextFormat"),  py::arg("theSizeX"),  py::arg("theSizeY"))
        .def("InitRectangle",
             (bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Integer ,  const Standard_Integer ,  const OpenGl_TextureFormat &  ) ) static_cast<bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Integer ,  const Standard_Integer ,  const OpenGl_TextureFormat &  ) >(&OpenGl_Texture::InitRectangle),
             R"#(Allocates texture rectangle with specified format and size.)#"  , py::arg("theCtx"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theFormat"))
        .def("Init3D",
             (bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const GLint ,  const GLenum ,  const GLenum ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const void *  ) ) static_cast<bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const GLint ,  const GLenum ,  const GLenum ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const void *  ) >(&OpenGl_Texture::Init3D),
             R"#(Initializes 3D texture rectangle with specified format and size.)#"  , py::arg("theCtx"),  py::arg("theTextFormat"),  py::arg("thePixelFormat"),  py::arg("theDataType"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theSizeZ"),  py::arg("thePixels"))
        .def("HasMipmaps",
             (Standard_Boolean (OpenGl_Texture::*)() const) static_cast<Standard_Boolean (OpenGl_Texture::*)() const>(&OpenGl_Texture::HasMipmaps),
             R"#(Returns true if texture was generated within mipmaps)#" )
        .def("EstimatedDataSize",
             (Standard_Size (OpenGl_Texture::*)() const) static_cast<Standard_Size (OpenGl_Texture::*)() const>(&OpenGl_Texture::EstimatedDataSize),
             R"#(Returns estimated GPU memory usage for holding data without considering overheads and allocation alignment rules.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Texture::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Texture::get_type_descriptor),
                    R"#(None)#" )
        .def_static("PixelSizeOfPixelFormat_s",
                    (Standard_Size (*)( Standard_Integer  ) ) static_cast<Standard_Size (*)( Standard_Integer  ) >(&OpenGl_Texture::PixelSizeOfPixelFormat),
                    R"#(Return pixel size of pixel format in bytes. Note that this method considers that OpenGL natively supports this pixel format, which might be not the case - in the latter case, actual pixel size might differ!)#"  , py::arg("theInternalFormat"))
        .def_static("GetDataFormat_s",
                    (bool (*)( const opencascade::handle<OpenGl_Context> & ,  const Image_PixMap & ,  GLint & ,  GLenum & ,  GLenum &  ) ) static_cast<bool (*)( const opencascade::handle<OpenGl_Context> & ,  const Image_PixMap & ,  GLint & ,  GLenum & ,  GLenum &  ) >(&OpenGl_Texture::GetDataFormat),
                    R"#(Return texture type and format by Image_PixMap data format.)#"  , py::arg("theCtx"),  py::arg("theData"),  py::arg("theTextFormat"),  py::arg("thePixelFormat"),  py::arg("theDataType"))
;


    static_cast<py::class_<OpenGl_PointSprite ,opencascade::handle<OpenGl_PointSprite>  , OpenGl_Texture >>(m.attr("OpenGl_PointSprite"))
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theResourceId") )
        .def("Release",
             (void (OpenGl_PointSprite::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_PointSprite::*)( OpenGl_Context *  ) >(&OpenGl_PointSprite::Release),
             R"#(Destroy object - will release GPU memory if any.)#"  , py::arg("theCtx"))
        .def("IsDisplayList",
             (Standard_Boolean (OpenGl_PointSprite::*)() const) static_cast<Standard_Boolean (OpenGl_PointSprite::*)() const>(&OpenGl_PointSprite::IsDisplayList),
             R"#(Returns true if this is display list bitmap)#" )
        .def("DrawBitmap",
             (void (OpenGl_PointSprite::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<void (OpenGl_PointSprite::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_PointSprite::DrawBitmap),
             R"#(Draw sprite using glBitmap. Please call glRasterPos3fv() before to setup sprite position.)#"  , py::arg("theCtx"))
        .def("SetDisplayList",
             (void (OpenGl_PointSprite::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint  ) ) static_cast<void (OpenGl_PointSprite::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint  ) >(&OpenGl_PointSprite::SetDisplayList),
             R"#(Initialize point sprite as display list)#"  , py::arg("theCtx"),  py::arg("theBitmapList"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_PointSprite::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_PointSprite::*)() const>(&OpenGl_PointSprite::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_PointSprite::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_PointSprite::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/OpenGl_AspectLine.hxx
// ./opencascade/OpenGl_BackgroundArray.hxx
// ./opencascade/OpenGl_GlCore20.hxx
// ./opencascade/OpenGl_GraphicDriver.hxx
// ./opencascade/OpenGl_TextureSet.hxx
// ./opencascade/OpenGl_StructureShadow.hxx
// ./opencascade/OpenGl_GlCore44.hxx
// ./opencascade/OpenGl_FrameStatsPrs.hxx
// ./opencascade/OpenGl_MatrixState.hxx
// ./opencascade/OpenGl_GlCore40.hxx
// ./opencascade/OpenGl_SceneGeometry.hxx
// ./opencascade/OpenGl_GlCore21.hxx
// ./opencascade/OpenGl_SetOfShaderPrograms.hxx
// ./opencascade/OpenGl_ArbDbg.hxx
// ./opencascade/OpenGl_Text.hxx
// ./opencascade/OpenGl_NamedResource.hxx
// ./opencascade/OpenGl_GlFunctions.hxx
// ./opencascade/OpenGl_Workspace.hxx
// ./opencascade/OpenGl_Element.hxx
// ./opencascade/OpenGl_Window.hxx
// ./opencascade/OpenGl_BVHClipPrimitiveTrsfPersSet.hxx
// ./opencascade/OpenGl_Context.hxx
// ./opencascade/OpenGl_LayerList.hxx
// ./opencascade/OpenGl_LineAttributes.hxx
// ./opencascade/OpenGl_ShaderProgram.hxx
// ./opencascade/OpenGl_GlCore12.hxx
// ./opencascade/OpenGl_TileSampler.hxx
// ./opencascade/OpenGl_VertexBuffer.hxx
// ./opencascade/OpenGl_CappingPlaneResource.hxx
// ./opencascade/OpenGl_TextureBufferArb.hxx
// ./opencascade/OpenGl_Clipping.hxx
// ./opencascade/OpenGl_Sampler.hxx
// ./opencascade/OpenGl_RenderFilter.hxx
// ./opencascade/OpenGl_GlCore15.hxx
// ./opencascade/OpenGl_ArbIns.hxx
// ./opencascade/OpenGl_BVHTreeSelector.hxx
// ./opencascade/OpenGl_GlCore41.hxx
// ./opencascade/OpenGl_Structure.hxx
// ./opencascade/OpenGl_PointSprite.hxx
// ./opencascade/OpenGl_Caps.hxx
// ./opencascade/OpenGl_GraduatedTrihedron.hxx
// ./opencascade/OpenGl_ArbSamplerObject.hxx
// ./opencascade/OpenGl_FrameStats.hxx
// ./opencascade/OpenGl_MaterialState.hxx
// ./opencascade/OpenGl_GlCore33.hxx
// ./opencascade/OpenGl_AspectText.hxx
// ./opencascade/OpenGl_MapOfZLayerSettings.hxx
// ./opencascade/OpenGl_View.hxx
// ./opencascade/OpenGl_GlCore43.hxx
// ./opencascade/OpenGl_GlCore11Fwd.hxx
// ./opencascade/OpenGl_StencilTest.hxx
// ./opencascade/OpenGl_Group.hxx
// ./opencascade/OpenGl_ArbTexBindless.hxx
// ./opencascade/OpenGl_ShaderManager.hxx
// ./opencascade/OpenGl_IndexBuffer.hxx
// ./opencascade/OpenGl_Material.hxx
// ./opencascade/OpenGl_AspectMarker.hxx
// ./opencascade/OpenGl_Matrix.hxx
// ./opencascade/OpenGl_HaltonSampler.hxx
// ./opencascade/OpenGl_ArbTBO.hxx
// ./opencascade/OpenGl_ExtGS.hxx
// ./opencascade/OpenGl_AspectFace.hxx
// ./opencascade/OpenGl_Texture.hxx
// ./opencascade/OpenGl_Resource.hxx
// ./opencascade/OpenGl_Layer.hxx
// ./opencascade/OpenGl_TextBuilder.hxx
// ./opencascade/OpenGl_Font.hxx
// ./opencascade/OpenGl_PrimitiveArray.hxx
// ./opencascade/OpenGl_ArbFBO.hxx
// ./opencascade/OpenGl_BVHClipPrimitiveSet.hxx
// ./opencascade/OpenGl_ShaderStates.hxx
// ./opencascade/OpenGl_Vec.hxx
// ./opencascade/OpenGl_VertexBufferEditor.hxx
// ./opencascade/OpenGl_VertexBufferCompat.hxx
// ./opencascade/OpenGl_GlCore14.hxx
// ./opencascade/OpenGl_GlCore31.hxx
// ./opencascade/OpenGl_GlCore30.hxx
// ./opencascade/OpenGl_GlCore11.hxx
// ./opencascade/OpenGl_LayerFilter.hxx
// ./opencascade/OpenGl_TextParam.hxx
// ./opencascade/OpenGl_FrameBuffer.hxx
// ./opencascade/OpenGl_GlCore32.hxx
// ./opencascade/OpenGl_Flipper.hxx
// ./opencascade/OpenGl_CappingAlgo.hxx
// ./opencascade/OpenGl_GlCore42.hxx
// ./opencascade/OpenGl_ShaderObject.hxx
// ./opencascade/OpenGl_GlCore13.hxx

// operators

// register typdefs
// ./opencascade/OpenGl_AspectLine.hxx
// ./opencascade/OpenGl_BackgroundArray.hxx
// ./opencascade/OpenGl_GlCore20.hxx
    register_template_OpenGl_TmplCore20<OpenGl_GlCore15>(m,"OpenGl_GlCore20");  
    register_template_OpenGl_TmplCore20<OpenGl_GlCore15Fwd>(m,"OpenGl_GlCore20Fwd");  
// ./opencascade/OpenGl_GraphicDriver.hxx
// ./opencascade/OpenGl_TextureSet.hxx
// ./opencascade/OpenGl_StructureShadow.hxx
// ./opencascade/OpenGl_GlCore44.hxx
    register_template_OpenGl_TmplCore44<OpenGl_GlCore43Back>(m,"OpenGl_GlCore44Back");  
    register_template_OpenGl_TmplCore44<OpenGl_GlCore43>(m,"OpenGl_GlCore44");  
// ./opencascade/OpenGl_FrameStatsPrs.hxx
// ./opencascade/OpenGl_MatrixState.hxx
// ./opencascade/OpenGl_GlCore40.hxx
    register_template_OpenGl_TmplCore40<OpenGl_GlCore33Back>(m,"OpenGl_GlCore40Back");  
    register_template_OpenGl_TmplCore40<OpenGl_GlCore33>(m,"OpenGl_GlCore40");  
// ./opencascade/OpenGl_SceneGeometry.hxx
    register_template_BVH_Triangulation<Standard_ShortReal, 3>(m,"OpenGl_BVHTriangulation3f");  
// ./opencascade/OpenGl_GlCore21.hxx
    register_template_OpenGl_TmplCore21<OpenGl_GlCore20>(m,"OpenGl_GlCore21");  
    register_template_OpenGl_TmplCore21<OpenGl_GlCore20Fwd>(m,"OpenGl_GlCore21Fwd");  
// ./opencascade/OpenGl_SetOfShaderPrograms.hxx
// ./opencascade/OpenGl_ArbDbg.hxx
// ./opencascade/OpenGl_Text.hxx
// ./opencascade/OpenGl_NamedResource.hxx
// ./opencascade/OpenGl_GlFunctions.hxx
// ./opencascade/OpenGl_Workspace.hxx
// ./opencascade/OpenGl_Element.hxx
// ./opencascade/OpenGl_Window.hxx
// ./opencascade/OpenGl_BVHClipPrimitiveTrsfPersSet.hxx
// ./opencascade/OpenGl_Context.hxx
    register_template_OpenGl_TmplCore12<OpenGl_GlCore11>(m,"OpenGl_GlCore12");  
    register_template_OpenGl_TmplCore12<OpenGl_GlCore11Fwd>(m,"OpenGl_GlCore12Fwd");  
    register_template_OpenGl_TmplCore14<OpenGl_GlCore13>(m,"OpenGl_GlCore14");  
    register_template_OpenGl_TmplCore14<OpenGl_GlCore13Fwd>(m,"OpenGl_GlCore14Fwd");  
    register_template_OpenGl_TmplCore15<OpenGl_GlCore14>(m,"OpenGl_GlCore15");  
    register_template_OpenGl_TmplCore15<OpenGl_GlCore14Fwd>(m,"OpenGl_GlCore15Fwd");  
    register_template_OpenGl_TmplCore30<OpenGl_GlCore21>(m,"OpenGl_GlCore30");  
    register_template_OpenGl_TmplCore30<OpenGl_GlCore21Fwd>(m,"OpenGl_GlCore30Fwd");  
    register_template_OpenGl_TmplCore31<OpenGl_GlCore30>(m,"OpenGl_GlCore31Back");  
    register_template_OpenGl_TmplCore31<OpenGl_GlCore30Fwd>(m,"OpenGl_GlCore31");  
    register_template_OpenGl_TmplCore32<OpenGl_GlCore31Back>(m,"OpenGl_GlCore32Back");  
    register_template_OpenGl_TmplCore32<OpenGl_GlCore31>(m,"OpenGl_GlCore32");  
    register_template_OpenGl_TmplCore33<OpenGl_GlCore32Back>(m,"OpenGl_GlCore33Back");  
    register_template_OpenGl_TmplCore33<OpenGl_GlCore32>(m,"OpenGl_GlCore33");  
    register_template_OpenGl_TmplCore41<OpenGl_GlCore40Back>(m,"OpenGl_GlCore41Back");  
    register_template_OpenGl_TmplCore41<OpenGl_GlCore40>(m,"OpenGl_GlCore41");  
    register_template_OpenGl_TmplCore42<OpenGl_GlCore41Back>(m,"OpenGl_GlCore42Back");  
    register_template_OpenGl_TmplCore42<OpenGl_GlCore41>(m,"OpenGl_GlCore42");  
    register_template_OpenGl_TmplCore43<OpenGl_GlCore42Back>(m,"OpenGl_GlCore43Back");  
    register_template_OpenGl_TmplCore43<OpenGl_GlCore42>(m,"OpenGl_GlCore43");  
// ./opencascade/OpenGl_LayerList.hxx
// ./opencascade/OpenGl_LineAttributes.hxx
// ./opencascade/OpenGl_ShaderProgram.hxx
    register_template_NCollection_Sequence<opencascade::handle<OpenGl_ShaderObject> >(m,"OpenGl_ShaderList");  
// ./opencascade/OpenGl_GlCore12.hxx
// ./opencascade/OpenGl_TileSampler.hxx
// ./opencascade/OpenGl_VertexBuffer.hxx
// ./opencascade/OpenGl_CappingPlaneResource.hxx
// ./opencascade/OpenGl_TextureBufferArb.hxx
// ./opencascade/OpenGl_Clipping.hxx
// ./opencascade/OpenGl_Sampler.hxx
// ./opencascade/OpenGl_RenderFilter.hxx
// ./opencascade/OpenGl_GlCore15.hxx
// ./opencascade/OpenGl_ArbIns.hxx
// ./opencascade/OpenGl_BVHTreeSelector.hxx
// ./opencascade/OpenGl_GlCore41.hxx
// ./opencascade/OpenGl_Structure.hxx
    register_template_NCollection_List<const OpenGl_Structure *>(m,"OpenGl_ListOfStructure");  
// ./opencascade/OpenGl_PointSprite.hxx
// ./opencascade/OpenGl_Caps.hxx
// ./opencascade/OpenGl_GraduatedTrihedron.hxx
// ./opencascade/OpenGl_ArbSamplerObject.hxx
// ./opencascade/OpenGl_FrameStats.hxx
// ./opencascade/OpenGl_MaterialState.hxx
// ./opencascade/OpenGl_GlCore33.hxx
// ./opencascade/OpenGl_AspectText.hxx
// ./opencascade/OpenGl_MapOfZLayerSettings.hxx
// ./opencascade/OpenGl_View.hxx
// ./opencascade/OpenGl_GlCore43.hxx
// ./opencascade/OpenGl_GlCore11Fwd.hxx
// ./opencascade/OpenGl_StencilTest.hxx
// ./opencascade/OpenGl_Group.hxx
// ./opencascade/OpenGl_ArbTexBindless.hxx
// ./opencascade/OpenGl_ShaderManager.hxx
    register_template_NCollection_Sequence<opencascade::handle<OpenGl_ShaderProgram> >(m,"OpenGl_ShaderProgramList");  
// ./opencascade/OpenGl_IndexBuffer.hxx
// ./opencascade/OpenGl_Material.hxx
// ./opencascade/OpenGl_AspectMarker.hxx
// ./opencascade/OpenGl_Matrix.hxx
// ./opencascade/OpenGl_HaltonSampler.hxx
// ./opencascade/OpenGl_ArbTBO.hxx
// ./opencascade/OpenGl_ExtGS.hxx
// ./opencascade/OpenGl_AspectFace.hxx
// ./opencascade/OpenGl_Texture.hxx
// ./opencascade/OpenGl_Resource.hxx
// ./opencascade/OpenGl_Layer.hxx
    register_template_NCollection_Array1<OpenGl_IndexedMapOfStructure>(m,"OpenGl_ArrayOfIndexedMapOfStructure");  
// ./opencascade/OpenGl_TextBuilder.hxx
// ./opencascade/OpenGl_Font.hxx
// ./opencascade/OpenGl_PrimitiveArray.hxx
// ./opencascade/OpenGl_ArbFBO.hxx
// ./opencascade/OpenGl_BVHClipPrimitiveSet.hxx
// ./opencascade/OpenGl_ShaderStates.hxx
// ./opencascade/OpenGl_Vec.hxx
// ./opencascade/OpenGl_VertexBufferEditor.hxx
// ./opencascade/OpenGl_VertexBufferCompat.hxx
// ./opencascade/OpenGl_GlCore14.hxx
// ./opencascade/OpenGl_GlCore31.hxx
// ./opencascade/OpenGl_GlCore30.hxx
// ./opencascade/OpenGl_GlCore11.hxx
// ./opencascade/OpenGl_LayerFilter.hxx
// ./opencascade/OpenGl_TextParam.hxx
// ./opencascade/OpenGl_FrameBuffer.hxx
    register_template_NCollection_Vector<GLint>(m,"OpenGl_ColorFormats");  
// ./opencascade/OpenGl_GlCore32.hxx
// ./opencascade/OpenGl_Flipper.hxx
// ./opencascade/OpenGl_CappingAlgo.hxx
// ./opencascade/OpenGl_GlCore42.hxx
// ./opencascade/OpenGl_ShaderObject.hxx
// ./opencascade/OpenGl_GlCore13.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

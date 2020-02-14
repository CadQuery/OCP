
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <OpenGl_Structure.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_VertexBuffer.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_Window.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <OpenGl_IndexBuffer.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_Workspace.hxx>
#include <OpenGl_Context.hxx>
#include <Graphic3d_RenderingParams.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <Font_FTFont.hxx>
#include <OpenGl_ClippingIterator.hxx>
#include <Graphic3d_CStructure.hxx>
#include <OpenGl_ArbTBO.hxx>
#include <OpenGl_ArbIns.hxx>
#include <OpenGl_ArbDbg.hxx>
#include <OpenGl_ArbFBO.hxx>
#include <OpenGl_ArbFBO.hxx>
#include <OpenGl_ArbSamplerObject.hxx>
#include <OpenGl_ArbTexBindless.hxx>
#include <OpenGl_ExtGS.hxx>
#include <OpenGl_GlCore13.hxx>
#include <OpenGl_GlCore13.hxx>
#include <Graphic3d_PresentationAttributes.hxx>
#include <OpenGl_Aspects.hxx>
#include <OpenGl_FrameBuffer.hxx>
#include <OpenGl_Sampler.hxx>
#include <OpenGl_ShaderProgram.hxx>
#include <OpenGl_ShaderManager.hxx>
#include <OpenGl_FrameStats.hxx>
#include <gp_Ax2.hxx>
#include <Graphic3d_Aspects.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_ShaderProgram.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_Element.hxx>
#include <OpenGl_Group.hxx>
#include <OpenGl_Group.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_PrimitiveArray.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_TextureSet.hxx>
#include <OpenGl_PointSprite.hxx>
#include <OpenGl_CappingPlaneResource.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_Workspace.hxx>
#include <OpenGl_Texture.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_PointSprite.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_Texture.hxx>

// module includes
#include <OpenGl_ArbDbg.hxx>
#include <OpenGl_ArbFBO.hxx>
#include <OpenGl_ArbIns.hxx>
#include <OpenGl_ArbSamplerObject.hxx>
#include <OpenGl_ArbTBO.hxx>
#include <OpenGl_ArbTexBindless.hxx>
#include <OpenGl_Aspects.hxx>
#include <OpenGl_AspectsProgram.hxx>
#include <OpenGl_AspectsSprite.hxx>
#include <OpenGl_AspectsTextureSet.hxx>
#include <OpenGl_BackgroundArray.hxx>
#include <OpenGl_CappingAlgo.hxx>
#include <OpenGl_CappingPlaneResource.hxx>
#include <OpenGl_Caps.hxx>
#include <OpenGl_Clipping.hxx>
#include <OpenGl_ClippingIterator.hxx>
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
#include <OpenGl_GlCore45.hxx>
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
#include <OpenGl_ShaderProgramDumpLevel.hxx>
#include <OpenGl_ShaderStates.hxx>
#include <OpenGl_StencilTest.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_StructureShadow.hxx>
#include <OpenGl_Text.hxx>
#include <OpenGl_TextBuilder.hxx>
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
// ./opencascade/OpenGl_GlCore45.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore45.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore32.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore32.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_FrameBuffer.hxx
#include "NCollection.hxx"
// ./opencascade/OpenGl_ShaderManager.hxx
#include "NCollection.hxx"
// ./opencascade/OpenGl_GlCore12.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore12.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore40.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore40.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_Structure.hxx
#include "NCollection.hxx"
// ./opencascade/OpenGl_GlCore41.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore41.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore44.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore44.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore33.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore33.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore20.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore20.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore15.hxx
#include "OpenGl.hxx"
// ./opencascade/OpenGl_GlCore15.hxx
#include "OpenGl.hxx"
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
// ./opencascade/OpenGl_SceneGeometry.hxx
#include "BVH.hxx"
// ./opencascade/OpenGl_ShaderProgram.hxx
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
    class Py_OpenGl_Resource : public OpenGl_Resource{
    public:
        using OpenGl_Resource::OpenGl_Resource;
        
        
        // public pure virtual
        void Release(OpenGl_Context * theGlCtx) override { PYBIND11_OVERLOAD_PURE(void,OpenGl_Resource,Release,theGlCtx) };
        Standard_Size EstimatedDataSize() const  override { PYBIND11_OVERLOAD_PURE(Standard_Size,OpenGl_Resource,EstimatedDataSize,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_OpenGl_SetterInterface : public OpenGl_SetterInterface{
    public:
        using OpenGl_SetterInterface::OpenGl_SetterInterface;
        
        
        // public pure virtual
        void Set(const opencascade::handle<OpenGl_Context> & theCtx,const opencascade::handle<Graphic3d_ShaderVariable> & theVariable,OpenGl_ShaderProgram * theProgram) override { PYBIND11_OVERLOAD_PURE(void,OpenGl_SetterInterface,Set,theCtx,theVariable,theProgram) };
        
        
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

    // default constructor
    register_default_constructor<OpenGl_ArbDbg , shared_ptr<OpenGl_ArbDbg>>(m,"OpenGl_ArbDbg");

    static_cast<py::class_<OpenGl_ArbDbg , shared_ptr<OpenGl_ArbDbg>  >>(m.attr("OpenGl_ArbDbg"))
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
    register_default_constructor<OpenGl_ArbFBO , shared_ptr<OpenGl_ArbFBO>>(m,"OpenGl_ArbFBO");

    static_cast<py::class_<OpenGl_ArbFBO , shared_ptr<OpenGl_ArbFBO>  >>(m.attr("OpenGl_ArbFBO"))
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
    register_default_constructor<OpenGl_ArbFBOBlit , shared_ptr<OpenGl_ArbFBOBlit>>(m,"OpenGl_ArbFBOBlit");

    static_cast<py::class_<OpenGl_ArbFBOBlit , shared_ptr<OpenGl_ArbFBOBlit>  >>(m.attr("OpenGl_ArbFBOBlit"))
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
    register_default_constructor<OpenGl_ArbIns , shared_ptr<OpenGl_ArbIns>>(m,"OpenGl_ArbIns");

    static_cast<py::class_<OpenGl_ArbIns , shared_ptr<OpenGl_ArbIns>  >>(m.attr("OpenGl_ArbIns"))
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
    register_default_constructor<OpenGl_ArbSamplerObject , shared_ptr<OpenGl_ArbSamplerObject>>(m,"OpenGl_ArbSamplerObject");

    static_cast<py::class_<OpenGl_ArbSamplerObject , shared_ptr<OpenGl_ArbSamplerObject>  >>(m.attr("OpenGl_ArbSamplerObject"))
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
    register_default_constructor<OpenGl_ArbTBO , shared_ptr<OpenGl_ArbTBO>>(m,"OpenGl_ArbTBO");

    static_cast<py::class_<OpenGl_ArbTBO , shared_ptr<OpenGl_ArbTBO>  >>(m.attr("OpenGl_ArbTBO"))
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
    register_default_constructor<OpenGl_ArbTexBindless , shared_ptr<OpenGl_ArbTexBindless>>(m,"OpenGl_ArbTexBindless");

    static_cast<py::class_<OpenGl_ArbTexBindless , shared_ptr<OpenGl_ArbTexBindless>  >>(m.attr("OpenGl_ArbTexBindless"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_AspectsProgram , shared_ptr<OpenGl_AspectsProgram>  >>(m.attr("OpenGl_AspectsProgram"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ShaderProgram",
             (const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_AspectsProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_ShaderProgram> &  ) ) static_cast<const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_AspectsProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_ShaderProgram> &  ) >(&OpenGl_AspectsProgram::ShaderProgram),
             R"#(Return shading program.)#"  , py::arg("theCtx"),  py::arg("theShader"))
        .def("UpdateRediness",
             (void (OpenGl_AspectsProgram::*)( const opencascade::handle<Graphic3d_Aspects> &  ) ) static_cast<void (OpenGl_AspectsProgram::*)( const opencascade::handle<Graphic3d_Aspects> &  ) >(&OpenGl_AspectsProgram::UpdateRediness),
             R"#(Update shader resource up-to-date state.)#"  , py::arg("theAspect"))
        .def("Release",
             (void (OpenGl_AspectsProgram::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_AspectsProgram::*)( OpenGl_Context *  ) >(&OpenGl_AspectsProgram::Release),
             R"#(Release resource.)#"  , py::arg("theCtx"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_AspectsSprite , shared_ptr<OpenGl_AspectsSprite>  >>(m.attr("OpenGl_AspectsSprite"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("MarkerSize",
             (Standard_ShortReal (OpenGl_AspectsSprite::*)() const) static_cast<Standard_ShortReal (OpenGl_AspectsSprite::*)() const>(&OpenGl_AspectsSprite::MarkerSize),
             R"#(None)#" )
        .def("IsReady",
             (bool (OpenGl_AspectsSprite::*)() const) static_cast<bool (OpenGl_AspectsSprite::*)() const>(&OpenGl_AspectsSprite::IsReady),
             R"#(Return TRUE if resource is up-to-date.)#" )
        .def("Invalidate",
             (void (OpenGl_AspectsSprite::*)() ) static_cast<void (OpenGl_AspectsSprite::*)() >(&OpenGl_AspectsSprite::Invalidate),
             R"#(Invalidate resource state.)#" )
        .def("HasPointSprite",
             (bool (OpenGl_AspectsSprite::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_Aspects> &  ) ) static_cast<bool (OpenGl_AspectsSprite::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_Aspects> &  ) >(&OpenGl_AspectsSprite::HasPointSprite),
             R"#(Return TRUE if OpenGl point sprite resource defines texture.)#"  , py::arg("theCtx"),  py::arg("theAspects"))
        .def("IsDisplayListSprite",
             (bool (OpenGl_AspectsSprite::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_Aspects> &  ) ) static_cast<bool (OpenGl_AspectsSprite::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_Aspects> &  ) >(&OpenGl_AspectsSprite::IsDisplayListSprite),
             R"#(Return TRUE if OpenGl point sprite resource defined by obsolete Display List (bitmap).)#"  , py::arg("theCtx"),  py::arg("theAspects"))
        .def("Sprite",
             (const opencascade::handle<OpenGl_PointSprite> & (OpenGl_AspectsSprite::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_Aspects> & ,  bool  ) ) static_cast<const opencascade::handle<OpenGl_PointSprite> & (OpenGl_AspectsSprite::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_Aspects> & ,  bool  ) >(&OpenGl_AspectsSprite::Sprite),
             R"#(Return sprite.)#"  , py::arg("theCtx"),  py::arg("theAspects"),  py::arg("theIsAlphaSprite"))
        .def("UpdateRediness",
             (void (OpenGl_AspectsSprite::*)( const opencascade::handle<Graphic3d_Aspects> &  ) ) static_cast<void (OpenGl_AspectsSprite::*)( const opencascade::handle<Graphic3d_Aspects> &  ) >(&OpenGl_AspectsSprite::UpdateRediness),
             R"#(Update texture resource up-to-date state.)#"  , py::arg("theAspect"))
        .def("Release",
             (void (OpenGl_AspectsSprite::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_AspectsSprite::*)( OpenGl_Context *  ) >(&OpenGl_AspectsSprite::Release),
             R"#(Release texture resource.)#"  , py::arg("theCtx"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_AspectsTextureSet , shared_ptr<OpenGl_AspectsTextureSet>  >>(m.attr("OpenGl_AspectsTextureSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsReady",
             (bool (OpenGl_AspectsTextureSet::*)() const) static_cast<bool (OpenGl_AspectsTextureSet::*)() const>(&OpenGl_AspectsTextureSet::IsReady),
             R"#(Return TRUE if resource is up-to-date.)#" )
        .def("Invalidate",
             (void (OpenGl_AspectsTextureSet::*)() ) static_cast<void (OpenGl_AspectsTextureSet::*)() >(&OpenGl_AspectsTextureSet::Invalidate),
             R"#(Invalidate resource state.)#" )
        .def("TextureSet",
             (const opencascade::handle<OpenGl_TextureSet> & (OpenGl_AspectsTextureSet::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_Aspects> & ,  const opencascade::handle<OpenGl_PointSprite> & ,  const opencascade::handle<OpenGl_PointSprite> & ,  bool  ) ) static_cast<const opencascade::handle<OpenGl_TextureSet> & (OpenGl_AspectsTextureSet::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_Aspects> & ,  const opencascade::handle<OpenGl_PointSprite> & ,  const opencascade::handle<OpenGl_PointSprite> & ,  bool  ) >(&OpenGl_AspectsTextureSet::TextureSet),
             R"#(Return textures array.)#"  , py::arg("theCtx"),  py::arg("theAspect"),  py::arg("theSprite"),  py::arg("theSpriteA"),  py::arg("theToHighlight"))
        .def("UpdateRediness",
             (void (OpenGl_AspectsTextureSet::*)( const opencascade::handle<Graphic3d_Aspects> &  ) ) static_cast<void (OpenGl_AspectsTextureSet::*)( const opencascade::handle<Graphic3d_Aspects> &  ) >(&OpenGl_AspectsTextureSet::UpdateRediness),
             R"#(Update texture resource up-to-date state.)#"  , py::arg("theAspect"))
        .def("Release",
             (void (OpenGl_AspectsTextureSet::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_AspectsTextureSet::*)( OpenGl_Context *  ) >(&OpenGl_AspectsTextureSet::Release),
             R"#(Release texture resource.)#"  , py::arg("theCtx"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_CappingAlgo , shared_ptr<OpenGl_CappingAlgo>>(m,"OpenGl_CappingAlgo");

    static_cast<py::class_<OpenGl_CappingAlgo , shared_ptr<OpenGl_CappingAlgo>  >>(m.attr("OpenGl_CappingAlgo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("RenderCapping_s",
                    (void (*)( const opencascade::handle<OpenGl_Workspace> & ,  const OpenGl_Structure &  ) ) static_cast<void (*)( const opencascade::handle<OpenGl_Workspace> & ,  const OpenGl_Structure &  ) >(&OpenGl_CappingAlgo::RenderCapping),
                    R"#(Draw capping surfaces by OpenGl for the clipping planes enabled in current context state. Depth buffer must be generated for the passed groups.)#"  , py::arg("theWorkspace"),  py::arg("theStructure"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Caps ,opencascade::handle<OpenGl_Caps>  , Standard_Transient >>(m.attr("OpenGl_Caps"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Caps::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Caps::*)() const>(&OpenGl_Caps::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Caps::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Caps::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Clipping , shared_ptr<OpenGl_Clipping>  >>(m.attr("OpenGl_Clipping"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (OpenGl_Clipping::*)() ) static_cast<void (OpenGl_Clipping::*)() >(&OpenGl_Clipping::Init),
             R"#(Initialize.)#" )
        .def("Reset",
             (void (OpenGl_Clipping::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) ) static_cast<void (OpenGl_Clipping::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) >(&OpenGl_Clipping::Reset),
             R"#(Setup list of global (for entire view) clipping planes and clears local plane list if it was not released before.)#"  , py::arg("thePlanes"))
        .def("SetLocalPlanes",
             (void (OpenGl_Clipping::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) ) static_cast<void (OpenGl_Clipping::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) >(&OpenGl_Clipping::SetLocalPlanes),
             R"#(Setup list of local (for current object) clipping planes.)#"  , py::arg("thePlanes"))
        .def("IsCappingOn",
             (Standard_Boolean (OpenGl_Clipping::*)() const) static_cast<Standard_Boolean (OpenGl_Clipping::*)() const>(&OpenGl_Clipping::IsCappingOn),
             R"#(Returns true if there are enabled capping planes)#" )
        .def("IsClippingOrCappingOn",
             (Standard_Boolean (OpenGl_Clipping::*)() const) static_cast<Standard_Boolean (OpenGl_Clipping::*)() const>(&OpenGl_Clipping::IsClippingOrCappingOn),
             R"#(Returns true if there are enabled clipping or capping planes)#" )
        .def("NbClippingOrCappingOn",
             (Standard_Integer (OpenGl_Clipping::*)() const) static_cast<Standard_Integer (OpenGl_Clipping::*)() const>(&OpenGl_Clipping::NbClippingOrCappingOn),
             R"#(Returns number of enabled clipping + capping planes)#" )
        .def("HasClippingChains",
             (Standard_Boolean (OpenGl_Clipping::*)() const) static_cast<Standard_Boolean (OpenGl_Clipping::*)() const>(&OpenGl_Clipping::HasClippingChains),
             R"#(Return TRUE if there are clipping chains in the list (defining more than 1 sub-plane))#" )
        .def("HasDisabled",
             (Standard_Boolean (OpenGl_Clipping::*)() const) static_cast<Standard_Boolean (OpenGl_Clipping::*)() const>(&OpenGl_Clipping::HasDisabled),
             R"#(Return true if some clipping planes have been temporarily disabled.)#" )
        .def("SetEnabled",
             (Standard_Boolean (OpenGl_Clipping::*)( const OpenGl_ClippingIterator & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (OpenGl_Clipping::*)( const OpenGl_ClippingIterator & ,  const Standard_Boolean  ) >(&OpenGl_Clipping::SetEnabled),
             R"#(Disable plane temporarily.)#"  , py::arg("thePlane"),  py::arg("theIsEnabled"))
        .def("DisableGlobal",
             (void (OpenGl_Clipping::*)() ) static_cast<void (OpenGl_Clipping::*)() >(&OpenGl_Clipping::DisableGlobal),
             R"#(Temporarily disable all planes from the global (view) list, keep only local (object) list.)#" )
        .def("RestoreDisabled",
             (void (OpenGl_Clipping::*)() ) static_cast<void (OpenGl_Clipping::*)() >(&OpenGl_Clipping::RestoreDisabled),
             R"#(Restore all temporarily disabled planes. Does NOT affect constantly disabled planes Graphic3d_ClipPlane::IsOn().)#" )
        .def("CappedChain",
             (const opencascade::handle<Graphic3d_ClipPlane> & (OpenGl_Clipping::*)() const) static_cast<const opencascade::handle<Graphic3d_ClipPlane> & (OpenGl_Clipping::*)() const>(&OpenGl_Clipping::CappedChain),
             R"#(Chain which is either temporary disabled or the only one enabled for Capping algorithm.)#" )
        .def("CappedSubPlane",
             (Standard_Integer (OpenGl_Clipping::*)() const) static_cast<Standard_Integer (OpenGl_Clipping::*)() const>(&OpenGl_Clipping::CappedSubPlane),
             R"#(Sub-plane index within filtered Chain; positive number for DisableAllExcept and negative for EnableAllExcept.)#" )
        .def("IsCappingFilterOn",
             (bool (OpenGl_Clipping::*)() const) static_cast<bool (OpenGl_Clipping::*)() const>(&OpenGl_Clipping::IsCappingFilterOn),
             R"#(Return TRUE if capping algorithm is in state, when all clipping planes are temporarily disabled except currently processed one.)#" )
        .def("IsCappingDisableAllExcept",
             (bool (OpenGl_Clipping::*)() const) static_cast<bool (OpenGl_Clipping::*)() const>(&OpenGl_Clipping::IsCappingDisableAllExcept),
             R"#(Return TRUE if capping algorithm is in state, when all clipping planes are temporarily disabled except currently processed one.)#" )
        .def("IsCappingEnableAllExcept",
             (bool (OpenGl_Clipping::*)() const) static_cast<bool (OpenGl_Clipping::*)() const>(&OpenGl_Clipping::IsCappingEnableAllExcept),
             R"#(Return TRUE if capping algorithm is in state, when all clipping planes are enabled except currently rendered one.)#" )
        .def("DisableAllExcept",
             (void (OpenGl_Clipping::*)( const opencascade::handle<Graphic3d_ClipPlane> & ,  const Standard_Integer  ) ) static_cast<void (OpenGl_Clipping::*)( const opencascade::handle<Graphic3d_ClipPlane> & ,  const Standard_Integer  ) >(&OpenGl_Clipping::DisableAllExcept),
             R"#(Temporarily disable all planes except specified one for Capping algorithm. Does not affect already disabled planes.)#"  , py::arg("theChain"),  py::arg("theSubPlaneIndex"))
        .def("EnableAllExcept",
             (void (OpenGl_Clipping::*)( const opencascade::handle<Graphic3d_ClipPlane> & ,  const Standard_Integer  ) ) static_cast<void (OpenGl_Clipping::*)( const opencascade::handle<Graphic3d_ClipPlane> & ,  const Standard_Integer  ) >(&OpenGl_Clipping::EnableAllExcept),
             R"#(Enable back planes disabled by ::DisableAllExcept() for Capping algorithm. Keeps only specified plane enabled.)#"  , py::arg("theChain"),  py::arg("theSubPlaneIndex"))
        .def("ResetCappingFilter",
             (void (OpenGl_Clipping::*)() ) static_cast<void (OpenGl_Clipping::*)() >(&OpenGl_Clipping::ResetCappingFilter),
             R"#(Resets chain filter for Capping algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_ClippingIterator , shared_ptr<OpenGl_ClippingIterator>  >>(m.attr("OpenGl_ClippingIterator"))
    // constructors
        .def(py::init< const OpenGl_Clipping & >()  , py::arg("theClipping") )
    // custom constructors
    // methods
        .def("More",
             (bool (OpenGl_ClippingIterator::*)() const) static_cast<bool (OpenGl_ClippingIterator::*)() const>(&OpenGl_ClippingIterator::More),
             R"#(Return true if iterator points to the valid clipping plane.)#" )
        .def("Next",
             (void (OpenGl_ClippingIterator::*)() ) static_cast<void (OpenGl_ClippingIterator::*)() >(&OpenGl_ClippingIterator::Next),
             R"#(Go to the next clipping plane.)#" )
        .def("IsDisabled",
             (bool (OpenGl_ClippingIterator::*)() const) static_cast<bool (OpenGl_ClippingIterator::*)() const>(&OpenGl_ClippingIterator::IsDisabled),
             R"#(Return true if plane has been temporarily disabled either by Graphic3d_ClipPlane->IsOn() property or by temporary filter. Beware that this method does NOT handle a Chain filter for Capping algorithm OpenGl_Clipping::CappedChain()!)#" )
        .def("Value",
             (const opencascade::handle<Graphic3d_ClipPlane> & (OpenGl_ClippingIterator::*)() const) static_cast<const opencascade::handle<Graphic3d_ClipPlane> & (OpenGl_ClippingIterator::*)() const>(&OpenGl_ClippingIterator::Value),
             R"#(Return the plane at current iterator position.)#" )
        .def("IsGlobal",
             (bool (OpenGl_ClippingIterator::*)() const) static_cast<bool (OpenGl_ClippingIterator::*)() const>(&OpenGl_ClippingIterator::IsGlobal),
             R"#(Return true if plane from the global (view) list.)#" )
        .def("PlaneIndex",
             (Standard_Integer (OpenGl_ClippingIterator::*)() const) static_cast<Standard_Integer (OpenGl_ClippingIterator::*)() const>(&OpenGl_ClippingIterator::PlaneIndex),
             R"#(Return the plane index.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_ClippingState , shared_ptr<OpenGl_ClippingState>  >>(m.attr("OpenGl_ClippingState"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Index",
             (Standard_Size (OpenGl_ClippingState::*)() const) static_cast<Standard_Size (OpenGl_ClippingState::*)() const>(&OpenGl_ClippingState::Index),
             R"#(Returns current state index.)#" )
        .def("Update",
             (void (OpenGl_ClippingState::*)() ) static_cast<void (OpenGl_ClippingState::*)() >(&OpenGl_ClippingState::Update),
             R"#(Updates current state.)#" )
        .def("Revert",
             (void (OpenGl_ClippingState::*)() ) static_cast<void (OpenGl_ClippingState::*)() >(&OpenGl_ClippingState::Revert),
             R"#(Reverts current state.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Context ,opencascade::handle<OpenGl_Context>  , Standard_Transient >>(m.attr("OpenGl_Context"))
    // constructors
        .def(py::init< const opencascade::handle<OpenGl_Caps> & >()  , py::arg("theCaps")=static_cast<const opencascade::handle<OpenGl_Caps> &>(NULL) )
    // custom constructors
    // methods
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
        .def("MaxTextureUnitsFFP",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::MaxTextureUnitsFFP),
             R"#(This method returns the multi-texture limit for obsolete fixed-function pipeline. Use MaxCombinedTextureUnits() instead for limits for using programmable pipeline.)#" )
        .def("SpriteTextureUnit",
             (Graphic3d_TextureUnit (OpenGl_Context::*)() const) static_cast<Graphic3d_TextureUnit (OpenGl_Context::*)() const>(&OpenGl_Context::SpriteTextureUnit),
             R"#(Returns texture unit to be used for sprites)#" )
        .def("MaxMsaaSamples",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::MaxMsaaSamples),
             R"#(Returns value for GL_MAX_SAMPLES)#" )
        .def("MaxDumpSizeX",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::MaxDumpSizeX),
             R"#(Returns maximum FBO width for image dump)#" )
        .def("MaxDumpSizeY",
             (Standard_Integer (OpenGl_Context::*)() const) static_cast<Standard_Integer (OpenGl_Context::*)() const>(&OpenGl_Context::MaxDumpSizeY),
             R"#(Returns maximum FBO height for image dump)#" )
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
        .def("HasRayTracingAdaptiveSamplingAtomic",
             (Standard_Boolean (OpenGl_Context::*)() const) static_cast<Standard_Boolean (OpenGl_Context::*)() const>(&OpenGl_Context::HasRayTracingAdaptiveSamplingAtomic),
             R"#(Returns TRUE if atomic adaptive screen sampling in ray tracing mode is supported)#" )
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
        .def("SetFrameStats",
             (void (OpenGl_Context::*)( const opencascade::handle<OpenGl_FrameStats> &  ) ) static_cast<void (OpenGl_Context::*)( const opencascade::handle<OpenGl_FrameStats> &  ) >(&OpenGl_Context::SetFrameStats),
             R"#(Set structure holding frame statistics. This call makes sense only if application defines OpenGl_FrameStats sub-class.)#"  , py::arg("theStats"))
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
             (Standard_Integer (OpenGl_Context::*)( Standard_Integer  ) const) static_cast<Standard_Integer (OpenGl_Context::*)( Standard_Integer  ) const>(&OpenGl_Context::DrawBuffer),
             R"#(Return active draw buffer attached to a render target referred by index (layout location).)#"  , py::arg("theIndex")=static_cast<Standard_Integer>(0))
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
        .def("AllowSampleAlphaToCoverage",
             (bool (OpenGl_Context::*)() const) static_cast<bool (OpenGl_Context::*)() const>(&OpenGl_Context::AllowSampleAlphaToCoverage),
             R"#(Return TRUE if GL_SAMPLE_ALPHA_TO_COVERAGE usage is allowed.)#" )
        .def("SetAllowSampleAlphaToCoverage",
             (void (OpenGl_Context::*)( bool  ) ) static_cast<void (OpenGl_Context::*)( bool  ) >(&OpenGl_Context::SetAllowSampleAlphaToCoverage),
             R"#(Allow GL_SAMPLE_ALPHA_TO_COVERAGE usage.)#"  , py::arg("theToEnable"))
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
             (void (OpenGl_Context::*)( const OpenGl_Aspects * ,  const opencascade::handle<Graphic3d_PresentationAttributes> &  ) ) static_cast<void (OpenGl_Context::*)( const OpenGl_Aspects * ,  const opencascade::handle<Graphic3d_PresentationAttributes> &  ) >(&OpenGl_Context::SetShadingMaterial),
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
        .def("LineWidthScale",
             (Standard_ShortReal (OpenGl_Context::*)() const) static_cast<Standard_ShortReal (OpenGl_Context::*)() const>(&OpenGl_Context::LineWidthScale),
             R"#(Return scale factor for line width.)#" )
        .def("SetResolution",
             (void (OpenGl_Context::*)( unsigned int ,  Standard_ShortReal ,  Standard_ShortReal  ) ) static_cast<void (OpenGl_Context::*)( unsigned int ,  Standard_ShortReal ,  Standard_ShortReal  ) >(&OpenGl_Context::SetResolution),
             R"#(Set resolution ratio. Note that this method rounds to nearest integer.)#"  , py::arg("theResolution"),  py::arg("theRatio"),  py::arg("theScale"))
        .def("SetResolutionRatio",
             (void (OpenGl_Context::*)( const Standard_ShortReal  ) ) static_cast<void (OpenGl_Context::*)( const Standard_ShortReal  ) >(&OpenGl_Context::SetResolutionRatio),
             R"#(Set resolution ratio. Note that this method rounds to nearest integer.)#"  , py::arg("theRatio"))
        .def("LineFeather",
             (Standard_ShortReal (OpenGl_Context::*)() const) static_cast<Standard_ShortReal (OpenGl_Context::*)() const>(&OpenGl_Context::LineFeather),
             R"#(Return line feater width in pixels.)#" )
        .def("SetLineFeather",
             (void (OpenGl_Context::*)( Standard_ShortReal  ) ) static_cast<void (OpenGl_Context::*)( Standard_ShortReal  ) >(&OpenGl_Context::SetLineFeather),
             R"#(Set line feater width.)#"  , py::arg("theValue"))
        .def("Vendor",
             (const TCollection_AsciiString & (OpenGl_Context::*)() const) static_cast<const TCollection_AsciiString & (OpenGl_Context::*)() const>(&OpenGl_Context::Vendor),
             R"#(Return Graphics Driver's vendor.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Context::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Context::get_type_descriptor),
                    R"#(None)#" )
        .def_static("GetPowerOfTwo_s",
                    (Standard_Integer (*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const Standard_Integer ,  const Standard_Integer  ) >(&OpenGl_Context::GetPowerOfTwo),
                    R"#(Function for getting power of to number larger or equal to input number.)#"  , py::arg("theNumber"),  py::arg("theThreshold"))
        .def_static("CheckExtension_s",
                    (Standard_Boolean (*)( const char * ,  const char *  ) ) static_cast<Standard_Boolean (*)( const char * ,  const char *  ) >(&OpenGl_Context::CheckExtension),
                    R"#(Check if theExtName extension is in extensions string.)#"  , py::arg("theExtString"),  py::arg("theExtName"))
        .def_static("CheckIsTransparent_s",
                    (Standard_Boolean (*)( const OpenGl_Aspects * ,  const opencascade::handle<Graphic3d_PresentationAttributes> & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) ) static_cast<Standard_Boolean (*)( const OpenGl_Aspects * ,  const opencascade::handle<Graphic3d_PresentationAttributes> & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) >(&OpenGl_Context::CheckIsTransparent),
                    R"#(Checks if transparency is required for the given aspect and highlight style.)#"  , py::arg("theAspect"),  py::arg("theHighlight"),  py::arg("theAlphaFront"),  py::arg("theAlphaBack"))
        .def_static("CheckIsTransparent_s",
                    (Standard_Boolean (*)( const OpenGl_Aspects * ,  const opencascade::handle<Graphic3d_PresentationAttributes> &  ) ) static_cast<Standard_Boolean (*)( const OpenGl_Aspects * ,  const opencascade::handle<Graphic3d_PresentationAttributes> &  ) >(&OpenGl_Context::CheckIsTransparent),
                    R"#(Checks if transparency is required for the given aspect and highlight style.)#"  , py::arg("theAspect"),  py::arg("theHighlight"))
    // static methods using call by reference i.s.o. return
        .def_static("ReadGlVersion_s",
                    [](  ){ Standard_Integer  theGlVerMajor; Standard_Integer  theGlVerMinor; OpenGl_Context::ReadGlVersion(theGlVerMajor,theGlVerMinor); return std::make_tuple(theGlVerMajor,theGlVerMinor); },
                    R"#(Read OpenGL version information from active context.)#" )
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Element , shared_ptr_nodelete<OpenGl_Element> ,Py_OpenGl_Element >>(m.attr("OpenGl_Element"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Render",
             (void (OpenGl_Element::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_Element::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_Element::Render),
             R"#(None)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_Element::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_Element::*)( OpenGl_Context *  ) >(&OpenGl_Element::Release),
             R"#(Release GPU resources. Pointer to the context is used because this method might be called when the context is already being destroyed and usage of a handle would be unsafe)#"  , py::arg("theContext"))
        .def("IsFillDrawMode",
             (Standard_Boolean (OpenGl_Element::*)() const) static_cast<Standard_Boolean (OpenGl_Element::*)() const>(&OpenGl_Element::IsFillDrawMode),
             R"#(Return TRUE if primitive type generates shaded triangulation (to be used in filters).)#" )
        .def("SynchronizeAspects",
             (void (OpenGl_Element::*)() ) static_cast<void (OpenGl_Element::*)() >(&OpenGl_Element::SynchronizeAspects),
             R"#(Update parameters of the drawable elements.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_ElementNode , shared_ptr<OpenGl_ElementNode>>(m,"OpenGl_ElementNode");

    static_cast<py::class_<OpenGl_ElementNode , shared_ptr<OpenGl_ElementNode>  >>(m.attr("OpenGl_ElementNode"))
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
    register_default_constructor<OpenGl_ExtGS , shared_ptr<OpenGl_ExtGS>>(m,"OpenGl_ExtGS");

    static_cast<py::class_<OpenGl_ExtGS , shared_ptr<OpenGl_ExtGS>  >>(m.attr("OpenGl_ExtGS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_FrameStats ,opencascade::handle<OpenGl_FrameStats>  , Graphic3d_FrameStats >>(m.attr("OpenGl_FrameStats"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_FrameStats::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_FrameStats::*)() const>(&OpenGl_FrameStats::DynamicType),
             R"#(None)#" )
        .def("IsFrameUpdated",
             (bool (OpenGl_FrameStats::*)( opencascade::handle<OpenGl_FrameStats> &  ) const) static_cast<bool (OpenGl_FrameStats::*)( opencascade::handle<OpenGl_FrameStats> &  ) const>(&OpenGl_FrameStats::IsFrameUpdated),
             R"#(Copy stats values into another instance (create new instance, if not exists). The main use of this method is to track changes in statistics (e.g. in conjunction with IsEqual() method).)#"  , py::arg("thePrev"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_FrameStats::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_FrameStats::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_GlCore11 , shared_ptr<OpenGl_GlCore11>>(m,"OpenGl_GlCore11");

    static_cast<py::class_<OpenGl_GlCore11 , shared_ptr<OpenGl_GlCore11>  >>(m.attr("OpenGl_GlCore11"))
    // constructors
    // custom constructors
    // methods
        .def("glRotated",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glRotated),
             R"#(None)#"  , py::arg("theAngleDegrees"),  py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("glScaled",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glScaled),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("glTranslated",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glTranslated),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("glBegin",
             (void (OpenGl_GlCore11::*)( GLenum  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum  ) >(&OpenGl_GlCore11::glBegin),
             R"#()#"  , py::arg("theMode"))
        .def("glEnd",
             (void (OpenGl_GlCore11::*)() ) static_cast<void (OpenGl_GlCore11::*)() >(&OpenGl_GlCore11::glEnd),
             R"#(None)#" )
        .def("glVertex2d",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glVertex2d),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"))
        .def("glVertex2f",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glVertex2f),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"))
        .def("glVertex2i",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint  ) >(&OpenGl_GlCore11::glVertex2i),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"))
        .def("glVertex2s",
             (void (OpenGl_GlCore11::*)( GLshort ,  GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort ,  GLshort  ) >(&OpenGl_GlCore11::glVertex2s),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"))
        .def("glVertex3d",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glVertex3d),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("glVertex3f",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glVertex3f),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("glVertex3i",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint  ) >(&OpenGl_GlCore11::glVertex3i),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("glVertex3s",
             (void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort  ) >(&OpenGl_GlCore11::glVertex3s),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("glVertex4d",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glVertex4d),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theW"))
        .def("glVertex4f",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glVertex4f),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theW"))
        .def("glVertex4i",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint ,  GLint  ) >(&OpenGl_GlCore11::glVertex4i),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theW"))
        .def("glVertex4s",
             (void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort ,  GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort ,  GLshort  ) >(&OpenGl_GlCore11::glVertex4s),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theW"))
        .def("glVertex2dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glVertex2dv),
             R"#(None)#"  , py::arg("theVec2"))
        .def("glVertex2fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glVertex2fv),
             R"#(None)#"  , py::arg("theVec2"))
        .def("glVertex2iv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glVertex2iv),
             R"#(None)#"  , py::arg("theVec2"))
        .def("glVertex2sv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glVertex2sv),
             R"#(None)#"  , py::arg("theVec2"))
        .def("glVertex3dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glVertex3dv),
             R"#(None)#"  , py::arg("theVec3"))
        .def("glVertex3fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glVertex3fv),
             R"#(None)#"  , py::arg("theVec3"))
        .def("glVertex3iv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glVertex3iv),
             R"#(None)#"  , py::arg("theVec3"))
        .def("glVertex3sv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glVertex3sv),
             R"#(None)#"  , py::arg("theVec3"))
        .def("glVertex4dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glVertex4dv),
             R"#(None)#"  , py::arg("theVec4"))
        .def("glVertex4fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glVertex4fv),
             R"#(None)#"  , py::arg("theVec4"))
        .def("glVertex4iv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glVertex4iv),
             R"#(None)#"  , py::arg("theVec4"))
        .def("glVertex4sv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glVertex4sv),
             R"#(None)#"  , py::arg("theVec4"))
        .def("glNormal3b",
             (void (OpenGl_GlCore11::*)( GLbyte ,  GLbyte ,  GLbyte  ) ) static_cast<void (OpenGl_GlCore11::*)( GLbyte ,  GLbyte ,  GLbyte  ) >(&OpenGl_GlCore11::glNormal3b),
             R"#(None)#"  , py::arg("nx"),  py::arg("ny"),  py::arg("nz"))
        .def("glNormal3d",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glNormal3d),
             R"#(None)#"  , py::arg("nx"),  py::arg("ny"),  py::arg("nz"))
        .def("glNormal3f",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glNormal3f),
             R"#(None)#"  , py::arg("nx"),  py::arg("ny"),  py::arg("nz"))
        .def("glNormal3i",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint  ) >(&OpenGl_GlCore11::glNormal3i),
             R"#(None)#"  , py::arg("nx"),  py::arg("ny"),  py::arg("nz"))
        .def("glNormal3s",
             (void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort  ) >(&OpenGl_GlCore11::glNormal3s),
             R"#(None)#"  , py::arg("nx"),  py::arg("ny"),  py::arg("nz"))
        .def("glNormal3bv",
             (void (OpenGl_GlCore11::*)( const GLbyte *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLbyte *  ) >(&OpenGl_GlCore11::glNormal3bv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glNormal3dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glNormal3dv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glNormal3fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glNormal3fv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glNormal3iv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glNormal3iv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glNormal3sv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glNormal3sv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glIndexd",
             (void (OpenGl_GlCore11::*)( GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble  ) >(&OpenGl_GlCore11::glIndexd),
             R"#(None)#"  , py::arg("c"))
        .def("glIndexf",
             (void (OpenGl_GlCore11::*)( GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat  ) >(&OpenGl_GlCore11::glIndexf),
             R"#(None)#"  , py::arg("c"))
        .def("glIndexi",
             (void (OpenGl_GlCore11::*)( GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint  ) >(&OpenGl_GlCore11::glIndexi),
             R"#(None)#"  , py::arg("c"))
        .def("glIndexs",
             (void (OpenGl_GlCore11::*)( GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort  ) >(&OpenGl_GlCore11::glIndexs),
             R"#(None)#"  , py::arg("c"))
        .def("glIndexub",
             (void (OpenGl_GlCore11::*)( GLubyte  ) ) static_cast<void (OpenGl_GlCore11::*)( GLubyte  ) >(&OpenGl_GlCore11::glIndexub),
             R"#(None)#"  , py::arg("c"))
        .def("glIndexdv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glIndexdv),
             R"#(None)#"  , py::arg("c"))
        .def("glIndexfv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glIndexfv),
             R"#(None)#"  , py::arg("c"))
        .def("glIndexiv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glIndexiv),
             R"#(None)#"  , py::arg("c"))
        .def("glIndexsv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glIndexsv),
             R"#(None)#"  , py::arg("c"))
        .def("glIndexubv",
             (void (OpenGl_GlCore11::*)( const GLubyte *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLubyte *  ) >(&OpenGl_GlCore11::glIndexubv),
             R"#(None)#"  , py::arg("c"))
        .def("glColor3b",
             (void (OpenGl_GlCore11::*)( GLbyte ,  GLbyte ,  GLbyte  ) ) static_cast<void (OpenGl_GlCore11::*)( GLbyte ,  GLbyte ,  GLbyte  ) >(&OpenGl_GlCore11::glColor3b),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"))
        .def("glColor3d",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glColor3d),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"))
        .def("glColor3f",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glColor3f),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"))
        .def("glColor3i",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint  ) >(&OpenGl_GlCore11::glColor3i),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"))
        .def("glColor3s",
             (void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort  ) >(&OpenGl_GlCore11::glColor3s),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"))
        .def("glColor3ub",
             (void (OpenGl_GlCore11::*)( GLubyte ,  GLubyte ,  GLubyte  ) ) static_cast<void (OpenGl_GlCore11::*)( GLubyte ,  GLubyte ,  GLubyte  ) >(&OpenGl_GlCore11::glColor3ub),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"))
        .def("glColor3ui",
             (void (OpenGl_GlCore11::*)( GLuint ,  GLuint ,  GLuint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLuint ,  GLuint ,  GLuint  ) >(&OpenGl_GlCore11::glColor3ui),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"))
        .def("glColor3us",
             (void (OpenGl_GlCore11::*)( GLushort ,  GLushort ,  GLushort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLushort ,  GLushort ,  GLushort  ) >(&OpenGl_GlCore11::glColor3us),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"))
        .def("glColor4b",
             (void (OpenGl_GlCore11::*)( GLbyte ,  GLbyte ,  GLbyte ,  GLbyte  ) ) static_cast<void (OpenGl_GlCore11::*)( GLbyte ,  GLbyte ,  GLbyte ,  GLbyte  ) >(&OpenGl_GlCore11::glColor4b),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"),  py::arg("theAlpha"))
        .def("glColor4d",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glColor4d),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"),  py::arg("theAlpha"))
        .def("glColor4f",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glColor4f),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"),  py::arg("theAlpha"))
        .def("glColor4i",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint ,  GLint  ) >(&OpenGl_GlCore11::glColor4i),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"),  py::arg("theAlpha"))
        .def("glColor4s",
             (void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort ,  GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort ,  GLshort  ) >(&OpenGl_GlCore11::glColor4s),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"),  py::arg("theAlpha"))
        .def("glColor4ub",
             (void (OpenGl_GlCore11::*)( GLubyte ,  GLubyte ,  GLubyte ,  GLubyte  ) ) static_cast<void (OpenGl_GlCore11::*)( GLubyte ,  GLubyte ,  GLubyte ,  GLubyte  ) >(&OpenGl_GlCore11::glColor4ub),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"),  py::arg("theAlpha"))
        .def("glColor4ui",
             (void (OpenGl_GlCore11::*)( GLuint ,  GLuint ,  GLuint ,  GLuint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLuint ,  GLuint ,  GLuint ,  GLuint  ) >(&OpenGl_GlCore11::glColor4ui),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"),  py::arg("theAlpha"))
        .def("glColor4us",
             (void (OpenGl_GlCore11::*)( GLushort ,  GLushort ,  GLushort ,  GLushort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLushort ,  GLushort ,  GLushort ,  GLushort  ) >(&OpenGl_GlCore11::glColor4us),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"),  py::arg("theAlpha"))
        .def("glColor3bv",
             (void (OpenGl_GlCore11::*)( const GLbyte *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLbyte *  ) >(&OpenGl_GlCore11::glColor3bv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor3dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glColor3dv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor3fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glColor3fv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor3iv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glColor3iv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor3sv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glColor3sv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor3ubv",
             (void (OpenGl_GlCore11::*)( const GLubyte *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLubyte *  ) >(&OpenGl_GlCore11::glColor3ubv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor3uiv",
             (void (OpenGl_GlCore11::*)( const GLuint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLuint *  ) >(&OpenGl_GlCore11::glColor3uiv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor3usv",
             (void (OpenGl_GlCore11::*)( const GLushort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLushort *  ) >(&OpenGl_GlCore11::glColor3usv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor4bv",
             (void (OpenGl_GlCore11::*)( const GLbyte *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLbyte *  ) >(&OpenGl_GlCore11::glColor4bv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor4dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glColor4dv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor4fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glColor4fv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor4iv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glColor4iv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor4sv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glColor4sv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor4ubv",
             (void (OpenGl_GlCore11::*)( const GLubyte *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLubyte *  ) >(&OpenGl_GlCore11::glColor4ubv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor4uiv",
             (void (OpenGl_GlCore11::*)( const GLuint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLuint *  ) >(&OpenGl_GlCore11::glColor4uiv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glColor4usv",
             (void (OpenGl_GlCore11::*)( const GLushort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLushort *  ) >(&OpenGl_GlCore11::glColor4usv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glTexCoord1d",
             (void (OpenGl_GlCore11::*)( GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble  ) >(&OpenGl_GlCore11::glTexCoord1d),
             R"#(None)#"  , py::arg("s"))
        .def("glTexCoord1f",
             (void (OpenGl_GlCore11::*)( GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat  ) >(&OpenGl_GlCore11::glTexCoord1f),
             R"#(None)#"  , py::arg("s"))
        .def("glTexCoord1i",
             (void (OpenGl_GlCore11::*)( GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint  ) >(&OpenGl_GlCore11::glTexCoord1i),
             R"#(None)#"  , py::arg("s"))
        .def("glTexCoord1s",
             (void (OpenGl_GlCore11::*)( GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort  ) >(&OpenGl_GlCore11::glTexCoord1s),
             R"#(None)#"  , py::arg("s"))
        .def("glTexCoord2d",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glTexCoord2d),
             R"#(None)#"  , py::arg("s"),  py::arg("t"))
        .def("glTexCoord2f",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glTexCoord2f),
             R"#(None)#"  , py::arg("s"),  py::arg("t"))
        .def("glTexCoord2i",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint  ) >(&OpenGl_GlCore11::glTexCoord2i),
             R"#(None)#"  , py::arg("s"),  py::arg("t"))
        .def("glTexCoord2s",
             (void (OpenGl_GlCore11::*)( GLshort ,  GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort ,  GLshort  ) >(&OpenGl_GlCore11::glTexCoord2s),
             R"#(None)#"  , py::arg("s"),  py::arg("t"))
        .def("glTexCoord3d",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glTexCoord3d),
             R"#(None)#"  , py::arg("s"),  py::arg("t"),  py::arg("r"))
        .def("glTexCoord3f",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glTexCoord3f),
             R"#(None)#"  , py::arg("s"),  py::arg("t"),  py::arg("r"))
        .def("glTexCoord3i",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint  ) >(&OpenGl_GlCore11::glTexCoord3i),
             R"#(None)#"  , py::arg("s"),  py::arg("t"),  py::arg("r"))
        .def("glTexCoord3s",
             (void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort  ) >(&OpenGl_GlCore11::glTexCoord3s),
             R"#(None)#"  , py::arg("s"),  py::arg("t"),  py::arg("r"))
        .def("glTexCoord4d",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glTexCoord4d),
             R"#(None)#"  , py::arg("s"),  py::arg("t"),  py::arg("r"),  py::arg("q"))
        .def("glTexCoord4f",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glTexCoord4f),
             R"#(None)#"  , py::arg("s"),  py::arg("t"),  py::arg("r"),  py::arg("q"))
        .def("glTexCoord4i",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint ,  GLint  ) >(&OpenGl_GlCore11::glTexCoord4i),
             R"#(None)#"  , py::arg("s"),  py::arg("t"),  py::arg("r"),  py::arg("q"))
        .def("glTexCoord4s",
             (void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort ,  GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort ,  GLshort  ) >(&OpenGl_GlCore11::glTexCoord4s),
             R"#(None)#"  , py::arg("s"),  py::arg("t"),  py::arg("r"),  py::arg("q"))
        .def("glTexCoord1dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glTexCoord1dv),
             R"#(None)#"  , py::arg("theVec1"))
        .def("glTexCoord1fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glTexCoord1fv),
             R"#(None)#"  , py::arg("theVec1"))
        .def("glTexCoord1iv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glTexCoord1iv),
             R"#(None)#"  , py::arg("theVec1"))
        .def("glTexCoord1sv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glTexCoord1sv),
             R"#(None)#"  , py::arg("theVec1"))
        .def("glTexCoord2dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glTexCoord2dv),
             R"#(None)#"  , py::arg("theVec2"))
        .def("glTexCoord2fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glTexCoord2fv),
             R"#(None)#"  , py::arg("theVec2"))
        .def("glTexCoord2iv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glTexCoord2iv),
             R"#(None)#"  , py::arg("theVec2"))
        .def("glTexCoord2sv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glTexCoord2sv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glTexCoord3dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glTexCoord3dv),
             R"#(None)#"  , py::arg("theVec3"))
        .def("glTexCoord3fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glTexCoord3fv),
             R"#(None)#"  , py::arg("theVec3"))
        .def("glTexCoord3iv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glTexCoord3iv),
             R"#(None)#"  , py::arg("theVec3"))
        .def("glTexCoord3sv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glTexCoord3sv),
             R"#(None)#"  , py::arg("theVec3"))
        .def("glTexCoord4dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glTexCoord4dv),
             R"#(None)#"  , py::arg("theVec4"))
        .def("glTexCoord4fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glTexCoord4fv),
             R"#(None)#"  , py::arg("theVec4"))
        .def("glTexCoord4iv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glTexCoord4iv),
             R"#(None)#"  , py::arg("theVec4"))
        .def("glTexCoord4sv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glTexCoord4sv),
             R"#(None)#"  , py::arg("theVec4"))
        .def("glMatrixMode",
             (void (OpenGl_GlCore11::*)( GLenum  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum  ) >(&OpenGl_GlCore11::glMatrixMode),
             R"#()#"  , py::arg("theMode"))
        .def("glOrtho",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glOrtho),
             R"#(None)#"  , py::arg("theLeft"),  py::arg("theRight"),  py::arg("theBottom"),  py::arg("theTop"),  py::arg("theNearVal"),  py::arg("theFarVal"))
        .def("glFrustum",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glFrustum),
             R"#(None)#"  , py::arg("theLeft"),  py::arg("theRight"),  py::arg("theBottom"),  py::arg("theTop"),  py::arg("theNearVal"),  py::arg("theFarVal"))
        .def("glPushMatrix",
             (void (OpenGl_GlCore11::*)() ) static_cast<void (OpenGl_GlCore11::*)() >(&OpenGl_GlCore11::glPushMatrix),
             R"#(None)#" )
        .def("glPopMatrix",
             (void (OpenGl_GlCore11::*)() ) static_cast<void (OpenGl_GlCore11::*)() >(&OpenGl_GlCore11::glPopMatrix),
             R"#(None)#" )
        .def("glLoadIdentity",
             (void (OpenGl_GlCore11::*)() ) static_cast<void (OpenGl_GlCore11::*)() >(&OpenGl_GlCore11::glLoadIdentity),
             R"#(None)#" )
        .def("glLoadMatrixd",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glLoadMatrixd),
             R"#(None)#"  , py::arg("theMatrix"))
        .def("glLoadMatrixf",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glLoadMatrixf),
             R"#(None)#"  , py::arg("theMatrix"))
        .def("glMultMatrixd",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glMultMatrixd),
             R"#(None)#"  , py::arg("theMatrix"))
        .def("glMultMatrixf",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glMultMatrixf),
             R"#(None)#"  , py::arg("theMatrix"))
        .def("glLineStipple",
             (void (OpenGl_GlCore11::*)( GLint ,  GLushort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLushort  ) >(&OpenGl_GlCore11::glLineStipple),
             R"#(None)#"  , py::arg("theFactor"),  py::arg("thePattern"))
        .def("glPolygonStipple",
             (void (OpenGl_GlCore11::*)( const GLubyte *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLubyte *  ) >(&OpenGl_GlCore11::glPolygonStipple),
             R"#(None)#"  , py::arg("theMask"))
        .def("glGetPolygonStipple",
             (void (OpenGl_GlCore11::*)( GLubyte *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLubyte *  ) >(&OpenGl_GlCore11::glGetPolygonStipple),
             R"#(None)#"  , py::arg("theMask"))
        .def("glPushAttrib",
             (void (OpenGl_GlCore11::*)( GLbitfield  ) ) static_cast<void (OpenGl_GlCore11::*)( GLbitfield  ) >(&OpenGl_GlCore11::glPushAttrib),
             R"#()#"  , py::arg("theMask"))
        .def("glPopAttrib",
             (void (OpenGl_GlCore11::*)() ) static_cast<void (OpenGl_GlCore11::*)() >(&OpenGl_GlCore11::glPopAttrib),
             R"#(None)#" )
        .def("glPushClientAttrib",
             (void (OpenGl_GlCore11::*)( GLbitfield  ) ) static_cast<void (OpenGl_GlCore11::*)( GLbitfield  ) >(&OpenGl_GlCore11::glPushClientAttrib),
             R"#(None)#"  , py::arg("theMask"))
        .def("glPopClientAttrib",
             (void (OpenGl_GlCore11::*)() ) static_cast<void (OpenGl_GlCore11::*)() >(&OpenGl_GlCore11::glPopClientAttrib),
             R"#(None)#" )
        .def("glShadeModel",
             (void (OpenGl_GlCore11::*)( GLenum  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum  ) >(&OpenGl_GlCore11::glShadeModel),
             R"#()#"  , py::arg("theMode"))
        .def("glLightf",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat  ) >(&OpenGl_GlCore11::glLightf),
             R"#(None)#"  , py::arg("theLight"),  py::arg("pname"),  py::arg("param"))
        .def("glLighti",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint  ) >(&OpenGl_GlCore11::glLighti),
             R"#(None)#"  , py::arg("theLight"),  py::arg("pname"),  py::arg("param"))
        .def("glLightfv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLfloat *  ) >(&OpenGl_GlCore11::glLightfv),
             R"#(None)#"  , py::arg("theLight"),  py::arg("pname"),  py::arg("params"))
        .def("glLightiv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLint *  ) >(&OpenGl_GlCore11::glLightiv),
             R"#(None)#"  , py::arg("theLight"),  py::arg("pname"),  py::arg("params"))
        .def("glGetLightfv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat *  ) >(&OpenGl_GlCore11::glGetLightfv),
             R"#(None)#"  , py::arg("theLight"),  py::arg("pname"),  py::arg("params"))
        .def("glGetLightiv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint *  ) >(&OpenGl_GlCore11::glGetLightiv),
             R"#(None)#"  , py::arg("theLight"),  py::arg("pname"),  py::arg("params"))
        .def("glLightModelf",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLfloat  ) >(&OpenGl_GlCore11::glLightModelf),
             R"#(None)#"  , py::arg("pname"),  py::arg("param"))
        .def("glLightModeli",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLint  ) >(&OpenGl_GlCore11::glLightModeli),
             R"#(None)#"  , py::arg("pname"),  py::arg("param"))
        .def("glLightModelfv",
             (void (OpenGl_GlCore11::*)( GLenum ,  const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  const GLfloat *  ) >(&OpenGl_GlCore11::glLightModelfv),
             R"#(None)#"  , py::arg("pname"),  py::arg("params"))
        .def("glLightModeliv",
             (void (OpenGl_GlCore11::*)( GLenum ,  const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  const GLint *  ) >(&OpenGl_GlCore11::glLightModeliv),
             R"#(None)#"  , py::arg("pname"),  py::arg("params"))
        .def("glMaterialf",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat  ) >(&OpenGl_GlCore11::glMaterialf),
             R"#(None)#"  , py::arg("face"),  py::arg("pname"),  py::arg("param"))
        .def("glMateriali",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint  ) >(&OpenGl_GlCore11::glMateriali),
             R"#(None)#"  , py::arg("face"),  py::arg("pname"),  py::arg("param"))
        .def("glMaterialfv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLfloat *  ) >(&OpenGl_GlCore11::glMaterialfv),
             R"#(None)#"  , py::arg("face"),  py::arg("pname"),  py::arg("params"))
        .def("glMaterialiv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLint *  ) >(&OpenGl_GlCore11::glMaterialiv),
             R"#(None)#"  , py::arg("face"),  py::arg("pname"),  py::arg("params"))
        .def("glGetMaterialfv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat *  ) >(&OpenGl_GlCore11::glGetMaterialfv),
             R"#(None)#"  , py::arg("face"),  py::arg("pname"),  py::arg("params"))
        .def("glGetMaterialiv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint *  ) >(&OpenGl_GlCore11::glGetMaterialiv),
             R"#(None)#"  , py::arg("face"),  py::arg("pname"),  py::arg("params"))
        .def("glColorMaterial",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum  ) >(&OpenGl_GlCore11::glColorMaterial),
             R"#(None)#"  , py::arg("face"),  py::arg("mode"))
        .def("glClipPlane",
             (void (OpenGl_GlCore11::*)( GLenum ,  const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  const GLdouble *  ) >(&OpenGl_GlCore11::glClipPlane),
             R"#()#"  , py::arg("thePlane"),  py::arg("theEquation"))
        .def("glGetClipPlane",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLdouble *  ) >(&OpenGl_GlCore11::glGetClipPlane),
             R"#(None)#"  , py::arg("thePlane"),  py::arg("theEquation"))
        .def("glIsList",
             (GLboolean (OpenGl_GlCore11::*)( GLuint  ) ) static_cast<GLboolean (OpenGl_GlCore11::*)( GLuint  ) >(&OpenGl_GlCore11::glIsList),
             R"#()#"  , py::arg("theList"))
        .def("glDeleteLists",
             (void (OpenGl_GlCore11::*)( GLuint ,  GLsizei  ) ) static_cast<void (OpenGl_GlCore11::*)( GLuint ,  GLsizei  ) >(&OpenGl_GlCore11::glDeleteLists),
             R"#(None)#"  , py::arg("theList"),  py::arg("theRange"))
        .def("glGenLists",
             (GLuint (OpenGl_GlCore11::*)( GLsizei  ) ) static_cast<GLuint (OpenGl_GlCore11::*)( GLsizei  ) >(&OpenGl_GlCore11::glGenLists),
             R"#(None)#"  , py::arg("theRange"))
        .def("glNewList",
             (void (OpenGl_GlCore11::*)( GLuint ,  GLenum  ) ) static_cast<void (OpenGl_GlCore11::*)( GLuint ,  GLenum  ) >(&OpenGl_GlCore11::glNewList),
             R"#(None)#"  , py::arg("theList"),  py::arg("theMode"))
        .def("glEndList",
             (void (OpenGl_GlCore11::*)() ) static_cast<void (OpenGl_GlCore11::*)() >(&OpenGl_GlCore11::glEndList),
             R"#(None)#" )
        .def("glCallList",
             (void (OpenGl_GlCore11::*)( GLuint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLuint  ) >(&OpenGl_GlCore11::glCallList),
             R"#(None)#"  , py::arg("theList"))
        .def("glCallLists",
             (void (OpenGl_GlCore11::*)( GLsizei ,  GLenum ,   const void *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLsizei ,  GLenum ,   const void *  ) >(&OpenGl_GlCore11::glCallLists),
             R"#(None)#"  , py::arg("theNb"),  py::arg("theType"),  py::arg("theLists"))
        .def("glListBase",
             (void (OpenGl_GlCore11::*)( GLuint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLuint  ) >(&OpenGl_GlCore11::glListBase),
             R"#(None)#"  , py::arg("theBase"))
        .def("glRasterPos2d",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glRasterPos2d),
             R"#()#"  , py::arg("x"),  py::arg("y"))
        .def("glRasterPos2f",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glRasterPos2f),
             R"#(None)#"  , py::arg("x"),  py::arg("y"))
        .def("glRasterPos2i",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint  ) >(&OpenGl_GlCore11::glRasterPos2i),
             R"#(None)#"  , py::arg("x"),  py::arg("y"))
        .def("glRasterPos2s",
             (void (OpenGl_GlCore11::*)( GLshort ,  GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort ,  GLshort  ) >(&OpenGl_GlCore11::glRasterPos2s),
             R"#(None)#"  , py::arg("x"),  py::arg("y"))
        .def("glRasterPos3d",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glRasterPos3d),
             R"#(None)#"  , py::arg("x"),  py::arg("y"),  py::arg("z"))
        .def("glRasterPos3f",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glRasterPos3f),
             R"#(None)#"  , py::arg("x"),  py::arg("y"),  py::arg("z"))
        .def("glRasterPos3i",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint  ) >(&OpenGl_GlCore11::glRasterPos3i),
             R"#(None)#"  , py::arg("x"),  py::arg("y"),  py::arg("z"))
        .def("glRasterPos3s",
             (void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort  ) >(&OpenGl_GlCore11::glRasterPos3s),
             R"#(None)#"  , py::arg("x"),  py::arg("y"),  py::arg("z"))
        .def("glRasterPos4d",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glRasterPos4d),
             R"#(None)#"  , py::arg("x"),  py::arg("y"),  py::arg("z"),  py::arg("w"))
        .def("glRasterPos4f",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glRasterPos4f),
             R"#(None)#"  , py::arg("x"),  py::arg("y"),  py::arg("z"),  py::arg("w"))
        .def("glRasterPos4i",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint ,  GLint  ) >(&OpenGl_GlCore11::glRasterPos4i),
             R"#(None)#"  , py::arg("x"),  py::arg("y"),  py::arg("z"),  py::arg("w"))
        .def("glRasterPos4s",
             (void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort ,  GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort ,  GLshort  ) >(&OpenGl_GlCore11::glRasterPos4s),
             R"#(None)#"  , py::arg("x"),  py::arg("y"),  py::arg("z"),  py::arg("w"))
        .def("glRasterPos2dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glRasterPos2dv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glRasterPos2fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glRasterPos2fv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glRasterPos2iv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glRasterPos2iv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glRasterPos2sv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glRasterPos2sv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glRasterPos3dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glRasterPos3dv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glRasterPos3fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glRasterPos3fv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glRasterPos3iv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glRasterPos3iv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glRasterPos3sv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glRasterPos3sv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glRasterPos4dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glRasterPos4dv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glRasterPos4fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glRasterPos4fv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glRasterPos4iv",
             (void (OpenGl_GlCore11::*)( const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint *  ) >(&OpenGl_GlCore11::glRasterPos4iv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glRasterPos4sv",
             (void (OpenGl_GlCore11::*)( const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort *  ) >(&OpenGl_GlCore11::glRasterPos4sv),
             R"#(None)#"  , py::arg("theVec"))
        .def("glRectd",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glRectd),
             R"#(None)#"  , py::arg("x1"),  py::arg("y1"),  py::arg("x2"),  py::arg("y2"))
        .def("glRectf",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glRectf),
             R"#(None)#"  , py::arg("x1"),  py::arg("y1"),  py::arg("x2"),  py::arg("y2"))
        .def("glRecti",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLint ,  GLint  ) >(&OpenGl_GlCore11::glRecti),
             R"#(None)#"  , py::arg("x1"),  py::arg("y1"),  py::arg("x2"),  py::arg("y2"))
        .def("glRects",
             (void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort ,  GLshort  ) ) static_cast<void (OpenGl_GlCore11::*)( GLshort ,  GLshort ,  GLshort ,  GLshort  ) >(&OpenGl_GlCore11::glRects),
             R"#(None)#"  , py::arg("x1"),  py::arg("y1"),  py::arg("x2"),  py::arg("y2"))
        .def("glRectdv",
             (void (OpenGl_GlCore11::*)( const GLdouble * ,  const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble * ,  const GLdouble *  ) >(&OpenGl_GlCore11::glRectdv),
             R"#(None)#"  , py::arg("v1"),  py::arg("v2"))
        .def("glRectfv",
             (void (OpenGl_GlCore11::*)( const GLfloat * ,  const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat * ,  const GLfloat *  ) >(&OpenGl_GlCore11::glRectfv),
             R"#(None)#"  , py::arg("v1"),  py::arg("v2"))
        .def("glRectiv",
             (void (OpenGl_GlCore11::*)( const GLint * ,  const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLint * ,  const GLint *  ) >(&OpenGl_GlCore11::glRectiv),
             R"#(None)#"  , py::arg("v1"),  py::arg("v2"))
        .def("glRectsv",
             (void (OpenGl_GlCore11::*)( const GLshort * ,  const GLshort *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLshort * ,  const GLshort *  ) >(&OpenGl_GlCore11::glRectsv),
             R"#(None)#"  , py::arg("v1"),  py::arg("v2"))
        .def("glTexGend",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLdouble  ) >(&OpenGl_GlCore11::glTexGend),
             R"#()#"  , py::arg("coord"),  py::arg("pname"),  py::arg("param"))
        .def("glTexGenf",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat  ) >(&OpenGl_GlCore11::glTexGenf),
             R"#(None)#"  , py::arg("coord"),  py::arg("pname"),  py::arg("param"))
        .def("glTexGeni",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint  ) >(&OpenGl_GlCore11::glTexGeni),
             R"#(None)#"  , py::arg("coord"),  py::arg("pname"),  py::arg("param"))
        .def("glTexGendv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLdouble *  ) >(&OpenGl_GlCore11::glTexGendv),
             R"#(None)#"  , py::arg("coord"),  py::arg("pname"),  py::arg("params"))
        .def("glTexGenfv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLfloat *  ) >(&OpenGl_GlCore11::glTexGenfv),
             R"#(None)#"  , py::arg("coord"),  py::arg("pname"),  py::arg("params"))
        .def("glTexGeniv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  const GLint *  ) >(&OpenGl_GlCore11::glTexGeniv),
             R"#(None)#"  , py::arg("coord"),  py::arg("pname"),  py::arg("params"))
        .def("glGetTexGendv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLdouble *  ) >(&OpenGl_GlCore11::glGetTexGendv),
             R"#(None)#"  , py::arg("coord"),  py::arg("pname"),  py::arg("params"))
        .def("glGetTexGenfv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat *  ) >(&OpenGl_GlCore11::glGetTexGenfv),
             R"#(None)#"  , py::arg("coord"),  py::arg("pname"),  py::arg("params"))
        .def("glGetTexGeniv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint *  ) >(&OpenGl_GlCore11::glGetTexGeniv),
             R"#(None)#"  , py::arg("coord"),  py::arg("pname"),  py::arg("params"))
        .def("glPrioritizeTextures",
             (void (OpenGl_GlCore11::*)( GLsizei ,  const GLuint * ,  const GLclampf *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLsizei ,  const GLuint * ,  const GLclampf *  ) >(&OpenGl_GlCore11::glPrioritizeTextures),
             R"#()#"  , py::arg("n"),  py::arg("textures"),  py::arg("priorities"))
        .def("glAreTexturesResident",
             (GLboolean (OpenGl_GlCore11::*)( GLsizei ,  const GLuint * ,  GLboolean *  ) ) static_cast<GLboolean (OpenGl_GlCore11::*)( GLsizei ,  const GLuint * ,  GLboolean *  ) >(&OpenGl_GlCore11::glAreTexturesResident),
             R"#(None)#"  , py::arg("n"),  py::arg("textures"),  py::arg("residences"))
        .def("glDrawPixels",
             (void (OpenGl_GlCore11::*)( GLsizei ,  GLsizei ,  GLenum ,  GLenum ,   const void *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLsizei ,  GLsizei ,  GLenum ,  GLenum ,   const void *  ) >(&OpenGl_GlCore11::glDrawPixels),
             R"#()#"  , py::arg("width"),  py::arg("height"),  py::arg("format"),  py::arg("type"),  py::arg("pixels"))
        .def("glCopyPixels",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLsizei ,  GLsizei ,  GLenum  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint ,  GLsizei ,  GLsizei ,  GLenum  ) >(&OpenGl_GlCore11::glCopyPixels),
             R"#(None)#"  , py::arg("x"),  py::arg("y"),  py::arg("width"),  py::arg("height"),  py::arg("type"))
        .def("glBitmap",
             (void (OpenGl_GlCore11::*)( GLsizei ,  GLsizei ,  GLfloat ,  GLfloat ,  GLfloat ,  GLfloat ,  const GLubyte *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLsizei ,  GLsizei ,  GLfloat ,  GLfloat ,  GLfloat ,  GLfloat ,  const GLubyte *  ) >(&OpenGl_GlCore11::glBitmap),
             R"#(None)#"  , py::arg("width"),  py::arg("height"),  py::arg("xorig"),  py::arg("yorig"),  py::arg("xmove"),  py::arg("ymove"),  py::arg("bitmap"))
        .def("glPixelZoom",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glPixelZoom),
             R"#(None)#"  , py::arg("xfactor"),  py::arg("yfactor"))
        .def("glFogf",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLfloat  ) >(&OpenGl_GlCore11::glFogf),
             R"#()#"  , py::arg("pname"),  py::arg("param"))
        .def("glFogi",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLint  ) >(&OpenGl_GlCore11::glFogi),
             R"#(None)#"  , py::arg("pname"),  py::arg("param"))
        .def("glFogfv",
             (void (OpenGl_GlCore11::*)( GLenum ,  const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  const GLfloat *  ) >(&OpenGl_GlCore11::glFogfv),
             R"#(None)#"  , py::arg("pname"),  py::arg("params"))
        .def("glFogiv",
             (void (OpenGl_GlCore11::*)( GLenum ,  const GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  const GLint *  ) >(&OpenGl_GlCore11::glFogiv),
             R"#(None)#"  , py::arg("pname"),  py::arg("params"))
        .def("glMap1d",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLdouble ,  GLdouble ,  GLint ,  GLint ,  const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLdouble ,  GLdouble ,  GLint ,  GLint ,  const GLdouble *  ) >(&OpenGl_GlCore11::glMap1d),
             R"#()#"  , py::arg("target"),  py::arg("u1"),  py::arg("u2"),  py::arg("stride"),  py::arg("order"),  py::arg("points"))
        .def("glMap1f",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLfloat ,  GLfloat ,  GLint ,  GLint ,  const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLfloat ,  GLfloat ,  GLint ,  GLint ,  const GLfloat *  ) >(&OpenGl_GlCore11::glMap1f),
             R"#(None)#"  , py::arg("target"),  py::arg("u1"),  py::arg("u2"),  py::arg("stride"),  py::arg("order"),  py::arg("points"))
        .def("glMap2d",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLdouble ,  GLdouble ,  GLint ,  GLint ,  GLdouble ,  GLdouble ,  GLint ,  GLint ,  const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLdouble ,  GLdouble ,  GLint ,  GLint ,  GLdouble ,  GLdouble ,  GLint ,  GLint ,  const GLdouble *  ) >(&OpenGl_GlCore11::glMap2d),
             R"#(None)#"  , py::arg("target"),  py::arg("u1"),  py::arg("u2"),  py::arg("ustride"),  py::arg("uorder"),  py::arg("v1"),  py::arg("v2"),  py::arg("vstride"),  py::arg("vorder"),  py::arg("points"))
        .def("glMap2f",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLfloat ,  GLfloat ,  GLint ,  GLint ,  GLfloat ,  GLfloat ,  GLint ,  GLint ,  const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLfloat ,  GLfloat ,  GLint ,  GLint ,  GLfloat ,  GLfloat ,  GLint ,  GLint ,  const GLfloat *  ) >(&OpenGl_GlCore11::glMap2f),
             R"#(None)#"  , py::arg("target"),  py::arg("u1"),  py::arg("u2"),  py::arg("ustride"),  py::arg("uorder"),  py::arg("v1"),  py::arg("v2"),  py::arg("vstride"),  py::arg("vorder"),  py::arg("points"))
        .def("glGetMapdv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLdouble *  ) >(&OpenGl_GlCore11::glGetMapdv),
             R"#(None)#"  , py::arg("target"),  py::arg("query"),  py::arg("v"))
        .def("glGetMapfv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLfloat *  ) >(&OpenGl_GlCore11::glGetMapfv),
             R"#(None)#"  , py::arg("target"),  py::arg("query"),  py::arg("v"))
        .def("glGetMapiv",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLenum ,  GLint *  ) >(&OpenGl_GlCore11::glGetMapiv),
             R"#(None)#"  , py::arg("target"),  py::arg("query"),  py::arg("v"))
        .def("glEvalCoord1d",
             (void (OpenGl_GlCore11::*)( GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble  ) >(&OpenGl_GlCore11::glEvalCoord1d),
             R"#(None)#"  , py::arg("u"))
        .def("glEvalCoord1f",
             (void (OpenGl_GlCore11::*)( GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat  ) >(&OpenGl_GlCore11::glEvalCoord1f),
             R"#(None)#"  , py::arg("u"))
        .def("glEvalCoord1dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glEvalCoord1dv),
             R"#(None)#"  , py::arg("u"))
        .def("glEvalCoord1fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glEvalCoord1fv),
             R"#(None)#"  , py::arg("u"))
        .def("glEvalCoord2d",
             (void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glEvalCoord2d),
             R"#(None)#"  , py::arg("u"),  py::arg("v"))
        .def("glEvalCoord2f",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glEvalCoord2f),
             R"#(None)#"  , py::arg("u"),  py::arg("v"))
        .def("glEvalCoord2dv",
             (void (OpenGl_GlCore11::*)( const GLdouble *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLdouble *  ) >(&OpenGl_GlCore11::glEvalCoord2dv),
             R"#(None)#"  , py::arg("u"))
        .def("glEvalCoord2fv",
             (void (OpenGl_GlCore11::*)( const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLfloat *  ) >(&OpenGl_GlCore11::glEvalCoord2fv),
             R"#(None)#"  , py::arg("u"))
        .def("glMapGrid1d",
             (void (OpenGl_GlCore11::*)( GLint ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glMapGrid1d),
             R"#(None)#"  , py::arg("un"),  py::arg("u1"),  py::arg("u2"))
        .def("glMapGrid1f",
             (void (OpenGl_GlCore11::*)( GLint ,  GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glMapGrid1f),
             R"#(None)#"  , py::arg("un"),  py::arg("u1"),  py::arg("u2"))
        .def("glMapGrid2d",
             (void (OpenGl_GlCore11::*)( GLint ,  GLdouble ,  GLdouble ,  GLint ,  GLdouble ,  GLdouble  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLdouble ,  GLdouble ,  GLint ,  GLdouble ,  GLdouble  ) >(&OpenGl_GlCore11::glMapGrid2d),
             R"#(None)#"  , py::arg("un"),  py::arg("u1"),  py::arg("u2"),  py::arg("vn"),  py::arg("v1"),  py::arg("v2"))
        .def("glMapGrid2f",
             (void (OpenGl_GlCore11::*)( GLint ,  GLfloat ,  GLfloat ,  GLint ,  GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLfloat ,  GLfloat ,  GLint ,  GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glMapGrid2f),
             R"#(None)#"  , py::arg("un"),  py::arg("u1"),  py::arg("u2"),  py::arg("vn"),  py::arg("v1"),  py::arg("v2"))
        .def("glEvalPoint1",
             (void (OpenGl_GlCore11::*)( GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint  ) >(&OpenGl_GlCore11::glEvalPoint1),
             R"#(None)#"  , py::arg("i"))
        .def("glEvalPoint2",
             (void (OpenGl_GlCore11::*)( GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLint  ) >(&OpenGl_GlCore11::glEvalPoint2),
             R"#(None)#"  , py::arg("i"),  py::arg("j"))
        .def("glEvalMesh1",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLint ,  GLint  ) >(&OpenGl_GlCore11::glEvalMesh1),
             R"#(None)#"  , py::arg("mode"),  py::arg("i1"),  py::arg("i2"))
        .def("glEvalMesh2",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLint ,  GLint ,  GLint ,  GLint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLint ,  GLint ,  GLint ,  GLint  ) >(&OpenGl_GlCore11::glEvalMesh2),
             R"#(None)#"  , py::arg("mode"),  py::arg("i1"),  py::arg("i2"),  py::arg("j1"),  py::arg("j2"))
        .def("glFeedbackBuffer",
             (void (OpenGl_GlCore11::*)( GLsizei ,  GLenum ,  GLfloat *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLsizei ,  GLenum ,  GLfloat *  ) >(&OpenGl_GlCore11::glFeedbackBuffer),
             R"#()#"  , py::arg("theSize"),  py::arg("theType"),  py::arg("theBuffer"))
        .def("glPassThrough",
             (void (OpenGl_GlCore11::*)( GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat  ) >(&OpenGl_GlCore11::glPassThrough),
             R"#(None)#"  , py::arg("token"))
        .def("glSelectBuffer",
             (void (OpenGl_GlCore11::*)( GLsizei ,  GLuint *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLsizei ,  GLuint *  ) >(&OpenGl_GlCore11::glSelectBuffer),
             R"#(None)#"  , py::arg("theSize"),  py::arg("theBuffer"))
        .def("glInitNames",
             (void (OpenGl_GlCore11::*)() ) static_cast<void (OpenGl_GlCore11::*)() >(&OpenGl_GlCore11::glInitNames),
             R"#(None)#" )
        .def("glLoadName",
             (void (OpenGl_GlCore11::*)( GLuint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLuint  ) >(&OpenGl_GlCore11::glLoadName),
             R"#(None)#"  , py::arg("theName"))
        .def("glPushName",
             (void (OpenGl_GlCore11::*)( GLuint  ) ) static_cast<void (OpenGl_GlCore11::*)( GLuint  ) >(&OpenGl_GlCore11::glPushName),
             R"#(None)#"  , py::arg("theName"))
        .def("glPopName",
             (void (OpenGl_GlCore11::*)() ) static_cast<void (OpenGl_GlCore11::*)() >(&OpenGl_GlCore11::glPopName),
             R"#(None)#" )
        .def("glClearAccum",
             (void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLfloat ,  GLfloat ,  GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11::glClearAccum),
             R"#()#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"),  py::arg("theAlpha"))
        .def("glAccum",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLfloat  ) >(&OpenGl_GlCore11::glAccum),
             R"#(None)#"  , py::arg("theOp"),  py::arg("theValue"))
        .def("glEdgeFlag",
             (void (OpenGl_GlCore11::*)( GLboolean  ) ) static_cast<void (OpenGl_GlCore11::*)( GLboolean  ) >(&OpenGl_GlCore11::glEdgeFlag),
             R"#()#"  , py::arg("theFlag"))
        .def("glEdgeFlagv",
             (void (OpenGl_GlCore11::*)( const GLboolean *  ) ) static_cast<void (OpenGl_GlCore11::*)( const GLboolean *  ) >(&OpenGl_GlCore11::glEdgeFlagv),
             R"#(None)#"  , py::arg("theFlag"))
        .def("glIndexPointer",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLsizei ,   const void *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLsizei ,   const void *  ) >(&OpenGl_GlCore11::glIndexPointer),
             R"#(None)#"  , py::arg("theType"),  py::arg("theStride"),  py::arg("thePtr"))
        .def("glEdgeFlagPointer",
             (void (OpenGl_GlCore11::*)( GLsizei ,   const void *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLsizei ,   const void *  ) >(&OpenGl_GlCore11::glEdgeFlagPointer),
             R"#(None)#"  , py::arg("theStride"),  py::arg("thePtr"))
        .def("glInterleavedArrays",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLsizei ,   const void *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLsizei ,   const void *  ) >(&OpenGl_GlCore11::glInterleavedArrays),
             R"#(None)#"  , py::arg("theFormat"),  py::arg("theStride"),  py::arg("thePointer"))
        .def("glVertexPointer",
             (void (OpenGl_GlCore11::*)( GLint ,  GLenum ,  GLsizei ,   const void *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLenum ,  GLsizei ,   const void *  ) >(&OpenGl_GlCore11::glVertexPointer),
             R"#(None)#"  , py::arg("theSize"),  py::arg("theType"),  py::arg("theStride"),  py::arg("thePtr"))
        .def("glNormalPointer",
             (void (OpenGl_GlCore11::*)( GLenum ,  GLsizei ,   const void *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum ,  GLsizei ,   const void *  ) >(&OpenGl_GlCore11::glNormalPointer),
             R"#(None)#"  , py::arg("theType"),  py::arg("theStride"),  py::arg("thePtr"))
        .def("glColorPointer",
             (void (OpenGl_GlCore11::*)( GLint ,  GLenum ,  GLsizei ,   const void *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLenum ,  GLsizei ,   const void *  ) >(&OpenGl_GlCore11::glColorPointer),
             R"#(None)#"  , py::arg("theSize"),  py::arg("theType"),  py::arg("theStride"),  py::arg("thePtr"))
        .def("glTexCoordPointer",
             (void (OpenGl_GlCore11::*)( GLint ,  GLenum ,  GLsizei ,   const void *  ) ) static_cast<void (OpenGl_GlCore11::*)( GLint ,  GLenum ,  GLsizei ,   const void *  ) >(&OpenGl_GlCore11::glTexCoordPointer),
             R"#(None)#"  , py::arg("theSize"),  py::arg("theType"),  py::arg("theStride"),  py::arg("thePtr"))
        .def("glEnableClientState",
             (void (OpenGl_GlCore11::*)( GLenum  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum  ) >(&OpenGl_GlCore11::glEnableClientState),
             R"#(None)#"  , py::arg("theCap"))
        .def("glDisableClientState",
             (void (OpenGl_GlCore11::*)( GLenum  ) ) static_cast<void (OpenGl_GlCore11::*)( GLenum  ) >(&OpenGl_GlCore11::glDisableClientState),
             R"#(None)#"  , py::arg("theCap"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_GlCore11Fwd , shared_ptr<OpenGl_GlCore11Fwd>>(m,"OpenGl_GlCore11Fwd");

    static_cast<py::class_<OpenGl_GlCore11Fwd , shared_ptr<OpenGl_GlCore11Fwd>  >>(m.attr("OpenGl_GlCore11Fwd"))
    // constructors
    // custom constructors
    // methods
        .def("glClearColor",
             (void (OpenGl_GlCore11Fwd::*)( GLclampf ,  GLclampf ,  GLclampf ,  GLclampf  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLclampf ,  GLclampf ,  GLclampf ,  GLclampf  ) >(&OpenGl_GlCore11Fwd::glClearColor),
             R"#()#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"),  py::arg("theAlpha"))
        .def("glClear",
             (void (OpenGl_GlCore11Fwd::*)( GLbitfield  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLbitfield  ) >(&OpenGl_GlCore11Fwd::glClear),
             R"#(None)#"  , py::arg("theMask"))
        .def("glColorMask",
             (void (OpenGl_GlCore11Fwd::*)( GLboolean ,  GLboolean ,  GLboolean ,  GLboolean  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLboolean ,  GLboolean ,  GLboolean ,  GLboolean  ) >(&OpenGl_GlCore11Fwd::glColorMask),
             R"#(None)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"),  py::arg("theAlpha"))
        .def("glBlendFunc",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum  ) >(&OpenGl_GlCore11Fwd::glBlendFunc),
             R"#(None)#"  , py::arg("sfactor"),  py::arg("dfactor"))
        .def("glCullFace",
             (void (OpenGl_GlCore11Fwd::*)( GLenum  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum  ) >(&OpenGl_GlCore11Fwd::glCullFace),
             R"#(None)#"  , py::arg("theMode"))
        .def("glFrontFace",
             (void (OpenGl_GlCore11Fwd::*)( GLenum  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum  ) >(&OpenGl_GlCore11Fwd::glFrontFace),
             R"#(None)#"  , py::arg("theMode"))
        .def("glLineWidth",
             (void (OpenGl_GlCore11Fwd::*)( GLfloat  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLfloat  ) >(&OpenGl_GlCore11Fwd::glLineWidth),
             R"#(None)#"  , py::arg("theWidth"))
        .def("glPolygonOffset",
             (void (OpenGl_GlCore11Fwd::*)( GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11Fwd::glPolygonOffset),
             R"#(None)#"  , py::arg("theFactor"),  py::arg("theUnits"))
        .def("glScissor",
             (void (OpenGl_GlCore11Fwd::*)( GLint ,  GLint ,  GLsizei ,  GLsizei  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLint ,  GLint ,  GLsizei ,  GLsizei  ) >(&OpenGl_GlCore11Fwd::glScissor),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theWidth"),  py::arg("theHeight"))
        .def("glEnable",
             (void (OpenGl_GlCore11Fwd::*)( GLenum  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum  ) >(&OpenGl_GlCore11Fwd::glEnable),
             R"#(None)#"  , py::arg("theCap"))
        .def("glDisable",
             (void (OpenGl_GlCore11Fwd::*)( GLenum  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum  ) >(&OpenGl_GlCore11Fwd::glDisable),
             R"#(None)#"  , py::arg("theCap"))
        .def("glIsEnabled",
             (GLboolean (OpenGl_GlCore11Fwd::*)( GLenum  ) ) static_cast<GLboolean (OpenGl_GlCore11Fwd::*)( GLenum  ) >(&OpenGl_GlCore11Fwd::glIsEnabled),
             R"#(None)#"  , py::arg("theCap"))
        .def("glGetBooleanv",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLboolean *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLboolean *  ) >(&OpenGl_GlCore11Fwd::glGetBooleanv),
             R"#(None)#"  , py::arg("theParamName"),  py::arg("theValues"))
        .def("glGetFloatv",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLfloat *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLfloat *  ) >(&OpenGl_GlCore11Fwd::glGetFloatv),
             R"#(None)#"  , py::arg("theParamName"),  py::arg("theValues"))
        .def("glGetIntegerv",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint *  ) >(&OpenGl_GlCore11Fwd::glGetIntegerv),
             R"#(None)#"  , py::arg("theParamName"),  py::arg("theValues"))
        .def("glGetError",
             (GLenum (OpenGl_GlCore11Fwd::*)() ) static_cast<GLenum (OpenGl_GlCore11Fwd::*)() >(&OpenGl_GlCore11Fwd::glGetError),
             R"#(None)#" )
        .def("glGetString",
             (const GLubyte * (OpenGl_GlCore11Fwd::*)( GLenum  ) ) static_cast<const GLubyte * (OpenGl_GlCore11Fwd::*)( GLenum  ) >(&OpenGl_GlCore11Fwd::glGetString),
             R"#(None)#"  , py::arg("theName"))
        .def("glFinish",
             (void (OpenGl_GlCore11Fwd::*)() ) static_cast<void (OpenGl_GlCore11Fwd::*)() >(&OpenGl_GlCore11Fwd::glFinish),
             R"#(None)#" )
        .def("glFlush",
             (void (OpenGl_GlCore11Fwd::*)() ) static_cast<void (OpenGl_GlCore11Fwd::*)() >(&OpenGl_GlCore11Fwd::glFlush),
             R"#(None)#" )
        .def("glHint",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum  ) >(&OpenGl_GlCore11Fwd::glHint),
             R"#(None)#"  , py::arg("theTarget"),  py::arg("theMode"))
        .def("glClearDepth",
             (void (OpenGl_GlCore11Fwd::*)( GLclampd  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLclampd  ) >(&OpenGl_GlCore11Fwd::glClearDepth),
             R"#()#"  , py::arg("theDepth"))
        .def("glClearDepthf",
             (void (OpenGl_GlCore11Fwd::*)( GLfloat  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLfloat  ) >(&OpenGl_GlCore11Fwd::glClearDepthf),
             R"#(None)#"  , py::arg("theDepth"))
        .def("glDepthFunc",
             (void (OpenGl_GlCore11Fwd::*)( GLenum  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum  ) >(&OpenGl_GlCore11Fwd::glDepthFunc),
             R"#(None)#"  , py::arg("theFunc"))
        .def("glDepthMask",
             (void (OpenGl_GlCore11Fwd::*)( GLboolean  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLboolean  ) >(&OpenGl_GlCore11Fwd::glDepthMask),
             R"#(None)#"  , py::arg("theFlag"))
        .def("glDepthRange",
             (void (OpenGl_GlCore11Fwd::*)( GLclampd ,  GLclampd  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLclampd ,  GLclampd  ) >(&OpenGl_GlCore11Fwd::glDepthRange),
             R"#(None)#"  , py::arg("theNearValue"),  py::arg("theFarValue"))
        .def("glDepthRangef",
             (void (OpenGl_GlCore11Fwd::*)( GLfloat ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLfloat ,  GLfloat  ) >(&OpenGl_GlCore11Fwd::glDepthRangef),
             R"#(None)#"  , py::arg("theNearValue"),  py::arg("theFarValue"))
        .def("glViewport",
             (void (OpenGl_GlCore11Fwd::*)( GLint ,  GLint ,  GLsizei ,  GLsizei  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLint ,  GLint ,  GLsizei ,  GLsizei  ) >(&OpenGl_GlCore11Fwd::glViewport),
             R"#()#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theWidth"),  py::arg("theHeight"))
        .def("glDrawArrays",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLsizei  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLsizei  ) >(&OpenGl_GlCore11Fwd::glDrawArrays),
             R"#()#"  , py::arg("theMode"),  py::arg("theFirst"),  py::arg("theCount"))
        .def("glDrawElements",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLsizei ,  GLenum ,   const void *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLsizei ,  GLenum ,   const void *  ) >(&OpenGl_GlCore11Fwd::glDrawElements),
             R"#(None)#"  , py::arg("theMode"),  py::arg("theCount"),  py::arg("theType"),  py::arg("theIndices"))
        .def("glPixelStorei",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint  ) >(&OpenGl_GlCore11Fwd::glPixelStorei),
             R"#()#"  , py::arg("theParamName"),  py::arg("theParam"))
        .def("glReadPixels",
             (void (OpenGl_GlCore11Fwd::*)( GLint ,  GLint ,  GLsizei ,  GLsizei ,  GLenum ,  GLenum ,  void *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLint ,  GLint ,  GLsizei ,  GLsizei ,  GLenum ,  GLenum ,  void *  ) >(&OpenGl_GlCore11Fwd::glReadPixels),
             R"#(None)#"  , py::arg("x"),  py::arg("y"),  py::arg("width"),  py::arg("height"),  py::arg("format"),  py::arg("type"),  py::arg("pixels"))
        .def("glStencilFunc",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLuint  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLuint  ) >(&OpenGl_GlCore11Fwd::glStencilFunc),
             R"#()#"  , py::arg("func"),  py::arg("ref"),  py::arg("mask"))
        .def("glStencilMask",
             (void (OpenGl_GlCore11Fwd::*)( GLuint  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLuint  ) >(&OpenGl_GlCore11Fwd::glStencilMask),
             R"#(None)#"  , py::arg("mask"))
        .def("glStencilOp",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  GLenum  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  GLenum  ) >(&OpenGl_GlCore11Fwd::glStencilOp),
             R"#(None)#"  , py::arg("fail"),  py::arg("zfail"),  py::arg("zpass"))
        .def("glClearStencil",
             (void (OpenGl_GlCore11Fwd::*)( GLint  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLint  ) >(&OpenGl_GlCore11Fwd::glClearStencil),
             R"#(None)#"  , py::arg("s"))
        .def("glTexParameterf",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  GLfloat  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  GLfloat  ) >(&OpenGl_GlCore11Fwd::glTexParameterf),
             R"#()#"  , py::arg("target"),  py::arg("pname"),  py::arg("param"))
        .def("glTexParameteri",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  GLint  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  GLint  ) >(&OpenGl_GlCore11Fwd::glTexParameteri),
             R"#(None)#"  , py::arg("target"),  py::arg("pname"),  py::arg("param"))
        .def("glTexParameterfv",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  const GLfloat *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  const GLfloat *  ) >(&OpenGl_GlCore11Fwd::glTexParameterfv),
             R"#(None)#"  , py::arg("target"),  py::arg("pname"),  py::arg("params"))
        .def("glTexParameteriv",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  const GLint *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  const GLint *  ) >(&OpenGl_GlCore11Fwd::glTexParameteriv),
             R"#(None)#"  , py::arg("target"),  py::arg("pname"),  py::arg("params"))
        .def("glGetTexParameterfv",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  GLfloat *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  GLfloat *  ) >(&OpenGl_GlCore11Fwd::glGetTexParameterfv),
             R"#(None)#"  , py::arg("target"),  py::arg("pname"),  py::arg("params"))
        .def("glGetTexParameteriv",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  GLint *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLenum ,  GLint *  ) >(&OpenGl_GlCore11Fwd::glGetTexParameteriv),
             R"#(None)#"  , py::arg("target"),  py::arg("pname"),  py::arg("params"))
        .def("glTexImage2D",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLint ,  GLsizei ,  GLsizei ,  GLint ,  GLenum ,  GLenum ,   const void *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLint ,  GLsizei ,  GLsizei ,  GLint ,  GLenum ,  GLenum ,   const void *  ) >(&OpenGl_GlCore11Fwd::glTexImage2D),
             R"#(None)#"  , py::arg("target"),  py::arg("level"),  py::arg("internalFormat"),  py::arg("width"),  py::arg("height"),  py::arg("border"),  py::arg("format"),  py::arg("type"),  py::arg("pixels"))
        .def("glGenTextures",
             (void (OpenGl_GlCore11Fwd::*)( GLsizei ,  GLuint *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLsizei ,  GLuint *  ) >(&OpenGl_GlCore11Fwd::glGenTextures),
             R"#(None)#"  , py::arg("n"),  py::arg("textures"))
        .def("glDeleteTextures",
             (void (OpenGl_GlCore11Fwd::*)( GLsizei ,  const GLuint *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLsizei ,  const GLuint *  ) >(&OpenGl_GlCore11Fwd::glDeleteTextures),
             R"#(None)#"  , py::arg("n"),  py::arg("textures"))
        .def("glBindTexture",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLuint  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLuint  ) >(&OpenGl_GlCore11Fwd::glBindTexture),
             R"#(None)#"  , py::arg("target"),  py::arg("texture"))
        .def("glIsTexture",
             (GLboolean (OpenGl_GlCore11Fwd::*)( GLuint  ) ) static_cast<GLboolean (OpenGl_GlCore11Fwd::*)( GLuint  ) >(&OpenGl_GlCore11Fwd::glIsTexture),
             R"#(None)#"  , py::arg("texture"))
        .def("glTexSubImage2D",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLint ,  GLint ,  GLsizei ,  GLsizei ,  GLenum ,  GLenum ,   const void *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLint ,  GLint ,  GLsizei ,  GLsizei ,  GLenum ,  GLenum ,   const void *  ) >(&OpenGl_GlCore11Fwd::glTexSubImage2D),
             R"#(None)#"  , py::arg("target"),  py::arg("level"),  py::arg("xoffset"),  py::arg("yoffset"),  py::arg("width"),  py::arg("height"),  py::arg("format"),  py::arg("type"),  py::arg("pixels"))
        .def("glCopyTexImage2D",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLenum ,  GLint ,  GLint ,  GLsizei ,  GLsizei ,  GLint  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLenum ,  GLint ,  GLint ,  GLsizei ,  GLsizei ,  GLint  ) >(&OpenGl_GlCore11Fwd::glCopyTexImage2D),
             R"#(None)#"  , py::arg("target"),  py::arg("level"),  py::arg("internalformat"),  py::arg("x"),  py::arg("y"),  py::arg("width"),  py::arg("height"),  py::arg("border"))
        .def("glCopyTexSubImage2D",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLint ,  GLint ,  GLint ,  GLint ,  GLsizei ,  GLsizei  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLint ,  GLint ,  GLint ,  GLint ,  GLsizei ,  GLsizei  ) >(&OpenGl_GlCore11Fwd::glCopyTexSubImage2D),
             R"#(None)#"  , py::arg("target"),  py::arg("level"),  py::arg("xoffset"),  py::arg("yoffset"),  py::arg("x"),  py::arg("y"),  py::arg("width"),  py::arg("height"))
        .def("glTexImage1D",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLint ,  GLsizei ,  GLint ,  GLenum ,  GLenum ,   const void *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLint ,  GLsizei ,  GLint ,  GLenum ,  GLenum ,   const void *  ) >(&OpenGl_GlCore11Fwd::glTexImage1D),
             R"#(None)#"  , py::arg("target"),  py::arg("level"),  py::arg("internalFormat"),  py::arg("width"),  py::arg("border"),  py::arg("format"),  py::arg("type"),  py::arg("pixels"))
        .def("glTexSubImage1D",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLint ,  GLsizei ,  GLenum ,  GLenum ,   const void *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLint ,  GLsizei ,  GLenum ,  GLenum ,   const void *  ) >(&OpenGl_GlCore11Fwd::glTexSubImage1D),
             R"#(None)#"  , py::arg("target"),  py::arg("level"),  py::arg("xoffset"),  py::arg("width"),  py::arg("format"),  py::arg("type"),  py::arg("pixels"))
        .def("glCopyTexImage1D",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLenum ,  GLint ,  GLint ,  GLsizei ,  GLint  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLenum ,  GLint ,  GLint ,  GLsizei ,  GLint  ) >(&OpenGl_GlCore11Fwd::glCopyTexImage1D),
             R"#(None)#"  , py::arg("target"),  py::arg("level"),  py::arg("internalformat"),  py::arg("x"),  py::arg("y"),  py::arg("width"),  py::arg("border"))
        .def("glCopyTexSubImage1D",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLint ,  GLint ,  GLint ,  GLsizei  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLint ,  GLint ,  GLint ,  GLsizei  ) >(&OpenGl_GlCore11Fwd::glCopyTexSubImage1D),
             R"#(None)#"  , py::arg("target"),  py::arg("level"),  py::arg("xoffset"),  py::arg("x"),  py::arg("y"),  py::arg("width"))
        .def("glGetTexImage",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLenum ,  GLenum ,  void *  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLint ,  GLenum ,  GLenum ,  void *  ) >(&OpenGl_GlCore11Fwd::glGetTexImage),
             R"#(None)#"  , py::arg("target"),  py::arg("level"),  py::arg("format"),  py::arg("type"),  py::arg("pixels"))
        .def("glAlphaFunc",
             (void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLclampf  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLenum ,  GLclampf  ) >(&OpenGl_GlCore11Fwd::glAlphaFunc),
             R"#(None)#"  , py::arg("theFunc"),  py::arg("theRef"))
        .def("glPointSize",
             (void (OpenGl_GlCore11Fwd::*)( GLfloat  ) ) static_cast<void (OpenGl_GlCore11Fwd::*)( GLfloat  ) >(&OpenGl_GlCore11Fwd::glPointSize),
             R"#(None)#"  , py::arg("theSize"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_GlCore13 , shared_ptr<OpenGl_GlCore13>>(m,"OpenGl_GlCore13");

    static_cast<py::class_<OpenGl_GlCore13 , shared_ptr<OpenGl_GlCore13>  >>(m.attr("OpenGl_GlCore13"))
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
    register_default_constructor<OpenGl_GlCore13Fwd , shared_ptr<OpenGl_GlCore13Fwd>>(m,"OpenGl_GlCore13Fwd");

    static_cast<py::class_<OpenGl_GlCore13Fwd , shared_ptr<OpenGl_GlCore13Fwd>  >>(m.attr("OpenGl_GlCore13Fwd"))
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
    register_default_constructor<OpenGl_GlFunctions , shared_ptr<OpenGl_GlFunctions>>(m,"OpenGl_GlFunctions");

    static_cast<py::class_<OpenGl_GlFunctions , shared_ptr<OpenGl_GlFunctions>  >>(m.attr("OpenGl_GlFunctions"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_GraphicDriver ,opencascade::handle<OpenGl_GraphicDriver>  , Graphic3d_GraphicDriver >>(m.attr("OpenGl_GraphicDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Aspect_DisplayConnection> &,const Standard_Boolean >()  , py::arg("theDisp"),  py::arg("theToInitialize")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
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
        .def("InsertLayerBefore",
             (void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) >(&OpenGl_GraphicDriver::InsertLayerBefore),
             R"#(Adds a layer to all views.)#"  , py::arg("theNewLayerId"),  py::arg("theSettings"),  py::arg("theLayerAfter"))
        .def("InsertLayerAfter",
             (void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) >(&OpenGl_GraphicDriver::InsertLayerAfter),
             R"#(Adds a layer to all views.)#"  , py::arg("theNewLayerId"),  py::arg("theSettings"),  py::arg("theLayerBefore"))
        .def("RemoveZLayer",
             (void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_GraphicDriver::RemoveZLayer),
             R"#(Removes Z layer. All structures displayed at the moment in layer will be displayed in default layer (the bottom-level z layer). By default, there are always default bottom-level layer that can't be removed. The passed theLayerId should be not less than 0 (reserved for default layers that can not be removed).)#"  , py::arg("theLayerId"))
        .def("SetZLayerSettings",
             (void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) ) static_cast<void (OpenGl_GraphicDriver::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) >(&OpenGl_GraphicDriver::SetZLayerSettings),
             R"#(Sets the settings for a single Z layer.)#"  , py::arg("theLayerId"),  py::arg("theSettings"))
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
             (const opencascade::handle<OpenGl_Context> & (OpenGl_GraphicDriver::*)( bool  ) const) static_cast<const opencascade::handle<OpenGl_Context> & (OpenGl_GraphicDriver::*)( bool  ) const>(&OpenGl_GraphicDriver::GetSharedContext),
             R"#(Method to retrieve valid GL context. Could return NULL-handle if no window created by this driver.)#"  , py::arg("theBound")=static_cast<bool>(false))
        .def("setDeviceLost",
             (void (OpenGl_GraphicDriver::*)() ) static_cast<void (OpenGl_GraphicDriver::*)() >(&OpenGl_GraphicDriver::setDeviceLost),
             R"#(Set device lost flag for redrawn views.)#" )
        .def("GetStateCounter",
             (OpenGl_StateCounter * (OpenGl_GraphicDriver::*)() const) static_cast<OpenGl_StateCounter * (OpenGl_GraphicDriver::*)() const>(&OpenGl_GraphicDriver::GetStateCounter),
             R"#(State counter for OpenGl structures.)#" )
        .def("GetNextPrimitiveArrayUID",
             (Standard_Size (OpenGl_GraphicDriver::*)() const) static_cast<Standard_Size (OpenGl_GraphicDriver::*)() const>(&OpenGl_GraphicDriver::GetNextPrimitiveArrayUID),
             R"#(Returns unique ID for primitive arrays.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_GraphicDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_GraphicDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Group ,opencascade::handle<OpenGl_Group>  , Graphic3d_Group >>(m.attr("OpenGl_Group"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_Structure> & >()  , py::arg("theStruct") )
    // custom constructors
    // methods
        .def("Clear",
             (void (OpenGl_Group::*)( const Standard_Boolean  ) ) static_cast<void (OpenGl_Group::*)( const Standard_Boolean  ) >(&OpenGl_Group::Clear),
             R"#(None)#"  , py::arg("theToUpdateStructureMgr"))
        .def("Aspects",
             (opencascade::handle<Graphic3d_Aspects> (OpenGl_Group::*)() const) static_cast<opencascade::handle<Graphic3d_Aspects> (OpenGl_Group::*)() const>(&OpenGl_Group::Aspects),
             R"#(Return line aspect.)#" )
        .def("SetGroupPrimitivesAspect",
             (void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_Aspects> &  ) ) static_cast<void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_Aspects> &  ) >(&OpenGl_Group::SetGroupPrimitivesAspect),
             R"#(Update aspect.)#"  , py::arg("theAspect"))
        .def("SetPrimitivesAspect",
             (void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_Aspects> &  ) ) static_cast<void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_Aspects> &  ) >(&OpenGl_Group::SetPrimitivesAspect),
             R"#(Append aspect as an element.)#"  , py::arg("theAspect"))
        .def("SynchronizeAspects",
             (void (OpenGl_Group::*)() ) static_cast<void (OpenGl_Group::*)() >(&OpenGl_Group::SynchronizeAspects),
             R"#(Update presentation aspects after their modification.)#" )
        .def("ReplaceAspects",
             (void (OpenGl_Group::*)(  const NCollection_DataMap<opencascade::handle<Graphic3d_Aspects>, opencascade::handle<Graphic3d_Aspects> > &  ) ) static_cast<void (OpenGl_Group::*)(  const NCollection_DataMap<opencascade::handle<Graphic3d_Aspects>, opencascade::handle<Graphic3d_Aspects> > &  ) >(&OpenGl_Group::ReplaceAspects),
             R"#(Replace aspects specified in the replacement map.)#"  , py::arg("theMap"))
        .def("AddPrimitiveArray",
             (void (OpenGl_Group::*)( const Graphic3d_TypeOfPrimitiveArray ,  const opencascade::handle<Graphic3d_IndexBuffer> & ,  const opencascade::handle<Graphic3d_Buffer> & ,  const opencascade::handle<Graphic3d_BoundBuffer> & ,  const Standard_Boolean  ) ) static_cast<void (OpenGl_Group::*)( const Graphic3d_TypeOfPrimitiveArray ,  const opencascade::handle<Graphic3d_IndexBuffer> & ,  const opencascade::handle<Graphic3d_Buffer> & ,  const opencascade::handle<Graphic3d_BoundBuffer> & ,  const Standard_Boolean  ) >(&OpenGl_Group::AddPrimitiveArray),
             R"#(Add primitive array element)#"  , py::arg("theType"),  py::arg("theIndices"),  py::arg("theAttribs"),  py::arg("theBounds"),  py::arg("theToEvalMinMax"))
        .def("AddText",
             (void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_Text> & ,  const Standard_Boolean  ) ) static_cast<void (OpenGl_Group::*)( const opencascade::handle<Graphic3d_Text> & ,  const Standard_Boolean  ) >(&OpenGl_Group::AddText),
             R"#(Adds a text for display)#"  , py::arg("theTextParams"),  py::arg("theToEvalMinMax"))
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
        .def("GlAspects",
             (const OpenGl_Aspects * (OpenGl_Group::*)() const) static_cast<const OpenGl_Aspects * (OpenGl_Group::*)() const>(&OpenGl_Group::GlAspects),
             R"#(Returns OpenGL aspect.)#" )
        .def("IsRaytracable",
             (Standard_Boolean (OpenGl_Group::*)() const) static_cast<Standard_Boolean (OpenGl_Group::*)() const>(&OpenGl_Group::IsRaytracable),
             R"#(Is the group ray-tracable (contains ray-tracable elements)?)#" )
        .def("DumpJson",
             (void (OpenGl_Group::*)( std::ostream & ,  const Standard_Integer  ) const) static_cast<void (OpenGl_Group::*)( std::ostream & ,  const Standard_Integer  ) const>(&OpenGl_Group::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Group::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Group::*)() const>(&OpenGl_Group::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Group::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Group::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_HaltonSampler , shared_ptr<OpenGl_HaltonSampler>>(m,"OpenGl_HaltonSampler");

    static_cast<py::class_<OpenGl_HaltonSampler , shared_ptr<OpenGl_HaltonSampler>  >>(m.attr("OpenGl_HaltonSampler"))
    // constructors
    // custom constructors
    // methods
        .def("initFaure",
             (void (OpenGl_HaltonSampler::*)() ) static_cast<void (OpenGl_HaltonSampler::*)() >(&OpenGl_HaltonSampler::initFaure),
             R"#(Init the permutation arrays using Faure-permutations. Alternatively, initRandom() can be called before the sampling functionality can be used.)#" )
        .def("sample",
             (float (OpenGl_HaltonSampler::*)( unsigned int ,  unsigned int  ) const) static_cast<float (OpenGl_HaltonSampler::*)( unsigned int ,  unsigned int  ) const>(&OpenGl_HaltonSampler::sample),
             R"#(Return the Halton sample for the given dimension (component) and index. The client must have called initRandom or initFaure() at least once before. dimension must be smaller than the value returned by get_num_dimensions().)#"  , py::arg("theDimension"),  py::arg("theIndex"))
        .def("initFaure",
             (void (OpenGl_HaltonSampler::*)() ) static_cast<void (OpenGl_HaltonSampler::*)() >(&OpenGl_HaltonSampler::initFaure),
             R"#(Init the permutation arrays using Faure-permutations. Alternatively, initRandom() can be called before the sampling functionality can be used.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_num_dimensions_s",
                    (unsigned int (*)() ) static_cast<unsigned int (*)() >(&OpenGl_HaltonSampler::get_num_dimensions),
                    R"#(Return the number of supported dimensions.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_LayerList , shared_ptr<OpenGl_LayerList>  >>(m.attr("OpenGl_LayerList"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("theNbPriorities") )
    // custom constructors
    // methods
        .def("NbPriorities",
             (Standard_Integer (OpenGl_LayerList::*)() const) static_cast<Standard_Integer (OpenGl_LayerList::*)() const>(&OpenGl_LayerList::NbPriorities),
             R"#(Method returns the number of available priorities)#" )
        .def("NbStructures",
             (Standard_Integer (OpenGl_LayerList::*)() const) static_cast<Standard_Integer (OpenGl_LayerList::*)() const>(&OpenGl_LayerList::NbStructures),
             R"#(Number of displayed structures)#" )
        .def("NbImmediateStructures",
             (Standard_Integer (OpenGl_LayerList::*)() const) static_cast<Standard_Integer (OpenGl_LayerList::*)() const>(&OpenGl_LayerList::NbImmediateStructures),
             R"#(Return number of structures within immediate layers)#" )
        .def("InsertLayerBefore",
             (void (OpenGl_LayerList::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_LayerList::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) >(&OpenGl_LayerList::InsertLayerBefore),
             R"#(Insert a new layer with id.)#"  , py::arg("theNewLayerId"),  py::arg("theSettings"),  py::arg("theLayerAfter"))
        .def("InsertLayerAfter",
             (void (OpenGl_LayerList::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_LayerList::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) >(&OpenGl_LayerList::InsertLayerAfter),
             R"#(Insert a new layer with id.)#"  , py::arg("theNewLayerId"),  py::arg("theSettings"),  py::arg("theLayerBefore"))
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
        .def("Layers",
             (const NCollection_List<opencascade::handle<Graphic3d_Layer> > & (OpenGl_LayerList::*)() const) static_cast<const NCollection_List<opencascade::handle<Graphic3d_Layer> > & (OpenGl_LayerList::*)() const>(&OpenGl_LayerList::Layers),
             R"#(Returns the set of OpenGL Z-layers.)#" )
        .def("LayerIDs",
             (const NCollection_DataMap<Graphic3d_ZLayerId, opencascade::handle<Graphic3d_Layer> > & (OpenGl_LayerList::*)() const) static_cast<const NCollection_DataMap<Graphic3d_ZLayerId, opencascade::handle<Graphic3d_Layer> > & (OpenGl_LayerList::*)() const>(&OpenGl_LayerList::LayerIDs),
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Material , shared_ptr<OpenGl_Material>  >>(m.attr("OpenGl_Material"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Shine",
             (float (OpenGl_Material::*)() const) static_cast<float (OpenGl_Material::*)() const>(&OpenGl_Material::Shine),
             R"#(None)#" )
        .def("ChangeShine",
             (float & (OpenGl_Material::*)() ) static_cast<float & (OpenGl_Material::*)() >(&OpenGl_Material::ChangeShine),
             R"#(None)#" )
        .def("Transparency",
             (float (OpenGl_Material::*)() const) static_cast<float (OpenGl_Material::*)() const>(&OpenGl_Material::Transparency),
             R"#(None)#" )
        .def("ChangeTransparency",
             (float & (OpenGl_Material::*)() ) static_cast<float & (OpenGl_Material::*)() >(&OpenGl_Material::ChangeTransparency),
             R"#(None)#" )
        .def("SetColor",
             (void (OpenGl_Material::*)(  const Graphic3d_Vec4 &  ) ) static_cast<void (OpenGl_Material::*)(  const Graphic3d_Vec4 &  ) >(&OpenGl_Material::SetColor),
             R"#(Set material color.)#"  , py::arg("theColor"))
        .def("Init",
             (void (OpenGl_Material::*)( const Graphic3d_MaterialAspect & ,  const Quantity_Color &  ) ) static_cast<void (OpenGl_Material::*)( const Graphic3d_MaterialAspect & ,  const Quantity_Color &  ) >(&OpenGl_Material::Init),
             R"#(Initialize material)#"  , py::arg("theProp"),  py::arg("theInteriorColor"))
        .def("Packed",
             (const OpenGl_Vec4 * (OpenGl_Material::*)() const) static_cast<const OpenGl_Vec4 * (OpenGl_Material::*)() const>(&OpenGl_Material::Packed),
             R"#(Returns packed (serialized) representation of material properties)#" )
        .def("IsEqual",
             (bool (OpenGl_Material::*)( const OpenGl_Material &  ) const) static_cast<bool (OpenGl_Material::*)( const OpenGl_Material &  ) const>(&OpenGl_Material::IsEqual),
             R"#(Check this material for equality with another material (without tolerance!).)#"  , py::arg("theOther"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NbOfVec4_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&OpenGl_Material::NbOfVec4),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_Matrix , shared_ptr<OpenGl_Matrix>>(m,"OpenGl_Matrix");

    static_cast<py::class_<OpenGl_Matrix , shared_ptr<OpenGl_Matrix>  >>(m.attr("OpenGl_Matrix"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_RaytraceGeometry , shared_ptr<OpenGl_RaytraceGeometry>  >>(m.attr("OpenGl_RaytraceGeometry"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ClearMaterials",
             (void (OpenGl_RaytraceGeometry::*)() ) static_cast<void (OpenGl_RaytraceGeometry::*)() >(&OpenGl_RaytraceGeometry::ClearMaterials),
             R"#(Clears only ray-tracing materials.)#" )
        .def("Clear",
             (void (OpenGl_RaytraceGeometry::*)() ) static_cast<void (OpenGl_RaytraceGeometry::*)() >(&OpenGl_RaytraceGeometry::Clear),
             R"#(Clears ray-tracing geometry.)#" )
        .def("ProcessAcceleration",
             (Standard_Boolean (OpenGl_RaytraceGeometry::*)() ) static_cast<Standard_Boolean (OpenGl_RaytraceGeometry::*)() >(&OpenGl_RaytraceGeometry::ProcessAcceleration),
             R"#(Performs post-processing of high-level scene BVH.)#" )
        .def("AccelerationOffset",
             (Standard_Integer (OpenGl_RaytraceGeometry::*)( Standard_Integer  ) ) static_cast<Standard_Integer (OpenGl_RaytraceGeometry::*)( Standard_Integer  ) >(&OpenGl_RaytraceGeometry::AccelerationOffset),
             R"#(Returns offset of bottom-level BVH for given leaf node. If the node index is not valid the function returns -1.)#"  , py::arg("theNodeIdx"))
        .def("VerticesOffset",
             (Standard_Integer (OpenGl_RaytraceGeometry::*)( Standard_Integer  ) ) static_cast<Standard_Integer (OpenGl_RaytraceGeometry::*)( Standard_Integer  ) >(&OpenGl_RaytraceGeometry::VerticesOffset),
             R"#(Returns offset of triangulation vertices for given leaf node. If the node index is not valid the function returns -1.)#"  , py::arg("theNodeIdx"))
        .def("ElementsOffset",
             (Standard_Integer (OpenGl_RaytraceGeometry::*)( Standard_Integer  ) ) static_cast<Standard_Integer (OpenGl_RaytraceGeometry::*)( Standard_Integer  ) >(&OpenGl_RaytraceGeometry::ElementsOffset),
             R"#(Returns offset of triangulation elements for given leaf node. If the node index is not valid the function returns -1.)#"  , py::arg("theNodeIdx"))
        .def("TriangleSet",
             (OpenGl_TriangleSet * (OpenGl_RaytraceGeometry::*)( Standard_Integer  ) ) static_cast<OpenGl_TriangleSet * (OpenGl_RaytraceGeometry::*)( Standard_Integer  ) >(&OpenGl_RaytraceGeometry::TriangleSet),
             R"#(Returns triangulation data for given leaf node. If the node index is not valid the function returns NULL.)#"  , py::arg("theNodeIdx"))
        .def("QuadBVH",
             (const QuadBvhHandle & (OpenGl_RaytraceGeometry::*)() ) static_cast<const QuadBvhHandle & (OpenGl_RaytraceGeometry::*)() >(&OpenGl_RaytraceGeometry::QuadBVH),
             R"#(Returns quad BVH (QBVH) tree produced from binary BVH.)#" )
        .def("HasTextures",
             (Standard_Boolean (OpenGl_RaytraceGeometry::*)() const) static_cast<Standard_Boolean (OpenGl_RaytraceGeometry::*)() const>(&OpenGl_RaytraceGeometry::HasTextures),
             R"#(Checks if scene contains textured objects.)#" )
        .def("AddTexture",
             (Standard_Integer (OpenGl_RaytraceGeometry::*)( const opencascade::handle<OpenGl_Texture> &  ) ) static_cast<Standard_Integer (OpenGl_RaytraceGeometry::*)( const opencascade::handle<OpenGl_Texture> &  ) >(&OpenGl_RaytraceGeometry::AddTexture),
             R"#(Adds new OpenGL texture to the scene and returns its index.)#"  , py::arg("theTexture"))
        .def("UpdateTextureHandles",
             (Standard_Boolean (OpenGl_RaytraceGeometry::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<Standard_Boolean (OpenGl_RaytraceGeometry::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_RaytraceGeometry::UpdateTextureHandles),
             R"#(Updates unique 64-bit texture handles to use in shaders.)#"  , py::arg("theContext"))
        .def("AcquireTextures",
             (Standard_Boolean (OpenGl_RaytraceGeometry::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<Standard_Boolean (OpenGl_RaytraceGeometry::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_RaytraceGeometry::AcquireTextures),
             R"#(Makes the OpenGL texture handles resident (must be called before using).)#"  , py::arg("theContext"))
        .def("ReleaseTextures",
             (Standard_Boolean (OpenGl_RaytraceGeometry::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<Standard_Boolean (OpenGl_RaytraceGeometry::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_RaytraceGeometry::ReleaseTextures),
             R"#(Makes the OpenGL texture handles non-resident (must be called after using).)#"  , py::arg("theContext"))
        .def("TextureHandles",
             (const std::vector<GLuint64> & (OpenGl_RaytraceGeometry::*)() const) static_cast<const std::vector<GLuint64> & (OpenGl_RaytraceGeometry::*)() const>(&OpenGl_RaytraceGeometry::TextureHandles),
             R"#(Returns array of texture handles.)#" )
        .def("ReleaseResources",
             (void (OpenGl_RaytraceGeometry::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_RaytraceGeometry::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_RaytraceGeometry::ReleaseResources),
             R"#(Releases OpenGL resources.)#"  , py::arg(""))
        .def("TopLevelTreeDepth",
             (Standard_Integer (OpenGl_RaytraceGeometry::*)() const) static_cast<Standard_Integer (OpenGl_RaytraceGeometry::*)() const>(&OpenGl_RaytraceGeometry::TopLevelTreeDepth),
             R"#(Returns depth of top-level scene BVH from last build.)#" )
        .def("BotLevelTreeDepth",
             (Standard_Integer (OpenGl_RaytraceGeometry::*)() const) static_cast<Standard_Integer (OpenGl_RaytraceGeometry::*)() const>(&OpenGl_RaytraceGeometry::BotLevelTreeDepth),
             R"#(Returns maximum depth of bottom-level scene BVHs from last build.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_RaytraceLight , shared_ptr<OpenGl_RaytraceLight>  >>(m.attr("OpenGl_RaytraceLight"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const BVH::VectorType<Standard_ShortReal, 4>::Type &, const BVH::VectorType<Standard_ShortReal, 4>::Type & >()  , py::arg("theEmission"),  py::arg("thePosition") )
    // custom constructors
    // methods
        .def("Packed",
             (const Standard_ShortReal * (OpenGl_RaytraceLight::*)() ) static_cast<const Standard_ShortReal * (OpenGl_RaytraceLight::*)() >(&OpenGl_RaytraceLight::Packed),
             R"#(Returns packed (serialized) representation of light source.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_RaytraceMaterial , shared_ptr<OpenGl_RaytraceMaterial>  >>(m.attr("OpenGl_RaytraceMaterial"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Packed",
             (const Standard_ShortReal * (OpenGl_RaytraceMaterial::*)() ) static_cast<const Standard_ShortReal * (OpenGl_RaytraceMaterial::*)() >(&OpenGl_RaytraceMaterial::Packed),
             R"#(Returns packed (serialized) representation of material.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Resource ,opencascade::handle<OpenGl_Resource> ,Py_OpenGl_Resource , Standard_Transient >>(m.attr("OpenGl_Resource"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Release",
             (void (OpenGl_Resource::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_Resource::*)( OpenGl_Context *  ) >(&OpenGl_Resource::Release),
             R"#(Release GPU resources. Notice that implementation should be SAFE for several consecutive calls (thus should invalidate internal structures / ids to avoid multiple-free errors).)#"  , py::arg("theGlCtx"))
        .def("EstimatedDataSize",
             (Standard_Size (OpenGl_Resource::*)() const) static_cast<Standard_Size (OpenGl_Resource::*)() const>(&OpenGl_Resource::EstimatedDataSize),
             R"#(Returns estimated GPU memory usage for holding data without considering overheads and allocation alignment rules.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Resource::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Resource::*)() const>(&OpenGl_Resource::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Resource::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Resource::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_SetOfPrograms ,opencascade::handle<OpenGl_SetOfPrograms>  , Standard_Transient >>(m.attr("OpenGl_SetOfPrograms"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_SetOfPrograms::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_SetOfPrograms::*)() const>(&OpenGl_SetOfPrograms::DynamicType),
             R"#(None)#" )
        .def("ChangeValue",
             (opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_SetOfPrograms::*)( Standard_Integer  ) ) static_cast<opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_SetOfPrograms::*)( Standard_Integer  ) >(&OpenGl_SetOfPrograms::ChangeValue),
             R"#(Access program by index)#"  , py::arg("theProgramBits"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_SetOfPrograms::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_SetOfPrograms::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_SetOfShaderPrograms ,opencascade::handle<OpenGl_SetOfShaderPrograms>  , Standard_Transient >>(m.attr("OpenGl_SetOfShaderPrograms"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<OpenGl_SetOfPrograms> & >()  , py::arg("thePrograms") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_SetOfShaderPrograms::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_SetOfShaderPrograms::*)() const>(&OpenGl_SetOfShaderPrograms::DynamicType),
             R"#(None)#" )
        .def("ChangeValue",
             (opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_SetOfShaderPrograms::*)( Graphic3d_TypeOfShadingModel ,  Standard_Integer  ) ) static_cast<opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_SetOfShaderPrograms::*)( Graphic3d_TypeOfShadingModel ,  Standard_Integer  ) >(&OpenGl_SetOfShaderPrograms::ChangeValue),
             R"#(Access program by index)#"  , py::arg("theShadingModel"),  py::arg("theProgramBits"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_SetOfShaderPrograms::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_SetOfShaderPrograms::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_SetterInterface , shared_ptr<OpenGl_SetterInterface> ,Py_OpenGl_SetterInterface >>(m.attr("OpenGl_SetterInterface"))
    // constructors
    // custom constructors
    // methods
        .def("Set",
             (void (OpenGl_SetterInterface::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_ShaderVariable> & ,  OpenGl_ShaderProgram *  ) ) static_cast<void (OpenGl_SetterInterface::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_ShaderVariable> & ,  OpenGl_ShaderProgram *  ) >(&OpenGl_SetterInterface::Set),
             R"#(Sets user-defined uniform variable to specified program.)#"  , py::arg("theCtx"),  py::arg("theVariable"),  py::arg("theProgram"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_ShaderManager ,opencascade::handle<OpenGl_ShaderManager>  , Standard_Transient >>(m.attr("OpenGl_ShaderManager"))
    // constructors
        .def(py::init< OpenGl_Context * >()  , py::arg("theContext") )
    // custom constructors
    // methods
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
        .def("LocalClippingPlaneW",
             (Standard_Real (OpenGl_ShaderManager::*)( const Graphic3d_ClipPlane &  ) const) static_cast<Standard_Real (OpenGl_ShaderManager::*)( const Graphic3d_ClipPlane &  ) const>(&OpenGl_ShaderManager::LocalClippingPlaneW),
             R"#(Return clipping plane W equation value moved considering local camera transformation.)#"  , py::arg("thePlane"))
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
             (Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  Graphic3d_TypeOfShadingModel ,  Graphic3d_AlphaMode ,  Standard_Boolean ,  Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  Graphic3d_TypeOfShadingModel ,  Graphic3d_AlphaMode ,  Standard_Boolean ,  Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) >(&OpenGl_ShaderManager::BindFaceProgram),
             R"#(Bind program for filled primitives rendering)#"  , py::arg("theTextures"),  py::arg("theShadingModel"),  py::arg("theAlphaMode"),  py::arg("theHasVertColor"),  py::arg("theEnableEnvMap"),  py::arg("theCustomProgram"))
        .def("BindFaceProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  Graphic3d_TypeOfShadingModel ,  Graphic3d_AlphaMode ,  Aspect_InteriorStyle ,  Standard_Boolean ,  Standard_Boolean ,  Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  Graphic3d_TypeOfShadingModel ,  Graphic3d_AlphaMode ,  Aspect_InteriorStyle ,  Standard_Boolean ,  Standard_Boolean ,  Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) >(&OpenGl_ShaderManager::BindFaceProgram),
             R"#(Bind program for filled primitives rendering)#"  , py::arg("theTextures"),  py::arg("theShadingModel"),  py::arg("theAlphaMode"),  py::arg("theInteriorStyle"),  py::arg("theHasVertColor"),  py::arg("theEnableEnvMap"),  py::arg("theEnableMeshEdges"),  py::arg("theCustomProgram"))
        .def("BindLineProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  const Aspect_TypeOfLine ,  const Graphic3d_TypeOfShadingModel ,  const Graphic3d_AlphaMode ,  const Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  const Aspect_TypeOfLine ,  const Graphic3d_TypeOfShadingModel ,  const Graphic3d_AlphaMode ,  const Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) >(&OpenGl_ShaderManager::BindLineProgram),
             R"#(Bind program for line rendering)#"  , py::arg("theTextures"),  py::arg("theLineType"),  py::arg("theShadingModel"),  py::arg("theAlphaMode"),  py::arg("theHasVertColor"),  py::arg("theCustomProgram"))
        .def("BindMarkerProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  Graphic3d_TypeOfShadingModel ,  Graphic3d_AlphaMode ,  Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_TextureSet> & ,  Graphic3d_TypeOfShadingModel ,  Graphic3d_AlphaMode ,  Standard_Boolean ,  const opencascade::handle<OpenGl_ShaderProgram> &  ) >(&OpenGl_ShaderManager::BindMarkerProgram),
             R"#(Bind program for point rendering)#"  , py::arg("theTextures"),  py::arg("theShadingModel"),  py::arg("theAlphaMode"),  py::arg("theHasVertColor"),  py::arg("theCustomProgram"))
        .def("BindFontProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) >(&OpenGl_ShaderManager::BindFontProgram),
             R"#(Bind program for rendering alpha-textured font.)#"  , py::arg("theCustomProgram"))
        .def("BindOutlineProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)() ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)() >(&OpenGl_ShaderManager::BindOutlineProgram),
             R"#(Bind program for outline rendering)#" )
        .def("BindFboBlitProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)() ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)() >(&OpenGl_ShaderManager::BindFboBlitProgram),
             R"#(Bind program for FBO blit operation.)#" )
        .def("BindOitCompositingProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const Standard_Boolean  ) >(&OpenGl_ShaderManager::BindOitCompositingProgram),
             R"#(Bind program for blended order-independent transparency buffers compositing.)#"  , py::arg("theIsMSAAEnabled"))
        .def("BindStereoProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)( const Graphic3d_StereoMode  ) ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)( const Graphic3d_StereoMode  ) >(&OpenGl_ShaderManager::BindStereoProgram),
             R"#(Bind program for rendering stereoscopic image.)#"  , py::arg("theStereoMode"))
        .def("BindBoundBoxProgram",
             (Standard_Boolean (OpenGl_ShaderManager::*)() ) static_cast<Standard_Boolean (OpenGl_ShaderManager::*)() >(&OpenGl_ShaderManager::BindBoundBoxProgram),
             R"#(Bind program for rendering bounding box.)#" )
        .def("BoundBoxVertBuffer",
             (const opencascade::handle<OpenGl_VertexBuffer> & (OpenGl_ShaderManager::*)() const) static_cast<const opencascade::handle<OpenGl_VertexBuffer> & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::BoundBoxVertBuffer),
             R"#(Returns bounding box vertex buffer.)#" )
        .def("GetBgCubeMapProgram",
             (const opencascade::handle<Graphic3d_ShaderProgram> & (OpenGl_ShaderManager::*)() ) static_cast<const opencascade::handle<Graphic3d_ShaderProgram> & (OpenGl_ShaderManager::*)() >(&OpenGl_ShaderManager::GetBgCubeMapProgram),
             R"#(Generates shader program to render environment cubemap as background.)#" )
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
             R"#(Pushes current state of OCCT light sources to specified program (only on state change).)#"  , py::arg("theProgram"))
        .def("pushLightSourceState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::pushLightSourceState),
             R"#(Pushes current state of OCCT light sources to specified program.)#"  , py::arg("theProgram"))
        .def("ProjectionState",
             (const OpenGl_ProjectionState & (OpenGl_ShaderManager::*)() const) static_cast<const OpenGl_ProjectionState & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::ProjectionState),
             R"#(Returns current state of OCCT projection transform.)#" )
        .def("UpdateProjectionStateTo",
             (void (OpenGl_ShaderManager::*)(  const Graphic3d_Mat4 &  ) ) static_cast<void (OpenGl_ShaderManager::*)(  const Graphic3d_Mat4 &  ) >(&OpenGl_ShaderManager::UpdateProjectionStateTo),
             R"#(Updates state of OCCT projection transform.)#"  , py::arg("theProjectionMatrix"))
        .def("PushProjectionState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::PushProjectionState),
             R"#(Pushes current state of OCCT projection transform to specified program (only on state change).)#"  , py::arg("theProgram"))
        .def("pushProjectionState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::pushProjectionState),
             R"#(Pushes current state of OCCT projection transform to specified program.)#"  , py::arg("theProgram"))
        .def("ModelWorldState",
             (const OpenGl_ModelWorldState & (OpenGl_ShaderManager::*)() const) static_cast<const OpenGl_ModelWorldState & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::ModelWorldState),
             R"#(Returns current state of OCCT model-world transform.)#" )
        .def("UpdateModelWorldStateTo",
             (void (OpenGl_ShaderManager::*)(  const Graphic3d_Mat4 &  ) ) static_cast<void (OpenGl_ShaderManager::*)(  const Graphic3d_Mat4 &  ) >(&OpenGl_ShaderManager::UpdateModelWorldStateTo),
             R"#(Updates state of OCCT model-world transform.)#"  , py::arg("theModelWorldMatrix"))
        .def("PushModelWorldState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::PushModelWorldState),
             R"#(Pushes current state of OCCT model-world transform to specified program (only on state change).)#"  , py::arg("theProgram"))
        .def("pushModelWorldState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::pushModelWorldState),
             R"#(Pushes current state of OCCT model-world transform to specified program.)#"  , py::arg("theProgram"))
        .def("WorldViewState",
             (const OpenGl_WorldViewState & (OpenGl_ShaderManager::*)() const) static_cast<const OpenGl_WorldViewState & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::WorldViewState),
             R"#(Returns current state of OCCT world-view transform.)#" )
        .def("UpdateWorldViewStateTo",
             (void (OpenGl_ShaderManager::*)(  const Graphic3d_Mat4 &  ) ) static_cast<void (OpenGl_ShaderManager::*)(  const Graphic3d_Mat4 &  ) >(&OpenGl_ShaderManager::UpdateWorldViewStateTo),
             R"#(Updates state of OCCT world-view transform.)#"  , py::arg("theWorldViewMatrix"))
        .def("PushWorldViewState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::PushWorldViewState),
             R"#(Pushes current state of OCCT world-view transform to specified program (only on state change).)#"  , py::arg("theProgram"))
        .def("pushWorldViewState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::pushWorldViewState),
             R"#(Pushes current state of OCCT world-view transform to specified program.)#"  , py::arg("theProgram"))
        .def("UpdateClippingState",
             (void (OpenGl_ShaderManager::*)() ) static_cast<void (OpenGl_ShaderManager::*)() >(&OpenGl_ShaderManager::UpdateClippingState),
             R"#(Updates state of OCCT clipping planes.)#" )
        .def("RevertClippingState",
             (void (OpenGl_ShaderManager::*)() ) static_cast<void (OpenGl_ShaderManager::*)() >(&OpenGl_ShaderManager::RevertClippingState),
             R"#(Reverts state of OCCT clipping planes.)#" )
        .def("PushClippingState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::PushClippingState),
             R"#(Pushes current state of OCCT clipping planes to specified program (only on state change).)#"  , py::arg("theProgram"))
        .def("pushClippingState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::pushClippingState),
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
             R"#(Pushes current state of material to specified program (only on state change).)#"  , py::arg("theProgram"))
        .def("pushMaterialState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::pushMaterialState),
             R"#(Pushes current state of material to specified program.)#"  , py::arg("theProgram"))
        .def("PushInteriorState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> & ,  const opencascade::handle<Graphic3d_Aspects> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> & ,  const opencascade::handle<Graphic3d_Aspects> &  ) const>(&OpenGl_ShaderManager::PushInteriorState),
             R"#(Setup interior style line edges variables.)#"  , py::arg("theProgram"),  py::arg("theAspect"))
        .def("OitState",
             (const OpenGl_OitState & (OpenGl_ShaderManager::*)() const) static_cast<const OpenGl_OitState & (OpenGl_ShaderManager::*)() const>(&OpenGl_ShaderManager::OitState),
             R"#(Returns state of OIT uniforms.)#" )
        .def("SetOitState",
             (void (OpenGl_ShaderManager::*)( const bool ,  const float  ) ) static_cast<void (OpenGl_ShaderManager::*)( const bool ,  const float  ) >(&OpenGl_ShaderManager::SetOitState),
             R"#(Set the state of OIT rendering pass (only on state change).)#"  , py::arg("theToEnableOitWrite"),  py::arg("theDepthFactor"))
        .def("PushOitState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::PushOitState),
             R"#(Pushes state of OIT uniforms to the specified program.)#"  , py::arg("theProgram"))
        .def("pushOitState",
             (void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const) static_cast<void (OpenGl_ShaderManager::*)( const opencascade::handle<OpenGl_ShaderProgram> &  ) const>(&OpenGl_ShaderManager::pushOitState),
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
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_ShaderManager::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_ShaderManager::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_ShaderUniformLocation , shared_ptr<OpenGl_ShaderUniformLocation>  >>(m.attr("OpenGl_ShaderUniformLocation"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< GLint >()  , py::arg("theLocation") )
    // custom constructors
    // methods
        .def("IsValid",
             (bool (OpenGl_ShaderUniformLocation::*)() const) static_cast<bool (OpenGl_ShaderUniformLocation::*)() const>(&OpenGl_ShaderUniformLocation::IsValid),
             R"#(Note you may safely put invalid location in functions like glUniform* - the data passed in will be silently ignored.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_StateCounter , shared_ptr<OpenGl_StateCounter>  >>(m.attr("OpenGl_StateCounter"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Increment",
             (Standard_Size (OpenGl_StateCounter::*)() ) static_cast<Standard_Size (OpenGl_StateCounter::*)() >(&OpenGl_StateCounter::Increment),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_StateInterface , shared_ptr<OpenGl_StateInterface>  >>(m.attr("OpenGl_StateInterface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Index",
             (Standard_Size (OpenGl_StateInterface::*)() const) static_cast<Standard_Size (OpenGl_StateInterface::*)() const>(&OpenGl_StateInterface::Index),
             R"#(Returns current state index.)#" )
        .def("Update",
             (void (OpenGl_StateInterface::*)() ) static_cast<void (OpenGl_StateInterface::*)() >(&OpenGl_StateInterface::Update),
             R"#(Increment current state.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Structure ,opencascade::handle<OpenGl_Structure>  , Graphic3d_CStructure >>(m.attr("OpenGl_Structure"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_StructureManager> & >()  , py::arg("theManager") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Structure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Structure::*)() const>(&OpenGl_Structure::DynamicType),
             R"#(None)#" )
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
             (void (OpenGl_Structure::*)( const opencascade::handle<Graphic3d_PresentationAttributes> &  ) ) static_cast<void (OpenGl_Structure::*)( const opencascade::handle<Graphic3d_PresentationAttributes> &  ) >(&OpenGl_Structure::GraphicHighlight),
             R"#(Highlights structure according to the given style and updates corresponding class fields (highlight status and style))#"  , py::arg("theStyle"))
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
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Structure::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Structure::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_TextBuilder , shared_ptr<OpenGl_TextBuilder>  >>(m.attr("OpenGl_TextBuilder"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (void (OpenGl_TextBuilder::*)( const Font_TextFormatter & ,  const opencascade::handle<OpenGl_Context> & ,  OpenGl_Font & ,  NCollection_Vector<GLuint> & ,  NCollection_Vector<opencascade::handle<OpenGl_VertexBuffer> > & ,  NCollection_Vector<opencascade::handle<OpenGl_VertexBuffer> > &  ) ) static_cast<void (OpenGl_TextBuilder::*)( const Font_TextFormatter & ,  const opencascade::handle<OpenGl_Context> & ,  OpenGl_Font & ,  NCollection_Vector<GLuint> & ,  NCollection_Vector<opencascade::handle<OpenGl_VertexBuffer> > & ,  NCollection_Vector<opencascade::handle<OpenGl_VertexBuffer> > &  ) >(&OpenGl_TextBuilder::Perform),
             R"#(Creates texture quads for the given text.)#"  , py::arg("theFormatter"),  py::arg("theContext"),  py::arg("theFont"),  py::arg("theTextures"),  py::arg("theVertsPerTexture"),  py::arg("theTCrdsPerTexture"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_TextureFormat , shared_ptr<OpenGl_TextureFormat>  >>(m.attr("OpenGl_TextureFormat"))
    // constructors
    // custom constructors
    // methods
        .def("Format",
             (GLenum (OpenGl_TextureFormat::*)() const) static_cast<GLenum (OpenGl_TextureFormat::*)() const>(&OpenGl_TextureFormat::Format),
             R"#(Returns OpenGL format of the pixel data.)#" )
        .def("Internal",
             (GLint (OpenGl_TextureFormat::*)() const) static_cast<GLint (OpenGl_TextureFormat::*)() const>(&OpenGl_TextureFormat::Internal),
             R"#(Returns OpenGL internal format of the pixel data.)#" )
        .def("DataType",
             (GLint (OpenGl_TextureFormat::*)() const) static_cast<GLint (OpenGl_TextureFormat::*)() const>(&OpenGl_TextureFormat::DataType),
             R"#(Returns OpenGL data type of the pixel data.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_TextureFormatSelector<GLbyte> , shared_ptr<OpenGl_TextureFormatSelector<GLbyte>>>(m,"OpenGl_TextureFormatSelector_GLbyte");

    static_cast<py::class_<OpenGl_TextureFormatSelector<GLbyte> , shared_ptr<OpenGl_TextureFormatSelector<GLbyte>>  >>(m.attr("OpenGl_TextureFormatSelector_GLbyte"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Internal_s",
                    (GLint (*)( GLuint  ) ) static_cast<GLint (*)( GLuint  ) >(&OpenGl_TextureFormatSelector<GLbyte>::Internal),
                    R"#(None)#"  , py::arg("theChannels"))
        .def_static("DataType_s",
                    (GLint (*)() ) static_cast<GLint (*)() >(&OpenGl_TextureFormatSelector<GLbyte>::DataType),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_TextureFormatSelector<GLfloat> , shared_ptr<OpenGl_TextureFormatSelector<GLfloat>>>(m,"OpenGl_TextureFormatSelector_GLfloat");

    static_cast<py::class_<OpenGl_TextureFormatSelector<GLfloat> , shared_ptr<OpenGl_TextureFormatSelector<GLfloat>>  >>(m.attr("OpenGl_TextureFormatSelector_GLfloat"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Internal_s",
                    (GLint (*)( GLuint  ) ) static_cast<GLint (*)( GLuint  ) >(&OpenGl_TextureFormatSelector<GLfloat>::Internal),
                    R"#(None)#"  , py::arg("theChannels"))
        .def_static("DataType_s",
                    (GLint (*)() ) static_cast<GLint (*)() >(&OpenGl_TextureFormatSelector<GLfloat>::DataType),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_TextureFormatSelector<GLint> , shared_ptr<OpenGl_TextureFormatSelector<GLint>>>(m,"OpenGl_TextureFormatSelector_GLint");

    static_cast<py::class_<OpenGl_TextureFormatSelector<GLint> , shared_ptr<OpenGl_TextureFormatSelector<GLint>>  >>(m.attr("OpenGl_TextureFormatSelector_GLint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Internal_s",
                    (GLint (*)( GLuint  ) ) static_cast<GLint (*)( GLuint  ) >(&OpenGl_TextureFormatSelector<GLint>::Internal),
                    R"#(None)#"  , py::arg("theChannels"))
        .def_static("DataType_s",
                    (GLint (*)() ) static_cast<GLint (*)() >(&OpenGl_TextureFormatSelector<GLint>::DataType),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_TextureFormatSelector<GLshort> , shared_ptr<OpenGl_TextureFormatSelector<GLshort>>>(m,"OpenGl_TextureFormatSelector_GLshort");

    static_cast<py::class_<OpenGl_TextureFormatSelector<GLshort> , shared_ptr<OpenGl_TextureFormatSelector<GLshort>>  >>(m.attr("OpenGl_TextureFormatSelector_GLshort"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Internal_s",
                    (GLint (*)( GLuint  ) ) static_cast<GLint (*)( GLuint  ) >(&OpenGl_TextureFormatSelector<GLshort>::Internal),
                    R"#(None)#"  , py::arg("theChannels"))
        .def_static("DataType_s",
                    (GLint (*)() ) static_cast<GLint (*)() >(&OpenGl_TextureFormatSelector<GLshort>::DataType),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_TextureFormatSelector<GLubyte> , shared_ptr<OpenGl_TextureFormatSelector<GLubyte>>>(m,"OpenGl_TextureFormatSelector_GLubyte");

    static_cast<py::class_<OpenGl_TextureFormatSelector<GLubyte> , shared_ptr<OpenGl_TextureFormatSelector<GLubyte>>  >>(m.attr("OpenGl_TextureFormatSelector_GLubyte"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Internal_s",
                    (GLint (*)( GLuint  ) ) static_cast<GLint (*)( GLuint  ) >(&OpenGl_TextureFormatSelector<GLubyte>::Internal),
                    R"#(None)#"  , py::arg("theChannels"))
        .def_static("DataType_s",
                    (GLint (*)() ) static_cast<GLint (*)() >(&OpenGl_TextureFormatSelector<GLubyte>::DataType),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_TextureFormatSelector<GLuint> , shared_ptr<OpenGl_TextureFormatSelector<GLuint>>>(m,"OpenGl_TextureFormatSelector_GLuint");

    static_cast<py::class_<OpenGl_TextureFormatSelector<GLuint> , shared_ptr<OpenGl_TextureFormatSelector<GLuint>>  >>(m.attr("OpenGl_TextureFormatSelector_GLuint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Internal_s",
                    (GLint (*)( GLuint  ) ) static_cast<GLint (*)( GLuint  ) >(&OpenGl_TextureFormatSelector<GLuint>::Internal),
                    R"#(None)#"  , py::arg("theChannels"))
        .def_static("DataType_s",
                    (GLint (*)() ) static_cast<GLint (*)() >(&OpenGl_TextureFormatSelector<GLuint>::DataType),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<OpenGl_TextureFormatSelector<GLushort> , shared_ptr<OpenGl_TextureFormatSelector<GLushort>>>(m,"OpenGl_TextureFormatSelector_GLushort");

    static_cast<py::class_<OpenGl_TextureFormatSelector<GLushort> , shared_ptr<OpenGl_TextureFormatSelector<GLushort>>  >>(m.attr("OpenGl_TextureFormatSelector_GLushort"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Internal_s",
                    (GLint (*)( GLuint  ) ) static_cast<GLint (*)( GLuint  ) >(&OpenGl_TextureFormatSelector<GLushort>::Internal),
                    R"#(None)#"  , py::arg("theChannels"))
        .def_static("DataType_s",
                    (GLint (*)() ) static_cast<GLint (*)() >(&OpenGl_TextureFormatSelector<GLushort>::DataType),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_TextureSet ,opencascade::handle<OpenGl_TextureSet>  , Standard_Transient >>(m.attr("OpenGl_TextureSet"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< Standard_Integer >()  , py::arg("theNbTextures") )
        .def(py::init< const opencascade::handle<OpenGl_Texture> & >()  , py::arg("theTexture") )
    // custom constructors
    // methods
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
        .def("Last",
             (const opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)() const) static_cast<const opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)() const>(&OpenGl_TextureSet::Last),
             R"#(Return the last texture.)#" )
        .def("ChangeLast",
             (opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)() ) static_cast<opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)() >(&OpenGl_TextureSet::ChangeLast),
             R"#(Return the last texture.)#" )
        .def("Value",
             (const opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)( Standard_Integer  ) const) static_cast<const opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)( Standard_Integer  ) const>(&OpenGl_TextureSet::Value),
             R"#(Return the texture at specified position within [0, Size()) range.)#"  , py::arg("theIndex"))
        .def("ChangeValue",
             (opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)( Standard_Integer  ) ) static_cast<opencascade::handle<OpenGl_Texture> & (OpenGl_TextureSet::*)( Standard_Integer  ) >(&OpenGl_TextureSet::ChangeValue),
             R"#(Return the texture at specified position within [0, Size()) range.)#"  , py::arg("theIndex"))
        .def("IsModulate",
             (bool (OpenGl_TextureSet::*)() const) static_cast<bool (OpenGl_TextureSet::*)() const>(&OpenGl_TextureSet::IsModulate),
             R"#(Return TRUE if texture color modulation has been enabled for the first texture or if texture is not set at all.)#" )
        .def("HasNonPointSprite",
             (bool (OpenGl_TextureSet::*)() const) static_cast<bool (OpenGl_TextureSet::*)() const>(&OpenGl_TextureSet::HasNonPointSprite),
             R"#(Return TRUE if other than point sprite textures are defined within point set.)#" )
        .def("HasPointSprite",
             (bool (OpenGl_TextureSet::*)() const) static_cast<bool (OpenGl_TextureSet::*)() const>(&OpenGl_TextureSet::HasPointSprite),
             R"#(Return TRUE if last texture is a point sprite.)#" )
        .def("InitZero",
             (void (OpenGl_TextureSet::*)() ) static_cast<void (OpenGl_TextureSet::*)() >(&OpenGl_TextureSet::InitZero),
             R"#(Nullify all handles.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_TextureSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_TextureSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_TileSampler , shared_ptr<OpenGl_TileSampler>  >>(m.attr("OpenGl_TileSampler"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("TileSize",
             (Graphic3d_Vec2i (OpenGl_TileSampler::*)() const) static_cast<Graphic3d_Vec2i (OpenGl_TileSampler::*)() const>(&OpenGl_TileSampler::TileSize),
             R"#(Size of individual tile in pixels.)#" )
        .def("VarianceScaleFactor",
             (float (OpenGl_TileSampler::*)() const) static_cast<float (OpenGl_TileSampler::*)() const>(&OpenGl_TileSampler::VarianceScaleFactor),
             R"#(Scale factor for quantization of visual error (float) into signed integer.)#" )
        .def("NbTilesX",
             (int (OpenGl_TileSampler::*)() const) static_cast<int (OpenGl_TileSampler::*)() const>(&OpenGl_TileSampler::NbTilesX),
             R"#(Returns number of tiles in X dimension.)#" )
        .def("NbTilesY",
             (int (OpenGl_TileSampler::*)() const) static_cast<int (OpenGl_TileSampler::*)() const>(&OpenGl_TileSampler::NbTilesY),
             R"#(Returns number of tiles in Y dimension.)#" )
        .def("NbTiles",
             (int (OpenGl_TileSampler::*)() const) static_cast<int (OpenGl_TileSampler::*)() const>(&OpenGl_TileSampler::NbTiles),
             R"#(Returns total number of tiles in viewport.)#" )
        .def("ViewSize",
             (const Graphic3d_Vec2i & (OpenGl_TileSampler::*)() const) static_cast<const Graphic3d_Vec2i & (OpenGl_TileSampler::*)() const>(&OpenGl_TileSampler::ViewSize),
             R"#(Returns ray-tracing viewport.)#" )
        .def("NbOffsetTiles",
             (Graphic3d_Vec2i (OpenGl_TileSampler::*)( bool  ) const) static_cast<Graphic3d_Vec2i (OpenGl_TileSampler::*)( bool  ) const>(&OpenGl_TileSampler::NbOffsetTiles),
             R"#(Number of tiles within offsets texture.)#"  , py::arg("theAdaptive"))
        .def("NbOffsetTilesMax",
             (Graphic3d_Vec2i (OpenGl_TileSampler::*)() const) static_cast<Graphic3d_Vec2i (OpenGl_TileSampler::*)() const>(&OpenGl_TileSampler::NbOffsetTilesMax),
             R"#(Maximum number of tiles within offsets texture.)#" )
        .def("OffsetTilesViewport",
             (Graphic3d_Vec2i (OpenGl_TileSampler::*)( bool  ) const) static_cast<Graphic3d_Vec2i (OpenGl_TileSampler::*)( bool  ) const>(&OpenGl_TileSampler::OffsetTilesViewport),
             R"#(Viewport for rendering using offsets texture.)#"  , py::arg("theAdaptive"))
        .def("OffsetTilesViewportMax",
             (Graphic3d_Vec2i (OpenGl_TileSampler::*)() const) static_cast<Graphic3d_Vec2i (OpenGl_TileSampler::*)() const>(&OpenGl_TileSampler::OffsetTilesViewportMax),
             R"#(Maximum viewport for rendering using offsets texture.)#" )
        .def("MaxTileSamples",
             (int (OpenGl_TileSampler::*)() const) static_cast<int (OpenGl_TileSampler::*)() const>(&OpenGl_TileSampler::MaxTileSamples),
             R"#(Return maximum number of samples per tile.)#" )
        .def("SetSize",
             (void (OpenGl_TileSampler::*)( const Graphic3d_RenderingParams & ,   const NCollection_Vec2<Standard_Integer> &  ) ) static_cast<void (OpenGl_TileSampler::*)( const Graphic3d_RenderingParams & ,   const NCollection_Vec2<Standard_Integer> &  ) >(&OpenGl_TileSampler::SetSize),
             R"#(Specifies size of ray-tracing viewport and recomputes tile size.)#"  , py::arg("theParams"),  py::arg("theSize"))
        .def("GrabVarianceMap",
             (void (OpenGl_TileSampler::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_Texture> &  ) ) static_cast<void (OpenGl_TileSampler::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_Texture> &  ) >(&OpenGl_TileSampler::GrabVarianceMap),
             R"#(Fetches current error estimation from the GPU and builds 2D discrete distribution for tile sampling.)#"  , py::arg("theContext"),  py::arg("theTexture"))
        .def("Reset",
             (void (OpenGl_TileSampler::*)() ) static_cast<void (OpenGl_TileSampler::*)() >(&OpenGl_TileSampler::Reset),
             R"#(Resets (restart) tile sampler to initial state.)#" )
        .def("UploadSamples",
             (bool (OpenGl_TileSampler::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_Texture> & ,  const bool  ) ) static_cast<bool (OpenGl_TileSampler::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_Texture> & ,  const bool  ) >(&OpenGl_TileSampler::UploadSamples),
             R"#(Uploads tile samples to the given OpenGL texture.)#"  , py::arg("theContext"),  py::arg("theSamplesTexture"),  py::arg("theAdaptive"))
        .def("UploadOffsets",
             (bool (OpenGl_TileSampler::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_Texture> & ,  const bool  ) ) static_cast<bool (OpenGl_TileSampler::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_Texture> & ,  const bool  ) >(&OpenGl_TileSampler::UploadOffsets),
             R"#(Uploads offsets of sampled tiles to the given OpenGL texture.)#"  , py::arg("theContext"),  py::arg("theOffsetsTexture"),  py::arg("theAdaptive"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_TriangleSet , shared_ptr<OpenGl_TriangleSet>  , OpenGl_BVHTriangulation3f >>(m.attr("OpenGl_TriangleSet"))
    // constructors
        .def(py::init< const Standard_Size,const opencascade::handle<BVH_Builder<Standard_ShortReal, 3> > & >()  , py::arg("theArrayID"),  py::arg("theBuilder") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_TriangleSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_TriangleSet::*)() const>(&OpenGl_TriangleSet::DynamicType),
             R"#(None)#" )
        .def("AssociatedPArrayID",
             (Standard_Size (OpenGl_TriangleSet::*)() const) static_cast<Standard_Size (OpenGl_TriangleSet::*)() const>(&OpenGl_TriangleSet::AssociatedPArrayID),
             R"#(Returns ID of associated primitive array.)#" )
        .def("MaterialIndex",
             (Standard_Integer (OpenGl_TriangleSet::*)() const) static_cast<Standard_Integer (OpenGl_TriangleSet::*)() const>(&OpenGl_TriangleSet::MaterialIndex),
             R"#(Returns material index of triangle set.)#" )
        .def("SetMaterialIndex",
             (void (OpenGl_TriangleSet::*)( Standard_Integer  ) ) static_cast<void (OpenGl_TriangleSet::*)( Standard_Integer  ) >(&OpenGl_TriangleSet::SetMaterialIndex),
             R"#(Sets material index for entire triangle set.)#"  , py::arg("theMatID"))
        .def("Box",
             (BVH_Set<float, 3>::BVH_BoxNt (OpenGl_TriangleSet::*)() const) static_cast<BVH_Set<float, 3>::BVH_BoxNt (OpenGl_TriangleSet::*)() const>(&OpenGl_TriangleSet::Box),
             R"#(Returns AABB of primitive set.)#" )
        .def("Center",
             (Standard_ShortReal (OpenGl_TriangleSet::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_ShortReal (OpenGl_TriangleSet::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&OpenGl_TriangleSet::Center),
             R"#(Returns centroid position along the given axis.)#"  , py::arg("theIndex"),  py::arg("theAxis"))
        .def("QuadBVH",
             (const QuadBvhHandle & (OpenGl_TriangleSet::*)() ) static_cast<const QuadBvhHandle & (OpenGl_TriangleSet::*)() >(&OpenGl_TriangleSet::QuadBVH),
             R"#(Returns quad BVH (QBVH) tree produced from binary BVH.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_TriangleSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_TriangleSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_VariableSetterSelector , shared_ptr<OpenGl_VariableSetterSelector>  >>(m.attr("OpenGl_VariableSetterSelector"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (OpenGl_VariableSetterSelector::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_ShaderVariable> & ,  OpenGl_ShaderProgram *  ) const) static_cast<void (OpenGl_VariableSetterSelector::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_ShaderVariable> & ,  OpenGl_ShaderProgram *  ) const>(&OpenGl_VariableSetterSelector::Set),
             R"#(Sets user-defined uniform variable to specified program.)#"  , py::arg("theCtx"),  py::arg("theVariable"),  py::arg("theProgram"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_View ,opencascade::handle<OpenGl_View>  , Graphic3d_CView >>(m.attr("OpenGl_View"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_StructureManager> &,const opencascade::handle<OpenGl_GraphicDriver> &,const opencascade::handle<OpenGl_Caps> &,OpenGl_StateCounter * >()  , py::arg("theMgr"),  py::arg("theDriver"),  py::arg("theCaps"),  py::arg("theCounter") )
    // custom constructors
    // methods
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
        .def("BufferDump",
             (Standard_Boolean (OpenGl_View::*)( Image_PixMap & ,  const Graphic3d_BufferType &  ) ) static_cast<Standard_Boolean (OpenGl_View::*)( Image_PixMap & ,  const Graphic3d_BufferType &  ) >(&OpenGl_View::BufferDump),
             R"#(Dump active rendering buffer into specified memory buffer. In Ray-Tracing allow to get a raw HDR buffer using Graphic3d_BT_RGB_RayTraceHdrLeft buffer type, only Left view will be dumped ignoring stereoscopic parameter.)#"  , py::arg("theImage"),  py::arg("theBufferType"))
        .def("InvalidateBVHData",
             (void (OpenGl_View::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_View::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_View::InvalidateBVHData),
             R"#(Marks BVH tree and the set of BVH primitives of correspondent priority list with id theLayerId as outdated.)#"  , py::arg("theLayerId"))
        .def("InsertLayerBefore",
             (void (OpenGl_View::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_View::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) >(&OpenGl_View::InsertLayerBefore),
             R"#(Add a layer to the view.)#"  , py::arg("theLayerId"),  py::arg("theSettings"),  py::arg("theLayerAfter"))
        .def("InsertLayerAfter",
             (void (OpenGl_View::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_View::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings & ,  const Graphic3d_ZLayerId  ) >(&OpenGl_View::InsertLayerAfter),
             R"#(Add a layer to the view.)#"  , py::arg("theNewLayerId"),  py::arg("theSettings"),  py::arg("theLayerBefore"))
        .def("RemoveZLayer",
             (void (OpenGl_View::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (OpenGl_View::*)( const Graphic3d_ZLayerId  ) >(&OpenGl_View::RemoveZLayer),
             R"#(Remove a z layer with the given ID.)#"  , py::arg("theLayerId"))
        .def("SetZLayerSettings",
             (void (OpenGl_View::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) ) static_cast<void (OpenGl_View::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) >(&OpenGl_View::SetZLayerSettings),
             R"#(Sets the settings for a single Z layer of specified view.)#"  , py::arg("theLayerId"),  py::arg("theSettings"))
        .def("ZLayerMax",
             (Standard_Integer (OpenGl_View::*)() const) static_cast<Standard_Integer (OpenGl_View::*)() const>(&OpenGl_View::ZLayerMax),
             R"#(Returns the maximum Z layer ID. First layer ID is Graphic3d_ZLayerId_Default, last ID is ZLayerMax().)#" )
        .def("Layers",
             (const NCollection_List<opencascade::handle<Graphic3d_Layer> > & (OpenGl_View::*)() const) static_cast<const NCollection_List<opencascade::handle<Graphic3d_Layer> > & (OpenGl_View::*)() const>(&OpenGl_View::Layers),
             R"#(Returns the list of layers.)#" )
        .def("Layer",
             (opencascade::handle<Graphic3d_Layer> (OpenGl_View::*)( const Graphic3d_ZLayerId  ) const) static_cast<opencascade::handle<Graphic3d_Layer> (OpenGl_View::*)( const Graphic3d_ZLayerId  ) const>(&OpenGl_View::Layer),
             R"#(Returns layer with given ID or NULL if undefined.)#"  , py::arg("theLayerId"))
        .def("MinMaxValues",
             (Bnd_Box (OpenGl_View::*)( const Standard_Boolean  ) const) static_cast<Bnd_Box (OpenGl_View::*)( const Standard_Boolean  ) const>(&OpenGl_View::MinMaxValues),
             R"#(Returns the bounding box of all structures displayed in the view. If theToIncludeAuxiliary is TRUE, then the boundary box also includes minimum and maximum limits of graphical elements forming parts of infinite and other auxiliary structures.)#"  , py::arg("theToIncludeAuxiliary"))
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
        .def("FBOChangeViewport",
             (void (OpenGl_View::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (OpenGl_View::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&OpenGl_View::FBOChangeViewport),
             R"#(Change offscreen FBO viewport.)#"  , py::arg("theFbo"),  py::arg("theWidth"),  py::arg("theHeight"))
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
        .def("BackgroundCubeMap",
             (opencascade::handle<Graphic3d_CubeMap> (OpenGl_View::*)() const) static_cast<opencascade::handle<Graphic3d_CubeMap> (OpenGl_View::*)() const>(&OpenGl_View::BackgroundCubeMap),
             R"#(Returns cubemap being set last time on background.)#" )
        .def("SetBackgroundCubeMap",
             (void (OpenGl_View::*)( const opencascade::handle<Graphic3d_CubeMap> &  ) ) static_cast<void (OpenGl_View::*)( const opencascade::handle<Graphic3d_CubeMap> &  ) >(&OpenGl_View::SetBackgroundCubeMap),
             R"#(Sets environment cubemap as background.)#"  , py::arg("theCubeMap"))
        .def("TextureEnv",
             (opencascade::handle<Graphic3d_TextureEnv> (OpenGl_View::*)() const) static_cast<opencascade::handle<Graphic3d_TextureEnv> (OpenGl_View::*)() const>(&OpenGl_View::TextureEnv),
             R"#(Returns environment texture set for the view.)#" )
        .def("SetTextureEnv",
             (void (OpenGl_View::*)( const opencascade::handle<Graphic3d_TextureEnv> &  ) ) static_cast<void (OpenGl_View::*)( const opencascade::handle<Graphic3d_TextureEnv> &  ) >(&OpenGl_View::SetTextureEnv),
             R"#(Sets environment texture for the view.)#"  , py::arg("theTextureEnv"))
        .def("BackfacingModel",
             (Graphic3d_TypeOfBackfacingModel (OpenGl_View::*)() const) static_cast<Graphic3d_TypeOfBackfacingModel (OpenGl_View::*)() const>(&OpenGl_View::BackfacingModel),
             R"#(Return backfacing model used for the view.)#" )
        .def("SetBackfacingModel",
             (void (OpenGl_View::*)( const Graphic3d_TypeOfBackfacingModel  ) ) static_cast<void (OpenGl_View::*)( const Graphic3d_TypeOfBackfacingModel  ) >(&OpenGl_View::SetBackfacingModel),
             R"#(Sets backfacing model for the view.)#"  , py::arg("theModel"))
        .def("LocalOrigin",
             (const gp_XYZ & (OpenGl_View::*)() const) static_cast<const gp_XYZ & (OpenGl_View::*)() const>(&OpenGl_View::LocalOrigin),
             R"#(Returns local camera origin currently set for rendering, might be modified during rendering.)#" )
        .def("SetLocalOrigin",
             (void (OpenGl_View::*)( const gp_XYZ &  ) ) static_cast<void (OpenGl_View::*)( const gp_XYZ &  ) >(&OpenGl_View::SetLocalOrigin),
             R"#(Setup local camera origin currently set for rendering.)#"  , py::arg("theOrigin"))
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
        .def("StatisticInformation",
             (TCollection_AsciiString (OpenGl_View::*)() const) static_cast<TCollection_AsciiString (OpenGl_View::*)() const>(&OpenGl_View::StatisticInformation),
             R"#(Returns string with statistic performance info.)#" )
        .def("StatisticInformation",
             (void (OpenGl_View::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> &  ) const) static_cast<void (OpenGl_View::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> &  ) const>(&OpenGl_View::StatisticInformation),
             R"#(Fills in the dictionary with statistic performance info.)#"  , py::arg("theDict"))
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
             (const opencascade::handle<OpenGl_Window> & (OpenGl_View::*)() const) static_cast<const opencascade::handle<OpenGl_Window> & (OpenGl_View::*)() const>(&OpenGl_View::GlWindow),
             R"#(Returns OpenGL window implementation.)#" )
        .def("GlTextureEnv",
             (const opencascade::handle<OpenGl_TextureSet> & (OpenGl_View::*)() const) static_cast<const opencascade::handle<OpenGl_TextureSet> & (OpenGl_View::*)() const>(&OpenGl_View::GlTextureEnv),
             R"#(Returns OpenGL environment map.)#" )
        .def("BVHTreeSelector",
             (const Graphic3d_CullingTool & (OpenGl_View::*)() const) static_cast<const Graphic3d_CullingTool & (OpenGl_View::*)() const>(&OpenGl_View::BVHTreeSelector),
             R"#(Returns selector for BVH tree, providing a possibility to store information about current view volume and to detect which objects are overlapping it.)#" )
        .def("HasImmediateStructures",
             (bool (OpenGl_View::*)() const) static_cast<bool (OpenGl_View::*)() const>(&OpenGl_View::HasImmediateStructures),
             R"#(Returns true if there are immediate structures to display)#" )
        .def("GraduatedTrihedronDisplay",
             (void (OpenGl_View::*)( const Graphic3d_GraduatedTrihedron &  ) ) static_cast<void (OpenGl_View::*)( const Graphic3d_GraduatedTrihedron &  ) >(&OpenGl_View::GraduatedTrihedronDisplay),
             R"#(Displays Graduated Trihedron.)#"  , py::arg("theTrihedronData"))
        .def("GraduatedTrihedronErase",
             (void (OpenGl_View::*)() ) static_cast<void (OpenGl_View::*)() >(&OpenGl_View::GraduatedTrihedronErase),
             R"#(Erases Graduated Trihedron.)#" )
        .def("GraduatedTrihedronMinMaxValues",
             (void (OpenGl_View::*)(  const NCollection_Vec3<Standard_ShortReal> ,   const NCollection_Vec3<Standard_ShortReal>  ) ) static_cast<void (OpenGl_View::*)(  const NCollection_Vec3<Standard_ShortReal> ,   const NCollection_Vec3<Standard_ShortReal>  ) >(&OpenGl_View::GraduatedTrihedronMinMaxValues),
             R"#(Sets minimum and maximum points of scene bounding box for Graduated Trihedron stored in graphic view object.)#"  , py::arg("theMin"),  py::arg("theMax"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_View::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_View::*)() const>(&OpenGl_View::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("FBOGetDimensions",
             []( OpenGl_View &self , const opencascade::handle<Standard_Transient> & theFbo ){ Standard_Integer  theWidth; Standard_Integer  theHeight; Standard_Integer  theWidthMax; Standard_Integer  theHeightMax; self.FBOGetDimensions(theFbo,theWidth,theHeight,theWidthMax,theHeightMax); return std::make_tuple(theWidth,theHeight,theWidthMax,theHeightMax); },
             R"#(Read offscreen FBO configuration.)#"  , py::arg("theFbo"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_View::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_View::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Window ,opencascade::handle<OpenGl_Window>  , Standard_Transient >>(m.attr("OpenGl_Window"))
    // constructors
        .def(py::init< const opencascade::handle<OpenGl_GraphicDriver> &,const opencascade::handle<Aspect_Window> &,Aspect_RenderingContext,const opencascade::handle<OpenGl_Caps> &,const opencascade::handle<OpenGl_Context> & >()  , py::arg("theDriver"),  py::arg("thePlatformWindow"),  py::arg("theGContext"),  py::arg("theCaps"),  py::arg("theShareCtx") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Window::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Window::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Workspace ,opencascade::handle<OpenGl_Workspace>  , Standard_Transient >>(m.attr("OpenGl_Workspace"))
    // constructors
        .def(py::init< OpenGl_View *,const opencascade::handle<OpenGl_Window> & >()  , py::arg("theView"),  py::arg("theWindow") )
    // custom constructors
    // methods
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
        .def("SetDefaultPolygonOffset",
             (Graphic3d_PolygonOffset (OpenGl_Workspace::*)( const Graphic3d_PolygonOffset &  ) ) static_cast<Graphic3d_PolygonOffset (OpenGl_Workspace::*)( const Graphic3d_PolygonOffset &  ) >(&OpenGl_Workspace::SetDefaultPolygonOffset),
             R"#(Configure default polygon offset parameters. Return previous settings.)#"  , py::arg("theOffset"))
        .def("ToAllowFaceCulling",
             (bool (OpenGl_Workspace::*)() const) static_cast<bool (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::ToAllowFaceCulling),
             R"#(Return true if active group might activate face culling (e.g. primitives are closed).)#" )
        .def("SetAllowFaceCulling",
             (bool (OpenGl_Workspace::*)( bool  ) ) static_cast<bool (OpenGl_Workspace::*)( bool  ) >(&OpenGl_Workspace::SetAllowFaceCulling),
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
        .def("EdgeColor",
             (const OpenGl_Vec4 & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Vec4 & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::EdgeColor),
             R"#(Return edge color taking into account highlight flag.)#" )
        .def("InteriorColor",
             (const OpenGl_Vec4 & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Vec4 & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::InteriorColor),
             R"#(Return Interior color taking into account highlight flag.)#" )
        .def("TextColor",
             (const OpenGl_Vec4 & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Vec4 & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::TextColor),
             R"#(Return text color taking into account highlight flag.)#" )
        .def("TextSubtitleColor",
             (const OpenGl_Vec4 & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Vec4 & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::TextSubtitleColor),
             R"#(Return text Subtitle color taking into account highlight flag.)#" )
        .def("Aspects",
             (const OpenGl_Aspects * (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Aspects * (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::Aspects),
             R"#(Currently set aspects (can differ from applied).)#" )
        .def("SetAspects",
             (const OpenGl_Aspects * (OpenGl_Workspace::*)( const OpenGl_Aspects *  ) ) static_cast<const OpenGl_Aspects * (OpenGl_Workspace::*)( const OpenGl_Aspects *  ) >(&OpenGl_Workspace::SetAspects),
             R"#(Assign new aspects (will be applied within ApplyAspects()).)#"  , py::arg("theAspect"))
        .def("ApplyAspects",
             (const OpenGl_Aspects * (OpenGl_Workspace::*)() ) static_cast<const OpenGl_Aspects * (OpenGl_Workspace::*)() >(&OpenGl_Workspace::ApplyAspects),
             R"#(Apply aspects.)#" )
        .def("ResetAppliedAspect",
             (void (OpenGl_Workspace::*)() ) static_cast<void (OpenGl_Workspace::*)() >(&OpenGl_Workspace::ResetAppliedAspect),
             R"#(Clear the applied aspect state to default values.)#" )
        .def("RenderFilter",
             (Standard_Integer (OpenGl_Workspace::*)() const) static_cast<Standard_Integer (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::RenderFilter),
             R"#(Get rendering filter.)#" )
        .def("SetRenderFilter",
             (void (OpenGl_Workspace::*)( Standard_Integer  ) ) static_cast<void (OpenGl_Workspace::*)( Standard_Integer  ) >(&OpenGl_Workspace::SetRenderFilter),
             R"#(Set filter for restricting rendering of particular elements.)#"  , py::arg("theFilter"))
        .def("ShouldRender",
             (bool (OpenGl_Workspace::*)( const OpenGl_Element *  ) ) static_cast<bool (OpenGl_Workspace::*)( const OpenGl_Element *  ) >(&OpenGl_Workspace::ShouldRender),
             R"#(Checks whether the element can be rendered or not.)#"  , py::arg("theElement"))
        .def("NbSkippedTransparentElements",
             (Standard_Integer (OpenGl_Workspace::*)() ) static_cast<Standard_Integer (OpenGl_Workspace::*)() >(&OpenGl_Workspace::NbSkippedTransparentElements),
             R"#(Return the number of skipped transparent elements within active OpenGl_RenderFilter_OpaqueOnly filter.)#" )
        .def("ResetSkippedCounter",
             (void (OpenGl_Workspace::*)() ) static_cast<void (OpenGl_Workspace::*)() >(&OpenGl_Workspace::ResetSkippedCounter),
             R"#(Reset skipped transparent elements counter.)#" )
        .def("ViewMatrix",
             (const OpenGl_Matrix * (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Matrix * (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::ViewMatrix),
             R"#(Returns applied view matrix.)#" )
        .def("ModelMatrix",
             (const OpenGl_Matrix * (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Matrix * (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::ModelMatrix),
             R"#(Returns applied model structure matrix.)#" )
        .def("NoneCulling",
             (const OpenGl_Aspects & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Aspects & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::NoneCulling),
             R"#(Returns face aspect for none culling mode.)#" )
        .def("FrontCulling",
             (const OpenGl_Aspects & (OpenGl_Workspace::*)() const) static_cast<const OpenGl_Aspects & (OpenGl_Workspace::*)() const>(&OpenGl_Workspace::FrontCulling),
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
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Workspace::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Workspace::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Aspects , shared_ptr<OpenGl_Aspects>  , OpenGl_Element >>(m.attr("OpenGl_Aspects"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Graphic3d_Aspects> & >()  , py::arg("theAspect") )
    // custom constructors
    // methods
        .def("Aspect",
             (const opencascade::handle<Graphic3d_Aspects> & (OpenGl_Aspects::*)() const) static_cast<const opencascade::handle<Graphic3d_Aspects> & (OpenGl_Aspects::*)() const>(&OpenGl_Aspects::Aspect),
             R"#(Return aspect.)#" )
        .def("SetAspect",
             (void (OpenGl_Aspects::*)( const opencascade::handle<Graphic3d_Aspects> &  ) ) static_cast<void (OpenGl_Aspects::*)( const opencascade::handle<Graphic3d_Aspects> &  ) >(&OpenGl_Aspects::SetAspect),
             R"#(Assign parameters.)#"  , py::arg("theAspect"))
        .def("ShadingModel",
             (Graphic3d_TypeOfShadingModel (OpenGl_Aspects::*)() const) static_cast<Graphic3d_TypeOfShadingModel (OpenGl_Aspects::*)() const>(&OpenGl_Aspects::ShadingModel),
             R"#(Returns Shading Model.)#" )
        .def("SetNoLighting",
             (void (OpenGl_Aspects::*)() ) static_cast<void (OpenGl_Aspects::*)() >(&OpenGl_Aspects::SetNoLighting),
             R"#(Set if lighting should be disabled or not.)#" )
        .def("TextureSet",
             (const opencascade::handle<OpenGl_TextureSet> & (OpenGl_Aspects::*)( const opencascade::handle<OpenGl_Context> & ,  bool  ) const) static_cast<const opencascade::handle<OpenGl_TextureSet> & (OpenGl_Aspects::*)( const opencascade::handle<OpenGl_Context> & ,  bool  ) const>(&OpenGl_Aspects::TextureSet),
             R"#(Returns textures map.)#"  , py::arg("theCtx"),  py::arg("theToHighlight")=static_cast<bool>(false))
        .def("ShaderProgramRes",
             (const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_Aspects::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<const opencascade::handle<OpenGl_ShaderProgram> & (OpenGl_Aspects::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_Aspects::ShaderProgramRes),
             R"#(Init and return OpenGl shader program resource.)#"  , py::arg("theCtx"))
        .def("MarkerSize",
             (Standard_ShortReal (OpenGl_Aspects::*)() const) static_cast<Standard_ShortReal (OpenGl_Aspects::*)() const>(&OpenGl_Aspects::MarkerSize),
             R"#(Returns marker size)#" )
        .def("HasPointSprite",
             (bool (OpenGl_Aspects::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<bool (OpenGl_Aspects::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_Aspects::HasPointSprite),
             R"#(Return TRUE if OpenGl point sprite resource defines texture.)#"  , py::arg("theCtx"))
        .def("IsDisplayListSprite",
             (bool (OpenGl_Aspects::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<bool (OpenGl_Aspects::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_Aspects::IsDisplayListSprite),
             R"#(Return TRUE if OpenGl point sprite resource defined by obsolete Display List (bitmap).)#"  , py::arg("theCtx"))
        .def("SpriteRes",
             (const opencascade::handle<OpenGl_PointSprite> & (OpenGl_Aspects::*)( const opencascade::handle<OpenGl_Context> & ,  bool  ) const) static_cast<const opencascade::handle<OpenGl_PointSprite> & (OpenGl_Aspects::*)( const opencascade::handle<OpenGl_Context> & ,  bool  ) const>(&OpenGl_Aspects::SpriteRes),
             R"#(Init and return OpenGl point sprite resource.)#"  , py::arg("theCtx"),  py::arg("theIsAlphaSprite"))
        .def("Render",
             (void (OpenGl_Aspects::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_Aspects::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_Aspects::Render),
             R"#(None)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_Aspects::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_Aspects::*)( OpenGl_Context *  ) >(&OpenGl_Aspects::Release),
             R"#(None)#"  , py::arg("theContext"))
        .def("SynchronizeAspects",
             (void (OpenGl_Aspects::*)() ) static_cast<void (OpenGl_Aspects::*)() >(&OpenGl_Aspects::SynchronizeAspects),
             R"#(Update presentation aspects parameters after their modification.)#" )
        .def("DumpJson",
             (void (OpenGl_Aspects::*)( std::ostream & ,  const Standard_Integer  ) const) static_cast<void (OpenGl_Aspects::*)( std::ostream & ,  const Standard_Integer  ) const>(&OpenGl_Aspects::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_CappingPlaneResource ,opencascade::handle<OpenGl_CappingPlaneResource>  , OpenGl_Resource >>(m.attr("OpenGl_CappingPlaneResource"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_ClipPlane> & >()  , py::arg("thePlane") )
    // custom constructors
    // methods
        .def("Update",
             (void (OpenGl_CappingPlaneResource::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_Aspects> &  ) ) static_cast<void (OpenGl_CappingPlaneResource::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_Aspects> &  ) >(&OpenGl_CappingPlaneResource::Update),
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
             (const OpenGl_Aspects * (OpenGl_CappingPlaneResource::*)() const) static_cast<const OpenGl_Aspects * (OpenGl_CappingPlaneResource::*)() const>(&OpenGl_CappingPlaneResource::AspectFace),
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
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_CappingPlaneResource::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_CappingPlaneResource::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Flipper , shared_ptr<OpenGl_Flipper>  , OpenGl_Element >>(m.attr("OpenGl_Flipper"))
    // constructors
        .def(py::init< const gp_Ax2 & >()  , py::arg("theReferenceSystem") )
    // custom constructors
    // methods
        .def("SetOptions",
             (void (OpenGl_Flipper::*)( const Standard_Boolean  ) ) static_cast<void (OpenGl_Flipper::*)( const Standard_Boolean  ) >(&OpenGl_Flipper::SetOptions),
             R"#(Set options for the element.)#"  , py::arg("theIsEnabled"))
        .def("Render",
             (void (OpenGl_Flipper::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_Flipper::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_Flipper::Render),
             R"#(None)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_Flipper::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_Flipper::*)( OpenGl_Context *  ) >(&OpenGl_Flipper::Release),
             R"#(None)#"  , py::arg("theCtx"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Font ,opencascade::handle<OpenGl_Font>  , OpenGl_Resource >>(m.attr("OpenGl_Font"))
    // constructors
        .def(py::init< const opencascade::handle<Font_FTFont> &,const TCollection_AsciiString & >()  , py::arg("theFont"),  py::arg("theKey")=static_cast<const TCollection_AsciiString &>("") )
    // custom constructors
    // methods
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
        .def("RenderGlyph",
             (bool (OpenGl_Font::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Utf32Char ,  OpenGl_Font::Tile &  ) ) static_cast<bool (OpenGl_Font::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Utf32Char ,  OpenGl_Font::Tile &  ) >(&OpenGl_Font::RenderGlyph),
             R"#(Render glyph to texture if not already.)#"  , py::arg("theCtx"),  py::arg("theUChar"),  py::arg("theGlyph"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_Font::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_Font::*)() const>(&OpenGl_Font::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Font::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Font::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_FrameBuffer ,opencascade::handle<OpenGl_FrameBuffer>  , OpenGl_Resource >>(m.attr("OpenGl_FrameBuffer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("BufferDump_s",
                    (Standard_Boolean (*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_FrameBuffer> & ,  Image_PixMap & ,  Graphic3d_BufferType  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_FrameBuffer> & ,  Image_PixMap & ,  Graphic3d_BufferType  ) >(&OpenGl_FrameBuffer::BufferDump),
                    R"#(Dump content into image.)#"  , py::arg("theGlCtx"),  py::arg("theFbo"),  py::arg("theImage"),  py::arg("theBufferType"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_FrameBuffer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_FrameBuffer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_FrameStatsPrs , shared_ptr<OpenGl_FrameStatsPrs>  , OpenGl_Element >>(m.attr("OpenGl_FrameStatsPrs"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Render",
             (void (OpenGl_FrameStatsPrs::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_FrameStatsPrs::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_FrameStatsPrs::Render),
             R"#(Render element.)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_FrameStatsPrs::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_FrameStatsPrs::*)( OpenGl_Context *  ) >(&OpenGl_FrameStatsPrs::Release),
             R"#(Release OpenGL resources.)#"  , py::arg("theCtx"))
        .def("Update",
             (void (OpenGl_FrameStatsPrs::*)( const opencascade::handle<OpenGl_Workspace> &  ) ) static_cast<void (OpenGl_FrameStatsPrs::*)( const opencascade::handle<OpenGl_Workspace> &  ) >(&OpenGl_FrameStatsPrs::Update),
             R"#(Update text.)#"  , py::arg("theWorkspace"))
        .def("SetTextAspect",
             (void (OpenGl_FrameStatsPrs::*)( const opencascade::handle<Graphic3d_AspectText3d> &  ) ) static_cast<void (OpenGl_FrameStatsPrs::*)( const opencascade::handle<Graphic3d_AspectText3d> &  ) >(&OpenGl_FrameStatsPrs::SetTextAspect),
             R"#(Assign text aspect.)#"  , py::arg("theAspect"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_GraduatedTrihedron , shared_ptr<OpenGl_GraduatedTrihedron>  , OpenGl_Element >>(m.attr("OpenGl_GraduatedTrihedron"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_LightSourceState , shared_ptr<OpenGl_LightSourceState>  , OpenGl_StateInterface >>(m.attr("OpenGl_LightSourceState"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (OpenGl_LightSourceState::*)( const opencascade::handle<Graphic3d_LightSet> &  ) ) static_cast<void (OpenGl_LightSourceState::*)( const opencascade::handle<Graphic3d_LightSet> &  ) >(&OpenGl_LightSourceState::Set),
             R"#(Sets new light sources.)#"  , py::arg("theLightSources"))
        .def("LightSources",
             (const opencascade::handle<Graphic3d_LightSet> & (OpenGl_LightSourceState::*)() const) static_cast<const opencascade::handle<Graphic3d_LightSet> & (OpenGl_LightSourceState::*)() const>(&OpenGl_LightSourceState::LightSources),
             R"#(Returns current list of light sources.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_LineAttributes ,opencascade::handle<OpenGl_LineAttributes>  , OpenGl_Resource >>(m.attr("OpenGl_LineAttributes"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_LineAttributes::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_LineAttributes::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_MaterialState , shared_ptr<OpenGl_MaterialState>  , OpenGl_StateInterface >>(m.attr("OpenGl_MaterialState"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (OpenGl_MaterialState::*)( const OpenGl_Material & ,  const OpenGl_Material & ,  const float ,  const bool ,  const bool  ) ) static_cast<void (OpenGl_MaterialState::*)( const OpenGl_Material & ,  const OpenGl_Material & ,  const float ,  const bool ,  const bool  ) >(&OpenGl_MaterialState::Set),
             R"#(Sets new material aspect.)#"  , py::arg("theFrontMat"),  py::arg("theBackMat"),  py::arg("theAlphaCutoff"),  py::arg("theToDistinguish"),  py::arg("theToMapTexture"))
        .def("FrontMaterial",
             (const OpenGl_Material & (OpenGl_MaterialState::*)() const) static_cast<const OpenGl_Material & (OpenGl_MaterialState::*)() const>(&OpenGl_MaterialState::FrontMaterial),
             R"#(Return front material.)#" )
        .def("BackMaterial",
             (const OpenGl_Material & (OpenGl_MaterialState::*)() const) static_cast<const OpenGl_Material & (OpenGl_MaterialState::*)() const>(&OpenGl_MaterialState::BackMaterial),
             R"#(Return back material.)#" )
        .def("AlphaCutoff",
             (float (OpenGl_MaterialState::*)() const) static_cast<float (OpenGl_MaterialState::*)() const>(&OpenGl_MaterialState::AlphaCutoff),
             R"#(Alpha cutoff value.)#" )
        .def("HasAlphaCutoff",
             (bool (OpenGl_MaterialState::*)() const) static_cast<bool (OpenGl_MaterialState::*)() const>(&OpenGl_MaterialState::HasAlphaCutoff),
             R"#(Return TRUE if alpha test should be enabled.)#" )
        .def("ToDistinguish",
             (bool (OpenGl_MaterialState::*)() const) static_cast<bool (OpenGl_MaterialState::*)() const>(&OpenGl_MaterialState::ToDistinguish),
             R"#(Distinguish front/back flag.)#" )
        .def("ToMapTexture",
             (bool (OpenGl_MaterialState::*)() const) static_cast<bool (OpenGl_MaterialState::*)() const>(&OpenGl_MaterialState::ToMapTexture),
             R"#(Flag for mapping a texture.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_ModelWorldState , shared_ptr<OpenGl_ModelWorldState>  , OpenGl_StateInterface >>(m.attr("OpenGl_ModelWorldState"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (OpenGl_ModelWorldState::*)(  const Graphic3d_Mat4 &  ) ) static_cast<void (OpenGl_ModelWorldState::*)(  const Graphic3d_Mat4 &  ) >(&OpenGl_ModelWorldState::Set),
             R"#(Sets new model-world matrix.)#"  , py::arg("theModelWorldMatrix"))
        .def("ModelWorldMatrix",
             (const OpenGl_Mat4 & (OpenGl_ModelWorldState::*)() const) static_cast<const OpenGl_Mat4 & (OpenGl_ModelWorldState::*)() const>(&OpenGl_ModelWorldState::ModelWorldMatrix),
             R"#(Returns current model-world matrix.)#" )
        .def("ModelWorldMatrixInverse",
             (const OpenGl_Mat4 & (OpenGl_ModelWorldState::*)() const) static_cast<const OpenGl_Mat4 & (OpenGl_ModelWorldState::*)() const>(&OpenGl_ModelWorldState::ModelWorldMatrixInverse),
             R"#(Returns inverse of current model-world matrix.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_NamedResource ,opencascade::handle<OpenGl_NamedResource> ,Py_OpenGl_NamedResource , OpenGl_Resource >>(m.attr("OpenGl_NamedResource"))
    // constructors
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theId") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_NamedResource::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_NamedResource::*)() const>(&OpenGl_NamedResource::DynamicType),
             R"#(None)#" )
        .def("ResourceId",
             (const TCollection_AsciiString & (OpenGl_NamedResource::*)() const) static_cast<const TCollection_AsciiString & (OpenGl_NamedResource::*)() const>(&OpenGl_NamedResource::ResourceId),
             R"#(Return resource name.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_NamedResource::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_NamedResource::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_OitState , shared_ptr<OpenGl_OitState>  , OpenGl_StateInterface >>(m.attr("OpenGl_OitState"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (OpenGl_OitState::*)( const bool ,  const float  ) ) static_cast<void (OpenGl_OitState::*)( const bool ,  const float  ) >(&OpenGl_OitState::Set),
             R"#(Sets the uniform values.)#"  , py::arg("theToEnableWrite"),  py::arg("theDepthFactor"))
        .def("ToEnableWrite",
             (bool (OpenGl_OitState::*)() const) static_cast<bool (OpenGl_OitState::*)() const>(&OpenGl_OitState::ToEnableWrite),
             R"#(Returns flag indicating whether writing of output for OIT processing should be enabled/disabled.)#" )
        .def("DepthFactor",
             (float (OpenGl_OitState::*)() const) static_cast<float (OpenGl_OitState::*)() const>(&OpenGl_OitState::DepthFactor),
             R"#(Returns factor defining influence of depth component of a fragment to its final coverage coefficient.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_PrimitiveArray , shared_ptr<OpenGl_PrimitiveArray>  , OpenGl_Element >>(m.attr("OpenGl_PrimitiveArray"))
    // constructors
        .def(py::init< const OpenGl_GraphicDriver * >()  , py::arg("theDriver") )
        .def(py::init< const OpenGl_GraphicDriver *,const Graphic3d_TypeOfPrimitiveArray,const opencascade::handle<Graphic3d_IndexBuffer> &,const opencascade::handle<Graphic3d_Buffer> &,const opencascade::handle<Graphic3d_BoundBuffer> & >()  , py::arg("theDriver"),  py::arg("theType"),  py::arg("theIndices"),  py::arg("theAttribs"),  py::arg("theBounds") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_ProjectionState , shared_ptr<OpenGl_ProjectionState>  , OpenGl_StateInterface >>(m.attr("OpenGl_ProjectionState"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (OpenGl_ProjectionState::*)(  const Graphic3d_Mat4 &  ) ) static_cast<void (OpenGl_ProjectionState::*)(  const Graphic3d_Mat4 &  ) >(&OpenGl_ProjectionState::Set),
             R"#(Sets new projection matrix.)#"  , py::arg("theProjectionMatrix"))
        .def("ProjectionMatrix",
             (const OpenGl_Mat4 & (OpenGl_ProjectionState::*)() const) static_cast<const OpenGl_Mat4 & (OpenGl_ProjectionState::*)() const>(&OpenGl_ProjectionState::ProjectionMatrix),
             R"#(Returns current projection matrix.)#" )
        .def("ProjectionMatrixInverse",
             (const OpenGl_Mat4 & (OpenGl_ProjectionState::*)() const) static_cast<const OpenGl_Mat4 & (OpenGl_ProjectionState::*)() const>(&OpenGl_ProjectionState::ProjectionMatrixInverse),
             R"#(Returns inverse of current projection matrix.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Sampler ,opencascade::handle<OpenGl_Sampler>  , OpenGl_Resource >>(m.attr("OpenGl_Sampler"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_TextureParams> & >()  , py::arg("theParams") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_Sampler::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_Sampler::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_ShaderObject ,opencascade::handle<OpenGl_ShaderObject>  , OpenGl_Resource >>(m.attr("OpenGl_ShaderObject"))
    // constructors
        .def(py::init< GLenum >()  , py::arg("theType") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_ShaderObject::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_ShaderObject::*)() const>(&OpenGl_ShaderObject::DynamicType),
             R"#(None)#" )
        .def("LoadSource",
             (Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_AsciiString &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_AsciiString &  ) >(&OpenGl_ShaderObject::LoadSource),
             R"#(Loads shader source code.)#"  , py::arg("theCtx"),  py::arg("theSource"))
        .def("Compile",
             (Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_ShaderObject::Compile),
             R"#(Compiles the shader object.)#"  , py::arg("theCtx"))
        .def("LoadAndCompile",
             (Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  bool ,  bool  ) ) static_cast<Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  bool ,  bool  ) >(&OpenGl_ShaderObject::LoadAndCompile),
             R"#(Wrapper for compiling shader object with verbose printing on error.)#"  , py::arg("theCtx"),  py::arg("theId"),  py::arg("theSource"),  py::arg("theIsVerbose")=static_cast<bool>(true),  py::arg("theToPrintSource")=static_cast<bool>(true))
        .def("DumpSourceCode",
             (void (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<void (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&OpenGl_ShaderObject::DumpSourceCode),
             R"#(Print source code of this shader object to messenger.)#"  , py::arg("theCtx"),  py::arg("theId"),  py::arg("theSource"))
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
        .def("updateDebugDump",
             (Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  Standard_Boolean ,  Standard_Boolean  ) ) static_cast<Standard_Boolean (OpenGl_ShaderObject::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  Standard_Boolean ,  Standard_Boolean  ) >(&OpenGl_ShaderObject::updateDebugDump),
             R"#(Update the shader object from external file in the following way: 1) If external file does not exist, then it will be created (current source code will be dumped, no recompilation) and FALSE will be returned. 2) If external file exists and it has the same timestamp as myDumpDate, nothing will be done and FALSE will be returned. 3) If external file exists and it has newer timestamp than myDumpDate, shader will be recompiled and TRUE will be returned.)#"  , py::arg("theCtx"),  py::arg("theId"),  py::arg("theFolder"),  py::arg("theToBeautify"),  py::arg("theToReset"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_ShaderObject::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_ShaderObject::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_StencilTest , shared_ptr_nodelete<OpenGl_StencilTest>  , OpenGl_Element >>(m.attr("OpenGl_StencilTest"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Render",
             (void (OpenGl_StencilTest::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_StencilTest::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_StencilTest::Render),
             R"#(Render primitives to the window)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_StencilTest::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_StencilTest::*)( OpenGl_Context *  ) >(&OpenGl_StencilTest::Release),
             R"#(None)#"  , py::arg("theContext"))
        .def("SetOptions",
             (void (OpenGl_StencilTest::*)( const Standard_Boolean  ) ) static_cast<void (OpenGl_StencilTest::*)( const Standard_Boolean  ) >(&OpenGl_StencilTest::SetOptions),
             R"#(None)#"  , py::arg("theIsEnabled"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_StructureShadow ,opencascade::handle<OpenGl_StructureShadow>  , OpenGl_Structure >>(m.attr("OpenGl_StructureShadow"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_StructureManager> &,const opencascade::handle<OpenGl_Structure> & >()  , py::arg("theManager"),  py::arg("theStructure") )
    // custom constructors
    // methods
        .def("Connect",
             (void (OpenGl_StructureShadow::*)( Graphic3d_CStructure &  ) ) static_cast<void (OpenGl_StructureShadow::*)( Graphic3d_CStructure &  ) >(&OpenGl_StructureShadow::Connect),
             R"#(Raise exception on API misuse.)#"  , py::arg(""))
        .def("Disconnect",
             (void (OpenGl_StructureShadow::*)( Graphic3d_CStructure &  ) ) static_cast<void (OpenGl_StructureShadow::*)( Graphic3d_CStructure &  ) >(&OpenGl_StructureShadow::Disconnect),
             R"#(Raise exception on API misuse.)#"  , py::arg(""))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_StructureShadow::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_StructureShadow::*)() const>(&OpenGl_StructureShadow::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_StructureShadow::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_StructureShadow::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Text , shared_ptr<OpenGl_Text>  , OpenGl_Element >>(m.attr("OpenGl_Text"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_Text> & >()  , py::arg("theTextParams") )
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Reset",
             (void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> &  ) ) static_cast<void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> &  ) >(&OpenGl_Text::Reset),
             R"#(Release cached VBO resources and the previous font if height changed. Cached structures will be refilled by the next render. Call Reset after modifying text parameters.)#"  , py::arg("theCtx"))
        .def("Text",
             (const opencascade::handle<Graphic3d_Text> & (OpenGl_Text::*)() const) static_cast<const opencascade::handle<Graphic3d_Text> & (OpenGl_Text::*)() const>(&OpenGl_Text::Text),
             R"#(Returns text parameters)#" )
        .def("SetText",
             (void (OpenGl_Text::*)( const opencascade::handle<Graphic3d_Text> &  ) ) static_cast<void (OpenGl_Text::*)( const opencascade::handle<Graphic3d_Text> &  ) >(&OpenGl_Text::SetText),
             R"#(Sets text parameters)#"  , py::arg("theText"))
        .def("Is2D",
             (Standard_Boolean (OpenGl_Text::*)() const) static_cast<Standard_Boolean (OpenGl_Text::*)() const>(&OpenGl_Text::Is2D),
             R"#(Return true if text is 2D)#" )
        .def("Set2D",
             (void (OpenGl_Text::*)( const Standard_Boolean  ) ) static_cast<void (OpenGl_Text::*)( const Standard_Boolean  ) >(&OpenGl_Text::Set2D),
             R"#(Set true if text is 2D)#"  , py::arg("theEnable"))
        .def("SetFontSize",
             (void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Integer  ) ) static_cast<void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Integer  ) >(&OpenGl_Text::SetFontSize),
             R"#(Setup new font size)#"  , py::arg("theContext"),  py::arg("theFontSize"))
        .def("Render",
             (void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_Text::Render),
             R"#(None)#"  , py::arg("theWorkspace"))
        .def("Release",
             (void (OpenGl_Text::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_Text::*)( OpenGl_Context *  ) >(&OpenGl_Text::Release),
             R"#(None)#"  , py::arg("theContext"))
        .def("Render",
             (void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const OpenGl_Aspects & ,  unsigned int  ) const) static_cast<void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const OpenGl_Aspects & ,  unsigned int  ) const>(&OpenGl_Text::Render),
             R"#(Perform rendering)#"  , py::arg("theCtx"),  py::arg("theTextAspect"),  py::arg("theResolution")=static_cast<unsigned int>(Graphic3d_RenderingParams :: THE_DEFAULT_RESOLUTION))
        .def("Init",
             (void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Utf8Char * ,   const Graphic3d_Vec3 &  ) ) static_cast<void (OpenGl_Text::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Utf8Char * ,   const Graphic3d_Vec3 &  ) >(&OpenGl_Text::Init),
             R"#(Setup new string and position)#"  , py::arg("theCtx"),  py::arg("theText"),  py::arg("thePoint"))
        .def("SetPosition",
             (void (OpenGl_Text::*)(  const Graphic3d_Vec3 &  ) ) static_cast<void (OpenGl_Text::*)(  const Graphic3d_Vec3 &  ) >(&OpenGl_Text::SetPosition),
             R"#(Setup new position)#"  , py::arg("thePoint"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FontKey_s",
                    (TCollection_AsciiString (*)( const OpenGl_Aspects & ,  Standard_Integer ,  unsigned int  ) ) static_cast<TCollection_AsciiString (*)( const OpenGl_Aspects & ,  Standard_Integer ,  unsigned int  ) >(&OpenGl_Text::FontKey),
                    R"#(Create key for shared resource)#"  , py::arg("theAspect"),  py::arg("theHeight"),  py::arg("theResolution"))
        .def_static("FindFont_s",
                    (opencascade::handle<OpenGl_Font> (*)( const opencascade::handle<OpenGl_Context> & ,  const OpenGl_Aspects & ,  Standard_Integer ,  unsigned int ,  const TCollection_AsciiString &  ) ) static_cast<opencascade::handle<OpenGl_Font> (*)( const opencascade::handle<OpenGl_Context> & ,  const OpenGl_Aspects & ,  Standard_Integer ,  unsigned int ,  const TCollection_AsciiString &  ) >(&OpenGl_Text::FindFont),
                    R"#(Find shared resource for specified font or initialize new one)#"  , py::arg("theCtx"),  py::arg("theAspect"),  py::arg("theHeight"),  py::arg("theResolution"),  py::arg("theKey"))
        .def_static("StringSize_s",
                    (void (*)( const opencascade::handle<OpenGl_Context> & ,   const NCollection_Utf8String & ,  const OpenGl_Aspects & ,  const Standard_ShortReal ,  const unsigned int ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) ) static_cast<void (*)( const opencascade::handle<OpenGl_Context> & ,   const NCollection_Utf8String & ,  const OpenGl_Aspects & ,  const Standard_ShortReal ,  const unsigned int ,  Standard_ShortReal & ,  Standard_ShortReal & ,  Standard_ShortReal &  ) >(&OpenGl_Text::StringSize),
                    R"#(Compute text width)#"  , py::arg("theCtx"),  py::arg("theText"),  py::arg("theTextAspect"),  py::arg("theHeight"),  py::arg("theResolution"),  py::arg("theWidth"),  py::arg("theAscent"),  py::arg("theDescent"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_VertexBuffer ,opencascade::handle<OpenGl_VertexBuffer>  , OpenGl_Resource >>(m.attr("OpenGl_VertexBuffer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("GetTarget",
             (GLenum (OpenGl_VertexBuffer::*)() const) static_cast<GLenum (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::GetTarget),
             R"#(None)#" )
        .def("IsVirtual",
             (bool (OpenGl_VertexBuffer::*)() const) static_cast<bool (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::IsVirtual),
             R"#(Return TRUE if this is a virtual (for backward compatibility) VBO object.)#" )
        .def("IsValid",
             (bool (OpenGl_VertexBuffer::*)() const) static_cast<bool (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::IsValid),
             R"#(Returns true if current object was initialized)#" )
        .def("GetComponentsNb",
             (GLuint (OpenGl_VertexBuffer::*)() const) static_cast<GLuint (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::GetComponentsNb),
             R"#(Returns the number of components per generic vertex attribute.)#" )
        .def("GetElemsNb",
             (GLsizei (OpenGl_VertexBuffer::*)() const) static_cast<GLsizei (OpenGl_VertexBuffer::*)() const>(&OpenGl_VertexBuffer::GetElemsNb),
             R"#(Returns number of vertex attributes / number of vertices specified within ::Init())#" )
        .def("SetElemsNb",
             (void (OpenGl_VertexBuffer::*)( GLsizei  ) ) static_cast<void (OpenGl_VertexBuffer::*)( GLsizei  ) >(&OpenGl_VertexBuffer::SetElemsNb),
             R"#(Overrides the number of vertex attributes / number of vertexes. It is up to user specifying this number correct (e.g. below initial value)!)#"  , py::arg("theNbElems"))
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
    // methods using call by reference i.s.o. return
    // static methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_WorldViewState , shared_ptr<OpenGl_WorldViewState>  , OpenGl_StateInterface >>(m.attr("OpenGl_WorldViewState"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (OpenGl_WorldViewState::*)(  const Graphic3d_Mat4 &  ) ) static_cast<void (OpenGl_WorldViewState::*)(  const Graphic3d_Mat4 &  ) >(&OpenGl_WorldViewState::Set),
             R"#(Sets new world-view matrix.)#"  , py::arg("theWorldViewMatrix"))
        .def("WorldViewMatrix",
             (const OpenGl_Mat4 & (OpenGl_WorldViewState::*)() const) static_cast<const OpenGl_Mat4 & (OpenGl_WorldViewState::*)() const>(&OpenGl_WorldViewState::WorldViewMatrix),
             R"#(Returns current world-view matrix.)#" )
        .def("WorldViewMatrixInverse",
             (const OpenGl_Mat4 & (OpenGl_WorldViewState::*)() const) static_cast<const OpenGl_Mat4 & (OpenGl_WorldViewState::*)() const>(&OpenGl_WorldViewState::WorldViewMatrixInverse),
             R"#(Returns inverse of current world-view matrix.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_BackgroundArray , shared_ptr<OpenGl_BackgroundArray>  , OpenGl_PrimitiveArray >>(m.attr("OpenGl_BackgroundArray"))
    // constructors
        .def(py::init< const Graphic3d_TypeOfBackground >()  , py::arg("theType") )
    // custom constructors
    // methods
        .def("Render",
             (void (OpenGl_BackgroundArray::*)( const opencascade::handle<OpenGl_Workspace> &  ) const) static_cast<void (OpenGl_BackgroundArray::*)( const opencascade::handle<OpenGl_Workspace> &  ) const>(&OpenGl_BackgroundArray::Render),
             R"#(Render primitives to the window)#"  , py::arg("theWorkspace"))
        .def("IsDefined",
             (bool (OpenGl_BackgroundArray::*)() const) static_cast<bool (OpenGl_BackgroundArray::*)() const>(&OpenGl_BackgroundArray::IsDefined),
             R"#(Check if background parameters are set properly)#" )
        .def("SetTextureParameters",
             (void (OpenGl_BackgroundArray::*)( const Aspect_FillMethod  ) ) static_cast<void (OpenGl_BackgroundArray::*)( const Aspect_FillMethod  ) >(&OpenGl_BackgroundArray::SetTextureParameters),
             R"#(Sets background texture parameters)#"  , py::arg("theFillMethod"))
        .def("SetTextureFillMethod",
             (void (OpenGl_BackgroundArray::*)( const Aspect_FillMethod  ) ) static_cast<void (OpenGl_BackgroundArray::*)( const Aspect_FillMethod  ) >(&OpenGl_BackgroundArray::SetTextureFillMethod),
             R"#(Sets texture fill method)#"  , py::arg("theFillMethod"))
        .def("TextureFillMethod",
             (Aspect_FillMethod (OpenGl_BackgroundArray::*)() const) static_cast<Aspect_FillMethod (OpenGl_BackgroundArray::*)() const>(&OpenGl_BackgroundArray::TextureFillMethod),
             R"#(Gets background texture fill method)#" )
        .def("GradientFillMethod",
             (Aspect_GradientFillMethod (OpenGl_BackgroundArray::*)() const) static_cast<Aspect_GradientFillMethod (OpenGl_BackgroundArray::*)() const>(&OpenGl_BackgroundArray::GradientFillMethod),
             R"#(Gets background gradient fill method)#" )
        .def("GradientColor",
             (const OpenGl_Vec4 & (OpenGl_BackgroundArray::*)( const Standard_Integer  ) const) static_cast<const OpenGl_Vec4 & (OpenGl_BackgroundArray::*)( const Standard_Integer  ) const>(&OpenGl_BackgroundArray::GradientColor),
             R"#(Returns color of gradient background for the given index.)#"  , py::arg("theIndex"))
        .def("SetGradientFillMethod",
             (void (OpenGl_BackgroundArray::*)( const Aspect_GradientFillMethod  ) ) static_cast<void (OpenGl_BackgroundArray::*)( const Aspect_GradientFillMethod  ) >(&OpenGl_BackgroundArray::SetGradientFillMethod),
             R"#(Sets type of gradient fill method)#"  , py::arg("theType"))
        .def("SetGradientParameters",
             (void (OpenGl_BackgroundArray::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Aspect_GradientFillMethod  ) ) static_cast<void (OpenGl_BackgroundArray::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Aspect_GradientFillMethod  ) >(&OpenGl_BackgroundArray::SetGradientParameters),
             R"#(Sets background gradient parameters)#"  , py::arg("theColor1"),  py::arg("theColor2"),  py::arg("theType"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_IndexBuffer ,opencascade::handle<OpenGl_IndexBuffer>  , OpenGl_VertexBuffer >>(m.attr("OpenGl_IndexBuffer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("GetTarget",
             (GLenum (OpenGl_IndexBuffer::*)() const) static_cast<GLenum (OpenGl_IndexBuffer::*)() const>(&OpenGl_IndexBuffer::GetTarget),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_IndexBuffer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_IndexBuffer::*)() const>(&OpenGl_IndexBuffer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_IndexBuffer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_IndexBuffer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_ShaderProgram ,opencascade::handle<OpenGl_ShaderProgram>  , OpenGl_NamedResource >>(m.attr("OpenGl_ShaderProgram"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_ShaderProgram> &,const TCollection_AsciiString & >()  , py::arg("theProxy")=static_cast<const opencascade::handle<Graphic3d_ShaderProgram> &>(NULL),  py::arg("theId")=static_cast<const TCollection_AsciiString &>("") )
    // custom constructors
    // methods
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
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  bool  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  bool  ) >(&OpenGl_ShaderProgram::Link),
             R"#(Links the program object.)#"  , py::arg("theCtx"),  py::arg("theIsVerbose")=static_cast<bool>(true))
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
             R"#(Return the length of array of clipping planes (THE_MAX_CLIP_PLANES), to be used for initialization occClipPlaneEquations (OpenGl_OCC_CLIP_PLANE_EQUATIONS) and occClipPlaneChains (OpenGl_OCC_CLIP_PLANE_CHAINS).)#" )
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
             (OpenGl_ShaderUniformLocation (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar *  ) const) static_cast<OpenGl_ShaderUniformLocation (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar *  ) const>(&OpenGl_ShaderProgram::GetUniformLocation),
             R"#(Returns location of the specific uniform variable.)#"  , py::arg("theCtx"),  py::arg("theName"))
        .def("GetAttributeLocation",
             (GLint (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar *  ) const) static_cast<GLint (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const GLchar *  ) const>(&OpenGl_ShaderProgram::GetAttributeLocation),
             R"#(Returns index of the generic vertex attribute by variable name.)#"  , py::arg("theCtx"),  py::arg("theName"))
        .def("GetStateLocation",
             (const OpenGl_ShaderUniformLocation & (OpenGl_ShaderProgram::*)( OpenGl_StateVariable  ) const) static_cast<const OpenGl_ShaderUniformLocation & (OpenGl_ShaderProgram::*)( OpenGl_StateVariable  ) const>(&OpenGl_ShaderProgram::GetStateLocation),
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
        .def("UpdateDebugDump",
             (Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_AsciiString & ,  Standard_Boolean ,  Standard_Boolean  ) ) static_cast<Standard_Boolean (OpenGl_ShaderProgram::*)( const opencascade::handle<OpenGl_Context> & ,  const TCollection_AsciiString & ,  Standard_Boolean ,  Standard_Boolean  ) >(&OpenGl_ShaderProgram::UpdateDebugDump),
             R"#(Update the shader program from external files (per shader stage) in the following way: 1) If external file does not exist, then it will be created (current source code will be dumped, no recompilation) and FALSE will be returned. 2) If external file exists and it has the same timestamp as myDumpDate, nothing will be done and FALSE will be returned. 3) If external file exists and it has newer timestamp than myDumpDate, shader will be recompiled and relinked and TRUE will be returned.)#"  , py::arg("theCtx"),  py::arg("theFolder")=static_cast<const TCollection_AsciiString &>(""),  py::arg("theToBeautify")=static_cast<Standard_Boolean>(Standard_False),  py::arg("theToReset")=static_cast<Standard_Boolean>(Standard_False))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_ShaderProgram::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_ShaderProgram::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_Texture ,opencascade::handle<OpenGl_Texture>  , OpenGl_NamedResource >>(m.attr("OpenGl_Texture"))
    // constructors
        .def(py::init< const TCollection_AsciiString &,const opencascade::handle<Graphic3d_TextureParams> & >()  , py::arg("theResourceId")=static_cast<const TCollection_AsciiString &>(TCollection_AsciiString ( )),  py::arg("theParams")=static_cast<const opencascade::handle<Graphic3d_TextureParams> &>(Handle ( Graphic3d_TextureParams ) ( )) )
    // custom constructors
    // methods
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
        .def("SizedFormat",
             (GLint (OpenGl_Texture::*)() const) static_cast<GLint (OpenGl_Texture::*)() const>(&OpenGl_Texture::SizedFormat),
             R"#(Returns texture format (sized))#" )
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
        .def("Init",
             (bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_TextureMap> &  ) ) static_cast<bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_TextureMap> &  ) >(&OpenGl_Texture::Init),
             R"#(Initialize the texture with Graphic3d_TextureMap. It is an universal way to initialize. Sitable initialization method will be chosen.)#"  , py::arg("theCtx"),  py::arg("theTextureMap"))
        .def("Init2DMultisample",
             (bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLint ,  const GLsizei ,  const GLsizei  ) ) static_cast<bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const GLsizei ,  const GLint ,  const GLsizei ,  const GLsizei  ) >(&OpenGl_Texture::Init2DMultisample),
             R"#(Initialize the 2D multisampling texture using glTexImage2DMultisample().)#"  , py::arg("theCtx"),  py::arg("theNbSamples"),  py::arg("theTextFormat"),  py::arg("theSizeX"),  py::arg("theSizeY"))
        .def("InitRectangle",
             (bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Integer ,  const Standard_Integer ,  const OpenGl_TextureFormat &  ) ) static_cast<bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const Standard_Integer ,  const Standard_Integer ,  const OpenGl_TextureFormat &  ) >(&OpenGl_Texture::InitRectangle),
             R"#(Allocates texture rectangle with specified format and size.)#"  , py::arg("theCtx"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theFormat"))
        .def("Init3D",
             (bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const GLint ,  const GLenum ,  const GLenum ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const void *  ) ) static_cast<bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const GLint ,  const GLenum ,  const GLenum ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const void *  ) >(&OpenGl_Texture::Init3D),
             R"#(Initializes 3D texture rectangle with specified format and size.)#"  , py::arg("theCtx"),  py::arg("theTextFormat"),  py::arg("thePixelFormat"),  py::arg("theDataType"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theSizeZ"),  py::arg("thePixels"))
        .def("InitCubeMap",
             (bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_CubeMap> & ,  Standard_Size ,  Image_Format ,  Standard_Boolean  ) ) static_cast<bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_CubeMap> & ,  Standard_Size ,  Image_Format ,  Standard_Boolean  ) >(&OpenGl_Texture::InitCubeMap),
             R"#(Initializes 6 sides of cubemap. If theCubeMap is not NULL then size and format will be taken from it and corresponding arguments will be ignored. Otherwise this parametres will be taken from arguments. theToGenMipmap allows to generate mipmaped cubemap.)#"  , py::arg("theCtx"),  py::arg("theCubeMap"),  py::arg("theSize")=static_cast<Standard_Size>(0),  py::arg("theFormat")=static_cast<Image_Format>(Image_Format_RGB),  py::arg("theToGenMipmap")=static_cast<Standard_Boolean>(Standard_False))
        .def("InitCubeMap",
             (bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_CubeMap> & ,  Standard_Boolean ,  Standard_Size ,  Image_Format  ) ) static_cast<bool (OpenGl_Texture::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_CubeMap> & ,  Standard_Boolean ,  Standard_Size ,  Image_Format  ) >(&OpenGl_Texture::InitCubeMap),
             R"#(The same InitCubeMap but there is another order of arguments.)#"  , py::arg("theCtx"),  py::arg("theCubeMap"),  py::arg("theToGenMipmap"),  py::arg("theSize")=static_cast<Standard_Size>(0),  py::arg("theFormat")=static_cast<Image_Format>(Image_Format_RGB))
        .def("HasMipmaps",
             (Standard_Boolean (OpenGl_Texture::*)() const) static_cast<Standard_Boolean (OpenGl_Texture::*)() const>(&OpenGl_Texture::HasMipmaps),
             R"#(Returns true if texture was generated within mipmaps)#" )
        .def("EstimatedDataSize",
             (Standard_Size (OpenGl_Texture::*)() const) static_cast<Standard_Size (OpenGl_Texture::*)() const>(&OpenGl_Texture::EstimatedDataSize),
             R"#(Returns estimated GPU memory usage for holding data without considering overheads and allocation alignment rules.)#" )
        .def("IsPointSprite",
             (bool (OpenGl_Texture::*)() const) static_cast<bool (OpenGl_Texture::*)() const>(&OpenGl_Texture::IsPointSprite),
             R"#(Returns TRUE for point sprite texture.)#" )
    // methods using call by reference i.s.o. return
    // static methods
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
                    (bool (*)( const opencascade::handle<OpenGl_Context> & ,  const Image_Format ,  GLint & ,  GLenum & ,  GLenum &  ) ) static_cast<bool (*)( const opencascade::handle<OpenGl_Context> & ,  const Image_Format ,  GLint & ,  GLenum & ,  GLenum &  ) >(&OpenGl_Texture::GetDataFormat),
                    R"#(Return texture type and format by Image_Format.)#"  , py::arg("theCtx"),  py::arg("theFromat"),  py::arg("theTextFormat"),  py::arg("thePixelFormat"),  py::arg("theDataType"))
        .def_static("GetDataFormat_s",
                    (bool (*)( const opencascade::handle<OpenGl_Context> & ,  const Image_PixMap & ,  GLint & ,  GLenum & ,  GLenum &  ) ) static_cast<bool (*)( const opencascade::handle<OpenGl_Context> & ,  const Image_PixMap & ,  GLint & ,  GLenum & ,  GLenum &  ) >(&OpenGl_Texture::GetDataFormat),
                    R"#(Return texture type and format by Image_PixMap data format.)#"  , py::arg("theCtx"),  py::arg("theData"),  py::arg("theTextFormat"),  py::arg("thePixelFormat"),  py::arg("theDataType"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_TextureBufferArb ,opencascade::handle<OpenGl_TextureBufferArb>  , OpenGl_VertexBuffer >>(m.attr("OpenGl_TextureBufferArb"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_TextureBufferArb::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_TextureBufferArb::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_VertexBufferCompat ,opencascade::handle<OpenGl_VertexBufferCompat>  , OpenGl_VertexBuffer >>(m.attr("OpenGl_VertexBufferCompat"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsVirtual",
             (bool (OpenGl_VertexBufferCompat::*)() const) static_cast<bool (OpenGl_VertexBufferCompat::*)() const>(&OpenGl_VertexBufferCompat::IsVirtual),
             R"#(Return TRUE.)#" )
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
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_VertexBufferCompat::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_VertexBufferCompat::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OpenGl_PointSprite ,opencascade::handle<OpenGl_PointSprite>  , OpenGl_Texture >>(m.attr("OpenGl_PointSprite"))
    // constructors
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theResourceId") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OpenGl_PointSprite::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OpenGl_PointSprite::*)() const>(&OpenGl_PointSprite::DynamicType),
             R"#(None)#" )
        .def("Release",
             (void (OpenGl_PointSprite::*)( OpenGl_Context *  ) ) static_cast<void (OpenGl_PointSprite::*)( OpenGl_Context *  ) >(&OpenGl_PointSprite::Release),
             R"#(Destroy object - will release GPU memory if any.)#"  , py::arg("theCtx"))
        .def("IsPointSprite",
             (bool (OpenGl_PointSprite::*)() const) static_cast<bool (OpenGl_PointSprite::*)() const>(&OpenGl_PointSprite::IsPointSprite),
             R"#(Returns TRUE for point sprite texture.)#" )
        .def("IsDisplayList",
             (Standard_Boolean (OpenGl_PointSprite::*)() const) static_cast<Standard_Boolean (OpenGl_PointSprite::*)() const>(&OpenGl_PointSprite::IsDisplayList),
             R"#(Returns true if this is display list bitmap)#" )
        .def("DrawBitmap",
             (void (OpenGl_PointSprite::*)( const opencascade::handle<OpenGl_Context> &  ) const) static_cast<void (OpenGl_PointSprite::*)( const opencascade::handle<OpenGl_Context> &  ) const>(&OpenGl_PointSprite::DrawBitmap),
             R"#(Draw sprite using glBitmap. Please call glRasterPos3fv() before to setup sprite position.)#"  , py::arg("theCtx"))
        .def("SetDisplayList",
             (void (OpenGl_PointSprite::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint  ) ) static_cast<void (OpenGl_PointSprite::*)( const opencascade::handle<OpenGl_Context> & ,  const GLuint  ) >(&OpenGl_PointSprite::SetDisplayList),
             R"#(Initialize point sprite as display list)#"  , py::arg("theCtx"),  py::arg("theBitmapList"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OpenGl_PointSprite::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&OpenGl_PointSprite::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/OpenGl_VertexBuffer.hxx
// ./opencascade/OpenGl_StructureShadow.hxx
// ./opencascade/OpenGl_TextBuilder.hxx
// ./opencascade/OpenGl_ArbTBO.hxx
// ./opencascade/OpenGl_ShaderStates.hxx
// ./opencascade/OpenGl_NamedResource.hxx
// ./opencascade/OpenGl_MatrixState.hxx
// ./opencascade/OpenGl_Layer.hxx
// ./opencascade/OpenGl_Vec.hxx
// ./opencascade/OpenGl_GlCore45.hxx
// ./opencascade/OpenGl_ArbIns.hxx
// ./opencascade/OpenGl_Group.hxx
// ./opencascade/OpenGl_GlCore32.hxx
// ./opencascade/OpenGl_HaltonSampler.hxx
// ./opencascade/OpenGl_FrameBuffer.hxx
// ./opencascade/OpenGl_ShaderManager.hxx
// ./opencascade/OpenGl_GlCore13.hxx
// ./opencascade/OpenGl_GraduatedTrihedron.hxx
// ./opencascade/OpenGl_GraphicDriver.hxx
// ./opencascade/OpenGl_BackgroundArray.hxx
// ./opencascade/OpenGl_MaterialState.hxx
// ./opencascade/OpenGl_ClippingIterator.hxx
// ./opencascade/OpenGl_GlCore12.hxx
// ./opencascade/OpenGl_Texture.hxx
// ./opencascade/OpenGl_FrameStatsPrs.hxx
// ./opencascade/OpenGl_Matrix.hxx
// ./opencascade/OpenGl_Material.hxx
// ./opencascade/OpenGl_PrimitiveArray.hxx
// ./opencascade/OpenGl_ArbFBO.hxx
// ./opencascade/OpenGl_Workspace.hxx
// ./opencascade/OpenGl_Element.hxx
// ./opencascade/OpenGl_GlCore40.hxx
// ./opencascade/OpenGl_TileSampler.hxx
// ./opencascade/OpenGl_Caps.hxx
// ./opencascade/OpenGl_Structure.hxx
// ./opencascade/OpenGl_Text.hxx
// ./opencascade/OpenGl_View.hxx
// ./opencascade/OpenGl_GlCore41.hxx
// ./opencascade/OpenGl_ArbDbg.hxx
// ./opencascade/OpenGl_GlCore44.hxx
// ./opencascade/OpenGl_Aspects.hxx
// ./opencascade/OpenGl_GlCore33.hxx
// ./opencascade/OpenGl_Window.hxx
// ./opencascade/OpenGl_GlCore20.hxx
// ./opencascade/OpenGl_GlFunctions.hxx
// ./opencascade/OpenGl_SetOfShaderPrograms.hxx
// ./opencascade/OpenGl_Font.hxx
// ./opencascade/OpenGl_ArbTexBindless.hxx
// ./opencascade/OpenGl_Clipping.hxx
// ./opencascade/OpenGl_FrameStats.hxx
// ./opencascade/OpenGl_VertexBufferCompat.hxx
// ./opencascade/OpenGl_StencilTest.hxx
// ./opencascade/OpenGl_GlCore15.hxx
// ./opencascade/OpenGl_GlCore21.hxx
// ./opencascade/OpenGl_Context.hxx
// ./opencascade/OpenGl_GlCore42.hxx
// ./opencascade/OpenGl_ShaderObject.hxx
// ./opencascade/OpenGl_Flipper.hxx
// ./opencascade/OpenGl_AspectsProgram.hxx
// ./opencascade/OpenGl_GlCore30.hxx
// ./opencascade/OpenGl_GlCore31.hxx
// ./opencascade/OpenGl_LineAttributes.hxx
// ./opencascade/OpenGl_RenderFilter.hxx
// ./opencascade/OpenGl_GlCore11Fwd.hxx
// ./opencascade/OpenGl_SceneGeometry.hxx
// ./opencascade/OpenGl_AspectsTextureSet.hxx
// ./opencascade/OpenGl_CappingAlgo.hxx
// ./opencascade/OpenGl_VertexBufferEditor.hxx
// ./opencascade/OpenGl_TextureBufferArb.hxx
// ./opencascade/OpenGl_LayerList.hxx
// ./opencascade/OpenGl_GlCore43.hxx
// ./opencascade/OpenGl_IndexBuffer.hxx
// ./opencascade/OpenGl_GlCore11.hxx
// ./opencascade/OpenGl_ShaderProgram.hxx
// ./opencascade/OpenGl_CappingPlaneResource.hxx
// ./opencascade/OpenGl_ShaderProgramDumpLevel.hxx
// ./opencascade/OpenGl_GlCore14.hxx
// ./opencascade/OpenGl_LayerFilter.hxx
// ./opencascade/OpenGl_PointSprite.hxx
// ./opencascade/OpenGl_ArbSamplerObject.hxx
// ./opencascade/OpenGl_TextureSet.hxx
// ./opencascade/OpenGl_AspectsSprite.hxx
// ./opencascade/OpenGl_Resource.hxx
// ./opencascade/OpenGl_Sampler.hxx
// ./opencascade/OpenGl_ExtGS.hxx

// operators

// register typdefs
    register_template_OpenGl_TmplCore45<OpenGl_GlCore44Back>(m,"OpenGl_GlCore45Back");  
    register_template_OpenGl_TmplCore45<OpenGl_GlCore44>(m,"OpenGl_GlCore45");  
    register_template_OpenGl_TmplCore32<OpenGl_GlCore31Back>(m,"OpenGl_GlCore32Back");  
    register_template_OpenGl_TmplCore32<OpenGl_GlCore31>(m,"OpenGl_GlCore32");  
    register_template_NCollection_Vector<GLint>(m,"OpenGl_ColorFormats");  
    register_template_NCollection_Sequence<opencascade::handle<OpenGl_ShaderProgram> >(m,"OpenGl_ShaderProgramList");  
    register_template_OpenGl_TmplCore12<OpenGl_GlCore11>(m,"OpenGl_GlCore12");  
    register_template_OpenGl_TmplCore12<OpenGl_GlCore11Fwd>(m,"OpenGl_GlCore12Fwd");  
    register_template_OpenGl_TmplCore40<OpenGl_GlCore33Back>(m,"OpenGl_GlCore40Back");  
    register_template_OpenGl_TmplCore40<OpenGl_GlCore33>(m,"OpenGl_GlCore40");  
    register_template_NCollection_List<const OpenGl_Structure *>(m,"OpenGl_ListOfStructure");  
    register_template_OpenGl_TmplCore41<OpenGl_GlCore40Back>(m,"OpenGl_GlCore41Back");  
    register_template_OpenGl_TmplCore41<OpenGl_GlCore40>(m,"OpenGl_GlCore41");  
    register_template_OpenGl_TmplCore44<OpenGl_GlCore43Back>(m,"OpenGl_GlCore44Back");  
    register_template_OpenGl_TmplCore44<OpenGl_GlCore43>(m,"OpenGl_GlCore44");  
    register_template_OpenGl_TmplCore33<OpenGl_GlCore32Back>(m,"OpenGl_GlCore33Back");  
    register_template_OpenGl_TmplCore33<OpenGl_GlCore32>(m,"OpenGl_GlCore33");  
    register_template_OpenGl_TmplCore20<OpenGl_GlCore15>(m,"OpenGl_GlCore20");  
    register_template_OpenGl_TmplCore20<OpenGl_GlCore15Fwd>(m,"OpenGl_GlCore20Fwd");  
    register_template_OpenGl_TmplCore15<OpenGl_GlCore14>(m,"OpenGl_GlCore15");  
    register_template_OpenGl_TmplCore15<OpenGl_GlCore14Fwd>(m,"OpenGl_GlCore15Fwd");  
    register_template_OpenGl_TmplCore21<OpenGl_GlCore20>(m,"OpenGl_GlCore21");  
    register_template_OpenGl_TmplCore21<OpenGl_GlCore20Fwd>(m,"OpenGl_GlCore21Fwd");  
    register_template_OpenGl_TmplCore14<OpenGl_GlCore13>(m,"OpenGl_GlCore14");  
    register_template_OpenGl_TmplCore14<OpenGl_GlCore13Fwd>(m,"OpenGl_GlCore14Fwd");  
    register_template_OpenGl_TmplCore30<OpenGl_GlCore21>(m,"OpenGl_GlCore30");  
    register_template_OpenGl_TmplCore30<OpenGl_GlCore21Fwd>(m,"OpenGl_GlCore30Fwd");  
    register_template_OpenGl_TmplCore31<OpenGl_GlCore30>(m,"OpenGl_GlCore31Back");  
    register_template_OpenGl_TmplCore31<OpenGl_GlCore30Fwd>(m,"OpenGl_GlCore31");  
    register_template_OpenGl_TmplCore42<OpenGl_GlCore41Back>(m,"OpenGl_GlCore42Back");  
    register_template_OpenGl_TmplCore42<OpenGl_GlCore41>(m,"OpenGl_GlCore42");  
    register_template_OpenGl_TmplCore43<OpenGl_GlCore42Back>(m,"OpenGl_GlCore43Back");  
    register_template_OpenGl_TmplCore43<OpenGl_GlCore42>(m,"OpenGl_GlCore43");  
    register_template_BVH_Triangulation<Standard_ShortReal, 3>(m,"OpenGl_BVHTriangulation3f");  
    register_template_NCollection_Sequence<opencascade::handle<OpenGl_ShaderObject> >(m,"OpenGl_ShaderList");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

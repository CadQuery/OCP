#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

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
#include <OpenGl_MatrixState.hxx>
#include <OpenGl_GlCore30.hxx>
#include <OpenGl_GlCore33.hxx>
#include <OpenGl_Group.hxx>
#include <OpenGl_Matrix.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <OpenGl_TextureSet.hxx>
#include <OpenGl_RenderFilter.hxx>
#include <OpenGl_GlFunctions.hxx>
#include <OpenGl_NamedResource.hxx>
#include <OpenGl_AspectMarker.hxx>
#include <OpenGl_TextParam.hxx>
#include <OpenGl_Workspace.hxx>
#include <OpenGl_TextBuilder.hxx>
#include <OpenGl_BVHClipPrimitiveTrsfPersSet.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_GlCore20.hxx>
#include <OpenGl_GlCore11Fwd.hxx>
#include <OpenGl_ArbTBO.hxx>
#include <OpenGl_ArbTexBindless.hxx>
#include <OpenGl_SetOfShaderPrograms.hxx>
#include <OpenGl_ArbDbg.hxx>
#include <OpenGl_GraduatedTrihedron.hxx>
#include <OpenGl_HaltonSampler.hxx>
#include <OpenGl_GlCore13.hxx>
#include <OpenGl_CappingAlgo.hxx>
#include <OpenGl_StructureShadow.hxx>
#include <OpenGl_Vec.hxx>
#include <OpenGl_GlCore31.hxx>
#include <OpenGl_Layer.hxx>
#include <OpenGl_LayerFilter.hxx>
#include <OpenGl_LineAttributes.hxx>
#include <OpenGl_VertexBuffer.hxx>
#include <OpenGl_Caps.hxx>
#include <OpenGl_Material.hxx>
#include <OpenGl_ShaderStates.hxx>
#include <OpenGl_IndexBuffer.hxx>
#include <OpenGl_MaterialState.hxx>
#include <OpenGl_StencilTest.hxx>
#include <OpenGl_GlCore11.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_AspectText.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_GlCore32.hxx>
#include <OpenGl_MapOfZLayerSettings.hxx>
#include <OpenGl_TileSampler.hxx>
#include <OpenGl_Text.hxx>
#include <OpenGl_GlCore21.hxx>
#include <OpenGl_Texture.hxx>
#include <OpenGl_VertexBufferCompat.hxx>
#include <OpenGl_ShaderProgram.hxx>
#include <OpenGl_BackgroundArray.hxx>
#include <OpenGl_FrameBuffer.hxx>
#include <OpenGl_ArbFBO.hxx>
#include <OpenGl_ExtGS.hxx>
#include <OpenGl_LayerList.hxx>
#include <OpenGl_BVHTreeSelector.hxx>
#include <OpenGl_FrameStats.hxx>
#include <OpenGl_CappingPlaneResource.hxx>
#include <OpenGl_Sampler.hxx>
#include <OpenGl_PrimitiveArray.hxx>
#include <OpenGl_ShaderManager.hxx>
#include <OpenGl_Resource.hxx>
#include <OpenGl_SceneGeometry.hxx>
#include <OpenGl_AspectLine.hxx>
#include <OpenGl_GlCore43.hxx>
#include <OpenGl_GlCore40.hxx>
#include <OpenGl_GlCore41.hxx>
#include <OpenGl_AspectFace.hxx>
#include <OpenGl_GlCore42.hxx>
#include <OpenGl_GlCore14.hxx>
#include <OpenGl_FrameStatsPrs.hxx>
#include <OpenGl_Window.hxx>
#include <OpenGl_ArbIns.hxx>
#include <OpenGl_GlCore44.hxx>
#include <OpenGl_ArbSamplerObject.hxx>
#include <OpenGl_Flipper.hxx>
#include <OpenGl_Element.hxx>
#include <OpenGl_BVHClipPrimitiveSet.hxx>
#include <OpenGl_GlCore15.hxx>
#include <OpenGl_PointSprite.hxx>
#include <OpenGl_GlCore12.hxx>
#include <OpenGl_VertexBufferEditor.hxx>
#include <OpenGl_Font.hxx>
#include <OpenGl_ShaderObject.hxx>
#include <OpenGl_TextureBufferArb.hxx>
#include <OpenGl_Clipping.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/OpenGl_MatrixState.hxx

template <typename T>
void preregister_template_OpenGl_MatrixState(py::object &m, const char *name){
    py::class_<OpenGl_MatrixState<T> , shared_ptr<OpenGl_MatrixState<T>> >(m,name,R"#(Software implementation for OpenGL matrix stack.)#");
}

template <typename T>
void register_template_OpenGl_MatrixState(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_MatrixState<T> , shared_ptr<OpenGl_MatrixState<T>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Push",
             (void (OpenGl_MatrixState<T>::*)() ) &OpenGl_MatrixState<T>::Push,
             R"#(Pushes current matrix into stack.)#" )
        .def("Pop",
             (void (OpenGl_MatrixState<T>::*)() ) &OpenGl_MatrixState<T>::Pop,
             R"#(Pops matrix from stack to current.)#" )
        .def("Current",
             (const typename OpenGl::MatrixType<T>::Mat4 & (OpenGl_MatrixState<T>::*)() ) &OpenGl_MatrixState<T>::Current,
             R"#(Returns current matrix.)#" )
        .def("SetCurrent",
             (void (OpenGl_MatrixState<T>::*)( const typename OpenGl::MatrixType<T>::Mat4 &  ) ) &OpenGl_MatrixState<T>::SetCurrent,
             R"#(Sets given matrix as current.)#"  , py::arg("theNewCurrent"))
        .def("ChangeCurrent",
             (typename OpenGl::MatrixType<T>::Mat4 & (OpenGl_MatrixState<T>::*)() ) &OpenGl_MatrixState<T>::ChangeCurrent,
             R"#(Change current matrix.)#" )
        .def("SetIdentity",
             (void (OpenGl_MatrixState<T>::*)() ) &OpenGl_MatrixState<T>::SetIdentity,
             R"#(Sets current matrix to identity.)#" )
    ;
};
// ./opencascade/OpenGl_GlCore30.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore30(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore30<theBaseClass_t> , shared_ptr<OpenGl_TmplCore30<theBaseClass_t>> >(m,name,R"#(OpenGL 3.0 core. This is first version with deprecation model introduced - a lot of functionality regarding to fixed pipeline were marked deprecated. Notice that nothing were actually removed in this version (unless Forward context loaded)!)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore30(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore30<theBaseClass_t> , shared_ptr<OpenGl_TmplCore30<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_GlCore33.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore33(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore33<theBaseClass_t> , shared_ptr<OpenGl_TmplCore33<theBaseClass_t>> >(m,name,R"#(OpenGL 3.3 definition.)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore33(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore33<theBaseClass_t> , shared_ptr<OpenGl_TmplCore33<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_Group.hxx
// ./opencascade/OpenGl_Matrix.hxx
// ./opencascade/OpenGl_GraphicDriver.hxx
// ./opencascade/OpenGl_TextureSet.hxx
// ./opencascade/OpenGl_RenderFilter.hxx
// ./opencascade/OpenGl_GlFunctions.hxx
// ./opencascade/OpenGl_NamedResource.hxx
// ./opencascade/OpenGl_AspectMarker.hxx
// ./opencascade/OpenGl_TextParam.hxx
// ./opencascade/OpenGl_Workspace.hxx
// ./opencascade/OpenGl_TextBuilder.hxx
// ./opencascade/OpenGl_BVHClipPrimitiveTrsfPersSet.hxx
// ./opencascade/OpenGl_Context.hxx
// ./opencascade/OpenGl_GlCore20.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore20(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore20<theBaseClass_t> , shared_ptr<OpenGl_TmplCore20<theBaseClass_t>> >(m,name,R"#(OpenGL 2.0 core based on 1.5 version.)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore20(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore20<theBaseClass_t> , shared_ptr<OpenGl_TmplCore20<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_GlCore11Fwd.hxx
// ./opencascade/OpenGl_ArbTBO.hxx
// ./opencascade/OpenGl_ArbTexBindless.hxx
// ./opencascade/OpenGl_SetOfShaderPrograms.hxx
// ./opencascade/OpenGl_ArbDbg.hxx
// ./opencascade/OpenGl_GraduatedTrihedron.hxx
// ./opencascade/OpenGl_HaltonSampler.hxx
// ./opencascade/OpenGl_GlCore13.hxx
// ./opencascade/OpenGl_CappingAlgo.hxx
// ./opencascade/OpenGl_StructureShadow.hxx
// ./opencascade/OpenGl_Vec.hxx
// ./opencascade/OpenGl_GlCore31.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore31(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore31<theBaseClass_t> , shared_ptr<OpenGl_TmplCore31<theBaseClass_t>> >(m,name,R"#(OpenGL 3.1 definition.)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore31(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore31<theBaseClass_t> , shared_ptr<OpenGl_TmplCore31<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_Layer.hxx
// ./opencascade/OpenGl_LayerFilter.hxx
// ./opencascade/OpenGl_LineAttributes.hxx
// ./opencascade/OpenGl_VertexBuffer.hxx
// ./opencascade/OpenGl_Caps.hxx
// ./opencascade/OpenGl_Material.hxx
// ./opencascade/OpenGl_ShaderStates.hxx
// ./opencascade/OpenGl_IndexBuffer.hxx
// ./opencascade/OpenGl_MaterialState.hxx
// ./opencascade/OpenGl_StencilTest.hxx
// ./opencascade/OpenGl_GlCore11.hxx
// ./opencascade/OpenGl_View.hxx
// ./opencascade/OpenGl_AspectText.hxx
// ./opencascade/OpenGl_Structure.hxx
// ./opencascade/OpenGl_GlCore32.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore32(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore32<theBaseClass_t> , shared_ptr<OpenGl_TmplCore32<theBaseClass_t>> >(m,name,R"#(OpenGL 3.2 definition.)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore32(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore32<theBaseClass_t> , shared_ptr<OpenGl_TmplCore32<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_MapOfZLayerSettings.hxx
// ./opencascade/OpenGl_TileSampler.hxx
// ./opencascade/OpenGl_Text.hxx
// ./opencascade/OpenGl_GlCore21.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore21(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore21<theBaseClass_t> , shared_ptr<OpenGl_TmplCore21<theBaseClass_t>> >(m,name,R"#(OpenGL 2.1 core based on 2.0 version.)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore21(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore21<theBaseClass_t> , shared_ptr<OpenGl_TmplCore21<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_Texture.hxx

template <typename T>
void preregister_template_OpenGl_TextureFormatSelector(py::object &m, const char *name){
    py::class_<OpenGl_TextureFormatSelector<T> , shared_ptr<OpenGl_TextureFormatSelector<T>> >(m,name,R"#(Selects preferable texture format for specified parameters.)#");
}

template <typename T>
void register_template_OpenGl_TextureFormatSelector(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TextureFormatSelector<T> , shared_ptr<OpenGl_TextureFormatSelector<T>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_VertexBufferCompat.hxx
// ./opencascade/OpenGl_ShaderProgram.hxx

template <typename T>
void preregister_template_OpenGl_VariableSetter(py::object &m, const char *name){
    py::class_<OpenGl_VariableSetter<T> , shared_ptr<OpenGl_VariableSetter<T>> >(m,name,R"#(None)#");
}

template <typename T>
void register_template_OpenGl_VariableSetter(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_VariableSetter<T> , shared_ptr<OpenGl_VariableSetter<T>> >>(m.attr(name))
        .def("Set",
             (void (OpenGl_VariableSetter<T>::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<Graphic3d_ShaderVariable> & ,  OpenGl_ShaderProgram *  ) ) &OpenGl_VariableSetter<T>::Set,
             R"#(None)#"  , py::arg("theCtx"),  py::arg("theVariable"),  py::arg("theProgram"))
    ;
};
// ./opencascade/OpenGl_BackgroundArray.hxx
// ./opencascade/OpenGl_FrameBuffer.hxx
// ./opencascade/OpenGl_ArbFBO.hxx
// ./opencascade/OpenGl_ExtGS.hxx
// ./opencascade/OpenGl_LayerList.hxx
// ./opencascade/OpenGl_BVHTreeSelector.hxx
// ./opencascade/OpenGl_FrameStats.hxx
// ./opencascade/OpenGl_CappingPlaneResource.hxx
// ./opencascade/OpenGl_Sampler.hxx
// ./opencascade/OpenGl_PrimitiveArray.hxx
// ./opencascade/OpenGl_ShaderManager.hxx
// ./opencascade/OpenGl_Resource.hxx
// ./opencascade/OpenGl_SceneGeometry.hxx
// ./opencascade/OpenGl_AspectLine.hxx
// ./opencascade/OpenGl_GlCore43.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore43(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore43<theBaseClass_t> , shared_ptr<OpenGl_TmplCore43<theBaseClass_t>> >(m,name,R"#(OpenGL 4.3 definition.)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore43(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore43<theBaseClass_t> , shared_ptr<OpenGl_TmplCore43<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_GlCore40.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore40(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore40<theBaseClass_t> , shared_ptr<OpenGl_TmplCore40<theBaseClass_t>> >(m,name,R"#(OpenGL 4.0 definition.)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore40(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore40<theBaseClass_t> , shared_ptr<OpenGl_TmplCore40<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_GlCore41.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore41(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore41<theBaseClass_t> , shared_ptr<OpenGl_TmplCore41<theBaseClass_t>> >(m,name,R"#(OpenGL 4.1 definition.)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore41(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore41<theBaseClass_t> , shared_ptr<OpenGl_TmplCore41<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_AspectFace.hxx
// ./opencascade/OpenGl_GlCore42.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore42(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore42<theBaseClass_t> , shared_ptr<OpenGl_TmplCore42<theBaseClass_t>> >(m,name,R"#(OpenGL 4.2 definition.)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore42(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore42<theBaseClass_t> , shared_ptr<OpenGl_TmplCore42<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_GlCore14.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore14(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore14<theBaseClass_t> , shared_ptr<OpenGl_TmplCore14<theBaseClass_t>> >(m,name,R"#(OpenGL 1.4 core based on 1.3 version.)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore14(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore14<theBaseClass_t> , shared_ptr<OpenGl_TmplCore14<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_FrameStatsPrs.hxx
// ./opencascade/OpenGl_Window.hxx
// ./opencascade/OpenGl_ArbIns.hxx
// ./opencascade/OpenGl_GlCore44.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore44(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore44<theBaseClass_t> , shared_ptr<OpenGl_TmplCore44<theBaseClass_t>> >(m,name,R"#(OpenGL 4.4 definition.)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore44(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore44<theBaseClass_t> , shared_ptr<OpenGl_TmplCore44<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_ArbSamplerObject.hxx
// ./opencascade/OpenGl_Flipper.hxx
// ./opencascade/OpenGl_Element.hxx
// ./opencascade/OpenGl_BVHClipPrimitiveSet.hxx
// ./opencascade/OpenGl_GlCore15.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore15(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore15<theBaseClass_t> , shared_ptr<OpenGl_TmplCore15<theBaseClass_t>> >(m,name,R"#(OpenGL 1.5 core based on 1.4 version.)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore15(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore15<theBaseClass_t> , shared_ptr<OpenGl_TmplCore15<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_PointSprite.hxx
// ./opencascade/OpenGl_GlCore12.hxx

template <typename theBaseClass_t>
void preregister_template_OpenGl_TmplCore12(py::object &m, const char *name){
    py::class_<OpenGl_TmplCore12<theBaseClass_t> , shared_ptr<OpenGl_TmplCore12<theBaseClass_t>> >(m,name,R"#(OpenGL 1.2 core based on 1.1 version.)#");
}

template <typename theBaseClass_t>
void register_template_OpenGl_TmplCore12(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_TmplCore12<theBaseClass_t> , shared_ptr<OpenGl_TmplCore12<theBaseClass_t>> >>(m.attr(name))
    ;
};
// ./opencascade/OpenGl_VertexBufferEditor.hxx

template <typename theVec_t>
void preregister_template_OpenGl_VertexBufferEditor(py::object &m, const char *name){
    py::class_<OpenGl_VertexBufferEditor<theVec_t> , shared_ptr<OpenGl_VertexBufferEditor<theVec_t>> >(m,name,R"#(Auxiliary class to iteratively modify data of existing VBO. It provides iteration interface with delayed CPU->GPU memory transfer to avoid slow per-element data transfer. User should explicitly call Flush() method to ensure that all data is transferred to VBO. Temporary buffer on CPU side can be initialized with lesser capacity than VBO to allow re-usage of shared buffer with fixed size between VBOs.)#");
}

template <typename theVec_t>
void register_template_OpenGl_VertexBufferEditor(py::object &m, const char *name){
    static_cast<py::class_<OpenGl_VertexBufferEditor<theVec_t> , shared_ptr<OpenGl_VertexBufferEditor<theVec_t>> >>(m.attr(name))
        .def(py::init< const Standard_Integer >()  , py::arg("theTmpBufferLength")=static_cast<const Standard_Integer>(0) )
        .def(py::init< theVec_t *,const Standard_Integer >()  , py::arg("theTmpBuffer"),  py::arg("theTmpBufferLength") )
        .def("Init",
             (Standard_Boolean (OpenGl_VertexBufferEditor<theVec_t>::*)( const opencascade::handle<OpenGl_Context> & ,  const opencascade::handle<OpenGl_VertexBuffer> &  ) ) &OpenGl_VertexBufferEditor<theVec_t>::Init,
             R"#(Initialize editor for specified VBO. theGlCtx - bound OpenGL context to edit VBO theVbo - VBO to edit)#"  , py::arg("theGlCtx"),  py::arg("theVbo"))
        .def("Value",
             (theVec_t & (OpenGl_VertexBufferEditor<theVec_t>::*)() ) &OpenGl_VertexBufferEditor<theVec_t>::Value,
             R"#(Modify current element in VBO.)#" )
        .def("Next",
             (Standard_Boolean (OpenGl_VertexBufferEditor<theVec_t>::*)() ) &OpenGl_VertexBufferEditor<theVec_t>::Next,
             R"#(Move to the next position in VBO.)#" )
        .def("Flush",
             (Standard_Boolean (OpenGl_VertexBufferEditor<theVec_t>::*)() ) &OpenGl_VertexBufferEditor<theVec_t>::Flush,
             R"#(Push current data from local buffer to VBO.)#" )
        .def("GetVBO",
             (const opencascade::handle<OpenGl_VertexBuffer> & (OpenGl_VertexBufferEditor<theVec_t>::*)() const) &OpenGl_VertexBufferEditor<theVec_t>::GetVBO,
             R"#(Returns assigned VBO)#" )
    ;
};
// ./opencascade/OpenGl_Font.hxx
// ./opencascade/OpenGl_ShaderObject.hxx
// ./opencascade/OpenGl_TextureBufferArb.hxx
// ./opencascade/OpenGl_Clipping.hxx

// user-defined post

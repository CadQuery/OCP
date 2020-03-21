#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <Graphic3d_Text.hxx>
#include <Graphic3d_ShaderProgram.hxx>
#include <Graphic3d_CView.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_CStructure.hxx>
#include <Image_PixMap.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_DataStructureManager.hxx>
#include <Graphic3d_Aspects.hxx>
#include <Graphic3d_TextureParams.hxx>
#include <Aspect_DisplayConnection.hxx>
#include <Graphic3d_Layer.hxx>
#include <Graphic3d_TransformError.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_CView.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_Layer.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_Camera.hxx>
#include <Graphic3d_CStructure.hxx>
#include <Graphic3d_CullingTool.hxx>

// module includes
#include <Graphic3d_ArrayFlags.hxx>
#include <Graphic3d_Group.hxx>
#include <Graphic3d_Mat4d.hxx>
#include <Graphic3d_BndBox3d.hxx>
#include <Graphic3d_Vec3.hxx>
#include <Graphic3d_MediaTextureSet.hxx>
#include <Graphic3d_VerticalTextAlignment.hxx>
#include <Graphic3d_CubeMapPacked.hxx>
#include <Graphic3d_GraduatedTrihedron.hxx>
#include <Graphic3d_ShaderVariable.hxx>
#include <Graphic3d_TypeOfTextureFilter.hxx>
#include <Graphic3d_CameraTile.hxx>
#include <Graphic3d_TextureParams.hxx>
#include <Graphic3d_TextureUnit.hxx>
#include <Graphic3d_Vertex.hxx>
#include <Graphic3d_CubeMap.hxx>
#include <Graphic3d_PriorityDefinitionError.hxx>
#include <Graphic3d_HighlightStyle.hxx>
#include <Graphic3d_TypeOfVisualization.hxx>
#include <Graphic3d_ArrayOfPolygons.hxx>
#include <Graphic3d_SequenceOfGroup.hxx>
#include <Graphic3d_NMapOfTransient.hxx>
#include <Graphic3d_DiagnosticInfo.hxx>
#include <Graphic3d_DataStructureManager.hxx>
#include <Graphic3d_TextureMap.hxx>
#include <Graphic3d_RenderingParams.hxx>
#include <Graphic3d_TypeOfTextureMode.hxx>
#include <Graphic3d_Vec2.hxx>
#include <Graphic3d_NameOfTexture2D.hxx>
#include <Graphic3d_AspectLine3d.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_CullingTool.hxx>
#include <Graphic3d_Texture2D.hxx>
#include <Graphic3d_ArrayOfPoints.hxx>
#include <Graphic3d_Vec4.hxx>
#include <Graphic3d_TransformUtils.hxx>
#include <Graphic3d_CStructure.hxx>
#include <Graphic3d_BvhCStructureSet.hxx>
#include <Graphic3d_AspectFillArea3d.hxx>
#include <Graphic3d_MaterialAspect.hxx>
#include <Graphic3d_ToneMappingMethod.hxx>
#include <Graphic3d_Text.hxx>
#include <Graphic3d_MarkerImage.hxx>
#include <Graphic3d_AlphaMode.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_NameOfMaterial.hxx>
#include <Graphic3d_TypeOfTexture.hxx>
#include <Graphic3d_RenderTransparentMethod.hxx>
#include <Graphic3d_TypeOfPrimitiveArray.hxx>
#include <Graphic3d_ArrayOfTriangleFans.hxx>
#include <Graphic3d_GroupAspect.hxx>
#include <Graphic3d_ArrayOfPolylines.hxx>
#include <Graphic3d_MapOfStructure.hxx>
#include <Graphic3d_BoundBuffer.hxx>
#include <Graphic3d_FrameStatsData.hxx>
#include <Graphic3d_CubeMapSeparate.hxx>
#include <Graphic3d_MapOfObject.hxx>
#include <Graphic3d_StructureDefinitionError.hxx>
#include <Graphic3d_Texture1Dsegment.hxx>
#include <Graphic3d_PresentationAttributes.hxx>
#include <Graphic3d_TypeOfStructure.hxx>
#include <Graphic3d_MaterialDefinitionError.hxx>
#include <Graphic3d_ArrayOfTriangleStrips.hxx>
#include <Graphic3d_CubeMapSide.hxx>
#include <Graphic3d_HorizontalTextAlignment.hxx>
#include <Graphic3d_PolygonOffset.hxx>
#include <Graphic3d_ZLayerId.hxx>
#include <Graphic3d_ShaderAttribute.hxx>
#include <Graphic3d_MutableIndexBuffer.hxx>
#include <Graphic3d_TypeOfBackfacingModel.hxx>
#include <Graphic3d_NameOfTexturePlane.hxx>
#include <Graphic3d_TransformPers.hxx>
#include <Graphic3d_WorldViewProjState.hxx>
#include <Graphic3d_ZLayerSettings.hxx>
#include <Graphic3d_TransModeFlags.hxx>
#include <Graphic3d_CubeMapOrder.hxx>
#include <Graphic3d_BndBox4d.hxx>
#include <Graphic3d_Buffer.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_LevelOfTextureAnisotropy.hxx>
#include <Graphic3d_ArrayOfQuadrangleStrips.hxx>
#include <Graphic3d_TypeOfReflection.hxx>
#include <Graphic3d_CappingFlags.hxx>
#include <Graphic3d_TypeOfLimit.hxx>
#include <Graphic3d_CLight.hxx>
#include <Graphic3d_ShaderObject.hxx>
#include <Graphic3d_BufferType.hxx>
#include <Graphic3d_TransformError.hxx>
#include <Graphic3d_AttribBuffer.hxx>
#include <Graphic3d_AspectMarker3d.hxx>
#include <Graphic3d_Aspects.hxx>
#include <Graphic3d_TypeOfAnswer.hxx>
#include <Graphic3d_SequenceOfHClipPlane.hxx>
#include <Graphic3d_ArrayOfQuadrangles.hxx>
#include <Graphic3d_Texture1D.hxx>
#include <Graphic3d_MapOfAspectsToAspects.hxx>
#include <Graphic3d_TypeOfConnection.hxx>
#include <Graphic3d_GroupDefinitionError.hxx>
#include <Graphic3d_MapOfZLayerSettings.hxx>
#include <Graphic3d_TextureRoot.hxx>
#include <Graphic3d_MapIteratorOfMapOfStructure.hxx>
#include <Graphic3d_ShaderProgram.hxx>
#include <Graphic3d_TypeOfBackground.hxx>
#include <Graphic3d_MediaTexture.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_HatchStyle.hxx>
#include <Graphic3d_NameOfTexture1D.hxx>
#include <Graphic3d_BufferRange.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <Graphic3d_LightSet.hxx>
#include <Graphic3d_AspectText3d.hxx>
#include <Graphic3d_StereoMode.hxx>
#include <Graphic3d_FrameStatsCounter.hxx>
#include <Graphic3d_ViewAffinity.hxx>
#include <Graphic3d_FrameStats.hxx>
#include <Graphic3d_Vec.hxx>
#include <Graphic3d_Mat4.hxx>
#include <Graphic3d_Camera.hxx>
#include <Graphic3d_TextPath.hxx>
#include <Graphic3d_Texture2Dmanual.hxx>
#include <Graphic3d_TypeOfShaderObject.hxx>
#include <Graphic3d_TextureSet.hxx>
#include <Graphic3d_FrameStatsTimer.hxx>
#include <Graphic3d_TextureEnv.hxx>
#include <Graphic3d_BndBox4f.hxx>
#include <Graphic3d_TypeOfShadingModel.hxx>
#include <Graphic3d_Texture1Dmanual.hxx>
#include <Graphic3d_TypeOfMaterial.hxx>
#include <Graphic3d_RenderingMode.hxx>
#include <Graphic3d_TypeOfLightSource.hxx>
#include <Graphic3d_CView.hxx>
#include <Graphic3d_CTexture.hxx>
#include <Graphic3d_NameOfTextureEnv.hxx>
#include <Graphic3d_Texture2Dplane.hxx>
#include <Graphic3d_BvhCStructureSetTrsfPers.hxx>
#include <Graphic3d_SequenceOfStructure.hxx>
#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <Graphic3d_ClipPlane.hxx>
#include <Graphic3d_Layer.hxx>
#include <Graphic3d_TypeOfComposition.hxx>
#include <Graphic3d_IndexBuffer.hxx>
#include <Graphic3d_BSDF.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Graphic3d_ArrayFlags.hxx
// ./opencascade/Graphic3d_Group.hxx
// ./opencascade/Graphic3d_Mat4d.hxx
// ./opencascade/Graphic3d_BndBox3d.hxx
// ./opencascade/Graphic3d_Vec3.hxx
// ./opencascade/Graphic3d_MediaTextureSet.hxx
// ./opencascade/Graphic3d_VerticalTextAlignment.hxx
// ./opencascade/Graphic3d_CubeMapPacked.hxx
// ./opencascade/Graphic3d_GraduatedTrihedron.hxx
// ./opencascade/Graphic3d_ShaderVariable.hxx

template <typename T>
void preregister_template_Graphic3d_UniformValueTypeID(py::object &m, const char *name){
    py::class_<Graphic3d_UniformValueTypeID<T> , shared_ptr<Graphic3d_UniformValueTypeID<T>> >(m,name,R"#(Generates unique type identifier for variable value.)#");
}

template <typename T>
void register_template_Graphic3d_UniformValueTypeID(py::object &m, const char *name){
    static_cast<py::class_<Graphic3d_UniformValueTypeID<T> , shared_ptr<Graphic3d_UniformValueTypeID<T>> >>(m.attr(name))
    ;
};

template <typename T>
void preregister_template_Graphic3d_UniformValue(py::object &m, const char *name){
    py::class_<Graphic3d_UniformValue<T> , shared_ptr<Graphic3d_UniformValue<T>> >(m,name,R"#(Describes specific value of custom uniform variable.)#");
}

template <typename T>
void register_template_Graphic3d_UniformValue(py::object &m, const char *name){
    static_cast<py::class_<Graphic3d_UniformValue<T> , shared_ptr<Graphic3d_UniformValue<T>> >>(m.attr(name))
        .def(py::init< const T & >()  , py::arg("theValue") )
        .def("TypeID",
             (Standard_Size (Graphic3d_UniformValue<T>::*)() const) &Graphic3d_UniformValue<T>::TypeID,
             R"#(Returns unique identifier of value type.)#" )
    ;
};
// ./opencascade/Graphic3d_TypeOfTextureFilter.hxx
// ./opencascade/Graphic3d_CameraTile.hxx
// ./opencascade/Graphic3d_TextureParams.hxx
// ./opencascade/Graphic3d_TextureUnit.hxx
// ./opencascade/Graphic3d_Vertex.hxx
// ./opencascade/Graphic3d_CubeMap.hxx
// ./opencascade/Graphic3d_PriorityDefinitionError.hxx
// ./opencascade/Graphic3d_HighlightStyle.hxx
// ./opencascade/Graphic3d_TypeOfVisualization.hxx
// ./opencascade/Graphic3d_ArrayOfPolygons.hxx
// ./opencascade/Graphic3d_SequenceOfGroup.hxx
// ./opencascade/Graphic3d_NMapOfTransient.hxx
// ./opencascade/Graphic3d_DiagnosticInfo.hxx
// ./opencascade/Graphic3d_DataStructureManager.hxx
// ./opencascade/Graphic3d_TextureMap.hxx
// ./opencascade/Graphic3d_RenderingParams.hxx
// ./opencascade/Graphic3d_TypeOfTextureMode.hxx
// ./opencascade/Graphic3d_Vec2.hxx
// ./opencascade/Graphic3d_NameOfTexture2D.hxx
// ./opencascade/Graphic3d_AspectLine3d.hxx
// ./opencascade/Graphic3d_StructureManager.hxx
// ./opencascade/Graphic3d_CullingTool.hxx
// ./opencascade/Graphic3d_Texture2D.hxx
// ./opencascade/Graphic3d_ArrayOfPoints.hxx
// ./opencascade/Graphic3d_Vec4.hxx
// ./opencascade/Graphic3d_TransformUtils.hxx
// ./opencascade/Graphic3d_CStructure.hxx
// ./opencascade/Graphic3d_BvhCStructureSet.hxx
// ./opencascade/Graphic3d_AspectFillArea3d.hxx
// ./opencascade/Graphic3d_MaterialAspect.hxx
// ./opencascade/Graphic3d_ToneMappingMethod.hxx
// ./opencascade/Graphic3d_Text.hxx
// ./opencascade/Graphic3d_MarkerImage.hxx
// ./opencascade/Graphic3d_AlphaMode.hxx
// ./opencascade/Graphic3d_ArrayOfSegments.hxx
// ./opencascade/Graphic3d_NameOfMaterial.hxx
// ./opencascade/Graphic3d_TypeOfTexture.hxx
// ./opencascade/Graphic3d_RenderTransparentMethod.hxx
// ./opencascade/Graphic3d_TypeOfPrimitiveArray.hxx
// ./opencascade/Graphic3d_ArrayOfTriangleFans.hxx
// ./opencascade/Graphic3d_GroupAspect.hxx
// ./opencascade/Graphic3d_ArrayOfPolylines.hxx
// ./opencascade/Graphic3d_MapOfStructure.hxx
// ./opencascade/Graphic3d_BoundBuffer.hxx
// ./opencascade/Graphic3d_FrameStatsData.hxx
// ./opencascade/Graphic3d_CubeMapSeparate.hxx
// ./opencascade/Graphic3d_MapOfObject.hxx
// ./opencascade/Graphic3d_StructureDefinitionError.hxx
// ./opencascade/Graphic3d_Texture1Dsegment.hxx
// ./opencascade/Graphic3d_PresentationAttributes.hxx
// ./opencascade/Graphic3d_TypeOfStructure.hxx
// ./opencascade/Graphic3d_MaterialDefinitionError.hxx
// ./opencascade/Graphic3d_ArrayOfTriangleStrips.hxx
// ./opencascade/Graphic3d_CubeMapSide.hxx
// ./opencascade/Graphic3d_HorizontalTextAlignment.hxx
// ./opencascade/Graphic3d_PolygonOffset.hxx
// ./opencascade/Graphic3d_ZLayerId.hxx
// ./opencascade/Graphic3d_ShaderAttribute.hxx
// ./opencascade/Graphic3d_MutableIndexBuffer.hxx
// ./opencascade/Graphic3d_TypeOfBackfacingModel.hxx
// ./opencascade/Graphic3d_NameOfTexturePlane.hxx
// ./opencascade/Graphic3d_TransformPers.hxx
// ./opencascade/Graphic3d_WorldViewProjState.hxx
// ./opencascade/Graphic3d_ZLayerSettings.hxx
// ./opencascade/Graphic3d_TransModeFlags.hxx
// ./opencascade/Graphic3d_CubeMapOrder.hxx
// ./opencascade/Graphic3d_BndBox4d.hxx
// ./opencascade/Graphic3d_Buffer.hxx
// ./opencascade/Graphic3d_Structure.hxx
// ./opencascade/Graphic3d_LevelOfTextureAnisotropy.hxx
// ./opencascade/Graphic3d_ArrayOfQuadrangleStrips.hxx
// ./opencascade/Graphic3d_TypeOfReflection.hxx
// ./opencascade/Graphic3d_CappingFlags.hxx
// ./opencascade/Graphic3d_TypeOfLimit.hxx
// ./opencascade/Graphic3d_CLight.hxx
// ./opencascade/Graphic3d_ShaderObject.hxx
// ./opencascade/Graphic3d_BufferType.hxx
// ./opencascade/Graphic3d_TransformError.hxx
// ./opencascade/Graphic3d_AttribBuffer.hxx
// ./opencascade/Graphic3d_AspectMarker3d.hxx
// ./opencascade/Graphic3d_Aspects.hxx
// ./opencascade/Graphic3d_TypeOfAnswer.hxx
// ./opencascade/Graphic3d_SequenceOfHClipPlane.hxx
// ./opencascade/Graphic3d_ArrayOfQuadrangles.hxx
// ./opencascade/Graphic3d_Texture1D.hxx
// ./opencascade/Graphic3d_MapOfAspectsToAspects.hxx
// ./opencascade/Graphic3d_TypeOfConnection.hxx
// ./opencascade/Graphic3d_GroupDefinitionError.hxx
// ./opencascade/Graphic3d_MapOfZLayerSettings.hxx
// ./opencascade/Graphic3d_TextureRoot.hxx
// ./opencascade/Graphic3d_MapIteratorOfMapOfStructure.hxx
// ./opencascade/Graphic3d_ShaderProgram.hxx
// ./opencascade/Graphic3d_TypeOfBackground.hxx
// ./opencascade/Graphic3d_MediaTexture.hxx
// ./opencascade/Graphic3d_GraphicDriver.hxx
// ./opencascade/Graphic3d_HatchStyle.hxx
// ./opencascade/Graphic3d_NameOfTexture1D.hxx
// ./opencascade/Graphic3d_BufferRange.hxx
// ./opencascade/Graphic3d_ArrayOfTriangles.hxx
// ./opencascade/Graphic3d_LightSet.hxx
// ./opencascade/Graphic3d_AspectText3d.hxx
// ./opencascade/Graphic3d_StereoMode.hxx
// ./opencascade/Graphic3d_FrameStatsCounter.hxx
// ./opencascade/Graphic3d_ViewAffinity.hxx
// ./opencascade/Graphic3d_FrameStats.hxx
// ./opencascade/Graphic3d_Vec.hxx
// ./opencascade/Graphic3d_Mat4.hxx
// ./opencascade/Graphic3d_Camera.hxx
// ./opencascade/Graphic3d_TextPath.hxx
// ./opencascade/Graphic3d_Texture2Dmanual.hxx
// ./opencascade/Graphic3d_TypeOfShaderObject.hxx
// ./opencascade/Graphic3d_TextureSet.hxx
// ./opencascade/Graphic3d_FrameStatsTimer.hxx
// ./opencascade/Graphic3d_TextureEnv.hxx
// ./opencascade/Graphic3d_BndBox4f.hxx
// ./opencascade/Graphic3d_TypeOfShadingModel.hxx
// ./opencascade/Graphic3d_Texture1Dmanual.hxx
// ./opencascade/Graphic3d_TypeOfMaterial.hxx
// ./opencascade/Graphic3d_RenderingMode.hxx
// ./opencascade/Graphic3d_TypeOfLightSource.hxx
// ./opencascade/Graphic3d_CView.hxx
// ./opencascade/Graphic3d_CTexture.hxx
// ./opencascade/Graphic3d_NameOfTextureEnv.hxx
// ./opencascade/Graphic3d_Texture2Dplane.hxx
// ./opencascade/Graphic3d_BvhCStructureSetTrsfPers.hxx
// ./opencascade/Graphic3d_SequenceOfStructure.hxx
// ./opencascade/Graphic3d_ArrayOfPrimitives.hxx
// ./opencascade/Graphic3d_ClipPlane.hxx
// ./opencascade/Graphic3d_Layer.hxx
// ./opencascade/Graphic3d_TypeOfComposition.hxx
// ./opencascade/Graphic3d_IndexBuffer.hxx
// ./opencascade/Graphic3d_BSDF.hxx

// user-defined post

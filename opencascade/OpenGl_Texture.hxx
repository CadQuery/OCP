// Created by: Kirill GAVRILOV
// Copyright (c) 2013-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _OpenGl_Texture_H__
#define _OpenGl_Texture_H__

#include <Graphic3d_CubeMap.hxx>
#include <OpenGl_TextureFormat.hxx>
#include <OpenGl_NamedResource.hxx>
#include <OpenGl_Sampler.hxx>
#include <Graphic3d_TextureUnit.hxx>
#include <Graphic3d_TypeOfTexture.hxx>

class Graphic3d_TextureParams;
class Image_PixMap;

//! Texture resource.
class OpenGl_Texture : public OpenGl_NamedResource
{
  DEFINE_STANDARD_RTTIEXT(OpenGl_Texture, OpenGl_NamedResource)
public:

  //! Helpful constants
  static const GLuint NO_TEXTURE = 0;

  //! Return pixel size of pixel format in bytes.
  //! Note that this method considers that OpenGL natively supports this pixel format,
  //! which might be not the case - in the latter case, actual pixel size might differ!
  Standard_EXPORT static Standard_Size PixelSizeOfPixelFormat (Standard_Integer theInternalFormat);

public:

  //! Create uninitialized texture.
  Standard_EXPORT OpenGl_Texture (const TCollection_AsciiString& theResourceId = TCollection_AsciiString(),
                                  const Handle(Graphic3d_TextureParams)& theParams = Handle(Graphic3d_TextureParams)());

  //! Destroy object.
  Standard_EXPORT virtual ~OpenGl_Texture();

  //! @return true if current object was initialized
  bool IsValid() const { return myTextureId != NO_TEXTURE; }

  //! @return target to which the texture is bound (GL_TEXTURE_1D, GL_TEXTURE_2D)
  GLenum GetTarget() const { return myTarget; }

  //! @return texture width (0 LOD)
  GLsizei SizeX() const { return mySizeX; }

  //! @return texture height (0 LOD)
  GLsizei SizeY() const { return mySizeY; }

  //! @return texture ID
  GLuint TextureId() const { return myTextureId; }

  //! @return texture format (not sized)
  GLenum GetFormat() const { return myTextFormat; }
  
  //! @return texture format (sized)
  GLint SizedFormat() const { return mySizedFormat; }

  //! Return true for GL_RED and GL_ALPHA formats.
  bool IsAlpha() const { return myIsAlpha; }

  //! Setup to interpret the format as Alpha by Shader Manager
  //! (should be GL_ALPHA within compatible context or GL_RED otherwise).
  void SetAlpha (const bool theValue) { myIsAlpha = theValue; }

  //! Return if 2D surface is defined top-down (TRUE) or bottom-up (FALSE).
  //! Normally set from Image_PixMap::IsTopDown() within texture initialization.
  bool IsTopDown() const { return myIsTopDown; }

  //! Set if 2D surface is defined top-down (TRUE) or bottom-up (FALSE).
  void SetTopDown (bool theIsTopDown) { myIsTopDown = theIsTopDown; }

  //! Creates Texture id if not yet generated.
  //! Data should be initialized by another method.
  Standard_EXPORT bool Create (const Handle(OpenGl_Context)& theCtx);

  //! Destroy object - will release GPU memory if any.
  Standard_EXPORT virtual void Release (OpenGl_Context* theCtx) Standard_OVERRIDE;

  //! Return texture sampler.
  const Handle(OpenGl_Sampler)& Sampler() const { return mySampler; }

  //! Set texture sampler.
  void SetSampler (const Handle(OpenGl_Sampler)& theSampler) { mySampler = theSampler; }

  //! Initialize the Sampler Object (as OpenGL object).
  //! @param theCtx currently bound OpenGL context
  Standard_EXPORT bool InitSamplerObject (const Handle(OpenGl_Context)& theCtx);

  //! Bind this Texture to the unit specified in sampler parameters.
  //! Also binds Sampler Object if it is allocated.
  void Bind (const Handle(OpenGl_Context)& theCtx) const
  {
    Bind (theCtx, mySampler->Parameters()->TextureUnit());
  }

  //! Unbind texture from the unit specified in sampler parameters.
  //! Also unbinds Sampler Object if it is allocated.
  void Unbind (const Handle(OpenGl_Context)& theCtx) const
  {
    Unbind (theCtx, mySampler->Parameters()->TextureUnit());
  }

  //! Bind this Texture to specified unit.
  //! Also binds Sampler Object if it is allocated.
  Standard_EXPORT void Bind (const Handle(OpenGl_Context)& theCtx,
                             const Graphic3d_TextureUnit   theTextureUnit) const;

  //! Unbind texture from specified unit.
  //! Also unbinds Sampler Object if it is allocated.
  Standard_EXPORT void Unbind (const Handle(OpenGl_Context)& theCtx,
                               const Graphic3d_TextureUnit   theTextureUnit) const;

  //! Revision of associated data source.
  Standard_Size Revision() const { return myRevision; }

  //! Set revision of associated data source.
  void SetRevision (const Standard_Size theRevision) { myRevision = theRevision; }

  //! Notice that texture will be unbound after this call.
  Standard_EXPORT bool Init (const Handle(OpenGl_Context)& theCtx,
                             const Image_PixMap&           theImage,
                             const Graphic3d_TypeOfTexture theType,
                             const Standard_Boolean        theIsColorMap);

  //! Initialize the texture with specified format, size and texture type.
  //! If theImage is empty the texture data will contain trash.
  //! Notice that texture will be unbound after this call.
  Standard_EXPORT bool Init (const Handle(OpenGl_Context)& theCtx,
                             const OpenGl_TextureFormat&   theFormat,
                             const Graphic3d_Vec2i&        theSizeXY,
                             const Graphic3d_TypeOfTexture theType,
                             const Image_PixMap*           theImage = NULL);

  //! Initialize the texture with Graphic3d_TextureMap.
  //! It is an universal way to initialize.
  //! Suitable initialization method will be chosen.
  Standard_EXPORT bool Init (const Handle(OpenGl_Context)&       theCtx,
                             const Handle(Graphic3d_TextureMap)& theTextureMap);

  //! Initialize the texture with Image_CompressedPixMap.
  Standard_EXPORT bool InitCompressed (const Handle(OpenGl_Context)& theCtx,
                                       const Image_CompressedPixMap& theImage,
                                       const Standard_Boolean        theIsColorMap);

  //! Initialize the 2D multisampling texture using glTexImage2DMultisample().
  Standard_EXPORT bool Init2DMultisample (const Handle(OpenGl_Context)& theCtx,
                                          const GLsizei                 theNbSamples,
                                          const GLint                   theTextFormat,
                                          const GLsizei                 theSizeX,
                                          const GLsizei                 theSizeY);

  //! Allocates texture rectangle with specified format and size.
  //! \note Texture data is not initialized (will contain trash).
  Standard_EXPORT bool InitRectangle (const Handle(OpenGl_Context)& theCtx,
                                      const Standard_Integer        theSizeX,
                                      const Standard_Integer        theSizeY,
                                      const OpenGl_TextureFormat&   theFormat);

  //! Initializes 3D texture rectangle with specified format and size.
  Standard_EXPORT bool Init3D (const Handle(OpenGl_Context)& theCtx,
                               const OpenGl_TextureFormat&   theFormat,
                               const Graphic3d_Vec3i&        theSizeXYZ,
                               const void*                   thePixels);

  //! @return true if texture was generated within mipmaps
  Standard_Boolean HasMipmaps() const { return myMaxMipLevel > 0; }

  //! Return upper mipmap level index (0 means no mipmaps).
  Standard_Integer MaxMipmapLevel() const { return myMaxMipLevel; }

  //! Returns estimated GPU memory usage for holding data without considering overheads and allocation alignment rules.
  Standard_EXPORT virtual Standard_Size EstimatedDataSize() const Standard_OVERRIDE;

  //! Returns TRUE for point sprite texture.
  virtual bool IsPointSprite() const { return false; }

public:

  Standard_DEPRECATED("Deprecated method, OpenGl_TextureFormat::FindFormat() should be used instead")
  static bool GetDataFormat (const Handle(OpenGl_Context)& theCtx,
                             const Image_Format            theFormat,
                             GLint&                        theTextFormat,
                             GLenum&                       thePixelFormat,
                             GLenum&                       theDataType)
  {
    OpenGl_TextureFormat aFormat = OpenGl_TextureFormat::FindFormat (theCtx, theFormat, false);
    theTextFormat  = aFormat.InternalFormat();
    thePixelFormat = aFormat.PixelFormat();
    theDataType    = aFormat.DataType();
    return aFormat.IsValid();
  }

  Standard_DEPRECATED("Deprecated method, OpenGl_TextureFormat::FindFormat() should be used instead")
  static bool GetDataFormat (const Handle(OpenGl_Context)& theCtx,
                             const Image_PixMap&           theData,
                             GLint&                        theTextFormat,
                             GLenum&                       thePixelFormat,
                             GLenum&                       theDataType)
  {
    OpenGl_TextureFormat aFormat = OpenGl_TextureFormat::FindFormat (theCtx, theData.Format(), false);
    theTextFormat  = aFormat.InternalFormat();
    thePixelFormat = aFormat.PixelFormat();
    theDataType    = aFormat.DataType();
    return aFormat.IsValid();
  }

  Standard_DEPRECATED("Deprecated method, OpenGl_TextureFormat should be passed instead of separate parameters")
  bool Init (const Handle(OpenGl_Context)& theCtx,
             const GLint                   theTextFormat,
             const GLenum                  thePixelFormat,
             const GLenum                  theDataType,
             const GLsizei                 theSizeX,
             const GLsizei                 theSizeY,
             const Graphic3d_TypeOfTexture theType,
             const Image_PixMap*           theImage = NULL)
  {
    OpenGl_TextureFormat aFormat;
    aFormat.SetInternalFormat (theTextFormat);
    aFormat.SetPixelFormat (thePixelFormat);
    aFormat.SetDataType (theDataType);
    return Init (theCtx, aFormat, Graphic3d_Vec2i (theSizeX, theSizeY), theType, theImage);
  }

  Standard_DEPRECATED("Deprecated method, theIsColorMap parameter should be explicitly specified")
  bool Init (const Handle(OpenGl_Context)& theCtx,
             const Image_PixMap& theImage,
             const Graphic3d_TypeOfTexture theType)
  {
    return Init (theCtx, theImage, theType, true);
  }

  Standard_DEPRECATED("Deprecated method, OpenGl_TextureFormat should be passed instead of separate parameters")
  bool Init3D (const Handle(OpenGl_Context)& theCtx,
               const GLint  theTextFormat,
               const GLenum thePixelFormat,
               const GLenum theDataType,
               const Standard_Integer theSizeX,
               const Standard_Integer theSizeY,
               const Standard_Integer theSizeZ,
               const void* thePixels)
  {
    OpenGl_TextureFormat aFormat;
    aFormat.SetInternalFormat (theTextFormat);
    aFormat.SetPixelFormat (thePixelFormat);
    aFormat.SetDataType (theDataType);
    return Init3D (theCtx, aFormat, Graphic3d_Vec3i (theSizeX, theSizeY, theSizeZ), thePixels);
  }

  //! Initializes 6 sides of cubemap.
  //! If theCubeMap is not NULL then size and format will be taken from it and corresponding arguments will be ignored.
  //! Otherwise this parametres will be taken from arguments.
  //! @param theCtx         [in] active OpenGL context
  //! @param theCubeMap     [in] cubemap definition, can be NULL
  //! @param theSize        [in] cubemap dimensions
  //! @param theFormat      [in] image format
  //! @param theToGenMipmap [in] flag to generate mipmaped cubemap
  //! @param theIsColorMap  [in] flag indicating cubemap storing color values
  Standard_EXPORT bool InitCubeMap (const Handle(OpenGl_Context)&    theCtx,
                                    const Handle(Graphic3d_CubeMap)& theCubeMap,
                                    Standard_Size    theSize,
                                    Image_Format     theFormat,
                                    Standard_Boolean theToGenMipmap,
                                    Standard_Boolean theIsColorMap);

protected:

  //! Apply default sampler parameters after texture creation.
  Standard_EXPORT void applyDefaultSamplerParams (const Handle(OpenGl_Context)& theCtx);

protected:

  Handle(OpenGl_Sampler) mySampler; //!< texture sampler
  Standard_Size    myRevision;   //!< revision of associated data source
  GLuint           myTextureId;  //!< GL resource ID
  GLenum           myTarget;     //!< GL_TEXTURE_1D/GL_TEXTURE_2D/GL_TEXTURE_3D
  GLsizei          mySizeX;      //!< texture width
  GLsizei          mySizeY;      //!< texture height
  GLsizei          mySizeZ;      //!< texture depth
  GLenum           myTextFormat; //!< texture format - GL_RGB, GL_RGBA,...
  GLint            mySizedFormat;//!< internal (sized) texture format
  Standard_Integer myNbSamples;  //!< number of MSAA samples
  Standard_Integer myMaxMipLevel;//!< upper mipmap level index (0 means no mipmaps)
  bool             myIsAlpha;    //!< indicates alpha format
  bool             myIsTopDown;  //!< indicates if 2D surface is defined top-down (TRUE) or bottom-up (FALSE)

};

DEFINE_STANDARD_HANDLE(OpenGl_Texture, OpenGl_NamedResource)

#endif // _OpenGl_Texture_H__


// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Image_PixMap.hxx>

// module includes
#include <Image_AlienPixMap.hxx>
#include <Image_Color.hxx>
#include <Image_Diff.hxx>
#include <Image_Format.hxx>
#include <Image_PixMap.hxx>
#include <Image_PixMapData.hxx>
#include <Image_PixMapTypedData.hxx>
#include <Image_Texture.hxx>
#include <Image_VideoRecorder.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Image_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Image", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Image_Format>(m, "Image_Format",R"#(This enumeration defines packed image plane formats)#")
        .value("Image_Format_UNKNOWN",Image_Format::Image_Format_UNKNOWN)
        .value("Image_Format_Gray",Image_Format::Image_Format_Gray)
        .value("Image_Format_Alpha",Image_Format::Image_Format_Alpha)
        .value("Image_Format_RGB",Image_Format::Image_Format_RGB)
        .value("Image_Format_BGR",Image_Format::Image_Format_BGR)
        .value("Image_Format_RGB32",Image_Format::Image_Format_RGB32)
        .value("Image_Format_BGR32",Image_Format::Image_Format_BGR32)
        .value("Image_Format_RGBA",Image_Format::Image_Format_RGBA)
        .value("Image_Format_BGRA",Image_Format::Image_Format_BGRA)
        .value("Image_Format_GrayF",Image_Format::Image_Format_GrayF)
        .value("Image_Format_AlphaF",Image_Format::Image_Format_AlphaF)
        .value("Image_Format_RGBF",Image_Format::Image_Format_RGBF)
        .value("Image_Format_BGRF",Image_Format::Image_Format_BGRF)
        .value("Image_Format_RGBAF",Image_Format::Image_Format_RGBAF)
        .value("Image_Format_BGRAF",Image_Format::Image_Format_BGRAF).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<Image_ColorBGR , shared_ptr<Image_ColorBGR>  >(m,"Image_ColorBGR",R"#(POD structure for packed BGR color value (3 bytes))#");
    py::class_<Image_ColorBGR32 , shared_ptr<Image_ColorBGR32>  >(m,"Image_ColorBGR32",R"#(POD structure for packed BGR color value (4 bytes with extra byte for alignment))#");
    py::class_<Image_ColorBGRA , shared_ptr<Image_ColorBGRA>  >(m,"Image_ColorBGRA",R"#(POD structure for packed BGRA color value (4 bytes))#");
    py::class_<Image_ColorBGRAF , shared_ptr<Image_ColorBGRAF>  >(m,"Image_ColorBGRAF",R"#(POD structure for packed float BGRA color value (4 floats))#");
    py::class_<Image_ColorBGRF , shared_ptr<Image_ColorBGRF>  >(m,"Image_ColorBGRF",R"#(POD structure for packed BGR float color value (3 floats))#");
    py::class_<Image_ColorRGB , shared_ptr<Image_ColorRGB>  >(m,"Image_ColorRGB",R"#(POD structure for packed RGB color value (3 bytes))#");
    py::class_<Image_ColorRGB32 , shared_ptr<Image_ColorRGB32>  >(m,"Image_ColorRGB32",R"#(POD structure for packed RGB color value (4 bytes with extra byte for alignment))#");
    py::class_<Image_ColorRGBA , shared_ptr<Image_ColorRGBA>  >(m,"Image_ColorRGBA",R"#(POD structure for packed RGBA color value (4 bytes))#");
    py::class_<Image_ColorRGBAF , shared_ptr<Image_ColorRGBAF>  >(m,"Image_ColorRGBAF",R"#(POD structure for packed RGBA color value (4 floats))#");
    py::class_<Image_ColorRGBF , shared_ptr<Image_ColorRGBF>  >(m,"Image_ColorRGBF",R"#(POD structure for packed float RGB color value (3 floats))#");
    py::class_<Image_Diff ,opencascade::handle<Image_Diff>  , Standard_Transient >(m,"Image_Diff",R"#(This class compares two images pixel-by-pixel. It uses the following methods to ignore the difference between images: - Black/White comparison. It makes the images 2-colored before the comparison. - Equality with tolerance. Colors of two pixels are considered the same if the differnce of their color is less than a tolerance. - Border filter. The algorithm ignores alone independent pixels, which are different on both images, ignores the "border effect" - the difference caused by triangles located at angle about 0 or 90 degrees to the user.This class compares two images pixel-by-pixel. It uses the following methods to ignore the difference between images: - Black/White comparison. It makes the images 2-colored before the comparison. - Equality with tolerance. Colors of two pixels are considered the same if the differnce of their color is less than a tolerance. - Border filter. The algorithm ignores alone independent pixels, which are different on both images, ignores the "border effect" - the difference caused by triangles located at angle about 0 or 90 degrees to the user.)#");
    py::class_<Image_PixMap ,opencascade::handle<Image_PixMap>  , Standard_Transient >(m,"Image_PixMap",R"#(Class represents packed image plane.Class represents packed image plane.)#");
    py::class_<Image_PixMapData ,opencascade::handle<Image_PixMapData>  , NCollection_Buffer >(m,"Image_PixMapData",R"#(Structure to manage image buffer.Structure to manage image buffer.)#");
    py::class_<Image_Texture ,opencascade::handle<Image_Texture>  , Standard_Transient >(m,"Image_Texture",R"#(Texture image definition. The image can be stored as path to image file, as file path with the given offset and as a data buffer of encoded image.)#");
    py::class_<Image_VideoParams , shared_ptr<Image_VideoParams>  >(m,"Image_VideoParams",R"#(Auxiliary structure defining video parameters. Please refer to FFmpeg documentation for defining text values.)#");
    py::class_<Image_VideoRecorder ,opencascade::handle<Image_VideoRecorder>  , Standard_Transient >(m,"Image_VideoRecorder",R"#(Video recording tool based on FFmpeg framework.Video recording tool based on FFmpeg framework.)#");
    py::class_<Image_AlienPixMap ,opencascade::handle<Image_AlienPixMap>  , Image_PixMap >(m,"Image_AlienPixMap",R"#(Image class that support file reading/writing operations using auxiliary image library. Supported image formats: - *.bmp - bitmap image, lossless format without compression. - *.ppm - PPM (Portable Pixmap Format), lossless format without compression. - *.png - PNG (Portable Network Graphics) lossless format with compression. - *.jpg, *.jpe, *.jpeg - JPEG/JIFF (Joint Photographic Experts Group) lossy format (compressed with quality losses). YUV color space used (automatically converted from/to RGB). - *.tif, *.tiff - TIFF (Tagged Image File Format). - *.tga - TGA (Truevision Targa Graphic), lossless format. - *.gif - GIF (Graphical Interchange Format), lossy format. Color stored using palette (up to 256 distinct colors). - *.exr - OpenEXR high dynamic-range format (supports float pixel formats).Image class that support file reading/writing operations using auxiliary image library. Supported image formats: - *.bmp - bitmap image, lossless format without compression. - *.ppm - PPM (Portable Pixmap Format), lossless format without compression. - *.png - PNG (Portable Network Graphics) lossless format with compression. - *.jpg, *.jpe, *.jpeg - JPEG/JIFF (Joint Photographic Experts Group) lossy format (compressed with quality losses). YUV color space used (automatically converted from/to RGB). - *.tif, *.tiff - TIFF (Tagged Image File Format). - *.tga - TGA (Truevision Targa Graphic), lossless format. - *.gif - GIF (Graphical Interchange Format), lossy format. Color stored using palette (up to 256 distinct colors). - *.exr - OpenEXR high dynamic-range format (supports float pixel formats).)#");

};

// user-defined post-inclusion per module

// user-defined post

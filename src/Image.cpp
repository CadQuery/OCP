
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_AsciiString.hxx>

// module includes
#include <Image_AlienPixMap.hxx>
#include <Image_Color.hxx>
#include <Image_Diff.hxx>
#include <Image_Format.hxx>
#include <Image_PixMap.hxx>
#include <Image_PixMapData.hxx>
#include <Image_VideoRecorder.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Image(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Image"));


//Python trampoline classes

// classes


    static_cast<py::class_<Image_Diff ,opencascade::handle<Image_Diff>  , Standard_Transient >>(m.attr("Image_Diff"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (Standard_Boolean (Image_Diff::*)( const opencascade::handle<Image_PixMap> & ,  const opencascade::handle<Image_PixMap> & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (Image_Diff::*)( const opencascade::handle<Image_PixMap> & ,  const opencascade::handle<Image_PixMap> & ,  const Standard_Boolean  ) >(&Image_Diff::Init),
             R"#(Initialize algorithm by two images.)#"  , py::arg("theImageRef"),  py::arg("theImageNew"),  py::arg("theToBlackWhite")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Init",
             (Standard_Boolean (Image_Diff::*)( const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (Image_Diff::*)( const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const Standard_Boolean  ) >(&Image_Diff::Init),
             R"#(Initialize algorithm by two images (will be loaded from files).)#"  , py::arg("theImgPathRef"),  py::arg("theImgPathNew"),  py::arg("theToBlackWhite")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetColorTolerance",
             (void (Image_Diff::*)( const Standard_Real  ) ) static_cast<void (Image_Diff::*)( const Standard_Real  ) >(&Image_Diff::SetColorTolerance),
             R"#(Color tolerance for equality check. Should be within range 0..1: Corresponds to a difference between white and black colors (maximum difference). By default, the tolerance is equal to 0 thus equality check will return false for any different colors.)#"  , py::arg("theTolerance"))
        .def("ColorTolerance",
             (Standard_Real (Image_Diff::*)() const) static_cast<Standard_Real (Image_Diff::*)() const>(&Image_Diff::ColorTolerance),
             R"#(Color tolerance for equality check.)#" )
        .def("SetBorderFilterOn",
             (void (Image_Diff::*)( const Standard_Boolean  ) ) static_cast<void (Image_Diff::*)( const Standard_Boolean  ) >(&Image_Diff::SetBorderFilterOn),
             R"#(Sets taking into account (ignoring) a "border effect" on comparison of images. The border effect is caused by a border of shaded shapes in the viewer 3d. Triangles of this area are located at about 0 or 90 degrees to the user. Therefore, they deflect light differently according to implementation of a video card driver. This flag allows to detect such a "border" area and skip it from comparison of images. Filter turned OFF by default.)#"  , py::arg("theToIgnore"))
        .def("IsBorderFilterOn",
             (Standard_Boolean (Image_Diff::*)() const) static_cast<Standard_Boolean (Image_Diff::*)() const>(&Image_Diff::IsBorderFilterOn),
             R"#(Returns a flag of taking into account (ignoring) a border effect in comparison of images.)#" )
        .def("Compare",
             (Standard_Integer (Image_Diff::*)() ) static_cast<Standard_Integer (Image_Diff::*)() >(&Image_Diff::Compare),
             R"#(Compares two images. It returns a number of different pixels (or groups of pixels). It returns -1 if algorithm not initialized before.)#" )
        .def("SaveDiffImage",
             (Standard_Boolean (Image_Diff::*)( Image_PixMap &  ) const) static_cast<Standard_Boolean (Image_Diff::*)( Image_PixMap &  ) const>(&Image_Diff::SaveDiffImage),
             R"#(Saves a difference between two images as white pixels on black backgroud.)#"  , py::arg("theDiffImage"))
        .def("SaveDiffImage",
             (Standard_Boolean (Image_Diff::*)( const TCollection_AsciiString &  ) const) static_cast<Standard_Boolean (Image_Diff::*)( const TCollection_AsciiString &  ) const>(&Image_Diff::SaveDiffImage),
             R"#(Saves a difference between two images as white pixels on black backgroud.)#"  , py::arg("theDiffPath"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Image_Diff::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Image_Diff::*)() const>(&Image_Diff::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Image_Diff::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Image_Diff::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Image_PixMap ,opencascade::handle<Image_PixMap>  , Standard_Transient >>(m.attr("Image_PixMap"))
        .def(py::init<  >()  )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Image_PixMap::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Image_PixMap::*)() const>(&Image_PixMap::DynamicType),
             R"#(None)#" )
        .def("Format",
             (Image_Format (Image_PixMap::*)() const) static_cast<Image_Format (Image_PixMap::*)() const>(&Image_PixMap::Format),
             R"#(None)#" )
        .def("SetFormat",
             (void (Image_PixMap::*)( const Image_Format  ) ) static_cast<void (Image_PixMap::*)( const Image_Format  ) >(&Image_PixMap::SetFormat),
             R"#(Override pixel format specified by InitXXX() methods. Will throw exception if pixel size of new format is not equal to currently initialized format. Intended to switch formats indicating different interpretation of the same data (e.g. ImgGray and ImgAlpha).)#"  , py::arg("thePixelFormat"))
        .def("Width",
             (Standard_Size (Image_PixMap::*)() const) static_cast<Standard_Size (Image_PixMap::*)() const>(&Image_PixMap::Width),
             R"#(Returns image width in pixels)#" )
        .def("Height",
             (Standard_Size (Image_PixMap::*)() const) static_cast<Standard_Size (Image_PixMap::*)() const>(&Image_PixMap::Height),
             R"#(Returns image height in pixels)#" )
        .def("SizeX",
             (Standard_Size (Image_PixMap::*)() const) static_cast<Standard_Size (Image_PixMap::*)() const>(&Image_PixMap::SizeX),
             R"#(Returns image width in pixels)#" )
        .def("SizeY",
             (Standard_Size (Image_PixMap::*)() const) static_cast<Standard_Size (Image_PixMap::*)() const>(&Image_PixMap::SizeY),
             R"#(Returns image height in pixels)#" )
        .def("Ratio",
             (Standard_Real (Image_PixMap::*)() const) static_cast<Standard_Real (Image_PixMap::*)() const>(&Image_PixMap::Ratio),
             R"#(Returns width / height.)#" )
        .def("IsEmpty",
             (bool (Image_PixMap::*)() const) static_cast<bool (Image_PixMap::*)() const>(&Image_PixMap::IsEmpty),
             R"#(Returns true if data is NULL.)#" )
        .def("PixelColor",
             (Quantity_ColorRGBA (Image_PixMap::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Quantity_ColorRGBA (Image_PixMap::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Image_PixMap::PixelColor),
             R"#(Returns the pixel color. This function is relatively slow. Beware that this method takes coordinates in opposite order in contrast to ::Value() and ::ChangeValue().)#"  , py::arg("theX"),  py::arg("theY"))
        .def("SetPixelColor",
             (void (Image_PixMap::*)( const Standard_Integer ,  const Standard_Integer ,  const Quantity_Color &  ) ) static_cast<void (Image_PixMap::*)( const Standard_Integer ,  const Standard_Integer ,  const Quantity_Color &  ) >(&Image_PixMap::SetPixelColor),
             R"#(Sets the pixel color. This function is relatively slow. Beware that this method takes coordinates in opposite order in contrast to ::Value() and ::ChangeValue().)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theColor"))
        .def("SetPixelColor",
             (void (Image_PixMap::*)( const Standard_Integer ,  const Standard_Integer ,  const Quantity_ColorRGBA &  ) ) static_cast<void (Image_PixMap::*)( const Standard_Integer ,  const Standard_Integer ,  const Quantity_ColorRGBA &  ) >(&Image_PixMap::SetPixelColor),
             R"#(Sets the pixel color. This function is relatively slow. Beware that this method takes coordinates in opposite order in contrast to ::Value() and ::ChangeValue().)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theColor"))
        .def("InitWrapper",
             (bool (Image_PixMap::*)( Image_Format ,  Standard_Byte * ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size  ) ) static_cast<bool (Image_PixMap::*)( Image_Format ,  Standard_Byte * ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size  ) >(&Image_PixMap::InitWrapper),
             R"#(Initialize image plane as wrapper over alien data. Data will not be copied! Notice that caller should ensure that data pointer will not be released during this wrapper lifetime. You may call InitCopy() to perform data copying.)#"  , py::arg("thePixelFormat"),  py::arg("theDataPtr"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theSizeRowBytes")=static_cast<const Standard_Size>(0))
        .def("InitTrash",
             (bool (Image_PixMap::*)( Image_Format ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size  ) ) static_cast<bool (Image_PixMap::*)( Image_Format ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size  ) >(&Image_PixMap::InitTrash),
             R"#(Initialize image plane with required dimensions. Memory will be left uninitialized (performance trick).)#"  , py::arg("thePixelFormat"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theSizeRowBytes")=static_cast<const Standard_Size>(0))
        .def("InitCopy",
             (bool (Image_PixMap::*)( const Image_PixMap &  ) ) static_cast<bool (Image_PixMap::*)( const Image_PixMap &  ) >(&Image_PixMap::InitCopy),
             R"#(Initialize by copying data. If you want to copy alien data you should create wrapper using InitWrapper() before.)#"  , py::arg("theCopy"))
        .def("InitZero",
             (bool (Image_PixMap::*)( Image_Format ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size ,  const Standard_Byte  ) ) static_cast<bool (Image_PixMap::*)( Image_Format ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size ,  const Standard_Byte  ) >(&Image_PixMap::InitZero),
             R"#(Initialize image plane with required dimensions. Buffer will be zeroed (black color for most formats).)#"  , py::arg("thePixelFormat"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theSizeRowBytes")=static_cast<const Standard_Size>(0),  py::arg("theValue")=static_cast<const Standard_Byte>(0))
        .def("Clear",
             (void (Image_PixMap::*)() ) static_cast<void (Image_PixMap::*)() >(&Image_PixMap::Clear),
             R"#(Method correctly deallocate internal buffer.)#" )
        .def("IsTopDown",
             (bool (Image_PixMap::*)() const) static_cast<bool (Image_PixMap::*)() const>(&Image_PixMap::IsTopDown),
             R"#(Returns TRUE if image data is stored from Top to the Down. By default Bottom Up order is used instead (topmost scanlines starts from the bottom in memory). which is most image frameworks naturally support.)#" )
        .def("SetTopDown",
             (void (Image_PixMap::*)( const bool  ) ) static_cast<void (Image_PixMap::*)( const bool  ) >(&Image_PixMap::SetTopDown),
             R"#(Setup scanlines order in memory - top-down or bottom-up. Drawers should explicitly specify this value if current state IsTopDown() was ignored!)#"  , py::arg("theIsTopDown"))
        .def("TopDownInc",
             (Standard_Size (Image_PixMap::*)() const) static_cast<Standard_Size (Image_PixMap::*)() const>(&Image_PixMap::TopDownInc),
             R"#(Returns +1 if scanlines ordered in Top->Down order in memory and -1 otherwise.)#" )
        .def("Data",
             (const Standard_Byte * (Image_PixMap::*)() const) static_cast<const Standard_Byte * (Image_PixMap::*)() const>(&Image_PixMap::Data),
             R"#(Returns data pointer for low-level operations (copying entire buffer, parsing with extra tools etc.).)#" )
        .def("ChangeData",
             (Standard_Byte * (Image_PixMap::*)() ) static_cast<Standard_Byte * (Image_PixMap::*)() >(&Image_PixMap::ChangeData),
             R"#(Returns data pointer for low-level operations (copying entire buffer, parsing with extra tools etc.).)#" )
        .def("Row",
             (const Standard_Byte * (Image_PixMap::*)( const Standard_Size  ) const) static_cast<const Standard_Byte * (Image_PixMap::*)( const Standard_Size  ) const>(&Image_PixMap::Row),
             R"#(Returns data pointer to requested row (first column).)#"  , py::arg("theRow"))
        .def("ChangeRow",
             (Standard_Byte * (Image_PixMap::*)( const Standard_Size  ) ) static_cast<Standard_Byte * (Image_PixMap::*)( const Standard_Size  ) >(&Image_PixMap::ChangeRow),
             R"#(Returns data pointer to requested row (first column).)#"  , py::arg("theRow"))
        .def("SizePixelBytes",
             (Standard_Size (Image_PixMap::*)() const) static_cast<Standard_Size (Image_PixMap::*)() const>(&Image_PixMap::SizePixelBytes),
             R"#(Returns bytes reserved for one pixel (may include extra bytes for alignment).)#" )
        .def("SizeRowBytes",
             (Standard_Size (Image_PixMap::*)() const) static_cast<Standard_Size (Image_PixMap::*)() const>(&Image_PixMap::SizeRowBytes),
             R"#(Returns bytes reserved per row. Could be larger than needed to store packed row (extra bytes for alignment etc.).)#" )
        .def("RowExtraBytes",
             (Standard_Size (Image_PixMap::*)() const) static_cast<Standard_Size (Image_PixMap::*)() const>(&Image_PixMap::RowExtraBytes),
             R"#(Returns the extra bytes in the row.)#" )
        .def("MaxRowAligmentBytes",
             (Standard_Size (Image_PixMap::*)() const) static_cast<Standard_Size (Image_PixMap::*)() const>(&Image_PixMap::MaxRowAligmentBytes),
             R"#(Compute the maximal row alignment for current row size.)#" )
        .def("SizeBytes",
             (Standard_Size (Image_PixMap::*)() const) static_cast<Standard_Size (Image_PixMap::*)() const>(&Image_PixMap::SizeBytes),
             R"#(Returns buffer size)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Image_PixMap::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Image_PixMap::get_type_descriptor),
                    R"#(None)#" )
        .def_static("IsBigEndianHost_s",
                    (bool (*)() ) static_cast<bool (*)() >(&Image_PixMap::IsBigEndianHost),
                    R"#(Determine Big-Endian at runtime)#" )
        .def_static("SwapRgbaBgra_s",
                    (bool (*)( Image_PixMap &  ) ) static_cast<bool (*)( Image_PixMap &  ) >(&Image_PixMap::SwapRgbaBgra),
                    R"#(Auxiliary method for swapping bytes between RGB and BGR formats. This method modifies the image data but does not change pixel format! Method will fail if pixel format is not one of the following: - Image_Format_RGB32 / Image_Format_BGR32 - Image_Format_RGBA / Image_Format_BGRA - Image_Format_RGB / Image_Format_BGR - Image_Format_RGBF / Image_Format_BGRF - Image_Format_RGBAF / Image_Format_BGRAF)#"  , py::arg("theImage"))
        .def_static("ToBlackWhite_s",
                    (void (*)( Image_PixMap &  ) ) static_cast<void (*)( Image_PixMap &  ) >(&Image_PixMap::ToBlackWhite),
                    R"#(Convert image to Black/White.)#"  , py::arg("theImage"))
        .def_static("SizePixelBytes_s",
                    (Standard_Size (*)( const Image_Format  ) ) static_cast<Standard_Size (*)( const Image_Format  ) >(&Image_PixMap::SizePixelBytes),
                    R"#(Returns bytes reserved for one pixel (may include extra bytes for alignment).)#"  , py::arg("thePixelFormat"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Image_PixMapData ,opencascade::handle<Image_PixMapData>  , NCollection_Buffer >>(m.attr("Image_PixMapData"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (Image_PixMapData::*)( const opencascade::handle<NCollection_BaseAllocator> & ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size ,  Standard_Byte *  ) ) static_cast<void (Image_PixMapData::*)( const opencascade::handle<NCollection_BaseAllocator> & ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size ,  Standard_Byte *  ) >(&Image_PixMapData::Init),
             R"#(Initializer.)#"  , py::arg("theAlloc"),  py::arg("theSizeBPP"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theSizeRowBytes"),  py::arg("theDataPtr"))
        .def("Row",
             (const Standard_Byte * (Image_PixMapData::*)( const Standard_Size  ) const) static_cast<const Standard_Byte * (Image_PixMapData::*)( const Standard_Size  ) const>(&Image_PixMapData::Row),
             R"#(Returns data pointer to requested row (first column).)#"  , py::arg("theRow"))
        .def("ChangeRow",
             (Standard_Byte * (Image_PixMapData::*)( const Standard_Size  ) ) static_cast<Standard_Byte * (Image_PixMapData::*)( const Standard_Size  ) >(&Image_PixMapData::ChangeRow),
             R"#(Returns data pointer to requested row (first column).)#"  , py::arg("theRow"))
        .def("Value",
             (const Standard_Byte * (Image_PixMapData::*)( const Standard_Size ,  const Standard_Size  ) const) static_cast<const Standard_Byte * (Image_PixMapData::*)( const Standard_Size ,  const Standard_Size  ) const>(&Image_PixMapData::Value),
             R"#(Returns data pointer to requested position.)#"  , py::arg("theRow"),  py::arg("theCol"))
        .def("ChangeValue",
             (Standard_Byte * (Image_PixMapData::*)( const Standard_Size ,  const Standard_Size  ) ) static_cast<Standard_Byte * (Image_PixMapData::*)( const Standard_Size ,  const Standard_Size  ) >(&Image_PixMapData::ChangeValue),
             R"#(Returns data pointer to requested position.)#"  , py::arg("theRow"),  py::arg("theCol"))
        .def("MaxRowAligmentBytes",
             (Standard_Size (Image_PixMapData::*)() const) static_cast<Standard_Size (Image_PixMapData::*)() const>(&Image_PixMapData::MaxRowAligmentBytes),
             R"#(Compute the maximal row alignment for current row size.)#" )
        .def("SetTopDown",
             (void (Image_PixMapData::*)( const bool  ) ) static_cast<void (Image_PixMapData::*)( const bool  ) >(&Image_PixMapData::SetTopDown),
             R"#(Setup scanlines order in memory - top-down or bottom-up. Drawers should explicitly specify this value if current state IsTopDown() was ignored!)#"  , py::arg("theIsTopDown"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Image_PixMapData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Image_PixMapData::*)() const>(&Image_PixMapData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Image_PixMapData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Image_PixMapData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Image_VideoRecorder ,opencascade::handle<Image_VideoRecorder>  , Standard_Transient >>(m.attr("Image_VideoRecorder"))
        .def(py::init<  >()  )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Image_VideoRecorder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Image_VideoRecorder::*)() const>(&Image_VideoRecorder::DynamicType),
             R"#(None)#" )
        .def("Close",
             (void (Image_VideoRecorder::*)() ) static_cast<void (Image_VideoRecorder::*)() >(&Image_VideoRecorder::Close),
             R"#(Close the stream - stop recorder.)#" )
        .def("Open",
             (Standard_Boolean (Image_VideoRecorder::*)( const char * ,  const Image_VideoParams &  ) ) static_cast<Standard_Boolean (Image_VideoRecorder::*)( const char * ,  const Image_VideoParams &  ) >(&Image_VideoRecorder::Open),
             R"#(Open output stream - initialize recorder.)#"  , py::arg("theFileName"),  py::arg("theParams"))
        .def("ChangeFrame",
             (Image_PixMap & (Image_VideoRecorder::*)() ) static_cast<Image_PixMap & (Image_VideoRecorder::*)() >(&Image_VideoRecorder::ChangeFrame),
             R"#(Access RGBA frame, should NOT be re-initialized outside. Note that image is expected to have upper-left origin.)#" )
        .def("FrameCount",
             (int64_t (Image_VideoRecorder::*)() const) static_cast<int64_t (Image_VideoRecorder::*)() const>(&Image_VideoRecorder::FrameCount),
             R"#(Return current frame index.)#" )
        .def("PushFrame",
             (Standard_Boolean (Image_VideoRecorder::*)() ) static_cast<Standard_Boolean (Image_VideoRecorder::*)() >(&Image_VideoRecorder::PushFrame),
             R"#(Push new frame, should be called after Open().)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Image_VideoRecorder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Image_VideoRecorder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Image_AlienPixMap ,opencascade::handle<Image_AlienPixMap>  , Image_PixMap >>(m.attr("Image_AlienPixMap"))
        .def(py::init<  >()  )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Image_AlienPixMap::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Image_AlienPixMap::*)() const>(&Image_AlienPixMap::DynamicType),
             R"#(None)#" )
        .def("Load",
             (bool (Image_AlienPixMap::*)( const TCollection_AsciiString &  ) ) static_cast<bool (Image_AlienPixMap::*)( const TCollection_AsciiString &  ) >(&Image_AlienPixMap::Load),
             R"#(Read image data from file.)#"  , py::arg("theFileName"))
        .def("Save",
             (bool (Image_AlienPixMap::*)( const TCollection_AsciiString &  ) ) static_cast<bool (Image_AlienPixMap::*)( const TCollection_AsciiString &  ) >(&Image_AlienPixMap::Save),
             R"#(Write image data to file using file extension to determine compression format.)#"  , py::arg("theFileName"))
        .def("InitTrash",
             (bool (Image_AlienPixMap::*)( Image_Format ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size  ) ) static_cast<bool (Image_AlienPixMap::*)( Image_Format ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size  ) >(&Image_AlienPixMap::InitTrash),
             R"#(Initialize image plane with required dimensions. thePixelFormat - if specified pixel format doesn't supported by image library than nearest supported will be used instead! theSizeRowBytes - may be ignored by this class and required alignemnt will be used instead!)#"  , py::arg("thePixelFormat"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theSizeRowBytes")=static_cast<const Standard_Size>(0))
        .def("InitCopy",
             (bool (Image_AlienPixMap::*)( const Image_PixMap &  ) ) static_cast<bool (Image_AlienPixMap::*)( const Image_PixMap &  ) >(&Image_AlienPixMap::InitCopy),
             R"#(Initialize by copying data.)#"  , py::arg("theCopy"))
        .def("Clear",
             (void (Image_AlienPixMap::*)() ) static_cast<void (Image_AlienPixMap::*)() >(&Image_AlienPixMap::Clear),
             R"#(Method correctly deallocate internal buffer.)#" )
        .def("AdjustGamma",
             (bool (Image_AlienPixMap::*)( const Standard_Real  ) ) static_cast<bool (Image_AlienPixMap::*)( const Standard_Real  ) >(&Image_AlienPixMap::AdjustGamma),
             R"#(Performs gamma correction on image. theGamma - gamma value to use; a value of 1.0 leaves the image alone)#"  , py::arg("theGammaCorr"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Image_AlienPixMap::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Image_AlienPixMap::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/Image_Format.hxx
// ./opencascade/Image_Color.hxx
// ./opencascade/Image_PixMap.hxx
// ./opencascade/Image_PixMapData.hxx
// ./opencascade/Image_Diff.hxx
// ./opencascade/Image_VideoRecorder.hxx
// ./opencascade/Image_AlienPixMap.hxx

// operators
    m.def("__add__", 
          (Image_ColorRGB (*)( const Image_ColorRGB & ,  const Image_ColorRGB &  ))  static_cast<Image_ColorRGB (*)( const Image_ColorRGB & ,  const Image_ColorRGB &  )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__add__", 
          (Image_ColorBGR (*)( const Image_ColorBGR & ,  const Image_ColorBGR &  ))  static_cast<Image_ColorBGR (*)( const Image_ColorBGR & ,  const Image_ColorBGR &  )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__add__", 
          (Image_ColorRGBF (*)( const Image_ColorRGBF & ,  const Image_ColorRGBF &  ))  static_cast<Image_ColorRGBF (*)( const Image_ColorRGBF & ,  const Image_ColorRGBF &  )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__add__", 
          (Image_ColorBGRF (*)( const Image_ColorBGRF & ,  const Image_ColorBGRF &  ))  static_cast<Image_ColorBGRF (*)( const Image_ColorBGRF & ,  const Image_ColorBGRF &  )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__add__", 
          (Image_ColorRGBA (*)( const Image_ColorRGBA & ,  const Image_ColorRGBA &  ))  static_cast<Image_ColorRGBA (*)( const Image_ColorRGBA & ,  const Image_ColorRGBA &  )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__add__", 
          (Image_ColorBGRA (*)( const Image_ColorBGRA & ,  const Image_ColorBGRA &  ))  static_cast<Image_ColorBGRA (*)( const Image_ColorBGRA & ,  const Image_ColorBGRA &  )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__add__", 
          (Image_ColorRGB32 (*)( const Image_ColorRGB32 & ,  const Image_ColorRGB32 &  ))  static_cast<Image_ColorRGB32 (*)( const Image_ColorRGB32 & ,  const Image_ColorRGB32 &  )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__add__", 
          (Image_ColorBGR32 (*)( const Image_ColorBGR32 & ,  const Image_ColorBGR32 &  ))  static_cast<Image_ColorBGR32 (*)( const Image_ColorBGR32 & ,  const Image_ColorBGR32 &  )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__add__", 
          (Image_ColorRGBAF (*)( const Image_ColorRGBAF & ,  const Image_ColorRGBAF &  ))  static_cast<Image_ColorRGBAF (*)( const Image_ColorRGBAF & ,  const Image_ColorRGBAF &  )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__add__", 
          (Image_ColorBGRAF (*)( const Image_ColorBGRAF & ,  const Image_ColorBGRAF &  ))  static_cast<Image_ColorBGRAF (*)( const Image_ColorBGRAF & ,  const Image_ColorBGRAF &  )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__sub__", 
          (Image_ColorRGB (*)( const Image_ColorRGB & ,  const Image_ColorRGB &  ))  static_cast<Image_ColorRGB (*)( const Image_ColorRGB & ,  const Image_ColorRGB &  )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__sub__", 
          (Image_ColorBGR (*)( const Image_ColorBGR & ,  const Image_ColorBGR &  ))  static_cast<Image_ColorBGR (*)( const Image_ColorBGR & ,  const Image_ColorBGR &  )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__sub__", 
          (Image_ColorRGBF (*)( const Image_ColorRGBF & ,  const Image_ColorRGBF &  ))  static_cast<Image_ColorRGBF (*)( const Image_ColorRGBF & ,  const Image_ColorRGBF &  )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__sub__", 
          (Image_ColorBGRF (*)( const Image_ColorBGRF & ,  const Image_ColorBGRF &  ))  static_cast<Image_ColorBGRF (*)( const Image_ColorBGRF & ,  const Image_ColorBGRF &  )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__sub__", 
          (Image_ColorRGBA (*)( const Image_ColorRGBA & ,  const Image_ColorRGBA &  ))  static_cast<Image_ColorRGBA (*)( const Image_ColorRGBA & ,  const Image_ColorRGBA &  )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__sub__", 
          (Image_ColorBGRA (*)( const Image_ColorBGRA & ,  const Image_ColorBGRA &  ))  static_cast<Image_ColorBGRA (*)( const Image_ColorBGRA & ,  const Image_ColorBGRA &  )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__sub__", 
          (Image_ColorRGB32 (*)( const Image_ColorRGB32 & ,  const Image_ColorRGB32 &  ))  static_cast<Image_ColorRGB32 (*)( const Image_ColorRGB32 & ,  const Image_ColorRGB32 &  )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__sub__", 
          (Image_ColorBGR32 (*)( const Image_ColorBGR32 & ,  const Image_ColorBGR32 &  ))  static_cast<Image_ColorBGR32 (*)( const Image_ColorBGR32 & ,  const Image_ColorBGR32 &  )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__sub__", 
          (Image_ColorRGBAF (*)( const Image_ColorRGBAF & ,  const Image_ColorRGBAF &  ))  static_cast<Image_ColorRGBAF (*)( const Image_ColorRGBAF & ,  const Image_ColorRGBAF &  )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));
    m.def("__sub__", 
          (Image_ColorBGRAF (*)( const Image_ColorBGRAF & ,  const Image_ColorBGRAF &  ))  static_cast<Image_ColorBGRAF (*)( const Image_ColorBGRAF & ,  const Image_ColorBGRAF &  )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("theA"),  py::arg("theB"));

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

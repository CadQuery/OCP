#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Image_PixMap.hxx>

// module includes
#include <Image_PixMapTypedData.hxx>
#include <Image_Format.hxx>
#include <Image_VideoRecorder.hxx>
#include <Image_Color.hxx>
#include <Image_Texture.hxx>
#include <Image_PixMapData.hxx>
#include <Image_PixMap.hxx>
#include <Image_AlienPixMap.hxx>
#include <Image_Diff.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Image_PixMapTypedData.hxx

template <typename PixelType_t>
void preregister_template_Image_PixMapTypedData(py::object &m, const char *name){
    py::class_<Image_PixMapTypedData<PixelType_t> , shared_ptr<Image_PixMapTypedData<PixelType_t>> >(m,name,R"#(Structure to manage image buffer with predefined pixel type.)#");
}

template <typename PixelType_t>
void register_template_Image_PixMapTypedData(py::object &m, const char *name){
    static_cast<py::class_<Image_PixMapTypedData<PixelType_t> , shared_ptr<Image_PixMapTypedData<PixelType_t>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Init",
             (bool (Image_PixMapTypedData<PixelType_t>::*)( const opencascade::handle<NCollection_BaseAllocator> & , Standard_Size , Standard_Size , Standard_Size , Standard_Byte * ) ) &Image_PixMapTypedData<PixelType_t>::Init,
             R"#(Initializer.)#"  , py::arg("theAlloc"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theSizeRowBytes")=static_cast<Standard_Size>(0),  py::arg("theDataPtr")=static_cast<Standard_Byte *>(0))
        .def("Init",
             (void (Image_PixMapTypedData<PixelType_t>::*)( const PixelType_t & ) ) &Image_PixMapTypedData<PixelType_t>::Init,
             R"#(Reset all values to specified one.)#"  , py::arg("theValue"))
        .def("Row",
             (const PixelType_t * (Image_PixMapTypedData<PixelType_t>::*)( Standard_Size ) const) &Image_PixMapTypedData<PixelType_t>::Row,
             R"#(Returns data pointer to requested row (first column).)#"  , py::arg("theRow"))
        .def("ChangeRow",
             (PixelType_t * (Image_PixMapTypedData<PixelType_t>::*)( Standard_Size ) ) &Image_PixMapTypedData<PixelType_t>::ChangeRow,
             R"#(Returns data pointer to requested row (first column).)#"  , py::arg("theRow"))
        .def("Value",
             (const PixelType_t & (Image_PixMapTypedData<PixelType_t>::*)( Standard_Size , Standard_Size ) const) &Image_PixMapTypedData<PixelType_t>::Value,
             R"#(Returns data pointer to requested position.)#"  , py::arg("theRow"),  py::arg("theCol"))
        .def("ChangeValue",
             (PixelType_t & (Image_PixMapTypedData<PixelType_t>::*)( Standard_Size , Standard_Size ) ) &Image_PixMapTypedData<PixelType_t>::ChangeValue,
             R"#(Returns data pointer to requested position.)#"  , py::arg("theRow"),  py::arg("theCol"))
    ;
};
// ./opencascade/Image_Format.hxx
// ./opencascade/Image_VideoRecorder.hxx
// ./opencascade/Image_Color.hxx
// ./opencascade/Image_Texture.hxx
// ./opencascade/Image_PixMapData.hxx
// ./opencascade/Image_PixMap.hxx
// ./opencascade/Image_AlienPixMap.hxx
// ./opencascade/Image_Diff.hxx

// user-defined post

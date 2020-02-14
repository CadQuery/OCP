
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


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
void register_Image(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Image"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<Image_ColorBGR , shared_ptr<Image_ColorBGR>>(m,"Image_ColorBGR");

    static_cast<py::class_<Image_ColorBGR , shared_ptr<Image_ColorBGR>  >>(m.attr("Image_ColorBGR"))
    // constructors
    // custom constructors
    // methods
        .def("r",
             (Standard_Byte (Image_ColorBGR::*)() const) static_cast<Standard_Byte (Image_ColorBGR::*)() const>(&Image_ColorBGR::r),
             R"#(Alias to 3rd component (red intensity).)#" )
        .def("g",
             (Standard_Byte (Image_ColorBGR::*)() const) static_cast<Standard_Byte (Image_ColorBGR::*)() const>(&Image_ColorBGR::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_Byte (Image_ColorBGR::*)() const) static_cast<Standard_Byte (Image_ColorBGR::*)() const>(&Image_ColorBGR::b),
             R"#(Alias to 1st component (blue intensity).)#" )
        .def("r",
             (Standard_Byte & (Image_ColorBGR::*)() ) static_cast<Standard_Byte & (Image_ColorBGR::*)() >(&Image_ColorBGR::r),
             R"#(Alias to 3rd component (red intensity).)#" )
        .def("g",
             (Standard_Byte & (Image_ColorBGR::*)() ) static_cast<Standard_Byte & (Image_ColorBGR::*)() >(&Image_ColorBGR::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_Byte & (Image_ColorBGR::*)() ) static_cast<Standard_Byte & (Image_ColorBGR::*)() >(&Image_ColorBGR::b),
             R"#(Alias to 1st component (blue intensity).)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Length_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Image_ColorBGR::Length),
                    R"#(Returns the number of components.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Image_ColorBGR32 , shared_ptr<Image_ColorBGR32>>(m,"Image_ColorBGR32");

    static_cast<py::class_<Image_ColorBGR32 , shared_ptr<Image_ColorBGR32>  >>(m.attr("Image_ColorBGR32"))
    // constructors
    // custom constructors
    // methods
        .def("r",
             (Standard_Byte (Image_ColorBGR32::*)() const) static_cast<Standard_Byte (Image_ColorBGR32::*)() const>(&Image_ColorBGR32::r),
             R"#(Alias to 3rd component (red intensity).)#" )
        .def("g",
             (Standard_Byte (Image_ColorBGR32::*)() const) static_cast<Standard_Byte (Image_ColorBGR32::*)() const>(&Image_ColorBGR32::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_Byte (Image_ColorBGR32::*)() const) static_cast<Standard_Byte (Image_ColorBGR32::*)() const>(&Image_ColorBGR32::b),
             R"#(Alias to 1st component (blue intensity).)#" )
        .def("a_",
             (Standard_Byte (Image_ColorBGR32::*)() const) static_cast<Standard_Byte (Image_ColorBGR32::*)() const>(&Image_ColorBGR32::a_),
             R"#(Alias to 4th component (dummy).)#" )
        .def("r",
             (Standard_Byte & (Image_ColorBGR32::*)() ) static_cast<Standard_Byte & (Image_ColorBGR32::*)() >(&Image_ColorBGR32::r),
             R"#(Alias to 3rd component (red intensity).)#" )
        .def("g",
             (Standard_Byte & (Image_ColorBGR32::*)() ) static_cast<Standard_Byte & (Image_ColorBGR32::*)() >(&Image_ColorBGR32::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_Byte & (Image_ColorBGR32::*)() ) static_cast<Standard_Byte & (Image_ColorBGR32::*)() >(&Image_ColorBGR32::b),
             R"#(Alias to 1st component (blue intensity).)#" )
        .def("a_",
             (Standard_Byte & (Image_ColorBGR32::*)() ) static_cast<Standard_Byte & (Image_ColorBGR32::*)() >(&Image_ColorBGR32::a_),
             R"#(Alias to 4th component (dummy).)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Length_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Image_ColorBGR32::Length),
                    R"#(Returns the number of components.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Image_ColorBGRA , shared_ptr<Image_ColorBGRA>>(m,"Image_ColorBGRA");

    static_cast<py::class_<Image_ColorBGRA , shared_ptr<Image_ColorBGRA>  >>(m.attr("Image_ColorBGRA"))
    // constructors
    // custom constructors
    // methods
        .def("r",
             (Standard_Byte (Image_ColorBGRA::*)() const) static_cast<Standard_Byte (Image_ColorBGRA::*)() const>(&Image_ColorBGRA::r),
             R"#(Alias to 3rd component (red intensity).)#" )
        .def("g",
             (Standard_Byte (Image_ColorBGRA::*)() const) static_cast<Standard_Byte (Image_ColorBGRA::*)() const>(&Image_ColorBGRA::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_Byte (Image_ColorBGRA::*)() const) static_cast<Standard_Byte (Image_ColorBGRA::*)() const>(&Image_ColorBGRA::b),
             R"#(Alias to 1st component (blue intensity).)#" )
        .def("a",
             (Standard_Byte (Image_ColorBGRA::*)() const) static_cast<Standard_Byte (Image_ColorBGRA::*)() const>(&Image_ColorBGRA::a),
             R"#(Alias to 4th component (alpha value).)#" )
        .def("r",
             (Standard_Byte & (Image_ColorBGRA::*)() ) static_cast<Standard_Byte & (Image_ColorBGRA::*)() >(&Image_ColorBGRA::r),
             R"#(Alias to 3rd component (red intensity).)#" )
        .def("g",
             (Standard_Byte & (Image_ColorBGRA::*)() ) static_cast<Standard_Byte & (Image_ColorBGRA::*)() >(&Image_ColorBGRA::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_Byte & (Image_ColorBGRA::*)() ) static_cast<Standard_Byte & (Image_ColorBGRA::*)() >(&Image_ColorBGRA::b),
             R"#(Alias to 1st component (blue intensity).)#" )
        .def("a",
             (Standard_Byte & (Image_ColorBGRA::*)() ) static_cast<Standard_Byte & (Image_ColorBGRA::*)() >(&Image_ColorBGRA::a),
             R"#(Alias to 4th component (alpha value).)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Length_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Image_ColorBGRA::Length),
                    R"#(Returns the number of components.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Image_ColorBGRAF , shared_ptr<Image_ColorBGRAF>>(m,"Image_ColorBGRAF");

    static_cast<py::class_<Image_ColorBGRAF , shared_ptr<Image_ColorBGRAF>  >>(m.attr("Image_ColorBGRAF"))
    // constructors
    // custom constructors
    // methods
        .def("r",
             (Standard_ShortReal (Image_ColorBGRAF::*)() const) static_cast<Standard_ShortReal (Image_ColorBGRAF::*)() const>(&Image_ColorBGRAF::r),
             R"#(Alias to 3rd component (red intensity).)#" )
        .def("g",
             (Standard_ShortReal (Image_ColorBGRAF::*)() const) static_cast<Standard_ShortReal (Image_ColorBGRAF::*)() const>(&Image_ColorBGRAF::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_ShortReal (Image_ColorBGRAF::*)() const) static_cast<Standard_ShortReal (Image_ColorBGRAF::*)() const>(&Image_ColorBGRAF::b),
             R"#(Alias to 1st component (blue intensity).)#" )
        .def("a",
             (Standard_ShortReal (Image_ColorBGRAF::*)() const) static_cast<Standard_ShortReal (Image_ColorBGRAF::*)() const>(&Image_ColorBGRAF::a),
             R"#(Alias to 4th component (alpha value).)#" )
        .def("r",
             (Standard_ShortReal & (Image_ColorBGRAF::*)() ) static_cast<Standard_ShortReal & (Image_ColorBGRAF::*)() >(&Image_ColorBGRAF::r),
             R"#(Alias to 3rd component (red intensity).)#" )
        .def("g",
             (Standard_ShortReal & (Image_ColorBGRAF::*)() ) static_cast<Standard_ShortReal & (Image_ColorBGRAF::*)() >(&Image_ColorBGRAF::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_ShortReal & (Image_ColorBGRAF::*)() ) static_cast<Standard_ShortReal & (Image_ColorBGRAF::*)() >(&Image_ColorBGRAF::b),
             R"#(Alias to 1st component (blue intensity).)#" )
        .def("a",
             (Standard_ShortReal & (Image_ColorBGRAF::*)() ) static_cast<Standard_ShortReal & (Image_ColorBGRAF::*)() >(&Image_ColorBGRAF::a),
             R"#(Alias to 4th component (alpha value).)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Length_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Image_ColorBGRAF::Length),
                    R"#(Returns the number of components.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Image_ColorBGRF , shared_ptr<Image_ColorBGRF>>(m,"Image_ColorBGRF");

    static_cast<py::class_<Image_ColorBGRF , shared_ptr<Image_ColorBGRF>  >>(m.attr("Image_ColorBGRF"))
    // constructors
    // custom constructors
    // methods
        .def("r",
             (Standard_ShortReal (Image_ColorBGRF::*)() const) static_cast<Standard_ShortReal (Image_ColorBGRF::*)() const>(&Image_ColorBGRF::r),
             R"#(Alias to 3rd component (red intensity).)#" )
        .def("g",
             (Standard_ShortReal (Image_ColorBGRF::*)() const) static_cast<Standard_ShortReal (Image_ColorBGRF::*)() const>(&Image_ColorBGRF::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_ShortReal (Image_ColorBGRF::*)() const) static_cast<Standard_ShortReal (Image_ColorBGRF::*)() const>(&Image_ColorBGRF::b),
             R"#(Alias to 1st component (blue intensity).)#" )
        .def("r",
             (Standard_ShortReal & (Image_ColorBGRF::*)() ) static_cast<Standard_ShortReal & (Image_ColorBGRF::*)() >(&Image_ColorBGRF::r),
             R"#(Alias to 3rd component (red intensity).)#" )
        .def("g",
             (Standard_ShortReal & (Image_ColorBGRF::*)() ) static_cast<Standard_ShortReal & (Image_ColorBGRF::*)() >(&Image_ColorBGRF::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_ShortReal & (Image_ColorBGRF::*)() ) static_cast<Standard_ShortReal & (Image_ColorBGRF::*)() >(&Image_ColorBGRF::b),
             R"#(Alias to 1st component (blue intensity).)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Length_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Image_ColorBGRF::Length),
                    R"#(Returns the number of components.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Image_ColorRGB , shared_ptr<Image_ColorRGB>>(m,"Image_ColorRGB");

    static_cast<py::class_<Image_ColorRGB , shared_ptr<Image_ColorRGB>  >>(m.attr("Image_ColorRGB"))
    // constructors
    // custom constructors
    // methods
        .def("r",
             (Standard_Byte (Image_ColorRGB::*)() const) static_cast<Standard_Byte (Image_ColorRGB::*)() const>(&Image_ColorRGB::r),
             R"#(Alias to 1st component (red intensity).)#" )
        .def("g",
             (Standard_Byte (Image_ColorRGB::*)() const) static_cast<Standard_Byte (Image_ColorRGB::*)() const>(&Image_ColorRGB::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_Byte (Image_ColorRGB::*)() const) static_cast<Standard_Byte (Image_ColorRGB::*)() const>(&Image_ColorRGB::b),
             R"#(Alias to 3rd component (blue intensity).)#" )
        .def("r",
             (Standard_Byte & (Image_ColorRGB::*)() ) static_cast<Standard_Byte & (Image_ColorRGB::*)() >(&Image_ColorRGB::r),
             R"#(Alias to 1st component (red intensity).)#" )
        .def("g",
             (Standard_Byte & (Image_ColorRGB::*)() ) static_cast<Standard_Byte & (Image_ColorRGB::*)() >(&Image_ColorRGB::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_Byte & (Image_ColorRGB::*)() ) static_cast<Standard_Byte & (Image_ColorRGB::*)() >(&Image_ColorRGB::b),
             R"#(Alias to 3rd component (blue intensity).)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Length_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Image_ColorRGB::Length),
                    R"#(Returns the number of components.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Image_ColorRGB32 , shared_ptr<Image_ColorRGB32>>(m,"Image_ColorRGB32");

    static_cast<py::class_<Image_ColorRGB32 , shared_ptr<Image_ColorRGB32>  >>(m.attr("Image_ColorRGB32"))
    // constructors
    // custom constructors
    // methods
        .def("r",
             (Standard_Byte (Image_ColorRGB32::*)() const) static_cast<Standard_Byte (Image_ColorRGB32::*)() const>(&Image_ColorRGB32::r),
             R"#(Alias to 1st component (red intensity).)#" )
        .def("g",
             (Standard_Byte (Image_ColorRGB32::*)() const) static_cast<Standard_Byte (Image_ColorRGB32::*)() const>(&Image_ColorRGB32::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_Byte (Image_ColorRGB32::*)() const) static_cast<Standard_Byte (Image_ColorRGB32::*)() const>(&Image_ColorRGB32::b),
             R"#(Alias to 3rd component (blue intensity).)#" )
        .def("a_",
             (Standard_Byte (Image_ColorRGB32::*)() const) static_cast<Standard_Byte (Image_ColorRGB32::*)() const>(&Image_ColorRGB32::a_),
             R"#(Alias to 4th component (dummy).)#" )
        .def("r",
             (Standard_Byte & (Image_ColorRGB32::*)() ) static_cast<Standard_Byte & (Image_ColorRGB32::*)() >(&Image_ColorRGB32::r),
             R"#(Alias to 1st component (red intensity).)#" )
        .def("g",
             (Standard_Byte & (Image_ColorRGB32::*)() ) static_cast<Standard_Byte & (Image_ColorRGB32::*)() >(&Image_ColorRGB32::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_Byte & (Image_ColorRGB32::*)() ) static_cast<Standard_Byte & (Image_ColorRGB32::*)() >(&Image_ColorRGB32::b),
             R"#(Alias to 3rd component (blue intensity).)#" )
        .def("a_",
             (Standard_Byte & (Image_ColorRGB32::*)() ) static_cast<Standard_Byte & (Image_ColorRGB32::*)() >(&Image_ColorRGB32::a_),
             R"#(Alias to 4th component (dummy).)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Length_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Image_ColorRGB32::Length),
                    R"#(Returns the number of components.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Image_ColorRGBA , shared_ptr<Image_ColorRGBA>>(m,"Image_ColorRGBA");

    static_cast<py::class_<Image_ColorRGBA , shared_ptr<Image_ColorRGBA>  >>(m.attr("Image_ColorRGBA"))
    // constructors
    // custom constructors
    // methods
        .def("r",
             (Standard_Byte (Image_ColorRGBA::*)() const) static_cast<Standard_Byte (Image_ColorRGBA::*)() const>(&Image_ColorRGBA::r),
             R"#(Alias to 1st component (red intensity).)#" )
        .def("g",
             (Standard_Byte (Image_ColorRGBA::*)() const) static_cast<Standard_Byte (Image_ColorRGBA::*)() const>(&Image_ColorRGBA::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_Byte (Image_ColorRGBA::*)() const) static_cast<Standard_Byte (Image_ColorRGBA::*)() const>(&Image_ColorRGBA::b),
             R"#(Alias to 3rd component (blue intensity).)#" )
        .def("a",
             (Standard_Byte (Image_ColorRGBA::*)() const) static_cast<Standard_Byte (Image_ColorRGBA::*)() const>(&Image_ColorRGBA::a),
             R"#(Alias to 4th component (alpha value).)#" )
        .def("r",
             (Standard_Byte & (Image_ColorRGBA::*)() ) static_cast<Standard_Byte & (Image_ColorRGBA::*)() >(&Image_ColorRGBA::r),
             R"#(Alias to 1st component (red intensity).)#" )
        .def("g",
             (Standard_Byte & (Image_ColorRGBA::*)() ) static_cast<Standard_Byte & (Image_ColorRGBA::*)() >(&Image_ColorRGBA::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_Byte & (Image_ColorRGBA::*)() ) static_cast<Standard_Byte & (Image_ColorRGBA::*)() >(&Image_ColorRGBA::b),
             R"#(Alias to 3rd component (blue intensity).)#" )
        .def("a",
             (Standard_Byte & (Image_ColorRGBA::*)() ) static_cast<Standard_Byte & (Image_ColorRGBA::*)() >(&Image_ColorRGBA::a),
             R"#(Alias to 4th component (alpha value).)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Length_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Image_ColorRGBA::Length),
                    R"#(Returns the number of components.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Image_ColorRGBAF , shared_ptr<Image_ColorRGBAF>>(m,"Image_ColorRGBAF");

    static_cast<py::class_<Image_ColorRGBAF , shared_ptr<Image_ColorRGBAF>  >>(m.attr("Image_ColorRGBAF"))
    // constructors
    // custom constructors
    // methods
        .def("r",
             (Standard_ShortReal (Image_ColorRGBAF::*)() const) static_cast<Standard_ShortReal (Image_ColorRGBAF::*)() const>(&Image_ColorRGBAF::r),
             R"#(Alias to 1st component (red intensity).)#" )
        .def("g",
             (Standard_ShortReal (Image_ColorRGBAF::*)() const) static_cast<Standard_ShortReal (Image_ColorRGBAF::*)() const>(&Image_ColorRGBAF::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_ShortReal (Image_ColorRGBAF::*)() const) static_cast<Standard_ShortReal (Image_ColorRGBAF::*)() const>(&Image_ColorRGBAF::b),
             R"#(Alias to 3rd component (blue intensity).)#" )
        .def("a",
             (Standard_ShortReal (Image_ColorRGBAF::*)() const) static_cast<Standard_ShortReal (Image_ColorRGBAF::*)() const>(&Image_ColorRGBAF::a),
             R"#(Alias to 4th component (alpha value).)#" )
        .def("r",
             (Standard_ShortReal & (Image_ColorRGBAF::*)() ) static_cast<Standard_ShortReal & (Image_ColorRGBAF::*)() >(&Image_ColorRGBAF::r),
             R"#(Alias to 1st component (red intensity).)#" )
        .def("g",
             (Standard_ShortReal & (Image_ColorRGBAF::*)() ) static_cast<Standard_ShortReal & (Image_ColorRGBAF::*)() >(&Image_ColorRGBAF::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_ShortReal & (Image_ColorRGBAF::*)() ) static_cast<Standard_ShortReal & (Image_ColorRGBAF::*)() >(&Image_ColorRGBAF::b),
             R"#(Alias to 3rd component (blue intensity).)#" )
        .def("a",
             (Standard_ShortReal & (Image_ColorRGBAF::*)() ) static_cast<Standard_ShortReal & (Image_ColorRGBAF::*)() >(&Image_ColorRGBAF::a),
             R"#(Alias to 4th component (alpha value).)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Length_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Image_ColorRGBAF::Length),
                    R"#(Returns the number of components.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Image_ColorRGBF , shared_ptr<Image_ColorRGBF>>(m,"Image_ColorRGBF");

    static_cast<py::class_<Image_ColorRGBF , shared_ptr<Image_ColorRGBF>  >>(m.attr("Image_ColorRGBF"))
    // constructors
    // custom constructors
    // methods
        .def("r",
             (Standard_ShortReal (Image_ColorRGBF::*)() const) static_cast<Standard_ShortReal (Image_ColorRGBF::*)() const>(&Image_ColorRGBF::r),
             R"#(Alias to 1st component (red intensity).)#" )
        .def("g",
             (Standard_ShortReal (Image_ColorRGBF::*)() const) static_cast<Standard_ShortReal (Image_ColorRGBF::*)() const>(&Image_ColorRGBF::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_ShortReal (Image_ColorRGBF::*)() const) static_cast<Standard_ShortReal (Image_ColorRGBF::*)() const>(&Image_ColorRGBF::b),
             R"#(Alias to 3rd component (blue intensity).)#" )
        .def("r",
             (Standard_ShortReal & (Image_ColorRGBF::*)() ) static_cast<Standard_ShortReal & (Image_ColorRGBF::*)() >(&Image_ColorRGBF::r),
             R"#(Alias to 1st component (red intensity).)#" )
        .def("g",
             (Standard_ShortReal & (Image_ColorRGBF::*)() ) static_cast<Standard_ShortReal & (Image_ColorRGBF::*)() >(&Image_ColorRGBF::g),
             R"#(Alias to 2nd component (green intensity).)#" )
        .def("b",
             (Standard_ShortReal & (Image_ColorRGBF::*)() ) static_cast<Standard_ShortReal & (Image_ColorRGBF::*)() >(&Image_ColorRGBF::b),
             R"#(Alias to 3rd component (blue intensity).)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Length_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Image_ColorRGBF::Length),
                    R"#(Returns the number of components.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Image_Diff ,opencascade::handle<Image_Diff>  , Standard_Transient >>(m.attr("Image_Diff"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
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
    // additional methods and static methods
;


    static_cast<py::class_<Image_PixMap ,opencascade::handle<Image_PixMap>  , Standard_Transient >>(m.attr("Image_PixMap"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
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
        .def("RawValue",
             (const Standard_Byte * (Image_PixMap::*)( Standard_Size ,  Standard_Size  ) const) static_cast<const Standard_Byte * (Image_PixMap::*)( Standard_Size ,  Standard_Size  ) const>(&Image_PixMap::RawValue),
             R"#(Access image pixel as raw data pointer. This method does not perform any type checks - use on own risk (check Format() before)!)#"  , py::arg("theRow"),  py::arg("theCol"))
        .def("ChangeRawValue",
             (Standard_Byte * (Image_PixMap::*)( Standard_Size ,  Standard_Size  ) ) static_cast<Standard_Byte * (Image_PixMap::*)( Standard_Size ,  Standard_Size  ) >(&Image_PixMap::ChangeRawValue),
             R"#(Access image pixel as raw data pointer. This method does not perform any type checks - use on own risk (check Format() before)!)#"  , py::arg("theRow"),  py::arg("theCol"))
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
    // additional methods and static methods
;


    static_cast<py::class_<Image_PixMapData ,opencascade::handle<Image_PixMapData>  , NCollection_Buffer >>(m.attr("Image_PixMapData"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (bool (Image_PixMapData::*)( const opencascade::handle<NCollection_BaseAllocator> & ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size ,  Standard_Byte *  ) ) static_cast<bool (Image_PixMapData::*)( const opencascade::handle<NCollection_BaseAllocator> & ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size ,  const Standard_Size ,  Standard_Byte *  ) >(&Image_PixMapData::Init),
             R"#(Initializer.)#"  , py::arg("theAlloc"),  py::arg("theSizeBPP"),  py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theSizeRowBytes"),  py::arg("theDataPtr"))
        .def("ZeroData",
             (void (Image_PixMapData::*)() ) static_cast<void (Image_PixMapData::*)() >(&Image_PixMapData::ZeroData),
             R"#(Reset all values to zeros.)#" )
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
    // additional methods and static methods
;


    static_cast<py::class_<Image_Texture ,opencascade::handle<Image_Texture>  , Standard_Transient >>(m.attr("Image_Texture"))
    // constructors
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theFileName") )
        .def(py::init< const TCollection_AsciiString &,int64_t,int64_t >()  , py::arg("theFileName"),  py::arg("theOffset"),  py::arg("theLength") )
        .def(py::init< const opencascade::handle<NCollection_Buffer> &,const TCollection_AsciiString & >()  , py::arg("theBuffer"),  py::arg("theId") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Image_Texture::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Image_Texture::*)() const>(&Image_Texture::DynamicType),
             R"#(None)#" )
        .def("TextureId",
             (const TCollection_AsciiString & (Image_Texture::*)() const) static_cast<const TCollection_AsciiString & (Image_Texture::*)() const>(&Image_Texture::TextureId),
             R"#(Return generated texture id.)#" )
        .def("FilePath",
             (const TCollection_AsciiString & (Image_Texture::*)() const) static_cast<const TCollection_AsciiString & (Image_Texture::*)() const>(&Image_Texture::FilePath),
             R"#(Return image file path.)#" )
        .def("FileOffset",
             (int64_t (Image_Texture::*)() const) static_cast<int64_t (Image_Texture::*)() const>(&Image_Texture::FileOffset),
             R"#(Return offset within file.)#" )
        .def("FileLength",
             (int64_t (Image_Texture::*)() const) static_cast<int64_t (Image_Texture::*)() const>(&Image_Texture::FileLength),
             R"#(Return length of image data within the file after offset.)#" )
        .def("DataBuffer",
             (const opencascade::handle<NCollection_Buffer> & (Image_Texture::*)() const) static_cast<const opencascade::handle<NCollection_Buffer> & (Image_Texture::*)() const>(&Image_Texture::DataBuffer),
             R"#(Return buffer holding encoded image content.)#" )
        .def("ProbeImageFileFormat",
             (TCollection_AsciiString (Image_Texture::*)() const) static_cast<TCollection_AsciiString (Image_Texture::*)() const>(&Image_Texture::ProbeImageFileFormat),
             R"#(Return image file format.)#" )
        .def("ReadImage",
             (opencascade::handle<Image_PixMap> (Image_Texture::*)() const) static_cast<opencascade::handle<Image_PixMap> (Image_Texture::*)() const>(&Image_Texture::ReadImage),
             R"#(Image reader.)#" )
        .def("WriteImage",
             (Standard_Boolean (Image_Texture::*)( const TCollection_AsciiString &  ) ) static_cast<Standard_Boolean (Image_Texture::*)( const TCollection_AsciiString &  ) >(&Image_Texture::WriteImage),
             R"#(Write image to specified file without decoding data.)#"  , py::arg("theFile"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Image_Texture::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Image_Texture::get_type_descriptor),
                    R"#(None)#" )
        .def_static("HashCode_s",
                    (int (*)( const opencascade::handle<Image_Texture> & ,  const int  ) ) static_cast<int (*)( const opencascade::handle<Image_Texture> & ,  const int  ) >(&Image_Texture::HashCode),
                    R"#(Hash value, for Map interface.)#"  , py::arg("theTexture"),  py::arg("theUpper"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const opencascade::handle<Image_Texture> & ,  const opencascade::handle<Image_Texture> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Image_Texture> & ,  const opencascade::handle<Image_Texture> &  ) >(&Image_Texture::IsEqual),
                    R"#(Matching two instances, for Map interface.)#"  , py::arg("theTex1"),  py::arg("theTex2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Image_VideoParams , shared_ptr<Image_VideoParams>  >>(m.attr("Image_VideoParams"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetFramerate",
             (void (Image_VideoParams::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Image_VideoParams::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Image_VideoParams::SetFramerate),
             R"#(Setup playback FPS.)#"  , py::arg("theNumerator"),  py::arg("theDenominator"))
        .def("SetFramerate",
             (void (Image_VideoParams::*)( const Standard_Integer  ) ) static_cast<void (Image_VideoParams::*)( const Standard_Integer  ) >(&Image_VideoParams::SetFramerate),
             R"#(Setup playback FPS. For fixed-fps content, timebase should be 1/framerate and timestamp increments should be identical to 1.)#"  , py::arg("theValue"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Image_VideoRecorder ,opencascade::handle<Image_VideoRecorder>  , Standard_Transient >>(m.attr("Image_VideoRecorder"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
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
    // additional methods and static methods
;


    static_cast<py::class_<Image_AlienPixMap ,opencascade::handle<Image_AlienPixMap>  , Image_PixMap >>(m.attr("Image_AlienPixMap"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Image_AlienPixMap::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Image_AlienPixMap::*)() const>(&Image_AlienPixMap::DynamicType),
             R"#(None)#" )
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
        .def_static("IsTopDownDefault_s",
                    (bool (*)() ) static_cast<bool (*)() >(&Image_AlienPixMap::IsTopDownDefault),
                    R"#(Return default rows order used by underlying image library.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Image_AlienPixMap.hxx
// ./opencascade/Image_PixMapData.hxx
// ./opencascade/Image_Texture.hxx
// ./opencascade/Image_Format.hxx
// ./opencascade/Image_Color.hxx
// ./opencascade/Image_Diff.hxx
// ./opencascade/Image_VideoRecorder.hxx
// ./opencascade/Image_PixMapTypedData.hxx
// ./opencascade/Image_PixMap.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

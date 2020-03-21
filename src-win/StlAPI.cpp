
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Shape.hxx>
#include <TopoDS_Shape.hxx>
#include <StlAPI_Writer.hxx>
#include <StlAPI_Reader.hxx>
#include <TopoDS_Shape.hxx>

// module includes
#include <StlAPI.hxx>
#include <StlAPI_Reader.hxx>
#include <StlAPI_Writer.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StlAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StlAPI"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<StlAPI , shared_ptr<StlAPI>>(m,"StlAPI");

    static_cast<py::class_<StlAPI , shared_ptr<StlAPI> >>(m.attr("StlAPI"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Write_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const Standard_CString , const Standard_Boolean ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const Standard_CString , const Standard_Boolean ) >(&StlAPI::Write),
                    R"#(Convert and write shape to STL format. File is written in binary if aAsciiMode is False otherwise it is written in Ascii (by default).)#"  , py::arg("theShape"),  py::arg("theFile"),  py::arg("theAsciiMode")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Read_s",
                    (Standard_Boolean (*)( TopoDS_Shape & , const Standard_CString ) ) static_cast<Standard_Boolean (*)( TopoDS_Shape & , const Standard_CString ) >(&StlAPI::Read),
                    R"#(None)#"  , py::arg("theShape"),  py::arg("aFile"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StlAPI_Reader , shared_ptr<StlAPI_Reader>>(m,"StlAPI_Reader");

    static_cast<py::class_<StlAPI_Reader , shared_ptr<StlAPI_Reader> >>(m.attr("StlAPI_Reader"))
    // constructors
    // custom constructors
    // methods
        .def("Read",
             (Standard_Boolean (StlAPI_Reader::*)( TopoDS_Shape & , const Standard_CString ) ) static_cast<Standard_Boolean (StlAPI_Reader::*)( TopoDS_Shape & , const Standard_CString ) >(&StlAPI_Reader::Read),
             R"#(Reads STL file to the TopoDS_Shape (each triangle is converted to the face).)#"  , py::arg("theShape"),  py::arg("theFileName"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StlAPI_Writer , shared_ptr<StlAPI_Writer> >>(m.attr("StlAPI_Writer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ASCIIMode",
             (Standard_Boolean & (StlAPI_Writer::*)() ) static_cast<Standard_Boolean & (StlAPI_Writer::*)() >(&StlAPI_Writer::ASCIIMode),
             R"#(Returns the address to the flag defining the mode for writing the file. This address may be used to either read or change the flag. If the mode returns True (default value) the generated file is an ASCII file. If the mode returns False, the generated file is a binary file.)#" )
        .def("Write",
             (Standard_Boolean (StlAPI_Writer::*)( const TopoDS_Shape & , const Standard_CString ) ) static_cast<Standard_Boolean (StlAPI_Writer::*)( const TopoDS_Shape & , const Standard_CString ) >(&StlAPI_Writer::Write),
             R"#(Converts a given shape to STL format and writes it to file with a given filename.)#"  , py::arg("theShape"),  py::arg("theFileName"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\StlAPI_Reader.hxx
// ./opencascade\StlAPI.hxx
// ./opencascade\StlAPI_Writer.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


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
#include <Standard_GUID.hxx>
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <TDocStd_Application.hxx>

// module includes
#include <StdDrivers.hxx>
#include <StdDrivers_DocumentRetrievalDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdDrivers(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdDrivers"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<StdDrivers , shared_ptr<StdDrivers>>(m,"StdDrivers");

    static_cast<py::class_<StdDrivers , shared_ptr<StdDrivers> >>(m.attr("StdDrivers"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Factory_s",
                    (opencascade::handle<Standard_Transient> (*)( const Standard_GUID & ) ) static_cast<opencascade::handle<Standard_Transient> (*)( const Standard_GUID & ) >(&StdDrivers::Factory),
                    R"#(Depending from the ID, returns a list of storage or retrieval attribute drivers. Used for plugin)#"  , py::arg("aGUID"))
        .def_static("DefineFormat_s",
                    (void (*)( const opencascade::handle<TDocStd_Application> & ) ) static_cast<void (*)( const opencascade::handle<TDocStd_Application> & ) >(&StdDrivers::DefineFormat),
                    R"#(Defines format "MDTV-Standard" and registers its retrieval driver in the specified application)#"  , py::arg("theApp"))
        .def_static("BindTypes_s",
                    (void (*)( StdObjMgt_MapOfInstantiators & ) ) static_cast<void (*)( StdObjMgt_MapOfInstantiators & ) >(&StdDrivers::BindTypes),
                    R"#(Register types.)#"  , py::arg("theMap"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdDrivers_DocumentRetrievalDriver ,opencascade::handle<StdDrivers_DocumentRetrievalDriver>>(m,"StdDrivers_DocumentRetrievalDriver");

    static_cast<py::class_<StdDrivers_DocumentRetrievalDriver ,opencascade::handle<StdDrivers_DocumentRetrievalDriver> , StdLDrivers_DocumentRetrievalDriver>>(m.attr("StdDrivers_DocumentRetrievalDriver"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdDrivers_DocumentRetrievalDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdDrivers_DocumentRetrievalDriver::*)() const>(&StdDrivers_DocumentRetrievalDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdDrivers_DocumentRetrievalDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdDrivers_DocumentRetrievalDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\StdDrivers.hxx
// ./opencascade\StdDrivers_DocumentRetrievalDriver.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StdDrivers.hxx
// ./opencascade/StdDrivers_DocumentRetrievalDriver.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

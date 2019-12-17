
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

    register_default_constructor<StdDrivers_DocumentRetrievalDriver ,opencascade::handle<StdDrivers_DocumentRetrievalDriver>>(m,"StdDrivers_DocumentRetrievalDriver");

    static_cast<py::class_<StdDrivers_DocumentRetrievalDriver ,opencascade::handle<StdDrivers_DocumentRetrievalDriver>  , StdLDrivers_DocumentRetrievalDriver >>(m.attr("StdDrivers_DocumentRetrievalDriver"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdDrivers_DocumentRetrievalDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdDrivers_DocumentRetrievalDriver::*)() const>(&StdDrivers_DocumentRetrievalDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdDrivers_DocumentRetrievalDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdDrivers_DocumentRetrievalDriver::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/StdDrivers.hxx
// ./opencascade/StdDrivers_DocumentRetrievalDriver.hxx

// operators

// register typdefs
// ./opencascade/StdDrivers.hxx
// ./opencascade/StdDrivers_DocumentRetrievalDriver.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

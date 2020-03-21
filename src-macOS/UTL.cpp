
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_ExtendedString.hxx>
#include <Storage_BaseDriver.hxx>
#include <Storage_Data.hxx>
#include <OSD_Path.hxx>
#include <OSD_FileIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_GUID.hxx>
#include <Resource_Manager.hxx>

// module includes
#include <UTL.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_UTL(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("UTL"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<UTL , shared_ptr<UTL>>(m,"UTL");

    static_cast<py::class_<UTL , shared_ptr<UTL> >>(m.attr("UTL"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/UTL.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

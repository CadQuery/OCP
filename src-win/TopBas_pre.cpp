
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations

// module includes
#include <TopBas_ListIteratorOfListOfTestInterference.hxx>
#include <TopBas_ListOfTestInterference.hxx>
#include <TopBas_TestInterference.hxx>

// template related includes
// ./opencascade\TopBas_ListOfTestInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopBas_ListOfTestInterference.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopBas_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopBas", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_List<TopBas_TestInterference>(m,"TopBas_ListOfTestInterference");

// classes forward declarations only
    py::class_<TopBas_TestInterference , shared_ptr<TopBas_TestInterference> >(m,"TopBas_TestInterference",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post

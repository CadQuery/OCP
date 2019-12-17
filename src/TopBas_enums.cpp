
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations

// module includes
#include <TopBas_ListIteratorOfListOfTestInterference.hxx>
#include <TopBas_ListOfTestInterference.hxx>
#include <TopBas_TestInterference.hxx>

// template related includes
// ./opencascade/TopBas_ListOfTestInterference.hxx
#include "NCollection.hxx"
// ./opencascade/TopBas_ListOfTestInterference.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopBas_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopBas", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<TopBas_TestInterference ,std::unique_ptr<TopBas_TestInterference>  >(m,"TopBas_TestInterference",R"#(None)#");

// pre-register typdefs
// ./opencascade/TopBas_ListOfTestInterference.hxx
    preregister_template_NCollection_List<TopBas_TestInterference>(m,"TopBas_ListOfTestInterference");  
// ./opencascade/TopBas_ListIteratorOfListOfTestInterference.hxx
// ./opencascade/TopBas_TestInterference.hxx

};

// user-defined post-inclusion per module

// user-defined post

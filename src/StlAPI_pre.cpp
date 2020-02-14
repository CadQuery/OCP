
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_StlAPI_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StlAPI", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<StlAPI , shared_ptr<StlAPI>  >(m,"StlAPI",R"#(Offers the API for STL data manipulation.)#");
    py::class_<StlAPI_Reader , shared_ptr<StlAPI_Reader>  >(m,"StlAPI_Reader",R"#(Reading from stereolithography format.)#");
    py::class_<StlAPI_Writer , shared_ptr<StlAPI_Writer>  >(m,"StlAPI_Writer",R"#(This class creates and writes STL files from Open CASCADE shapes. An STL file can be written to an existing STL file or to a new one.)#");

};

// user-defined post-inclusion per module

// user-defined post

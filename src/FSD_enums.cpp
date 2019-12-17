
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Storage_StreamFormatError.hxx>
#include <Storage_StreamWriteError.hxx>
#include <Storage_StreamFormatError.hxx>
#include <Storage_StreamWriteError.hxx>
#include <Storage_HeaderData.hxx>

// module includes
#include <FSD_BinaryFile.hxx>
#include <FSD_BStream.hxx>
#include <FSD_CmpFile.hxx>
#include <FSD_File.hxx>
#include <FSD_FileHeader.hxx>
#include <FSD_FStream.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_FSD_enums(py::module &main_module) {


py::module m = main_module.def_submodule("FSD", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<FSD_File ,std::unique_ptr<FSD_File>  , Storage_BaseDriver >(m,"FSD_File",R"#(A general driver which defines as a file, the physical container for data to be stored or retrieved.)#");
    py::class_<FSD_CmpFile ,std::unique_ptr<FSD_CmpFile>  , FSD_File >(m,"FSD_CmpFile",R"#(None)#");
    py::class_<FSD_BinaryFile ,std::unique_ptr<FSD_BinaryFile>  , Storage_BaseDriver >(m,"FSD_BinaryFile",R"#(None)#");

// pre-register typdefs
// ./opencascade/FSD_CmpFile.hxx
// ./opencascade/FSD_File.hxx
// ./opencascade/FSD_FStream.hxx
// ./opencascade/FSD_BinaryFile.hxx
// ./opencascade/FSD_FileHeader.hxx
// ./opencascade/FSD_BStream.hxx

};

// user-defined post-inclusion per module

// user-defined post

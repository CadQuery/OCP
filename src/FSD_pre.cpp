
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
#include <Storage_HeaderData.hxx>
#include <Storage_StreamFormatError.hxx>
#include <Storage_StreamWriteError.hxx>

// module includes
#include <FSD_Base64Decoder.hxx>
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

// pre-register typdefs

// classes forward declarations only
    py::class_<FSD_Base64Decoder , shared_ptr<FSD_Base64Decoder>  >(m,"FSD_Base64Decoder",R"#(Tool decoding base64 stream.)#");
    py::class_<FSD_BinaryFile , shared_ptr<FSD_BinaryFile>  , Storage_BaseDriver >(m,"FSD_BinaryFile",R"#(None)#");
    py::class_<FSD_File , shared_ptr<FSD_File>  , Storage_BaseDriver >(m,"FSD_File",R"#(A general driver which defines as a file, the physical container for data to be stored or retrieved.)#");
    py::class_<FSD_FileHeader , shared_ptr<FSD_FileHeader>  >(m,"FSD_FileHeader",R"#(None)#");
    py::class_<FSD_CmpFile , shared_ptr<FSD_CmpFile>  , FSD_File >(m,"FSD_CmpFile",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post

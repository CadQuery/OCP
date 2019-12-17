
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TCollection_AsciiString.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Data.hxx>

// module includes
#include <BinObjMgt_PByte.hxx>
#include <BinObjMgt_PChar.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinObjMgt_PExtChar.hxx>
#include <BinObjMgt_PInteger.hxx>
#include <BinObjMgt_PReal.hxx>
#include <BinObjMgt_PShortReal.hxx>
#include <BinObjMgt_RRelocationTable.hxx>
#include <BinObjMgt_SRelocationTable.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinObjMgt_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BinObjMgt", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<BinObjMgt_RRelocationTable ,std::unique_ptr<BinObjMgt_RRelocationTable>  >(m,"BinObjMgt_RRelocationTable",R"#(Retrieval relocation table is modeled as a child class of TColStd_DataMapOfIntegerTransient that stores a handle to the file header section. With that attribute drivers have access to the file header section.)#");
    py::class_<BinObjMgt_Persistent ,std::unique_ptr<BinObjMgt_Persistent>  >(m,"BinObjMgt_Persistent",R"#(Binary persistent representation of an object. Really it is used as a buffer for read/write an object.)#");

// pre-register typdefs
// ./opencascade/BinObjMgt_RRelocationTable.hxx
// ./opencascade/BinObjMgt_Persistent.hxx
// ./opencascade/BinObjMgt_PExtChar.hxx
// ./opencascade/BinObjMgt_SRelocationTable.hxx
// ./opencascade/BinObjMgt_PReal.hxx
// ./opencascade/BinObjMgt_PShortReal.hxx
// ./opencascade/BinObjMgt_PChar.hxx
// ./opencascade/BinObjMgt_PByte.hxx
// ./opencascade/BinObjMgt_PInteger.hxx

};

// user-defined post-inclusion per module

// user-defined post

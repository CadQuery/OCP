
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinMDF_ADriver.hxx>
#include <BinMDF_ReferenceDriver.hxx>
#include <BinMDF_TagSourceDriver.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>

// module includes
#include <BinMDF.hxx>
#include <BinMDF_ADriver.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <BinMDF_DataMapIteratorOfTypeADriverMap.hxx>
#include <BinMDF_DoubleMapIteratorOfTypeIdMap.hxx>
#include <BinMDF_ReferenceDriver.hxx>
#include <BinMDF_StringIdMap.hxx>
#include <BinMDF_TagSourceDriver.hxx>
#include <BinMDF_TypeADriverMap.hxx>
#include <BinMDF_TypeIdMap.hxx>

// template related includes
// ./opencascade/BinMDF_TypeADriverMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BinMDF_TypeIdMap.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinMDF_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BinMDF", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_BinMDF_ADriver : public BinMDF_ADriver{
    public:
        using BinMDF_ADriver::BinMDF_ADriver;


        // public pure virtual
        opencascade::handle<TDF_Attribute> NewEmpty() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TDF_Attribute>,BinMDF_ADriver,NewEmpty,) };
        Standard_Boolean Paste(const BinObjMgt_Persistent & aSource,const opencascade::handle<TDF_Attribute> & aTarget,BinObjMgt_RRelocationTable & aRelocTable) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BinMDF_ADriver,Paste,aSource,aTarget,aRelocTable) };
        void Paste(const opencascade::handle<TDF_Attribute> & aSource,BinObjMgt_Persistent & aTarget,TColStd_IndexedMapOfTransient & aRelocTable) const  override { PYBIND11_OVERLOAD_PURE(void,BinMDF_ADriver,Paste,aSource,aTarget,aRelocTable) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<BinMDF , shared_ptr<BinMDF> >(m,"BinMDF",R"#(This package provides classes and methods to translate a transient DF into a persistent one and vice versa.)#");
    py::class_<BinMDF_ADriver ,opencascade::handle<BinMDF_ADriver>,Py_BinMDF_ADriver , Standard_Transient>(m,"BinMDF_ADriver",R"#(Attribute Storage/Retrieval Driver.Attribute Storage/Retrieval Driver.Attribute Storage/Retrieval Driver.)#");
    py::class_<BinMDF_ADriverTable ,opencascade::handle<BinMDF_ADriverTable> , Standard_Transient>(m,"BinMDF_ADriverTable",R"#(A driver table is an object building links between object types and object drivers. In the translation process, a driver table is asked to give a translation driver for each current object to be translated.A driver table is an object building links between object types and object drivers. In the translation process, a driver table is asked to give a translation driver for each current object to be translated.A driver table is an object building links between object types and object drivers. In the translation process, a driver table is asked to give a translation driver for each current object to be translated.)#");
    py::class_<BinMDF_ReferenceDriver ,opencascade::handle<BinMDF_ReferenceDriver> , BinMDF_ADriver>(m,"BinMDF_ReferenceDriver",R"#(Reference attribute Driver.Reference attribute Driver.Reference attribute Driver.)#");
    py::class_<BinMDF_TagSourceDriver ,opencascade::handle<BinMDF_TagSourceDriver> , BinMDF_ADriver>(m,"BinMDF_TagSourceDriver",R"#(TDF_TagSource Driver.TDF_TagSource Driver.TDF_TagSource Driver.)#");

};

// user-defined post-inclusion per module

// user-defined post

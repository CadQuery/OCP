
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TDF_Data.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <TDF_Label.hxx>
#include <Message_Messenger.hxx>
#include <XmlMDF_TagSourceDriver.hxx>
#include <XmlMDF_ReferenceDriver.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>

// module includes
#include <XmlMDF.hxx>
#include <XmlMDF_ADriver.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <XmlMDF_DataMapIteratorOfMapOfDriver.hxx>
#include <XmlMDF_DataMapIteratorOfTypeADriverMap.hxx>
#include <XmlMDF_MapOfDriver.hxx>
#include <XmlMDF_ReferenceDriver.hxx>
#include <XmlMDF_TagSourceDriver.hxx>
#include <XmlMDF_TypeADriverMap.hxx>

// template related includes
// ./opencascade/XmlMDF_MapOfDriver.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/XmlMDF_TypeADriverMap.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlMDF_enums(py::module &main_module) {


py::module m = main_module.def_submodule("XmlMDF", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_XmlMDF_ADriver : public XmlMDF_ADriver{
    public:
        using XmlMDF_ADriver::XmlMDF_ADriver;


        // public pure virtual
        opencascade::handle<TDF_Attribute> NewEmpty() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TDF_Attribute>,XmlMDF_ADriver,NewEmpty,) };
        Standard_Boolean Paste(const XmlObjMgt_Persistent & aSource,const opencascade::handle<TDF_Attribute> & aTarget,XmlObjMgt_RRelocationTable & aRelocTable) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,XmlMDF_ADriver,Paste,aSource,aTarget,aRelocTable) };
        void Paste(const opencascade::handle<TDF_Attribute> & aSource,XmlObjMgt_Persistent & aTarget,XmlObjMgt_SRelocationTable & aRelocTable) const  override { PYBIND11_OVERLOAD_PURE(void,XmlMDF_ADriver,Paste,aSource,aTarget,aRelocTable) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<XmlMDF , shared_ptr<XmlMDF> >(m,"XmlMDF",R"#(This package provides classes and methods to translate a transient DF into a persistent one and vice versa.)#");
    py::class_<XmlMDF_ADriver ,opencascade::handle<XmlMDF_ADriver>,Py_XmlMDF_ADriver , Standard_Transient>(m,"XmlMDF_ADriver",R"#(Attribute Storage/Retrieval Driver.Attribute Storage/Retrieval Driver.Attribute Storage/Retrieval Driver.)#");
    py::class_<XmlMDF_ADriverTable ,opencascade::handle<XmlMDF_ADriverTable> , Standard_Transient>(m,"XmlMDF_ADriverTable",R"#(A driver table is an object building links between object types and object drivers. In the translation process, a driver table is asked to give a translation driver for each current object to be translated.A driver table is an object building links between object types and object drivers. In the translation process, a driver table is asked to give a translation driver for each current object to be translated.A driver table is an object building links between object types and object drivers. In the translation process, a driver table is asked to give a translation driver for each current object to be translated.)#");
    py::class_<XmlMDF_ReferenceDriver ,opencascade::handle<XmlMDF_ReferenceDriver> , XmlMDF_ADriver>(m,"XmlMDF_ReferenceDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<XmlMDF_TagSourceDriver ,opencascade::handle<XmlMDF_TagSourceDriver> , XmlMDF_ADriver>(m,"XmlMDF_TagSourceDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");

};

// user-defined post-inclusion per module

// user-defined post

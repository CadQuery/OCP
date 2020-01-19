
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <TCollection_ExtendedString.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
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
#include "NCollection.hxx"
// ./opencascade/XmlMDF_TypeADriverMap.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlMDF(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("XmlMDF"));


//Python trampoline classes
    class Py_XmlMDF_ADriver : public XmlMDF_ADriver{
    public:
        using XmlMDF_ADriver::XmlMDF_ADriver;
        
        // public pure virtual
        opencascade::handle<TDF_Attribute> NewEmpty() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TDF_Attribute>,XmlMDF_ADriver,NewEmpty,) };
        Standard_Boolean Paste(const XmlObjMgt_Persistent & aSource,const opencascade::handle<TDF_Attribute> & aTarget,TColStd_DataMapOfIntegerTransient & aRelocTable) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,XmlMDF_ADriver,Paste,aSource,aTarget,aRelocTable) };
        void Paste(const opencascade::handle<TDF_Attribute> & aSource,XmlObjMgt_Persistent & aTarget,TColStd_IndexedMapOfTransient & aRelocTable) const  override { PYBIND11_OVERLOAD_PURE(void,XmlMDF_ADriver,Paste,aSource,aTarget,aRelocTable) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes

    register_default_constructor<XmlMDF , shared_ptr<XmlMDF>>(m,"XmlMDF");

    static_cast<py::class_<XmlMDF , shared_ptr<XmlMDF>  >>(m.attr("XmlMDF"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FromTo_s",
                    (void (*)( const opencascade::handle<TDF_Data> & ,  LDOM_Element & ,  TColStd_IndexedMapOfTransient & ,  const opencascade::handle<XmlMDF_ADriverTable> &  ) ) static_cast<void (*)( const opencascade::handle<TDF_Data> & ,  LDOM_Element & ,  TColStd_IndexedMapOfTransient & ,  const opencascade::handle<XmlMDF_ADriverTable> &  ) >(&XmlMDF::FromTo),
                    R"#(Translates a transient <aSource> into a persistent <aTarget>.)#"  , py::arg("aSource"),  py::arg("aTarget"),  py::arg("aReloc"),  py::arg("aDrivers"))
        .def_static("FromTo_s",
                    (Standard_Boolean (*)(  const LDOM_Element & ,  opencascade::handle<TDF_Data> & ,  TColStd_DataMapOfIntegerTransient & ,  const opencascade::handle<XmlMDF_ADriverTable> &  ) ) static_cast<Standard_Boolean (*)(  const LDOM_Element & ,  opencascade::handle<TDF_Data> & ,  TColStd_DataMapOfIntegerTransient & ,  const opencascade::handle<XmlMDF_ADriverTable> &  ) >(&XmlMDF::FromTo),
                    R"#(Translates a persistent <aSource> into a transient <aTarget>. Returns True if completed successfully (False on error))#"  , py::arg("aSource"),  py::arg("aTarget"),  py::arg("aReloc"),  py::arg("aDrivers"))
        .def_static("AddDrivers_s",
                    (void (*)( const opencascade::handle<XmlMDF_ADriverTable> & ,  const opencascade::handle<Message_Messenger> &  ) ) static_cast<void (*)( const opencascade::handle<XmlMDF_ADriverTable> & ,  const opencascade::handle<Message_Messenger> &  ) >(&XmlMDF::AddDrivers),
                    R"#(Adds the attribute storage drivers to <aDriverSeq>.)#"  , py::arg("aDriverTable"),  py::arg("theMessageDriver"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<XmlMDF_ADriver ,opencascade::handle<XmlMDF_ADriver> ,Py_XmlMDF_ADriver , Standard_Transient >>(m.attr("XmlMDF_ADriver"))
    // methods
        .def("VersionNumber",
             (Standard_Integer (XmlMDF_ADriver::*)() const) static_cast<Standard_Integer (XmlMDF_ADriver::*)() const>(&XmlMDF_ADriver::VersionNumber),
             R"#(Returns the version number from which the driver is available.)#" )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDF_ADriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDF_ADriver::*)() const>(&XmlMDF_ADriver::NewEmpty),
             R"#(Creates a new attribute from TDF.)#" )
        .def("SourceType",
             (opencascade::handle<Standard_Type> (XmlMDF_ADriver::*)() const) static_cast<opencascade::handle<Standard_Type> (XmlMDF_ADriver::*)() const>(&XmlMDF_ADriver::SourceType),
             R"#(Returns the type of source object, inheriting from Attribute from TDF.)#" )
        .def("TypeName",
             (const TCollection_AsciiString & (XmlMDF_ADriver::*)() const) static_cast<const TCollection_AsciiString & (XmlMDF_ADriver::*)() const>(&XmlMDF_ADriver::TypeName),
             R"#(Returns the full XML tag name (including NS prefix))#" )
        .def("Paste",
             (Standard_Boolean (XmlMDF_ADriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const) static_cast<Standard_Boolean (XmlMDF_ADriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const>(&XmlMDF_ADriver::Paste),
             R"#(Translate the contents of <aSource> and put it into <aTarget>, using the relocation table <aRelocTable> to keep the sharings.)#"  , py::arg("aSource"),  py::arg("aTarget"),  py::arg("aRelocTable"))
        .def("Paste",
             (void (XmlMDF_ADriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const) static_cast<void (XmlMDF_ADriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const>(&XmlMDF_ADriver::Paste),
             R"#(Translate the contents of <aSource> and put it into <aTarget>, using the relocation table <aRelocTable> to keep the sharings.)#"  , py::arg("aSource"),  py::arg("aTarget"),  py::arg("aRelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDF_ADriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDF_ADriver::*)() const>(&XmlMDF_ADriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDF_ADriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlMDF_ADriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<XmlMDF_ADriverTable ,opencascade::handle<XmlMDF_ADriverTable>  , Standard_Transient >>(m.attr("XmlMDF_ADriverTable"))
        .def(py::init<  >()  )
    // methods
        .def("AddDriver",
             (void (XmlMDF_ADriverTable::*)( const opencascade::handle<XmlMDF_ADriver> &  ) ) static_cast<void (XmlMDF_ADriverTable::*)( const opencascade::handle<XmlMDF_ADriver> &  ) >(&XmlMDF_ADriverTable::AddDriver),
             R"#(Sets a translation driver: <aDriver>.)#"  , py::arg("anHDriver"))
        .def("GetDrivers",
             (const XmlMDF_TypeADriverMap & (XmlMDF_ADriverTable::*)() const) static_cast<const XmlMDF_TypeADriverMap & (XmlMDF_ADriverTable::*)() const>(&XmlMDF_ADriverTable::GetDrivers),
             R"#(Gets a map of drivers.)#" )
        .def("GetDriver",
             (Standard_Boolean (XmlMDF_ADriverTable::*)( const opencascade::handle<Standard_Type> & ,  opencascade::handle<XmlMDF_ADriver> &  ) const) static_cast<Standard_Boolean (XmlMDF_ADriverTable::*)( const opencascade::handle<Standard_Type> & ,  opencascade::handle<XmlMDF_ADriver> &  ) const>(&XmlMDF_ADriverTable::GetDriver),
             R"#(Gets a driver <aDriver> according to <aType>)#"  , py::arg("aType"),  py::arg("anHDriver"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDF_ADriverTable::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDF_ADriverTable::*)() const>(&XmlMDF_ADriverTable::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDF_ADriverTable::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlMDF_ADriverTable::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<XmlMDF_ReferenceDriver ,opencascade::handle<XmlMDF_ReferenceDriver>  , XmlMDF_ADriver >>(m.attr("XmlMDF_ReferenceDriver"))
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDF_ReferenceDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDF_ReferenceDriver::*)() const>(&XmlMDF_ReferenceDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDF_ReferenceDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const) static_cast<Standard_Boolean (XmlMDF_ReferenceDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const>(&XmlMDF_ReferenceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDF_ReferenceDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const) static_cast<void (XmlMDF_ReferenceDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const>(&XmlMDF_ReferenceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDF_ReferenceDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDF_ReferenceDriver::*)() const>(&XmlMDF_ReferenceDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDF_ReferenceDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlMDF_ReferenceDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<XmlMDF_TagSourceDriver ,opencascade::handle<XmlMDF_TagSourceDriver>  , XmlMDF_ADriver >>(m.attr("XmlMDF_TagSourceDriver"))
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDF_TagSourceDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDF_TagSourceDriver::*)() const>(&XmlMDF_TagSourceDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDF_TagSourceDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const) static_cast<Standard_Boolean (XmlMDF_TagSourceDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const>(&XmlMDF_TagSourceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDF_TagSourceDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const) static_cast<void (XmlMDF_TagSourceDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const>(&XmlMDF_TagSourceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDF_TagSourceDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDF_TagSourceDriver::*)() const>(&XmlMDF_TagSourceDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDF_TagSourceDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlMDF_TagSourceDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/XmlMDF_DataMapIteratorOfMapOfDriver.hxx
// ./opencascade/XmlMDF_ADriver.hxx
// ./opencascade/XmlMDF_MapOfDriver.hxx
// ./opencascade/XmlMDF_TagSourceDriver.hxx
// ./opencascade/XmlMDF_ADriverTable.hxx
// ./opencascade/XmlMDF.hxx
// ./opencascade/XmlMDF_DataMapIteratorOfTypeADriverMap.hxx
// ./opencascade/XmlMDF_ReferenceDriver.hxx
// ./opencascade/XmlMDF_TypeADriverMap.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

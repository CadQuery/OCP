
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


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
void register_XmlMDF(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("XmlMDF"));


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

// classes

    // default constructor
    register_default_constructor<XmlMDF , shared_ptr<XmlMDF>>(m,"XmlMDF");

    static_cast<py::class_<XmlMDF , shared_ptr<XmlMDF> >>(m.attr("XmlMDF"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDF_ADriver ,opencascade::handle<XmlMDF_ADriver>,Py_XmlMDF_ADriver , Standard_Transient>>(m.attr("XmlMDF_ADriver"))
    // constructors
    // custom constructors
    // methods
        .def("VersionNumber",
             (Standard_Integer (XmlMDF_ADriver::*)() const) static_cast<Standard_Integer (XmlMDF_ADriver::*)() const>(&XmlMDF_ADriver::VersionNumber),
             R"#(Returns the version number from which the driver is available.)#" )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDF_ADriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDF_ADriver::*)() const>(&XmlMDF_ADriver::NewEmpty),
             R"#(Creates a new attribute from TDF.)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDF_ADriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDF_ADriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDF_ADriver::Paste),
             R"#(Translate the contents of <aSource> and put it into <aTarget>, using the relocation table <aRelocTable> to keep the sharings.)#"  , py::arg("aSource"),  py::arg("aTarget"),  py::arg("aRelocTable"))
        .def("Paste",
             (void (XmlMDF_ADriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDF_ADriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDF_ADriver::Paste),
             R"#(Translate the contents of <aSource> and put it into <aTarget>, using the relocation table <aRelocTable> to keep the sharings.)#"  , py::arg("aSource"),  py::arg("aTarget"),  py::arg("aRelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDF_ADriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDF_ADriver::*)() const>(&XmlMDF_ADriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDF_ADriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDF_ADriverTable ,opencascade::handle<XmlMDF_ADriverTable> , Standard_Transient>>(m.attr("XmlMDF_ADriverTable"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDF_ADriverTable::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDF_ADriverTable::*)() const>(&XmlMDF_ADriverTable::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDF_ADriverTable::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDF_ReferenceDriver ,opencascade::handle<XmlMDF_ReferenceDriver> , XmlMDF_ADriver>>(m.attr("XmlMDF_ReferenceDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDF_ReferenceDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDF_ReferenceDriver::*)() const>(&XmlMDF_ReferenceDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDF_ReferenceDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDF_ReferenceDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDF_ReferenceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDF_ReferenceDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDF_ReferenceDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDF_ReferenceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDF_ReferenceDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDF_ReferenceDriver::*)() const>(&XmlMDF_ReferenceDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDF_ReferenceDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDF_TagSourceDriver ,opencascade::handle<XmlMDF_TagSourceDriver> , XmlMDF_ADriver>>(m.attr("XmlMDF_TagSourceDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDF_TagSourceDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDF_TagSourceDriver::*)() const>(&XmlMDF_TagSourceDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDF_TagSourceDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDF_TagSourceDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDF_TagSourceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDF_TagSourceDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDF_TagSourceDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDF_TagSourceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDF_TagSourceDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDF_TagSourceDriver::*)() const>(&XmlMDF_TagSourceDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDF_TagSourceDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/XmlMDF_DataMapIteratorOfTypeADriverMap.hxx
// ./opencascade/XmlMDF.hxx
// ./opencascade/XmlMDF_ADriverTable.hxx
// ./opencascade/XmlMDF_MapOfDriver.hxx
// ./opencascade/XmlMDF_TagSourceDriver.hxx
// ./opencascade/XmlMDF_ADriver.hxx
// ./opencascade/XmlMDF_ReferenceDriver.hxx
// ./opencascade/XmlMDF_DataMapIteratorOfMapOfDriver.hxx
// ./opencascade/XmlMDF_TypeADriverMap.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

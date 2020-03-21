
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
void register_BinMDF(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinMDF"));


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

// classes

    // default constructor
    register_default_constructor<BinMDF , shared_ptr<BinMDF>>(m,"BinMDF");

    static_cast<py::class_<BinMDF , shared_ptr<BinMDF> >>(m.attr("BinMDF"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDF_ADriver ,opencascade::handle<BinMDF_ADriver>,Py_BinMDF_ADriver , Standard_Transient>>(m.attr("BinMDF_ADriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDF_ADriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDF_ADriver::*)() const>(&BinMDF_ADriver::NewEmpty),
             R"#(Creates a new attribute from TDF.)#" )
        .def("SourceType",
             (const opencascade::handle<Standard_Type> & (BinMDF_ADriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDF_ADriver::*)() const>(&BinMDF_ADriver::SourceType),
             R"#(Returns the type of source object, inheriting from Attribute from TDF.)#" )
        .def("TypeName",
             (const TCollection_AsciiString & (BinMDF_ADriver::*)() const) static_cast<const TCollection_AsciiString & (BinMDF_ADriver::*)() const>(&BinMDF_ADriver::TypeName),
             R"#(Returns the type name of the attribute object)#" )
        .def("Paste",
             (Standard_Boolean (BinMDF_ADriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDF_ADriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDF_ADriver::Paste),
             R"#(Translate the contents of <aSource> and put it into <aTarget>, using the relocation table <aRelocTable> to keep the sharings.)#"  , py::arg("aSource"),  py::arg("aTarget"),  py::arg("aRelocTable"))
        .def("Paste",
             (void (BinMDF_ADriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDF_ADriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDF_ADriver::Paste),
             R"#(Translate the contents of <aSource> and put it into <aTarget>, using the relocation table <aRelocTable> to keep the sharings.)#"  , py::arg("aSource"),  py::arg("aTarget"),  py::arg("aRelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDF_ADriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDF_ADriver::*)() const>(&BinMDF_ADriver::DynamicType),
             R"#(None)#" )
        .def("SourceType",
             (const opencascade::handle<Standard_Type> & (BinMDF_ADriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDF_ADriver::*)() const>(&BinMDF_ADriver::SourceType),
             R"#(Returns the type of source object, inheriting from Attribute from TDF.)#" )
        .def("TypeName",
             (const TCollection_AsciiString & (BinMDF_ADriver::*)() const) static_cast<const TCollection_AsciiString & (BinMDF_ADriver::*)() const>(&BinMDF_ADriver::TypeName),
             R"#(Returns the type name of the attribute object)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDF_ADriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDF_ADriverTable ,opencascade::handle<BinMDF_ADriverTable> , Standard_Transient>>(m.attr("BinMDF_ADriverTable"))
    // constructors
    // custom constructors
    // methods
        .def("GetDriver",
             (Standard_Integer (BinMDF_ADriverTable::*)( const opencascade::handle<Standard_Type> & , opencascade::handle<BinMDF_ADriver> & ) const) static_cast<Standard_Integer (BinMDF_ADriverTable::*)( const opencascade::handle<Standard_Type> & , opencascade::handle<BinMDF_ADriver> & ) const>(&BinMDF_ADriverTable::GetDriver),
             R"#(Gets a driver <theDriver> according to <theType>. Returns Type ID if the driver was assigned an ID; 0 otherwise.)#"  , py::arg("theType"),  py::arg("theDriver"))
        .def("GetDriver",
             (opencascade::handle<BinMDF_ADriver> (BinMDF_ADriverTable::*)( const Standard_Integer ) const) static_cast<opencascade::handle<BinMDF_ADriver> (BinMDF_ADriverTable::*)( const Standard_Integer ) const>(&BinMDF_ADriverTable::GetDriver),
             R"#(Returns a driver according to <theTypeId>. Returns null handle if a driver is not found)#"  , py::arg("theTypeId"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDF_ADriverTable::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDF_ADriverTable::*)() const>(&BinMDF_ADriverTable::DynamicType),
             R"#(None)#" )
        .def("GetDriver",
             (Standard_Integer (BinMDF_ADriverTable::*)( const opencascade::handle<Standard_Type> & , opencascade::handle<BinMDF_ADriver> & ) const) static_cast<Standard_Integer (BinMDF_ADriverTable::*)( const opencascade::handle<Standard_Type> & , opencascade::handle<BinMDF_ADriver> & ) const>(&BinMDF_ADriverTable::GetDriver),
             R"#(Gets a driver <theDriver> according to <theType>. Returns Type ID if the driver was assigned an ID; 0 otherwise.)#"  , py::arg("theType"),  py::arg("theDriver"))
        .def("GetDriver",
             (opencascade::handle<BinMDF_ADriver> (BinMDF_ADriverTable::*)( const Standard_Integer ) const) static_cast<opencascade::handle<BinMDF_ADriver> (BinMDF_ADriverTable::*)( const Standard_Integer ) const>(&BinMDF_ADriverTable::GetDriver),
             R"#(Returns a driver according to <theTypeId>. Returns null handle if a driver is not found)#"  , py::arg("theTypeId"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDF_ADriverTable::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDF_ReferenceDriver ,opencascade::handle<BinMDF_ReferenceDriver> , BinMDF_ADriver>>(m.attr("BinMDF_ReferenceDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDF_ReferenceDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDF_ReferenceDriver::*)() const>(&BinMDF_ReferenceDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDF_ReferenceDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDF_ReferenceDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDF_ReferenceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDF_ReferenceDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDF_ReferenceDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDF_ReferenceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDF_ReferenceDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDF_ReferenceDriver::*)() const>(&BinMDF_ReferenceDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDF_ReferenceDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDF_TagSourceDriver ,opencascade::handle<BinMDF_TagSourceDriver> , BinMDF_ADriver>>(m.attr("BinMDF_TagSourceDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDF_TagSourceDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDF_TagSourceDriver::*)() const>(&BinMDF_TagSourceDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDF_TagSourceDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDF_TagSourceDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDF_TagSourceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDF_TagSourceDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDF_TagSourceDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDF_TagSourceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDF_TagSourceDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDF_TagSourceDriver::*)() const>(&BinMDF_TagSourceDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDF_TagSourceDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BinMDF_TypeADriverMap.hxx
// ./opencascade/BinMDF_ADriverTable.hxx
// ./opencascade/BinMDF_ADriver.hxx
// ./opencascade/BinMDF_DoubleMapIteratorOfTypeIdMap.hxx
// ./opencascade/BinMDF_TypeIdMap.hxx
// ./opencascade/BinMDF_ReferenceDriver.hxx
// ./opencascade/BinMDF.hxx
// ./opencascade/BinMDF_StringIdMap.hxx
// ./opencascade/BinMDF_DataMapIteratorOfTypeADriverMap.hxx
// ./opencascade/BinMDF_TagSourceDriver.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

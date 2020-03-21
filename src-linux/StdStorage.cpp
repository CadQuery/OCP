
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdObjMgt_Persistent.hxx>
#include <Storage_BaseDriver.hxx>
#include <StdStorage_HeaderData.hxx>
#include <StdStorage_TypeData.hxx>
#include <StdStorage_RootData.hxx>
#include <Storage_BaseDriver.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <Storage_Schema.hxx>
#include <Storage_Root.hxx>
#include <StdStorage_Data.hxx>
#include <Storage_BaseDriver.hxx>
#include <TCollection_AsciiString.hxx>
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <StdObjMgt_Persistent.hxx>

// module includes
#include <StdStorage.hxx>
#include <StdStorage_BacketOfPersistent.hxx>
#include <StdStorage_Data.hxx>
#include <StdStorage_HeaderData.hxx>
#include <StdStorage_HSequenceOfRoots.hxx>
#include <StdStorage_MapOfRoots.hxx>
#include <StdStorage_MapOfTypes.hxx>
#include <StdStorage_Root.hxx>
#include <StdStorage_RootData.hxx>
#include <StdStorage_SequenceOfRoots.hxx>
#include <StdStorage_TypeData.hxx>

// template related includes
// ./opencascade/StdStorage_SequenceOfRoots.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StdStorage_MapOfRoots.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdStorage(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdStorage"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<StdStorage , shared_ptr<StdStorage>>(m,"StdStorage");

    static_cast<py::class_<StdStorage , shared_ptr<StdStorage> >>(m.attr("StdStorage"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Version_s",
                    (TCollection_AsciiString (*)() ) static_cast<TCollection_AsciiString (*)() >(&StdStorage::Version),
                    R"#(Returns the version of Storage's read/write routines)#" )
        .def_static("Read_s",
                    (Storage_Error (*)( const TCollection_AsciiString & , opencascade::handle<StdStorage_Data> & ) ) static_cast<Storage_Error (*)( const TCollection_AsciiString & , opencascade::handle<StdStorage_Data> & ) >(&StdStorage::Read),
                    R"#(Returns the data read from a file located at theFileName. The storage format is compartible with legacy persistent one. These data are aggregated in a StdStorage_Data object which may be browsed in order to extract the root objects from the container. Note: - theData object will be created if it is null or cleared otherwise.)#"  , py::arg("theFileName"),  py::arg("theData"))
        .def_static("Read_s",
                    (Storage_Error (*)( Storage_BaseDriver & , opencascade::handle<StdStorage_Data> & ) ) static_cast<Storage_Error (*)( Storage_BaseDriver & , opencascade::handle<StdStorage_Data> & ) >(&StdStorage::Read),
                    R"#(Returns the data read from the container defined by theDriver. The storage format is compartible with legacy persistent one. These data are aggregated in a StdStorage_Data object which may be browsed in order to extract the root objects from the container. Note: - theData object will be created if it is null or cleared otherwise.)#"  , py::arg("theDriver"),  py::arg("theData"))
        .def_static("Write_s",
                    (Storage_Error (*)( Storage_BaseDriver & , const opencascade::handle<StdStorage_Data> & ) ) static_cast<Storage_Error (*)( Storage_BaseDriver & , const opencascade::handle<StdStorage_Data> & ) >(&StdStorage::Write),
                    R"#(Writes the data aggregated in theData object into the container defined by theDriver. The storage format is compartible with legacy persistent one. Note: - theData may aggregate several root objects to be stored together. - createion date specified in the srorage header will be overwritten.)#"  , py::arg("theDriver"),  py::arg("theData"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_BucketIterator , shared_ptr<StdStorage_BucketIterator> >>(m.attr("StdStorage_BucketIterator"))
    // constructors
        .def(py::init< StdStorage_BucketOfPersistent * >()  , py::arg("") )
    // custom constructors
    // methods
        .def("Init",
             (void (StdStorage_BucketIterator::*)( StdStorage_BucketOfPersistent * ) ) static_cast<void (StdStorage_BucketIterator::*)( StdStorage_BucketOfPersistent * ) >(&StdStorage_BucketIterator::Init),
             R"#(None)#"  , py::arg(""))
        .def("Reset",
             (void (StdStorage_BucketIterator::*)() ) static_cast<void (StdStorage_BucketIterator::*)() >(&StdStorage_BucketIterator::Reset),
             R"#(None)#" )
        .def("Value",
             (StdObjMgt_Persistent * (StdStorage_BucketIterator::*)() const) static_cast<StdObjMgt_Persistent * (StdStorage_BucketIterator::*)() const>(&StdStorage_BucketIterator::Value),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (StdStorage_BucketIterator::*)() const) static_cast<Standard_Boolean (StdStorage_BucketIterator::*)() const>(&StdStorage_BucketIterator::More),
             R"#(None)#" )
        .def("Next",
             (void (StdStorage_BucketIterator::*)() ) static_cast<void (StdStorage_BucketIterator::*)() >(&StdStorage_BucketIterator::Next),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_Data ,opencascade::handle<StdStorage_Data> , Standard_Transient>>(m.attr("StdStorage_Data"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (StdStorage_Data::*)() ) static_cast<void (StdStorage_Data::*)() >(&StdStorage_Data::Clear),
             R"#(Makes the container empty)#" )
        .def("HeaderData",
             (opencascade::handle<StdStorage_HeaderData> (StdStorage_Data::*)() ) static_cast<opencascade::handle<StdStorage_HeaderData> (StdStorage_Data::*)() >(&StdStorage_Data::HeaderData),
             R"#(Returns the header data section)#" )
        .def("TypeData",
             (opencascade::handle<StdStorage_TypeData> (StdStorage_Data::*)() ) static_cast<opencascade::handle<StdStorage_TypeData> (StdStorage_Data::*)() >(&StdStorage_Data::TypeData),
             R"#(Returns the type data section)#" )
        .def("RootData",
             (opencascade::handle<StdStorage_RootData> (StdStorage_Data::*)() ) static_cast<opencascade::handle<StdStorage_RootData> (StdStorage_Data::*)() >(&StdStorage_Data::RootData),
             R"#(Returns the root data section)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_HSequenceOfRoots ,opencascade::handle<StdStorage_HSequenceOfRoots> , StdStorage_SequenceOfRoots, Standard_Transient>>(m.attr("StdStorage_HSequenceOfRoots"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StdStorage_Root> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const StdStorage_SequenceOfRoots & (StdStorage_HSequenceOfRoots::*)() const) static_cast<const StdStorage_SequenceOfRoots & (StdStorage_HSequenceOfRoots::*)() const>(&StdStorage_HSequenceOfRoots::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StdStorage_HSequenceOfRoots::*)(  const opencascade::handle<StdStorage_Root> & ) ) static_cast<void (StdStorage_HSequenceOfRoots::*)(  const opencascade::handle<StdStorage_Root> & ) >(&StdStorage_HSequenceOfRoots::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StdStorage_HSequenceOfRoots::*)( NCollection_Sequence<opencascade::handle<StdStorage_Root> > & ) ) static_cast<void (StdStorage_HSequenceOfRoots::*)( NCollection_Sequence<opencascade::handle<StdStorage_Root> > & ) >(&StdStorage_HSequenceOfRoots::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StdStorage_SequenceOfRoots & (StdStorage_HSequenceOfRoots::*)() ) static_cast<StdStorage_SequenceOfRoots & (StdStorage_HSequenceOfRoots::*)() >(&StdStorage_HSequenceOfRoots::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdStorage_HSequenceOfRoots::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdStorage_HSequenceOfRoots::*)() const>(&StdStorage_HSequenceOfRoots::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdStorage_HSequenceOfRoots::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdStorage_HSequenceOfRoots::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_HeaderData ,opencascade::handle<StdStorage_HeaderData> , Standard_Transient>>(m.attr("StdStorage_HeaderData"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdStorage_HeaderData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdStorage_HeaderData::*)() const>(&StdStorage_HeaderData::DynamicType),
             R"#(None)#" )
        .def("Read",
             (Standard_Boolean (StdStorage_HeaderData::*)( Storage_BaseDriver & ) ) static_cast<Standard_Boolean (StdStorage_HeaderData::*)( Storage_BaseDriver & ) >(&StdStorage_HeaderData::Read),
             R"#(Reads the header data section from the container defined by theDriver. Returns Standard_True in case of success. Otherwise, one need to get an error code and description using ErrorStatus and ErrorStatusExtension functions correspondingly.)#"  , py::arg("theDriver"))
        .def("Write",
             (Standard_Boolean (StdStorage_HeaderData::*)( Storage_BaseDriver & ) ) static_cast<Standard_Boolean (StdStorage_HeaderData::*)( Storage_BaseDriver & ) >(&StdStorage_HeaderData::Write),
             R"#(Writes the header data section to the container defined by theDriver. Returns Standard_True in case of success. Otherwise, one need to get an error code and description using ErrorStatus and ErrorStatusExtension functions correspondingly.)#"  , py::arg("theDriver"))
        .def("CreationDate",
             (TCollection_AsciiString (StdStorage_HeaderData::*)() const) static_cast<TCollection_AsciiString (StdStorage_HeaderData::*)() const>(&StdStorage_HeaderData::CreationDate),
             R"#(Return the creation date)#" )
        .def("StorageVersion",
             (TCollection_AsciiString (StdStorage_HeaderData::*)() const) static_cast<TCollection_AsciiString (StdStorage_HeaderData::*)() const>(&StdStorage_HeaderData::StorageVersion),
             R"#(Return the Storage package version)#" )
        .def("SchemaVersion",
             (TCollection_AsciiString (StdStorage_HeaderData::*)() const) static_cast<TCollection_AsciiString (StdStorage_HeaderData::*)() const>(&StdStorage_HeaderData::SchemaVersion),
             R"#(Get the version of the schema)#" )
        .def("SetApplicationVersion",
             (void (StdStorage_HeaderData::*)( const TCollection_AsciiString & ) ) static_cast<void (StdStorage_HeaderData::*)( const TCollection_AsciiString & ) >(&StdStorage_HeaderData::SetApplicationVersion),
             R"#(Set the version of the application)#"  , py::arg("aVersion"))
        .def("ApplicationVersion",
             (TCollection_AsciiString (StdStorage_HeaderData::*)() const) static_cast<TCollection_AsciiString (StdStorage_HeaderData::*)() const>(&StdStorage_HeaderData::ApplicationVersion),
             R"#(Get the version of the application)#" )
        .def("SetApplicationName",
             (void (StdStorage_HeaderData::*)( const TCollection_ExtendedString & ) ) static_cast<void (StdStorage_HeaderData::*)( const TCollection_ExtendedString & ) >(&StdStorage_HeaderData::SetApplicationName),
             R"#(Set the name of the application)#"  , py::arg("aName"))
        .def("ApplicationName",
             (TCollection_ExtendedString (StdStorage_HeaderData::*)() const) static_cast<TCollection_ExtendedString (StdStorage_HeaderData::*)() const>(&StdStorage_HeaderData::ApplicationName),
             R"#(Get the name of the application)#" )
        .def("SetDataType",
             (void (StdStorage_HeaderData::*)( const TCollection_ExtendedString & ) ) static_cast<void (StdStorage_HeaderData::*)( const TCollection_ExtendedString & ) >(&StdStorage_HeaderData::SetDataType),
             R"#(Set the data type)#"  , py::arg("aType"))
        .def("DataType",
             (TCollection_ExtendedString (StdStorage_HeaderData::*)() const) static_cast<TCollection_ExtendedString (StdStorage_HeaderData::*)() const>(&StdStorage_HeaderData::DataType),
             R"#(Returns data type)#" )
        .def("AddToUserInfo",
             (void (StdStorage_HeaderData::*)( const TCollection_AsciiString & ) ) static_cast<void (StdStorage_HeaderData::*)( const TCollection_AsciiString & ) >(&StdStorage_HeaderData::AddToUserInfo),
             R"#(Add <theUserInfo> to the user informations)#"  , py::arg("theUserInfo"))
        .def("UserInfo",
             (const TColStd_SequenceOfAsciiString & (StdStorage_HeaderData::*)() const) static_cast<const TColStd_SequenceOfAsciiString & (StdStorage_HeaderData::*)() const>(&StdStorage_HeaderData::UserInfo),
             R"#(Return the user informations)#" )
        .def("AddToComments",
             (void (StdStorage_HeaderData::*)( const TCollection_ExtendedString & ) ) static_cast<void (StdStorage_HeaderData::*)( const TCollection_ExtendedString & ) >(&StdStorage_HeaderData::AddToComments),
             R"#(Add <theUserInfo> to the user informations)#"  , py::arg("aComment"))
        .def("Comments",
             (const TColStd_SequenceOfExtendedString & (StdStorage_HeaderData::*)() const) static_cast<const TColStd_SequenceOfExtendedString & (StdStorage_HeaderData::*)() const>(&StdStorage_HeaderData::Comments),
             R"#(Return the user informations)#" )
        .def("NumberOfObjects",
             (Standard_Integer (StdStorage_HeaderData::*)() const) static_cast<Standard_Integer (StdStorage_HeaderData::*)() const>(&StdStorage_HeaderData::NumberOfObjects),
             R"#(Returns the number of persistent objects)#" )
        .def("ErrorStatus",
             (Storage_Error (StdStorage_HeaderData::*)() const) static_cast<Storage_Error (StdStorage_HeaderData::*)() const>(&StdStorage_HeaderData::ErrorStatus),
             R"#(Returns a status of the latest call to Read / Write functions)#" )
        .def("ErrorStatusExtension",
             (TCollection_AsciiString (StdStorage_HeaderData::*)() const) static_cast<TCollection_AsciiString (StdStorage_HeaderData::*)() const>(&StdStorage_HeaderData::ErrorStatusExtension),
             R"#(Returns an error message if any of the latest call to Read / Write functions)#" )
        .def("ClearErrorStatus",
             (void (StdStorage_HeaderData::*)() ) static_cast<void (StdStorage_HeaderData::*)() >(&StdStorage_HeaderData::ClearErrorStatus),
             R"#(Clears error status)#" )
        .def("SetNumberOfObjects",
             (void (StdStorage_HeaderData::*)( const Standard_Integer ) ) static_cast<void (StdStorage_HeaderData::*)( const Standard_Integer ) >(&StdStorage_HeaderData::SetNumberOfObjects),
             R"#(None)#"  , py::arg("anObjectNumber"))
        .def("SetStorageVersion",
             (void (StdStorage_HeaderData::*)( const TCollection_AsciiString & ) ) static_cast<void (StdStorage_HeaderData::*)( const TCollection_AsciiString & ) >(&StdStorage_HeaderData::SetStorageVersion),
             R"#(None)#"  , py::arg("aVersion"))
        .def("SetCreationDate",
             (void (StdStorage_HeaderData::*)( const TCollection_AsciiString & ) ) static_cast<void (StdStorage_HeaderData::*)( const TCollection_AsciiString & ) >(&StdStorage_HeaderData::SetCreationDate),
             R"#(None)#"  , py::arg("aDate"))
        .def("SetSchemaVersion",
             (void (StdStorage_HeaderData::*)( const TCollection_AsciiString & ) ) static_cast<void (StdStorage_HeaderData::*)( const TCollection_AsciiString & ) >(&StdStorage_HeaderData::SetSchemaVersion),
             R"#(None)#"  , py::arg("aVersion"))
        .def("SetSchemaName",
             (void (StdStorage_HeaderData::*)( const TCollection_AsciiString & ) ) static_cast<void (StdStorage_HeaderData::*)( const TCollection_AsciiString & ) >(&StdStorage_HeaderData::SetSchemaName),
             R"#(None)#"  , py::arg("aName"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdStorage_HeaderData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdStorage_HeaderData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_Root ,opencascade::handle<StdStorage_Root> , Standard_Transient>>(m.attr("StdStorage_Root"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TCollection_AsciiString &,const opencascade::handle<StdObjMgt_Persistent> & >()  , py::arg("theName"),  py::arg("theObject") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdStorage_Root::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdStorage_Root::*)() const>(&StdStorage_Root::DynamicType),
             R"#(None)#" )
        .def("Name",
             (TCollection_AsciiString (StdStorage_Root::*)() const) static_cast<TCollection_AsciiString (StdStorage_Root::*)() const>(&StdStorage_Root::Name),
             R"#(Returns a name of the root)#" )
        .def("SetName",
             (void (StdStorage_Root::*)( const TCollection_AsciiString & ) ) static_cast<void (StdStorage_Root::*)( const TCollection_AsciiString & ) >(&StdStorage_Root::SetName),
             R"#(Sets a name to the root object)#"  , py::arg("theName"))
        .def("Object",
             (opencascade::handle<StdObjMgt_Persistent> (StdStorage_Root::*)() const) static_cast<opencascade::handle<StdObjMgt_Persistent> (StdStorage_Root::*)() const>(&StdStorage_Root::Object),
             R"#(Returns a root's persistent object)#" )
        .def("SetObject",
             (void (StdStorage_Root::*)( const opencascade::handle<StdObjMgt_Persistent> & ) ) static_cast<void (StdStorage_Root::*)( const opencascade::handle<StdObjMgt_Persistent> & ) >(&StdStorage_Root::SetObject),
             R"#(Sets a root's persistent object)#"  , py::arg("anObject"))
        .def("Type",
             (TCollection_AsciiString (StdStorage_Root::*)() const) static_cast<TCollection_AsciiString (StdStorage_Root::*)() const>(&StdStorage_Root::Type),
             R"#(Returns a root's persistent type)#" )
        .def("SetType",
             (void (StdStorage_Root::*)( const TCollection_AsciiString & ) ) static_cast<void (StdStorage_Root::*)( const TCollection_AsciiString & ) >(&StdStorage_Root::SetType),
             R"#(Sets a root's persistent type)#"  , py::arg("aType"))
        .def("Reference",
             (Standard_Integer (StdStorage_Root::*)() const) static_cast<Standard_Integer (StdStorage_Root::*)() const>(&StdStorage_Root::Reference),
             R"#(Returns root's position in the root data section)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdStorage_Root::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdStorage_Root::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_RootData ,opencascade::handle<StdStorage_RootData> , Standard_Transient>>(m.attr("StdStorage_RootData"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdStorage_RootData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdStorage_RootData::*)() const>(&StdStorage_RootData::DynamicType),
             R"#(None)#" )
        .def("Read",
             (Standard_Boolean (StdStorage_RootData::*)( Storage_BaseDriver & ) ) static_cast<Standard_Boolean (StdStorage_RootData::*)( Storage_BaseDriver & ) >(&StdStorage_RootData::Read),
             R"#(Reads the root data section from the container defined by theDriver. Returns Standard_True in case of success. Otherwise, one need to get an error code and description using ErrorStatus and ErrorStatusExtension functions correspondingly.)#"  , py::arg("theDriver"))
        .def("Write",
             (Standard_Boolean (StdStorage_RootData::*)( Storage_BaseDriver & ) ) static_cast<Standard_Boolean (StdStorage_RootData::*)( Storage_BaseDriver & ) >(&StdStorage_RootData::Write),
             R"#(Writes the root data section to the container defined by theDriver. Returns Standard_True in case of success. Otherwise, one need to get an error code and description using ErrorStatus and ErrorStatusExtension functions correspondingly.)#"  , py::arg("theDriver"))
        .def("NumberOfRoots",
             (Standard_Integer (StdStorage_RootData::*)() const) static_cast<Standard_Integer (StdStorage_RootData::*)() const>(&StdStorage_RootData::NumberOfRoots),
             R"#(Returns the number of roots.)#" )
        .def("AddRoot",
             (void (StdStorage_RootData::*)( const opencascade::handle<StdStorage_Root> & ) ) static_cast<void (StdStorage_RootData::*)( const opencascade::handle<StdStorage_Root> & ) >(&StdStorage_RootData::AddRoot),
             R"#(Add a root to <me>. If a root with same name is present, it will be replaced by <aRoot>.)#"  , py::arg("aRoot"))
        .def("Roots",
             (opencascade::handle<StdStorage_HSequenceOfRoots> (StdStorage_RootData::*)() const) static_cast<opencascade::handle<StdStorage_HSequenceOfRoots> (StdStorage_RootData::*)() const>(&StdStorage_RootData::Roots),
             R"#(Returns a sequence of all roots)#" )
        .def("Find",
             (opencascade::handle<StdStorage_Root> (StdStorage_RootData::*)( const TCollection_AsciiString & ) const) static_cast<opencascade::handle<StdStorage_Root> (StdStorage_RootData::*)( const TCollection_AsciiString & ) const>(&StdStorage_RootData::Find),
             R"#(Finds a root with name <aName>.)#"  , py::arg("aName"))
        .def("IsRoot",
             (Standard_Boolean (StdStorage_RootData::*)( const TCollection_AsciiString & ) const) static_cast<Standard_Boolean (StdStorage_RootData::*)( const TCollection_AsciiString & ) const>(&StdStorage_RootData::IsRoot),
             R"#(Returns Standard_True if <me> contains a root named <aName>)#"  , py::arg("aName"))
        .def("RemoveRoot",
             (void (StdStorage_RootData::*)( const TCollection_AsciiString & ) ) static_cast<void (StdStorage_RootData::*)( const TCollection_AsciiString & ) >(&StdStorage_RootData::RemoveRoot),
             R"#(Removes the root named <aName>.)#"  , py::arg("aName"))
        .def("ErrorStatus",
             (Storage_Error (StdStorage_RootData::*)() const) static_cast<Storage_Error (StdStorage_RootData::*)() const>(&StdStorage_RootData::ErrorStatus),
             R"#(Returns a status of the latest call to Read / Write functions)#" )
        .def("ErrorStatusExtension",
             (TCollection_AsciiString (StdStorage_RootData::*)() const) static_cast<TCollection_AsciiString (StdStorage_RootData::*)() const>(&StdStorage_RootData::ErrorStatusExtension),
             R"#(Returns an error message if any of the latest call to Read / Write functions)#" )
        .def("ClearErrorStatus",
             (void (StdStorage_RootData::*)() ) static_cast<void (StdStorage_RootData::*)() >(&StdStorage_RootData::ClearErrorStatus),
             R"#(Clears error status)#" )
        .def("Clear",
             (void (StdStorage_RootData::*)() ) static_cast<void (StdStorage_RootData::*)() >(&StdStorage_RootData::Clear),
             R"#(Removes all persistent root objects)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdStorage_RootData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdStorage_RootData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_TypeData ,opencascade::handle<StdStorage_TypeData> , Standard_Transient>>(m.attr("StdStorage_TypeData"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdStorage_TypeData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdStorage_TypeData::*)() const>(&StdStorage_TypeData::DynamicType),
             R"#(None)#" )
        .def("Read",
             (Standard_Boolean (StdStorage_TypeData::*)( Storage_BaseDriver & ) ) static_cast<Standard_Boolean (StdStorage_TypeData::*)( Storage_BaseDriver & ) >(&StdStorage_TypeData::Read),
             R"#(Reads the type data section from the container defined by theDriver. Returns Standard_True in case of success. Otherwise, one need to get an error code and description using ErrorStatus and ErrorStatusExtension functions correspondingly.)#"  , py::arg("theDriver"))
        .def("Write",
             (Standard_Boolean (StdStorage_TypeData::*)( Storage_BaseDriver & ) ) static_cast<Standard_Boolean (StdStorage_TypeData::*)( Storage_BaseDriver & ) >(&StdStorage_TypeData::Write),
             R"#(Writes the type data section to the container defined by theDriver. Returns Standard_True in case of success. Otherwise, one need to get an error code and description using ErrorStatus and ErrorStatusExtension functions correspondingly.)#"  , py::arg("theDriver"))
        .def("NumberOfTypes",
             (Standard_Integer (StdStorage_TypeData::*)() const) static_cast<Standard_Integer (StdStorage_TypeData::*)() const>(&StdStorage_TypeData::NumberOfTypes),
             R"#(Returns the number of registered types)#" )
        .def("AddType",
             (void (StdStorage_TypeData::*)( const TCollection_AsciiString & , const Standard_Integer ) ) static_cast<void (StdStorage_TypeData::*)( const TCollection_AsciiString & , const Standard_Integer ) >(&StdStorage_TypeData::AddType),
             R"#(Add a type to the list in case of reading data)#"  , py::arg("aTypeName"),  py::arg("aTypeNum"))
        .def("AddType",
             (Standard_Integer (StdStorage_TypeData::*)( const opencascade::handle<StdObjMgt_Persistent> & ) ) static_cast<Standard_Integer (StdStorage_TypeData::*)( const opencascade::handle<StdObjMgt_Persistent> & ) >(&StdStorage_TypeData::AddType),
             R"#(Add a type of the persistent object in case of writing data)#"  , py::arg("aPObj"))
        .def("Type",
             (TCollection_AsciiString (StdStorage_TypeData::*)( const Standard_Integer ) const) static_cast<TCollection_AsciiString (StdStorage_TypeData::*)( const Standard_Integer ) const>(&StdStorage_TypeData::Type),
             R"#(Returns the name of the type with number <aTypeNum>)#"  , py::arg("aTypeNum"))
        .def("Type",
             (Standard_Integer (StdStorage_TypeData::*)( const TCollection_AsciiString & ) const) static_cast<Standard_Integer (StdStorage_TypeData::*)( const TCollection_AsciiString & ) const>(&StdStorage_TypeData::Type),
             R"#(Returns the name of the type with number <aTypeNum>)#"  , py::arg("aTypeName"))
        .def("Instantiator",
             (StdObjMgt_Persistent::Instantiator (StdStorage_TypeData::*)( const Standard_Integer ) const) static_cast<StdObjMgt_Persistent::Instantiator (StdStorage_TypeData::*)( const Standard_Integer ) const>(&StdStorage_TypeData::Instantiator),
             R"#(Returns a persistent object instantiator of <aTypeName>)#"  , py::arg("aTypeNum"))
        .def("IsType",
             (Standard_Boolean (StdStorage_TypeData::*)( const TCollection_AsciiString & ) const) static_cast<Standard_Boolean (StdStorage_TypeData::*)( const TCollection_AsciiString & ) const>(&StdStorage_TypeData::IsType),
             R"#(Checks if <aName> is a registered type)#"  , py::arg("aName"))
        .def("Types",
             (opencascade::handle<TColStd_HSequenceOfAsciiString> (StdStorage_TypeData::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfAsciiString> (StdStorage_TypeData::*)() const>(&StdStorage_TypeData::Types),
             R"#(Returns a sequence of all registered types)#" )
        .def("ErrorStatus",
             (Storage_Error (StdStorage_TypeData::*)() const) static_cast<Storage_Error (StdStorage_TypeData::*)() const>(&StdStorage_TypeData::ErrorStatus),
             R"#(Returns a status of the latest call to Read / Write functions)#" )
        .def("ErrorStatusExtension",
             (TCollection_AsciiString (StdStorage_TypeData::*)() const) static_cast<TCollection_AsciiString (StdStorage_TypeData::*)() const>(&StdStorage_TypeData::ErrorStatusExtension),
             R"#(Returns an error message if any of the latest call to Read / Write functions)#" )
        .def("ClearErrorStatus",
             (void (StdStorage_TypeData::*)() ) static_cast<void (StdStorage_TypeData::*)() >(&StdStorage_TypeData::ClearErrorStatus),
             R"#(Clears error status)#" )
        .def("Clear",
             (void (StdStorage_TypeData::*)() ) static_cast<void (StdStorage_TypeData::*)() >(&StdStorage_TypeData::Clear),
             R"#(Unregisters all types)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdStorage_TypeData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdStorage_TypeData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StdStorage_BacketOfPersistent.hxx
// ./opencascade/StdStorage_MapOfTypes.hxx
// ./opencascade/StdStorage_SequenceOfRoots.hxx
// ./opencascade/StdStorage_HeaderData.hxx
// ./opencascade/StdStorage_Data.hxx
// ./opencascade/StdStorage_TypeData.hxx
// ./opencascade/StdStorage_Root.hxx
// ./opencascade/StdStorage.hxx
// ./opencascade/StdStorage_HSequenceOfRoots.hxx
// ./opencascade/StdStorage_RootData.hxx
// ./opencascade/StdStorage_MapOfRoots.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<StdStorage_Root> >(m,"StdStorage_SequenceOfRoots");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

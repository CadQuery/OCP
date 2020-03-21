
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_Persistent.hxx>
#include <Storage_Schema.hxx>
#include <Standard_Persistent.hxx>
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <Storage_Schema.hxx>
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <Standard_Persistent.hxx>
#include <TCollection_AsciiString.hxx>
#include <Storage_BaseDriver.hxx>
#include <Storage_CallBack.hxx>
#include <Storage_DefaultCallBack.hxx>
#include <Storage_HeaderData.hxx>
#include <Storage_Data.hxx>
#include <Storage_TypeData.hxx>
#include <Storage_RootData.hxx>
#include <Storage_Root.hxx>
#include <Storage_Schema.hxx>
#include <Storage_InternalData.hxx>
#include <Storage_TypedCallBack.hxx>
#include <Standard_Persistent.hxx>
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <Storage_CallBack.hxx>
#include <Storage_CallBack.hxx>
#include <Storage_StreamFormatError.hxx>
#include <Storage_HeaderData.hxx>
#include <Storage_TypeData.hxx>
#include <Storage_RootData.hxx>
#include <Storage_HeaderData.hxx>
#include <Storage_RootData.hxx>
#include <Storage_TypeData.hxx>
#include <Storage_InternalData.hxx>
#include <Storage_Schema.hxx>
#include <Standard_Persistent.hxx>
#include <Storage_Schema.hxx>
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <Storage_StreamFormatError.hxx>
#include <Storage_StreamWriteError.hxx>
#include <Storage_Schema.hxx>

// module includes
#include <Storage.hxx>
#include <Storage_ArrayOfCallBack.hxx>
#include <Storage_ArrayOfSchema.hxx>
#include <Storage_BaseDriver.hxx>
#include <Storage_BucketOfPersistent.hxx>
#include <Storage_CallBack.hxx>
#include <Storage_Data.hxx>
#include <Storage_DataMapIteratorOfMapOfCallBack.hxx>
#include <Storage_DataMapIteratorOfMapOfPers.hxx>
#include <Storage_DefaultCallBack.hxx>
#include <Storage_Error.hxx>
#include <Storage_HArrayOfCallBack.hxx>
#include <Storage_HArrayOfSchema.hxx>
#include <Storage_HeaderData.hxx>
#include <Storage_HPArray.hxx>
#include <Storage_HSeqOfRoot.hxx>
#include <Storage_InternalData.hxx>
#include <Storage_Macros.hxx>
#include <Storage_MapOfCallBack.hxx>
#include <Storage_MapOfPers.hxx>
#include <Storage_OpenMode.hxx>
#include <Storage_PArray.hxx>
#include <Storage_Position.hxx>
#include <Storage_PType.hxx>
#include <Storage_Root.hxx>
#include <Storage_RootData.hxx>
#include <Storage_Schema.hxx>
#include <Storage_SeqOfRoot.hxx>
#include <Storage_SolveMode.hxx>
#include <Storage_StreamExtCharParityError.hxx>
#include <Storage_StreamFormatError.hxx>
#include <Storage_StreamModeError.hxx>
#include <Storage_StreamReadError.hxx>
#include <Storage_StreamTypeMismatchError.hxx>
#include <Storage_StreamUnknownTypeError.hxx>
#include <Storage_StreamWriteError.hxx>
#include <Storage_TypeData.hxx>
#include <Storage_TypedCallBack.hxx>

// template related includes
// ./opencascade\Storage_ArrayOfSchema.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Storage_ArrayOfCallBack.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Storage_PArray.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Storage_PType.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Storage_MapOfPers.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Storage_MapOfCallBack.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Storage_SeqOfRoot.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Storage(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Storage"));


//Python trampoline classes
    class Py_Storage_BaseDriver : public Storage_BaseDriver{
    public:
        using Storage_BaseDriver::Storage_BaseDriver;


        // public pure virtual
        Storage_Error Open(const TCollection_AsciiString & aName,const Storage_OpenMode aMode) override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,Open,aName,aMode) };
        Standard_Boolean IsEnd() override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Storage_BaseDriver,IsEnd,) };
        Storage_Position Tell() override { PYBIND11_OVERLOAD_PURE(Storage_Position,Storage_BaseDriver,Tell,) };
        Storage_Error BeginWriteInfoSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,BeginWriteInfoSection,) };
        void WriteInfo(const Standard_Integer nbObj,const TCollection_AsciiString & dbVersion,const TCollection_AsciiString & date,const TCollection_AsciiString & schemaName,const TCollection_AsciiString & schemaVersion,const TCollection_ExtendedString & appName,const TCollection_AsciiString & appVersion,const TCollection_ExtendedString & objectType, const NCollection_Sequence<TCollection_AsciiString> & userInfo) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,WriteInfo,nbObj,dbVersion,date,schemaName,schemaVersion,appName,appVersion,objectType,userInfo) };
        Storage_Error EndWriteInfoSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,EndWriteInfoSection,) };
        Storage_Error BeginReadInfoSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,BeginReadInfoSection,) };
        void ReadCompleteInfo(std::istream & theIStream,opencascade::handle<Storage_Data> & theData) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,ReadCompleteInfo,theIStream,theData) };
        Storage_Error EndReadInfoSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,EndReadInfoSection,) };
        Storage_Error BeginWriteCommentSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,BeginWriteCommentSection,) };
        void WriteComment( const NCollection_Sequence<TCollection_ExtendedString> & userComments) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,WriteComment,userComments) };
        Storage_Error EndWriteCommentSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,EndWriteCommentSection,) };
        Storage_Error BeginReadCommentSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,BeginReadCommentSection,) };
        void ReadComment(NCollection_Sequence<TCollection_ExtendedString> & userComments) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,ReadComment,userComments) };
        Storage_Error EndReadCommentSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,EndReadCommentSection,) };
        Storage_Error BeginWriteTypeSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,BeginWriteTypeSection,) };
        void SetTypeSectionSize(const Standard_Integer aSize) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,SetTypeSectionSize,aSize) };
        void WriteTypeInformations(const Standard_Integer typeNum,const TCollection_AsciiString & typeName) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,WriteTypeInformations,typeNum,typeName) };
        Storage_Error EndWriteTypeSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,EndWriteTypeSection,) };
        Storage_Error BeginReadTypeSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,BeginReadTypeSection,) };
        Standard_Integer TypeSectionSize() override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Storage_BaseDriver,TypeSectionSize,) };
        Storage_Error EndReadTypeSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,EndReadTypeSection,) };
        Storage_Error BeginWriteRootSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,BeginWriteRootSection,) };
        void SetRootSectionSize(const Standard_Integer aSize) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,SetRootSectionSize,aSize) };
        void WriteRoot(const TCollection_AsciiString & rootName,const Standard_Integer aRef,const TCollection_AsciiString & aType) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,WriteRoot,rootName,aRef,aType) };
        Storage_Error EndWriteRootSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,EndWriteRootSection,) };
        Storage_Error BeginReadRootSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,BeginReadRootSection,) };
        Standard_Integer RootSectionSize() override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Storage_BaseDriver,RootSectionSize,) };
        Storage_Error EndReadRootSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,EndReadRootSection,) };
        Storage_Error BeginWriteRefSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,BeginWriteRefSection,) };
        void SetRefSectionSize(const Standard_Integer aSize) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,SetRefSectionSize,aSize) };
        void WriteReferenceType(const Standard_Integer reference,const Standard_Integer typeNum) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,WriteReferenceType,reference,typeNum) };
        Storage_Error EndWriteRefSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,EndWriteRefSection,) };
        Storage_Error BeginReadRefSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,BeginReadRefSection,) };
        Standard_Integer RefSectionSize() override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Storage_BaseDriver,RefSectionSize,) };
        Storage_Error EndReadRefSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,EndReadRefSection,) };
        Storage_Error BeginWriteDataSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,BeginWriteDataSection,) };
        void WritePersistentObjectHeader(const Standard_Integer aRef,const Standard_Integer aType) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,WritePersistentObjectHeader,aRef,aType) };
        void BeginWritePersistentObjectData() override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,BeginWritePersistentObjectData,) };
        void BeginWriteObjectData() override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,BeginWriteObjectData,) };
        void EndWriteObjectData() override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,EndWriteObjectData,) };
        void EndWritePersistentObjectData() override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,EndWritePersistentObjectData,) };
        Storage_Error EndWriteDataSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,EndWriteDataSection,) };
        Storage_Error BeginReadDataSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,BeginReadDataSection,) };
        void BeginReadPersistentObjectData() override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,BeginReadPersistentObjectData,) };
        void BeginReadObjectData() override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,BeginReadObjectData,) };
        void EndReadObjectData() override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,EndReadObjectData,) };
        void EndReadPersistentObjectData() override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,EndReadPersistentObjectData,) };
        Storage_Error EndReadDataSection() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,EndReadDataSection,) };
        void SkipObject() override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,SkipObject,) };
        Storage_BaseDriver & PutReference(const Standard_Integer aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,PutReference,aValue) };
        Storage_BaseDriver & PutCharacter(const Standard_Character aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,PutCharacter,aValue) };
        Storage_BaseDriver & PutExtCharacter(const Standard_ExtCharacter aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,PutExtCharacter,aValue) };
        Storage_BaseDriver & PutInteger(const Standard_Integer aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,PutInteger,aValue) };
        Storage_BaseDriver & PutBoolean(const Standard_Boolean aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,PutBoolean,aValue) };
        Storage_BaseDriver & PutReal(const Standard_Real aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,PutReal,aValue) };
        Storage_BaseDriver & PutShortReal(const Standard_ShortReal aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,PutShortReal,aValue) };
        Storage_BaseDriver & GetReference(Standard_Integer & aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,GetReference,aValue) };
        Storage_BaseDriver & GetCharacter(Standard_Character & aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,GetCharacter,aValue) };
        Storage_BaseDriver & GetExtCharacter(Standard_ExtCharacter & aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,GetExtCharacter,aValue) };
        Storage_BaseDriver & GetInteger(Standard_Integer & aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,GetInteger,aValue) };
        Storage_BaseDriver & GetBoolean(Standard_Boolean & aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,GetBoolean,aValue) };
        Storage_BaseDriver & GetReal(Standard_Real & aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,GetReal,aValue) };
        Storage_BaseDriver & GetShortReal(Standard_ShortReal & aValue) override { PYBIND11_OVERLOAD_PURE(Storage_BaseDriver &,Storage_BaseDriver,GetShortReal,aValue) };
        Storage_Error Close() override { PYBIND11_OVERLOAD_PURE(Storage_Error,Storage_BaseDriver,Close,) };
        void ReadInfo(Standard_Integer & nbObj,TCollection_AsciiString & dbVersion,TCollection_AsciiString & date,TCollection_AsciiString & schemaName,TCollection_AsciiString & schemaVersion,TCollection_ExtendedString & appName,TCollection_AsciiString & appVersion,TCollection_ExtendedString & objectType,NCollection_Sequence<TCollection_AsciiString> & userInfo) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,ReadInfo,nbObj,dbVersion,date,schemaName,schemaVersion,appName,appVersion,objectType,userInfo) };
        void ReadTypeInformations(Standard_Integer & typeNum,TCollection_AsciiString & typeName) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,ReadTypeInformations,typeNum,typeName) };
        void ReadRoot(TCollection_AsciiString & rootName,Standard_Integer & aRef,TCollection_AsciiString & aType) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,ReadRoot,rootName,aRef,aType) };
        void ReadReferenceType(Standard_Integer & reference,Standard_Integer & typeNum) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,ReadReferenceType,reference,typeNum) };
        void ReadPersistentObjectHeader(Standard_Integer & aRef,Standard_Integer & aType) override { PYBIND11_OVERLOAD_PURE(void,Storage_BaseDriver,ReadPersistentObjectHeader,aRef,aType) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Storage_CallBack : public Storage_CallBack{
    public:
        using Storage_CallBack::Storage_CallBack;


        // public pure virtual
        opencascade::handle<Standard_Persistent> New() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Standard_Persistent>,Storage_CallBack,New,) };
        void Add(const opencascade::handle<Standard_Persistent> & aPers,const opencascade::handle<Storage_Schema> & aSchema) const  override { PYBIND11_OVERLOAD_PURE(void,Storage_CallBack,Add,aPers,aSchema) };
        void Write(const opencascade::handle<Standard_Persistent> & aPers,Storage_BaseDriver & aDriver,const opencascade::handle<Storage_Schema> & aSchema) const  override { PYBIND11_OVERLOAD_PURE(void,Storage_CallBack,Write,aPers,aDriver,aSchema) };
        void Read(const opencascade::handle<Standard_Persistent> & aPers,Storage_BaseDriver & aDriver,const opencascade::handle<Storage_Schema> & aSchema) const  override { PYBIND11_OVERLOAD_PURE(void,Storage_CallBack,Read,aPers,aDriver,aSchema) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<Storage , shared_ptr<Storage>>(m,"Storage");

    static_cast<py::class_<Storage , shared_ptr<Storage> >>(m.attr("Storage"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Version_s",
                    (TCollection_AsciiString (*)() ) static_cast<TCollection_AsciiString (*)() >(&Storage::Version),
                    R"#(returns the version of Storage's read/write routines)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_BaseDriver , shared_ptr<Storage_BaseDriver>,Py_Storage_BaseDriver >>(m.attr("Storage_BaseDriver"))
    // constructors
    // custom constructors
    // methods
        .def("Open",
             (Storage_Error (Storage_BaseDriver::*)( const TCollection_AsciiString & , const Storage_OpenMode ) ) static_cast<Storage_Error (Storage_BaseDriver::*)( const TCollection_AsciiString & , const Storage_OpenMode ) >(&Storage_BaseDriver::Open),
             R"#(None)#"  , py::arg("aName"),  py::arg("aMode"))
        .def("Name",
             (TCollection_AsciiString (Storage_BaseDriver::*)() const) static_cast<TCollection_AsciiString (Storage_BaseDriver::*)() const>(&Storage_BaseDriver::Name),
             R"#(None)#" )
        .def("OpenMode",
             (Storage_OpenMode (Storage_BaseDriver::*)() const) static_cast<Storage_OpenMode (Storage_BaseDriver::*)() const>(&Storage_BaseDriver::OpenMode),
             R"#(None)#" )
        .def("IsEnd",
             (Standard_Boolean (Storage_BaseDriver::*)() ) static_cast<Standard_Boolean (Storage_BaseDriver::*)() >(&Storage_BaseDriver::IsEnd),
             R"#(returns True if we are at end of the stream)#" )
        .def("Tell",
             (Storage_Position (Storage_BaseDriver::*)() ) static_cast<Storage_Position (Storage_BaseDriver::*)() >(&Storage_BaseDriver::Tell),
             R"#(return position in the file. Return -1 upon error.)#" )
        .def("BeginWriteInfoSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginWriteInfoSection),
             R"#(None)#" )
        .def("WriteInfo",
             (void (Storage_BaseDriver::*)( const Standard_Integer , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_ExtendedString & , const TCollection_AsciiString & , const TCollection_ExtendedString & ,  const NCollection_Sequence<TCollection_AsciiString> & ) ) static_cast<void (Storage_BaseDriver::*)( const Standard_Integer , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_ExtendedString & , const TCollection_AsciiString & , const TCollection_ExtendedString & ,  const NCollection_Sequence<TCollection_AsciiString> & ) >(&Storage_BaseDriver::WriteInfo),
             R"#(None)#"  , py::arg("nbObj"),  py::arg("dbVersion"),  py::arg("date"),  py::arg("schemaName"),  py::arg("schemaVersion"),  py::arg("appName"),  py::arg("appVersion"),  py::arg("objectType"),  py::arg("userInfo"))
        .def("EndWriteInfoSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndWriteInfoSection),
             R"#(None)#" )
        .def("BeginReadInfoSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginReadInfoSection),
             R"#(None)#" )
        .def("ReadCompleteInfo",
             (void (Storage_BaseDriver::*)( std::istream & , opencascade::handle<Storage_Data> & ) ) static_cast<void (Storage_BaseDriver::*)( std::istream & , opencascade::handle<Storage_Data> & ) >(&Storage_BaseDriver::ReadCompleteInfo),
             R"#(None)#"  , py::arg("theIStream"),  py::arg("theData"))
        .def("EndReadInfoSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndReadInfoSection),
             R"#(None)#" )
        .def("BeginWriteCommentSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginWriteCommentSection),
             R"#(None)#" )
        .def("WriteComment",
             (void (Storage_BaseDriver::*)(  const NCollection_Sequence<TCollection_ExtendedString> & ) ) static_cast<void (Storage_BaseDriver::*)(  const NCollection_Sequence<TCollection_ExtendedString> & ) >(&Storage_BaseDriver::WriteComment),
             R"#(None)#"  , py::arg("userComments"))
        .def("EndWriteCommentSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndWriteCommentSection),
             R"#(None)#" )
        .def("BeginReadCommentSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginReadCommentSection),
             R"#(None)#" )
        .def("ReadComment",
             (void (Storage_BaseDriver::*)( NCollection_Sequence<TCollection_ExtendedString> & ) ) static_cast<void (Storage_BaseDriver::*)( NCollection_Sequence<TCollection_ExtendedString> & ) >(&Storage_BaseDriver::ReadComment),
             R"#(None)#"  , py::arg("userComments"))
        .def("EndReadCommentSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndReadCommentSection),
             R"#(None)#" )
        .def("BeginWriteTypeSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginWriteTypeSection),
             R"#(None)#" )
        .def("SetTypeSectionSize",
             (void (Storage_BaseDriver::*)( const Standard_Integer ) ) static_cast<void (Storage_BaseDriver::*)( const Standard_Integer ) >(&Storage_BaseDriver::SetTypeSectionSize),
             R"#(None)#"  , py::arg("aSize"))
        .def("WriteTypeInformations",
             (void (Storage_BaseDriver::*)( const Standard_Integer , const TCollection_AsciiString & ) ) static_cast<void (Storage_BaseDriver::*)( const Standard_Integer , const TCollection_AsciiString & ) >(&Storage_BaseDriver::WriteTypeInformations),
             R"#(None)#"  , py::arg("typeNum"),  py::arg("typeName"))
        .def("EndWriteTypeSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndWriteTypeSection),
             R"#(None)#" )
        .def("BeginReadTypeSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginReadTypeSection),
             R"#(None)#" )
        .def("TypeSectionSize",
             (Standard_Integer (Storage_BaseDriver::*)() ) static_cast<Standard_Integer (Storage_BaseDriver::*)() >(&Storage_BaseDriver::TypeSectionSize),
             R"#(None)#" )
        .def("EndReadTypeSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndReadTypeSection),
             R"#(None)#" )
        .def("BeginWriteRootSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginWriteRootSection),
             R"#(None)#" )
        .def("SetRootSectionSize",
             (void (Storage_BaseDriver::*)( const Standard_Integer ) ) static_cast<void (Storage_BaseDriver::*)( const Standard_Integer ) >(&Storage_BaseDriver::SetRootSectionSize),
             R"#(None)#"  , py::arg("aSize"))
        .def("WriteRoot",
             (void (Storage_BaseDriver::*)( const TCollection_AsciiString & , const Standard_Integer , const TCollection_AsciiString & ) ) static_cast<void (Storage_BaseDriver::*)( const TCollection_AsciiString & , const Standard_Integer , const TCollection_AsciiString & ) >(&Storage_BaseDriver::WriteRoot),
             R"#(None)#"  , py::arg("rootName"),  py::arg("aRef"),  py::arg("aType"))
        .def("EndWriteRootSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndWriteRootSection),
             R"#(None)#" )
        .def("BeginReadRootSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginReadRootSection),
             R"#(None)#" )
        .def("RootSectionSize",
             (Standard_Integer (Storage_BaseDriver::*)() ) static_cast<Standard_Integer (Storage_BaseDriver::*)() >(&Storage_BaseDriver::RootSectionSize),
             R"#(None)#" )
        .def("EndReadRootSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndReadRootSection),
             R"#(None)#" )
        .def("BeginWriteRefSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginWriteRefSection),
             R"#(None)#" )
        .def("SetRefSectionSize",
             (void (Storage_BaseDriver::*)( const Standard_Integer ) ) static_cast<void (Storage_BaseDriver::*)( const Standard_Integer ) >(&Storage_BaseDriver::SetRefSectionSize),
             R"#(None)#"  , py::arg("aSize"))
        .def("WriteReferenceType",
             (void (Storage_BaseDriver::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Storage_BaseDriver::*)( const Standard_Integer , const Standard_Integer ) >(&Storage_BaseDriver::WriteReferenceType),
             R"#(None)#"  , py::arg("reference"),  py::arg("typeNum"))
        .def("EndWriteRefSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndWriteRefSection),
             R"#(None)#" )
        .def("BeginReadRefSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginReadRefSection),
             R"#(None)#" )
        .def("RefSectionSize",
             (Standard_Integer (Storage_BaseDriver::*)() ) static_cast<Standard_Integer (Storage_BaseDriver::*)() >(&Storage_BaseDriver::RefSectionSize),
             R"#(None)#" )
        .def("EndReadRefSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndReadRefSection),
             R"#(None)#" )
        .def("BeginWriteDataSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginWriteDataSection),
             R"#(None)#" )
        .def("WritePersistentObjectHeader",
             (void (Storage_BaseDriver::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Storage_BaseDriver::*)( const Standard_Integer , const Standard_Integer ) >(&Storage_BaseDriver::WritePersistentObjectHeader),
             R"#(None)#"  , py::arg("aRef"),  py::arg("aType"))
        .def("BeginWritePersistentObjectData",
             (void (Storage_BaseDriver::*)() ) static_cast<void (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginWritePersistentObjectData),
             R"#(None)#" )
        .def("BeginWriteObjectData",
             (void (Storage_BaseDriver::*)() ) static_cast<void (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginWriteObjectData),
             R"#(None)#" )
        .def("EndWriteObjectData",
             (void (Storage_BaseDriver::*)() ) static_cast<void (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndWriteObjectData),
             R"#(None)#" )
        .def("EndWritePersistentObjectData",
             (void (Storage_BaseDriver::*)() ) static_cast<void (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndWritePersistentObjectData),
             R"#(None)#" )
        .def("EndWriteDataSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndWriteDataSection),
             R"#(None)#" )
        .def("BeginReadDataSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginReadDataSection),
             R"#(None)#" )
        .def("BeginReadPersistentObjectData",
             (void (Storage_BaseDriver::*)() ) static_cast<void (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginReadPersistentObjectData),
             R"#(None)#" )
        .def("BeginReadObjectData",
             (void (Storage_BaseDriver::*)() ) static_cast<void (Storage_BaseDriver::*)() >(&Storage_BaseDriver::BeginReadObjectData),
             R"#(None)#" )
        .def("EndReadObjectData",
             (void (Storage_BaseDriver::*)() ) static_cast<void (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndReadObjectData),
             R"#(None)#" )
        .def("EndReadPersistentObjectData",
             (void (Storage_BaseDriver::*)() ) static_cast<void (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndReadPersistentObjectData),
             R"#(None)#" )
        .def("EndReadDataSection",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::EndReadDataSection),
             R"#(None)#" )
        .def("SkipObject",
             (void (Storage_BaseDriver::*)() ) static_cast<void (Storage_BaseDriver::*)() >(&Storage_BaseDriver::SkipObject),
             R"#(None)#" )
        .def("PutReference",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_Integer ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_Integer ) >(&Storage_BaseDriver::PutReference),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutCharacter",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_Character ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_Character ) >(&Storage_BaseDriver::PutCharacter),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutExtCharacter",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_ExtCharacter ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_ExtCharacter ) >(&Storage_BaseDriver::PutExtCharacter),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutInteger",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_Integer ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_Integer ) >(&Storage_BaseDriver::PutInteger),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutBoolean",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_Boolean ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_Boolean ) >(&Storage_BaseDriver::PutBoolean),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutReal",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_Real ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_Real ) >(&Storage_BaseDriver::PutReal),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutShortReal",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_ShortReal ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( const Standard_ShortReal ) >(&Storage_BaseDriver::PutShortReal),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetReference",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_Integer & ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_Integer & ) >(&Storage_BaseDriver::GetReference),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetCharacter",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_Character & ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_Character & ) >(&Storage_BaseDriver::GetCharacter),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetExtCharacter",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_ExtCharacter & ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_ExtCharacter & ) >(&Storage_BaseDriver::GetExtCharacter),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetInteger",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_Integer & ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_Integer & ) >(&Storage_BaseDriver::GetInteger),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetBoolean",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_Boolean & ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_Boolean & ) >(&Storage_BaseDriver::GetBoolean),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetReal",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_Real & ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_Real & ) >(&Storage_BaseDriver::GetReal),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetShortReal",
             (Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_ShortReal & ) ) static_cast<Storage_BaseDriver & (Storage_BaseDriver::*)( Standard_ShortReal & ) >(&Storage_BaseDriver::GetShortReal),
             R"#(None)#"  , py::arg("aValue"))
        .def("Close",
             (Storage_Error (Storage_BaseDriver::*)() ) static_cast<Storage_Error (Storage_BaseDriver::*)() >(&Storage_BaseDriver::Close),
             R"#(None)#" )
        .def("Name",
             (TCollection_AsciiString (Storage_BaseDriver::*)() const) static_cast<TCollection_AsciiString (Storage_BaseDriver::*)() const>(&Storage_BaseDriver::Name),
             R"#(None)#" )
        .def("OpenMode",
             (Storage_OpenMode (Storage_BaseDriver::*)() const) static_cast<Storage_OpenMode (Storage_BaseDriver::*)() const>(&Storage_BaseDriver::OpenMode),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("ReadInfo",
             []( Storage_BaseDriver &self , TCollection_AsciiString & dbVersion,TCollection_AsciiString & date,TCollection_AsciiString & schemaName,TCollection_AsciiString & schemaVersion,TCollection_ExtendedString & appName,TCollection_AsciiString & appVersion,TCollection_ExtendedString & objectType,NCollection_Sequence<TCollection_AsciiString> & userInfo ){ Standard_Integer  nbObj; self.ReadInfo(nbObj,dbVersion,date,schemaName,schemaVersion,appName,appVersion,objectType,userInfo); return std::make_tuple(nbObj); },
             R"#(None)#"  , py::arg("dbVersion"),  py::arg("date"),  py::arg("schemaName"),  py::arg("schemaVersion"),  py::arg("appName"),  py::arg("appVersion"),  py::arg("objectType"),  py::arg("userInfo"))
        .def("ReadTypeInformations",
             []( Storage_BaseDriver &self , TCollection_AsciiString & typeName ){ Standard_Integer  typeNum; self.ReadTypeInformations(typeNum,typeName); return std::make_tuple(typeNum); },
             R"#(None)#"  , py::arg("typeName"))
        .def("ReadRoot",
             []( Storage_BaseDriver &self , TCollection_AsciiString & rootName,TCollection_AsciiString & aType ){ Standard_Integer  aRef; self.ReadRoot(rootName,aRef,aType); return std::make_tuple(aRef); },
             R"#(None)#"  , py::arg("rootName"),  py::arg("aType"))
        .def("ReadReferenceType",
             []( Storage_BaseDriver &self   ){ Standard_Integer  reference; Standard_Integer  typeNum; self.ReadReferenceType(reference,typeNum); return std::make_tuple(reference,typeNum); },
             R"#(None)#" )
        .def("ReadPersistentObjectHeader",
             []( Storage_BaseDriver &self   ){ Standard_Integer  aRef; Standard_Integer  aType; self.ReadPersistentObjectHeader(aRef,aType); return std::make_tuple(aRef,aType); },
             R"#(None)#" )
    // static methods
        .def_static("ReadMagicNumber_s",
                    (TCollection_AsciiString (*)( std::istream & ) ) static_cast<TCollection_AsciiString (*)( std::istream & ) >(&Storage_BaseDriver::ReadMagicNumber),
                    R"#(None)#"  , py::arg("theIStream"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_BucketIterator , shared_ptr<Storage_BucketIterator> >>(m.attr("Storage_BucketIterator"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Persistent * (Storage_BucketIterator::*)() const) static_cast<Standard_Persistent * (Storage_BucketIterator::*)() const>(&Storage_BucketIterator::Value),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (Storage_BucketIterator::*)() const) static_cast<Standard_Boolean (Storage_BucketIterator::*)() const>(&Storage_BucketIterator::More),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_CallBack ,opencascade::handle<Storage_CallBack>,Py_Storage_CallBack , Standard_Transient>>(m.attr("Storage_CallBack"))
    // constructors
    // custom constructors
    // methods
        .def("New",
             (opencascade::handle<Standard_Persistent> (Storage_CallBack::*)() const) static_cast<opencascade::handle<Standard_Persistent> (Storage_CallBack::*)() const>(&Storage_CallBack::New),
             R"#(None)#" )
        .def("Add",
             (void (Storage_CallBack::*)( const opencascade::handle<Standard_Persistent> & , const opencascade::handle<Storage_Schema> & ) const) static_cast<void (Storage_CallBack::*)( const opencascade::handle<Standard_Persistent> & , const opencascade::handle<Storage_Schema> & ) const>(&Storage_CallBack::Add),
             R"#(None)#"  , py::arg("aPers"),  py::arg("aSchema"))
        .def("Write",
             (void (Storage_CallBack::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & , const opencascade::handle<Storage_Schema> & ) const) static_cast<void (Storage_CallBack::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & , const opencascade::handle<Storage_Schema> & ) const>(&Storage_CallBack::Write),
             R"#(None)#"  , py::arg("aPers"),  py::arg("aDriver"),  py::arg("aSchema"))
        .def("Read",
             (void (Storage_CallBack::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & , const opencascade::handle<Storage_Schema> & ) const) static_cast<void (Storage_CallBack::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & , const opencascade::handle<Storage_Schema> & ) const>(&Storage_CallBack::Read),
             R"#(None)#"  , py::arg("aPers"),  py::arg("aDriver"),  py::arg("aSchema"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_CallBack::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_CallBack::*)() const>(&Storage_CallBack::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_CallBack::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_CallBack::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_Data ,opencascade::handle<Storage_Data> , Standard_Transient>>(m.attr("Storage_Data"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ErrorStatus",
             (Storage_Error (Storage_Data::*)() const) static_cast<Storage_Error (Storage_Data::*)() const>(&Storage_Data::ErrorStatus),
             R"#(Returns Storage_VSOk if - the last storage operation performed with the function Read, or - the last retrieval operation performed with the function Write by a Storage_Schema algorithm, on this set of data was successful. If the storage or retrieval operation was not performed, the returned error status indicates the reason why the operation failed. The algorithm stops its analysis at the first detected error)#" )
        .def("ClearErrorStatus",
             (void (Storage_Data::*)() ) static_cast<void (Storage_Data::*)() >(&Storage_Data::ClearErrorStatus),
             R"#(Clears the error status positioned either by: - the last storage operation performed with the Read function, or - the last retrieval operation performed with the Write function by a Storage_Schema algorithm, on this set of data. This error status may be read by the function ErrorStatus.)#" )
        .def("ErrorStatusExtension",
             (TCollection_AsciiString (Storage_Data::*)() const) static_cast<TCollection_AsciiString (Storage_Data::*)() const>(&Storage_Data::ErrorStatusExtension),
             R"#(None)#" )
        .def("CreationDate",
             (TCollection_AsciiString (Storage_Data::*)() const) static_cast<TCollection_AsciiString (Storage_Data::*)() const>(&Storage_Data::CreationDate),
             R"#(return the creation date)#" )
        .def("StorageVersion",
             (TCollection_AsciiString (Storage_Data::*)() const) static_cast<TCollection_AsciiString (Storage_Data::*)() const>(&Storage_Data::StorageVersion),
             R"#(return the Storage package version)#" )
        .def("SchemaVersion",
             (TCollection_AsciiString (Storage_Data::*)() const) static_cast<TCollection_AsciiString (Storage_Data::*)() const>(&Storage_Data::SchemaVersion),
             R"#(get the version of the schema)#" )
        .def("SchemaName",
             (TCollection_AsciiString (Storage_Data::*)() const) static_cast<TCollection_AsciiString (Storage_Data::*)() const>(&Storage_Data::SchemaName),
             R"#(get the schema's name)#" )
        .def("SetApplicationVersion",
             (void (Storage_Data::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_Data::*)( const TCollection_AsciiString & ) >(&Storage_Data::SetApplicationVersion),
             R"#(set the version of the application)#"  , py::arg("aVersion"))
        .def("ApplicationVersion",
             (TCollection_AsciiString (Storage_Data::*)() const) static_cast<TCollection_AsciiString (Storage_Data::*)() const>(&Storage_Data::ApplicationVersion),
             R"#(get the version of the application)#" )
        .def("SetApplicationName",
             (void (Storage_Data::*)( const TCollection_ExtendedString & ) ) static_cast<void (Storage_Data::*)( const TCollection_ExtendedString & ) >(&Storage_Data::SetApplicationName),
             R"#(set the name of the application)#"  , py::arg("aName"))
        .def("ApplicationName",
             (TCollection_ExtendedString (Storage_Data::*)() const) static_cast<TCollection_ExtendedString (Storage_Data::*)() const>(&Storage_Data::ApplicationName),
             R"#(get the name of the application)#" )
        .def("SetDataType",
             (void (Storage_Data::*)( const TCollection_ExtendedString & ) ) static_cast<void (Storage_Data::*)( const TCollection_ExtendedString & ) >(&Storage_Data::SetDataType),
             R"#(set the data type)#"  , py::arg("aType"))
        .def("DataType",
             (TCollection_ExtendedString (Storage_Data::*)() const) static_cast<TCollection_ExtendedString (Storage_Data::*)() const>(&Storage_Data::DataType),
             R"#(returns data type)#" )
        .def("AddToUserInfo",
             (void (Storage_Data::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_Data::*)( const TCollection_AsciiString & ) >(&Storage_Data::AddToUserInfo),
             R"#(add <theUserInfo> to the user informations)#"  , py::arg("anInfo"))
        .def("UserInfo",
             (const TColStd_SequenceOfAsciiString & (Storage_Data::*)() const) static_cast<const TColStd_SequenceOfAsciiString & (Storage_Data::*)() const>(&Storage_Data::UserInfo),
             R"#(return the user informations)#" )
        .def("AddToComments",
             (void (Storage_Data::*)( const TCollection_ExtendedString & ) ) static_cast<void (Storage_Data::*)( const TCollection_ExtendedString & ) >(&Storage_Data::AddToComments),
             R"#(add <theUserInfo> to the user informations)#"  , py::arg("aComment"))
        .def("Comments",
             (const TColStd_SequenceOfExtendedString & (Storage_Data::*)() const) static_cast<const TColStd_SequenceOfExtendedString & (Storage_Data::*)() const>(&Storage_Data::Comments),
             R"#(return the user informations)#" )
        .def("NumberOfObjects",
             (Standard_Integer (Storage_Data::*)() const) static_cast<Standard_Integer (Storage_Data::*)() const>(&Storage_Data::NumberOfObjects),
             R"#(the the number of persistent objects Return: the number of persistent objects readed)#" )
        .def("NumberOfRoots",
             (Standard_Integer (Storage_Data::*)() const) static_cast<Standard_Integer (Storage_Data::*)() const>(&Storage_Data::NumberOfRoots),
             R"#(Returns the number of root objects in this set of data. - When preparing a storage operation, the result is the number of roots inserted into this set of data with the function AddRoot. - When retrieving an object, the result is the number of roots stored in the read container. Use the Roots function to get these roots in a sequence.)#" )
        .def("AddRoot",
             (void (Storage_Data::*)( const opencascade::handle<Standard_Persistent> & ) const) static_cast<void (Storage_Data::*)( const opencascade::handle<Standard_Persistent> & ) const>(&Storage_Data::AddRoot),
             R"#(add a persistent root to write. the name of the root is a driver reference number.)#"  , py::arg("anObject"))
        .def("AddRoot",
             (void (Storage_Data::*)( const TCollection_AsciiString & , const opencascade::handle<Standard_Persistent> & ) const) static_cast<void (Storage_Data::*)( const TCollection_AsciiString & , const opencascade::handle<Standard_Persistent> & ) const>(&Storage_Data::AddRoot),
             R"#(Adds the root anObject to this set of data. The name of the root is aName if given; if not, it will be a reference number assigned by the driver when writing the set of data into the container. When naming the roots, it is easier to retrieve objects by significant references rather than by references without any semantic values.)#"  , py::arg("aName"),  py::arg("anObject"))
        .def("RemoveRoot",
             (void (Storage_Data::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_Data::*)( const TCollection_AsciiString & ) >(&Storage_Data::RemoveRoot),
             R"#(Removes from this set of data the root object named aName. Warning Nothing is done if there is no root object whose name is aName in this set of data.)#"  , py::arg("aName"))
        .def("Roots",
             (opencascade::handle<Storage_HSeqOfRoot> (Storage_Data::*)() const) static_cast<opencascade::handle<Storage_HSeqOfRoot> (Storage_Data::*)() const>(&Storage_Data::Roots),
             R"#(Returns the roots of this set of data in a sequence. - When preparing a storage operation, the sequence contains the roots inserted into this set of data with the function AddRoot. - When retrieving an object, the sequence contains the roots stored in the container read. - An empty sequence is returned if there is no root in this set of data.)#" )
        .def("Find",
             (opencascade::handle<Storage_Root> (Storage_Data::*)( const TCollection_AsciiString & ) const) static_cast<opencascade::handle<Storage_Root> (Storage_Data::*)( const TCollection_AsciiString & ) const>(&Storage_Data::Find),
             R"#(Gives the root object whose name is aName in this set of data. The returned object is a Storage_Root object, from which the object it encapsulates may be extracted. Warning A null handle is returned if there is no root object whose name is aName in this set of data.)#"  , py::arg("aName"))
        .def("IsRoot",
             (Standard_Boolean (Storage_Data::*)( const TCollection_AsciiString & ) const) static_cast<Standard_Boolean (Storage_Data::*)( const TCollection_AsciiString & ) const>(&Storage_Data::IsRoot),
             R"#(returns Standard_True if <me> contains a root named <aName>)#"  , py::arg("aName"))
        .def("NumberOfTypes",
             (Standard_Integer (Storage_Data::*)() const) static_cast<Standard_Integer (Storage_Data::*)() const>(&Storage_Data::NumberOfTypes),
             R"#(Returns the number of types of objects used in this set of data.)#" )
        .def("IsType",
             (Standard_Boolean (Storage_Data::*)( const TCollection_AsciiString & ) const) static_cast<Standard_Boolean (Storage_Data::*)( const TCollection_AsciiString & ) const>(&Storage_Data::IsType),
             R"#(Returns true if this set of data contains an object of type aName. Persistent objects from this set of data must have types which are recognized by the Storage_Schema algorithm used to store or retrieve them.)#"  , py::arg("aName"))
        .def("Types",
             (opencascade::handle<TColStd_HSequenceOfAsciiString> (Storage_Data::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfAsciiString> (Storage_Data::*)() const>(&Storage_Data::Types),
             R"#(Gives the list of types of objects used in this set of data in a sequence.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_Data::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_Data::*)() const>(&Storage_Data::DynamicType),
             R"#(None)#" )
        .def("HeaderData",
             (opencascade::handle<Storage_HeaderData> (Storage_Data::*)() const) static_cast<opencascade::handle<Storage_HeaderData> (Storage_Data::*)() const>(&Storage_Data::HeaderData),
             R"#(None)#" )
        .def("RootData",
             (opencascade::handle<Storage_RootData> (Storage_Data::*)() const) static_cast<opencascade::handle<Storage_RootData> (Storage_Data::*)() const>(&Storage_Data::RootData),
             R"#(None)#" )
        .def("TypeData",
             (opencascade::handle<Storage_TypeData> (Storage_Data::*)() const) static_cast<opencascade::handle<Storage_TypeData> (Storage_Data::*)() const>(&Storage_Data::TypeData),
             R"#(None)#" )
        .def("InternalData",
             (opencascade::handle<Storage_InternalData> (Storage_Data::*)() const) static_cast<opencascade::handle<Storage_InternalData> (Storage_Data::*)() const>(&Storage_Data::InternalData),
             R"#(None)#" )
        .def("Clear",
             (void (Storage_Data::*)() const) static_cast<void (Storage_Data::*)() const>(&Storage_Data::Clear),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_Data::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_Data::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_HArrayOfCallBack ,opencascade::handle<Storage_HArrayOfCallBack> , Storage_ArrayOfCallBack, Standard_Transient>>(m.attr("Storage_HArrayOfCallBack"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Storage_CallBack> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Storage_CallBack> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Storage_ArrayOfCallBack & (Storage_HArrayOfCallBack::*)() const) static_cast<const Storage_ArrayOfCallBack & (Storage_HArrayOfCallBack::*)() const>(&Storage_HArrayOfCallBack::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Storage_ArrayOfCallBack & (Storage_HArrayOfCallBack::*)() ) static_cast<Storage_ArrayOfCallBack & (Storage_HArrayOfCallBack::*)() >(&Storage_HArrayOfCallBack::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_HArrayOfCallBack::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_HArrayOfCallBack::*)() const>(&Storage_HArrayOfCallBack::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_HArrayOfCallBack::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_HArrayOfCallBack::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_HArrayOfSchema ,opencascade::handle<Storage_HArrayOfSchema> , Storage_ArrayOfSchema, Standard_Transient>>(m.attr("Storage_HArrayOfSchema"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Storage_Schema> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Storage_Schema> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Storage_ArrayOfSchema & (Storage_HArrayOfSchema::*)() const) static_cast<const Storage_ArrayOfSchema & (Storage_HArrayOfSchema::*)() const>(&Storage_HArrayOfSchema::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Storage_ArrayOfSchema & (Storage_HArrayOfSchema::*)() ) static_cast<Storage_ArrayOfSchema & (Storage_HArrayOfSchema::*)() >(&Storage_HArrayOfSchema::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_HArrayOfSchema::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_HArrayOfSchema::*)() const>(&Storage_HArrayOfSchema::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_HArrayOfSchema::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_HArrayOfSchema::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_HPArray ,opencascade::handle<Storage_HPArray> , Storage_PArray, Standard_Transient>>(m.attr("Storage_HPArray"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Standard_Persistent> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Standard_Persistent> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Storage_PArray & (Storage_HPArray::*)() const) static_cast<const Storage_PArray & (Storage_HPArray::*)() const>(&Storage_HPArray::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Storage_PArray & (Storage_HPArray::*)() ) static_cast<Storage_PArray & (Storage_HPArray::*)() >(&Storage_HPArray::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_HPArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_HPArray::*)() const>(&Storage_HPArray::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_HPArray::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_HPArray::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_HSeqOfRoot ,opencascade::handle<Storage_HSeqOfRoot> , Storage_SeqOfRoot, Standard_Transient>>(m.attr("Storage_HSeqOfRoot"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Storage_Root> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const Storage_SeqOfRoot & (Storage_HSeqOfRoot::*)() const) static_cast<const Storage_SeqOfRoot & (Storage_HSeqOfRoot::*)() const>(&Storage_HSeqOfRoot::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (Storage_HSeqOfRoot::*)(  const opencascade::handle<Storage_Root> & ) ) static_cast<void (Storage_HSeqOfRoot::*)(  const opencascade::handle<Storage_Root> & ) >(&Storage_HSeqOfRoot::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (Storage_HSeqOfRoot::*)( NCollection_Sequence<opencascade::handle<Storage_Root> > & ) ) static_cast<void (Storage_HSeqOfRoot::*)( NCollection_Sequence<opencascade::handle<Storage_Root> > & ) >(&Storage_HSeqOfRoot::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (Storage_SeqOfRoot & (Storage_HSeqOfRoot::*)() ) static_cast<Storage_SeqOfRoot & (Storage_HSeqOfRoot::*)() >(&Storage_HSeqOfRoot::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_HSeqOfRoot::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_HSeqOfRoot::*)() const>(&Storage_HSeqOfRoot::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_HSeqOfRoot::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_HSeqOfRoot::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_HeaderData ,opencascade::handle<Storage_HeaderData> , Standard_Transient>>(m.attr("Storage_HeaderData"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Read",
             (Standard_Boolean (Storage_HeaderData::*)( Storage_BaseDriver & ) ) static_cast<Standard_Boolean (Storage_HeaderData::*)( Storage_BaseDriver & ) >(&Storage_HeaderData::Read),
             R"#(None)#"  , py::arg("theDriver"))
        .def("CreationDate",
             (TCollection_AsciiString (Storage_HeaderData::*)() const) static_cast<TCollection_AsciiString (Storage_HeaderData::*)() const>(&Storage_HeaderData::CreationDate),
             R"#(return the creation date)#" )
        .def("StorageVersion",
             (TCollection_AsciiString (Storage_HeaderData::*)() const) static_cast<TCollection_AsciiString (Storage_HeaderData::*)() const>(&Storage_HeaderData::StorageVersion),
             R"#(return the Storage package version)#" )
        .def("SchemaVersion",
             (TCollection_AsciiString (Storage_HeaderData::*)() const) static_cast<TCollection_AsciiString (Storage_HeaderData::*)() const>(&Storage_HeaderData::SchemaVersion),
             R"#(get the version of the schema)#" )
        .def("SchemaName",
             (TCollection_AsciiString (Storage_HeaderData::*)() const) static_cast<TCollection_AsciiString (Storage_HeaderData::*)() const>(&Storage_HeaderData::SchemaName),
             R"#(get the schema's name)#" )
        .def("SetApplicationVersion",
             (void (Storage_HeaderData::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_HeaderData::*)( const TCollection_AsciiString & ) >(&Storage_HeaderData::SetApplicationVersion),
             R"#(set the version of the application)#"  , py::arg("aVersion"))
        .def("ApplicationVersion",
             (TCollection_AsciiString (Storage_HeaderData::*)() const) static_cast<TCollection_AsciiString (Storage_HeaderData::*)() const>(&Storage_HeaderData::ApplicationVersion),
             R"#(get the version of the application)#" )
        .def("SetApplicationName",
             (void (Storage_HeaderData::*)( const TCollection_ExtendedString & ) ) static_cast<void (Storage_HeaderData::*)( const TCollection_ExtendedString & ) >(&Storage_HeaderData::SetApplicationName),
             R"#(set the name of the application)#"  , py::arg("aName"))
        .def("ApplicationName",
             (TCollection_ExtendedString (Storage_HeaderData::*)() const) static_cast<TCollection_ExtendedString (Storage_HeaderData::*)() const>(&Storage_HeaderData::ApplicationName),
             R"#(get the name of the application)#" )
        .def("SetDataType",
             (void (Storage_HeaderData::*)( const TCollection_ExtendedString & ) ) static_cast<void (Storage_HeaderData::*)( const TCollection_ExtendedString & ) >(&Storage_HeaderData::SetDataType),
             R"#(set the data type)#"  , py::arg("aType"))
        .def("DataType",
             (TCollection_ExtendedString (Storage_HeaderData::*)() const) static_cast<TCollection_ExtendedString (Storage_HeaderData::*)() const>(&Storage_HeaderData::DataType),
             R"#(returns data type)#" )
        .def("AddToUserInfo",
             (void (Storage_HeaderData::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_HeaderData::*)( const TCollection_AsciiString & ) >(&Storage_HeaderData::AddToUserInfo),
             R"#(add <theUserInfo> to the user informations)#"  , py::arg("theUserInfo"))
        .def("UserInfo",
             (const TColStd_SequenceOfAsciiString & (Storage_HeaderData::*)() const) static_cast<const TColStd_SequenceOfAsciiString & (Storage_HeaderData::*)() const>(&Storage_HeaderData::UserInfo),
             R"#(return the user informations)#" )
        .def("AddToComments",
             (void (Storage_HeaderData::*)( const TCollection_ExtendedString & ) ) static_cast<void (Storage_HeaderData::*)( const TCollection_ExtendedString & ) >(&Storage_HeaderData::AddToComments),
             R"#(add <theUserInfo> to the user informations)#"  , py::arg("aComment"))
        .def("Comments",
             (const TColStd_SequenceOfExtendedString & (Storage_HeaderData::*)() const) static_cast<const TColStd_SequenceOfExtendedString & (Storage_HeaderData::*)() const>(&Storage_HeaderData::Comments),
             R"#(return the user informations)#" )
        .def("NumberOfObjects",
             (Standard_Integer (Storage_HeaderData::*)() const) static_cast<Standard_Integer (Storage_HeaderData::*)() const>(&Storage_HeaderData::NumberOfObjects),
             R"#(the the number of persistent objects Return: the number of persistent objects readed)#" )
        .def("ErrorStatus",
             (Storage_Error (Storage_HeaderData::*)() const) static_cast<Storage_Error (Storage_HeaderData::*)() const>(&Storage_HeaderData::ErrorStatus),
             R"#(None)#" )
        .def("ErrorStatusExtension",
             (TCollection_AsciiString (Storage_HeaderData::*)() const) static_cast<TCollection_AsciiString (Storage_HeaderData::*)() const>(&Storage_HeaderData::ErrorStatusExtension),
             R"#(None)#" )
        .def("ClearErrorStatus",
             (void (Storage_HeaderData::*)() ) static_cast<void (Storage_HeaderData::*)() >(&Storage_HeaderData::ClearErrorStatus),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_HeaderData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_HeaderData::*)() const>(&Storage_HeaderData::DynamicType),
             R"#(None)#" )
        .def("SetNumberOfObjects",
             (void (Storage_HeaderData::*)( const Standard_Integer ) ) static_cast<void (Storage_HeaderData::*)( const Standard_Integer ) >(&Storage_HeaderData::SetNumberOfObjects),
             R"#(None)#"  , py::arg("anObjectNumber"))
        .def("SetStorageVersion",
             (void (Storage_HeaderData::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_HeaderData::*)( const TCollection_AsciiString & ) >(&Storage_HeaderData::SetStorageVersion),
             R"#(None)#"  , py::arg("aVersion"))
        .def("SetCreationDate",
             (void (Storage_HeaderData::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_HeaderData::*)( const TCollection_AsciiString & ) >(&Storage_HeaderData::SetCreationDate),
             R"#(None)#"  , py::arg("aDate"))
        .def("SetSchemaVersion",
             (void (Storage_HeaderData::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_HeaderData::*)( const TCollection_AsciiString & ) >(&Storage_HeaderData::SetSchemaVersion),
             R"#(None)#"  , py::arg("aVersion"))
        .def("SetSchemaName",
             (void (Storage_HeaderData::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_HeaderData::*)( const TCollection_AsciiString & ) >(&Storage_HeaderData::SetSchemaName),
             R"#(None)#"  , py::arg("aName"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_HeaderData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_HeaderData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_InternalData ,opencascade::handle<Storage_InternalData> , Standard_Transient>>(m.attr("Storage_InternalData"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadArray",
             (opencascade::handle<Storage_HPArray> (Storage_InternalData::*)() ) static_cast<opencascade::handle<Storage_HPArray> (Storage_InternalData::*)() >(&Storage_InternalData::ReadArray),
             R"#(None)#" )
        .def("Clear",
             (void (Storage_InternalData::*)() ) static_cast<void (Storage_InternalData::*)() >(&Storage_InternalData::Clear),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_InternalData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_InternalData::*)() const>(&Storage_InternalData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_InternalData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_InternalData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_Root ,opencascade::handle<Storage_Root> , Standard_Transient>>(m.attr("Storage_Root"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TCollection_AsciiString &,const opencascade::handle<Standard_Persistent> & >()  , py::arg("theName"),  py::arg("theObject") )
        .def(py::init< const TCollection_AsciiString &,const Standard_Integer,const TCollection_AsciiString & >()  , py::arg("theName"),  py::arg("theRef"),  py::arg("theType") )
    // custom constructors
    // methods
        .def("SetName",
             (void (Storage_Root::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_Root::*)( const TCollection_AsciiString & ) >(&Storage_Root::SetName),
             R"#(None)#"  , py::arg("theName"))
        .def("Name",
             (TCollection_AsciiString (Storage_Root::*)() const) static_cast<TCollection_AsciiString (Storage_Root::*)() const>(&Storage_Root::Name),
             R"#(Returns the name of this root object. The name may have been given explicitly when the root was inserted into the Storage_Data object. If not, the name is a reference number which was assigned automatically by the driver when writing the set of data into the container. When naming the roots, it is easier to retrieve objects by significant references rather than by references without any semantic values. Warning The returned string will be empty if you call this function before having named this root object, either explicitly, or when writing the set of data into the container.)#" )
        .def("SetObject",
             (void (Storage_Root::*)( const opencascade::handle<Standard_Persistent> & ) ) static_cast<void (Storage_Root::*)( const opencascade::handle<Standard_Persistent> & ) >(&Storage_Root::SetObject),
             R"#(None)#"  , py::arg("anObject"))
        .def("Object",
             (opencascade::handle<Standard_Persistent> (Storage_Root::*)() const) static_cast<opencascade::handle<Standard_Persistent> (Storage_Root::*)() const>(&Storage_Root::Object),
             R"#(Returns the persistent object encapsulated by this root.)#" )
        .def("Type",
             (TCollection_AsciiString (Storage_Root::*)() const) static_cast<TCollection_AsciiString (Storage_Root::*)() const>(&Storage_Root::Type),
             R"#(Returns the name of this root type.)#" )
        .def("SetReference",
             (void (Storage_Root::*)( const Standard_Integer ) ) static_cast<void (Storage_Root::*)( const Standard_Integer ) >(&Storage_Root::SetReference),
             R"#(None)#"  , py::arg("aRef"))
        .def("Reference",
             (Standard_Integer (Storage_Root::*)() const) static_cast<Standard_Integer (Storage_Root::*)() const>(&Storage_Root::Reference),
             R"#(None)#" )
        .def("SetType",
             (void (Storage_Root::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_Root::*)( const TCollection_AsciiString & ) >(&Storage_Root::SetType),
             R"#(None)#"  , py::arg("aType"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_Root::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_Root::*)() const>(&Storage_Root::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_Root::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_Root::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_RootData ,opencascade::handle<Storage_RootData> , Standard_Transient>>(m.attr("Storage_RootData"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Read",
             (Standard_Boolean (Storage_RootData::*)( Storage_BaseDriver & ) ) static_cast<Standard_Boolean (Storage_RootData::*)( Storage_BaseDriver & ) >(&Storage_RootData::Read),
             R"#(None)#"  , py::arg("theDriver"))
        .def("NumberOfRoots",
             (Standard_Integer (Storage_RootData::*)() const) static_cast<Standard_Integer (Storage_RootData::*)() const>(&Storage_RootData::NumberOfRoots),
             R"#(returns the number of roots.)#" )
        .def("AddRoot",
             (void (Storage_RootData::*)( const opencascade::handle<Storage_Root> & ) ) static_cast<void (Storage_RootData::*)( const opencascade::handle<Storage_Root> & ) >(&Storage_RootData::AddRoot),
             R"#(add a root to <me>. If a root with same name is present, it will be replaced by <aRoot>.)#"  , py::arg("aRoot"))
        .def("Roots",
             (opencascade::handle<Storage_HSeqOfRoot> (Storage_RootData::*)() const) static_cast<opencascade::handle<Storage_HSeqOfRoot> (Storage_RootData::*)() const>(&Storage_RootData::Roots),
             R"#(None)#" )
        .def("Find",
             (opencascade::handle<Storage_Root> (Storage_RootData::*)( const TCollection_AsciiString & ) const) static_cast<opencascade::handle<Storage_Root> (Storage_RootData::*)( const TCollection_AsciiString & ) const>(&Storage_RootData::Find),
             R"#(find a root with name <aName>.)#"  , py::arg("aName"))
        .def("IsRoot",
             (Standard_Boolean (Storage_RootData::*)( const TCollection_AsciiString & ) const) static_cast<Standard_Boolean (Storage_RootData::*)( const TCollection_AsciiString & ) const>(&Storage_RootData::IsRoot),
             R"#(returns Standard_True if <me> contains a root named <aName>)#"  , py::arg("aName"))
        .def("RemoveRoot",
             (void (Storage_RootData::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_RootData::*)( const TCollection_AsciiString & ) >(&Storage_RootData::RemoveRoot),
             R"#(remove the root named <aName>.)#"  , py::arg("aName"))
        .def("ErrorStatus",
             (Storage_Error (Storage_RootData::*)() const) static_cast<Storage_Error (Storage_RootData::*)() const>(&Storage_RootData::ErrorStatus),
             R"#(None)#" )
        .def("ErrorStatusExtension",
             (TCollection_AsciiString (Storage_RootData::*)() const) static_cast<TCollection_AsciiString (Storage_RootData::*)() const>(&Storage_RootData::ErrorStatusExtension),
             R"#(None)#" )
        .def("ClearErrorStatus",
             (void (Storage_RootData::*)() ) static_cast<void (Storage_RootData::*)() >(&Storage_RootData::ClearErrorStatus),
             R"#(None)#" )
        .def("UpdateRoot",
             (void (Storage_RootData::*)( const TCollection_AsciiString & , const opencascade::handle<Standard_Persistent> & ) ) static_cast<void (Storage_RootData::*)( const TCollection_AsciiString & , const opencascade::handle<Standard_Persistent> & ) >(&Storage_RootData::UpdateRoot),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPers"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_RootData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_RootData::*)() const>(&Storage_RootData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_RootData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_RootData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_Schema ,opencascade::handle<Storage_Schema> , Standard_Transient>>(m.attr("Storage_Schema"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetVersion",
             (void (Storage_Schema::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_Schema::*)( const TCollection_AsciiString & ) >(&Storage_Schema::SetVersion),
             R"#(returns version of the schema)#"  , py::arg("aVersion"))
        .def("Version",
             (TCollection_AsciiString (Storage_Schema::*)() const) static_cast<TCollection_AsciiString (Storage_Schema::*)() const>(&Storage_Schema::Version),
             R"#(returns the version of the schema)#" )
        .def("SetName",
             (void (Storage_Schema::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_Schema::*)( const TCollection_AsciiString & ) >(&Storage_Schema::SetName),
             R"#(set the schema's name)#"  , py::arg("aSchemaName"))
        .def("Name",
             (TCollection_AsciiString (Storage_Schema::*)() const) static_cast<TCollection_AsciiString (Storage_Schema::*)() const>(&Storage_Schema::Name),
             R"#(returns the schema's name)#" )
        .def("Write",
             (void (Storage_Schema::*)( Storage_BaseDriver & , const opencascade::handle<Storage_Data> & ) const) static_cast<void (Storage_Schema::*)( Storage_BaseDriver & , const opencascade::handle<Storage_Data> & ) const>(&Storage_Schema::Write),
             R"#(Writes the data aggregated in aData into the container defined by the driver s. The storage operation is performed according to the data schema with which this algorithm is working. Note: aData may aggregate several root objects to be stored together.)#"  , py::arg("s"),  py::arg("aData"))
        .def("AddReadUnknownTypeCallBack",
             (void (Storage_Schema::*)( const TCollection_AsciiString & , const opencascade::handle<Storage_CallBack> & ) ) static_cast<void (Storage_Schema::*)( const TCollection_AsciiString & , const opencascade::handle<Storage_CallBack> & ) >(&Storage_Schema::AddReadUnknownTypeCallBack),
             R"#(add two functions to the callback list)#"  , py::arg("aTypeName"),  py::arg("aCallBack"))
        .def("RemoveReadUnknownTypeCallBack",
             (void (Storage_Schema::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_Schema::*)( const TCollection_AsciiString & ) >(&Storage_Schema::RemoveReadUnknownTypeCallBack),
             R"#(remove a callback for a type)#"  , py::arg("aTypeName"))
        .def("InstalledCallBackList",
             (opencascade::handle<TColStd_HSequenceOfAsciiString> (Storage_Schema::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfAsciiString> (Storage_Schema::*)() const>(&Storage_Schema::InstalledCallBackList),
             R"#(returns a list of type name with installed callback.)#" )
        .def("ClearCallBackList",
             (void (Storage_Schema::*)() ) static_cast<void (Storage_Schema::*)() >(&Storage_Schema::ClearCallBackList),
             R"#(clear all callback from schema instance.)#" )
        .def("UseDefaultCallBack",
             (void (Storage_Schema::*)() ) static_cast<void (Storage_Schema::*)() >(&Storage_Schema::UseDefaultCallBack),
             R"#(install a callback for all unknown type. the objects with unknown types will be skipped. (look SkipObject method in BaseDriver))#" )
        .def("DontUseDefaultCallBack",
             (void (Storage_Schema::*)() ) static_cast<void (Storage_Schema::*)() >(&Storage_Schema::DontUseDefaultCallBack),
             R"#(tells schema to uninstall the default callback.)#" )
        .def("IsUsingDefaultCallBack",
             (Standard_Boolean (Storage_Schema::*)() const) static_cast<Standard_Boolean (Storage_Schema::*)() const>(&Storage_Schema::IsUsingDefaultCallBack),
             R"#(ask if the schema is using the default callback.)#" )
        .def("SetDefaultCallBack",
             (void (Storage_Schema::*)( const opencascade::handle<Storage_CallBack> & ) ) static_cast<void (Storage_Schema::*)( const opencascade::handle<Storage_CallBack> & ) >(&Storage_Schema::SetDefaultCallBack),
             R"#(overload the default function for build.(use to set an error message or skip an object while reading an unknown type).)#"  , py::arg("f"))
        .def("ResetDefaultCallBack",
             (void (Storage_Schema::*)() ) static_cast<void (Storage_Schema::*)() >(&Storage_Schema::ResetDefaultCallBack),
             R"#(reset the default function defined by Storage package.)#" )
        .def("DefaultCallBack",
             (opencascade::handle<Storage_CallBack> (Storage_Schema::*)() const) static_cast<opencascade::handle<Storage_CallBack> (Storage_Schema::*)() const>(&Storage_Schema::DefaultCallBack),
             R"#(returns the read function used when the UseDefaultCallBack() is set.)#" )
        .def("WritePersistentObjectHeader",
             (void (Storage_Schema::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & ) ) static_cast<void (Storage_Schema::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & ) >(&Storage_Schema::WritePersistentObjectHeader),
             R"#(None)#"  , py::arg("sp"),  py::arg("s"))
        .def("WritePersistentReference",
             (void (Storage_Schema::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & ) ) static_cast<void (Storage_Schema::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & ) >(&Storage_Schema::WritePersistentReference),
             R"#(None)#"  , py::arg("sp"),  py::arg("s"))
        .def("AddPersistent",
             (Standard_Boolean (Storage_Schema::*)( const opencascade::handle<Standard_Persistent> & , const Standard_CString ) const) static_cast<Standard_Boolean (Storage_Schema::*)( const opencascade::handle<Standard_Persistent> & , const Standard_CString ) const>(&Storage_Schema::AddPersistent),
             R"#(None)#"  , py::arg("sp"),  py::arg("tName"))
        .def("PersistentToAdd",
             (Standard_Boolean (Storage_Schema::*)( const opencascade::handle<Standard_Persistent> & ) const) static_cast<Standard_Boolean (Storage_Schema::*)( const opencascade::handle<Standard_Persistent> & ) const>(&Storage_Schema::PersistentToAdd),
             R"#(None)#"  , py::arg("sp"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_Schema::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_Schema::*)() const>(&Storage_Schema::DynamicType),
             R"#(None)#" )
        .def("WritePersistentObjectHeader",
             (void (Storage_Schema::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & ) ) static_cast<void (Storage_Schema::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & ) >(&Storage_Schema::WritePersistentObjectHeader),
             R"#(None)#"  , py::arg("sp"),  py::arg("f"))
        .def("WritePersistentReference",
             (void (Storage_Schema::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & ) ) static_cast<void (Storage_Schema::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & ) >(&Storage_Schema::WritePersistentReference),
             R"#(None)#"  , py::arg("sp"),  py::arg("f"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ICreationDate_s",
                    (TCollection_AsciiString (*)() ) static_cast<TCollection_AsciiString (*)() >(&Storage_Schema::ICreationDate),
                    R"#(return a current date string)#" )
        .def_static("CheckTypeMigration_s",
                    (Standard_Boolean (*)( const TCollection_AsciiString & , TCollection_AsciiString & ) ) static_cast<Standard_Boolean (*)( const TCollection_AsciiString & , TCollection_AsciiString & ) >(&Storage_Schema::CheckTypeMigration),
                    R"#(returns True if theType migration is identified the callback support provides a way to read a file with a incomplete schema. ex. : A file contains 3 types a,b and c. The application's schema contains only 2 type a and b. If you try to read the file in the application, you will have an error.To bypass this problem you can give to your application's schema a callback used when the schema dosent know how to handle this type.)#"  , py::arg("theTypeName"),  py::arg("theNewName"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_Schema::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_Schema::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_TypeData ,opencascade::handle<Storage_TypeData> , Standard_Transient>>(m.attr("Storage_TypeData"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Read",
             (Standard_Boolean (Storage_TypeData::*)( Storage_BaseDriver & ) ) static_cast<Standard_Boolean (Storage_TypeData::*)( Storage_BaseDriver & ) >(&Storage_TypeData::Read),
             R"#(None)#"  , py::arg("theDriver"))
        .def("NumberOfTypes",
             (Standard_Integer (Storage_TypeData::*)() const) static_cast<Standard_Integer (Storage_TypeData::*)() const>(&Storage_TypeData::NumberOfTypes),
             R"#(None)#" )
        .def("AddType",
             (void (Storage_TypeData::*)( const TCollection_AsciiString & , const Standard_Integer ) ) static_cast<void (Storage_TypeData::*)( const TCollection_AsciiString & , const Standard_Integer ) >(&Storage_TypeData::AddType),
             R"#(add a type to the list)#"  , py::arg("aName"),  py::arg("aTypeNum"))
        .def("Type",
             (TCollection_AsciiString (Storage_TypeData::*)( const Standard_Integer ) const) static_cast<TCollection_AsciiString (Storage_TypeData::*)( const Standard_Integer ) const>(&Storage_TypeData::Type),
             R"#(returns the name of the type with number <aTypeNum>)#"  , py::arg("aTypeNum"))
        .def("Type",
             (Standard_Integer (Storage_TypeData::*)( const TCollection_AsciiString & ) const) static_cast<Standard_Integer (Storage_TypeData::*)( const TCollection_AsciiString & ) const>(&Storage_TypeData::Type),
             R"#(returns the name of the type with number <aTypeNum>)#"  , py::arg("aTypeName"))
        .def("IsType",
             (Standard_Boolean (Storage_TypeData::*)( const TCollection_AsciiString & ) const) static_cast<Standard_Boolean (Storage_TypeData::*)( const TCollection_AsciiString & ) const>(&Storage_TypeData::IsType),
             R"#(None)#"  , py::arg("aName"))
        .def("Types",
             (opencascade::handle<TColStd_HSequenceOfAsciiString> (Storage_TypeData::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfAsciiString> (Storage_TypeData::*)() const>(&Storage_TypeData::Types),
             R"#(None)#" )
        .def("ErrorStatus",
             (Storage_Error (Storage_TypeData::*)() const) static_cast<Storage_Error (Storage_TypeData::*)() const>(&Storage_TypeData::ErrorStatus),
             R"#(None)#" )
        .def("ErrorStatusExtension",
             (TCollection_AsciiString (Storage_TypeData::*)() const) static_cast<TCollection_AsciiString (Storage_TypeData::*)() const>(&Storage_TypeData::ErrorStatusExtension),
             R"#(None)#" )
        .def("ClearErrorStatus",
             (void (Storage_TypeData::*)() ) static_cast<void (Storage_TypeData::*)() >(&Storage_TypeData::ClearErrorStatus),
             R"#(None)#" )
        .def("Clear",
             (void (Storage_TypeData::*)() ) static_cast<void (Storage_TypeData::*)() >(&Storage_TypeData::Clear),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_TypeData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_TypeData::*)() const>(&Storage_TypeData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_TypeData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_TypeData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_TypedCallBack ,opencascade::handle<Storage_TypedCallBack> , Standard_Transient>>(m.attr("Storage_TypedCallBack"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TCollection_AsciiString &,const opencascade::handle<Storage_CallBack> & >()  , py::arg("aTypeName"),  py::arg("aCallBack") )
    // custom constructors
    // methods
        .def("SetType",
             (void (Storage_TypedCallBack::*)( const TCollection_AsciiString & ) ) static_cast<void (Storage_TypedCallBack::*)( const TCollection_AsciiString & ) >(&Storage_TypedCallBack::SetType),
             R"#(None)#"  , py::arg("aType"))
        .def("Type",
             (TCollection_AsciiString (Storage_TypedCallBack::*)() const) static_cast<TCollection_AsciiString (Storage_TypedCallBack::*)() const>(&Storage_TypedCallBack::Type),
             R"#(None)#" )
        .def("SetCallBack",
             (void (Storage_TypedCallBack::*)( const opencascade::handle<Storage_CallBack> & ) ) static_cast<void (Storage_TypedCallBack::*)( const opencascade::handle<Storage_CallBack> & ) >(&Storage_TypedCallBack::SetCallBack),
             R"#(None)#"  , py::arg("aCallBack"))
        .def("CallBack",
             (opencascade::handle<Storage_CallBack> (Storage_TypedCallBack::*)() const) static_cast<opencascade::handle<Storage_CallBack> (Storage_TypedCallBack::*)() const>(&Storage_TypedCallBack::CallBack),
             R"#(None)#" )
        .def("SetIndex",
             (void (Storage_TypedCallBack::*)( const Standard_Integer ) ) static_cast<void (Storage_TypedCallBack::*)( const Standard_Integer ) >(&Storage_TypedCallBack::SetIndex),
             R"#(None)#"  , py::arg("anIndex"))
        .def("Index",
             (Standard_Integer (Storage_TypedCallBack::*)() const) static_cast<Standard_Integer (Storage_TypedCallBack::*)() const>(&Storage_TypedCallBack::Index),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_TypedCallBack::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_TypedCallBack::*)() const>(&Storage_TypedCallBack::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_TypedCallBack::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_TypedCallBack::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Storage_DefaultCallBack ,opencascade::handle<Storage_DefaultCallBack> , Storage_CallBack>>(m.attr("Storage_DefaultCallBack"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("New",
             (opencascade::handle<Standard_Persistent> (Storage_DefaultCallBack::*)() const) static_cast<opencascade::handle<Standard_Persistent> (Storage_DefaultCallBack::*)() const>(&Storage_DefaultCallBack::New),
             R"#(None)#" )
        .def("Add",
             (void (Storage_DefaultCallBack::*)( const opencascade::handle<Standard_Persistent> & , const opencascade::handle<Storage_Schema> & ) const) static_cast<void (Storage_DefaultCallBack::*)( const opencascade::handle<Standard_Persistent> & , const opencascade::handle<Storage_Schema> & ) const>(&Storage_DefaultCallBack::Add),
             R"#(None)#"  , py::arg("aPers"),  py::arg("aSchema"))
        .def("Write",
             (void (Storage_DefaultCallBack::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & , const opencascade::handle<Storage_Schema> & ) const) static_cast<void (Storage_DefaultCallBack::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & , const opencascade::handle<Storage_Schema> & ) const>(&Storage_DefaultCallBack::Write),
             R"#(None)#"  , py::arg("aPers"),  py::arg("aDriver"),  py::arg("aSchema"))
        .def("Read",
             (void (Storage_DefaultCallBack::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & , const opencascade::handle<Storage_Schema> & ) const) static_cast<void (Storage_DefaultCallBack::*)( const opencascade::handle<Standard_Persistent> & , Storage_BaseDriver & , const opencascade::handle<Storage_Schema> & ) const>(&Storage_DefaultCallBack::Read),
             R"#(None)#"  , py::arg("aPers"),  py::arg("aDriver"),  py::arg("aSchema"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Storage_DefaultCallBack::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Storage_DefaultCallBack::*)() const>(&Storage_DefaultCallBack::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Storage_DefaultCallBack::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Storage_DefaultCallBack::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\Storage_DataMapIteratorOfMapOfCallBack.hxx
// ./opencascade\Storage_Root.hxx
// ./opencascade\Storage_StreamUnknownTypeError.hxx
// ./opencascade\Storage_HArrayOfCallBack.hxx
// ./opencascade\Storage_CallBack.hxx
// ./opencascade\Storage_ArrayOfSchema.hxx
// ./opencascade\Storage_StreamExtCharParityError.hxx
// ./opencascade\Storage_StreamTypeMismatchError.hxx
// ./opencascade\Storage_Error.hxx
// ./opencascade\Storage_DataMapIteratorOfMapOfPers.hxx
// ./opencascade\Storage_RootData.hxx
// ./opencascade\Storage_Position.hxx
// ./opencascade\Storage_HArrayOfSchema.hxx
// ./opencascade\Storage.hxx
// ./opencascade\Storage_DefaultCallBack.hxx
// ./opencascade\Storage_SolveMode.hxx
// ./opencascade\Storage_TypedCallBack.hxx
// ./opencascade\Storage_ArrayOfCallBack.hxx
// ./opencascade\Storage_Schema.hxx
// ./opencascade\Storage_Data.hxx
// ./opencascade\Storage_BucketOfPersistent.hxx
// ./opencascade\Storage_TypeData.hxx
// ./opencascade\Storage_StreamModeError.hxx
// ./opencascade\Storage_StreamFormatError.hxx
// ./opencascade\Storage_PArray.hxx
// ./opencascade\Storage_PType.hxx
// ./opencascade\Storage_HeaderData.hxx
// ./opencascade\Storage_MapOfPers.hxx
// ./opencascade\Storage_Macros.hxx
// ./opencascade\Storage_BaseDriver.hxx
// ./opencascade\Storage_HSeqOfRoot.hxx
// ./opencascade\Storage_MapOfCallBack.hxx
// ./opencascade\Storage_HPArray.hxx
// ./opencascade\Storage_StreamWriteError.hxx
// ./opencascade\Storage_SeqOfRoot.hxx
// ./opencascade\Storage_StreamReadError.hxx
// ./opencascade\Storage_OpenMode.hxx
// ./opencascade\Storage_InternalData.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<Storage_Schema> >(m,"Storage_ArrayOfSchema");
    register_template_NCollection_Array1<opencascade::handle<Storage_CallBack> >(m,"Storage_ArrayOfCallBack");
    register_template_NCollection_Array1<opencascade::handle<Standard_Persistent> >(m,"Storage_PArray");
    register_template_NCollection_IndexedDataMap<TCollection_AsciiString, Standard_Integer, TCollection_AsciiString>(m,"Storage_PType");
    register_template_NCollection_Sequence<opencascade::handle<Storage_Root> >(m,"Storage_SeqOfRoot");


// exceptions
register_occ_exception<Storage_StreamFormatError>(m, "Storage_StreamFormatError");
register_occ_exception<Storage_StreamModeError>(m, "Storage_StreamModeError");
register_occ_exception<Storage_StreamReadError>(m, "Storage_StreamReadError");
register_occ_exception<Storage_StreamWriteError>(m, "Storage_StreamWriteError");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

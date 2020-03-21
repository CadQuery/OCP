
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Storage_Schema.hxx>
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
#include <Storage_StreamFormatError.hxx>
#include <Storage_StreamWriteError.hxx>
#include <Standard_Persistent.hxx>
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <Standard_Persistent.hxx>
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <Storage_CallBack.hxx>
#include <Storage_StreamFormatError.hxx>
#include <Storage_HeaderData.hxx>
#include <Storage_TypeData.hxx>
#include <Storage_RootData.hxx>
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <Standard_Persistent.hxx>
#include <Storage_Schema.hxx>
#include <Storage_Schema.hxx>
#include <Storage_HeaderData.hxx>
#include <Storage_RootData.hxx>
#include <Storage_TypeData.hxx>
#include <Storage_InternalData.hxx>
#include <Storage_Schema.hxx>
#include <Standard_Persistent.hxx>
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <Storage_CallBack.hxx>
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <Standard_Persistent.hxx>
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
// ./opencascade/Storage_ArrayOfSchema.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Storage_MapOfCallBack.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Storage_PType.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Storage_MapOfPers.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Storage_SeqOfRoot.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Storage_ArrayOfCallBack.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Storage_PArray.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Storage_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Storage", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Storage_Error>(m, "Storage_Error",R"#(Error codes returned by the ErrorStatus function on a Storage_Data set of data during a storage or retrieval operation : - Storage_VSOk : no problem has been detected - Storage_VSOpenError : an error has occurred when opening the driver - Storage_VSModeError : the driver has not been opened in the correct mode - Storage_VSCloseError : an error has occurred when closing the driver - Storage_VSAlreadyOpen : the driver is already open - Storage_VSNotOpen : the driver is not open - Storage_VSSectionNotFound : a section has not been found in the driver - Storage_VSWriteError : an error occurred when writing the driver - Storage_VSFormatError : the file format is wrong - Storage_VSUnknownType : a type is not known from the schema - Storage_VSTypeMismatch : trying to read a wrong type - Storage_VSInternalError : an internal error has been detected - Storage_VSExtCharParityError : an error has occurred while reading 16 bit characte)#")
        .value("Storage_VSOk",Storage_Error::Storage_VSOk)
        .value("Storage_VSOpenError",Storage_Error::Storage_VSOpenError)
        .value("Storage_VSModeError",Storage_Error::Storage_VSModeError)
        .value("Storage_VSCloseError",Storage_Error::Storage_VSCloseError)
        .value("Storage_VSAlreadyOpen",Storage_Error::Storage_VSAlreadyOpen)
        .value("Storage_VSNotOpen",Storage_Error::Storage_VSNotOpen)
        .value("Storage_VSSectionNotFound",Storage_Error::Storage_VSSectionNotFound)
        .value("Storage_VSWriteError",Storage_Error::Storage_VSWriteError)
        .value("Storage_VSFormatError",Storage_Error::Storage_VSFormatError)
        .value("Storage_VSUnknownType",Storage_Error::Storage_VSUnknownType)
        .value("Storage_VSTypeMismatch",Storage_Error::Storage_VSTypeMismatch)
        .value("Storage_VSInternalError",Storage_Error::Storage_VSInternalError)
        .value("Storage_VSExtCharParityError",Storage_Error::Storage_VSExtCharParityError)
        .value("Storage_VSWrongFileDriver",Storage_Error::Storage_VSWrongFileDriver).export_values();
    py::enum_<Storage_SolveMode>(m, "Storage_SolveMode",R"#(None)#")
        .value("Storage_AddSolve",Storage_SolveMode::Storage_AddSolve)
        .value("Storage_WriteSolve",Storage_SolveMode::Storage_WriteSolve)
        .value("Storage_ReadSolve",Storage_SolveMode::Storage_ReadSolve).export_values();
    py::enum_<Storage_OpenMode>(m, "Storage_OpenMode",R"#(Specifies opening modes for a file: - Storage_VSNone : no mode is specified - Storage_VSRead : the file is open for reading operations - Storage_VSWrite : the file is open for writing operations - Storage_VSReadWrite : the file is open for both reading and writing operations.)#")
        .value("Storage_VSNone",Storage_OpenMode::Storage_VSNone)
        .value("Storage_VSRead",Storage_OpenMode::Storage_VSRead)
        .value("Storage_VSWrite",Storage_OpenMode::Storage_VSWrite)
        .value("Storage_VSReadWrite",Storage_OpenMode::Storage_VSReadWrite).export_values();

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

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<Storage_Schema> >(m,"Storage_ArrayOfSchema");
    preregister_template_NCollection_IndexedDataMap<TCollection_AsciiString, Standard_Integer, TCollection_AsciiString>(m,"Storage_PType");
    preregister_template_NCollection_Sequence<opencascade::handle<Storage_Root> >(m,"Storage_SeqOfRoot");
    preregister_template_NCollection_Array1<opencascade::handle<Storage_CallBack> >(m,"Storage_ArrayOfCallBack");
    preregister_template_NCollection_Array1<opencascade::handle<Standard_Persistent> >(m,"Storage_PArray");

// classes forward declarations only
    py::class_<Storage , shared_ptr<Storage> >(m,"Storage",R"#(Storage package is used to write and read persistent objects. These objects are read and written by a retrieval or storage algorithm (Storage_Schema object) in a container (disk, memory, network ...). Drivers (FSD_File objects) assign a physical container for data to be stored or retrieved. The standard procedure for an application in reading a container is the following: - open the driver in reading mode, - call the Read function from the schema, setting the driver as a parameter. This function returns an instance of the Storage_Data class which contains the data being read, - close the driver. The standard procedure for an application in writing a container is the following: - open the driver in writing mode, - create an instance of the Storage_Data class, then add the persistent data to write with the function AddRoot, - call the function Write from the schema, setting the driver and the Storage_Data instance as parameters, - close the driver.)#");
    py::class_<Storage_BaseDriver , shared_ptr<Storage_BaseDriver>,Py_Storage_BaseDriver >(m,"Storage_BaseDriver",R"#(Root class for drivers. A driver assigns a physical container to data to be stored or retrieved, for instance a file. The FSD package provides two derived concrete classes : - FSD_File is a general driver which defines a file as the container of data.)#");
    py::class_<Storage_BucketIterator , shared_ptr<Storage_BucketIterator> >(m,"Storage_BucketIterator",R"#()#");
    py::class_<Storage_CallBack ,opencascade::handle<Storage_CallBack>,Py_Storage_CallBack , Standard_Transient>(m,"Storage_CallBack",R"#()#");
    py::class_<Storage_Data ,opencascade::handle<Storage_Data> , Standard_Transient>(m,"Storage_Data",R"#(A picture memorizing the data stored in a container (for example, in a file). A Storage_Data object represents either: - persistent data to be written into a container, or - persistent data which are read from a container. A Storage_Data object is used in both the storage and retrieval operations: - Storage mechanism: create an empty Storage_Data object, then add successively persistent objects (roots) to be stored using the function AddRoot. When the set of data is complete, write it to a container using the function Write in your Storage_Schema storage/retrieval algorithm. - Retrieval mechanism: a Storage_Data object is returned by the Read function from your Storage_Schema storage/retrieval algorithm. Use the functions NumberOfRoots and Roots to find the roots which were stored in the read container. The roots of a Storage_Data object may share references on objects. The shared internal references of a Storage_Data object are maintained by the storage/retrieval mechanism. Note: References shared by objects which are contained in two distinct Storage_Data objects are not maintained by the storage/retrieval mechanism: external references are not supported by Storage_Schema algorithmA picture memorizing the data stored in a container (for example, in a file). A Storage_Data object represents either: - persistent data to be written into a container, or - persistent data which are read from a container. A Storage_Data object is used in both the storage and retrieval operations: - Storage mechanism: create an empty Storage_Data object, then add successively persistent objects (roots) to be stored using the function AddRoot. When the set of data is complete, write it to a container using the function Write in your Storage_Schema storage/retrieval algorithm. - Retrieval mechanism: a Storage_Data object is returned by the Read function from your Storage_Schema storage/retrieval algorithm. Use the functions NumberOfRoots and Roots to find the roots which were stored in the read container. The roots of a Storage_Data object may share references on objects. The shared internal references of a Storage_Data object are maintained by the storage/retrieval mechanism. Note: References shared by objects which are contained in two distinct Storage_Data objects are not maintained by the storage/retrieval mechanism: external references are not supported by Storage_Schema algorithmA picture memorizing the data stored in a container (for example, in a file). A Storage_Data object represents either: - persistent data to be written into a container, or - persistent data which are read from a container. A Storage_Data object is used in both the storage and retrieval operations: - Storage mechanism: create an empty Storage_Data object, then add successively persistent objects (roots) to be stored using the function AddRoot. When the set of data is complete, write it to a container using the function Write in your Storage_Schema storage/retrieval algorithm. - Retrieval mechanism: a Storage_Data object is returned by the Read function from your Storage_Schema storage/retrieval algorithm. Use the functions NumberOfRoots and Roots to find the roots which were stored in the read container. The roots of a Storage_Data object may share references on objects. The shared internal references of a Storage_Data object are maintained by the storage/retrieval mechanism. Note: References shared by objects which are contained in two distinct Storage_Data objects are not maintained by the storage/retrieval mechanism: external references are not supported by Storage_Schema algorithm)#");
    py::class_<Storage_HArrayOfCallBack ,opencascade::handle<Storage_HArrayOfCallBack> , Storage_ArrayOfCallBack, Standard_Transient>(m,"Storage_HArrayOfCallBack",R"#()#");
    py::class_<Storage_HArrayOfSchema ,opencascade::handle<Storage_HArrayOfSchema> , Storage_ArrayOfSchema, Standard_Transient>(m,"Storage_HArrayOfSchema",R"#()#");
    py::class_<Storage_HPArray ,opencascade::handle<Storage_HPArray> , Storage_PArray, Standard_Transient>(m,"Storage_HPArray",R"#()#");
    py::class_<Storage_HSeqOfRoot ,opencascade::handle<Storage_HSeqOfRoot> , Storage_SeqOfRoot, Standard_Transient>(m,"Storage_HSeqOfRoot",R"#()#");
    py::class_<Storage_HeaderData ,opencascade::handle<Storage_HeaderData> , Standard_Transient>(m,"Storage_HeaderData",R"#()#");
    py::class_<Storage_InternalData ,opencascade::handle<Storage_InternalData> , Standard_Transient>(m,"Storage_InternalData",R"#()#");
    py::class_<Storage_Root ,opencascade::handle<Storage_Root> , Standard_Transient>(m,"Storage_Root",R"#(A root object extracted from a Storage_Data object. A Storage_Root encapsulates a persistent object which is a root of a Storage_Data object. It contains additional information: the name and the data type of the persistent object. When retrieving a Storage_Data object from a container (for example, a file) you access its roots with the function Roots which returns a sequence of root objects. The provided functions allow you to request information about each root of the sequence. You do not create explicit roots: when inserting data in a Storage_Data object, you just provide the persistent object and optionally its name to the function AddRoot.A root object extracted from a Storage_Data object. A Storage_Root encapsulates a persistent object which is a root of a Storage_Data object. It contains additional information: the name and the data type of the persistent object. When retrieving a Storage_Data object from a container (for example, a file) you access its roots with the function Roots which returns a sequence of root objects. The provided functions allow you to request information about each root of the sequence. You do not create explicit roots: when inserting data in a Storage_Data object, you just provide the persistent object and optionally its name to the function AddRoot.A root object extracted from a Storage_Data object. A Storage_Root encapsulates a persistent object which is a root of a Storage_Data object. It contains additional information: the name and the data type of the persistent object. When retrieving a Storage_Data object from a container (for example, a file) you access its roots with the function Roots which returns a sequence of root objects. The provided functions allow you to request information about each root of the sequence. You do not create explicit roots: when inserting data in a Storage_Data object, you just provide the persistent object and optionally its name to the function AddRoot.)#");
    py::class_<Storage_RootData ,opencascade::handle<Storage_RootData> , Standard_Transient>(m,"Storage_RootData",R"#()#");
    py::class_<Storage_Schema ,opencascade::handle<Storage_Schema> , Standard_Transient>(m,"Storage_Schema",R"#(Root class for basic storage/retrieval algorithms. A Storage_Schema object processes: - writing of a set of persistent data into a container (store mechanism), - reading of a container to extract all the contained persistent data (retrieve mechanism). A Storage_Schema object is based on the data schema for the persistent data of the application, i.e.: - the list of all persistent objects which may be known by the application, - the organization of their data; a data schema knows how to browse each persistent object it contains. During the store or retrieve operation, only persistent objects known from the data schema can be processed; they are then stored or retrieved according to their description in the schema. A data schema is specific to the object classes to be read or written. Tools dedicated to the environment in use allow a description of the application persistent data structure. Storage_Schema algorithms are called basic because they do not support external references between containers.Root class for basic storage/retrieval algorithms. A Storage_Schema object processes: - writing of a set of persistent data into a container (store mechanism), - reading of a container to extract all the contained persistent data (retrieve mechanism). A Storage_Schema object is based on the data schema for the persistent data of the application, i.e.: - the list of all persistent objects which may be known by the application, - the organization of their data; a data schema knows how to browse each persistent object it contains. During the store or retrieve operation, only persistent objects known from the data schema can be processed; they are then stored or retrieved according to their description in the schema. A data schema is specific to the object classes to be read or written. Tools dedicated to the environment in use allow a description of the application persistent data structure. Storage_Schema algorithms are called basic because they do not support external references between containers.Root class for basic storage/retrieval algorithms. A Storage_Schema object processes: - writing of a set of persistent data into a container (store mechanism), - reading of a container to extract all the contained persistent data (retrieve mechanism). A Storage_Schema object is based on the data schema for the persistent data of the application, i.e.: - the list of all persistent objects which may be known by the application, - the organization of their data; a data schema knows how to browse each persistent object it contains. During the store or retrieve operation, only persistent objects known from the data schema can be processed; they are then stored or retrieved according to their description in the schema. A data schema is specific to the object classes to be read or written. Tools dedicated to the environment in use allow a description of the application persistent data structure. Storage_Schema algorithms are called basic because they do not support external references between containers.)#");
    py::class_<Storage_TypeData ,opencascade::handle<Storage_TypeData> , Standard_Transient>(m,"Storage_TypeData",R"#()#");
    py::class_<Storage_TypedCallBack ,opencascade::handle<Storage_TypedCallBack> , Standard_Transient>(m,"Storage_TypedCallBack",R"#()#");
    py::class_<Storage_DefaultCallBack ,opencascade::handle<Storage_DefaultCallBack> , Storage_CallBack>(m,"Storage_DefaultCallBack",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post

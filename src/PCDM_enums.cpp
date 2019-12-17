
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <PCDM_DriverError.hxx>
#include <CDM_Document.hxx>
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <CDM_Document.hxx>
#include <PCDM_StorageDriver.hxx>
#include <TCollection_AsciiString.hxx>
#include <PCDM_DriverError.hxx>
#include <CDM_Document.hxx>
#include <CDM_Application.hxx>
#include <Message_Messenger.hxx>
#include <CDM_Document.hxx>
#include <CDM_MetaData.hxx>
#include <CDM_Application.hxx>
#include <TCollection_AsciiString.hxx>
#include <Storage_Data.hxx>
#include <CDM_Document.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_AsciiString.hxx>
#include <Storage_Data.hxx>
#include <CDM_Document.hxx>
#include <Message_Messenger.hxx>
#include <Storage_BaseDriver.hxx>
#include <CDM_MetaData.hxx>
#include <Message_Messenger.hxx>
#include <PCDM_DriverError.hxx>
#include <CDM_Document.hxx>
#include <TCollection_ExtendedString.hxx>

// module includes
#include <PCDM.hxx>
#include <PCDM_BaseDriverPointer.hxx>
#include <PCDM_Document.hxx>
#include <PCDM_DOMHeaderParser.hxx>
#include <PCDM_DriverError.hxx>
#include <PCDM_Reader.hxx>
#include <PCDM_ReaderStatus.hxx>
#include <PCDM_ReadWriter.hxx>
#include <PCDM_ReadWriter_1.hxx>
#include <PCDM_Reference.hxx>
#include <PCDM_ReferenceIterator.hxx>
#include <PCDM_RetrievalDriver.hxx>
#include <PCDM_SequenceOfDocument.hxx>
#include <PCDM_SequenceOfReference.hxx>
#include <PCDM_StorageDriver.hxx>
#include <PCDM_StoreStatus.hxx>
#include <PCDM_TypeOfFileDriver.hxx>
#include <PCDM_Writer.hxx>

// template related includes
// ./opencascade/PCDM_SequenceOfReference.hxx
#include "NCollection.hxx"
// ./opencascade/PCDM_SequenceOfDocument.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_PCDM_enums(py::module &main_module) {


py::module m = main_module.def_submodule("PCDM", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<PCDM_TypeOfFileDriver>(m, "PCDM_TypeOfFileDriver",R"#(None)#")
        .value("PCDM_TOFD_File",PCDM_TypeOfFileDriver::PCDM_TOFD_File)
        .value("PCDM_TOFD_CmpFile",PCDM_TypeOfFileDriver::PCDM_TOFD_CmpFile)
        .value("PCDM_TOFD_XmlFile",PCDM_TypeOfFileDriver::PCDM_TOFD_XmlFile)
        .value("PCDM_TOFD_Unknown",PCDM_TypeOfFileDriver::PCDM_TOFD_Unknown).export_values();
    py::enum_<PCDM_StoreStatus>(m, "PCDM_StoreStatus",R"#(None)#")
        .value("PCDM_SS_OK",PCDM_StoreStatus::PCDM_SS_OK)
        .value("PCDM_SS_DriverFailure",PCDM_StoreStatus::PCDM_SS_DriverFailure)
        .value("PCDM_SS_WriteFailure",PCDM_StoreStatus::PCDM_SS_WriteFailure)
        .value("PCDM_SS_Failure",PCDM_StoreStatus::PCDM_SS_Failure)
        .value("PCDM_SS_Doc_IsNull",PCDM_StoreStatus::PCDM_SS_Doc_IsNull)
        .value("PCDM_SS_No_Obj",PCDM_StoreStatus::PCDM_SS_No_Obj)
        .value("PCDM_SS_Info_Section_Error",PCDM_StoreStatus::PCDM_SS_Info_Section_Error).export_values();
    py::enum_<PCDM_ReaderStatus>(m, "PCDM_ReaderStatus",R"#(None)#")
        .value("PCDM_RS_OK",PCDM_ReaderStatus::PCDM_RS_OK)
        .value("PCDM_RS_NoDriver",PCDM_ReaderStatus::PCDM_RS_NoDriver)
        .value("PCDM_RS_UnknownFileDriver",PCDM_ReaderStatus::PCDM_RS_UnknownFileDriver)
        .value("PCDM_RS_OpenError",PCDM_ReaderStatus::PCDM_RS_OpenError)
        .value("PCDM_RS_NoVersion",PCDM_ReaderStatus::PCDM_RS_NoVersion)
        .value("PCDM_RS_NoSchema",PCDM_ReaderStatus::PCDM_RS_NoSchema)
        .value("PCDM_RS_NoDocument",PCDM_ReaderStatus::PCDM_RS_NoDocument)
        .value("PCDM_RS_ExtensionFailure",PCDM_ReaderStatus::PCDM_RS_ExtensionFailure)
        .value("PCDM_RS_WrongStreamMode",PCDM_ReaderStatus::PCDM_RS_WrongStreamMode)
        .value("PCDM_RS_FormatFailure",PCDM_ReaderStatus::PCDM_RS_FormatFailure)
        .value("PCDM_RS_TypeFailure",PCDM_ReaderStatus::PCDM_RS_TypeFailure)
        .value("PCDM_RS_TypeNotFoundInSchema",PCDM_ReaderStatus::PCDM_RS_TypeNotFoundInSchema)
        .value("PCDM_RS_UnrecognizedFileFormat",PCDM_ReaderStatus::PCDM_RS_UnrecognizedFileFormat)
        .value("PCDM_RS_MakeFailure",PCDM_ReaderStatus::PCDM_RS_MakeFailure)
        .value("PCDM_RS_PermissionDenied",PCDM_ReaderStatus::PCDM_RS_PermissionDenied)
        .value("PCDM_RS_DriverFailure",PCDM_ReaderStatus::PCDM_RS_DriverFailure)
        .value("PCDM_RS_AlreadyRetrievedAndModified",PCDM_ReaderStatus::PCDM_RS_AlreadyRetrievedAndModified)
        .value("PCDM_RS_AlreadyRetrieved",PCDM_ReaderStatus::PCDM_RS_AlreadyRetrieved)
        .value("PCDM_RS_UnknownDocument",PCDM_ReaderStatus::PCDM_RS_UnknownDocument)
        .value("PCDM_RS_WrongResource",PCDM_ReaderStatus::PCDM_RS_WrongResource)
        .value("PCDM_RS_ReaderException",PCDM_ReaderStatus::PCDM_RS_ReaderException)
        .value("PCDM_RS_NoModel",PCDM_ReaderStatus::PCDM_RS_NoModel).export_values();

//Python trampoline classes
    class Py_PCDM_Reader : public PCDM_Reader{
    public:
        using PCDM_Reader::PCDM_Reader;
        
        // public pure virtual
        opencascade::handle<CDM_Document> CreateDocument() override { PYBIND11_OVERLOAD_PURE(opencascade::handle<CDM_Document>,PCDM_Reader,CreateDocument,) };
        void Read(const TCollection_ExtendedString & aFileName,const opencascade::handle<CDM_Document> & aNewDocument,const opencascade::handle<CDM_Application> & anApplication) override { PYBIND11_OVERLOAD_PURE(void,PCDM_Reader,Read,aFileName,aNewDocument,anApplication) };
        void Read(std::istream & theIStream,const opencascade::handle<Storage_Data> & theStorageData,const opencascade::handle<CDM_Document> & theDoc,const opencascade::handle<CDM_Application> & theApplication) override { PYBIND11_OVERLOAD_PURE(void,PCDM_Reader,Read,theIStream,theStorageData,theDoc,theApplication) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_PCDM_ReadWriter : public PCDM_ReadWriter{
    public:
        using PCDM_ReadWriter::PCDM_ReadWriter;
        
        // public pure virtual
        TCollection_AsciiString Version() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,PCDM_ReadWriter,Version,) };
        void WriteReferenceCounter(const opencascade::handle<Storage_Data> & aData,const opencascade::handle<CDM_Document> & aDocument) const  override { PYBIND11_OVERLOAD_PURE(void,PCDM_ReadWriter,WriteReferenceCounter,aData,aDocument) };
        void WriteReferences(const opencascade::handle<Storage_Data> & aData,const opencascade::handle<CDM_Document> & aDocument,const TCollection_ExtendedString & theReferencerFileName) const  override { PYBIND11_OVERLOAD_PURE(void,PCDM_ReadWriter,WriteReferences,aData,aDocument,theReferencerFileName) };
        void WriteExtensions(const opencascade::handle<Storage_Data> & aData,const opencascade::handle<CDM_Document> & aDocument) const  override { PYBIND11_OVERLOAD_PURE(void,PCDM_ReadWriter,WriteExtensions,aData,aDocument) };
        void WriteVersion(const opencascade::handle<Storage_Data> & aData,const opencascade::handle<CDM_Document> & aDocument) const  override { PYBIND11_OVERLOAD_PURE(void,PCDM_ReadWriter,WriteVersion,aData,aDocument) };
        Standard_Integer ReadReferenceCounter(const TCollection_ExtendedString & theFileName,const opencascade::handle<Message_Messenger> & theMsgDriver) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,PCDM_ReadWriter,ReadReferenceCounter,theFileName,theMsgDriver) };
        void ReadReferences(const TCollection_ExtendedString & aFileName,NCollection_Sequence<PCDM_Reference> & theReferences,const opencascade::handle<Message_Messenger> & theMsgDriver) const  override { PYBIND11_OVERLOAD_PURE(void,PCDM_ReadWriter,ReadReferences,aFileName,theReferences,theMsgDriver) };
        void ReadExtensions(const TCollection_ExtendedString & aFileName,NCollection_Sequence<TCollection_ExtendedString> & theExtensions,const opencascade::handle<Message_Messenger> & theMsgDriver) const  override { PYBIND11_OVERLOAD_PURE(void,PCDM_ReadWriter,ReadExtensions,aFileName,theExtensions,theMsgDriver) };
        Standard_Integer ReadDocumentVersion(const TCollection_ExtendedString & aFileName,const opencascade::handle<Message_Messenger> & theMsgDriver) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,PCDM_ReadWriter,ReadDocumentVersion,aFileName,theMsgDriver) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_PCDM_Writer : public PCDM_Writer{
    public:
        using PCDM_Writer::PCDM_Writer;
        
        // public pure virtual
        void Write(const opencascade::handle<CDM_Document> & aDocument,const TCollection_ExtendedString & aFileName) override { PYBIND11_OVERLOAD_PURE(void,PCDM_Writer,Write,aDocument,aFileName) };
        void Write(const opencascade::handle<CDM_Document> & theDocument,std::ostream & theOStream) override { PYBIND11_OVERLOAD_PURE(void,PCDM_Writer,Write,theDocument,theOStream) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_PCDM_RetrievalDriver : public PCDM_RetrievalDriver{
    public:
        using PCDM_RetrievalDriver::PCDM_RetrievalDriver;
        
        // public pure virtual
        
        opencascade::handle<CDM_Document> CreateDocument() override { PYBIND11_OVERLOAD_PURE(opencascade::handle<CDM_Document>,PCDM_Reader,CreateDocument,) };
        void Read(const TCollection_ExtendedString & aFileName,const opencascade::handle<CDM_Document> & aNewDocument,const opencascade::handle<CDM_Application> & anApplication) override { PYBIND11_OVERLOAD_PURE(void,PCDM_Reader,Read,aFileName,aNewDocument,anApplication) };
        void Read(std::istream & theIStream,const opencascade::handle<Storage_Data> & theStorageData,const opencascade::handle<CDM_Document> & theDoc,const opencascade::handle<CDM_Application> & theApplication) override { PYBIND11_OVERLOAD_PURE(void,PCDM_Reader,Read,theIStream,theStorageData,theDoc,theApplication) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<PCDM_DOMHeaderParser ,std::unique_ptr<PCDM_DOMHeaderParser>  >(m,"PCDM_DOMHeaderParser",R"#(None)#");
    py::class_<PCDM ,std::unique_ptr<PCDM>  >(m,"PCDM",R"#(None)#");
    py::class_<PCDM_Reader ,opencascade::handle<PCDM_Reader> ,Py_PCDM_Reader , Standard_Transient >(m,"PCDM_Reader",R"#()#");
    py::class_<PCDM_ReadWriter ,opencascade::handle<PCDM_ReadWriter> ,Py_PCDM_ReadWriter , Standard_Transient >(m,"PCDM_ReadWriter",R"#()#");
    py::class_<PCDM_Writer ,opencascade::handle<PCDM_Writer> ,Py_PCDM_Writer , Standard_Transient >(m,"PCDM_Writer",R"#()#");
    py::class_<PCDM_Reference ,std::unique_ptr<PCDM_Reference>  >(m,"PCDM_Reference",R"#(None)#");
    py::class_<PCDM_StorageDriver ,opencascade::handle<PCDM_StorageDriver>  , PCDM_Writer >(m,"PCDM_StorageDriver",R"#(persistent implemention of storage.persistent implemention of storage.persistent implemention of storage.)#");
    py::class_<PCDM_ReferenceIterator ,opencascade::handle<PCDM_ReferenceIterator>  , Standard_Transient >(m,"PCDM_ReferenceIterator",R"#()#");
    py::class_<PCDM_RetrievalDriver ,opencascade::handle<PCDM_RetrievalDriver> ,Py_PCDM_RetrievalDriver , PCDM_Reader >(m,"PCDM_RetrievalDriver",R"#()#");
    py::class_<PCDM_Document ,opencascade::handle<PCDM_Document>  , Standard_Persistent >(m,"PCDM_Document",R"#()#");
    py::class_<PCDM_ReadWriter_1 ,opencascade::handle<PCDM_ReadWriter_1>  , PCDM_ReadWriter >(m,"PCDM_ReadWriter_1",R"#()#");

// pre-register typdefs
// ./opencascade/PCDM_DOMHeaderParser.hxx
// ./opencascade/PCDM_StorageDriver.hxx
// ./opencascade/PCDM_SequenceOfReference.hxx
    preregister_template_NCollection_Sequence<PCDM_Reference>(m,"PCDM_SequenceOfReference");  
// ./opencascade/PCDM_BaseDriverPointer.hxx
// ./opencascade/PCDM.hxx
// ./opencascade/PCDM_Document.hxx
// ./opencascade/PCDM_Reader.hxx
// ./opencascade/PCDM_ReferenceIterator.hxx
// ./opencascade/PCDM_TypeOfFileDriver.hxx
// ./opencascade/PCDM_ReadWriter_1.hxx
// ./opencascade/PCDM_StoreStatus.hxx
// ./opencascade/PCDM_ReadWriter.hxx
// ./opencascade/PCDM_RetrievalDriver.hxx
// ./opencascade/PCDM_SequenceOfDocument.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<PCDM_Document> >(m,"PCDM_SequenceOfDocument");  
// ./opencascade/PCDM_Writer.hxx
// ./opencascade/PCDM_DriverError.hxx
// ./opencascade/PCDM_ReaderStatus.hxx
// ./opencascade/PCDM_Reference.hxx

};

// user-defined post-inclusion per module

// user-defined post

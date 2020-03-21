
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
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
#include <Storage_BaseDriver.hxx>
#include <PCDM_DriverError.hxx>
#include <CDM_Document.hxx>
#include <Storage_Schema.hxx>
#include <TCollection_AsciiString.hxx>
#include <Storage_Data.hxx>
#include <CDM_Document.hxx>
#include <Message_Messenger.hxx>
#include <CDM_Document.hxx>
#include <PCDM_StorageDriver.hxx>
#include <TCollection_AsciiString.hxx>
#include <CDM_MetaData.hxx>
#include <Message_Messenger.hxx>
#include <PCDM_DriverError.hxx>
#include <CDM_Document.hxx>
#include <TCollection_ExtendedString.hxx>
#include <Storage_BaseDriver.hxx>

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
#include "NCollection_tmpl.hxx"
// ./opencascade/PCDM_SequenceOfDocument.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_PCDM(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("PCDM"));


//Python trampoline classes
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

// classes

    // default constructor
    register_default_constructor<PCDM , shared_ptr<PCDM>>(m,"PCDM");

    static_cast<py::class_<PCDM , shared_ptr<PCDM> >>(m.attr("PCDM"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<PCDM_Document ,opencascade::handle<PCDM_Document>>(m,"PCDM_Document");

    static_cast<py::class_<PCDM_Document ,opencascade::handle<PCDM_Document> , Standard_Persistent>>(m.attr("PCDM_Document"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PCDM_Document::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PCDM_Document::*)() const>(&PCDM_Document::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PCDM_Document::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PCDM_Document::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PCDM_ReadWriter ,opencascade::handle<PCDM_ReadWriter>,Py_PCDM_ReadWriter , Standard_Transient>>(m.attr("PCDM_ReadWriter"))
    // constructors
    // custom constructors
    // methods
        .def("Version",
             (TCollection_AsciiString (PCDM_ReadWriter::*)() const) static_cast<TCollection_AsciiString (PCDM_ReadWriter::*)() const>(&PCDM_ReadWriter::Version),
             R"#(returns PCDM_ReadWriter_1.)#" )
        .def("WriteReferenceCounter",
             (void (PCDM_ReadWriter::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) const) static_cast<void (PCDM_ReadWriter::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) const>(&PCDM_ReadWriter::WriteReferenceCounter),
             R"#(None)#"  , py::arg("aData"),  py::arg("aDocument"))
        .def("WriteReferences",
             (void (PCDM_ReadWriter::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) const) static_cast<void (PCDM_ReadWriter::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) const>(&PCDM_ReadWriter::WriteReferences),
             R"#(None)#"  , py::arg("aData"),  py::arg("aDocument"),  py::arg("theReferencerFileName"))
        .def("WriteExtensions",
             (void (PCDM_ReadWriter::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) const) static_cast<void (PCDM_ReadWriter::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) const>(&PCDM_ReadWriter::WriteExtensions),
             R"#(None)#"  , py::arg("aData"),  py::arg("aDocument"))
        .def("WriteVersion",
             (void (PCDM_ReadWriter::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) const) static_cast<void (PCDM_ReadWriter::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) const>(&PCDM_ReadWriter::WriteVersion),
             R"#(None)#"  , py::arg("aData"),  py::arg("aDocument"))
        .def("ReadReferenceCounter",
             (Standard_Integer (PCDM_ReadWriter::*)( const TCollection_ExtendedString & , const opencascade::handle<Message_Messenger> & ) const) static_cast<Standard_Integer (PCDM_ReadWriter::*)( const TCollection_ExtendedString & , const opencascade::handle<Message_Messenger> & ) const>(&PCDM_ReadWriter::ReadReferenceCounter),
             R"#(None)#"  , py::arg("theFileName"),  py::arg("theMsgDriver"))
        .def("ReadReferences",
             (void (PCDM_ReadWriter::*)( const TCollection_ExtendedString & , NCollection_Sequence<PCDM_Reference> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (PCDM_ReadWriter::*)( const TCollection_ExtendedString & , NCollection_Sequence<PCDM_Reference> & , const opencascade::handle<Message_Messenger> & ) const>(&PCDM_ReadWriter::ReadReferences),
             R"#(None)#"  , py::arg("aFileName"),  py::arg("theReferences"),  py::arg("theMsgDriver"))
        .def("ReadExtensions",
             (void (PCDM_ReadWriter::*)( const TCollection_ExtendedString & , NCollection_Sequence<TCollection_ExtendedString> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (PCDM_ReadWriter::*)( const TCollection_ExtendedString & , NCollection_Sequence<TCollection_ExtendedString> & , const opencascade::handle<Message_Messenger> & ) const>(&PCDM_ReadWriter::ReadExtensions),
             R"#(None)#"  , py::arg("aFileName"),  py::arg("theExtensions"),  py::arg("theMsgDriver"))
        .def("ReadDocumentVersion",
             (Standard_Integer (PCDM_ReadWriter::*)( const TCollection_ExtendedString & , const opencascade::handle<Message_Messenger> & ) const) static_cast<Standard_Integer (PCDM_ReadWriter::*)( const TCollection_ExtendedString & , const opencascade::handle<Message_Messenger> & ) const>(&PCDM_ReadWriter::ReadDocumentVersion),
             R"#(None)#"  , py::arg("aFileName"),  py::arg("theMsgDriver"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PCDM_ReadWriter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PCDM_ReadWriter::*)() const>(&PCDM_ReadWriter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Open_s",
                    (void (*)( Storage_BaseDriver & , const TCollection_ExtendedString & , const Storage_OpenMode ) ) static_cast<void (*)( Storage_BaseDriver & , const TCollection_ExtendedString & , const Storage_OpenMode ) >(&PCDM_ReadWriter::Open),
                    R"#(None)#"  , py::arg("aDriver"),  py::arg("aFileName"),  py::arg("anOpenMode"))
        .def_static("Reader_s",
                    (opencascade::handle<PCDM_ReadWriter> (*)( const TCollection_ExtendedString & ) ) static_cast<opencascade::handle<PCDM_ReadWriter> (*)( const TCollection_ExtendedString & ) >(&PCDM_ReadWriter::Reader),
                    R"#(returns the convenient Reader for a File.)#"  , py::arg("aFileName"))
        .def_static("Writer_s",
                    (opencascade::handle<PCDM_ReadWriter> (*)() ) static_cast<opencascade::handle<PCDM_ReadWriter> (*)() >(&PCDM_ReadWriter::Writer),
                    R"#(None)#" )
        .def_static("WriteFileFormat_s",
                    (void (*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) ) static_cast<void (*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) >(&PCDM_ReadWriter::WriteFileFormat),
                    R"#(None)#"  , py::arg("aData"),  py::arg("aDocument"))
        .def_static("FileFormat_s",
                    (TCollection_ExtendedString (*)( const TCollection_ExtendedString & ) ) static_cast<TCollection_ExtendedString (*)( const TCollection_ExtendedString & ) >(&PCDM_ReadWriter::FileFormat),
                    R"#(tries to get a format in the file. returns an empty string if the file could not be read or does not have a FileFormat information.)#"  , py::arg("aFileName"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PCDM_ReadWriter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PCDM_ReadWriter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PCDM_Reader ,opencascade::handle<PCDM_Reader>,Py_PCDM_Reader , Standard_Transient>>(m.attr("PCDM_Reader"))
    // constructors
    // custom constructors
    // methods
        .def("CreateDocument",
             (opencascade::handle<CDM_Document> (PCDM_Reader::*)() ) static_cast<opencascade::handle<CDM_Document> (PCDM_Reader::*)() >(&PCDM_Reader::CreateDocument),
             R"#(this method is called by the framework before the read method.)#" )
        .def("Read",
             (void (PCDM_Reader::*)( const TCollection_ExtendedString & , const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_Application> & ) ) static_cast<void (PCDM_Reader::*)( const TCollection_ExtendedString & , const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_Application> & ) >(&PCDM_Reader::Read),
             R"#(retrieves the content of the file into a new Document.)#"  , py::arg("aFileName"),  py::arg("aNewDocument"),  py::arg("anApplication"))
        .def("Read",
             (void (PCDM_Reader::*)( std::istream & , const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_Application> & ) ) static_cast<void (PCDM_Reader::*)( std::istream & , const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_Application> & ) >(&PCDM_Reader::Read),
             R"#(None)#"  , py::arg("theIStream"),  py::arg("theStorageData"),  py::arg("theDoc"),  py::arg("theApplication"))
        .def("GetStatus",
             (PCDM_ReaderStatus (PCDM_Reader::*)() const) static_cast<PCDM_ReaderStatus (PCDM_Reader::*)() const>(&PCDM_Reader::GetStatus),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PCDM_Reader::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PCDM_Reader::*)() const>(&PCDM_Reader::DynamicType),
             R"#(None)#" )
        .def("GetStatus",
             (PCDM_ReaderStatus (PCDM_Reader::*)() const) static_cast<PCDM_ReaderStatus (PCDM_Reader::*)() const>(&PCDM_Reader::GetStatus),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PCDM_Reader::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PCDM_Reader::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PCDM_Reference , shared_ptr<PCDM_Reference> >>(m.attr("PCDM_Reference"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const TCollection_ExtendedString &,const Standard_Integer >()  , py::arg("aReferenceIdentifier"),  py::arg("aFileName"),  py::arg("aDocumentVersion") )
    // custom constructors
    // methods
        .def("ReferenceIdentifier",
             (Standard_Integer (PCDM_Reference::*)() const) static_cast<Standard_Integer (PCDM_Reference::*)() const>(&PCDM_Reference::ReferenceIdentifier),
             R"#(None)#" )
        .def("FileName",
             (TCollection_ExtendedString (PCDM_Reference::*)() const) static_cast<TCollection_ExtendedString (PCDM_Reference::*)() const>(&PCDM_Reference::FileName),
             R"#(None)#" )
        .def("DocumentVersion",
             (Standard_Integer (PCDM_Reference::*)() const) static_cast<Standard_Integer (PCDM_Reference::*)() const>(&PCDM_Reference::DocumentVersion),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PCDM_ReferenceIterator ,opencascade::handle<PCDM_ReferenceIterator> , Standard_Transient>>(m.attr("PCDM_ReferenceIterator"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("LoadReferences",
             (void (PCDM_ReferenceIterator::*)( const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_MetaData> & , const opencascade::handle<CDM_Application> & , const Standard_Boolean ) ) static_cast<void (PCDM_ReferenceIterator::*)( const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_MetaData> & , const opencascade::handle<CDM_Application> & , const Standard_Boolean ) >(&PCDM_ReferenceIterator::LoadReferences),
             R"#(None)#"  , py::arg("aDocument"),  py::arg("aMetaData"),  py::arg("anApplication"),  py::arg("UseStorageConfiguration"))
        .def("Init",
             (void (PCDM_ReferenceIterator::*)( const opencascade::handle<CDM_MetaData> & ) ) static_cast<void (PCDM_ReferenceIterator::*)( const opencascade::handle<CDM_MetaData> & ) >(&PCDM_ReferenceIterator::Init),
             R"#(None)#"  , py::arg("aMetaData"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PCDM_ReferenceIterator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PCDM_ReferenceIterator::*)() const>(&PCDM_ReferenceIterator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PCDM_ReferenceIterator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PCDM_ReferenceIterator::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PCDM_Writer ,opencascade::handle<PCDM_Writer>,Py_PCDM_Writer , Standard_Transient>>(m.attr("PCDM_Writer"))
    // constructors
    // custom constructors
    // methods
        .def("Write",
             (void (PCDM_Writer::*)( const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) ) static_cast<void (PCDM_Writer::*)( const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) >(&PCDM_Writer::Write),
             R"#(None)#"  , py::arg("aDocument"),  py::arg("aFileName"))
        .def("Write",
             (void (PCDM_Writer::*)( const opencascade::handle<CDM_Document> & , std::ostream & ) ) static_cast<void (PCDM_Writer::*)( const opencascade::handle<CDM_Document> & , std::ostream & ) >(&PCDM_Writer::Write),
             R"#(Write <theDocument> to theOStream)#"  , py::arg("theDocument"),  py::arg("theOStream"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PCDM_Writer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PCDM_Writer::*)() const>(&PCDM_Writer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PCDM_Writer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PCDM_Writer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PCDM_ReadWriter_1 ,opencascade::handle<PCDM_ReadWriter_1> , PCDM_ReadWriter>>(m.attr("PCDM_ReadWriter_1"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Version",
             (TCollection_AsciiString (PCDM_ReadWriter_1::*)() const) static_cast<TCollection_AsciiString (PCDM_ReadWriter_1::*)() const>(&PCDM_ReadWriter_1::Version),
             R"#(returns PCDM_ReadWriter_1.)#" )
        .def("WriteReferenceCounter",
             (void (PCDM_ReadWriter_1::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) const) static_cast<void (PCDM_ReadWriter_1::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) const>(&PCDM_ReadWriter_1::WriteReferenceCounter),
             R"#(None)#"  , py::arg("aData"),  py::arg("aDocument"))
        .def("WriteReferences",
             (void (PCDM_ReadWriter_1::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) const) static_cast<void (PCDM_ReadWriter_1::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) const>(&PCDM_ReadWriter_1::WriteReferences),
             R"#(None)#"  , py::arg("aData"),  py::arg("aDocument"),  py::arg("theReferencerFileName"))
        .def("WriteExtensions",
             (void (PCDM_ReadWriter_1::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) const) static_cast<void (PCDM_ReadWriter_1::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) const>(&PCDM_ReadWriter_1::WriteExtensions),
             R"#(None)#"  , py::arg("aData"),  py::arg("aDocument"))
        .def("WriteVersion",
             (void (PCDM_ReadWriter_1::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) const) static_cast<void (PCDM_ReadWriter_1::*)( const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & ) const>(&PCDM_ReadWriter_1::WriteVersion),
             R"#(None)#"  , py::arg("aData"),  py::arg("aDocument"))
        .def("ReadReferenceCounter",
             (Standard_Integer (PCDM_ReadWriter_1::*)( const TCollection_ExtendedString & , const opencascade::handle<Message_Messenger> & ) const) static_cast<Standard_Integer (PCDM_ReadWriter_1::*)( const TCollection_ExtendedString & , const opencascade::handle<Message_Messenger> & ) const>(&PCDM_ReadWriter_1::ReadReferenceCounter),
             R"#(None)#"  , py::arg("aFileName"),  py::arg("theMsgDriver"))
        .def("ReadReferences",
             (void (PCDM_ReadWriter_1::*)( const TCollection_ExtendedString & , NCollection_Sequence<PCDM_Reference> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (PCDM_ReadWriter_1::*)( const TCollection_ExtendedString & , NCollection_Sequence<PCDM_Reference> & , const opencascade::handle<Message_Messenger> & ) const>(&PCDM_ReadWriter_1::ReadReferences),
             R"#(None)#"  , py::arg("aFileName"),  py::arg("theReferences"),  py::arg("theMsgDriver"))
        .def("ReadExtensions",
             (void (PCDM_ReadWriter_1::*)( const TCollection_ExtendedString & , NCollection_Sequence<TCollection_ExtendedString> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (PCDM_ReadWriter_1::*)( const TCollection_ExtendedString & , NCollection_Sequence<TCollection_ExtendedString> & , const opencascade::handle<Message_Messenger> & ) const>(&PCDM_ReadWriter_1::ReadExtensions),
             R"#(None)#"  , py::arg("aFileName"),  py::arg("theExtensions"),  py::arg("theMsgDriver"))
        .def("ReadDocumentVersion",
             (Standard_Integer (PCDM_ReadWriter_1::*)( const TCollection_ExtendedString & , const opencascade::handle<Message_Messenger> & ) const) static_cast<Standard_Integer (PCDM_ReadWriter_1::*)( const TCollection_ExtendedString & , const opencascade::handle<Message_Messenger> & ) const>(&PCDM_ReadWriter_1::ReadDocumentVersion),
             R"#(None)#"  , py::arg("aFileName"),  py::arg("theMsgDriver"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PCDM_ReadWriter_1::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PCDM_ReadWriter_1::*)() const>(&PCDM_ReadWriter_1::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PCDM_ReadWriter_1::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PCDM_ReadWriter_1::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PCDM_RetrievalDriver ,opencascade::handle<PCDM_RetrievalDriver>,Py_PCDM_RetrievalDriver , PCDM_Reader>>(m.attr("PCDM_RetrievalDriver"))
    // constructors
    // custom constructors
    // methods
        .def("SetFormat",
             (void (PCDM_RetrievalDriver::*)( const TCollection_ExtendedString & ) ) static_cast<void (PCDM_RetrievalDriver::*)( const TCollection_ExtendedString & ) >(&PCDM_RetrievalDriver::SetFormat),
             R"#(None)#"  , py::arg("aformat"))
        .def("GetFormat",
             (TCollection_ExtendedString (PCDM_RetrievalDriver::*)() const) static_cast<TCollection_ExtendedString (PCDM_RetrievalDriver::*)() const>(&PCDM_RetrievalDriver::GetFormat),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PCDM_RetrievalDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PCDM_RetrievalDriver::*)() const>(&PCDM_RetrievalDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("DocumentVersion_s",
                    (Standard_Integer (*)( const TCollection_ExtendedString & , const opencascade::handle<Message_Messenger> & ) ) static_cast<Standard_Integer (*)( const TCollection_ExtendedString & , const opencascade::handle<Message_Messenger> & ) >(&PCDM_RetrievalDriver::DocumentVersion),
                    R"#(None)#"  , py::arg("theFileName"),  py::arg("theMsgDriver"))
        .def_static("ReferenceCounter_s",
                    (Standard_Integer (*)( const TCollection_ExtendedString & , const opencascade::handle<Message_Messenger> & ) ) static_cast<Standard_Integer (*)( const TCollection_ExtendedString & , const opencascade::handle<Message_Messenger> & ) >(&PCDM_RetrievalDriver::ReferenceCounter),
                    R"#(None)#"  , py::arg("theFileName"),  py::arg("theMsgDriver"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PCDM_RetrievalDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PCDM_RetrievalDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<PCDM_StorageDriver ,opencascade::handle<PCDM_StorageDriver>>(m,"PCDM_StorageDriver");

    static_cast<py::class_<PCDM_StorageDriver ,opencascade::handle<PCDM_StorageDriver> , PCDM_Writer>>(m.attr("PCDM_StorageDriver"))
    // constructors
    // custom constructors
    // methods
        .def("Make",
             (opencascade::handle<PCDM_Document> (PCDM_StorageDriver::*)( const opencascade::handle<CDM_Document> & ) ) static_cast<opencascade::handle<PCDM_Document> (PCDM_StorageDriver::*)( const opencascade::handle<CDM_Document> & ) >(&PCDM_StorageDriver::Make),
             R"#(raises NotImplemented.)#"  , py::arg("aDocument"))
        .def("Make",
             (void (PCDM_StorageDriver::*)( const opencascade::handle<CDM_Document> & , NCollection_Sequence<opencascade::handle<PCDM_Document> > & ) ) static_cast<void (PCDM_StorageDriver::*)( const opencascade::handle<CDM_Document> & , NCollection_Sequence<opencascade::handle<PCDM_Document> > & ) >(&PCDM_StorageDriver::Make),
             R"#(By default, puts in the Sequence the document returns by the previous Make method.)#"  , py::arg("aDocument"),  py::arg("Documents"))
        .def("Write",
             (void (PCDM_StorageDriver::*)( const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) ) static_cast<void (PCDM_StorageDriver::*)( const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) >(&PCDM_StorageDriver::Write),
             R"#(Warning! raises DriverError if an error occurs during inside the Make method. stores the content of the Document into a new file.)#"  , py::arg("aDocument"),  py::arg("aFileName"))
        .def("Write",
             (void (PCDM_StorageDriver::*)( const opencascade::handle<CDM_Document> & , std::ostream & ) ) static_cast<void (PCDM_StorageDriver::*)( const opencascade::handle<CDM_Document> & , std::ostream & ) >(&PCDM_StorageDriver::Write),
             R"#(Write <theDocument> to theOStream)#"  , py::arg("theDocument"),  py::arg("theOStream"))
        .def("SetFormat",
             (void (PCDM_StorageDriver::*)( const TCollection_ExtendedString & ) ) static_cast<void (PCDM_StorageDriver::*)( const TCollection_ExtendedString & ) >(&PCDM_StorageDriver::SetFormat),
             R"#(None)#"  , py::arg("aformat"))
        .def("GetFormat",
             (TCollection_ExtendedString (PCDM_StorageDriver::*)() const) static_cast<TCollection_ExtendedString (PCDM_StorageDriver::*)() const>(&PCDM_StorageDriver::GetFormat),
             R"#(None)#" )
        .def("IsError",
             (Standard_Boolean (PCDM_StorageDriver::*)() const) static_cast<Standard_Boolean (PCDM_StorageDriver::*)() const>(&PCDM_StorageDriver::IsError),
             R"#(None)#" )
        .def("SetIsError",
             (void (PCDM_StorageDriver::*)( const Standard_Boolean ) ) static_cast<void (PCDM_StorageDriver::*)( const Standard_Boolean ) >(&PCDM_StorageDriver::SetIsError),
             R"#(None)#"  , py::arg("theIsError"))
        .def("GetStoreStatus",
             (PCDM_StoreStatus (PCDM_StorageDriver::*)() const) static_cast<PCDM_StoreStatus (PCDM_StorageDriver::*)() const>(&PCDM_StorageDriver::GetStoreStatus),
             R"#(None)#" )
        .def("SetStoreStatus",
             (void (PCDM_StorageDriver::*)( const PCDM_StoreStatus ) ) static_cast<void (PCDM_StorageDriver::*)( const PCDM_StoreStatus ) >(&PCDM_StorageDriver::SetStoreStatus),
             R"#(None)#"  , py::arg("theStoreStatus"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PCDM_StorageDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PCDM_StorageDriver::*)() const>(&PCDM_StorageDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PCDM_StorageDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PCDM_StorageDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/PCDM_Document.hxx
// ./opencascade/PCDM_Reader.hxx
// ./opencascade/PCDM_TypeOfFileDriver.hxx
// ./opencascade/PCDM_ReferenceIterator.hxx
// ./opencascade/PCDM_ReadWriter.hxx
// ./opencascade/PCDM_StorageDriver.hxx
// ./opencascade/PCDM_Reference.hxx
// ./opencascade/PCDM_StoreStatus.hxx
// ./opencascade/PCDM_ReadWriter_1.hxx
// ./opencascade/PCDM_DriverError.hxx
// ./opencascade/PCDM_SequenceOfReference.hxx
// ./opencascade/PCDM.hxx
// ./opencascade/PCDM_RetrievalDriver.hxx
// ./opencascade/PCDM_Writer.hxx
// ./opencascade/PCDM_BaseDriverPointer.hxx
// ./opencascade/PCDM_ReaderStatus.hxx
// ./opencascade/PCDM_SequenceOfDocument.hxx
// ./opencascade/PCDM_DOMHeaderParser.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<PCDM_Reference>(m,"PCDM_SequenceOfReference");
    register_template_NCollection_Sequence<opencascade::handle<PCDM_Document> >(m,"PCDM_SequenceOfDocument");


// exceptions
register_occ_exception<PCDM_DriverError>(m, "PCDM_DriverError");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

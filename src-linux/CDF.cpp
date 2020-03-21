
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <CDF_Directory.hxx>
#include <CDF_Directory.hxx>
#include <CDF_DirectoryIterator.hxx>
#include <CDF_Session.hxx>
#include <CDF_Application.hxx>
#include <CDF_StoreList.hxx>
#include <CDF_Store.hxx>
#include <CDF_MetaDataDriver.hxx>
#include <CDF_FWOSDriver.hxx>
#include <CDF_MetaDataDriverFactory.hxx>
#include <CDF_MetaDataDriver.hxx>
#include <CDM_MetaData.hxx>
#include <CDF_StoreList.hxx>
#include <CDM_Document.hxx>
#include <CDF_DirectoryIterator.hxx>
#include <TCollection_ExtendedString.hxx>
#include <CDM_MetaData.hxx>
#include <CDM_Document.hxx>
#include <CDF_Session.hxx>
#include <Standard_GUID.hxx>
#include <CDM_Document.hxx>
#include <PCDM_Reader.hxx>
#include <CDM_MetaData.hxx>
#include <PCDM_RetrievalDriver.hxx>
#include <PCDM_StorageDriver.hxx>
#include <Standard_NotImplemented.hxx>
#include <CDM_MetaData.hxx>
#include <TCollection_ExtendedString.hxx>
#include <CDM_Document.hxx>
#include <PCDM_ReferenceIterator.hxx>
#include <CDF_Directory.hxx>
#include <CDF_Application.hxx>
#include <CDF_MetaDataDriver.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_MultiplyDefined.hxx>

// module includes
#include <CDF.hxx>
#include <CDF_Application.hxx>
#include <CDF_Directory.hxx>
#include <CDF_DirectoryIterator.hxx>
#include <CDF_FWOSDriver.hxx>
#include <CDF_MetaDataDriver.hxx>
#include <CDF_MetaDataDriverError.hxx>
#include <CDF_MetaDataDriverFactory.hxx>
#include <CDF_Session.hxx>
#include <CDF_Store.hxx>
#include <CDF_StoreList.hxx>
#include <CDF_StoreSetNameStatus.hxx>
#include <CDF_SubComponentStatus.hxx>
#include <CDF_TryStoreStatus.hxx>
#include <CDF_TypeOfActivation.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <Resource_Manager.hxx>

// Module definiiton
void register_CDF(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("CDF"));


//Python trampoline classes
    class Py_CDF_Application : public CDF_Application{
    public:
        using CDF_Application::CDF_Application;


        // public pure virtual

        opencascade::handle<Resource_Manager> Resources() override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Resource_Manager>,CDM_Application,Resources,) };

        // protected pure virtual


        // private pure virtual

        opencascade::handle<CDM_Document> Retrieve(const opencascade::handle<CDM_MetaData> & aMetaData,const Standard_Boolean UseStorageConfiguration) override { PYBIND11_OVERLOAD_PURE(opencascade::handle<CDM_Document>,CDM_Application,Retrieve,aMetaData,UseStorageConfiguration) };
        Standard_Integer DocumentVersion(const opencascade::handle<CDM_MetaData> & aMetaData) override { PYBIND11_OVERLOAD_PURE(Standard_Integer,CDM_Application,DocumentVersion,aMetaData) };
    };
    class Py_CDF_MetaDataDriver : public CDF_MetaDataDriver{
    public:
        using CDF_MetaDataDriver::CDF_MetaDataDriver;


        // public pure virtual
        TCollection_ExtendedString BuildFileName(const opencascade::handle<CDM_Document> & aDocument) override { PYBIND11_OVERLOAD_PURE(TCollection_ExtendedString,CDF_MetaDataDriver,BuildFileName,aDocument) };
        Standard_Boolean Find(const TCollection_ExtendedString & aFolder,const TCollection_ExtendedString & aName,const TCollection_ExtendedString & aVersion) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,CDF_MetaDataDriver,Find,aFolder,aName,aVersion) };
        Standard_Boolean HasReadPermission(const TCollection_ExtendedString & aFolder,const TCollection_ExtendedString & aName,const TCollection_ExtendedString & aVersion) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,CDF_MetaDataDriver,HasReadPermission,aFolder,aName,aVersion) };
        opencascade::handle<CDM_MetaData> MetaData(const TCollection_ExtendedString & aFolder,const TCollection_ExtendedString & aName,const TCollection_ExtendedString & aVersion) override { PYBIND11_OVERLOAD_PURE(opencascade::handle<CDM_MetaData>,CDF_MetaDataDriver,MetaData,aFolder,aName,aVersion) };
        opencascade::handle<CDM_MetaData> CreateMetaData(const opencascade::handle<CDM_Document> & aDocument,const TCollection_ExtendedString & aFileName) override { PYBIND11_OVERLOAD_PURE(opencascade::handle<CDM_MetaData>,CDF_MetaDataDriver,CreateMetaData,aDocument,aFileName) };
        Standard_Boolean FindFolder(const TCollection_ExtendedString & aFolder) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,CDF_MetaDataDriver,FindFolder,aFolder) };
        TCollection_ExtendedString DefaultFolder() override { PYBIND11_OVERLOAD_PURE(TCollection_ExtendedString,CDF_MetaDataDriver,DefaultFolder,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_CDF_MetaDataDriverFactory : public CDF_MetaDataDriverFactory{
    public:
        using CDF_MetaDataDriverFactory::CDF_MetaDataDriverFactory;


        // public pure virtual
        opencascade::handle<CDF_MetaDataDriver> Build() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<CDF_MetaDataDriver>,CDF_MetaDataDriverFactory,Build,) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<CDF , shared_ptr<CDF>>(m,"CDF");

    static_cast<py::class_<CDF , shared_ptr<CDF> >>(m.attr("CDF"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetLicense_s",
                    (void (*)( const Standard_Integer ) ) static_cast<void (*)( const Standard_Integer ) >(&CDF::GetLicense),
                    R"#(None)#"  , py::arg("anApplicationIdentifier"))
        .def_static("IsAvailable_s",
                    (Standard_Boolean (*)( const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const Standard_Integer ) >(&CDF::IsAvailable),
                    R"#(None)#"  , py::arg("anApplicationIdentifier"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDF_Application ,opencascade::handle<CDF_Application>,Py_CDF_Application , CDM_Application>>(m.attr("CDF_Application"))
    // constructors
    // custom constructors
    // methods
        .def("Open",
             (void (CDF_Application::*)( const opencascade::handle<CDM_Document> & ) ) static_cast<void (CDF_Application::*)( const opencascade::handle<CDM_Document> & ) >(&CDF_Application::Open),
             R"#(puts the document in the current session directory and calls the virtual method Activate on it.)#"  , py::arg("aDocument"))
        .def("CanClose",
             (CDM_CanCloseStatus (CDF_Application::*)( const opencascade::handle<CDM_Document> & ) ) static_cast<CDM_CanCloseStatus (CDF_Application::*)( const opencascade::handle<CDM_Document> & ) >(&CDF_Application::CanClose),
             R"#(None)#"  , py::arg("aDocument"))
        .def("Close",
             (void (CDF_Application::*)( const opencascade::handle<CDM_Document> & ) ) static_cast<void (CDF_Application::*)( const opencascade::handle<CDM_Document> & ) >(&CDF_Application::Close),
             R"#(removes the document of the current session directory and closes the document;)#"  , py::arg("aDocument"))
        .def("Retrieve",
             (opencascade::handle<CDM_Document> (CDF_Application::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const Standard_Boolean ) ) static_cast<opencascade::handle<CDM_Document> (CDF_Application::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const Standard_Boolean ) >(&CDF_Application::Retrieve),
             R"#(This method retrieves a document from the database. If the Document references other documents which have been updated, the latest version of these documents will be used if {UseStorageConfiguration} is Standard_True. The content of {aFolder}, {aName} and {aVersion} depends on the Database Manager system. If the DBMS is only based on the OS, {aFolder} is a directory and {aName} is the name of a file. In this case the use of the syntax with {aVersion} has no sense. For example:)#"  , py::arg("aFolder"),  py::arg("aName"),  py::arg("UseStorageConfiguration")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Retrieve",
             (opencascade::handle<CDM_Document> (CDF_Application::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & , const Standard_Boolean ) ) static_cast<opencascade::handle<CDM_Document> (CDF_Application::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & , const Standard_Boolean ) >(&CDF_Application::Retrieve),
             R"#(This method retrieves a document from the database. If the Document references other documents which have been updated, the latest version of these documents will be used if {UseStorageConfiguration} is Standard_True. -- If the DBMS is only based on the OS, this syntax should not be used.)#"  , py::arg("aFolder"),  py::arg("aName"),  py::arg("aVersion"),  py::arg("UseStorageConfiguration")=static_cast<const Standard_Boolean>(Standard_True))
        .def("CanRetrieve",
             (PCDM_ReaderStatus (CDF_Application::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<PCDM_ReaderStatus (CDF_Application::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&CDF_Application::CanRetrieve),
             R"#(None)#"  , py::arg("aFolder"),  py::arg("aName"))
        .def("CanRetrieve",
             (PCDM_ReaderStatus (CDF_Application::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<PCDM_ReaderStatus (CDF_Application::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&CDF_Application::CanRetrieve),
             R"#(None)#"  , py::arg("aFolder"),  py::arg("aName"),  py::arg("aVersion"))
        .def("GetRetrieveStatus",
             (PCDM_ReaderStatus (CDF_Application::*)() const) static_cast<PCDM_ReaderStatus (CDF_Application::*)() const>(&CDF_Application::GetRetrieveStatus),
             R"#(Checks status after Retrieve)#" )
        .def("Read",
             (opencascade::handle<CDM_Document> (CDF_Application::*)( std::istream & ) ) static_cast<opencascade::handle<CDM_Document> (CDF_Application::*)( std::istream & ) >(&CDF_Application::Read),
             R"#(Reads aDoc from standard SEEKABLE stream theIStream, the stream should support SEEK fuctionality)#"  , py::arg("theIStream"))
        .def("ReaderFromFormat",
             (opencascade::handle<PCDM_Reader> (CDF_Application::*)( const TCollection_ExtendedString & ) ) static_cast<opencascade::handle<PCDM_Reader> (CDF_Application::*)( const TCollection_ExtendedString & ) >(&CDF_Application::ReaderFromFormat),
             R"#(Returns instance of read driver for specified format.)#"  , py::arg("aFormat"))
        .def("WriterFromFormat",
             (opencascade::handle<PCDM_StorageDriver> (CDF_Application::*)( const TCollection_ExtendedString & ) ) static_cast<opencascade::handle<PCDM_StorageDriver> (CDF_Application::*)( const TCollection_ExtendedString & ) >(&CDF_Application::WriterFromFormat),
             R"#(Returns instance of storage driver for specified format.)#"  , py::arg("aFormat"))
        .def("Format",
             (Standard_Boolean (CDF_Application::*)( const TCollection_ExtendedString & , TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (CDF_Application::*)( const TCollection_ExtendedString & , TCollection_ExtendedString & ) >(&CDF_Application::Format),
             R"#(try to retrieve a Format directly in the file or in application resource by using extension. returns True if found;)#"  , py::arg("aFileName"),  py::arg("theFormat"))
        .def("DefaultFolder",
             (Standard_ExtString (CDF_Application::*)() ) static_cast<Standard_ExtString (CDF_Application::*)() >(&CDF_Application::DefaultFolder),
             R"#(None)#" )
        .def("SetDefaultFolder",
             (Standard_Boolean (CDF_Application::*)( const Standard_ExtString ) ) static_cast<Standard_Boolean (CDF_Application::*)( const Standard_ExtString ) >(&CDF_Application::SetDefaultFolder),
             R"#(None)#"  , py::arg("aFolder"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDF_Application::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDF_Application::*)() const>(&CDF_Application::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Load_s",
                    (opencascade::handle<CDF_Application> (*)( const Standard_GUID & ) ) static_cast<opencascade::handle<CDF_Application> (*)( const Standard_GUID & ) >(&CDF_Application::Load),
                    R"#(plugs an application.)#"  , py::arg("aGUID"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDF_Application::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&CDF_Application::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDF_Directory ,opencascade::handle<CDF_Directory> , Standard_Transient>>(m.attr("CDF_Directory"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Add",
             (void (CDF_Directory::*)( const opencascade::handle<CDM_Document> & ) ) static_cast<void (CDF_Directory::*)( const opencascade::handle<CDM_Document> & ) >(&CDF_Directory::Add),
             R"#(adds a document into the directory.)#"  , py::arg("aDocument"))
        .def("Remove",
             (void (CDF_Directory::*)( const opencascade::handle<CDM_Document> & ) ) static_cast<void (CDF_Directory::*)( const opencascade::handle<CDM_Document> & ) >(&CDF_Directory::Remove),
             R"#(removes the document.)#"  , py::arg("aDocument"))
        .def("Contains",
             (Standard_Boolean (CDF_Directory::*)( const opencascade::handle<CDM_Document> & ) const) static_cast<Standard_Boolean (CDF_Directory::*)( const opencascade::handle<CDM_Document> & ) const>(&CDF_Directory::Contains),
             R"#(Returns true if the document aDocument is in the directory)#"  , py::arg("aDocument"))
        .def("Last",
             (opencascade::handle<CDM_Document> (CDF_Directory::*)() ) static_cast<opencascade::handle<CDM_Document> (CDF_Directory::*)() >(&CDF_Directory::Last),
             R"#(returns the last document (if any) which has been added in the directory.)#" )
        .def("Length",
             (Standard_Integer (CDF_Directory::*)() const) static_cast<Standard_Integer (CDF_Directory::*)() const>(&CDF_Directory::Length),
             R"#(returns the number of documents of the directory.)#" )
        .def("IsEmpty",
             (Standard_Boolean (CDF_Directory::*)() const) static_cast<Standard_Boolean (CDF_Directory::*)() const>(&CDF_Directory::IsEmpty),
             R"#(returns true if the directory is empty.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDF_Directory::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDF_Directory::*)() const>(&CDF_Directory::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDF_Directory::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&CDF_Directory::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDF_DirectoryIterator , shared_ptr<CDF_DirectoryIterator> >>(m.attr("CDF_DirectoryIterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<CDF_Directory> & >()  , py::arg("aDirectory") )
    // custom constructors
    // methods
        .def("MoreDocument",
             (Standard_Boolean (CDF_DirectoryIterator::*)() ) static_cast<Standard_Boolean (CDF_DirectoryIterator::*)() >(&CDF_DirectoryIterator::MoreDocument),
             R"#(Returns True if there are more entries to return)#" )
        .def("NextDocument",
             (void (CDF_DirectoryIterator::*)() ) static_cast<void (CDF_DirectoryIterator::*)() >(&CDF_DirectoryIterator::NextDocument),
             R"#(Go to the next entry (if there is not, Value will raise an exception))#" )
        .def("Document",
             (opencascade::handle<CDM_Document> (CDF_DirectoryIterator::*)() ) static_cast<opencascade::handle<CDM_Document> (CDF_DirectoryIterator::*)() >(&CDF_DirectoryIterator::Document),
             R"#(Returns item value of current entry)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDF_MetaDataDriver ,opencascade::handle<CDF_MetaDataDriver>,Py_CDF_MetaDataDriver , Standard_Transient>>(m.attr("CDF_MetaDataDriver"))
    // constructors
    // custom constructors
    // methods
        .def("HasVersionCapability",
             (Standard_Boolean (CDF_MetaDataDriver::*)() ) static_cast<Standard_Boolean (CDF_MetaDataDriver::*)() >(&CDF_MetaDataDriver::HasVersionCapability),
             R"#(returns true if the MetaDataDriver can manage different versions of a Data. By default, returns Standard_False.)#" )
        .def("CreateDependsOn",
             (void (CDF_MetaDataDriver::*)( const opencascade::handle<CDM_MetaData> & , const opencascade::handle<CDM_MetaData> & ) ) static_cast<void (CDF_MetaDataDriver::*)( const opencascade::handle<CDM_MetaData> & , const opencascade::handle<CDM_MetaData> & ) >(&CDF_MetaDataDriver::CreateDependsOn),
             R"#(Creates a "Depends On" relation between two Datas. By default does nothing)#"  , py::arg("aFirstData"),  py::arg("aSecondData"))
        .def("CreateReference",
             (void (CDF_MetaDataDriver::*)( const opencascade::handle<CDM_MetaData> & , const opencascade::handle<CDM_MetaData> & , const Standard_Integer , const Standard_Integer ) ) static_cast<void (CDF_MetaDataDriver::*)( const opencascade::handle<CDM_MetaData> & , const opencascade::handle<CDM_MetaData> & , const Standard_Integer , const Standard_Integer ) >(&CDF_MetaDataDriver::CreateReference),
             R"#(None)#"  , py::arg("aFrom"),  py::arg("aTo"),  py::arg("aReferenceIdentifier"),  py::arg("aToDocumentVersion"))
        .def("HasVersion",
             (Standard_Boolean (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&CDF_MetaDataDriver::HasVersion),
             R"#(by default return Standard_True.)#"  , py::arg("aFolder"),  py::arg("aName"))
        .def("BuildFileName",
             (TCollection_ExtendedString (CDF_MetaDataDriver::*)( const opencascade::handle<CDM_Document> & ) ) static_cast<TCollection_ExtendedString (CDF_MetaDataDriver::*)( const opencascade::handle<CDM_Document> & ) >(&CDF_MetaDataDriver::BuildFileName),
             R"#(None)#"  , py::arg("aDocument"))
        .def("SetName",
             (TCollection_ExtendedString (CDF_MetaDataDriver::*)( const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) ) static_cast<TCollection_ExtendedString (CDF_MetaDataDriver::*)( const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) >(&CDF_MetaDataDriver::SetName),
             R"#(this methods is usefull if the name of an object -- depends on the metadatadriver. For example a Driver -- based on the operating system can choose to add the extension of file to create to the object.)#"  , py::arg("aDocument"),  py::arg("aName"))
        .def("Find",
             (Standard_Boolean (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&CDF_MetaDataDriver::Find),
             R"#(should indicate whether meta-data exist in the DBMS corresponding to the Data. aVersion may be NULL;)#"  , py::arg("aFolder"),  py::arg("aName"),  py::arg("aVersion"))
        .def("HasReadPermission",
             (Standard_Boolean (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&CDF_MetaDataDriver::HasReadPermission),
             R"#(None)#"  , py::arg("aFolder"),  py::arg("aName"),  py::arg("aVersion"))
        .def("MetaData",
             (opencascade::handle<CDM_MetaData> (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<opencascade::handle<CDM_MetaData> (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&CDF_MetaDataDriver::MetaData),
             R"#(should return the MetaData stored in the DBMS with the meta-data corresponding to the Data. If the MetaDataDriver has version management capabilities the version has to be set in the returned MetaData. aVersion may be NULL MetaData is called by GetMetaData If the version is set to NULL, MetaData should return the last version of the metadata)#"  , py::arg("aFolder"),  py::arg("aName"),  py::arg("aVersion"))
        .def("LastVersion",
             (opencascade::handle<CDM_MetaData> (CDF_MetaDataDriver::*)( const opencascade::handle<CDM_MetaData> & ) ) static_cast<opencascade::handle<CDM_MetaData> (CDF_MetaDataDriver::*)( const opencascade::handle<CDM_MetaData> & ) >(&CDF_MetaDataDriver::LastVersion),
             R"#(by default returns aMetaDATA should return the MetaData stored in the DBMS with the meta-data corresponding to the path. If the MetaDataDriver has version management capabilities the version has to be set in the returned MetaData. MetaData is called by GetMetaData If the version is not included in the path , MetaData should return the last version of the metadata is deferred;)#"  , py::arg("aMetaData"))
        .def("CreateMetaData",
             (opencascade::handle<CDM_MetaData> (CDF_MetaDataDriver::*)( const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) ) static_cast<opencascade::handle<CDM_MetaData> (CDF_MetaDataDriver::*)( const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) >(&CDF_MetaDataDriver::CreateMetaData),
             R"#(should create meta-data corresponding to aData and maintaining a meta-link between these meta-data and aFileName CreateMetaData is called by CreateData If the metadata-driver has version capabilities, version must be set in the returned Data.)#"  , py::arg("aDocument"),  py::arg("aFileName"))
        .def("FindFolder",
             (Standard_Boolean (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & ) >(&CDF_MetaDataDriver::FindFolder),
             R"#(None)#"  , py::arg("aFolder"))
        .def("DefaultFolder",
             (TCollection_ExtendedString (CDF_MetaDataDriver::*)() ) static_cast<TCollection_ExtendedString (CDF_MetaDataDriver::*)() >(&CDF_MetaDataDriver::DefaultFolder),
             R"#(None)#" )
        .def("ReferenceIterator",
             (opencascade::handle<PCDM_ReferenceIterator> (CDF_MetaDataDriver::*)() ) static_cast<opencascade::handle<PCDM_ReferenceIterator> (CDF_MetaDataDriver::*)() >(&CDF_MetaDataDriver::ReferenceIterator),
             R"#(None)#" )
        .def("Find",
             (Standard_Boolean (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&CDF_MetaDataDriver::Find),
             R"#(calls Find with an empty version)#"  , py::arg("aFolder"),  py::arg("aName"))
        .def("MetaData",
             (opencascade::handle<CDM_MetaData> (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<opencascade::handle<CDM_MetaData> (CDF_MetaDataDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&CDF_MetaDataDriver::MetaData),
             R"#(calls MetaData with an empty version)#"  , py::arg("aFolder"),  py::arg("aName"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDF_MetaDataDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDF_MetaDataDriver::*)() const>(&CDF_MetaDataDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDF_MetaDataDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&CDF_MetaDataDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDF_MetaDataDriverFactory ,opencascade::handle<CDF_MetaDataDriverFactory>,Py_CDF_MetaDataDriverFactory , Standard_Transient>>(m.attr("CDF_MetaDataDriverFactory"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (opencascade::handle<CDF_MetaDataDriver> (CDF_MetaDataDriverFactory::*)() const) static_cast<opencascade::handle<CDF_MetaDataDriver> (CDF_MetaDataDriverFactory::*)() const>(&CDF_MetaDataDriverFactory::Build),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDF_MetaDataDriverFactory::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDF_MetaDataDriverFactory::*)() const>(&CDF_MetaDataDriverFactory::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDF_MetaDataDriverFactory::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&CDF_MetaDataDriverFactory::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDF_Session ,opencascade::handle<CDF_Session> , Standard_Transient>>(m.attr("CDF_Session"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Directory",
             (opencascade::handle<CDF_Directory> (CDF_Session::*)() const) static_cast<opencascade::handle<CDF_Directory> (CDF_Session::*)() const>(&CDF_Session::Directory),
             R"#(returns the directory of the session;)#" )
        .def("HasCurrentApplication",
             (Standard_Boolean (CDF_Session::*)() const) static_cast<Standard_Boolean (CDF_Session::*)() const>(&CDF_Session::HasCurrentApplication),
             R"#(None)#" )
        .def("CurrentApplication",
             (opencascade::handle<CDF_Application> (CDF_Session::*)() const) static_cast<opencascade::handle<CDF_Application> (CDF_Session::*)() const>(&CDF_Session::CurrentApplication),
             R"#(None)#" )
        .def("SetCurrentApplication",
             (void (CDF_Session::*)( const opencascade::handle<CDF_Application> & ) ) static_cast<void (CDF_Session::*)( const opencascade::handle<CDF_Application> & ) >(&CDF_Session::SetCurrentApplication),
             R"#(None)#"  , py::arg("anApplication"))
        .def("UnsetCurrentApplication",
             (void (CDF_Session::*)() ) static_cast<void (CDF_Session::*)() >(&CDF_Session::UnsetCurrentApplication),
             R"#(None)#" )
        .def("MetaDataDriver",
             (opencascade::handle<CDF_MetaDataDriver> (CDF_Session::*)() const) static_cast<opencascade::handle<CDF_MetaDataDriver> (CDF_Session::*)() const>(&CDF_Session::MetaDataDriver),
             R"#(None)#" )
        .def("LoadDriver",
             (void (CDF_Session::*)() ) static_cast<void (CDF_Session::*)() >(&CDF_Session::LoadDriver),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDF_Session::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDF_Session::*)() const>(&CDF_Session::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Exists_s",
                    (Standard_Boolean (*)() ) static_cast<Standard_Boolean (*)() >(&CDF_Session::Exists),
                    R"#(returns true if a session has been created.)#" )
        .def_static("CurrentSession_s",
                    (opencascade::handle<CDF_Session> (*)() ) static_cast<opencascade::handle<CDF_Session> (*)() >(&CDF_Session::CurrentSession),
                    R"#(returns the only one instance of Session that has been created.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDF_Session::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&CDF_Session::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDF_Store , shared_ptr<CDF_Store> >>(m.attr("CDF_Store"))
    // constructors
        .def(py::init< const opencascade::handle<CDM_Document> & >()  , py::arg("aDocument") )
    // custom constructors
    // methods
        .def("Folder",
             (Standard_ExtString (CDF_Store::*)() const) static_cast<Standard_ExtString (CDF_Store::*)() const>(&CDF_Store::Folder),
             R"#(returns the folder in which the current document will be stored.)#" )
        .def("Name",
             (Standard_ExtString (CDF_Store::*)() const) static_cast<Standard_ExtString (CDF_Store::*)() const>(&CDF_Store::Name),
             R"#(returns the name under which the current document will be stored)#" )
        .def("IsStored",
             (Standard_Boolean (CDF_Store::*)() const) static_cast<Standard_Boolean (CDF_Store::*)() const>(&CDF_Store::IsStored),
             R"#(returns true if the current document is already stored)#" )
        .def("IsModified",
             (Standard_Boolean (CDF_Store::*)() const) static_cast<Standard_Boolean (CDF_Store::*)() const>(&CDF_Store::IsModified),
             R"#(None)#" )
        .def("CurrentIsConsistent",
             (Standard_Boolean (CDF_Store::*)() const) static_cast<Standard_Boolean (CDF_Store::*)() const>(&CDF_Store::CurrentIsConsistent),
             R"#(None)#" )
        .def("IsConsistent",
             (Standard_Boolean (CDF_Store::*)() const) static_cast<Standard_Boolean (CDF_Store::*)() const>(&CDF_Store::IsConsistent),
             R"#(None)#" )
        .def("HasAPreviousVersion",
             (Standard_Boolean (CDF_Store::*)() const) static_cast<Standard_Boolean (CDF_Store::*)() const>(&CDF_Store::HasAPreviousVersion),
             R"#(None)#" )
        .def("PreviousVersion",
             (Standard_ExtString (CDF_Store::*)() const) static_cast<Standard_ExtString (CDF_Store::*)() const>(&CDF_Store::PreviousVersion),
             R"#(None)#" )
        .def("IsMainDocument",
             (Standard_Boolean (CDF_Store::*)() const) static_cast<Standard_Boolean (CDF_Store::*)() const>(&CDF_Store::IsMainDocument),
             R"#(returns true if the currentdocument is the main one, ie the document of the current selection.)#" )
        .def("SetFolder",
             (Standard_Boolean (CDF_Store::*)( const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (CDF_Store::*)( const TCollection_ExtendedString & ) >(&CDF_Store::SetFolder),
             R"#(defines the folder in which the document should be stored. returns Standard_True if the Folder exists, Standard_False otherwise.)#"  , py::arg("aFolder"))
        .def("SetName",
             (CDF_StoreSetNameStatus (CDF_Store::*)( const Standard_ExtString ) ) static_cast<CDF_StoreSetNameStatus (CDF_Store::*)( const Standard_ExtString ) >(&CDF_Store::SetName),
             R"#(defines the name under which the document should be stored.)#"  , py::arg("aName"))
        .def("SetComment",
             (void (CDF_Store::*)( const Standard_ExtString ) ) static_cast<void (CDF_Store::*)( const Standard_ExtString ) >(&CDF_Store::SetComment),
             R"#(None)#"  , py::arg("aComment"))
        .def("Comment",
             (Standard_ExtString (CDF_Store::*)() const) static_cast<Standard_ExtString (CDF_Store::*)() const>(&CDF_Store::Comment),
             R"#(None)#" )
        .def("RecheckName",
             (CDF_StoreSetNameStatus (CDF_Store::*)() ) static_cast<CDF_StoreSetNameStatus (CDF_Store::*)() >(&CDF_Store::RecheckName),
             R"#(defines the name under which the document should be stored. uses for example after modification of the folder.)#" )
        .def("SetPreviousVersion",
             (Standard_Boolean (CDF_Store::*)( const Standard_ExtString ) ) static_cast<Standard_Boolean (CDF_Store::*)( const Standard_ExtString ) >(&CDF_Store::SetPreviousVersion),
             R"#(None)#"  , py::arg("aPreviousVersion"))
        .def("Realize",
             (void (CDF_Store::*)() ) static_cast<void (CDF_Store::*)() >(&CDF_Store::Realize),
             R"#(None)#" )
        .def("Path",
             (Standard_ExtString (CDF_Store::*)() const) static_cast<Standard_ExtString (CDF_Store::*)() const>(&CDF_Store::Path),
             R"#(returns the complete path of the created meta-data.)#" )
        .def("MetaDataPath",
             (Standard_ExtString (CDF_Store::*)() const) static_cast<Standard_ExtString (CDF_Store::*)() const>(&CDF_Store::MetaDataPath),
             R"#(returns the path of the previous store is the object is already stored, otherwise an empty string;)#" )
        .def("Description",
             (Standard_ExtString (CDF_Store::*)() const) static_cast<Standard_ExtString (CDF_Store::*)() const>(&CDF_Store::Description),
             R"#(returns the description of the format of the main object.)#" )
        .def("InitComponent",
             (void (CDF_Store::*)() ) static_cast<void (CDF_Store::*)() >(&CDF_Store::InitComponent),
             R"#(Allows to Start a new Iteration from beginning)#" )
        .def("MoreComponent",
             (Standard_Boolean (CDF_Store::*)() const) static_cast<Standard_Boolean (CDF_Store::*)() const>(&CDF_Store::MoreComponent),
             R"#(Returns True if there are more entries to return)#" )
        .def("NextComponent",
             (void (CDF_Store::*)() ) static_cast<void (CDF_Store::*)() >(&CDF_Store::NextComponent),
             R"#(Go to the next entry (if there is not, Value will raise an exception))#" )
        .def("SetCurrent",
             (void (CDF_Store::*)() ) static_cast<void (CDF_Store::*)() >(&CDF_Store::SetCurrent),
             R"#(None)#" )
        .def("Component",
             (Standard_ExtString (CDF_Store::*)() const) static_cast<Standard_ExtString (CDF_Store::*)() const>(&CDF_Store::Component),
             R"#(Returns item value of current entry)#" )
        .def("HasSubComponents",
             (Standard_Boolean (CDF_Store::*)() const) static_cast<Standard_Boolean (CDF_Store::*)() const>(&CDF_Store::HasSubComponents),
             R"#(None)#" )
        .def("SubComponentStatus",
             (CDF_SubComponentStatus (CDF_Store::*)( const Standard_ExtString ) const) static_cast<CDF_SubComponentStatus (CDF_Store::*)( const Standard_ExtString ) const>(&CDF_Store::SubComponentStatus),
             R"#(None)#"  , py::arg("aPresentation"))
        .def("SetCurrent",
             (void (CDF_Store::*)( const Standard_ExtString ) ) static_cast<void (CDF_Store::*)( const Standard_ExtString ) >(&CDF_Store::SetCurrent),
             R"#(None)#"  , py::arg("aPresentation"))
        .def("SetMain",
             (void (CDF_Store::*)() ) static_cast<void (CDF_Store::*)() >(&CDF_Store::SetMain),
             R"#(the two following methods can be used just after Realize or Import -- method to know if thes methods worked correctly, and if not why.)#" )
        .def("StoreStatus",
             (PCDM_StoreStatus (CDF_Store::*)() const) static_cast<PCDM_StoreStatus (CDF_Store::*)() const>(&CDF_Store::StoreStatus),
             R"#(None)#" )
        .def("AssociatedStatusText",
             (Standard_ExtString (CDF_Store::*)() const) static_cast<Standard_ExtString (CDF_Store::*)() const>(&CDF_Store::AssociatedStatusText),
             R"#(None)#" )
        .def("SetName",
             (CDF_StoreSetNameStatus (CDF_Store::*)( const TCollection_ExtendedString & ) ) static_cast<CDF_StoreSetNameStatus (CDF_Store::*)( const TCollection_ExtendedString & ) >(&CDF_Store::SetName),
             R"#(defines the name under which the document should be stored.)#"  , py::arg("aName"))
        .def("SetFolder",
             (Standard_Boolean (CDF_Store::*)( const Standard_ExtString ) ) static_cast<Standard_Boolean (CDF_Store::*)( const Standard_ExtString ) >(&CDF_Store::SetFolder),
             R"#(defines the folder in which the document should be stored. returns Standard_True if the Folder exists, Standard_False otherwise.)#"  , py::arg("aFolder"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDF_StoreList ,opencascade::handle<CDF_StoreList> , Standard_Transient>>(m.attr("CDF_StoreList"))
    // constructors
        .def(py::init< const opencascade::handle<CDM_Document> & >()  , py::arg("aDocument") )
    // custom constructors
    // methods
        .def("IsConsistent",
             (Standard_Boolean (CDF_StoreList::*)() const) static_cast<Standard_Boolean (CDF_StoreList::*)() const>(&CDF_StoreList::IsConsistent),
             R"#(None)#" )
        .def("Store",
             (PCDM_StoreStatus (CDF_StoreList::*)( opencascade::handle<CDM_MetaData> & , TCollection_ExtendedString & ) ) static_cast<PCDM_StoreStatus (CDF_StoreList::*)( opencascade::handle<CDM_MetaData> & , TCollection_ExtendedString & ) >(&CDF_StoreList::Store),
             R"#(stores each object of the storelist in the reverse order of which they had been added.)#"  , py::arg("aMetaData"),  py::arg("aStatusAssociatedText"))
        .def("Init",
             (void (CDF_StoreList::*)() ) static_cast<void (CDF_StoreList::*)() >(&CDF_StoreList::Init),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (CDF_StoreList::*)() const) static_cast<Standard_Boolean (CDF_StoreList::*)() const>(&CDF_StoreList::More),
             R"#(None)#" )
        .def("Next",
             (void (CDF_StoreList::*)() ) static_cast<void (CDF_StoreList::*)() >(&CDF_StoreList::Next),
             R"#(None)#" )
        .def("Value",
             (opencascade::handle<CDM_Document> (CDF_StoreList::*)() const) static_cast<opencascade::handle<CDM_Document> (CDF_StoreList::*)() const>(&CDF_StoreList::Value),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDF_StoreList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDF_StoreList::*)() const>(&CDF_StoreList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDF_StoreList::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&CDF_StoreList::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDF_FWOSDriver ,opencascade::handle<CDF_FWOSDriver> , CDF_MetaDataDriver>>(m.attr("CDF_FWOSDriver"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Find",
             (Standard_Boolean (CDF_FWOSDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (CDF_FWOSDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&CDF_FWOSDriver::Find),
             R"#(indicate whether a file exists corresponding to the folder and the name)#"  , py::arg("aFolder"),  py::arg("aName"),  py::arg("aVersion"))
        .def("HasReadPermission",
             (Standard_Boolean (CDF_FWOSDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (CDF_FWOSDriver::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&CDF_FWOSDriver::HasReadPermission),
             R"#(None)#"  , py::arg("aFolder"),  py::arg("aName"),  py::arg("aVersion"))
        .def("FindFolder",
             (Standard_Boolean (CDF_FWOSDriver::*)( const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (CDF_FWOSDriver::*)( const TCollection_ExtendedString & ) >(&CDF_FWOSDriver::FindFolder),
             R"#(None)#"  , py::arg("aFolder"))
        .def("DefaultFolder",
             (TCollection_ExtendedString (CDF_FWOSDriver::*)() ) static_cast<TCollection_ExtendedString (CDF_FWOSDriver::*)() >(&CDF_FWOSDriver::DefaultFolder),
             R"#(None)#" )
        .def("BuildFileName",
             (TCollection_ExtendedString (CDF_FWOSDriver::*)( const opencascade::handle<CDM_Document> & ) ) static_cast<TCollection_ExtendedString (CDF_FWOSDriver::*)( const opencascade::handle<CDM_Document> & ) >(&CDF_FWOSDriver::BuildFileName),
             R"#(None)#"  , py::arg("aDocument"))
        .def("SetName",
             (TCollection_ExtendedString (CDF_FWOSDriver::*)( const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) ) static_cast<TCollection_ExtendedString (CDF_FWOSDriver::*)( const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) >(&CDF_FWOSDriver::SetName),
             R"#(None)#"  , py::arg("aDocument"),  py::arg("aName"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDF_FWOSDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDF_FWOSDriver::*)() const>(&CDF_FWOSDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDF_FWOSDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&CDF_FWOSDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/CDF_DirectoryIterator.hxx
// ./opencascade/CDF.hxx
// ./opencascade/CDF_SubComponentStatus.hxx
// ./opencascade/CDF_MetaDataDriverFactory.hxx
// ./opencascade/CDF_StoreList.hxx
// ./opencascade/CDF_Store.hxx
// ./opencascade/CDF_StoreSetNameStatus.hxx
// ./opencascade/CDF_TryStoreStatus.hxx
// ./opencascade/CDF_Directory.hxx
// ./opencascade/CDF_FWOSDriver.hxx
// ./opencascade/CDF_Application.hxx
// ./opencascade/CDF_MetaDataDriver.hxx
// ./opencascade/CDF_TypeOfActivation.hxx
// ./opencascade/CDF_Session.hxx
// ./opencascade/CDF_MetaDataDriverError.hxx

// Additional functions

// operators

// register typdefs


// exceptions
register_occ_exception<CDF_MetaDataDriverError>(m, "CDF_MetaDataDriverError");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

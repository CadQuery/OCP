
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <CDF_Directory.hxx>
#include <CDF_StoreList.hxx>
#include <CDM_Document.hxx>
#include <CDF_MetaDataDriver.hxx>
#include <CDF_Directory.hxx>
#include <CDF_DirectoryIterator.hxx>
#include <CDF_Session.hxx>
#include <CDF_Application.hxx>
#include <CDF_StoreList.hxx>
#include <CDF_Store.hxx>
#include <CDF_MetaDataDriver.hxx>
#include <CDF_FWOSDriver.hxx>
#include <CDF_MetaDataDriverFactory.hxx>
#include <TCollection_ExtendedString.hxx>
#include <CDM_MetaData.hxx>
#include <CDM_Document.hxx>
#include <CDF_DirectoryIterator.hxx>
#include <Standard_NotImplemented.hxx>
#include <CDM_MetaData.hxx>
#include <TCollection_ExtendedString.hxx>
#include <CDM_Document.hxx>
#include <PCDM_ReferenceIterator.hxx>
#include <CDM_MetaData.hxx>
#include <CDF_Directory.hxx>
#include <CDF_Application.hxx>
#include <CDF_MetaDataDriver.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_MultiplyDefined.hxx>
#include <CDF_Session.hxx>
#include <Standard_GUID.hxx>
#include <CDM_Document.hxx>
#include <PCDM_Reader.hxx>
#include <CDM_MetaData.hxx>
#include <PCDM_RetrievalDriver.hxx>
#include <PCDM_StorageDriver.hxx>

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
void register_CDF_enums(py::module &main_module) {


py::module m = main_module.def_submodule("CDF", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<CDF_TypeOfActivation>(m, "CDF_TypeOfActivation",R"#(None)#")
        .value("CDF_TOA_New",CDF_TypeOfActivation::CDF_TOA_New)
        .value("CDF_TOA_Modified",CDF_TypeOfActivation::CDF_TOA_Modified)
        .value("CDF_TOA_Unchanged",CDF_TypeOfActivation::CDF_TOA_Unchanged).export_values();
    py::enum_<CDF_StoreSetNameStatus>(m, "CDF_StoreSetNameStatus",R"#(None)#")
        .value("CDF_SSNS_OK",CDF_StoreSetNameStatus::CDF_SSNS_OK)
        .value("CDF_SSNS_ReplacingAnExistentDocument",CDF_StoreSetNameStatus::CDF_SSNS_ReplacingAnExistentDocument)
        .value("CDF_SSNS_OpenDocument",CDF_StoreSetNameStatus::CDF_SSNS_OpenDocument).export_values();
    py::enum_<CDF_SubComponentStatus>(m, "CDF_SubComponentStatus",R"#(None)#")
        .value("CDF_SCS_Consistent",CDF_SubComponentStatus::CDF_SCS_Consistent)
        .value("CDF_SCS_Unconsistent",CDF_SubComponentStatus::CDF_SCS_Unconsistent)
        .value("CDF_SCS_Stored",CDF_SubComponentStatus::CDF_SCS_Stored)
        .value("CDF_SCS_Modified",CDF_SubComponentStatus::CDF_SCS_Modified).export_values();
    py::enum_<CDF_TryStoreStatus>(m, "CDF_TryStoreStatus",R"#(None)#")
        .value("CDF_TS_OK",CDF_TryStoreStatus::CDF_TS_OK)
        .value("CDF_TS_NoCurrentDocument",CDF_TryStoreStatus::CDF_TS_NoCurrentDocument)
        .value("CDF_TS_NoDriver",CDF_TryStoreStatus::CDF_TS_NoDriver)
        .value("CDF_TS_NoSubComponentDriver",CDF_TryStoreStatus::CDF_TS_NoSubComponentDriver).export_values();

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

// pre-register typdefs

// classes forward declarations only
    py::class_<CDF , shared_ptr<CDF>  >(m,"CDF",R"#(None)#");
    py::class_<CDF_Application ,opencascade::handle<CDF_Application> ,Py_CDF_Application , CDM_Application >(m,"CDF_Application",R"#()#");
    py::class_<CDF_Directory ,opencascade::handle<CDF_Directory>  , Standard_Transient >(m,"CDF_Directory",R"#(A directory is a collection of documents. There is only one instance of a given document in a directory. put.A directory is a collection of documents. There is only one instance of a given document in a directory. put.A directory is a collection of documents. There is only one instance of a given document in a directory. put.)#");
    py::class_<CDF_DirectoryIterator , shared_ptr<CDF_DirectoryIterator>  >(m,"CDF_DirectoryIterator",R"#(None)#");
    py::class_<CDF_MetaDataDriver ,opencascade::handle<CDF_MetaDataDriver> ,Py_CDF_MetaDataDriver , Standard_Transient >(m,"CDF_MetaDataDriver",R"#(this class list the method that must be available for a specific DBMSthis class list the method that must be available for a specific DBMSthis class list the method that must be available for a specific DBMS)#");
    py::class_<CDF_MetaDataDriverFactory ,opencascade::handle<CDF_MetaDataDriverFactory> ,Py_CDF_MetaDataDriverFactory , Standard_Transient >(m,"CDF_MetaDataDriverFactory",R"#()#");
    py::class_<CDF_Session ,opencascade::handle<CDF_Session>  , Standard_Transient >(m,"CDF_Session",R"#()#");
    py::class_<CDF_Store , shared_ptr<CDF_Store>  >(m,"CDF_Store",R"#(None)#");
    py::class_<CDF_StoreList ,opencascade::handle<CDF_StoreList>  , Standard_Transient >(m,"CDF_StoreList",R"#()#");
    py::class_<CDF_FWOSDriver ,opencascade::handle<CDF_FWOSDriver>  , CDF_MetaDataDriver >(m,"CDF_FWOSDriver",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post


// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TDocStd_XLink.hxx>
#include <TDocStd_Document.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Data.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDocStd_Document.hxx>
#include <TDocStd_Application.hxx>
#include <TDocStd_Document.hxx>
#include <TDocStd_Context.hxx>
#include <TDocStd_XLink.hxx>
#include <TDocStd_XLinkIterator.hxx>
#include <TDocStd_XLinkTool.hxx>
#include <TDocStd_Owner.hxx>
#include <TDocStd_Modified.hxx>
#include <TDocStd_XLinkRoot.hxx>
#include <TDocStd_PathParser.hxx>
#include <TDocStd_CompoundDelta.hxx>
#include <TDocStd_ApplicationDelta.hxx>
#include <TDocStd_MultiTransactionManager.hxx>
#include <TDocStd_XLinkRoot.hxx>
#include <TDocStd_XLinkIterator.hxx>
#include <TDF_Label.hxx>
#include <TDF_Reference.hxx>
#include <Standard_GUID.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDocStd_XLinkIterator.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Data.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDocStd_CompoundDelta.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <Resource_Manager.hxx>
#include <TDocStd_Document.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TDocStd_Document.hxx>

// module includes
#include <TDocStd.hxx>
#include <TDocStd_Application.hxx>
#include <TDocStd_ApplicationDelta.hxx>
#include <TDocStd_CompoundDelta.hxx>
#include <TDocStd_Context.hxx>
#include <TDocStd_DataMapIteratorOfLabelIDMapDataMap.hxx>
#include <TDocStd_Document.hxx>
#include <TDocStd_LabelIDMapDataMap.hxx>
#include <TDocStd_Modified.hxx>
#include <TDocStd_MultiTransactionManager.hxx>
#include <TDocStd_Owner.hxx>
#include <TDocStd_PathParser.hxx>
#include <TDocStd_SequenceOfApplicationDelta.hxx>
#include <TDocStd_SequenceOfDocument.hxx>
#include <TDocStd_XLink.hxx>
#include <TDocStd_XLinkIterator.hxx>
#include <TDocStd_XLinkPtr.hxx>
#include <TDocStd_XLinkRoot.hxx>
#include <TDocStd_XLinkTool.hxx>

// template related includes
// ./opencascade/TDocStd_SequenceOfDocument.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDocStd_SequenceOfApplicationDelta.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDocStd_LabelIDMapDataMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDocStd_LabelIDMapDataMap.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <PCDM_RetrievalDriver.hxx>
#include <PCDM_StorageDriver.hxx>

// Module definiiton
void register_TDocStd_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TDocStd", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<opencascade::handle<TDocStd_Document> >(m,"TDocStd_SequenceOfDocument");
    preregister_template_NCollection_Sequence<opencascade::handle<TDocStd_ApplicationDelta> >(m,"TDocStd_SequenceOfApplicationDelta");
    preregister_template_NCollection_DataMap<TDF_Label, TDF_IDMap, TDF_LabelMapHasher>(m,"TDocStd_LabelIDMapDataMap");

// classes forward declarations only
    py::class_<TDocStd , shared_ptr<TDocStd> >(m,"TDocStd",R"#(This package define CAF main classes.)#");
    py::class_<TDocStd_Application ,opencascade::handle<TDocStd_Application> , CDF_Application>(m,"TDocStd_Application",R"#(The abstract root class for all application classes. They are in charge of: - Creating documents - Storing documents and retrieving them - Initializing document views. To create a useful OCAF-based application, you derive a class from Application and implement the methods below. You will have to redefine the deferred (virtual) methods Formats, InitDocument, and Resources, and override others. The application is a container for a document, which in its turn is the container of the data framework made up of labels and attributes. Besides furnishing a container for documents, TDocStd_Application provides the following services for them: - Creation of new documents - Activation of documents in sessions of an application - Storage and retrieval of documents - Initialization of document views. Note: If a client needs detailed information concerning the events during the Open/Store operation, a MessageDriver based on Message_PrinterOStream may be used. In case of need client can implement his own version inheriting from Message_Printer class and add it to the Messanger. Also the trace level of messages can be tuned by setting trace level (SetTraceLevel (Gravity )) for the used Printer. By default, trace level is Message_Info, so that all messages are output.The abstract root class for all application classes. They are in charge of: - Creating documents - Storing documents and retrieving them - Initializing document views. To create a useful OCAF-based application, you derive a class from Application and implement the methods below. You will have to redefine the deferred (virtual) methods Formats, InitDocument, and Resources, and override others. The application is a container for a document, which in its turn is the container of the data framework made up of labels and attributes. Besides furnishing a container for documents, TDocStd_Application provides the following services for them: - Creation of new documents - Activation of documents in sessions of an application - Storage and retrieval of documents - Initialization of document views. Note: If a client needs detailed information concerning the events during the Open/Store operation, a MessageDriver based on Message_PrinterOStream may be used. In case of need client can implement his own version inheriting from Message_Printer class and add it to the Messanger. Also the trace level of messages can be tuned by setting trace level (SetTraceLevel (Gravity )) for the used Printer. By default, trace level is Message_Info, so that all messages are output.The abstract root class for all application classes. They are in charge of: - Creating documents - Storing documents and retrieving them - Initializing document views. To create a useful OCAF-based application, you derive a class from Application and implement the methods below. You will have to redefine the deferred (virtual) methods Formats, InitDocument, and Resources, and override others. The application is a container for a document, which in its turn is the container of the data framework made up of labels and attributes. Besides furnishing a container for documents, TDocStd_Application provides the following services for them: - Creation of new documents - Activation of documents in sessions of an application - Storage and retrieval of documents - Initialization of document views. Note: If a client needs detailed information concerning the events during the Open/Store operation, a MessageDriver based on Message_PrinterOStream may be used. In case of need client can implement his own version inheriting from Message_Printer class and add it to the Messanger. Also the trace level of messages can be tuned by setting trace level (SetTraceLevel (Gravity )) for the used Printer. By default, trace level is Message_Info, so that all messages are output.)#");
    py::class_<TDocStd_ApplicationDelta ,opencascade::handle<TDocStd_ApplicationDelta> , Standard_Transient>(m,"TDocStd_ApplicationDelta",R"#()#");
    py::class_<TDocStd_CompoundDelta ,opencascade::handle<TDocStd_CompoundDelta> , TDF_Delta>(m,"TDocStd_CompoundDelta",R"#(A delta set is available at <aSourceTime>. If applied, it restores the TDF_Data in the state it was at <aTargetTime>.A delta set is available at <aSourceTime>. If applied, it restores the TDF_Data in the state it was at <aTargetTime>.A delta set is available at <aSourceTime>. If applied, it restores the TDF_Data in the state it was at <aTargetTime>.)#");
    py::class_<TDocStd_Context , shared_ptr<TDocStd_Context> >(m,"TDocStd_Context",R"#(None)#");
    py::class_<TDocStd_Document ,opencascade::handle<TDocStd_Document> , CDM_Document>(m,"TDocStd_Document",R"#(The contents of a TDocStd_Application, a document is a container for a data framework composed of labels and attributes. As such, TDocStd_Document is the entry point into the data framework. To gain access to the data, you create a document as follows: Handle(TDocStd_Document) MyDF = new TDocStd_Document The document also allows you to manage: - modifications, providing Undo and Redo functions. - command transactions. Warning: The only data saved is the framework (TDF_Data)The contents of a TDocStd_Application, a document is a container for a data framework composed of labels and attributes. As such, TDocStd_Document is the entry point into the data framework. To gain access to the data, you create a document as follows: Handle(TDocStd_Document) MyDF = new TDocStd_Document The document also allows you to manage: - modifications, providing Undo and Redo functions. - command transactions. Warning: The only data saved is the framework (TDF_Data)The contents of a TDocStd_Application, a document is a container for a data framework composed of labels and attributes. As such, TDocStd_Document is the entry point into the data framework. To gain access to the data, you create a document as follows: Handle(TDocStd_Document) MyDF = new TDocStd_Document The document also allows you to manage: - modifications, providing Undo and Redo functions. - command transactions. Warning: The only data saved is the framework (TDF_Data))#");
    py::class_<TDocStd_Modified ,opencascade::handle<TDocStd_Modified> , TDF_Attribute>(m,"TDocStd_Modified",R"#(Transient attribute wich register modified labels. This attribute is attached to root label.Transient attribute wich register modified labels. This attribute is attached to root label.Transient attribute wich register modified labels. This attribute is attached to root label.)#");
    py::class_<TDocStd_MultiTransactionManager ,opencascade::handle<TDocStd_MultiTransactionManager> , Standard_Transient>(m,"TDocStd_MultiTransactionManager",R"#(Class for synchronization of transactions within multiple documents. Each transaction of this class involvess one transaction in each modified document.Class for synchronization of transactions within multiple documents. Each transaction of this class involvess one transaction in each modified document.Class for synchronization of transactions within multiple documents. Each transaction of this class involvess one transaction in each modified document.)#");
    py::class_<TDocStd_Owner ,opencascade::handle<TDocStd_Owner> , TDF_Attribute>(m,"TDocStd_Owner",R"#(This attribute located at the root label of the framework contains a back reference to the owner TDocStd_Document, providing acces to the document from any label. private class Owner;This attribute located at the root label of the framework contains a back reference to the owner TDocStd_Document, providing acces to the document from any label. private class Owner;This attribute located at the root label of the framework contains a back reference to the owner TDocStd_Document, providing acces to the document from any label. private class Owner;)#");
    py::class_<TDocStd_PathParser , shared_ptr<TDocStd_PathParser> >(m,"TDocStd_PathParser",R"#(parse an OS path)#");
    py::class_<TDocStd_XLink ,opencascade::handle<TDocStd_XLink> , TDF_Attribute>(m,"TDocStd_XLink",R"#(An attribute to store the path and the entry of external links. These refer from one data structure to a data structure in another document.An attribute to store the path and the entry of external links. These refer from one data structure to a data structure in another document.An attribute to store the path and the entry of external links. These refer from one data structure to a data structure in another document.)#");
    py::class_<TDocStd_XLinkIterator , shared_ptr<TDocStd_XLinkIterator> >(m,"TDocStd_XLinkIterator",R"#(Iterates on Reference attributes. This is an iterator giving all the external references of a Document.)#");
    py::class_<TDocStd_XLinkRoot ,opencascade::handle<TDocStd_XLinkRoot> , TDF_Attribute>(m,"TDocStd_XLinkRoot",R"#(This attribute is the root of all external references contained in a Data from TDF. Only one instance of this class is added to the TDF_Data root label. Starting from this attribute all the Reference are linked together, to be found easely.This attribute is the root of all external references contained in a Data from TDF. Only one instance of this class is added to the TDF_Data root label. Starting from this attribute all the Reference are linked together, to be found easely.This attribute is the root of all external references contained in a Data from TDF. Only one instance of this class is added to the TDF_Data root label. Starting from this attribute all the Reference are linked together, to be found easely.)#");
    py::class_<TDocStd_XLinkTool , shared_ptr<TDocStd_XLinkTool> >(m,"TDocStd_XLinkTool",R"#(This tool class is used to copy the content of source label under target label. Only child labels and attributes of source are copied. attributes located out of source scope are not copied by this algorithm. Depending of the called method an external reference is set in the the target document to registred the externallink. Provide services to set, update and perform external references. Warning1: Nothing is provided in this class about the opportunity to copy, set a link or update it. Such decisions must be under application control. Warning2: If the document manages shapes, use after copy TNaming::ChangeShapes(target,M) to make copy of shapes.)#");

};

// user-defined post-inclusion per module

// user-defined post

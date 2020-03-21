
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Interface_ParamSet.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_FileParameter.hxx>
#include <Interface_ParamList.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_SignType.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_GeneralModule.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_GTool.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Check.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_OutOfMemory.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_CopyControl.hxx>
#include <Interface_CopyMap.hxx>
#include <Interface_GeneralModule.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_InterfaceError.hxx>
#include <Message_Messenger.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_NullObject.hxx>
#include <Interface_EntityList.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_NodeOfReaderLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Interface_ReaderModule.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_GlobalNodeOfReaderLib.hxx>
#include <Interface_Graph.hxx>
#include <Interface_IntVal.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_DomainError.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_GTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_GeneralModule.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_NodeOfGeneralLib.hxx>
#include <Standard_OutOfRange.hxx>
#include <Interface_InterfaceError.hxx>
#include <Standard_NullObject.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ParamList.hxx>
#include <Standard_OutOfRange.hxx>
#include <Interface_FileParameter.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Check.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Check.hxx>
#include <Interface_GTool.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_ReportEntity.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_EntityIterator.hxx>
#include <Message_Messenger.hxx>
#include <Interface_GlobalNodeOfReaderLib.hxx>
#include <Interface_ReaderModule.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_ReaderLib.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_IntVal.hxx>
#include <Message_Messenger.hxx>
#include <Interface_GTool.hxx>
#include <Interface_CheckFailure.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_Graph.hxx>
#include <Interface_HGraph.hxx>
#include <Interface_Check.hxx>
#include <Message_Messenger.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_FileReaderData.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Message_Messenger.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Interface_Check.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_ReaderLib.hxx>
#include <Interface_NodeOfGeneralLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Interface_GeneralModule.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_GlobalNodeOfGeneralLib.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_ReaderModule.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_ReaderLib.hxx>
#include <Interface_NodeOfReaderLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_InterfaceError.hxx>
#include <Standard_DomainError.hxx>
#include <Interface_FileReaderData.hxx>
#include <Interface_Check.hxx>
#include <Message_Msg.hxx>
#include <Message_Messenger.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_GTool.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_HGraph.hxx>
#include <Standard_DomainError.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_GTool.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <Message_Messenger.hxx>
#include <Interface_GlobalNodeOfGeneralLib.hxx>
#include <Interface_GeneralModule.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_GeneralLib.hxx>
#include <TCollection_HAsciiString.hxx>

// module includes
#include <Interface_Array1OfFileParameter.hxx>
#include <Interface_Array1OfHAsciiString.hxx>
#include <Interface_BitMap.hxx>
#include <Interface_Category.hxx>
#include <Interface_Check.hxx>
#include <Interface_CheckFailure.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_CheckStatus.hxx>
#include <Interface_CheckTool.hxx>
#include <Interface_CopyControl.hxx>
#include <Interface_CopyMap.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_DataMapIteratorOfDataMapOfTransientInteger.hxx>
#include <Interface_DataMapOfTransientInteger.hxx>
#include <Interface_DataState.hxx>
#include <Interface_EntityCluster.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_EntityList.hxx>
#include <Interface_FileParameter.hxx>
#include <Interface_FileReaderData.hxx>
#include <Interface_FileReaderTool.hxx>
#include <Interface_FloatWriter.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_GeneralModule.hxx>
#include <Interface_GlobalNodeOfGeneralLib.hxx>
#include <Interface_GlobalNodeOfReaderLib.hxx>
#include <Interface_Graph.hxx>
#include <Interface_GraphContent.hxx>
#include <Interface_GTool.hxx>
#include <Interface_HArray1OfHAsciiString.hxx>
#include <Interface_HGraph.hxx>
#include <Interface_HSequenceOfCheck.hxx>
#include <Interface_IndexedMapOfAsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_IntList.hxx>
#include <Interface_IntVal.hxx>
#include <Interface_LineBuffer.hxx>
#include <Interface_Macros.hxx>
#include <Interface_MapAsciiStringHasher.hxx>
#include <Interface_MSG.hxx>
#include <Interface_NodeOfGeneralLib.hxx>
#include <Interface_NodeOfReaderLib.hxx>
#include <Interface_ParamList.hxx>
#include <Interface_ParamSet.hxx>
#include <Interface_ParamType.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_ReaderLib.hxx>
#include <Interface_ReaderModule.hxx>
#include <Interface_ReportEntity.hxx>
#include <Interface_SequenceOfCheck.hxx>
#include <Interface_ShareFlags.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_SignLabel.hxx>
#include <Interface_SignType.hxx>
#include <Interface_STAT.hxx>
#include <Interface_Static.hxx>
#include <Interface_Statics.hxx>
#include <Interface_StaticSatisfies.hxx>
#include <Interface_Translates.hxx>
#include <Interface_TypedValue.hxx>
#include <Interface_UndefinedContent.hxx>
#include <Interface_ValueInterpret.hxx>
#include <Interface_ValueSatisfies.hxx>
#include <Interface_VectorOfFileParameter.hxx>
#include <Interface_Version.hxx>

// template related includes
// ./opencascade\Interface_DataMapOfTransientInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Interface_DataMapOfTransientInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Interface_Array1OfHAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Interface_SequenceOfCheck.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Interface_Array1OfFileParameter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Interface_VectorOfFileParameter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Interface_IndexedMapOfAsciiString.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Interface_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Interface", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Interface_DataState>(m, "Interface_DataState",R"#(validity state of anentity's content (see InterfaceModel))#")
        .value("Interface_StateOK",Interface_DataState::Interface_StateOK)
        .value("Interface_LoadWarning",Interface_DataState::Interface_LoadWarning)
        .value("Interface_LoadFail",Interface_DataState::Interface_LoadFail)
        .value("Interface_DataWarning",Interface_DataState::Interface_DataWarning)
        .value("Interface_DataFail",Interface_DataState::Interface_DataFail)
        .value("Interface_StateUnloaded",Interface_DataState::Interface_StateUnloaded)
        .value("Interface_StateUnknown",Interface_DataState::Interface_StateUnknown).export_values();
    py::enum_<Interface_ParamType>(m, "Interface_ParamType",R"#(None)#")
        .value("Interface_ParamMisc",Interface_ParamType::Interface_ParamMisc)
        .value("Interface_ParamInteger",Interface_ParamType::Interface_ParamInteger)
        .value("Interface_ParamReal",Interface_ParamType::Interface_ParamReal)
        .value("Interface_ParamIdent",Interface_ParamType::Interface_ParamIdent)
        .value("Interface_ParamVoid",Interface_ParamType::Interface_ParamVoid)
        .value("Interface_ParamText",Interface_ParamType::Interface_ParamText)
        .value("Interface_ParamEnum",Interface_ParamType::Interface_ParamEnum)
        .value("Interface_ParamLogical",Interface_ParamType::Interface_ParamLogical)
        .value("Interface_ParamSub",Interface_ParamType::Interface_ParamSub)
        .value("Interface_ParamHexa",Interface_ParamType::Interface_ParamHexa)
        .value("Interface_ParamBinary",Interface_ParamType::Interface_ParamBinary).export_values();
    py::enum_<Interface_CheckStatus>(m, "Interface_CheckStatus",R"#(Classifies checks OK : check is empty Warning : Warning, no Fail Fail : Fail Others to query : Any : any status Message : Warning/Fail NoFail : Warning/OK)#")
        .value("Interface_CheckOK",Interface_CheckStatus::Interface_CheckOK)
        .value("Interface_CheckWarning",Interface_CheckStatus::Interface_CheckWarning)
        .value("Interface_CheckFail",Interface_CheckStatus::Interface_CheckFail)
        .value("Interface_CheckAny",Interface_CheckStatus::Interface_CheckAny)
        .value("Interface_CheckMessage",Interface_CheckStatus::Interface_CheckMessage)
        .value("Interface_CheckNoFail",Interface_CheckStatus::Interface_CheckNoFail).export_values();

//Python trampoline classes
    class Py_Interface_CopyControl : public Interface_CopyControl{
    public:
        using Interface_CopyControl::Interface_CopyControl;


        // public pure virtual
        void Clear() override { PYBIND11_OVERLOAD_PURE(void,Interface_CopyControl,Clear,) };
        void Bind(const opencascade::handle<Standard_Transient> & ent,const opencascade::handle<Standard_Transient> & res) override { PYBIND11_OVERLOAD_PURE(void,Interface_CopyControl,Bind,ent,res) };
        Standard_Boolean Search(const opencascade::handle<Standard_Transient> & ent,opencascade::handle<Standard_Transient> & res) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Interface_CopyControl,Search,ent,res) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Interface_FileReaderData : public Interface_FileReaderData{
    public:
        using Interface_FileReaderData::Interface_FileReaderData;


        // public pure virtual
        Standard_Integer FindNextRecord(const Standard_Integer num) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Interface_FileReaderData,FindNextRecord,num) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Interface_FileReaderTool : public Interface_FileReaderTool{
    public:
        using Interface_FileReaderTool::Interface_FileReaderTool;


        // public pure virtual
        Standard_Boolean Recognize(const Standard_Integer num,opencascade::handle<Interface_Check> & ach,opencascade::handle<Standard_Transient> & ent) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Interface_FileReaderTool,Recognize,num,ach,ent) };
        void BeginRead(const opencascade::handle<Interface_InterfaceModel> & amodel) override { PYBIND11_OVERLOAD_PURE(void,Interface_FileReaderTool,BeginRead,amodel) };
        Standard_Boolean AnalyseRecord(const Standard_Integer num,const opencascade::handle<Standard_Transient> & anent,opencascade::handle<Interface_Check> & acheck) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Interface_FileReaderTool,AnalyseRecord,num,anent,acheck) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Interface_GeneralModule : public Interface_GeneralModule{
    public:
        using Interface_GeneralModule::Interface_GeneralModule;


        // public pure virtual
        void FillSharedCase(const Standard_Integer CN,const opencascade::handle<Standard_Transient> & ent,Interface_EntityIterator & iter) const  override { PYBIND11_OVERLOAD_PURE(void,Interface_GeneralModule,FillSharedCase,CN,ent,iter) };
        void CheckCase(const Standard_Integer CN,const opencascade::handle<Standard_Transient> & ent,const Interface_ShareTool & shares,opencascade::handle<Interface_Check> & ach) const  override { PYBIND11_OVERLOAD_PURE(void,Interface_GeneralModule,CheckCase,CN,ent,shares,ach) };
        Standard_Boolean NewVoid(const Standard_Integer CN,opencascade::handle<Standard_Transient> & entto) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Interface_GeneralModule,NewVoid,CN,entto) };
        void CopyCase(const Standard_Integer CN,const opencascade::handle<Standard_Transient> & entfrom,const opencascade::handle<Standard_Transient> & entto,Interface_CopyTool & TC) const  override { PYBIND11_OVERLOAD_PURE(void,Interface_GeneralModule,CopyCase,CN,entfrom,entto,TC) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Interface_InterfaceModel : public Interface_InterfaceModel{
    public:
        using Interface_InterfaceModel::Interface_InterfaceModel;


        // public pure virtual
        void ClearLabels() override { PYBIND11_OVERLOAD_PURE(void,Interface_InterfaceModel,ClearLabels,) };
        void ClearHeader() override { PYBIND11_OVERLOAD_PURE(void,Interface_InterfaceModel,ClearHeader,) };
        void GetFromAnother(const opencascade::handle<Interface_InterfaceModel> & other) override { PYBIND11_OVERLOAD_PURE(void,Interface_InterfaceModel,GetFromAnother,other) };
        opencascade::handle<Interface_InterfaceModel> NewEmptyModel() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Interface_InterfaceModel>,Interface_InterfaceModel,NewEmptyModel,) };
        void DumpHeader(const opencascade::handle<Message_Messenger> & S,const Standard_Integer level) const  override { PYBIND11_OVERLOAD_PURE(void,Interface_InterfaceModel,DumpHeader,S,level) };
        void PrintLabel(const opencascade::handle<Standard_Transient> & ent,const opencascade::handle<Message_Messenger> & S) const  override { PYBIND11_OVERLOAD_PURE(void,Interface_InterfaceModel,PrintLabel,ent,S) };
        opencascade::handle<TCollection_HAsciiString> StringLabel(const opencascade::handle<Standard_Transient> & ent) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TCollection_HAsciiString>,Interface_InterfaceModel,StringLabel,ent) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Interface_Protocol : public Interface_Protocol{
    public:
        using Interface_Protocol::Interface_Protocol;


        // public pure virtual
        Standard_Integer NbResources() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Interface_Protocol,NbResources,) };
        opencascade::handle<Interface_Protocol> Resource(const Standard_Integer num) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Interface_Protocol>,Interface_Protocol,Resource,num) };
        Standard_Integer TypeNumber(const opencascade::handle<Standard_Type> & atype) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Interface_Protocol,TypeNumber,atype) };
        opencascade::handle<Interface_InterfaceModel> NewModel() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Interface_InterfaceModel>,Interface_Protocol,NewModel,) };
        Standard_Boolean IsSuitableModel(const opencascade::handle<Interface_InterfaceModel> & model) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Interface_Protocol,IsSuitableModel,model) };
        opencascade::handle<Standard_Transient> UnknownEntity() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Standard_Transient>,Interface_Protocol,UnknownEntity,) };
        Standard_Boolean IsUnknownEntity(const opencascade::handle<Standard_Transient> & ent) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Interface_Protocol,IsUnknownEntity,ent) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Interface_ReaderModule : public Interface_ReaderModule{
    public:
        using Interface_ReaderModule::Interface_ReaderModule;


        // public pure virtual
        Standard_Integer CaseNum(const opencascade::handle<Interface_FileReaderData> & data,const Standard_Integer num) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Interface_ReaderModule,CaseNum,data,num) };
        void Read(const Standard_Integer casenum,const opencascade::handle<Interface_FileReaderData> & data,const Standard_Integer num,opencascade::handle<Interface_Check> & ach,const opencascade::handle<Standard_Transient> & ent) const  override { PYBIND11_OVERLOAD_PURE(void,Interface_ReaderModule,Read,casenum,data,num,ach,ent) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Interface_SignType : public Interface_SignType{
    public:
        using Interface_SignType::Interface_SignType;


        // public pure virtual
        Standard_CString Value(const opencascade::handle<Standard_Transient> & ent,const opencascade::handle<Interface_InterfaceModel> & model) const  override { PYBIND11_OVERLOAD_PURE(Standard_CString,Interface_SignType,Value,ent,model) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_DataMap<opencascade::handle<Standard_Transient>, Standard_Integer, TColStd_MapTransientHasher>(m,"Interface_DataMapOfTransientInteger");
    preregister_template_NCollection_Array1<opencascade::handle<TCollection_HAsciiString> >(m,"Interface_Array1OfHAsciiString");
    preregister_template_NCollection_Sequence<opencascade::handle<Interface_Check> >(m,"Interface_SequenceOfCheck");
    preregister_template_NCollection_Array1<Interface_FileParameter>(m,"Interface_Array1OfFileParameter");
    preregister_template_NCollection_Vector<Interface_FileParameter>(m,"Interface_VectorOfFileParameter");
    preregister_template_NCollection_IndexedMap<TCollection_AsciiString, Interface_MapAsciiStringHasher>(m,"Interface_IndexedMapOfAsciiString");

// classes forward declarations only
    py::class_<Interface_BitMap , shared_ptr<Interface_BitMap> >(m,"Interface_BitMap",R"#(A bit map simply allows to associate a boolean flag to each item of a list, such as a list of entities, etc... numbered between 1 and a positive count nbitems)#");
    py::class_<Interface_Category , shared_ptr<Interface_Category> >(m,"Interface_Category",R"#(This class manages categories A category is defined by a name and a number, and can be seen as a way of rough classification, i.e. less precise than a cdl type. Hence, it is possible to dispatch every entity in about a dozen of categories, twenty is a reasonable maximum.)#");
    py::class_<Interface_Check ,opencascade::handle<Interface_Check> , Standard_Transient>(m,"Interface_Check",R"#(Defines a Check, as a list of Fail or Warning Messages under a literal form, which can be empty. A Check can also bring an Entity, which is the Entity to which the messages apply (this Entity may be any Transient Object).Defines a Check, as a list of Fail or Warning Messages under a literal form, which can be empty. A Check can also bring an Entity, which is the Entity to which the messages apply (this Entity may be any Transient Object).Defines a Check, as a list of Fail or Warning Messages under a literal form, which can be empty. A Check can also bring an Entity, which is the Entity to which the messages apply (this Entity may be any Transient Object).)#");
    py::class_<Interface_CheckIterator , shared_ptr<Interface_CheckIterator> >(m,"Interface_CheckIterator",R"#(Result of a Check operation (especially from InterfaceModel))#");
    py::class_<Interface_CheckTool , shared_ptr<Interface_CheckTool> >(m,"Interface_CheckTool",R"#(Performs Checks on Entities, using General Service Library and Modules to work. Works on one Entity or on a complete Model)#");
    py::class_<Interface_CopyControl ,opencascade::handle<Interface_CopyControl>,Py_Interface_CopyControl , Standard_Transient>(m,"Interface_CopyControl",R"#(This deferred class describes the services required by CopyTool to work. They are very simple and correspond basically to the management of an indexed map. But they can be provided by various classes which can control a Transfer. Each Starting Entity have at most one Result (Mapping one-one)This deferred class describes the services required by CopyTool to work. They are very simple and correspond basically to the management of an indexed map. But they can be provided by various classes which can control a Transfer. Each Starting Entity have at most one Result (Mapping one-one)This deferred class describes the services required by CopyTool to work. They are very simple and correspond basically to the management of an indexed map. But they can be provided by various classes which can control a Transfer. Each Starting Entity have at most one Result (Mapping one-one))#");
    py::class_<Interface_CopyTool , shared_ptr<Interface_CopyTool> >(m,"Interface_CopyTool",R"#(Performs Deep Copies of sets of Entities Allows to perform Copy of Interface Entities from a Model to another one. Works by calling general services GetFromAnother and GetImplied. Uses a CopyMap to bind a unique Result to each Copied Entity)#");
    py::class_<Interface_EntityCluster ,opencascade::handle<Interface_EntityCluster> , Standard_Transient>(m,"Interface_EntityCluster",R"#(Auxiliary class for EntityList. An EntityList designates an EntityCluster, which brings itself an fixed maximum count of Entities. If it is full, it gives access to another cluster ("Next"). This class is intended to give a good compromise between access time (faster than a Sequence, good for little count) and memory use (better than a Sequence in any case, overall for little count, better than an Array for a very little count. It is designed for a light management. Remark that a new Item may not be Null, because this is the criterium used for "End of List"Auxiliary class for EntityList. An EntityList designates an EntityCluster, which brings itself an fixed maximum count of Entities. If it is full, it gives access to another cluster ("Next"). This class is intended to give a good compromise between access time (faster than a Sequence, good for little count) and memory use (better than a Sequence in any case, overall for little count, better than an Array for a very little count. It is designed for a light management. Remark that a new Item may not be Null, because this is the criterium used for "End of List"Auxiliary class for EntityList. An EntityList designates an EntityCluster, which brings itself an fixed maximum count of Entities. If it is full, it gives access to another cluster ("Next"). This class is intended to give a good compromise between access time (faster than a Sequence, good for little count) and memory use (better than a Sequence in any case, overall for little count, better than an Array for a very little count. It is designed for a light management. Remark that a new Item may not be Null, because this is the criterium used for "End of List")#");
    py::class_<Interface_EntityIterator , shared_ptr<Interface_EntityIterator> >(m,"Interface_EntityIterator",R"#(Defines an Iterator on Entities. Allows considering of various criteria)#");
    py::class_<Interface_EntityList , shared_ptr<Interface_EntityList> >(m,"Interface_EntityList",R"#(This class defines a list of Entities (Transient Objects), it can be used as a field of other Transient classes, with these features : - oriented to define a little list, that is, slower than an Array or a Map of Entities for a big count (about 100 and over), but faster than a Sequence - allows to work as a Sequence, limited to Clear, Append, Remove, Access to an Item identified by its rank in the list - space saving, compared to a Sequence, especially for little amounts; better than an Array for a very little amount (less than 10) but less good for a greater amount)#");
    py::class_<Interface_FileParameter , shared_ptr<Interface_FileParameter> >(m,"Interface_FileParameter",R"#(Auxiliary class to store a litteral parameter in a file intermediate directory or in an UndefinedContent : a reference type Parameter detains an Integer which is used to address a record in the directory. FileParameter is intended to be stored in a ParamSet : hence memory management is performed by ParamSet, which calls Clear to work, while the Destructor (see Destroy) does nothing. Also a FileParameter can be read for consultation only, not to be read from a Structure to be included into another one.)#");
    py::class_<Interface_FileReaderData ,opencascade::handle<Interface_FileReaderData>,Py_Interface_FileReaderData , Standard_Transient>(m,"Interface_FileReaderData",R"#(This class defines services which permit to access Data issued from a File, in a form which does not depend of physical format : thus, each Record has an attached ParamList (to be managed) and resulting Entity.This class defines services which permit to access Data issued from a File, in a form which does not depend of physical format : thus, each Record has an attached ParamList (to be managed) and resulting Entity.This class defines services which permit to access Data issued from a File, in a form which does not depend of physical format : thus, each Record has an attached ParamList (to be managed) and resulting Entity.)#");
    py::class_<Interface_FileReaderTool , shared_ptr<Interface_FileReaderTool>,Py_Interface_FileReaderTool >(m,"Interface_FileReaderTool",R"#(Defines services which are required to load an InterfaceModel from a File. Typically, it may firstly transform a system file into a FileReaderData object, then work on it, not longer considering file contents, to load an Interface Model. It may also work on a FileReaderData already loaded.)#");
    py::class_<Interface_FloatWriter , shared_ptr<Interface_FloatWriter> >(m,"Interface_FloatWriter",R"#(This class converts a floting number (Real) to a string It can be used if the standard C-C++ output functions (sprintf or std::cout<<) are not convenient. That is to say : - to suppress trailing '0' and 'E+00' (if desired) - to control exponant output and floating point output)#");
    py::class_<Interface_GTool ,opencascade::handle<Interface_GTool> , Standard_Transient>(m,"Interface_GTool",R"#(GTool - General Tool for a Model Provides the functions performed by Protocol/GeneralModule for entities of a Model, and recorded in a GeneralLib Optimized : once an entity has been queried, the GeneralLib is not longer queried Shareable between several users : as a HandleGTool - General Tool for a Model Provides the functions performed by Protocol/GeneralModule for entities of a Model, and recorded in a GeneralLib Optimized : once an entity has been queried, the GeneralLib is not longer queried Shareable between several users : as a HandleGTool - General Tool for a Model Provides the functions performed by Protocol/GeneralModule for entities of a Model, and recorded in a GeneralLib Optimized : once an entity has been queried, the GeneralLib is not longer queried Shareable between several users : as a Handle)#");
    py::class_<Interface_GeneralLib , shared_ptr<Interface_GeneralLib> >(m,"Interface_GeneralLib",R"#(None)#");
    py::class_<Interface_GeneralModule ,opencascade::handle<Interface_GeneralModule>,Py_Interface_GeneralModule , Standard_Transient>(m,"Interface_GeneralModule",R"#(This class defines general services, which must be provided for each type of Entity (i.e. of Transient Object processed by an Interface) : Shared List, Check, Copy, Delete, CategoryThis class defines general services, which must be provided for each type of Entity (i.e. of Transient Object processed by an Interface) : Shared List, Check, Copy, Delete, CategoryThis class defines general services, which must be provided for each type of Entity (i.e. of Transient Object processed by an Interface) : Shared List, Check, Copy, Delete, Category)#");
    py::class_<Interface_GlobalNodeOfGeneralLib ,opencascade::handle<Interface_GlobalNodeOfGeneralLib> , Standard_Transient>(m,"Interface_GlobalNodeOfGeneralLib",R"#()#");
    py::class_<Interface_GlobalNodeOfReaderLib ,opencascade::handle<Interface_GlobalNodeOfReaderLib> , Standard_Transient>(m,"Interface_GlobalNodeOfReaderLib",R"#()#");
    py::class_<Interface_Graph , shared_ptr<Interface_Graph> >(m,"Interface_Graph",R"#(Gives basic data structure for operating and storing graph results (usage is normally internal) Entities are Mapped according their Number in the Model)#");
    py::class_<Interface_HArray1OfHAsciiString ,opencascade::handle<Interface_HArray1OfHAsciiString> , Interface_Array1OfHAsciiString, Standard_Transient>(m,"Interface_HArray1OfHAsciiString",R"#()#");
    py::class_<Interface_HGraph ,opencascade::handle<Interface_HGraph> , Standard_Transient>(m,"Interface_HGraph",R"#(This class allows to store a redefinable Graph, via a Handle (usefull for an Object which can work on several successive Models, with the same general conditions)This class allows to store a redefinable Graph, via a Handle (usefull for an Object which can work on several successive Models, with the same general conditions)This class allows to store a redefinable Graph, via a Handle (usefull for an Object which can work on several successive Models, with the same general conditions))#");
    py::class_<Interface_HSequenceOfCheck ,opencascade::handle<Interface_HSequenceOfCheck> , Interface_SequenceOfCheck, Standard_Transient>(m,"Interface_HSequenceOfCheck",R"#()#");
    py::class_<Interface_IntList , shared_ptr<Interface_IntList> >(m,"Interface_IntList",R"#(This class detains the data which describe a Graph. A Graph has two lists, one for shared refs, one for sharing refs (the reverses). Each list comprises, for each Entity of the Model of the Graph, a list of Entities (shared or sharing). In fact, entities are identified by their numbers in the Model or Graph : this gives better performances.)#");
    py::class_<Interface_IntVal ,opencascade::handle<Interface_IntVal> , Standard_Transient>(m,"Interface_IntVal",R"#(An Integer through a Handle (i.e. managed as TShared)An Integer through a Handle (i.e. managed as TShared)An Integer through a Handle (i.e. managed as TShared))#");
    py::class_<Interface_InterfaceModel ,opencascade::handle<Interface_InterfaceModel>,Py_Interface_InterfaceModel , Standard_Transient>(m,"Interface_InterfaceModel",R"#(Defines an (Indexed) Set of data corresponding to a complete Transfer by a File Interface, i.e. File Header and Transient Entities (Objects) contained in a File. Contained Entities are identified in the Model by unique and consecutive Numbers.Defines an (Indexed) Set of data corresponding to a complete Transfer by a File Interface, i.e. File Header and Transient Entities (Objects) contained in a File. Contained Entities are identified in the Model by unique and consecutive Numbers.Defines an (Indexed) Set of data corresponding to a complete Transfer by a File Interface, i.e. File Header and Transient Entities (Objects) contained in a File. Contained Entities are identified in the Model by unique and consecutive Numbers.)#");
    py::class_<Interface_LineBuffer , shared_ptr<Interface_LineBuffer> >(m,"Interface_LineBuffer",R"#(Simple Management of a Line Buffer, to be used by Interface File Writers. While a String is suitable to do that, this class ensures an optimised Memory Management, because this is a hard point of File Writing.)#");
    py::class_<Interface_MSG , shared_ptr<Interface_MSG> >(m,"Interface_MSG",R"#(This class gives a set of functions to manage and use a list of translated messages (messagery))#");
    py::class_<Interface_MapAsciiStringHasher , shared_ptr<Interface_MapAsciiStringHasher> >(m,"Interface_MapAsciiStringHasher",R"#(None)#");
    py::class_<Interface_NodeOfGeneralLib ,opencascade::handle<Interface_NodeOfGeneralLib> , Standard_Transient>(m,"Interface_NodeOfGeneralLib",R"#()#");
    py::class_<Interface_NodeOfReaderLib ,opencascade::handle<Interface_NodeOfReaderLib> , Standard_Transient>(m,"Interface_NodeOfReaderLib",R"#()#");
    py::class_<Interface_ParamList ,opencascade::handle<Interface_ParamList> , Standard_Transient>(m,"Interface_ParamList",R"#()#");
    py::class_<Interface_ParamSet ,opencascade::handle<Interface_ParamSet> , Standard_Transient>(m,"Interface_ParamSet",R"#(Defines an ordered set of FileParameters, in a way to be efficient as in memory requirement or in speedDefines an ordered set of FileParameters, in a way to be efficient as in memory requirement or in speedDefines an ordered set of FileParameters, in a way to be efficient as in memory requirement or in speed)#");
    py::class_<Interface_Protocol ,opencascade::handle<Interface_Protocol>,Py_Interface_Protocol , Standard_Transient>(m,"Interface_Protocol",R"#(General description of Interface Protocols. A Protocol defines a set of Entity types. This class provides also the notion of Active Protocol, as a working context, defined once then exploited by various Tools and Libraries.General description of Interface Protocols. A Protocol defines a set of Entity types. This class provides also the notion of Active Protocol, as a working context, defined once then exploited by various Tools and Libraries.General description of Interface Protocols. A Protocol defines a set of Entity types. This class provides also the notion of Active Protocol, as a working context, defined once then exploited by various Tools and Libraries.)#");
    py::class_<Interface_ReaderLib , shared_ptr<Interface_ReaderLib> >(m,"Interface_ReaderLib",R"#(None)#");
    py::class_<Interface_ReaderModule ,opencascade::handle<Interface_ReaderModule>,Py_Interface_ReaderModule , Standard_Transient>(m,"Interface_ReaderModule",R"#(Defines unitary operations required to read an Entity from a File (see FileReaderData, FileReaderTool), under control of a FileReaderTool. The initial creation is performed by a GeneralModule (set in GeneralLib). Then, which remains is Loading data from the FileReaderData to the EntityDefines unitary operations required to read an Entity from a File (see FileReaderData, FileReaderTool), under control of a FileReaderTool. The initial creation is performed by a GeneralModule (set in GeneralLib). Then, which remains is Loading data from the FileReaderData to the EntityDefines unitary operations required to read an Entity from a File (see FileReaderData, FileReaderTool), under control of a FileReaderTool. The initial creation is performed by a GeneralModule (set in GeneralLib). Then, which remains is Loading data from the FileReaderData to the Entity)#");
    py::class_<Interface_ReportEntity ,opencascade::handle<Interface_ReportEntity> , Standard_Transient>(m,"Interface_ReportEntity",R"#(A ReportEntity is produced to aknowledge and memorize the binding between a Check and an Entity. The Check can bring Fails (+ Warnings if any), or only Warnings. If it is empty, the Report Entity is for an Unknown Entity.A ReportEntity is produced to aknowledge and memorize the binding between a Check and an Entity. The Check can bring Fails (+ Warnings if any), or only Warnings. If it is empty, the Report Entity is for an Unknown Entity.A ReportEntity is produced to aknowledge and memorize the binding between a Check and an Entity. The Check can bring Fails (+ Warnings if any), or only Warnings. If it is empty, the Report Entity is for an Unknown Entity.)#");
    py::class_<Interface_STAT , shared_ptr<Interface_STAT> >(m,"Interface_STAT",R"#(This class manages statistics to be queried asynchronously. Way of use : An operator describes a STAT form then fills it according to its progression. This produces a state of advancement of the process. This state can then be queried asynchronously : typically it is summarised as a percentage. There are also an identification of the current state, and informations on processed volume.)#");
    py::class_<Interface_ShareFlags , shared_ptr<Interface_ShareFlags> >(m,"Interface_ShareFlags",R"#(This class only says for each Entity of a Model, if it is Shared or not by one or more other(s) of this Model It uses the General Service "Shared".)#");
    py::class_<Interface_ShareTool , shared_ptr<Interface_ShareTool> >(m,"Interface_ShareTool",R"#(Builds the Graph of Dependancies, from the General Service "Shared" -> builds for each Entity of a Model, the Shared and Sharing Lists, and gives access to them. Allows to complete with Implied References (which are not regarded as Shared Entities, but are nevertheless Referenced), this can be usefull for Reference Checking)#");
    py::class_<Interface_SignLabel ,opencascade::handle<Interface_SignLabel> >(m,"Interface_SignLabel",R"#(Signature to give the Label from the ModelSignature to give the Label from the ModelSignature to give the Label from the Model)#");
    py::class_<Interface_SignType ,opencascade::handle<Interface_SignType>,Py_Interface_SignType >(m,"Interface_SignType",R"#(Provides the basic service to get a type name, according to a norm It can be used for other classes (general signatures ...)Provides the basic service to get a type name, according to a norm It can be used for other classes (general signatures ...)Provides the basic service to get a type name, according to a norm It can be used for other classes (general signatures ...))#");
    py::class_<Interface_TypedValue ,opencascade::handle<Interface_TypedValue> >(m,"Interface_TypedValue",R"#(Now strictly equivalent to TypedValue from MoniTool, except for ParamType which remains for compatibility reasonsNow strictly equivalent to TypedValue from MoniTool, except for ParamType which remains for compatibility reasonsNow strictly equivalent to TypedValue from MoniTool, except for ParamType which remains for compatibility reasons)#");
    py::class_<Interface_UndefinedContent ,opencascade::handle<Interface_UndefinedContent> , Standard_Transient>(m,"Interface_UndefinedContent",R"#(Defines resources for an "Undefined Entity" : such an Entity is used to describe an Entity which complies with the Norm, but of an Unknown Type : hence it is kept under a literal form (avoiding to loose data). UndefinedContent offers a way to store a list of Parameters, as literals or references to other EntitiesDefines resources for an "Undefined Entity" : such an Entity is used to describe an Entity which complies with the Norm, but of an Unknown Type : hence it is kept under a literal form (avoiding to loose data). UndefinedContent offers a way to store a list of Parameters, as literals or references to other EntitiesDefines resources for an "Undefined Entity" : such an Entity is used to describe an Entity which complies with the Norm, but of an Unknown Type : hence it is kept under a literal form (avoiding to loose data). UndefinedContent offers a way to store a list of Parameters, as literals or references to other Entities)#");
    py::class_<Interface_CopyMap ,opencascade::handle<Interface_CopyMap> , Interface_CopyControl>(m,"Interface_CopyMap",R"#(Manages a Map for the need of single Transfers, such as Copies In such transfer, Starting Entities are read from a unique Starting Model, and each transferred Entity is bound to one and only one Result, which cannot be changed later.Manages a Map for the need of single Transfers, such as Copies In such transfer, Starting Entities are read from a unique Starting Model, and each transferred Entity is bound to one and only one Result, which cannot be changed later.Manages a Map for the need of single Transfers, such as Copies In such transfer, Starting Entities are read from a unique Starting Model, and each transferred Entity is bound to one and only one Result, which cannot be changed later.)#");
    py::class_<Interface_GraphContent , shared_ptr<Interface_GraphContent> , Interface_EntityIterator>(m,"Interface_GraphContent",R"#(Defines general form for classes of graph algorithms on Interfaces, this form is that of EntityIterator Each sub-class fills it according to its own algorithm This also allows to combine any graph result to others, all being given under one unique form)#");
    py::class_<Interface_Static ,opencascade::handle<Interface_Static> , Interface_TypedValue>(m,"Interface_Static",R"#(This class gives a way to manage meaningfull static variables, used as "global" parameters in various procedures.This class gives a way to manage meaningfull static variables, used as "global" parameters in various procedures.This class gives a way to manage meaningfull static variables, used as "global" parameters in various procedures.)#");

};

// user-defined post-inclusion per module

// user-defined post

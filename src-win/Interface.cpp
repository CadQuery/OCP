
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
void register_Interface(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Interface"));


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

// classes


    static_cast<py::class_<Interface_BitMap , shared_ptr<Interface_BitMap> >>(m.attr("Interface_BitMap"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("nbitems"),  py::arg("resflags")=static_cast<const Standard_Integer>(0) )
        .def(py::init< const Interface_BitMap &,const Standard_Boolean >()  , py::arg("other"),  py::arg("copied")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Interface_BitMap::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Interface_BitMap::*)( const Standard_Integer , const Standard_Integer ) >(&Interface_BitMap::Initialize),
             R"#(Initialize empty bit by <nbitems> items One flag is defined, n0 0 <resflags> prepares allocation for <resflags> more flags Flags values start at false)#"  , py::arg("nbitems"),  py::arg("resflags")=static_cast<const Standard_Integer>(0))
        .def("Initialize",
             (void (Interface_BitMap::*)( const Interface_BitMap & , const Standard_Boolean ) ) static_cast<void (Interface_BitMap::*)( const Interface_BitMap & , const Standard_Boolean ) >(&Interface_BitMap::Initialize),
             R"#(Initialize a BitMap from another one)#"  , py::arg("other"),  py::arg("copied")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Reservate",
             (void (Interface_BitMap::*)( const Standard_Integer ) ) static_cast<void (Interface_BitMap::*)( const Standard_Integer ) >(&Interface_BitMap::Reservate),
             R"#(Reservates for a count of more flags)#"  , py::arg("moreflags"))
        .def("SetLength",
             (void (Interface_BitMap::*)( const Standard_Integer ) ) static_cast<void (Interface_BitMap::*)( const Standard_Integer ) >(&Interface_BitMap::SetLength),
             R"#(Sets for a new count of items, which can be either less or greater than the former one For new items, their flags start at false)#"  , py::arg("nbitems"))
        .def("AddFlag",
             (Standard_Integer (Interface_BitMap::*)( const Standard_CString ) ) static_cast<Standard_Integer (Interface_BitMap::*)( const Standard_CString ) >(&Interface_BitMap::AddFlag),
             R"#(Adds a flag, a name can be attached to it Returns its flag number Makes required reservation)#"  , py::arg("name")=static_cast<const Standard_CString>(""))
        .def("AddSomeFlags",
             (Standard_Integer (Interface_BitMap::*)( const Standard_Integer ) ) static_cast<Standard_Integer (Interface_BitMap::*)( const Standard_Integer ) >(&Interface_BitMap::AddSomeFlags),
             R"#(Adds several flags (<more>) with no name Returns the number of last added flag)#"  , py::arg("more"))
        .def("RemoveFlag",
             (Standard_Boolean (Interface_BitMap::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (Interface_BitMap::*)( const Standard_Integer ) >(&Interface_BitMap::RemoveFlag),
             R"#(Removes a flag given its number. Returns True if done, false if num is out of range)#"  , py::arg("num"))
        .def("SetFlagName",
             (Standard_Boolean (Interface_BitMap::*)( const Standard_Integer , const Standard_CString ) ) static_cast<Standard_Boolean (Interface_BitMap::*)( const Standard_Integer , const Standard_CString ) >(&Interface_BitMap::SetFlagName),
             R"#(Sets a name for a flag, given its number name can be empty (to erase the name of a flag) Returns True if done, false if : num is out of range, or name non-empty already set to another flag)#"  , py::arg("num"),  py::arg("name"))
        .def("NbFlags",
             (Standard_Integer (Interface_BitMap::*)() const) static_cast<Standard_Integer (Interface_BitMap::*)() const>(&Interface_BitMap::NbFlags),
             R"#(Returns the count of flags (flag 0 not included))#" )
        .def("Length",
             (Standard_Integer (Interface_BitMap::*)() const) static_cast<Standard_Integer (Interface_BitMap::*)() const>(&Interface_BitMap::Length),
             R"#(Returns the count of items (i.e. the length of the bitmap))#" )
        .def("FlagName",
             (Standard_CString (Interface_BitMap::*)( const Standard_Integer ) const) static_cast<Standard_CString (Interface_BitMap::*)( const Standard_Integer ) const>(&Interface_BitMap::FlagName),
             R"#(Returns the name recorded for a flag, or an empty string)#"  , py::arg("num"))
        .def("FlagNumber",
             (Standard_Integer (Interface_BitMap::*)( const Standard_CString ) const) static_cast<Standard_Integer (Interface_BitMap::*)( const Standard_CString ) const>(&Interface_BitMap::FlagNumber),
             R"#(Returns the number or a flag given its name, or zero)#"  , py::arg("name"))
        .def("Value",
             (Standard_Boolean (Interface_BitMap::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Boolean (Interface_BitMap::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_BitMap::Value),
             R"#(Returns the value (true/false) of a flag, from : - the number of the item - the flag number, by default 0)#"  , py::arg("item"),  py::arg("flag")=static_cast<const Standard_Integer>(0))
        .def("SetValue",
             (void (Interface_BitMap::*)( const Standard_Integer , const Standard_Boolean , const Standard_Integer ) const) static_cast<void (Interface_BitMap::*)( const Standard_Integer , const Standard_Boolean , const Standard_Integer ) const>(&Interface_BitMap::SetValue),
             R"#(Sets a new value for a flag)#"  , py::arg("item"),  py::arg("val"),  py::arg("flag")=static_cast<const Standard_Integer>(0))
        .def("SetTrue",
             (void (Interface_BitMap::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<void (Interface_BitMap::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_BitMap::SetTrue),
             R"#(Sets a flag to True)#"  , py::arg("item"),  py::arg("flag")=static_cast<const Standard_Integer>(0))
        .def("SetFalse",
             (void (Interface_BitMap::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<void (Interface_BitMap::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_BitMap::SetFalse),
             R"#(Sets a flag to False)#"  , py::arg("item"),  py::arg("flag")=static_cast<const Standard_Integer>(0))
        .def("CTrue",
             (Standard_Boolean (Interface_BitMap::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Boolean (Interface_BitMap::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_BitMap::CTrue),
             R"#(Returns the former value for a flag and sets it to True (before : value returned; after : True))#"  , py::arg("item"),  py::arg("flag")=static_cast<const Standard_Integer>(0))
        .def("CFalse",
             (Standard_Boolean (Interface_BitMap::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Boolean (Interface_BitMap::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_BitMap::CFalse),
             R"#(Returns the former value for a flag and sets it to False (before : value returned; after : False))#"  , py::arg("item"),  py::arg("flag")=static_cast<const Standard_Integer>(0))
        .def("Init",
             (void (Interface_BitMap::*)( const Standard_Boolean , const Standard_Integer ) const) static_cast<void (Interface_BitMap::*)( const Standard_Boolean , const Standard_Integer ) const>(&Interface_BitMap::Init),
             R"#(Initialises all the values of Flag Number <flag> to a given value <val>)#"  , py::arg("val"),  py::arg("flag")=static_cast<const Standard_Integer>(0))
        .def("Clear",
             (void (Interface_BitMap::*)() ) static_cast<void (Interface_BitMap::*)() >(&Interface_BitMap::Clear),
             R"#(Clear all field of bit map)#" )
    // methods using call by reference i.s.o. return
        .def("Internals",
             []( Interface_BitMap &self , opencascade::handle<TColStd_HArray1OfInteger> & flags,opencascade::handle<TColStd_HSequenceOfAsciiString> & names ){ Standard_Integer  nbitems; Standard_Integer  nbwords; Standard_Integer  nbflags; self.Internals(nbitems,nbwords,nbflags,flags,names); return std::make_tuple(nbitems,nbwords,nbflags); },
             R"#(Returns internal values, used for copying Flags values start at false)#"  , py::arg("flags"),  py::arg("names"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_Category , shared_ptr<Interface_Category> >>(m.attr("Interface_Category"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Interface_Protocol> & >()  , py::arg("theProtocol") )
        .def(py::init< const opencascade::handle<Interface_GTool> & >()  , py::arg("theGTool") )
    // custom constructors
    // methods
        .def("SetProtocol",
             (void (Interface_Category::*)( const opencascade::handle<Interface_Protocol> & ) ) static_cast<void (Interface_Category::*)( const opencascade::handle<Interface_Protocol> & ) >(&Interface_Category::SetProtocol),
             R"#(Sets/Changes Protocol)#"  , py::arg("theProtocol"))
        .def("CatNum",
             (Standard_Integer (Interface_Category::*)( const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) ) static_cast<Standard_Integer (Interface_Category::*)( const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) >(&Interface_Category::CatNum),
             R"#(Determines the Category Number for an entity in its context, by using general service CategoryNumber)#"  , py::arg("theEnt"),  py::arg("theShares"))
        .def("ClearNums",
             (void (Interface_Category::*)() ) static_cast<void (Interface_Category::*)() >(&Interface_Category::ClearNums),
             R"#(Clears the recorded list of category numbers for a Model)#" )
        .def("Compute",
             (void (Interface_Category::*)( const opencascade::handle<Interface_InterfaceModel> & , const Interface_ShareTool & ) ) static_cast<void (Interface_Category::*)( const opencascade::handle<Interface_InterfaceModel> & , const Interface_ShareTool & ) >(&Interface_Category::Compute),
             R"#(Computes the Category Number for each entity and records it, in an array (ent.number -> category number) Hence, it can be queried by the method Num. The Model itself is not recorded, this method is intended to be used in a wider context (which detains also a Graph, etc))#"  , py::arg("theModel"),  py::arg("theShares"))
        .def("Num",
             (Standard_Integer (Interface_Category::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Interface_Category::*)( const Standard_Integer ) const>(&Interface_Category::Num),
             R"#(Returns the category number recorded for an entity number Returns 0 if out of range)#"  , py::arg("theNumEnt"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("AddCategory_s",
                    (Standard_Integer (*)( const Standard_CString ) ) static_cast<Standard_Integer (*)( const Standard_CString ) >(&Interface_Category::AddCategory),
                    R"#(Records a new Category defined by its names, produces a number New if not yet recorded)#"  , py::arg("theName"))
        .def_static("NbCategories_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Interface_Category::NbCategories),
                    R"#(Returns the count of recorded categories)#" )
        .def_static("Name_s",
                    (Standard_CString (*)( const Standard_Integer ) ) static_cast<Standard_CString (*)( const Standard_Integer ) >(&Interface_Category::Name),
                    R"#(Returns the name of a category, according to its number)#"  , py::arg("theNum"))
        .def_static("Number_s",
                    (Standard_Integer (*)( const Standard_CString ) ) static_cast<Standard_Integer (*)( const Standard_CString ) >(&Interface_Category::Number),
                    R"#(Returns the number of a category, according to its name)#"  , py::arg("theName"))
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&Interface_Category::Init),
                    R"#(Default initialisation (protected against several calls : passes only once))#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_Check ,opencascade::handle<Interface_Check> , Standard_Transient>>(m.attr("Interface_Check"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Standard_Transient> & >()  , py::arg("anentity") )
    // custom constructors
    // methods
        .def("SendFail",
             (void (Interface_Check::*)( const Message_Msg & ) ) static_cast<void (Interface_Check::*)( const Message_Msg & ) >(&Interface_Check::SendFail),
             R"#(New name for AddFail (Msg))#"  , py::arg("amsg"))
        .def("AddFail",
             (void (Interface_Check::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (Interface_Check::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&Interface_Check::AddFail),
             R"#(Records a new Fail message)#"  , py::arg("amess"))
        .def("AddFail",
             (void (Interface_Check::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (Interface_Check::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & ) >(&Interface_Check::AddFail),
             R"#(Records a new Fail message under two forms : final,original)#"  , py::arg("amess"),  py::arg("orig"))
        .def("AddFail",
             (void (Interface_Check::*)( const Standard_CString , const Standard_CString ) ) static_cast<void (Interface_Check::*)( const Standard_CString , const Standard_CString ) >(&Interface_Check::AddFail),
             R"#(Records a new Fail message given as "error text" directly If <orig> is given, a distinct original form is recorded else (D), the original form equates <amess>)#"  , py::arg("amess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("AddFail",
             (void (Interface_Check::*)( const Message_Msg & ) ) static_cast<void (Interface_Check::*)( const Message_Msg & ) >(&Interface_Check::AddFail),
             R"#(Records a new Fail from the definition of a Msg (Original+Value))#"  , py::arg("amsg"))
        .def("HasFailed",
             (Standard_Boolean (Interface_Check::*)() const) static_cast<Standard_Boolean (Interface_Check::*)() const>(&Interface_Check::HasFailed),
             R"#(Returns True if Check brings at least one Fail Message)#" )
        .def("NbFails",
             (Standard_Integer (Interface_Check::*)() const) static_cast<Standard_Integer (Interface_Check::*)() const>(&Interface_Check::NbFails),
             R"#(Returns count of recorded Fails)#" )
        .def("Fail",
             (const opencascade::handle<TCollection_HAsciiString> & (Interface_Check::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<const opencascade::handle<TCollection_HAsciiString> & (Interface_Check::*)( const Standard_Integer , const Standard_Boolean ) const>(&Interface_Check::Fail),
             R"#(Returns Fail Message as a String Final form by default, Original form if <final> is False)#"  , py::arg("num"),  py::arg("final")=static_cast<const Standard_Boolean>(Standard_True))
        .def("CFail",
             (Standard_CString (Interface_Check::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<Standard_CString (Interface_Check::*)( const Standard_Integer , const Standard_Boolean ) const>(&Interface_Check::CFail),
             R"#(Same as above, but returns a CString (to be printed ...) Final form by default, Original form if <final> is False)#"  , py::arg("num"),  py::arg("final")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Fails",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (Interface_Check::*)( const Standard_Boolean ) const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (Interface_Check::*)( const Standard_Boolean ) const>(&Interface_Check::Fails),
             R"#(Returns the list of Fails, for a frontal-engine logic Final forms by default, Original forms if <final> is False Can be empty)#"  , py::arg("final")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SendWarning",
             (void (Interface_Check::*)( const Message_Msg & ) ) static_cast<void (Interface_Check::*)( const Message_Msg & ) >(&Interface_Check::SendWarning),
             R"#(New name for AddWarning)#"  , py::arg("amsg"))
        .def("AddWarning",
             (void (Interface_Check::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (Interface_Check::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&Interface_Check::AddWarning),
             R"#(Records a new Warning message)#"  , py::arg("amess"))
        .def("AddWarning",
             (void (Interface_Check::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (Interface_Check::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & ) >(&Interface_Check::AddWarning),
             R"#(Records a new Warning message under two forms : final,original)#"  , py::arg("amess"),  py::arg("orig"))
        .def("AddWarning",
             (void (Interface_Check::*)( const Standard_CString , const Standard_CString ) ) static_cast<void (Interface_Check::*)( const Standard_CString , const Standard_CString ) >(&Interface_Check::AddWarning),
             R"#(Records a Warning message given as "warning message" directly If <orig> is given, a distinct original form is recorded else (D), the original form equates <amess>)#"  , py::arg("amess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("AddWarning",
             (void (Interface_Check::*)( const Message_Msg & ) ) static_cast<void (Interface_Check::*)( const Message_Msg & ) >(&Interface_Check::AddWarning),
             R"#(Records a new Warning from the definition of a Msg (Original+Value))#"  , py::arg("amsg"))
        .def("HasWarnings",
             (Standard_Boolean (Interface_Check::*)() const) static_cast<Standard_Boolean (Interface_Check::*)() const>(&Interface_Check::HasWarnings),
             R"#(Returns True if Check brings at least one Warning Message)#" )
        .def("NbWarnings",
             (Standard_Integer (Interface_Check::*)() const) static_cast<Standard_Integer (Interface_Check::*)() const>(&Interface_Check::NbWarnings),
             R"#(Returns count of recorded Warning messages)#" )
        .def("Warning",
             (const opencascade::handle<TCollection_HAsciiString> & (Interface_Check::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<const opencascade::handle<TCollection_HAsciiString> & (Interface_Check::*)( const Standard_Integer , const Standard_Boolean ) const>(&Interface_Check::Warning),
             R"#(Returns Warning message as a String Final form by default, Original form if <final> is False)#"  , py::arg("num"),  py::arg("final")=static_cast<const Standard_Boolean>(Standard_True))
        .def("CWarning",
             (Standard_CString (Interface_Check::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<Standard_CString (Interface_Check::*)( const Standard_Integer , const Standard_Boolean ) const>(&Interface_Check::CWarning),
             R"#(Same as above, but returns a CString (to be printed ...) Final form by default, Original form if <final> is False)#"  , py::arg("num"),  py::arg("final")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Warnings",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (Interface_Check::*)( const Standard_Boolean ) const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (Interface_Check::*)( const Standard_Boolean ) const>(&Interface_Check::Warnings),
             R"#(Returns the list of Warnings, for a frontal-engine logic Final forms by default, Original forms if <final> is False Can be empty)#"  , py::arg("final")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SendMsg",
             (void (Interface_Check::*)( const Message_Msg & ) ) static_cast<void (Interface_Check::*)( const Message_Msg & ) >(&Interface_Check::SendMsg),
             R"#(Records an information message This does not change the status of the Check)#"  , py::arg("amsg"))
        .def("NbInfoMsgs",
             (Standard_Integer (Interface_Check::*)() const) static_cast<Standard_Integer (Interface_Check::*)() const>(&Interface_Check::NbInfoMsgs),
             R"#(Returns the count of recorded information messages)#" )
        .def("InfoMsg",
             (const opencascade::handle<TCollection_HAsciiString> & (Interface_Check::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<const opencascade::handle<TCollection_HAsciiString> & (Interface_Check::*)( const Standard_Integer , const Standard_Boolean ) const>(&Interface_Check::InfoMsg),
             R"#(Returns information message as a String)#"  , py::arg("num"),  py::arg("final")=static_cast<const Standard_Boolean>(Standard_True))
        .def("CInfoMsg",
             (Standard_CString (Interface_Check::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<Standard_CString (Interface_Check::*)( const Standard_Integer , const Standard_Boolean ) const>(&Interface_Check::CInfoMsg),
             R"#(Same as above, but returns a CString (to be printed ...) Final form by default, Original form if <final> is False)#"  , py::arg("num"),  py::arg("final")=static_cast<const Standard_Boolean>(Standard_True))
        .def("InfoMsgs",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (Interface_Check::*)( const Standard_Boolean ) const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (Interface_Check::*)( const Standard_Boolean ) const>(&Interface_Check::InfoMsgs),
             R"#(Returns the list of Info Msg, for a frontal-engine logic Final forms by default, Original forms if <final> is False Can be empty)#"  , py::arg("final")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Status",
             (Interface_CheckStatus (Interface_Check::*)() const) static_cast<Interface_CheckStatus (Interface_Check::*)() const>(&Interface_Check::Status),
             R"#(Returns the Check Status : OK, Warning or Fail)#" )
        .def("Complies",
             (Standard_Boolean (Interface_Check::*)( const Interface_CheckStatus ) const) static_cast<Standard_Boolean (Interface_Check::*)( const Interface_CheckStatus ) const>(&Interface_Check::Complies),
             R"#(Tells if Check Status complies with a given one (i.e. also status for query))#"  , py::arg("status"))
        .def("Complies",
             (Standard_Boolean (Interface_Check::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Interface_CheckStatus ) const) static_cast<Standard_Boolean (Interface_Check::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Interface_CheckStatus ) const>(&Interface_Check::Complies),
             R"#(Tells if a message is brought by a Check, as follows : <incl> = 0 : <mess> exactly matches one of the messages <incl> < 0 : <mess> is contained by one of the messages <incl> > 0 : <mess> contains one of the messages For <status> : for CheckWarning and CheckFail, considers only resp. Warning or Check messages. for CheckAny, considers all other values are ignored (answer will be false))#"  , py::arg("mess"),  py::arg("incl"),  py::arg("status"))
        .def("HasEntity",
             (Standard_Boolean (Interface_Check::*)() const) static_cast<Standard_Boolean (Interface_Check::*)() const>(&Interface_Check::HasEntity),
             R"#(Returns True if a Check is devoted to an entity; else, it is global (for InterfaceModel's storing of global error messages))#" )
        .def("Entity",
             (const opencascade::handle<Standard_Transient> & (Interface_Check::*)() const) static_cast<const opencascade::handle<Standard_Transient> & (Interface_Check::*)() const>(&Interface_Check::Entity),
             R"#(Returns the entity on which the Check has been defined)#" )
        .def("Clear",
             (void (Interface_Check::*)() ) static_cast<void (Interface_Check::*)() >(&Interface_Check::Clear),
             R"#(Clears a check, in order to receive informations from transfer (Messages and Entity))#" )
        .def("ClearFails",
             (void (Interface_Check::*)() ) static_cast<void (Interface_Check::*)() >(&Interface_Check::ClearFails),
             R"#(Clears the Fail Messages (for instance to keep only Warnings))#" )
        .def("ClearWarnings",
             (void (Interface_Check::*)() ) static_cast<void (Interface_Check::*)() >(&Interface_Check::ClearWarnings),
             R"#(Clears the Warning Messages (for instance to keep only Fails))#" )
        .def("ClearInfoMsgs",
             (void (Interface_Check::*)() ) static_cast<void (Interface_Check::*)() >(&Interface_Check::ClearInfoMsgs),
             R"#(Clears the Info Messages)#" )
        .def("Remove",
             (Standard_Boolean (Interface_Check::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Interface_CheckStatus ) ) static_cast<Standard_Boolean (Interface_Check::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Interface_CheckStatus ) >(&Interface_Check::Remove),
             R"#(Removes the messages which comply with <mess>, as follows : <incl> = 0 : <mess> exactly matches one of the messages <incl> < 0 : <mess> is contained by one of the messages <incl> > 0 : <mess> contains one of the messages For <status> : for CheckWarning and CheckFail, considers only resp. Warning or Check messages. for CheckAny, considers all other values are ignored (nothing is done) Returns True if at least one message has been removed, False else)#"  , py::arg("mess"),  py::arg("incl"),  py::arg("status"))
        .def("Mend",
             (Standard_Boolean (Interface_Check::*)( const Standard_CString , const Standard_Integer ) ) static_cast<Standard_Boolean (Interface_Check::*)( const Standard_CString , const Standard_Integer ) >(&Interface_Check::Mend),
             R"#(Mends messages, according <pref> and <num> According to <num>, works on the whole list of Fails if = 0(D) or only one Fail message, given its rank If <pref> is empty, converts Fail(s) to Warning(s) Else, does the conversion but prefixes the new Warning(s) but <pref> followed by a semi-column Some reserved values of <pref> are : "FM" : standard prefix "Mended" (can be translated) "CF" : clears Fail(s) "CW" : clears Warning(s) : here, <num> refers to Warning list "CA" : clears all messages : here, <num> is ignored)#"  , py::arg("pref"),  py::arg("num")=static_cast<const Standard_Integer>(0))
        .def("SetEntity",
             (void (Interface_Check::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_Check::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_Check::SetEntity),
             R"#(Receives an entity result of a Transfer)#"  , py::arg("anentity"))
        .def("GetEntity",
             (void (Interface_Check::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_Check::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_Check::GetEntity),
             R"#(same as SetEntity (old form kept for compatibility) Warning : Does nothing if Entity field is not yet clear)#"  , py::arg("anentity"))
        .def("GetMessages",
             (void (Interface_Check::*)( const opencascade::handle<Interface_Check> & ) ) static_cast<void (Interface_Check::*)( const opencascade::handle<Interface_Check> & ) >(&Interface_Check::GetMessages),
             R"#(Copies messages stored in another Check, cumulating Does not regard other's Entity. Used to cumulate messages)#"  , py::arg("other"))
        .def("GetAsWarning",
             (void (Interface_Check::*)( const opencascade::handle<Interface_Check> & , const Standard_Boolean ) ) static_cast<void (Interface_Check::*)( const opencascade::handle<Interface_Check> & , const Standard_Boolean ) >(&Interface_Check::GetAsWarning),
             R"#(Copies messages converted into Warning messages If failsonly is true, only Fails are taken, and converted else, Warnings are taken too. Does not regard Entity Used to keep Fail messages as Warning, after a recovery)#"  , py::arg("other"),  py::arg("failsonly"))
        .def("Print",
             (void (Interface_Check::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer , const Standard_Integer ) const) static_cast<void (Interface_Check::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer , const Standard_Integer ) const>(&Interface_Check::Print),
             R"#(Prints the messages of the check to an Messenger <level> = 1 : only fails <level> = 2 : fails and warnings <level> = 3 : all (fails, warnings, info msg) <final> : if positive (D) prints final values of messages if negative, prints originals if null, prints both forms)#"  , py::arg("S"),  py::arg("level"),  py::arg("final")=static_cast<const Standard_Integer>(1))
        .def("Trace",
             (void (Interface_Check::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<void (Interface_Check::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_Check::Trace),
             R"#(Prints the messages of the check to the default trace file By default, according to the default standard level Else, according level (see method Print))#"  , py::arg("level")=static_cast<const Standard_Integer>(- 1),  py::arg("final")=static_cast<const Standard_Integer>(1))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_Check::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_Check::*)() const>(&Interface_Check::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_Check::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_Check::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_CheckIterator , shared_ptr<Interface_CheckIterator> >>(m.attr("Interface_CheckIterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_CString >()  , py::arg("name") )
    // custom constructors
    // methods
        .def("SetName",
             (void (Interface_CheckIterator::*)( const Standard_CString ) ) static_cast<void (Interface_CheckIterator::*)( const Standard_CString ) >(&Interface_CheckIterator::SetName),
             R"#(Sets / Changes the name)#"  , py::arg("name"))
        .def("Name",
             (Standard_CString (Interface_CheckIterator::*)() const) static_cast<Standard_CString (Interface_CheckIterator::*)() const>(&Interface_CheckIterator::Name),
             R"#(Returns the recorded name (can be empty))#" )
        .def("SetModel",
             (void (Interface_CheckIterator::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (Interface_CheckIterator::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&Interface_CheckIterator::SetModel),
             R"#(Defines a Model, used to locate entities (not required, if it is absent, entities are simply less documented))#"  , py::arg("model"))
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (Interface_CheckIterator::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Interface_CheckIterator::*)() const>(&Interface_CheckIterator::Model),
             R"#(Returns the stored model (can be a null handle))#" )
        .def("Clear",
             (void (Interface_CheckIterator::*)() ) static_cast<void (Interface_CheckIterator::*)() >(&Interface_CheckIterator::Clear),
             R"#(Clears the list of checks)#" )
        .def("Merge",
             (void (Interface_CheckIterator::*)( Interface_CheckIterator & ) ) static_cast<void (Interface_CheckIterator::*)( Interface_CheckIterator & ) >(&Interface_CheckIterator::Merge),
             R"#(Merges another CheckIterator into <me>, i.e. adds each of its Checks. Content of <other> remains unchanged. Takes also the Model but not the Name)#"  , py::arg("other"))
        .def("Add",
             (void (Interface_CheckIterator::*)( const opencascade::handle<Interface_Check> & , const Standard_Integer ) ) static_cast<void (Interface_CheckIterator::*)( const opencascade::handle<Interface_Check> & , const Standard_Integer ) >(&Interface_CheckIterator::Add),
             R"#(Adds a Check to the list to be iterated This Check is Accompanied by Entity Number in the Model (0 for Global Check or Entity unknown in the Model), if 0 and Model is recorded in <me>, it is computed)#"  , py::arg("ach"),  py::arg("num")=static_cast<const Standard_Integer>(0))
        .def("Check",
             (const opencascade::handle<Interface_Check> & (Interface_CheckIterator::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Interface_Check> & (Interface_CheckIterator::*)( const Standard_Integer ) const>(&Interface_CheckIterator::Check),
             R"#(Returns the Check which was attached to an Entity given its Number in the Model. <num>=0 is for the Global Check. If no Check was recorded for this Number, returns an empty Check. Remark : Works apart from the iteration methods (no interference))#"  , py::arg("num"))
        .def("Check",
             (const opencascade::handle<Interface_Check> & (Interface_CheckIterator::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<const opencascade::handle<Interface_Check> & (Interface_CheckIterator::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_CheckIterator::Check),
             R"#(Returns the Check attached to an Entity If no Check was recorded for this Entity, returns an empty Check. Remark : Works apart from the iteration methods (no interference))#"  , py::arg("ent"))
        .def("CCheck",
             (opencascade::handle<Interface_Check> & (Interface_CheckIterator::*)( const Standard_Integer ) ) static_cast<opencascade::handle<Interface_Check> & (Interface_CheckIterator::*)( const Standard_Integer ) >(&Interface_CheckIterator::CCheck),
             R"#(Returns the Check bound to an Entity Number (0 : Global) in order to be consulted or completed on the spot I.e. returns the Check if is already exists, or adds it then returns the new empty Check)#"  , py::arg("num"))
        .def("CCheck",
             (opencascade::handle<Interface_Check> & (Interface_CheckIterator::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<opencascade::handle<Interface_Check> & (Interface_CheckIterator::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_CheckIterator::CCheck),
             R"#(Returns the Check bound to an Entity, in order to be consulted or completed on the spot I.e. returns the Check if is already exists, or adds it then returns the new empty Check)#"  , py::arg("ent"))
        .def("IsEmpty",
             (Standard_Boolean (Interface_CheckIterator::*)( const Standard_Boolean ) const) static_cast<Standard_Boolean (Interface_CheckIterator::*)( const Standard_Boolean ) const>(&Interface_CheckIterator::IsEmpty),
             R"#(Returns True if : no Fail has been recorded if <failsonly> is True, no Check at all if <failsonly> is False)#"  , py::arg("failsonly"))
        .def("Status",
             (Interface_CheckStatus (Interface_CheckIterator::*)() const) static_cast<Interface_CheckStatus (Interface_CheckIterator::*)() const>(&Interface_CheckIterator::Status),
             R"#(Returns worst status among : OK, Warning, Fail)#" )
        .def("Complies",
             (Standard_Boolean (Interface_CheckIterator::*)( const Interface_CheckStatus ) const) static_cast<Standard_Boolean (Interface_CheckIterator::*)( const Interface_CheckStatus ) const>(&Interface_CheckIterator::Complies),
             R"#(Tells if this check list complies with a given status : OK (i.e. empty), Warning (at least one Warning, but no Fail), Fail (at least one), Message (not OK), NoFail, Any)#"  , py::arg("status"))
        .def("Extract",
             (Interface_CheckIterator (Interface_CheckIterator::*)( const Interface_CheckStatus ) const) static_cast<Interface_CheckIterator (Interface_CheckIterator::*)( const Interface_CheckStatus ) const>(&Interface_CheckIterator::Extract),
             R"#(Returns a CheckIterator which contains the checks which comply with a given status Each check is added completely (no split Warning/Fail))#"  , py::arg("status"))
        .def("Extract",
             (Interface_CheckIterator (Interface_CheckIterator::*)( const Standard_CString , const Standard_Integer , const Interface_CheckStatus ) const) static_cast<Interface_CheckIterator (Interface_CheckIterator::*)( const Standard_CString , const Standard_Integer , const Interface_CheckStatus ) const>(&Interface_CheckIterator::Extract),
             R"#(Returns a CheckIterator which contains the check which comply with a message, plus some conditions as follows : <incl> = 0 : <mess> exactly matches one of the messages <incl> < 0 : <mess> is contained by one of the messages <incl> > 0 : <mess> contains one of the messages For <status> : for CheckWarning and CheckFail, considers only resp. Warning or Check messages. for CheckAny, considers all other values are ignored (answer will be false) Each Check which complies is entirely taken)#"  , py::arg("mess"),  py::arg("incl"),  py::arg("status"))
        .def("Remove",
             (Standard_Boolean (Interface_CheckIterator::*)( const Standard_CString , const Standard_Integer , const Interface_CheckStatus ) ) static_cast<Standard_Boolean (Interface_CheckIterator::*)( const Standard_CString , const Standard_Integer , const Interface_CheckStatus ) >(&Interface_CheckIterator::Remove),
             R"#(Removes the messages of all Checks, under these conditions : <incl> = 0 : <mess> exactly matches one of the messages <incl> < 0 : <mess> is contained by one of the messages <incl> > 0 : <mess> contains one of the messages For <status> : for CheckWarning and CheckFail, considers only resp. Warning or Check messages. for CheckAny, considers all other values are ignored (nothing is done) Returns True if at least one message has been removed, False else)#"  , py::arg("mess"),  py::arg("incl"),  py::arg("status"))
        .def("Checkeds",
             (opencascade::handle<TColStd_HSequenceOfTransient> (Interface_CheckIterator::*)( const Standard_Boolean , const Standard_Boolean ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (Interface_CheckIterator::*)( const Standard_Boolean , const Standard_Boolean ) const>(&Interface_CheckIterator::Checkeds),
             R"#(Returns the list of entities concerned by a Check Only fails if <failsonly> is True, else all non-empty checks If <global> is true, adds the model for a global check Else, global check is ignored)#"  , py::arg("failsonly"),  py::arg("global"))
        .def("Start",
             (void (Interface_CheckIterator::*)() const) static_cast<void (Interface_CheckIterator::*)() const>(&Interface_CheckIterator::Start),
             R"#(Starts Iteration. Thus, it is possible to restart it Remark : an iteration may be done with a const Iterator While its content is modified (through a pointer), this allows to give it as a const argument to a function)#" )
        .def("More",
             (Standard_Boolean (Interface_CheckIterator::*)() const) static_cast<Standard_Boolean (Interface_CheckIterator::*)() const>(&Interface_CheckIterator::More),
             R"#(Returns True if there are more Checks to get)#" )
        .def("Next",
             (void (Interface_CheckIterator::*)() const) static_cast<void (Interface_CheckIterator::*)() const>(&Interface_CheckIterator::Next),
             R"#(Sets Iteration to next Item)#" )
        .def("Value",
             (const opencascade::handle<Interface_Check> & (Interface_CheckIterator::*)() const) static_cast<const opencascade::handle<Interface_Check> & (Interface_CheckIterator::*)() const>(&Interface_CheckIterator::Value),
             R"#(Returns Check currently Iterated It brings all other informations (status, messages, ...) The Number of the Entity in the Model is given by Number below)#" )
        .def("Number",
             (Standard_Integer (Interface_CheckIterator::*)() const) static_cast<Standard_Integer (Interface_CheckIterator::*)() const>(&Interface_CheckIterator::Number),
             R"#(Returns Number of Entity for the Check currently iterated or 0 for GlobalCheck)#" )
        .def("Print",
             (void (Interface_CheckIterator::*)( const opencascade::handle<Message_Messenger> & , const Standard_Boolean , const Standard_Integer ) const) static_cast<void (Interface_CheckIterator::*)( const opencascade::handle<Message_Messenger> & , const Standard_Boolean , const Standard_Integer ) const>(&Interface_CheckIterator::Print),
             R"#(Prints the list of Checks with their attached Numbers If <failsonly> is True, prints only Fail messages If <failsonly> is False, prints all messages If <final> = 0 (D), prints also original messages if different If <final> < 0, prints only original messages If <final> > 0, prints only final messages It uses the recorded Model if it is defined Remark : Works apart from the iteration methods (no interference))#"  , py::arg("S"),  py::arg("failsonly"),  py::arg("final")=static_cast<const Standard_Integer>(0))
        .def("Print",
             (void (Interface_CheckIterator::*)( const opencascade::handle<Message_Messenger> & , const opencascade::handle<Interface_InterfaceModel> & , const Standard_Boolean , const Standard_Integer ) const) static_cast<void (Interface_CheckIterator::*)( const opencascade::handle<Message_Messenger> & , const opencascade::handle<Interface_InterfaceModel> & , const Standard_Boolean , const Standard_Integer ) const>(&Interface_CheckIterator::Print),
             R"#(Works as Print without a model, but for entities which have no attached number (Number not positive), tries to compute this Number from <model> and displays "original" or "computed")#"  , py::arg("S"),  py::arg("model"),  py::arg("failsonly"),  py::arg("final")=static_cast<const Standard_Integer>(0))
        .def("Destroy",
             (void (Interface_CheckIterator::*)() ) static_cast<void (Interface_CheckIterator::*)() >(&Interface_CheckIterator::Destroy),
             R"#(Clears data of iteration)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_CheckTool , shared_ptr<Interface_CheckTool> >>(m.attr("Interface_CheckTool"))
    // constructors
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Interface_Protocol> & >()  , py::arg("model"),  py::arg("protocol") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> & >()  , py::arg("model") )
        .def(py::init< const Interface_Graph & >()  , py::arg("graph") )
        .def(py::init< const opencascade::handle<Interface_HGraph> & >()  , py::arg("hgraph") )
    // custom constructors
    // methods
        .def("FillCheck",
             (void (Interface_CheckTool::*)( const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) ) static_cast<void (Interface_CheckTool::*)( const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) >(&Interface_CheckTool::FillCheck),
             R"#(Fills as required a Check with the Error and Warning messages produced by Checking a given Entity. For an Erroneous or Corrected Entity : Check build at Analyse time; else, Check computed for Entity (Verify integrity), can use a Graph as required to control context)#"  , py::arg("ent"),  py::arg("sh"),  py::arg("ach"))
        .def("Print",
             (void (Interface_CheckTool::*)( const opencascade::handle<Interface_Check> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (Interface_CheckTool::*)( const opencascade::handle<Interface_Check> & , const opencascade::handle<Message_Messenger> & ) const>(&Interface_CheckTool::Print),
             R"#(Utility method which Prints the content of a Check)#"  , py::arg("ach"),  py::arg("S"))
        .def("Print",
             (void (Interface_CheckTool::*)( const Interface_CheckIterator & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (Interface_CheckTool::*)( const Interface_CheckIterator & , const opencascade::handle<Message_Messenger> & ) const>(&Interface_CheckTool::Print),
             R"#(Simply Lists all the Checks and the Content (messages) and the Entity, if there is, of each Check (if all Checks are OK, nothing is Printed))#"  , py::arg("list"),  py::arg("S"))
        .def("Check",
             (opencascade::handle<Interface_Check> (Interface_CheckTool::*)( const Standard_Integer ) ) static_cast<opencascade::handle<Interface_Check> (Interface_CheckTool::*)( const Standard_Integer ) >(&Interface_CheckTool::Check),
             R"#(Returns the Check associated to an Entity identified by its Number in a Model.)#"  , py::arg("num"))
        .def("CheckSuccess",
             (void (Interface_CheckTool::*)( const Standard_Boolean ) ) static_cast<void (Interface_CheckTool::*)( const Standard_Boolean ) >(&Interface_CheckTool::CheckSuccess),
             R"#(Checks if any Error has been detected (CheckList not empty) Returns normally if none, raises exception if some exists. It reuses the last computations from other checking methods, unless the argument <resest> is given True)#"  , py::arg("reset")=static_cast<const Standard_Boolean>(Standard_False))
        .def("CompleteCheckList",
             (Interface_CheckIterator (Interface_CheckTool::*)() ) static_cast<Interface_CheckIterator (Interface_CheckTool::*)() >(&Interface_CheckTool::CompleteCheckList),
             R"#(Returns list of all "remarkable" informations, which include : - GlobalCheck, if not empty - Error Checks, for all Errors (Verify + Analyse) - also Corrected Entities - and Unknown Entities : for those, each Unknown Entity is associated to an empty Check (it is neither an Error nor a Correction, but a remarkable information))#" )
        .def("CheckList",
             (Interface_CheckIterator (Interface_CheckTool::*)() ) static_cast<Interface_CheckIterator (Interface_CheckTool::*)() >(&Interface_CheckTool::CheckList),
             R"#(Returns list of all Errors detected Note that presence of Unknown Entities is not an error Cumulates : GlobalCheck if error + AnalyseCheckList + VerifyCheckList)#" )
        .def("AnalyseCheckList",
             (Interface_CheckIterator (Interface_CheckTool::*)() ) static_cast<Interface_CheckIterator (Interface_CheckTool::*)() >(&Interface_CheckTool::AnalyseCheckList),
             R"#(Returns list of errors dectected at Analyse time (syntactic) (note that GlobalCheck is not in this list))#" )
        .def("VerifyCheckList",
             (Interface_CheckIterator (Interface_CheckTool::*)() ) static_cast<Interface_CheckIterator (Interface_CheckTool::*)() >(&Interface_CheckTool::VerifyCheckList),
             R"#(Returns list of integrity constraints errors (semantic) (note that GlobalCheck is not in this list))#" )
        .def("WarningCheckList",
             (Interface_CheckIterator (Interface_CheckTool::*)() ) static_cast<Interface_CheckIterator (Interface_CheckTool::*)() >(&Interface_CheckTool::WarningCheckList),
             R"#(Returns list of Corrections (includes GlobalCheck if corrected))#" )
        .def("UnknownEntities",
             (Interface_EntityIterator (Interface_CheckTool::*)() ) static_cast<Interface_EntityIterator (Interface_CheckTool::*)() >(&Interface_CheckTool::UnknownEntities),
             R"#(Returns list of Unknown Entities Note that Error and Erroneous Entities are not considered as Unknown)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_CopyControl ,opencascade::handle<Interface_CopyControl>,Py_Interface_CopyControl , Standard_Transient>>(m.attr("Interface_CopyControl"))
    // constructors
    // custom constructors
    // methods
        .def("Clear",
             (void (Interface_CopyControl::*)() ) static_cast<void (Interface_CopyControl::*)() >(&Interface_CopyControl::Clear),
             R"#(Clears List of Copy Results. Gets Ready to begin another Copy Process.)#" )
        .def("Bind",
             (void (Interface_CopyControl::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_CopyControl::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) >(&Interface_CopyControl::Bind),
             R"#(Bind a Result to a Starting Entity identified by its Number)#"  , py::arg("ent"),  py::arg("res"))
        .def("Search",
             (Standard_Boolean (Interface_CopyControl::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_CopyControl::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const>(&Interface_CopyControl::Search),
             R"#(Searches for the Result bound to a Startingf Entity identified by its Number. If Found, returns True and fills <res> Else, returns False and nullifies <res>)#"  , py::arg("ent"),  py::arg("res"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_CopyControl::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_CopyControl::*)() const>(&Interface_CopyControl::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_CopyControl::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_CopyControl::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_CopyTool , shared_ptr<Interface_CopyTool> >>(m.attr("Interface_CopyTool"))
    // constructors
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const Interface_GeneralLib & >()  , py::arg("amodel"),  py::arg("lib") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Interface_Protocol> & >()  , py::arg("amodel"),  py::arg("protocol") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> & >()  , py::arg("amodel") )
    // custom constructors
    // methods
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (Interface_CopyTool::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Interface_CopyTool::*)() const>(&Interface_CopyTool::Model),
             R"#(Returns the Model on which the CopyTool works)#" )
        .def("SetControl",
             (void (Interface_CopyTool::*)( const opencascade::handle<Interface_CopyControl> & ) ) static_cast<void (Interface_CopyTool::*)( const opencascade::handle<Interface_CopyControl> & ) >(&Interface_CopyTool::SetControl),
             R"#(Changes the Map of Result for another one. This allows to work with a more sophisticated Mapping Control than the Standard one which is CopyMap (e.g. TransferProcess from Transfer))#"  , py::arg("othermap"))
        .def("Control",
             (opencascade::handle<Interface_CopyControl> (Interface_CopyTool::*)() const) static_cast<opencascade::handle<Interface_CopyControl> (Interface_CopyTool::*)() const>(&Interface_CopyTool::Control),
             R"#(Returns the object used for Control)#" )
        .def("Clear",
             (void (Interface_CopyTool::*)() ) static_cast<void (Interface_CopyTool::*)() >(&Interface_CopyTool::Clear),
             R"#(Clears Transfer List. Gets Ready to begin another Transfer)#" )
        .def("Copy",
             (Standard_Boolean (Interface_CopyTool::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Boolean (Interface_CopyTool::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & , const Standard_Boolean , const Standard_Boolean ) >(&Interface_CopyTool::Copy),
             R"#(Creates the CounterPart of an Entity (by ShallowCopy), Binds it, then Copies the content of the former Entity to the other one (same Type), by call to the General Service Library It may command the Copy of Referenced Entities Then, its returns True.)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("mapped"),  py::arg("errstat"))
        .def("Transferred",
             (opencascade::handle<Standard_Transient> (Interface_CopyTool::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<opencascade::handle<Standard_Transient> (Interface_CopyTool::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_CopyTool::Transferred),
             R"#(Transfers one Entity, if not yet bound to a result Remark : For an Entity which is reported in the Starting Model, the ReportEntity will also be copied with its Content if it has one (at least ShallowCopy; Complete Copy if the Protocol recognizes the Content : see method Copy))#"  , py::arg("ent"))
        .def("Bind",
             (void (Interface_CopyTool::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_CopyTool::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) >(&Interface_CopyTool::Bind),
             R"#(Defines a Result for the Transfer of a Starting object. Used by method Transferred (which performs a normal Copy), but can also be called to enforce a result : in the latter case, the enforced result must be compatible with the other Transfers which are performed)#"  , py::arg("ent"),  py::arg("res"))
        .def("Search",
             (Standard_Boolean (Interface_CopyTool::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_CopyTool::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const>(&Interface_CopyTool::Search),
             R"#(Search for the result of a Starting Object (i.e. an Entity) Returns True if a Result is Bound (and fills "result") Returns False if no result is Bound)#"  , py::arg("ent"),  py::arg("res"))
        .def("ClearLastFlags",
             (void (Interface_CopyTool::*)() ) static_cast<void (Interface_CopyTool::*)() >(&Interface_CopyTool::ClearLastFlags),
             R"#(Clears LastFlags only. This allows to know what Entities are copied after its call (see method LastCopiedAfter). It can be used when copies are done by increments, which must be distinghished. ClearLastFlags is also called by Clear.)#" )
        .def("LastCopiedAfter",
             (Standard_Integer (Interface_CopyTool::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (Interface_CopyTool::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const>(&Interface_CopyTool::LastCopiedAfter),
             R"#(Returns an copied Entity and its Result which were operated after last call to ClearLastFlags. It returns the first "Last Copied Entity" which Number follows <numfrom>, Zero if none. It is used in a loop as follow : Integer num = 0; while ( (num = CopyTool.LastCopiedAfter(num,ent,res)) ) { .. Process Starting <ent> and its Result <res> })#"  , py::arg("numfrom"),  py::arg("ent"),  py::arg("res"))
        .def("TransferEntity",
             (void (Interface_CopyTool::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_CopyTool::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_CopyTool::TransferEntity),
             R"#(Transfers one Entity and records result into the Transfer List Calls method Transferred)#"  , py::arg("ent"))
        .def("RenewImpliedRefs",
             (void (Interface_CopyTool::*)() ) static_cast<void (Interface_CopyTool::*)() >(&Interface_CopyTool::RenewImpliedRefs),
             R"#(Renews the Implied References. These References do not involve Copying of referenced Entities. For such a Reference, if the Entity which defines it AND the referenced Entity are both copied, then this Reference is renewed. Else it is deleted in the copied Entities. Remark : this concerns only some specific references, such as "back pointers".)#" )
        .def("FillModel",
             (void (Interface_CopyTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (Interface_CopyTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&Interface_CopyTool::FillModel),
             R"#(Fills a Model with the result of the transfer (TransferList) Commands copy of Header too, and calls RenewImpliedRefs)#"  , py::arg("bmodel"))
        .def("CompleteResult",
             (Interface_EntityIterator (Interface_CopyTool::*)( const Standard_Boolean ) const) static_cast<Interface_EntityIterator (Interface_CopyTool::*)( const Standard_Boolean ) const>(&Interface_CopyTool::CompleteResult),
             R"#(Returns the complete list of copied Entities If <withreports> is given True, the entities which were reported in the Starting Model are replaced in the list by the copied ReportEntities)#"  , py::arg("withreports")=static_cast<const Standard_Boolean>(Standard_False))
        .def("RootResult",
             (Interface_EntityIterator (Interface_CopyTool::*)( const Standard_Boolean ) const) static_cast<Interface_EntityIterator (Interface_CopyTool::*)( const Standard_Boolean ) const>(&Interface_CopyTool::RootResult),
             R"#(Returns the list of Root copied Entities (those which were asked for copy by the user of CopyTool, not by copying another Entity))#"  , py::arg("withreports")=static_cast<const Standard_Boolean>(Standard_False))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_EntityCluster ,opencascade::handle<Interface_EntityCluster> , Standard_Transient>>(m.attr("Interface_EntityCluster"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Standard_Transient> & >()  , py::arg("ent") )
        .def(py::init< const opencascade::handle<Interface_EntityCluster> & >()  , py::arg("ec") )
        .def(py::init< const opencascade::handle<Standard_Transient> &,const opencascade::handle<Interface_EntityCluster> & >()  , py::arg("ant"),  py::arg("ec") )
    // custom constructors
    // methods
        .def("Append",
             (void (Interface_EntityCluster::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_EntityCluster::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_EntityCluster::Append),
             R"#(Appends an Entity to the Cluster. If it is not full, adds the entity directly inside itself. Else, transmits to its Next and Creates it if it does not yet exist)#"  , py::arg("ent"))
        .def("Remove",
             (Standard_Boolean (Interface_EntityCluster::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (Interface_EntityCluster::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_EntityCluster::Remove),
             R"#(Removes an Entity from the Cluster. If it is not found, calls its Next one to do so. Returns True if it becomes itself empty, False else (thus, a Cluster which becomes empty is deleted from the list))#"  , py::arg("ent"))
        .def("Remove",
             (Standard_Boolean (Interface_EntityCluster::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (Interface_EntityCluster::*)( const Standard_Integer ) >(&Interface_EntityCluster::Remove),
             R"#(Removes an Entity from the Cluster, given its rank. If <num> is greater than NbLocal, calls its Next with (num - NbLocal), Returns True if it becomes itself empty, False else)#"  , py::arg("num"))
        .def("NbEntities",
             (Standard_Integer (Interface_EntityCluster::*)() const) static_cast<Standard_Integer (Interface_EntityCluster::*)() const>(&Interface_EntityCluster::NbEntities),
             R"#(Returns total count of Entities (including Next))#" )
        .def("Value",
             (const opencascade::handle<Standard_Transient> & (Interface_EntityCluster::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Standard_Transient> & (Interface_EntityCluster::*)( const Standard_Integer ) const>(&Interface_EntityCluster::Value),
             R"#(Returns the Entity identified by its rank in the list (including Next))#"  , py::arg("num"))
        .def("SetValue",
             (void (Interface_EntityCluster::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_EntityCluster::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) >(&Interface_EntityCluster::SetValue),
             R"#(Changes an Entity given its rank.)#"  , py::arg("num"),  py::arg("ent"))
        .def("FillIterator",
             (void (Interface_EntityCluster::*)( Interface_EntityIterator & ) const) static_cast<void (Interface_EntityCluster::*)( Interface_EntityIterator & ) const>(&Interface_EntityCluster::FillIterator),
             R"#(Fills an Iterator with designated Entities (includes Next))#"  , py::arg("iter"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_EntityCluster::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_EntityCluster::*)() const>(&Interface_EntityCluster::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_EntityCluster::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_EntityCluster::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_EntityIterator , shared_ptr<Interface_EntityIterator> >>(m.attr("Interface_EntityIterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<TColStd_HSequenceOfTransient> & >()  , py::arg("list") )
    // custom constructors
    // methods
        .def("AddList",
             (void (Interface_EntityIterator::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ) ) static_cast<void (Interface_EntityIterator::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ) >(&Interface_EntityIterator::AddList),
             R"#(Gets a list of entities and adds its to the iteration list)#"  , py::arg("list"))
        .def("AddItem",
             (void (Interface_EntityIterator::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_EntityIterator::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_EntityIterator::AddItem),
             R"#(Adds to the iteration list a defined entity)#"  , py::arg("anentity"))
        .def("GetOneItem",
             (void (Interface_EntityIterator::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_EntityIterator::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_EntityIterator::GetOneItem),
             R"#(same as AddItem (kept for compatibility))#"  , py::arg("anentity"))
        .def("SelectType",
             (void (Interface_EntityIterator::*)( const opencascade::handle<Standard_Type> & , const Standard_Boolean ) ) static_cast<void (Interface_EntityIterator::*)( const opencascade::handle<Standard_Type> & , const Standard_Boolean ) >(&Interface_EntityIterator::SelectType),
             R"#(Selects entities with are Kind of a given type, keep only them (is keep is True) or reject only them (if keep is False))#"  , py::arg("atype"),  py::arg("keep"))
        .def("NbEntities",
             (Standard_Integer (Interface_EntityIterator::*)() const) static_cast<Standard_Integer (Interface_EntityIterator::*)() const>(&Interface_EntityIterator::NbEntities),
             R"#(Returns count of entities which will be iterated on Calls Start if not yet done)#" )
        .def("NbTyped",
             (Standard_Integer (Interface_EntityIterator::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (Interface_EntityIterator::*)( const opencascade::handle<Standard_Type> & ) const>(&Interface_EntityIterator::NbTyped),
             R"#(Returns count of entities of a given type (kind of))#"  , py::arg("type"))
        .def("Typed",
             (Interface_EntityIterator (Interface_EntityIterator::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Interface_EntityIterator (Interface_EntityIterator::*)( const opencascade::handle<Standard_Type> & ) const>(&Interface_EntityIterator::Typed),
             R"#(Returns the list of entities of a given type (kind of))#"  , py::arg("type"))
        .def("Start",
             (void (Interface_EntityIterator::*)() const) static_cast<void (Interface_EntityIterator::*)() const>(&Interface_EntityIterator::Start),
             R"#(Allows re-iteration (useless for the first iteration))#" )
        .def("More",
             (Standard_Boolean (Interface_EntityIterator::*)() const) static_cast<Standard_Boolean (Interface_EntityIterator::*)() const>(&Interface_EntityIterator::More),
             R"#(Says if there are other entities (vertices) to iterate the first time, calls Start)#" )
        .def("Next",
             (void (Interface_EntityIterator::*)() const) static_cast<void (Interface_EntityIterator::*)() const>(&Interface_EntityIterator::Next),
             R"#(Sets iteration to the next entity (vertex) to give)#" )
        .def("Value",
             (const opencascade::handle<Standard_Transient> & (Interface_EntityIterator::*)() const) static_cast<const opencascade::handle<Standard_Transient> & (Interface_EntityIterator::*)() const>(&Interface_EntityIterator::Value),
             R"#(Returns the current Entity iterated, to be used by Interface tools)#" )
        .def("Content",
             (opencascade::handle<TColStd_HSequenceOfTransient> (Interface_EntityIterator::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (Interface_EntityIterator::*)() const>(&Interface_EntityIterator::Content),
             R"#(Returns the content of the Iterator, accessed through a Handle to be used by a frontal-engine logic Returns an empty Sequence if the Iterator is empty Calls Start if not yet done)#" )
        .def("Destroy",
             (void (Interface_EntityIterator::*)() ) static_cast<void (Interface_EntityIterator::*)() >(&Interface_EntityIterator::Destroy),
             R"#(Clears data of iteration)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_EntityList , shared_ptr<Interface_EntityList> >>(m.attr("Interface_EntityList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (Interface_EntityList::*)() ) static_cast<void (Interface_EntityList::*)() >(&Interface_EntityList::Clear),
             R"#(Clears the List)#" )
        .def("Append",
             (void (Interface_EntityList::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_EntityList::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_EntityList::Append),
             R"#(Appends an Entity, that is to the END of the list (keeps order, but works slowerly than Add, see below))#"  , py::arg("ent"))
        .def("Add",
             (void (Interface_EntityList::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_EntityList::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_EntityList::Add),
             R"#(Adds an Entity to the list, that is, with NO REGARD about the order (faster than Append if count becomes greater than 10))#"  , py::arg("ent"))
        .def("Remove",
             (void (Interface_EntityList::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_EntityList::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_EntityList::Remove),
             R"#(Removes an Entity from the list, if it is there)#"  , py::arg("ent"))
        .def("Remove",
             (void (Interface_EntityList::*)( const Standard_Integer ) ) static_cast<void (Interface_EntityList::*)( const Standard_Integer ) >(&Interface_EntityList::Remove),
             R"#(Removes an Entity from the list, given its rank)#"  , py::arg("num"))
        .def("IsEmpty",
             (Standard_Boolean (Interface_EntityList::*)() const) static_cast<Standard_Boolean (Interface_EntityList::*)() const>(&Interface_EntityList::IsEmpty),
             R"#(Returns True if the list is empty)#" )
        .def("NbEntities",
             (Standard_Integer (Interface_EntityList::*)() const) static_cast<Standard_Integer (Interface_EntityList::*)() const>(&Interface_EntityList::NbEntities),
             R"#(Returns count of recorded Entities)#" )
        .def("Value",
             (const opencascade::handle<Standard_Transient> & (Interface_EntityList::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Standard_Transient> & (Interface_EntityList::*)( const Standard_Integer ) const>(&Interface_EntityList::Value),
             R"#(Returns an Item given its number. Beware about the way the list was filled (see above, Add and Append))#"  , py::arg("num"))
        .def("SetValue",
             (void (Interface_EntityList::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_EntityList::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) >(&Interface_EntityList::SetValue),
             R"#(Returns an Item given its number. Beware about the way the list was filled (see above, Add and Append))#"  , py::arg("num"),  py::arg("ent"))
        .def("FillIterator",
             (void (Interface_EntityList::*)( Interface_EntityIterator & ) const) static_cast<void (Interface_EntityList::*)( Interface_EntityIterator & ) const>(&Interface_EntityList::FillIterator),
             R"#(fills an Iterator with the content of the list (normal way to consult a list which has been filled with Add))#"  , py::arg("iter"))
        .def("NbTypedEntities",
             (Standard_Integer (Interface_EntityList::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (Interface_EntityList::*)( const opencascade::handle<Standard_Type> & ) const>(&Interface_EntityList::NbTypedEntities),
             R"#(Returns count of Entities of a given Type (0 : none))#"  , py::arg("atype"))
        .def("TypedEntity",
             (opencascade::handle<Standard_Transient> (Interface_EntityList::*)( const opencascade::handle<Standard_Type> & , const Standard_Integer ) const) static_cast<opencascade::handle<Standard_Transient> (Interface_EntityList::*)( const opencascade::handle<Standard_Type> & , const Standard_Integer ) const>(&Interface_EntityList::TypedEntity),
             R"#(Returns the Entity which is of a given type. If num = 0 (D), there must be ONE AND ONLY ONE If num > 0, returns the num-th entity of this type)#"  , py::arg("atype"),  py::arg("num")=static_cast<const Standard_Integer>(0))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_FileParameter , shared_ptr<Interface_FileParameter> >>(m.attr("Interface_FileParameter"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (Interface_FileParameter::*)( const TCollection_AsciiString & , const Interface_ParamType ) ) static_cast<void (Interface_FileParameter::*)( const TCollection_AsciiString & , const Interface_ParamType ) >(&Interface_FileParameter::Init),
             R"#(Fills fields (with Entity Number set to zero))#"  , py::arg("val"),  py::arg("typ"))
        .def("Init",
             (void (Interface_FileParameter::*)( const Standard_CString , const Interface_ParamType ) ) static_cast<void (Interface_FileParameter::*)( const Standard_CString , const Interface_ParamType ) >(&Interface_FileParameter::Init),
             R"#(Same as above, but builds the Value from a CString)#"  , py::arg("val"),  py::arg("typ"))
        .def("CValue",
             (Standard_CString (Interface_FileParameter::*)() const) static_cast<Standard_CString (Interface_FileParameter::*)() const>(&Interface_FileParameter::CValue),
             R"#(Same as above, but as a CString (for immediate exploitation) was C++ : return const)#" )
        .def("ParamType",
             (Interface_ParamType (Interface_FileParameter::*)() const) static_cast<Interface_ParamType (Interface_FileParameter::*)() const>(&Interface_FileParameter::ParamType),
             R"#(Returns the type of the parameter)#" )
        .def("SetEntityNumber",
             (void (Interface_FileParameter::*)( const Standard_Integer ) ) static_cast<void (Interface_FileParameter::*)( const Standard_Integer ) >(&Interface_FileParameter::SetEntityNumber),
             R"#(Allows to set a reference to an Entity in a numbered list)#"  , py::arg("num"))
        .def("EntityNumber",
             (Standard_Integer (Interface_FileParameter::*)() const) static_cast<Standard_Integer (Interface_FileParameter::*)() const>(&Interface_FileParameter::EntityNumber),
             R"#(Returns value set by SetEntityNumber)#" )
        .def("Clear",
             (void (Interface_FileParameter::*)() ) static_cast<void (Interface_FileParameter::*)() >(&Interface_FileParameter::Clear),
             R"#(Clears stored data : frees memory taken for the String Value)#" )
        .def("Destroy",
             (void (Interface_FileParameter::*)() ) static_cast<void (Interface_FileParameter::*)() >(&Interface_FileParameter::Destroy),
             R"#(Destructor. Does nothing because Memory is managed by ParamSet)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_FileReaderData ,opencascade::handle<Interface_FileReaderData>,Py_Interface_FileReaderData , Standard_Transient>>(m.attr("Interface_FileReaderData"))
    // constructors
    // custom constructors
    // methods
        .def("NbRecords",
             (Standard_Integer (Interface_FileReaderData::*)() const) static_cast<Standard_Integer (Interface_FileReaderData::*)() const>(&Interface_FileReaderData::NbRecords),
             R"#(Returns the count of registered records That is, value given for Initialization (can be redefined))#" )
        .def("NbEntities",
             (Standard_Integer (Interface_FileReaderData::*)() const) static_cast<Standard_Integer (Interface_FileReaderData::*)() const>(&Interface_FileReaderData::NbEntities),
             R"#(Returns the count of entities. Depending of each norm, records can be Entities or SubParts (SubList in STEP, SubGroup in SET ...). NbEntities counts only Entities, not Subs Used for memory reservation in InterfaceModel Default implementation uses FindNextRecord Can be redefined into a more performant way)#" )
        .def("FindNextRecord",
             (Standard_Integer (Interface_FileReaderData::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Interface_FileReaderData::*)( const Standard_Integer ) const>(&Interface_FileReaderData::FindNextRecord),
             R"#(Determines the record number defining an Entity following a given record number. Specific to each sub-class of FileReaderData. Returning zero means no record found)#"  , py::arg("num"))
        .def("InitParams",
             (void (Interface_FileReaderData::*)( const Standard_Integer ) ) static_cast<void (Interface_FileReaderData::*)( const Standard_Integer ) >(&Interface_FileReaderData::InitParams),
             R"#(attaches an empty ParamList to a Record)#"  , py::arg("num"))
        .def("AddParam",
             (void (Interface_FileReaderData::*)( const Standard_Integer , const Standard_CString , const Interface_ParamType , const Standard_Integer ) ) static_cast<void (Interface_FileReaderData::*)( const Standard_Integer , const Standard_CString , const Interface_ParamType , const Standard_Integer ) >(&Interface_FileReaderData::AddParam),
             R"#(Adds a parameter to record no "num" and fills its fields (EntityNumber is optional) Warning : <aval> is assumed to be memory-managed elsewhere : it is NOT copied. This gives a best speed : strings remain stored in pages of characters)#"  , py::arg("num"),  py::arg("aval"),  py::arg("atype"),  py::arg("nument")=static_cast<const Standard_Integer>(0))
        .def("AddParam",
             (void (Interface_FileReaderData::*)( const Standard_Integer , const TCollection_AsciiString & , const Interface_ParamType , const Standard_Integer ) ) static_cast<void (Interface_FileReaderData::*)( const Standard_Integer , const TCollection_AsciiString & , const Interface_ParamType , const Standard_Integer ) >(&Interface_FileReaderData::AddParam),
             R"#(Same as above, but gets a AsciiString from TCollection Remark that the content of the AsciiString is locally copied (because its content is most often lost after using))#"  , py::arg("num"),  py::arg("aval"),  py::arg("atype"),  py::arg("nument")=static_cast<const Standard_Integer>(0))
        .def("AddParam",
             (void (Interface_FileReaderData::*)( const Standard_Integer , const Interface_FileParameter & ) ) static_cast<void (Interface_FileReaderData::*)( const Standard_Integer , const Interface_FileParameter & ) >(&Interface_FileReaderData::AddParam),
             R"#(Same as above, but gets a complete FileParameter Warning : Content of <FP> is NOT copied : its original address and space in memory are assumed to be managed elsewhere (see ParamSet))#"  , py::arg("num"),  py::arg("FP"))
        .def("SetParam",
             (void (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer , const Interface_FileParameter & ) ) static_cast<void (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer , const Interface_FileParameter & ) >(&Interface_FileReaderData::SetParam),
             R"#(Sets a new value for a parameter of a record, given by : num : record number; nump : parameter number in the record)#"  , py::arg("num"),  py::arg("nump"),  py::arg("FP"))
        .def("NbParams",
             (Standard_Integer (Interface_FileReaderData::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Interface_FileReaderData::*)( const Standard_Integer ) const>(&Interface_FileReaderData::NbParams),
             R"#(Returns count of parameters attached to record "num" If <num> = 0, returns the total recorded count of parameters)#"  , py::arg("num"))
        .def("Params",
             (opencascade::handle<Interface_ParamList> (Interface_FileReaderData::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_ParamList> (Interface_FileReaderData::*)( const Standard_Integer ) const>(&Interface_FileReaderData::Params),
             R"#(Returns the complete ParamList of a record (read only) num = 0 to return the whole param list for the file)#"  , py::arg("num"))
        .def("Param",
             (const Interface_FileParameter & (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const Interface_FileParameter & (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_FileReaderData::Param),
             R"#(Returns parameter "nump" of record "num", as a complete FileParameter)#"  , py::arg("num"),  py::arg("nump"))
        .def("ChangeParam",
             (Interface_FileParameter & (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Interface_FileParameter & (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) >(&Interface_FileReaderData::ChangeParam),
             R"#(Same as above, but in order to be modified on place)#"  , py::arg("num"),  py::arg("nump"))
        .def("ParamType",
             (Interface_ParamType (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Interface_ParamType (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_FileReaderData::ParamType),
             R"#(Returns type of parameter "nump" of record "num" Returns literal value of parameter "nump" of record "num" was C++ : return const &)#"  , py::arg("num"),  py::arg("nump"))
        .def("ParamCValue",
             (Standard_CString (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_CString (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_FileReaderData::ParamCValue),
             R"#(Same as above, but as a CString was C++ : return const)#"  , py::arg("num"),  py::arg("nump"))
        .def("IsParamDefined",
             (Standard_Boolean (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Boolean (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_FileReaderData::IsParamDefined),
             R"#(Returns True if parameter "nump" of record "num" is defined (it is not if its type is ParamVoid))#"  , py::arg("num"),  py::arg("nump"))
        .def("ParamNumber",
             (Standard_Integer (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_FileReaderData::ParamNumber),
             R"#(Returns record number of an entity referenced by a parameter of type Ident; 0 if no EntityNumber has been determined Note that it is used to reference Entities but also Sublists (sublists are not objects, but internal descriptions))#"  , py::arg("num"),  py::arg("nump"))
        .def("ParamEntity",
             (const opencascade::handle<Standard_Transient> & (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const opencascade::handle<Standard_Transient> & (Interface_FileReaderData::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_FileReaderData::ParamEntity),
             R"#(Returns the StepEntity referenced by a parameter Error if none)#"  , py::arg("num"),  py::arg("nump"))
        .def("ParamFirstRank",
             (Standard_Integer (Interface_FileReaderData::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Interface_FileReaderData::*)( const Standard_Integer ) const>(&Interface_FileReaderData::ParamFirstRank),
             R"#(Returns the absolute rank of the beginning of a record (its lsit is from ParamFirstRank+1 to ParamFirstRank+NbParams))#"  , py::arg("num"))
        .def("BoundEntity",
             (const opencascade::handle<Standard_Transient> & (Interface_FileReaderData::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Standard_Transient> & (Interface_FileReaderData::*)( const Standard_Integer ) const>(&Interface_FileReaderData::BoundEntity),
             R"#(Returns the entity bound to a record, set by SetEntities)#"  , py::arg("num"))
        .def("BindEntity",
             (void (Interface_FileReaderData::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_FileReaderData::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) >(&Interface_FileReaderData::BindEntity),
             R"#(Binds an entity to a record)#"  , py::arg("num"),  py::arg("ent"))
        .def("SetErrorLoad",
             (void (Interface_FileReaderData::*)( const Standard_Boolean ) ) static_cast<void (Interface_FileReaderData::*)( const Standard_Boolean ) >(&Interface_FileReaderData::SetErrorLoad),
             R"#(Sets the status "Error Load" on, to overside check fails <val> True : declares unloaded <val> False : declares loaded If not called before loading (see FileReaderTool), check fails give the status IsErrorLoad says if SetErrorLoad has been called by user ResetErrorLoad resets it (called by FileReaderTool) This allows to specify that the currently loaded entity remains unloaded (because of syntactic fail))#"  , py::arg("val"))
        .def("IsErrorLoad",
             (Standard_Boolean (Interface_FileReaderData::*)() const) static_cast<Standard_Boolean (Interface_FileReaderData::*)() const>(&Interface_FileReaderData::IsErrorLoad),
             R"#(Returns True if the status "Error Load" has been set (to True or False))#" )
        .def("ResetErrorLoad",
             (Standard_Boolean (Interface_FileReaderData::*)() ) static_cast<Standard_Boolean (Interface_FileReaderData::*)() >(&Interface_FileReaderData::ResetErrorLoad),
             R"#(Returns the former value of status "Error Load" then resets it Used to read the status then ensure it is reset)#" )
        .def("Destroy",
             (void (Interface_FileReaderData::*)() ) static_cast<void (Interface_FileReaderData::*)() >(&Interface_FileReaderData::Destroy),
             R"#(Destructor (waiting for memory management))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_FileReaderData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_FileReaderData::*)() const>(&Interface_FileReaderData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Fastof_s",
                    (Standard_Real (*)( const Standard_CString ) ) static_cast<Standard_Real (*)( const Standard_CString ) >(&Interface_FileReaderData::Fastof),
                    R"#(Same spec.s as standard <atof> but 5 times faster)#"  , py::arg("str"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_FileReaderData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_FileReaderData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_FileReaderTool , shared_ptr<Interface_FileReaderTool>,Py_Interface_FileReaderTool >>(m.attr("Interface_FileReaderTool"))
    // constructors
    // custom constructors
    // methods
        .def("SetData",
             (void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_FileReaderData> & , const opencascade::handle<Interface_Protocol> & ) ) static_cast<void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_FileReaderData> & , const opencascade::handle<Interface_Protocol> & ) >(&Interface_FileReaderTool::SetData),
             R"#(Sets Data to a FileReaderData. Works with a Protocol)#"  , py::arg("reader"),  py::arg("protocol"))
        .def("Protocol",
             (opencascade::handle<Interface_Protocol> (Interface_FileReaderTool::*)() const) static_cast<opencascade::handle<Interface_Protocol> (Interface_FileReaderTool::*)() const>(&Interface_FileReaderTool::Protocol),
             R"#(Returns the Protocol given at creation time)#" )
        .def("Data",
             (opencascade::handle<Interface_FileReaderData> (Interface_FileReaderTool::*)() const) static_cast<opencascade::handle<Interface_FileReaderData> (Interface_FileReaderTool::*)() const>(&Interface_FileReaderTool::Data),
             R"#(Returns the FileReaderData which is used to work)#" )
        .def("SetModel",
             (void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&Interface_FileReaderTool::SetModel),
             R"#(Stores a Model. Used when the Model has been loaded)#"  , py::arg("amodel"))
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (Interface_FileReaderTool::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Interface_FileReaderTool::*)() const>(&Interface_FileReaderTool::Model),
             R"#(Returns the stored Model)#" )
        .def("SetMessenger",
             (void (Interface_FileReaderTool::*)( const opencascade::handle<Message_Messenger> & ) ) static_cast<void (Interface_FileReaderTool::*)( const opencascade::handle<Message_Messenger> & ) >(&Interface_FileReaderTool::SetMessenger),
             R"#(Sets Messenger used for outputting messages)#"  , py::arg("messenger"))
        .def("Messenger",
             (opencascade::handle<Message_Messenger> (Interface_FileReaderTool::*)() const) static_cast<opencascade::handle<Message_Messenger> (Interface_FileReaderTool::*)() const>(&Interface_FileReaderTool::Messenger),
             R"#(Returns Messenger used for outputting messages. The returned object is guaranteed to be non-null; default is Message::Messenger().)#" )
        .def("SetTraceLevel",
             (void (Interface_FileReaderTool::*)( const Standard_Integer ) ) static_cast<void (Interface_FileReaderTool::*)( const Standard_Integer ) >(&Interface_FileReaderTool::SetTraceLevel),
             R"#(Sets trace level used for outputting messages - 0: no trace at all - 1: errors - 2: errors and warnings - 3: all messages Default is 1 : Errors traced)#"  , py::arg("tracelev"))
        .def("TraceLevel",
             (Standard_Integer (Interface_FileReaderTool::*)() const) static_cast<Standard_Integer (Interface_FileReaderTool::*)() const>(&Interface_FileReaderTool::TraceLevel),
             R"#(Returns trace level used for outputting messages.)#" )
        .def("SetErrorHandle",
             (void (Interface_FileReaderTool::*)( const Standard_Boolean ) ) static_cast<void (Interface_FileReaderTool::*)( const Standard_Boolean ) >(&Interface_FileReaderTool::SetErrorHandle),
             R"#(Allows controlling whether exception raisings are handled If err is False, they are not (hence, dbx can take control) If err is True, they are, and they are traced (by putting on messenger Entity's Number and file record num) Default given at Model's creation time is True)#"  , py::arg("err"))
        .def("ErrorHandle",
             (Standard_Boolean (Interface_FileReaderTool::*)() const) static_cast<Standard_Boolean (Interface_FileReaderTool::*)() const>(&Interface_FileReaderTool::ErrorHandle),
             R"#(Returns ErrorHandle flag)#" )
        .def("SetEntities",
             (void (Interface_FileReaderTool::*)() ) static_cast<void (Interface_FileReaderTool::*)() >(&Interface_FileReaderTool::SetEntities),
             R"#(Fills records with empty entities; once done, each entity can ask the FileReaderTool for any entity referenced through an identifier. Calls Recognize which is specific to each specific type of FileReaderTool)#" )
        .def("Recognize",
             (Standard_Boolean (Interface_FileReaderTool::*)( const Standard_Integer , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (Interface_FileReaderTool::*)( const Standard_Integer , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) >(&Interface_FileReaderTool::Recognize),
             R"#(Recognizes a record, given its number. Specific to each Interface; called by SetEntities. It can call the basic method RecognizeByLib. Returns False if recognition has failed, True else. <ach> has not to be filled if simply Recognition has failed : it must record true error messages : RecognizeByLib can generate error messages if NewRead is called)#"  , py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("RecognizeByLib",
             (Standard_Boolean (Interface_FileReaderTool::*)( const Standard_Integer , Interface_GeneralLib & , Interface_ReaderLib & , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_FileReaderTool::*)( const Standard_Integer , Interface_GeneralLib & , Interface_ReaderLib & , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) const>(&Interface_FileReaderTool::RecognizeByLib),
             R"#(Recognizes a record with the help of Libraries. Can be used to implement the method Recognize. <rlib> is used to find Protocol and CaseNumber to apply <glib> performs the creation (by service NewVoid, or NewRead if NewVoid gave no result) <ach> is a check, which is transmitted to NewRead if it is called, gives a result but which is false <ent> is the result Returns False if recognition has failed, True else)#"  , py::arg("num"),  py::arg("glib"),  py::arg("rlib"),  py::arg("ach"),  py::arg("ent"))
        .def("UnknownEntity",
             (opencascade::handle<Standard_Transient> (Interface_FileReaderTool::*)() const) static_cast<opencascade::handle<Standard_Transient> (Interface_FileReaderTool::*)() const>(&Interface_FileReaderTool::UnknownEntity),
             R"#(Provides an unknown entity, specific to the Interface called by SetEntities when Recognize has failed (Unknown alone) or by LoadModel when an Entity has caused a Fail on reading (to keep at least its literal description) Uses Protocol to do it)#" )
        .def("NewModel",
             (opencascade::handle<Interface_InterfaceModel> (Interface_FileReaderTool::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Interface_FileReaderTool::*)() const>(&Interface_FileReaderTool::NewModel),
             R"#(Creates an empty Model of the norm. Uses Protocol to do it)#" )
        .def("LoadModel",
             (void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&Interface_FileReaderTool::LoadModel),
             R"#(Reads and fills Entities from the FileReaderData set by SetData to an InterfaceModel. It enchains required operations, the specific ones correspond to deferred methods (below) to be defined for each Norm. It manages also error recovery and trace. Remark : it calls SetModel. It Can raise any error which can occur during a load operation, unless Error Handling is set. This method can also be redefined if judged necessary.)#"  , py::arg("amodel"))
        .def("LoadedEntity",
             (opencascade::handle<Standard_Transient> (Interface_FileReaderTool::*)( const Standard_Integer ) ) static_cast<opencascade::handle<Standard_Transient> (Interface_FileReaderTool::*)( const Standard_Integer ) >(&Interface_FileReaderTool::LoadedEntity),
             R"#(Reads, Fills and Returns one Entity read from a Record of the FileReaderData. This Method manages also case of Fail or Warning, by producing a ReportEntyty plus , for a Fail, a literal Content (as an UnknownEntity). Performs also Trace)#"  , py::arg("num"))
        .def("BeginRead",
             (void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&Interface_FileReaderTool::BeginRead),
             R"#(Fills model's header; each Interface defines for its Model its own file header; this method fills it from FileReaderTool.+ It is called by AnalyseFile from InterfaceModel)#"  , py::arg("amodel"))
        .def("AnalyseRecord",
             (Standard_Boolean (Interface_FileReaderTool::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_Check> & ) ) static_cast<Standard_Boolean (Interface_FileReaderTool::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_Check> & ) >(&Interface_FileReaderTool::AnalyseRecord),
             R"#(Fills an Entity, given record no; specific to each Interface, called by AnalyseFile from InterfaceModel (which manages its calling arguments) To work, each Interface can define a method in its proper Transient class, like this (given as an example) : AnalyseRecord (me : mutable; FR : in out FileReaderTool; num : Integer; acheck : in out Check) returns Boolean; and call it from AnalyseRecord)#"  , py::arg("num"),  py::arg("anent"),  py::arg("acheck"))
        .def("EndRead",
             (void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&Interface_FileReaderTool::EndRead),
             R"#(Ends file reading after reading all the entities default is doing nothing; redefinable as necessary)#"  , py::arg("amodel"))
        .def("Clear",
             (void (Interface_FileReaderTool::*)() ) static_cast<void (Interface_FileReaderTool::*)() >(&Interface_FileReaderTool::Clear),
             R"#(Clear filelds)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_FloatWriter , shared_ptr<Interface_FloatWriter> >>(m.attr("Interface_FloatWriter"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("chars")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("SetFormat",
             (void (Interface_FloatWriter::*)( const Standard_CString , const Standard_Boolean ) ) static_cast<void (Interface_FloatWriter::*)( const Standard_CString , const Standard_Boolean ) >(&Interface_FloatWriter::SetFormat),
             R"#(Sets a specific Format for Sending Reals (main format) (Default from Creation is "%E") If <reset> is given True (default), this call clears effects of former calls to SetFormatForRange and SetZeroSuppress)#"  , py::arg("form"),  py::arg("reset")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetFormatForRange",
             (void (Interface_FloatWriter::*)( const Standard_CString , const Standard_Real , const Standard_Real ) ) static_cast<void (Interface_FloatWriter::*)( const Standard_CString , const Standard_Real , const Standard_Real ) >(&Interface_FloatWriter::SetFormatForRange),
             R"#(Sets a secondary Format for Real, to be applied between R1 and R2 (in absolute values). A Call to SetRealForm cancels this secondary form if <reset> is True. (Default from Creation is "%f" between 0.1 and 1000.) Warning : if the condition (0. <= R1 < R2) is not fulfilled, this secondary form is canceled.)#"  , py::arg("form"),  py::arg("R1"),  py::arg("R2"))
        .def("SetZeroSuppress",
             (void (Interface_FloatWriter::*)( const Standard_Boolean ) ) static_cast<void (Interface_FloatWriter::*)( const Standard_Boolean ) >(&Interface_FloatWriter::SetZeroSuppress),
             R"#(Sets Sending Real Parameters to suppress trailing Zeros and Null Exponant ("E+00"), if <mode> is given True, Resets this mode if <mode> is False (in addition to Real Forms) A call to SetRealFrom resets this mode to False ig <reset> is given True (Default from Creation is True))#"  , py::arg("mode"))
        .def("SetDefaults",
             (void (Interface_FloatWriter::*)( const Standard_Integer ) ) static_cast<void (Interface_FloatWriter::*)( const Standard_Integer ) >(&Interface_FloatWriter::SetDefaults),
             R"#(Sets again options to the defaults given by Create)#"  , py::arg("chars")=static_cast<const Standard_Integer>(0))
        .def("MainFormat",
             (Standard_CString (Interface_FloatWriter::*)() const) static_cast<Standard_CString (Interface_FloatWriter::*)() const>(&Interface_FloatWriter::MainFormat),
             R"#(Returns the main format was C++ : return const)#" )
        .def("FormatForRange",
             (Standard_CString (Interface_FloatWriter::*)() const) static_cast<Standard_CString (Interface_FloatWriter::*)() const>(&Interface_FloatWriter::FormatForRange),
             R"#(Returns the format for range, if set Meaningful only if <range> from Options is True was C++ : return const)#" )
        .def("Write",
             (Standard_Integer (Interface_FloatWriter::*)( const Standard_Real , const Standard_CString ) const) static_cast<Standard_Integer (Interface_FloatWriter::*)( const Standard_Real , const Standard_CString ) const>(&Interface_FloatWriter::Write),
             R"#(Writes a Real value <val> to a string <text> by using the options. Returns the useful Length of produced string. It calls the class method Convert. Warning : <text> is assumed to be wide enough (20-30 is correct) And, even if declared in, its content will be modified)#"  , py::arg("val"),  py::arg("text"))
    // methods using call by reference i.s.o. return
        .def("Options",
             []( Interface_FloatWriter &self   ){ Standard_Boolean  zerosup; Standard_Boolean  range; Standard_Real  R1; Standard_Real  R2; self.Options(zerosup,range,R1,R2); return std::make_tuple(zerosup,range,R1,R2); },
             R"#(Returns active options : <zerosup> is the option ZeroSuppress, <range> is True if a range is set, False else R1,R2 give the range (if it is set))#" )
    // static methods
        .def_static("Convert_s",
                    (Standard_Integer (*)( const Standard_Real , const Standard_CString , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_CString , const Standard_CString ) ) static_cast<Standard_Integer (*)( const Standard_Real , const Standard_CString , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_CString , const Standard_CString ) >(&Interface_FloatWriter::Convert),
                    R"#(This class method converts a Real Value to a string, given options given as arguments. It can be called independantly. Warning : even if declared in, content of <text> will be modified)#"  , py::arg("val"),  py::arg("text"),  py::arg("zerosup"),  py::arg("Range1"),  py::arg("Range2"),  py::arg("mainform"),  py::arg("rangeform"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_GTool ,opencascade::handle<Interface_GTool> , Standard_Transient>>(m.attr("Interface_GTool"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Interface_Protocol> &,const Standard_Integer >()  , py::arg("proto"),  py::arg("nbent")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("SetSignType",
             (void (Interface_GTool::*)( const opencascade::handle<Interface_SignType> & ) ) static_cast<void (Interface_GTool::*)( const opencascade::handle<Interface_SignType> & ) >(&Interface_GTool::SetSignType),
             R"#(Sets a new SignType)#"  , py::arg("sign"))
        .def("SignType",
             (opencascade::handle<Interface_SignType> (Interface_GTool::*)() const) static_cast<opencascade::handle<Interface_SignType> (Interface_GTool::*)() const>(&Interface_GTool::SignType),
             R"#(Returns the SignType. Can be null)#" )
        .def("SignValue",
             (Standard_CString (Interface_GTool::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_CString (Interface_GTool::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&Interface_GTool::SignValue),
             R"#(Returns the Signature for a Transient Object in a Model It calls SignType to do that If SignType is not defined, return ClassName of <ent>)#"  , py::arg("ent"),  py::arg("model"))
        .def("SignName",
             (Standard_CString (Interface_GTool::*)() const) static_cast<Standard_CString (Interface_GTool::*)() const>(&Interface_GTool::SignName),
             R"#(Returns the Name of the SignType, or "Class Name")#" )
        .def("SetProtocol",
             (void (Interface_GTool::*)( const opencascade::handle<Interface_Protocol> & , const Standard_Boolean ) ) static_cast<void (Interface_GTool::*)( const opencascade::handle<Interface_Protocol> & , const Standard_Boolean ) >(&Interface_GTool::SetProtocol),
             R"#(Sets a new Protocol if <enforce> is False and the new Protocol equates the old one then nothing is done)#"  , py::arg("proto"),  py::arg("enforce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Protocol",
             (opencascade::handle<Interface_Protocol> (Interface_GTool::*)() const) static_cast<opencascade::handle<Interface_Protocol> (Interface_GTool::*)() const>(&Interface_GTool::Protocol),
             R"#(Returns the Protocol. Warning : it can be Null)#" )
        .def("Lib",
             (Interface_GeneralLib & (Interface_GTool::*)() ) static_cast<Interface_GeneralLib & (Interface_GTool::*)() >(&Interface_GTool::Lib),
             R"#(Returns the GeneralLib itself)#" )
        .def("Reservate",
             (void (Interface_GTool::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (Interface_GTool::*)( const Standard_Integer , const Standard_Boolean ) >(&Interface_GTool::Reservate),
             R"#(Reservates maps for a count of entities <enforce> False : minimum count <enforce> True : clears former reservations Does not clear the maps)#"  , py::arg("nb"),  py::arg("enforce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ClearEntities",
             (void (Interface_GTool::*)() ) static_cast<void (Interface_GTool::*)() >(&Interface_GTool::ClearEntities),
             R"#(Clears the maps which record, for each already recorded entity its Module and Case Number)#" )
        .def("Select",
             (Standard_Boolean (Interface_GTool::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_GeneralModule> & , Standard_Integer & , const Standard_Boolean ) ) static_cast<Standard_Boolean (Interface_GTool::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_GeneralModule> & , Standard_Integer & , const Standard_Boolean ) >(&Interface_GTool::Select),
             R"#(Selects for an entity, its Module and Case Number It is optimised : once done for each entity, the result is mapped and the GeneralLib is not longer queried <enforce> True overpasses this optimisation)#"  , py::arg("ent"),  py::arg("gmod"),  py::arg("CN"),  py::arg("enforce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_GTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_GTool::*)() const>(&Interface_GTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_GTool::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_GTool::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_GeneralLib , shared_ptr<Interface_GeneralLib> >>(m.attr("Interface_GeneralLib"))
    // constructors
        .def(py::init< const opencascade::handle<Interface_Protocol> & >()  , py::arg("aprotocol") )
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddProtocol",
             (void (Interface_GeneralLib::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_GeneralLib::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_GeneralLib::AddProtocol),
             R"#(Adds a couple (Module-Protocol) to the Library, given the class of a Protocol. Takes Resources into account. (if <aprotocol> is not of type TheProtocol, it is not added))#"  , py::arg("aprotocol"))
        .def("Clear",
             (void (Interface_GeneralLib::*)() ) static_cast<void (Interface_GeneralLib::*)() >(&Interface_GeneralLib::Clear),
             R"#(Clears the list of Modules of a library (can be used to redefine the order of Modules before action : Clear then refill the Library by calls to AddProtocol))#" )
        .def("SetComplete",
             (void (Interface_GeneralLib::*)() ) static_cast<void (Interface_GeneralLib::*)() >(&Interface_GeneralLib::SetComplete),
             R"#(Sets a library to be defined with the complete Global list (all the couples Protocol/Modules recorded in it))#" )
        .def("Select",
             (Standard_Boolean (Interface_GeneralLib::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_GeneralModule> & , Standard_Integer & ) const) static_cast<Standard_Boolean (Interface_GeneralLib::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_GeneralModule> & , Standard_Integer & ) const>(&Interface_GeneralLib::Select),
             R"#(Selects a Module from the Library, given an Object. Returns True if Select has succeeded, False else. Also Returns (as arguments) the selected Module and the Case Number determined by the associated Protocol. If Select has failed, <module> is Null Handle and CN is zero. (Select can work on any criterium, such as Object DynamicType))#"  , py::arg("obj"),  py::arg("module"),  py::arg("CN"))
        .def("Start",
             (void (Interface_GeneralLib::*)() ) static_cast<void (Interface_GeneralLib::*)() >(&Interface_GeneralLib::Start),
             R"#(Starts Iteration on the Modules (sets it on the first one))#" )
        .def("More",
             (Standard_Boolean (Interface_GeneralLib::*)() const) static_cast<Standard_Boolean (Interface_GeneralLib::*)() const>(&Interface_GeneralLib::More),
             R"#(Returns True if there are more Modules to iterate on)#" )
        .def("Next",
             (void (Interface_GeneralLib::*)() ) static_cast<void (Interface_GeneralLib::*)() >(&Interface_GeneralLib::Next),
             R"#(Iterates by getting the next Module in the list If there is none, the exception will be raised by Value)#" )
        .def("Module",
             (const opencascade::handle<Interface_GeneralModule> & (Interface_GeneralLib::*)() const) static_cast<const opencascade::handle<Interface_GeneralModule> & (Interface_GeneralLib::*)() const>(&Interface_GeneralLib::Module),
             R"#(Returns the current Module in the Iteration)#" )
        .def("Protocol",
             (const opencascade::handle<Interface_Protocol> & (Interface_GeneralLib::*)() const) static_cast<const opencascade::handle<Interface_Protocol> & (Interface_GeneralLib::*)() const>(&Interface_GeneralLib::Protocol),
             R"#(Returns the current Protocol in the Iteration)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("SetGlobal_s",
                    (void (*)( const opencascade::handle<Interface_GeneralModule> & , const opencascade::handle<Interface_Protocol> & ) ) static_cast<void (*)( const opencascade::handle<Interface_GeneralModule> & , const opencascade::handle<Interface_Protocol> & ) >(&Interface_GeneralLib::SetGlobal),
                    R"#(Adds a couple (Module-Protocol) into the global definition set for this class of Library.)#"  , py::arg("amodule"),  py::arg("aprotocol"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_GeneralModule ,opencascade::handle<Interface_GeneralModule>,Py_Interface_GeneralModule , Standard_Transient>>(m.attr("Interface_GeneralModule"))
    // constructors
    // custom constructors
    // methods
        .def("FillShared",
             (void (Interface_GeneralModule::*)( const opencascade::handle<Interface_InterfaceModel> & , const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const) static_cast<void (Interface_GeneralModule::*)( const opencascade::handle<Interface_InterfaceModel> & , const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const>(&Interface_GeneralModule::FillShared),
             R"#(Specific filling of the list of Entities shared by an Entity <ent>, according a Case Number <CN> (formerly computed by CaseNum), considered in the context of a Model <model> Default calls FillSharedCase (i.e., ignores the model) Can be redefined to use the model for working)#"  , py::arg("model"),  py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("FillSharedCase",
             (void (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const) static_cast<void (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const>(&Interface_GeneralModule::FillSharedCase),
             R"#(Specific filling of the list of Entities shared by an Entity <ent>, according a Case Number <CN> (formerly computed by CaseNum). Can use the internal utility method Share, below)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("Share",
             (void (Interface_GeneralModule::*)( Interface_EntityIterator & , const opencascade::handle<Standard_Transient> & ) const) static_cast<void (Interface_GeneralModule::*)( Interface_EntityIterator & , const opencascade::handle<Standard_Transient> & ) const>(&Interface_GeneralModule::Share),
             R"#(Adds an Entity to a Shared List (uses GetOneItem on <iter>))#"  , py::arg("iter"),  py::arg("shared"))
        .def("ListImplied",
             (void (Interface_GeneralModule::*)( const opencascade::handle<Interface_InterfaceModel> & , const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const) static_cast<void (Interface_GeneralModule::*)( const opencascade::handle<Interface_InterfaceModel> & , const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const>(&Interface_GeneralModule::ListImplied),
             R"#(List the Implied References of <ent> considered in the context of a Model <model> : i.e. the Entities which are Referenced while not considered as Shared (not copied if <ent> is, references not renewed by CopyCase but by ImpliedCase, only if referenced Entities have been Copied too) FillShared + ListImplied give the complete list of References Default calls ListImpliedCase (i.e. ignores the model) Can be redefined to use the model for working)#"  , py::arg("model"),  py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("ListImpliedCase",
             (void (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const) static_cast<void (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const>(&Interface_GeneralModule::ListImpliedCase),
             R"#(List the Implied References of <ent> (see above) are Referenced while not considered as Shared (not copied if <ent> is, references not renewed by CopyCase but by ImpliedCase, only if referenced Entities have been Copied too) FillSharedCase + ListImpliedCase give the complete list of Referenced Entities The provided default method does nothing (Implied References are specific of a little amount of Entity Classes).)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("CheckCase",
             (void (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&Interface_GeneralModule::CheckCase),
             R"#(Specific Checking of an Entity <ent> Can check context queried through a ShareTool, as required)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("CanCopy",
             (Standard_Boolean (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) const>(&Interface_GeneralModule::CanCopy),
             R"#(Specific answer to the question "is Copy properly implemented" Remark that it should be in phase with the implementation of NewVoid+CopyCase/NewCopyCase Default returns always False, can be redefined)#"  , py::arg("CN"),  py::arg("ent"))
        .def("Dispatch",
             (Standard_Boolean (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const) static_cast<Standard_Boolean (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const>(&Interface_GeneralModule::Dispatch),
             R"#(Dispatches an entity Returns True if it works by copy, False if it just duplicates the starting Handle)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("NewVoid",
             (Standard_Boolean (Interface_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const>(&Interface_GeneralModule::NewVoid),
             R"#(Creates a new void entity <entto> according to a Case Number This entity remains to be filled, by reading from a file or by copying from another entity of same type (see CopyCase))#"  , py::arg("CN"),  py::arg("entto"))
        .def("CopyCase",
             (void (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const) static_cast<void (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const>(&Interface_GeneralModule::CopyCase),
             R"#(Specific Copy ("Deep") from <entfrom> to <entto> (same type) by using a CopyTool which provides its working Map. Use method Transferred from CopyTool to work)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("NewCopiedCase",
             (Standard_Boolean (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const) static_cast<Standard_Boolean (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const>(&Interface_GeneralModule::NewCopiedCase),
             R"#(Specific operator (create+copy) defaulted to do nothing. It can be redefined : When it is not possible to work in two steps (NewVoid then CopyCase). This can occur when there is no default constructor : hence the result <entto> must be created with an effective definition. Remark : if NewCopiedCase is defined, CopyCase has nothing to do Returns True if it has produced something, false else)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("RenewImpliedCase",
             (void (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , const Interface_CopyTool & ) const) static_cast<void (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , const Interface_CopyTool & ) const>(&Interface_GeneralModule::RenewImpliedCase),
             R"#(Specific Copying of Implied References A Default is provided which does nothing (must current case !) Already copied references (by CopyFrom) must remain unchanged Use method Search from CopyTool to work)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("WhenDeleteCase",
             (void (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) const) static_cast<void (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) const>(&Interface_GeneralModule::WhenDeleteCase),
             R"#(Prepares an entity to be deleted. What does it mean : Basically, any class of entity may define its own destructor By default, it does nothing but calling destructors on fields With the Memory Manager, it is useless to call destructor, it is done automatically when the Handle is nullified(cleared) BUT this is ineffective in looping structures (whatever these are "Implied" references or not).)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dispatched"))
        .def("CategoryNumber",
             (Standard_Integer (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const) static_cast<Standard_Integer (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const>(&Interface_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity Category Numbers are managed by the class Category <shares> can be used to evaluate this number in the context Default returns 0 which means "unspecified")#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (Interface_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const>(&Interface_GeneralModule::Name),
             R"#(Determines if an entity brings a Name (or widerly, if a Name can be attached to it, through the ShareTool By default, returns a Null Handle (no name can be produced) Can be redefined)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_GeneralModule::*)() const>(&Interface_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_GeneralModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_GeneralModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_GlobalNodeOfGeneralLib ,opencascade::handle<Interface_GlobalNodeOfGeneralLib> , Standard_Transient>>(m.attr("Interface_GlobalNodeOfGeneralLib"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Add",
             (void (Interface_GlobalNodeOfGeneralLib::*)( const opencascade::handle<Interface_GeneralModule> & , const opencascade::handle<Interface_Protocol> & ) ) static_cast<void (Interface_GlobalNodeOfGeneralLib::*)( const opencascade::handle<Interface_GeneralModule> & , const opencascade::handle<Interface_Protocol> & ) >(&Interface_GlobalNodeOfGeneralLib::Add),
             R"#(Adds a Module bound with a Protocol to the list : does nothing if already in the list, THAT IS, Same Type (exact match) and Same State (that is, IsEqual is not required) Once added, stores its attached Protocol in correspondance)#"  , py::arg("amodule"),  py::arg("aprotocol"))
        .def("Module",
             (const opencascade::handle<Interface_GeneralModule> & (Interface_GlobalNodeOfGeneralLib::*)() const) static_cast<const opencascade::handle<Interface_GeneralModule> & (Interface_GlobalNodeOfGeneralLib::*)() const>(&Interface_GlobalNodeOfGeneralLib::Module),
             R"#(Returns the Module stored in a given GlobalNode)#" )
        .def("Protocol",
             (const opencascade::handle<Interface_Protocol> & (Interface_GlobalNodeOfGeneralLib::*)() const) static_cast<const opencascade::handle<Interface_Protocol> & (Interface_GlobalNodeOfGeneralLib::*)() const>(&Interface_GlobalNodeOfGeneralLib::Protocol),
             R"#(Returns the attached Protocol stored in a given GlobalNode)#" )
        .def("Next",
             (const opencascade::handle<Interface_GlobalNodeOfGeneralLib> & (Interface_GlobalNodeOfGeneralLib::*)() const) static_cast<const opencascade::handle<Interface_GlobalNodeOfGeneralLib> & (Interface_GlobalNodeOfGeneralLib::*)() const>(&Interface_GlobalNodeOfGeneralLib::Next),
             R"#(Returns the Next GlobalNode. If none is defined, returned value is a Null Handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_GlobalNodeOfGeneralLib::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_GlobalNodeOfGeneralLib::*)() const>(&Interface_GlobalNodeOfGeneralLib::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_GlobalNodeOfGeneralLib::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_GlobalNodeOfGeneralLib::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_GlobalNodeOfReaderLib ,opencascade::handle<Interface_GlobalNodeOfReaderLib> , Standard_Transient>>(m.attr("Interface_GlobalNodeOfReaderLib"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Add",
             (void (Interface_GlobalNodeOfReaderLib::*)( const opencascade::handle<Interface_ReaderModule> & , const opencascade::handle<Interface_Protocol> & ) ) static_cast<void (Interface_GlobalNodeOfReaderLib::*)( const opencascade::handle<Interface_ReaderModule> & , const opencascade::handle<Interface_Protocol> & ) >(&Interface_GlobalNodeOfReaderLib::Add),
             R"#(Adds a Module bound with a Protocol to the list : does nothing if already in the list, THAT IS, Same Type (exact match) and Same State (that is, IsEqual is not required) Once added, stores its attached Protocol in correspondance)#"  , py::arg("amodule"),  py::arg("aprotocol"))
        .def("Module",
             (const opencascade::handle<Interface_ReaderModule> & (Interface_GlobalNodeOfReaderLib::*)() const) static_cast<const opencascade::handle<Interface_ReaderModule> & (Interface_GlobalNodeOfReaderLib::*)() const>(&Interface_GlobalNodeOfReaderLib::Module),
             R"#(Returns the Module stored in a given GlobalNode)#" )
        .def("Protocol",
             (const opencascade::handle<Interface_Protocol> & (Interface_GlobalNodeOfReaderLib::*)() const) static_cast<const opencascade::handle<Interface_Protocol> & (Interface_GlobalNodeOfReaderLib::*)() const>(&Interface_GlobalNodeOfReaderLib::Protocol),
             R"#(Returns the attached Protocol stored in a given GlobalNode)#" )
        .def("Next",
             (const opencascade::handle<Interface_GlobalNodeOfReaderLib> & (Interface_GlobalNodeOfReaderLib::*)() const) static_cast<const opencascade::handle<Interface_GlobalNodeOfReaderLib> & (Interface_GlobalNodeOfReaderLib::*)() const>(&Interface_GlobalNodeOfReaderLib::Next),
             R"#(Returns the Next GlobalNode. If none is defined, returned value is a Null Handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_GlobalNodeOfReaderLib::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_GlobalNodeOfReaderLib::*)() const>(&Interface_GlobalNodeOfReaderLib::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_GlobalNodeOfReaderLib::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_GlobalNodeOfReaderLib::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_Graph , shared_ptr<Interface_Graph> >>(m.attr("Interface_Graph"))
    // constructors
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const Interface_GeneralLib &,const Standard_Boolean >()  , py::arg("amodel"),  py::arg("lib"),  py::arg("theModeStats")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Interface_Protocol> &,const Standard_Boolean >()  , py::arg("amodel"),  py::arg("protocol"),  py::arg("theModeStats")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Interface_GTool> &,const Standard_Boolean >()  , py::arg("amodel"),  py::arg("gtool"),  py::arg("theModeStats")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const Standard_Boolean >()  , py::arg("amodel"),  py::arg("theModeStats")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const Interface_Graph &,const Standard_Boolean >()  , py::arg("agraph"),  py::arg("copied")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Reset",
             (void (Interface_Graph::*)() ) static_cast<void (Interface_Graph::*)() >(&Interface_Graph::Reset),
             R"#(Erases data, making graph ready to rebegin from void (also resets Shared lists redefinitions))#" )
        .def("ResetStatus",
             (void (Interface_Graph::*)() ) static_cast<void (Interface_Graph::*)() >(&Interface_Graph::ResetStatus),
             R"#(Erases Status (Values and Flags of Presence), making graph ready to rebegin from void. Does not concerns Shared lists)#" )
        .def("Size",
             (Standard_Integer (Interface_Graph::*)() const) static_cast<Standard_Integer (Interface_Graph::*)() const>(&Interface_Graph::Size),
             R"#(Returns size (max nb of entities, i.e. Model's nb of entities))#" )
        .def("NbStatuses",
             (Standard_Integer (Interface_Graph::*)() const) static_cast<Standard_Integer (Interface_Graph::*)() const>(&Interface_Graph::NbStatuses),
             R"#(Returns size of array of statuses)#" )
        .def("EntityNumber",
             (Standard_Integer (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_Graph::EntityNumber),
             R"#(Returns the Number of the entity in the Map, computed at creation time (Entities loaded from the Model) Returns 0 if <ent> not contained by Model used to create <me> (that is, <ent> is unknown from <me>))#"  , py::arg("ent"))
        .def("IsPresent",
             (Standard_Boolean (Interface_Graph::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Interface_Graph::*)( const Standard_Integer ) const>(&Interface_Graph::IsPresent),
             R"#(Returns True if an Entity is noted as present in the graph (See methods Get... which determine this status) Returns False if <num> is out of range too)#"  , py::arg("num"))
        .def("IsPresent",
             (Standard_Boolean (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_Graph::IsPresent),
             R"#(Same as above but directly on an Entity <ent> : if it is not contained in the Model, returns False. Else calls IsPresent(num) with <num> given by EntityNumber)#"  , py::arg("ent"))
        .def("Entity",
             (const opencascade::handle<Standard_Transient> & (Interface_Graph::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Standard_Transient> & (Interface_Graph::*)( const Standard_Integer ) const>(&Interface_Graph::Entity),
             R"#(Returns mapped Entity given its no (if it is present))#"  , py::arg("num"))
        .def("Status",
             (Standard_Integer (Interface_Graph::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Interface_Graph::*)( const Standard_Integer ) const>(&Interface_Graph::Status),
             R"#(Returns Status associated to a numero (only to read it))#"  , py::arg("num"))
        .def("SetStatus",
             (void (Interface_Graph::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Interface_Graph::*)( const Standard_Integer , const Standard_Integer ) >(&Interface_Graph::SetStatus),
             R"#(Modifies Status associated to a numero)#"  , py::arg("num"),  py::arg("stat"))
        .def("RemoveItem",
             (void (Interface_Graph::*)( const Standard_Integer ) ) static_cast<void (Interface_Graph::*)( const Standard_Integer ) >(&Interface_Graph::RemoveItem),
             R"#(Clears Entity and sets Status to 0, for a numero)#"  , py::arg("num"))
        .def("ChangeStatus",
             (void (Interface_Graph::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Interface_Graph::*)( const Standard_Integer , const Standard_Integer ) >(&Interface_Graph::ChangeStatus),
             R"#(Changes all status which value is oldstat to new value newstat)#"  , py::arg("oldstat"),  py::arg("newstat"))
        .def("RemoveStatus",
             (void (Interface_Graph::*)( const Standard_Integer ) ) static_cast<void (Interface_Graph::*)( const Standard_Integer ) >(&Interface_Graph::RemoveStatus),
             R"#(Removes all items of which status has a given value stat)#"  , py::arg("stat"))
        .def("BitMap",
             (const Interface_BitMap & (Interface_Graph::*)() const) static_cast<const Interface_BitMap & (Interface_Graph::*)() const>(&Interface_Graph::BitMap),
             R"#(Returns the Bit Map in order to read or edit flag values)#" )
        .def("CBitMap",
             (Interface_BitMap & (Interface_Graph::*)() ) static_cast<Interface_BitMap & (Interface_Graph::*)() >(&Interface_Graph::CBitMap),
             R"#(Returns the Bit Map in order to edit it (add new flags))#" )
        .def("Model",
             (const opencascade::handle<Interface_InterfaceModel> & (Interface_Graph::*)() const) static_cast<const opencascade::handle<Interface_InterfaceModel> & (Interface_Graph::*)() const>(&Interface_Graph::Model),
             R"#(Returns the Model with which this Graph was created)#" )
        .def("GetFromModel",
             (void (Interface_Graph::*)() ) static_cast<void (Interface_Graph::*)() >(&Interface_Graph::GetFromModel),
             R"#(Loads Graph with all Entities contained in the Model)#" )
        .def("GetFromEntity",
             (void (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean , const Standard_Integer ) ) static_cast<void (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean , const Standard_Integer ) >(&Interface_Graph::GetFromEntity),
             R"#(Gets an Entity, plus its shared ones (at every level) if "shared" is True. New items are set to status "newstat" Items already present in graph remain unchanged Of course, redefinitions of Shared lists are taken into account if there are some)#"  , py::arg("ent"),  py::arg("shared"),  py::arg("newstat")=static_cast<const Standard_Integer>(0))
        .def("GetFromEntity",
             (void (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<void (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&Interface_Graph::GetFromEntity),
             R"#(Gets an Entity, plus its shared ones (at every level) if "shared" is True. New items are set to status "newstat". Items already present in graph are processed as follows : - if they already have status "newstat", they remain unchanged - if they have another status, this one is modified : if cumul is True, to former status + overlapstat (cumul) if cumul is False, to overlapstat (enforce))#"  , py::arg("ent"),  py::arg("shared"),  py::arg("newstat"),  py::arg("overlapstat"),  py::arg("cumul"))
        .def("GetFromIter",
             (void (Interface_Graph::*)( const Interface_EntityIterator & , const Standard_Integer ) ) static_cast<void (Interface_Graph::*)( const Interface_EntityIterator & , const Standard_Integer ) >(&Interface_Graph::GetFromIter),
             R"#(Gets Entities given by an EntityIterator. Entities which were not yet present in the graph are mapped with status "newstat" Entities already present remain unchanged)#"  , py::arg("iter"),  py::arg("newstat"))
        .def("GetFromIter",
             (void (Interface_Graph::*)( const Interface_EntityIterator & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<void (Interface_Graph::*)( const Interface_EntityIterator & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&Interface_Graph::GetFromIter),
             R"#(Gets Entities given by an EntityIterator and distinguishes those already present in the Graph : - new entities added to the Graph with status "newstst" - entities already present with status = "newstat" remain unchanged - entities already present with status different form "newstat" have their status modified : if cumul is True, to former status + overlapstat (cumul) if cumul is False, to overlapstat (enforce) (Note : works as GetEntity, shared = False, for each entity))#"  , py::arg("iter"),  py::arg("newstat"),  py::arg("overlapstat"),  py::arg("cumul"))
        .def("GetFromGraph",
             (void (Interface_Graph::*)( const Interface_Graph & ) ) static_cast<void (Interface_Graph::*)( const Interface_Graph & ) >(&Interface_Graph::GetFromGraph),
             R"#(Gets all present items from another graph)#"  , py::arg("agraph"))
        .def("GetFromGraph",
             (void (Interface_Graph::*)( const Interface_Graph & , const Standard_Integer ) ) static_cast<void (Interface_Graph::*)( const Interface_Graph & , const Standard_Integer ) >(&Interface_Graph::GetFromGraph),
             R"#(Gets items from another graph which have a specific Status)#"  , py::arg("agraph"),  py::arg("stat"))
        .def("HasShareErrors",
             (Standard_Boolean (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_Graph::HasShareErrors),
             R"#(Returns True if <ent> or the list of entities shared by <ent> (not redefined) contains items unknown from this Graph Remark : apart from the status HasShareError, these items are ignored)#"  , py::arg("ent"))
        .def("GetShareds",
             (opencascade::handle<TColStd_HSequenceOfTransient> (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_Graph::GetShareds),
             R"#(Returns the sequence of Entities Shared by an Entity)#"  , py::arg("ent"))
        .def("Shareds",
             (Interface_EntityIterator (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Interface_EntityIterator (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_Graph::Shareds),
             R"#(Returns the list of Entities Shared by an Entity, as recorded by the Graph. That is, by default Basic Shared List, else it can be redefined by methods SetShare, SetNoShare ... see below)#"  , py::arg("ent"))
        .def("Sharings",
             (Interface_EntityIterator (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Interface_EntityIterator (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_Graph::Sharings),
             R"#(Returns the list of Entities which Share an Entity, computed from the Basic or Redefined Shared Lists)#"  , py::arg("ent"))
        .def("GetSharings",
             (opencascade::handle<TColStd_HSequenceOfTransient> (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_Graph::GetSharings),
             R"#(Returns the sequence of Entities Sharings by an Entity)#"  , py::arg("ent"))
        .def("TypedSharings",
             (Interface_EntityIterator (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Type> & ) const) static_cast<Interface_EntityIterator (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Type> & ) const>(&Interface_Graph::TypedSharings),
             R"#(Returns the list of sharings entities, AT ANY LEVEL, which are kind of a given type. A sharing entity kind of this type ends the exploration of its branch)#"  , py::arg("ent"),  py::arg("type"))
        .def("RootEntities",
             (Interface_EntityIterator (Interface_Graph::*)() const) static_cast<Interface_EntityIterator (Interface_Graph::*)() const>(&Interface_Graph::RootEntities),
             R"#(Returns the Entities which are not Shared (their Sharing List is empty) in the Model)#" )
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (Interface_Graph::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_Graph::Name),
             R"#(Determines the name attached to an entity, by using the general service Name in GeneralModule Returns a null handle if no name could be computed or if the entity is not in the model)#"  , py::arg("ent"))
        .def("SharingTable",
             (const opencascade::handle<TColStd_HArray1OfListOfInteger> & (Interface_Graph::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfListOfInteger> & (Interface_Graph::*)() const>(&Interface_Graph::SharingTable),
             R"#(Returns the Table of Sharing lists. Used to Create another Graph from <me>)#" )
        .def("ModeStat",
             (Standard_Boolean (Interface_Graph::*)() const) static_cast<Standard_Boolean (Interface_Graph::*)() const>(&Interface_Graph::ModeStat),
             R"#(Returns mode resposible for computation of statuses;)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_HArray1OfHAsciiString ,opencascade::handle<Interface_HArray1OfHAsciiString> , Interface_Array1OfHAsciiString, Standard_Transient>>(m.attr("Interface_HArray1OfHAsciiString"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<TCollection_HAsciiString> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<TCollection_HAsciiString> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Interface_Array1OfHAsciiString & (Interface_HArray1OfHAsciiString::*)() const) static_cast<const Interface_Array1OfHAsciiString & (Interface_HArray1OfHAsciiString::*)() const>(&Interface_HArray1OfHAsciiString::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Interface_Array1OfHAsciiString & (Interface_HArray1OfHAsciiString::*)() ) static_cast<Interface_Array1OfHAsciiString & (Interface_HArray1OfHAsciiString::*)() >(&Interface_HArray1OfHAsciiString::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_HArray1OfHAsciiString::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_HArray1OfHAsciiString::*)() const>(&Interface_HArray1OfHAsciiString::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_HArray1OfHAsciiString::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_HArray1OfHAsciiString::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_HGraph ,opencascade::handle<Interface_HGraph> , Standard_Transient>>(m.attr("Interface_HGraph"))
    // constructors
        .def(py::init< const Interface_Graph & >()  , py::arg("agraph") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const Interface_GeneralLib &,const Standard_Boolean >()  , py::arg("amodel"),  py::arg("lib"),  py::arg("theModeStats")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Interface_Protocol> &,const Standard_Boolean >()  , py::arg("amodel"),  py::arg("protocol"),  py::arg("theModeStats")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Interface_GTool> &,const Standard_Boolean >()  , py::arg("amodel"),  py::arg("gtool"),  py::arg("theModeStats")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const Standard_Boolean >()  , py::arg("amodel"),  py::arg("theModeStats")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Graph",
             (const Interface_Graph & (Interface_HGraph::*)() const) static_cast<const Interface_Graph & (Interface_HGraph::*)() const>(&Interface_HGraph::Graph),
             R"#(Returns the Graph contained in <me>, for Read Only Operations Remark that it is returns as "const &" Getting it in a new variable instead of a reference would be a pitty, because all the graph's content would be duplicated)#" )
        .def("CGraph",
             (Interface_Graph & (Interface_HGraph::*)() ) static_cast<Interface_Graph & (Interface_HGraph::*)() >(&Interface_HGraph::CGraph),
             R"#(Same as above, but for Read-Write Operations Then, The Graph will be modified in the HGraph itself)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_HGraph::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_HGraph::*)() const>(&Interface_HGraph::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_HGraph::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_HGraph::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_HSequenceOfCheck ,opencascade::handle<Interface_HSequenceOfCheck> , Interface_SequenceOfCheck, Standard_Transient>>(m.attr("Interface_HSequenceOfCheck"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Interface_Check> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const Interface_SequenceOfCheck & (Interface_HSequenceOfCheck::*)() const) static_cast<const Interface_SequenceOfCheck & (Interface_HSequenceOfCheck::*)() const>(&Interface_HSequenceOfCheck::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (Interface_HSequenceOfCheck::*)(  const opencascade::handle<Interface_Check> & ) ) static_cast<void (Interface_HSequenceOfCheck::*)(  const opencascade::handle<Interface_Check> & ) >(&Interface_HSequenceOfCheck::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (Interface_HSequenceOfCheck::*)( NCollection_Sequence<opencascade::handle<Interface_Check> > & ) ) static_cast<void (Interface_HSequenceOfCheck::*)( NCollection_Sequence<opencascade::handle<Interface_Check> > & ) >(&Interface_HSequenceOfCheck::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (Interface_SequenceOfCheck & (Interface_HSequenceOfCheck::*)() ) static_cast<Interface_SequenceOfCheck & (Interface_HSequenceOfCheck::*)() >(&Interface_HSequenceOfCheck::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_HSequenceOfCheck::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_HSequenceOfCheck::*)() const>(&Interface_HSequenceOfCheck::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_HSequenceOfCheck::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_HSequenceOfCheck::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_IntList , shared_ptr<Interface_IntList> >>(m.attr("Interface_IntList"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer >()  , py::arg("nbe") )
        .def(py::init< const Interface_IntList &,const Standard_Boolean >()  , py::arg("other"),  py::arg("copied") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Interface_IntList::*)( const Standard_Integer ) ) static_cast<void (Interface_IntList::*)( const Standard_Integer ) >(&Interface_IntList::Initialize),
             R"#(Initialize IntList by number of entities.)#"  , py::arg("nbe"))
        .def("NbEntities",
             (Standard_Integer (Interface_IntList::*)() const) static_cast<Standard_Integer (Interface_IntList::*)() const>(&Interface_IntList::NbEntities),
             R"#(Returns count of entities to be aknowledged)#" )
        .def("SetNbEntities",
             (void (Interface_IntList::*)( const Standard_Integer ) ) static_cast<void (Interface_IntList::*)( const Standard_Integer ) >(&Interface_IntList::SetNbEntities),
             R"#(Changes the count of entities (ignored if decreased))#"  , py::arg("nbe"))
        .def("SetNumber",
             (void (Interface_IntList::*)( const Standard_Integer ) ) static_cast<void (Interface_IntList::*)( const Standard_Integer ) >(&Interface_IntList::SetNumber),
             R"#(Sets an entity number as current (for read and fill))#"  , py::arg("number"))
        .def("Number",
             (Standard_Integer (Interface_IntList::*)() const) static_cast<Standard_Integer (Interface_IntList::*)() const>(&Interface_IntList::Number),
             R"#(Returns the current entity number)#" )
        .def("List",
             (Interface_IntList (Interface_IntList::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<Interface_IntList (Interface_IntList::*)( const Standard_Integer , const Standard_Boolean ) const>(&Interface_IntList::List),
             R"#(Returns an IntList, identical to <me> but set to a specified entity Number By default, not copied (in order to be read) Specified <copied> to produce another list and edit it)#"  , py::arg("number"),  py::arg("copied")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetRedefined",
             (void (Interface_IntList::*)( const Standard_Boolean ) ) static_cast<void (Interface_IntList::*)( const Standard_Boolean ) >(&Interface_IntList::SetRedefined),
             R"#(Sets current entity list to be redefined or not This is used in a Graph for redefinition list : it can be disable (no redefinition, i.e. list is cleared), or enabled (starts as empty). The original list has not to be "redefined")#"  , py::arg("mode"))
        .def("Reservate",
             (void (Interface_IntList::*)( const Standard_Integer ) ) static_cast<void (Interface_IntList::*)( const Standard_Integer ) >(&Interface_IntList::Reservate),
             R"#(Makes a reservation for <count> references to be later attached to the current entity. If required, it increases the size of array used to store refs. Remark that if count is less than two, it does nothing (because immediate storing))#"  , py::arg("count"))
        .def("Add",
             (void (Interface_IntList::*)( const Standard_Integer ) ) static_cast<void (Interface_IntList::*)( const Standard_Integer ) >(&Interface_IntList::Add),
             R"#(Adds a reference (as an integer value, an entity number) to the current entity number. Zero is ignored)#"  , py::arg("ref"))
        .def("Length",
             (Standard_Integer (Interface_IntList::*)() const) static_cast<Standard_Integer (Interface_IntList::*)() const>(&Interface_IntList::Length),
             R"#(Returns the count of refs attached to current entity number)#" )
        .def("IsRedefined",
             (Standard_Boolean (Interface_IntList::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Interface_IntList::*)( const Standard_Integer ) const>(&Interface_IntList::IsRedefined),
             R"#(Returns True if the list for a number (default is taken as current) is "redefined" (usefull for empty list))#"  , py::arg("num")=static_cast<const Standard_Integer>(0))
        .def("Value",
             (Standard_Integer (Interface_IntList::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Interface_IntList::*)( const Standard_Integer ) const>(&Interface_IntList::Value),
             R"#(Returns a reference number in the list for current number, according to its rank)#"  , py::arg("num"))
        .def("Remove",
             (Standard_Boolean (Interface_IntList::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (Interface_IntList::*)( const Standard_Integer ) >(&Interface_IntList::Remove),
             R"#(Removes an item in the list for current number, given its rank Returns True if done, False else)#"  , py::arg("num"))
        .def("Clear",
             (void (Interface_IntList::*)() ) static_cast<void (Interface_IntList::*)() >(&Interface_IntList::Clear),
             R"#(Clears all data, hence each entity number has an empty list)#" )
        .def("AdjustSize",
             (void (Interface_IntList::*)( const Standard_Integer ) ) static_cast<void (Interface_IntList::*)( const Standard_Integer ) >(&Interface_IntList::AdjustSize),
             R"#(Resizes lists to exact sizes. For list of refs, a positive margin can be added.)#"  , py::arg("margin")=static_cast<const Standard_Integer>(0))
    // methods using call by reference i.s.o. return
        .def("Internals",
             []( Interface_IntList &self , opencascade::handle<TColStd_HArray1OfInteger> & ents,opencascade::handle<TColStd_HArray1OfInteger> & refs ){ Standard_Integer  nbrefs; self.Internals(nbrefs,ents,refs); return std::make_tuple(nbrefs); },
             R"#(Returns internal values, used for copying)#"  , py::arg("ents"),  py::arg("refs"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_IntVal ,opencascade::handle<Interface_IntVal> , Standard_Transient>>(m.attr("Interface_IntVal"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Integer (Interface_IntVal::*)() const) static_cast<Standard_Integer (Interface_IntVal::*)() const>(&Interface_IntVal::Value),
             R"#(None)#" )
        .def("CValue",
             (Standard_Integer & (Interface_IntVal::*)() ) static_cast<Standard_Integer & (Interface_IntVal::*)() >(&Interface_IntVal::CValue),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_IntVal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_IntVal::*)() const>(&Interface_IntVal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_IntVal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_IntVal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_InterfaceModel ,opencascade::handle<Interface_InterfaceModel>,Py_Interface_InterfaceModel , Standard_Transient>>(m.attr("Interface_InterfaceModel"))
    // constructors
    // custom constructors
    // methods
        .def("Destroy",
             (void (Interface_InterfaceModel::*)() ) static_cast<void (Interface_InterfaceModel::*)() >(&Interface_InterfaceModel::Destroy),
             R"#(Clears the list of entities (service WhenDelete))#" )
        .def("SetProtocol",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Interface_Protocol> & ) ) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Interface_Protocol> & ) >(&Interface_InterfaceModel::SetProtocol),
             R"#(Sets a Protocol for this Model It is also set by a call to AddWithRefs with Protocol It is used for : DumpHeader (as required), ClearEntities ...)#"  , py::arg("proto"))
        .def("Protocol",
             (opencascade::handle<Interface_Protocol> (Interface_InterfaceModel::*)() const) static_cast<opencascade::handle<Interface_Protocol> (Interface_InterfaceModel::*)() const>(&Interface_InterfaceModel::Protocol),
             R"#(Returns the Protocol which has been set by SetProtocol, or AddWithRefs with Protocol)#" )
        .def("SetGTool",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Interface_GTool> & ) ) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Interface_GTool> & ) >(&Interface_InterfaceModel::SetGTool),
             R"#(Sets a GTool for this model, which already defines a Protocol)#"  , py::arg("gtool"))
        .def("GTool",
             (opencascade::handle<Interface_GTool> (Interface_InterfaceModel::*)() const) static_cast<opencascade::handle<Interface_GTool> (Interface_InterfaceModel::*)() const>(&Interface_InterfaceModel::GTool),
             R"#(Returns the GTool, set by SetProtocol or by SetGTool)#" )
        .def("DispatchStatus",
             (Standard_Boolean & (Interface_InterfaceModel::*)() ) static_cast<Standard_Boolean & (Interface_InterfaceModel::*)() >(&Interface_InterfaceModel::DispatchStatus),
             R"#(Returns the Dispatch Status, either for get or set A Model which is produced from Dispatch may share entities with the original (according to the Protocol), hence these non-copied entities should not be deleted)#" )
        .def("Clear",
             (void (Interface_InterfaceModel::*)() ) static_cast<void (Interface_InterfaceModel::*)() >(&Interface_InterfaceModel::Clear),
             R"#(Erases contained data; used when a Model is copied to others : the new copied ones begin from clear Clear calls specific method ClearHeader (see below))#" )
        .def("ClearEntities",
             (void (Interface_InterfaceModel::*)() ) static_cast<void (Interface_InterfaceModel::*)() >(&Interface_InterfaceModel::ClearEntities),
             R"#(Clears the entities; uses the general service WhenDelete, in addition to the standard Memory Manager; can be redefined)#" )
        .def("ClearLabels",
             (void (Interface_InterfaceModel::*)() ) static_cast<void (Interface_InterfaceModel::*)() >(&Interface_InterfaceModel::ClearLabels),
             R"#(Erases informations about labels, if any : specific to each norm)#" )
        .def("ClearHeader",
             (void (Interface_InterfaceModel::*)() ) static_cast<void (Interface_InterfaceModel::*)() >(&Interface_InterfaceModel::ClearHeader),
             R"#(Clears Model's header : specific to each norm)#" )
        .def("NbEntities",
             (Standard_Integer (Interface_InterfaceModel::*)() const) static_cast<Standard_Integer (Interface_InterfaceModel::*)() const>(&Interface_InterfaceModel::NbEntities),
             R"#(Returns count of contained Entities)#" )
        .def("Contains",
             (Standard_Boolean (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_InterfaceModel::Contains),
             R"#(Returns True if a Model contains an Entity (for a ReportEntity, looks for the ReportEntity itself AND its Concerned Entity))#"  , py::arg("anentity"))
        .def("Number",
             (Standard_Integer (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_InterfaceModel::Number),
             R"#(Returns the Number of an Entity in the Model if it contains it. Else returns 0. For a ReportEntity, looks at Concerned Entity. Returns the Directory entry Number of an Entity in the Model if it contains it. Else returns 0. For a ReportEntity, looks at Concerned Entity.)#"  , py::arg("anentity"))
        .def("Value",
             (const opencascade::handle<Standard_Transient> & (Interface_InterfaceModel::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Standard_Transient> & (Interface_InterfaceModel::*)( const Standard_Integer ) const>(&Interface_InterfaceModel::Value),
             R"#(Returns an Entity identified by its number in the Model Each sub-class of InterfaceModel can define its own method Entity to return its specific class of Entity (e.g. for VDA, VDAModel returns a VDAEntity), working by calling Value Remark : For a Reported Entity, (Erroneous, Corrected, Unknown), this method returns this Reported Entity. See ReportEntity for other questions.)#"  , py::arg("num"))
        .def("NbTypes",
             (Standard_Integer (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_InterfaceModel::NbTypes),
             R"#(Returns the count of DISTINCT types under which an entity may be processed. Defined by the Protocol, which gives default as 1 (dynamic Type).)#"  , py::arg("ent"))
        .def("Type",
             (opencascade::handle<Standard_Type> (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer ) const) static_cast<opencascade::handle<Standard_Type> (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer ) const>(&Interface_InterfaceModel::Type),
             R"#(Returns a type, given its rank : defined by the Protocol (by default, the first one))#"  , py::arg("ent"),  py::arg("num")=static_cast<const Standard_Integer>(1))
        .def("TypeName",
             (Standard_CString (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) const) static_cast<Standard_CString (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) const>(&Interface_InterfaceModel::TypeName),
             R"#(Returns the type name of an entity, from the list of types (one or more ...) <complete> True (D) gives the complete type, else packages are removed WARNING : buffered, to be immediately copied or printed)#"  , py::arg("ent"),  py::arg("complete")=static_cast<const Standard_Boolean>(Standard_True))
        .def("EntityState",
             (Interface_DataState (Interface_InterfaceModel::*)( const Standard_Integer ) const) static_cast<Interface_DataState (Interface_InterfaceModel::*)( const Standard_Integer ) const>(&Interface_InterfaceModel::EntityState),
             R"#(Returns the State of an entity, given its number)#"  , py::arg("num"))
        .def("IsReportEntity",
             (Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer , const Standard_Boolean ) const>(&Interface_InterfaceModel::IsReportEntity),
             R"#(Returns True if <num> identifies a ReportEntity in the Model Hence, ReportEntity can be called.)#"  , py::arg("num"),  py::arg("semantic")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReportEntity",
             (opencascade::handle<Interface_ReportEntity> (Interface_InterfaceModel::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<opencascade::handle<Interface_ReportEntity> (Interface_InterfaceModel::*)( const Standard_Integer , const Standard_Boolean ) const>(&Interface_InterfaceModel::ReportEntity),
             R"#(Returns a ReportEntity identified by its number in the Model, or a Null Handle If <num> does not identify a ReportEntity.)#"  , py::arg("num"),  py::arg("semantic")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsErrorEntity",
             (Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer ) const>(&Interface_InterfaceModel::IsErrorEntity),
             R"#(Returns True if <num> identifies an Error Entity : in this case, a ReportEntity brings Fail Messages and possibly an "undefined" Content, see IsRedefinedEntity)#"  , py::arg("num"))
        .def("IsRedefinedContent",
             (Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer ) const>(&Interface_InterfaceModel::IsRedefinedContent),
             R"#(Returns True if <num> identifies an Entity which content is redefined through a ReportEntity (i.e. with literal data only) This happens when an entity is syntactically erroneous in the way that its basic content remains empty. For more details (such as content itself), see ReportEntity)#"  , py::arg("num"))
        .def("ClearReportEntity",
             (Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer ) >(&Interface_InterfaceModel::ClearReportEntity),
             R"#(Removes the ReportEntity attached to Entity <num>. Returns True if done, False if no ReportEntity was attached to <num>. Warning : the caller must assume that this clearing is meaningfull)#"  , py::arg("num"))
        .def("SetReportEntity",
             (Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer , const opencascade::handle<Interface_ReportEntity> & ) ) static_cast<Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer , const opencascade::handle<Interface_ReportEntity> & ) >(&Interface_InterfaceModel::SetReportEntity),
             R"#(Sets or Replaces a ReportEntity for the Entity <num>. Returns True if Report is replaced, False if it has been replaced Warning : the caller must assume that this setting is meaningfull)#"  , py::arg("num"),  py::arg("rep"))
        .def("AddReportEntity",
             (Standard_Boolean (Interface_InterfaceModel::*)( const opencascade::handle<Interface_ReportEntity> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (Interface_InterfaceModel::*)( const opencascade::handle<Interface_ReportEntity> & , const Standard_Boolean ) >(&Interface_InterfaceModel::AddReportEntity),
             R"#(Adds a ReportEntity as such. Returns False if the concerned entity is not recorded in the Model Else, adds it into, either the main report list or the list for semantic checks, then returns True)#"  , py::arg("rep"),  py::arg("semantic")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsUnknownEntity",
             (Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer ) const>(&Interface_InterfaceModel::IsUnknownEntity),
             R"#(Returns True if <num> identifies an Unknown Entity : in this case, a ReportEntity with no Check Messages designates it.)#"  , py::arg("num"))
        .def("FillSemanticChecks",
             (void (Interface_InterfaceModel::*)( const Interface_CheckIterator & , const Standard_Boolean ) ) static_cast<void (Interface_InterfaceModel::*)( const Interface_CheckIterator & , const Standard_Boolean ) >(&Interface_InterfaceModel::FillSemanticChecks),
             R"#(Fills the list of semantic checks. This list is computed (by CheckTool). Hence, it can be stored in the model for later queries <clear> True (D) : new list replaces <clear> False : new list is cumulated)#"  , py::arg("checks"),  py::arg("clear")=static_cast<const Standard_Boolean>(Standard_True))
        .def("HasSemanticChecks",
             (Standard_Boolean (Interface_InterfaceModel::*)() const) static_cast<Standard_Boolean (Interface_InterfaceModel::*)() const>(&Interface_InterfaceModel::HasSemanticChecks),
             R"#(Returns True if semantic checks have been filled)#" )
        .def("Check",
             (const opencascade::handle<Interface_Check> & (Interface_InterfaceModel::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<const opencascade::handle<Interface_Check> & (Interface_InterfaceModel::*)( const Standard_Integer , const Standard_Boolean ) const>(&Interface_InterfaceModel::Check),
             R"#(Returns the check attached to an entity, designated by its Number. 0 for global check <semantic> True : recorded semantic check <semantic> False : recorded syntactic check (see ReportEntity) If no check is recorded for <num>, returns an empty Check)#"  , py::arg("num"),  py::arg("syntactic"))
        .def("Reservate",
             (void (Interface_InterfaceModel::*)( const Standard_Integer ) ) static_cast<void (Interface_InterfaceModel::*)( const Standard_Integer ) >(&Interface_InterfaceModel::Reservate),
             R"#(Does a reservation for the List of Entities (for optimized storage management). If it is not called, storage management can be less efficient. <nbent> is the expected count of Entities to store)#"  , py::arg("nbent"))
        .def("AddEntity",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_InterfaceModel::AddEntity),
             R"#(Internal method for adding an Entity. Used by file reading (defined by each Interface) and Transfer tools. It adds the entity required to be added, not its refs : see AddWithRefs. If <anentity> is a ReportEntity, it is added to the list of Reports, its Concerned Entity (Erroneous or Corrected, else Unknown) is added to the list of Entities. That is, the ReportEntity must be created before Adding)#"  , py::arg("anentity"))
        .def("AddWithRefs",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_Protocol> & , const Standard_Integer , const Standard_Boolean ) ) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_Protocol> & , const Standard_Integer , const Standard_Boolean ) >(&Interface_InterfaceModel::AddWithRefs),
             R"#(Adds to the Model, an Entity with all its References, as they are defined by General Services FillShared and ListImplied. Process is recursive (any sub-levels) if <level> = 0 (Default) Else, adds sub-entities until the required sub-level. Especially, if <level> = 1, adds immediate subs and that's all)#"  , py::arg("anent"),  py::arg("proto"),  py::arg("level")=static_cast<const Standard_Integer>(0),  py::arg("listall")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AddWithRefs",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer , const Standard_Boolean ) ) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer , const Standard_Boolean ) >(&Interface_InterfaceModel::AddWithRefs),
             R"#(Same as above, but works with the Protocol of the Model)#"  , py::arg("anent"),  py::arg("level")=static_cast<const Standard_Integer>(0),  py::arg("listall")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AddWithRefs",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const Interface_GeneralLib & , const Standard_Integer , const Standard_Boolean ) ) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const Interface_GeneralLib & , const Standard_Integer , const Standard_Boolean ) >(&Interface_InterfaceModel::AddWithRefs),
             R"#(Same as above, but works with an already created GeneralLib)#"  , py::arg("anent"),  py::arg("lib"),  py::arg("level")=static_cast<const Standard_Integer>(0),  py::arg("listall")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReplaceEntity",
             (void (Interface_InterfaceModel::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_InterfaceModel::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) >(&Interface_InterfaceModel::ReplaceEntity),
             R"#(Replace Entity with Number=nument on other entity - "anent")#"  , py::arg("nument"),  py::arg("anent"))
        .def("ReverseOrders",
             (void (Interface_InterfaceModel::*)( const Standard_Integer ) ) static_cast<void (Interface_InterfaceModel::*)( const Standard_Integer ) >(&Interface_InterfaceModel::ReverseOrders),
             R"#(Reverses the Numbers of the Entities, between <after> and the total count of Entities. Thus, the entities : 1,2 ... after, after+1 ... nb-1, nb become numbered as : 1,2 ... after, nb, nb-1 ... after+1 By default (after = 0) the whole list of Entities is reversed)#"  , py::arg("after")=static_cast<const Standard_Integer>(0))
        .def("ChangeOrder",
             (void (Interface_InterfaceModel::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<void (Interface_InterfaceModel::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&Interface_InterfaceModel::ChangeOrder),
             R"#(Changes the Numbers of some Entities : <oldnum> is moved to <newnum>, same for <count> entities. Thus : 1,2 ... newnum-1 newnum ... oldnum .. oldnum+count oldnum+count+1 .. gives 1,2 ... newnum-1 oldnum .. oldnum+count newnum ... oldnum+count+1 (can be seen as a circular permutation))#"  , py::arg("oldnum"),  py::arg("newnum"),  py::arg("count")=static_cast<const Standard_Integer>(1))
        .def("GetFromTransfer",
             (void (Interface_InterfaceModel::*)( const Interface_EntityIterator & ) ) static_cast<void (Interface_InterfaceModel::*)( const Interface_EntityIterator & ) >(&Interface_InterfaceModel::GetFromTransfer),
             R"#(Gets contents from an EntityIterator, prepared by a Transfer tool (e.g TransferCopy). Starts from clear)#"  , py::arg("aniter"))
        .def("GetFromAnother",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&Interface_InterfaceModel::GetFromAnother),
             R"#(Gets header (data specific of a defined Interface) from another InterfaceModel; called from TransferCopy)#"  , py::arg("other"))
        .def("NewEmptyModel",
             (opencascade::handle<Interface_InterfaceModel> (Interface_InterfaceModel::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Interface_InterfaceModel::*)() const>(&Interface_InterfaceModel::NewEmptyModel),
             R"#(Returns a New Empty Model, same type as <me> (whatever its Type); called to Copy parts a Model into other ones, then followed by a call to GetFromAnother (Header) then filling with specified Entities, themselves copied)#" )
        .def("SetCategoryNumber",
             (Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (Interface_InterfaceModel::*)( const Standard_Integer , const Standard_Integer ) >(&Interface_InterfaceModel::SetCategoryNumber),
             R"#(Records a category number for an entity number Returns True when done, False if <num> is out of range)#"  , py::arg("num"),  py::arg("val"))
        .def("CategoryNumber",
             (Standard_Integer (Interface_InterfaceModel::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Interface_InterfaceModel::*)( const Standard_Integer ) const>(&Interface_InterfaceModel::CategoryNumber),
             R"#(Returns the recorded category number for a given entity number 0 if none was defined for this entity)#"  , py::arg("num"))
        .def("FillIterator",
             (void (Interface_InterfaceModel::*)( Interface_EntityIterator & ) const) static_cast<void (Interface_InterfaceModel::*)( Interface_EntityIterator & ) const>(&Interface_InterfaceModel::FillIterator),
             R"#(Allows an EntityIterator to get a list of Entities)#"  , py::arg("iter"))
        .def("Entities",
             (Interface_EntityIterator (Interface_InterfaceModel::*)() const) static_cast<Interface_EntityIterator (Interface_InterfaceModel::*)() const>(&Interface_InterfaceModel::Entities),
             R"#(Returns the list of all Entities, as an Iterator on Entities (the Entities themselves, not the Reports))#" )
        .def("Reports",
             (Interface_EntityIterator (Interface_InterfaceModel::*)( const Standard_Boolean ) const) static_cast<Interface_EntityIterator (Interface_InterfaceModel::*)( const Standard_Boolean ) const>(&Interface_InterfaceModel::Reports),
             R"#(Returns the list of all ReportEntities, i.e. data about Entities read with Error or Warning informations (each item has to be casted to Report Entity then it can be queried for Concerned Entity, Content, Check ...) By default, returns the main reports, is <semantic> is True it returns the list for sematic checks)#"  , py::arg("semantic")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Redefineds",
             (Interface_EntityIterator (Interface_InterfaceModel::*)() const) static_cast<Interface_EntityIterator (Interface_InterfaceModel::*)() const>(&Interface_InterfaceModel::Redefineds),
             R"#(Returns the list of ReportEntities which redefine data (generally, if concerned entity is "Error", a literal content is added to it : this is a "redefined entity")#" )
        .def("GlobalCheck",
             (const opencascade::handle<Interface_Check> & (Interface_InterfaceModel::*)( const Standard_Boolean ) const) static_cast<const opencascade::handle<Interface_Check> & (Interface_InterfaceModel::*)( const Standard_Boolean ) const>(&Interface_InterfaceModel::GlobalCheck),
             R"#(Returns the GlobalCheck, which memorizes messages global to the file (not specific to an Entity), especially Header)#"  , py::arg("syntactic")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetGlobalCheck",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Interface_Check> & ) ) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Interface_Check> & ) >(&Interface_InterfaceModel::SetGlobalCheck),
             R"#(Allows to modify GlobalCheck, after getting then completing it Remark : it is SYNTACTIC check. Semantics, see FillChecks)#"  , py::arg("ach"))
        .def("VerifyCheck",
             (void (Interface_InterfaceModel::*)( opencascade::handle<Interface_Check> & ) const) static_cast<void (Interface_InterfaceModel::*)( opencascade::handle<Interface_Check> & ) const>(&Interface_InterfaceModel::VerifyCheck),
             R"#(Minimum Semantic Global Check on data in model (header) Can only check basic Data. See also GlobalCheck from Protocol for a check which takes the Graph into account Default does nothing, can be redefined)#"  , py::arg("ach"))
        .def("DumpHeader",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&Interface_InterfaceModel::DumpHeader),
             R"#(Dumps Header in a short, easy to read, form, onto a Stream <level> allows to print more or less parts of the header, if necessary. 0 for basic print)#"  , py::arg("S"),  py::arg("level")=static_cast<const Standard_Integer>(0))
        .def("Print",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&Interface_InterfaceModel::Print),
             R"#(Prints identification of a given entity in <me>, in order to be printed in a list or phrase <mode> < 0 : prints only its number <mode> = 1 : just calls PrintLabel <mode> = 0 (D) : prints its number plus '/' plus PrintLabel If <ent> == <me>, simply prints "Global" If <ent> is unknown, prints "??/its type")#"  , py::arg("ent"),  py::arg("s"),  py::arg("mode")=static_cast<const Standard_Integer>(0))
        .def("PrintLabel",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const>(&Interface_InterfaceModel::PrintLabel),
             R"#(Prints label specific to each norm, for a given entity. Must only print label itself, in order to be included in a phrase. Can call the result of StringLabel, but not obliged.)#"  , py::arg("ent"),  py::arg("S"))
        .def("PrintToLog",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const>(&Interface_InterfaceModel::PrintToLog),
             R"#(Prints label specific to each norm in log format, for a given entity. By default, just calls PrintLabel, can be redefined)#"  , py::arg("ent"),  py::arg("S"))
        .def("StringLabel",
             (opencascade::handle<TCollection_HAsciiString> (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_InterfaceModel::StringLabel),
             R"#(Returns a string with the label attached to a given entity. Warning : While this string may be edited on the spot, if it is a read field, the returned value must be copied before.)#"  , py::arg("ent"))
        .def("NextNumberForLabel",
             (Standard_Integer (Interface_InterfaceModel::*)( const Standard_CString , const Standard_Integer , const Standard_Boolean ) const) static_cast<Standard_Integer (Interface_InterfaceModel::*)( const Standard_CString , const Standard_Integer , const Standard_Boolean ) const>(&Interface_InterfaceModel::NextNumberForLabel),
             R"#(Searches a label which matches with one entity. Begins from <lastnum>+1 (default:1) and scans the entities until <NbEntities>. For the first which matches <label>, this method returns its Number. Returns 0 if nothing found Can be called recursively (labels are not specified as unique) <exact> : if True (default), exact match is required else, checks the END of entity label)#"  , py::arg("label"),  py::arg("lastnum")=static_cast<const Standard_Integer>(0),  py::arg("exact")=static_cast<const Standard_Boolean>(Standard_True))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_InterfaceModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_InterfaceModel::*)() const>(&Interface_InterfaceModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ClassName_s",
                    (Standard_CString (*)( const Standard_CString ) ) static_cast<Standard_CString (*)( const Standard_CString ) >(&Interface_InterfaceModel::ClassName),
                    R"#(From a CDL Type Name, returns the Class part (package dropped) WARNING : buffered, to be immediately copied or printed)#"  , py::arg("typnam"))
        .def_static("HasTemplate_s",
                    (Standard_Boolean (*)( const Standard_CString ) ) static_cast<Standard_Boolean (*)( const Standard_CString ) >(&Interface_InterfaceModel::HasTemplate),
                    R"#(Returns true if a template is attached to a given name)#"  , py::arg("name"))
        .def_static("Template_s",
                    (opencascade::handle<Interface_InterfaceModel> (*)( const Standard_CString ) ) static_cast<opencascade::handle<Interface_InterfaceModel> (*)( const Standard_CString ) >(&Interface_InterfaceModel::Template),
                    R"#(Returns the template model attached to a name, or a Null Handle)#"  , py::arg("name"))
        .def_static("SetTemplate_s",
                    (Standard_Boolean (*)( const Standard_CString , const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<Standard_Boolean (*)( const Standard_CString , const opencascade::handle<Interface_InterfaceModel> & ) >(&Interface_InterfaceModel::SetTemplate),
                    R"#(Records a new template model with a name. If the name was already recorded, the corresponding template is replaced by the new one. Then, WARNING : test HasTemplate to avoid surprises)#"  , py::arg("name"),  py::arg("model"))
        .def_static("ListTemplates_s",
                    (opencascade::handle<TColStd_HSequenceOfHAsciiString> (*)() ) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (*)() >(&Interface_InterfaceModel::ListTemplates),
                    R"#(Returns the complete list of names attached to template models)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_InterfaceModel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_InterfaceModel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_LineBuffer , shared_ptr<Interface_LineBuffer> >>(m.attr("Interface_LineBuffer"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("size")=static_cast<const Standard_Integer>(10) )
    // custom constructors
    // methods
        .def("SetMax",
             (void (Interface_LineBuffer::*)( const Standard_Integer ) ) static_cast<void (Interface_LineBuffer::*)( const Standard_Integer ) >(&Interface_LineBuffer::SetMax),
             R"#(Changes Maximum allowed size of Buffer. If <max> is Zero, Maximum size is set to the initial size.)#"  , py::arg("max"))
        .def("SetInitial",
             (void (Interface_LineBuffer::*)( const Standard_Integer ) ) static_cast<void (Interface_LineBuffer::*)( const Standard_Integer ) >(&Interface_LineBuffer::SetInitial),
             R"#(Sets an Initial reservation for Blank characters (this reservation is counted in the size of the current Line))#"  , py::arg("initial"))
        .def("SetKeep",
             (void (Interface_LineBuffer::*)() ) static_cast<void (Interface_LineBuffer::*)() >(&Interface_LineBuffer::SetKeep),
             R"#(Sets a Keep Status at current Length. It means that at next Move, the new line will begin by characters between Keep + 1 and current Length)#" )
        .def("CanGet",
             (Standard_Boolean (Interface_LineBuffer::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (Interface_LineBuffer::*)( const Standard_Integer ) >(&Interface_LineBuffer::CanGet),
             R"#(Returns True if there is room enough to add <more> characters Else, it is required to Dump the Buffer before refilling it <more> is recorded to manage SetKeep status)#"  , py::arg("more"))
        .def("Content",
             (Standard_CString (Interface_LineBuffer::*)() const) static_cast<Standard_CString (Interface_LineBuffer::*)() const>(&Interface_LineBuffer::Content),
             R"#(Returns the Content of the LineBuffer)#" )
        .def("Length",
             (Standard_Integer (Interface_LineBuffer::*)() const) static_cast<Standard_Integer (Interface_LineBuffer::*)() const>(&Interface_LineBuffer::Length),
             R"#(Returns the Length of the LineBuffer)#" )
        .def("Clear",
             (void (Interface_LineBuffer::*)() ) static_cast<void (Interface_LineBuffer::*)() >(&Interface_LineBuffer::Clear),
             R"#(Clears completely the LineBuffer)#" )
        .def("FreezeInitial",
             (void (Interface_LineBuffer::*)() ) static_cast<void (Interface_LineBuffer::*)() >(&Interface_LineBuffer::FreezeInitial),
             R"#(Inhibits effect of SetInitial until the next Move (i.e. Keep) Then Prepare will not insert initial blanks, but further ones will. This allows to cancel initial blanks on an internal Split A call to SetInitial has no effect on this until Move)#" )
        .def("Move",
             (void (Interface_LineBuffer::*)( TCollection_AsciiString & ) ) static_cast<void (Interface_LineBuffer::*)( TCollection_AsciiString & ) >(&Interface_LineBuffer::Move),
             R"#(Fills a AsciiString <str> with the Content of the Line Buffer, then Clears the LineBuffer)#"  , py::arg("str"))
        .def("Move",
             (void (Interface_LineBuffer::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (Interface_LineBuffer::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&Interface_LineBuffer::Move),
             R"#(Same as above, but <str> is known through a Handle)#"  , py::arg("str"))
        .def("Moved",
             (opencascade::handle<TCollection_HAsciiString> (Interface_LineBuffer::*)() ) static_cast<opencascade::handle<TCollection_HAsciiString> (Interface_LineBuffer::*)() >(&Interface_LineBuffer::Moved),
             R"#(Same as above, but generates the HAsciiString)#" )
        .def("Add",
             (void (Interface_LineBuffer::*)( const Standard_CString ) ) static_cast<void (Interface_LineBuffer::*)( const Standard_CString ) >(&Interface_LineBuffer::Add),
             R"#(Adds a text as a CString. Its Length is evaluated from the text (by C function strlen))#"  , py::arg("text"))
        .def("Add",
             (void (Interface_LineBuffer::*)( const Standard_CString , const Standard_Integer ) ) static_cast<void (Interface_LineBuffer::*)( const Standard_CString , const Standard_Integer ) >(&Interface_LineBuffer::Add),
             R"#(Adds a text as a CString. Its length is given as <lntext>)#"  , py::arg("text"),  py::arg("lntext"))
        .def("Add",
             (void (Interface_LineBuffer::*)( const TCollection_AsciiString & ) ) static_cast<void (Interface_LineBuffer::*)( const TCollection_AsciiString & ) >(&Interface_LineBuffer::Add),
             R"#(Adds a text as a AsciiString from TCollection)#"  , py::arg("text"))
        .def("Add",
             (void (Interface_LineBuffer::*)( const Standard_Character ) ) static_cast<void (Interface_LineBuffer::*)( const Standard_Character ) >(&Interface_LineBuffer::Add),
             R"#(Adds a text made of only ONE Character)#"  , py::arg("text"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_MSG , shared_ptr<Interface_MSG> >>(m.attr("Interface_MSG"))
    // constructors
        .def(py::init< const Standard_CString >()  , py::arg("key") )
        .def(py::init< const Standard_CString,const Standard_Integer >()  , py::arg("key"),  py::arg("i1") )
        .def(py::init< const Standard_CString,const Standard_Integer,const Standard_Integer >()  , py::arg("key"),  py::arg("i1"),  py::arg("i2") )
        .def(py::init< const Standard_CString,const Standard_Real,const Standard_Integer >()  , py::arg("key"),  py::arg("r1"),  py::arg("intervals")=static_cast<const Standard_Integer>(- 1) )
        .def(py::init< const Standard_CString,const Standard_CString >()  , py::arg("key"),  py::arg("str") )
        .def(py::init< const Standard_CString,const Standard_Integer,const Standard_CString >()  , py::arg("key"),  py::arg("ival"),  py::arg("str") )
    // custom constructors
    // methods
        .def("Destroy",
             (void (Interface_MSG::*)() ) static_cast<void (Interface_MSG::*)() >(&Interface_MSG::Destroy),
             R"#(Optimised destructor (applies for additional forms of Create))#" )
        .def("Value",
             (Standard_CString (Interface_MSG::*)() const) static_cast<Standard_CString (Interface_MSG::*)() const>(&Interface_MSG::Value),
             R"#(Returns the translated message, in a functional form with operator () was C++ : return const)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Read_s",
                    (Standard_Integer (*)( std::istream & ) ) static_cast<Standard_Integer (*)( std::istream & ) >(&Interface_MSG::Read),
                    R"#(Reads a list of messages from a stream, returns read count 0 means empty file, -1 means error)#"  , py::arg("S"))
        .def_static("Read_s",
                    (Standard_Integer (*)( const Standard_CString ) ) static_cast<Standard_Integer (*)( const Standard_CString ) >(&Interface_MSG::Read),
                    R"#(Reads a list of messages from a file defined by its name)#"  , py::arg("file"))
        .def_static("Write_s",
                    (Standard_Integer (*)( std::ostream & , const Standard_CString ) ) static_cast<Standard_Integer (*)( std::ostream & , const Standard_CString ) >(&Interface_MSG::Write),
                    R"#(Writes the list of messages recorded to be translated, to a stream. Writes all the list (Default) or only keys which begin by <rootkey>. Returns the count of written messages)#"  , py::arg("S"),  py::arg("rootkey")=static_cast<const Standard_CString>(""))
        .def_static("IsKey_s",
                    (Standard_Boolean (*)( const Standard_CString ) ) static_cast<Standard_Boolean (*)( const Standard_CString ) >(&Interface_MSG::IsKey),
                    R"#(Returns True if a given message is surely a key (according to the form adopted for keys) (before activating messages, answer is false))#"  , py::arg("mess"))
        .def_static("Translated_s",
                    (Standard_CString (*)( const Standard_CString ) ) static_cast<Standard_CString (*)( const Standard_CString ) >(&Interface_MSG::Translated),
                    R"#(Returns the item recorded for a key. Returns the key itself if : - it is not recorded (then, the trace system is activated) - MSG has been required to be hung on)#"  , py::arg("key"))
        .def_static("Record_s",
                    (void (*)( const Standard_CString , const Standard_CString ) ) static_cast<void (*)( const Standard_CString , const Standard_CString ) >(&Interface_MSG::Record),
                    R"#(Fills the dictionary with a couple (key-item) If a key is already recorded, it is possible to : - keep the last definition, and activate the trace system)#"  , py::arg("key"),  py::arg("item"))
        .def_static("SetTrace_s",
                    (void (*)( const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (*)( const Standard_Boolean , const Standard_Boolean ) >(&Interface_MSG::SetTrace),
                    R"#(Sets the trace system to work when activated, as follow : - if <toprint> is True, print immediately on standard output - if <torecord> is True, record it for further print)#"  , py::arg("toprint"),  py::arg("torecord"))
        .def_static("SetMode_s",
                    (void (*)( const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (*)( const Standard_Boolean , const Standard_Boolean ) >(&Interface_MSG::SetMode),
                    R"#(Sets the main modes for MSG : - if <running> is True, translation works normally - if <running> is False, translated item equate keys - if <raising> is True, errors (from Record or Translate) cause MSG to raise an exception - if <raising> is False, MSG runs without exception, then see also Trace Modes above)#"  , py::arg("running"),  py::arg("raising"))
        .def_static("PrintTrace_s",
                    (void (*)( std::ostream & ) ) static_cast<void (*)( std::ostream & ) >(&Interface_MSG::PrintTrace),
                    R"#(Prints the recorded errors (without title; can be empty, this is the normally expected case))#"  , py::arg("S"))
        .def_static("Intervalled_s",
                    (Standard_Real (*)( const Standard_Real , const Standard_Integer , const Standard_Boolean ) ) static_cast<Standard_Real (*)( const Standard_Real , const Standard_Integer , const Standard_Boolean ) >(&Interface_MSG::Intervalled),
                    R"#(Returns an "intervalled" value from a starting real <val> : i.e. a value which is rounded on an interval limit Interval limits are defined to be in a coarsely "geometric" progression (two successive intervals are inside a limit ratio))#"  , py::arg("val"),  py::arg("order")=static_cast<const Standard_Integer>(3),  py::arg("upper")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("TDate_s",
                    (void (*)( const Standard_CString , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_CString ) ) static_cast<void (*)( const Standard_CString , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_CString ) >(&Interface_MSG::TDate),
                    R"#(Codes a date as a text, from its numeric value (-> seconds) : YYYY-MM-DD:HH-MN-SS fixed format, completed by leading zeros Another format can be provided, as follows : C:%d ... C like format, preceeded by C: S:... format to call system (not yet implemented))#"  , py::arg("text"),  py::arg("yy"),  py::arg("mm"),  py::arg("dd"),  py::arg("hh"),  py::arg("mn"),  py::arg("ss"),  py::arg("format")=static_cast<const Standard_CString>(""))
        .def_static("NDate_s",
                    (Standard_Boolean (*)( const Standard_CString , Standard_Integer & , Standard_Integer & , Standard_Integer & , Standard_Integer & , Standard_Integer & , Standard_Integer & ) ) static_cast<Standard_Boolean (*)( const Standard_CString , Standard_Integer & , Standard_Integer & , Standard_Integer & , Standard_Integer & , Standard_Integer & , Standard_Integer & ) >(&Interface_MSG::NDate),
                    R"#(Decodes a date to numeric integer values Returns True if OK, False if text does not fit with required format. Incomplete forms are allowed (for instance, for only YYYY-MM-DD, hour is zero))#"  , py::arg("text"),  py::arg("yy"),  py::arg("mm"),  py::arg("dd"),  py::arg("hh"),  py::arg("mn"),  py::arg("ss"))
        .def_static("CDate_s",
                    (Standard_Integer (*)( const Standard_CString , const Standard_CString ) ) static_cast<Standard_Integer (*)( const Standard_CString , const Standard_CString ) >(&Interface_MSG::CDate),
                    R"#(Returns a value about comparison of two dates 0 : equal. <0 text1 anterior. >0 text1 posterior)#"  , py::arg("text1"),  py::arg("text2"))
        .def_static("Blanks_s",
                    (Standard_CString (*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_CString (*)( const Standard_Integer , const Standard_Integer ) >(&Interface_MSG::Blanks),
                    R"#(Returns a blank string, of length between 0 and <max>, to fill the printing of a numeric value <val>, i.e. : If val < 10 , max-1 blanks If val between 10 and 99, max-2 blanks ... etc...)#"  , py::arg("val"),  py::arg("max"))
        .def_static("Blanks_s",
                    (Standard_CString (*)( const Standard_CString , const Standard_Integer ) ) static_cast<Standard_CString (*)( const Standard_CString , const Standard_Integer ) >(&Interface_MSG::Blanks),
                    R"#(Returns a blank string, to complete a given string <val> up to <max> characters : If strlen(val) is 0, max blanks If strlen(val) is 5, max-5 blanks etc...)#"  , py::arg("val"),  py::arg("max"))
        .def_static("Blanks_s",
                    (Standard_CString (*)( const Standard_Integer ) ) static_cast<Standard_CString (*)( const Standard_Integer ) >(&Interface_MSG::Blanks),
                    R"#(Returns a blank string of <count> blanks (mini 0, maxi 76))#"  , py::arg("count"))
        .def_static("Print_s",
                    (void (*)( std::ostream & , const Standard_CString , const Standard_Integer , const Standard_Integer ) ) static_cast<void (*)( std::ostream & , const Standard_CString , const Standard_Integer , const Standard_Integer ) >(&Interface_MSG::Print),
                    R"#(Prints a String on an Output Stream, as follows : Accompagned with blanks, to give up to <max> charis at all, justified according just : -1 (D) : left 0 : center 1 : right Maximum 76 characters)#"  , py::arg("S"),  py::arg("val"),  py::arg("max"),  py::arg("just")=static_cast<const Standard_Integer>(- 1))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Interface_MapAsciiStringHasher , shared_ptr<Interface_MapAsciiStringHasher>>(m,"Interface_MapAsciiStringHasher");

    static_cast<py::class_<Interface_MapAsciiStringHasher , shared_ptr<Interface_MapAsciiStringHasher> >>(m.attr("Interface_MapAsciiStringHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const TCollection_AsciiString & , Standard_Integer ) ) static_cast<Standard_Integer (*)( const TCollection_AsciiString & , Standard_Integer ) >(&Interface_MapAsciiStringHasher::HashCode),
                    R"#(Computes a hash code for the given ASCII string, in the range [1, theUpperBound])#"  , py::arg("theAsciiString"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const TCollection_AsciiString & , const TCollection_AsciiString & ) ) static_cast<Standard_Boolean (*)( const TCollection_AsciiString & , const TCollection_AsciiString & ) >(&Interface_MapAsciiStringHasher::IsEqual),
                    R"#(None)#"  , py::arg("K1"),  py::arg("K2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_NodeOfGeneralLib ,opencascade::handle<Interface_NodeOfGeneralLib> , Standard_Transient>>(m.attr("Interface_NodeOfGeneralLib"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddNode",
             (void (Interface_NodeOfGeneralLib::*)( const opencascade::handle<Interface_GlobalNodeOfGeneralLib> & ) ) static_cast<void (Interface_NodeOfGeneralLib::*)( const opencascade::handle<Interface_GlobalNodeOfGeneralLib> & ) >(&Interface_NodeOfGeneralLib::AddNode),
             R"#(Adds a couple (Module,Protocol), that is, stores it into itself if not yet done, else creates a Next Node to do it)#"  , py::arg("anode"))
        .def("Module",
             (const opencascade::handle<Interface_GeneralModule> & (Interface_NodeOfGeneralLib::*)() const) static_cast<const opencascade::handle<Interface_GeneralModule> & (Interface_NodeOfGeneralLib::*)() const>(&Interface_NodeOfGeneralLib::Module),
             R"#(Returns the Module designated by a precise Node)#" )
        .def("Protocol",
             (const opencascade::handle<Interface_Protocol> & (Interface_NodeOfGeneralLib::*)() const) static_cast<const opencascade::handle<Interface_Protocol> & (Interface_NodeOfGeneralLib::*)() const>(&Interface_NodeOfGeneralLib::Protocol),
             R"#(Returns the Protocol designated by a precise Node)#" )
        .def("Next",
             (const opencascade::handle<Interface_NodeOfGeneralLib> & (Interface_NodeOfGeneralLib::*)() const) static_cast<const opencascade::handle<Interface_NodeOfGeneralLib> & (Interface_NodeOfGeneralLib::*)() const>(&Interface_NodeOfGeneralLib::Next),
             R"#(Returns the Next Node. If none was defined, returned value is a Null Handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_NodeOfGeneralLib::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_NodeOfGeneralLib::*)() const>(&Interface_NodeOfGeneralLib::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_NodeOfGeneralLib::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_NodeOfGeneralLib::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_NodeOfReaderLib ,opencascade::handle<Interface_NodeOfReaderLib> , Standard_Transient>>(m.attr("Interface_NodeOfReaderLib"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddNode",
             (void (Interface_NodeOfReaderLib::*)( const opencascade::handle<Interface_GlobalNodeOfReaderLib> & ) ) static_cast<void (Interface_NodeOfReaderLib::*)( const opencascade::handle<Interface_GlobalNodeOfReaderLib> & ) >(&Interface_NodeOfReaderLib::AddNode),
             R"#(Adds a couple (Module,Protocol), that is, stores it into itself if not yet done, else creates a Next Node to do it)#"  , py::arg("anode"))
        .def("Module",
             (const opencascade::handle<Interface_ReaderModule> & (Interface_NodeOfReaderLib::*)() const) static_cast<const opencascade::handle<Interface_ReaderModule> & (Interface_NodeOfReaderLib::*)() const>(&Interface_NodeOfReaderLib::Module),
             R"#(Returns the Module designated by a precise Node)#" )
        .def("Protocol",
             (const opencascade::handle<Interface_Protocol> & (Interface_NodeOfReaderLib::*)() const) static_cast<const opencascade::handle<Interface_Protocol> & (Interface_NodeOfReaderLib::*)() const>(&Interface_NodeOfReaderLib::Protocol),
             R"#(Returns the Protocol designated by a precise Node)#" )
        .def("Next",
             (const opencascade::handle<Interface_NodeOfReaderLib> & (Interface_NodeOfReaderLib::*)() const) static_cast<const opencascade::handle<Interface_NodeOfReaderLib> & (Interface_NodeOfReaderLib::*)() const>(&Interface_NodeOfReaderLib::Next),
             R"#(Returns the Next Node. If none was defined, returned value is a Null Handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_NodeOfReaderLib::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_NodeOfReaderLib::*)() const>(&Interface_NodeOfReaderLib::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_NodeOfReaderLib::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_NodeOfReaderLib::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_ParamList ,opencascade::handle<Interface_ParamList> , Standard_Transient>>(m.attr("Interface_ParamList"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("theIncrement")=static_cast<const Standard_Integer>(256) )
    // custom constructors
    // methods
        .def("Length",
             (Standard_Integer (Interface_ParamList::*)() const) static_cast<Standard_Integer (Interface_ParamList::*)() const>(&Interface_ParamList::Length),
             R"#(Returns the number of elements of <me>.)#" )
        .def("Lower",
             (Standard_Integer (Interface_ParamList::*)() const) static_cast<Standard_Integer (Interface_ParamList::*)() const>(&Interface_ParamList::Lower),
             R"#(Returns the lower bound. Warning)#" )
        .def("Upper",
             (Standard_Integer (Interface_ParamList::*)() const) static_cast<Standard_Integer (Interface_ParamList::*)() const>(&Interface_ParamList::Upper),
             R"#(Returns the upper bound. Warning)#" )
        .def("SetValue",
             (void (Interface_ParamList::*)( const Standard_Integer , const Interface_FileParameter & ) ) static_cast<void (Interface_ParamList::*)( const Standard_Integer , const Interface_FileParameter & ) >(&Interface_ParamList::SetValue),
             R"#(Assigns the value <Value> to the <Index>-th item of this array.)#"  , py::arg("Index"),  py::arg("Value"))
        .def("Value",
             (const Interface_FileParameter & (Interface_ParamList::*)( const Standard_Integer ) const) static_cast<const Interface_FileParameter & (Interface_ParamList::*)( const Standard_Integer ) const>(&Interface_ParamList::Value),
             R"#(Return the value of the <Index>th element of the array.)#"  , py::arg("Index"))
        .def("ChangeValue",
             (Interface_FileParameter & (Interface_ParamList::*)( const Standard_Integer ) ) static_cast<Interface_FileParameter & (Interface_ParamList::*)( const Standard_Integer ) >(&Interface_ParamList::ChangeValue),
             R"#(return the value of the <Index>th element of the array.)#"  , py::arg("Index"))
        .def("Clear",
             (void (Interface_ParamList::*)() ) static_cast<void (Interface_ParamList::*)() >(&Interface_ParamList::Clear),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_ParamList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_ParamList::*)() const>(&Interface_ParamList::DynamicType),
             R"#(None)#" )
        .def("Length",
             (Standard_Integer (Interface_ParamList::*)() const) static_cast<Standard_Integer (Interface_ParamList::*)() const>(&Interface_ParamList::Length),
             R"#(Returns the number of elements of <me>.)#" )
        .def("Lower",
             (Standard_Integer (Interface_ParamList::*)() const) static_cast<Standard_Integer (Interface_ParamList::*)() const>(&Interface_ParamList::Lower),
             R"#(Returns the lower bound. Warning)#" )
        .def("Upper",
             (Standard_Integer (Interface_ParamList::*)() const) static_cast<Standard_Integer (Interface_ParamList::*)() const>(&Interface_ParamList::Upper),
             R"#(Returns the upper bound. Warning)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_ParamList::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_ParamList::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_ParamSet ,opencascade::handle<Interface_ParamSet> , Standard_Transient>>(m.attr("Interface_ParamSet"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("nres"),  py::arg("nst")=static_cast<const Standard_Integer>(1) )
    // custom constructors
    // methods
        .def("Append",
             (Standard_Integer (Interface_ParamSet::*)( const Standard_CString , const Standard_Integer , const Interface_ParamType , const Standard_Integer ) ) static_cast<Standard_Integer (Interface_ParamSet::*)( const Standard_CString , const Standard_Integer , const Interface_ParamType , const Standard_Integer ) >(&Interface_ParamSet::Append),
             R"#(Adds a parameter defined as its Value (CString and length) and Type. Optionnal EntityNumber (for FileReaderData) can be given Allows a better memory management than Appending a complete FileParameter If <lnval> < 0, <val> is assumed to be managed elsewhere : its adress is stored as such. Else, <val> is copied in a locally (quickly) managed Page of Characters Returns new count of recorded Parameters)#"  , py::arg("val"),  py::arg("lnval"),  py::arg("typ"),  py::arg("nument"))
        .def("Append",
             (Standard_Integer (Interface_ParamSet::*)( const Interface_FileParameter & ) ) static_cast<Standard_Integer (Interface_ParamSet::*)( const Interface_FileParameter & ) >(&Interface_ParamSet::Append),
             R"#(Adds a parameter at the end of the ParamSet (transparent about reservation and "Next") Returns new count of recorded Parameters)#"  , py::arg("FP"))
        .def("NbParams",
             (Standard_Integer (Interface_ParamSet::*)() const) static_cast<Standard_Integer (Interface_ParamSet::*)() const>(&Interface_ParamSet::NbParams),
             R"#(Returns the total count of parameters (including nexts))#" )
        .def("Param",
             (const Interface_FileParameter & (Interface_ParamSet::*)( const Standard_Integer ) const) static_cast<const Interface_FileParameter & (Interface_ParamSet::*)( const Standard_Integer ) const>(&Interface_ParamSet::Param),
             R"#(Returns a parameter identified by its number)#"  , py::arg("num"))
        .def("ChangeParam",
             (Interface_FileParameter & (Interface_ParamSet::*)( const Standard_Integer ) ) static_cast<Interface_FileParameter & (Interface_ParamSet::*)( const Standard_Integer ) >(&Interface_ParamSet::ChangeParam),
             R"#(Same as above, but in order to be modified on place)#"  , py::arg("num"))
        .def("SetParam",
             (void (Interface_ParamSet::*)( const Standard_Integer , const Interface_FileParameter & ) ) static_cast<void (Interface_ParamSet::*)( const Standard_Integer , const Interface_FileParameter & ) >(&Interface_ParamSet::SetParam),
             R"#(Changes a parameter identified by its number)#"  , py::arg("num"),  py::arg("FP"))
        .def("Params",
             (opencascade::handle<Interface_ParamList> (Interface_ParamSet::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<Interface_ParamList> (Interface_ParamSet::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_ParamSet::Params),
             R"#(Builds and returns the sub-list correspinding to parameters, from "num" included, with count "nb" If <num> and <nb> are zero, returns the whole list)#"  , py::arg("num"),  py::arg("nb"))
        .def("Destroy",
             (void (Interface_ParamSet::*)() ) static_cast<void (Interface_ParamSet::*)() >(&Interface_ParamSet::Destroy),
             R"#(Destructor (waiting for transparent memory management))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_ParamSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_ParamSet::*)() const>(&Interface_ParamSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_ParamSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_ParamSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_Protocol ,opencascade::handle<Interface_Protocol>,Py_Interface_Protocol , Standard_Transient>>(m.attr("Interface_Protocol"))
    // constructors
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (Interface_Protocol::*)() const) static_cast<Standard_Integer (Interface_Protocol::*)() const>(&Interface_Protocol::NbResources),
             R"#(Returns count of Protocol used as Resources (level one))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (Interface_Protocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_Protocol> (Interface_Protocol::*)( const Standard_Integer ) const>(&Interface_Protocol::Resource),
             R"#(Returns a Resource, given its rank (between 1 and NbResources))#"  , py::arg("num"))
        .def("CaseNumber",
             (Standard_Integer (Interface_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (Interface_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_Protocol::CaseNumber),
             R"#(Returns a unique positive CaseNumber for each Recognized Object. By default, recognition is based on Type(1) By default, calls the following one which is deferred.)#"  , py::arg("obj"))
        .def("IsDynamicType",
             (Standard_Boolean (Interface_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_Protocol::IsDynamicType),
             R"#(Returns True if type of <obj> is that defined from CDL This is the default but it may change according implementation)#"  , py::arg("obj"))
        .def("NbTypes",
             (Standard_Integer (Interface_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (Interface_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_Protocol::NbTypes),
             R"#(Returns the count of DISTINCT types under which an entity may be processed. Each one is candidate to be recognized by TypeNumber, <obj> is then processed according it By default, returns 1 (the DynamicType))#"  , py::arg("obj"))
        .def("Type",
             (opencascade::handle<Standard_Type> (Interface_Protocol::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer ) const) static_cast<opencascade::handle<Standard_Type> (Interface_Protocol::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer ) const>(&Interface_Protocol::Type),
             R"#(Returns a type under which <obj> can be recognized and processed, according its rank in its definition list (see NbTypes). By default, returns DynamicType)#"  , py::arg("obj"),  py::arg("nt")=static_cast<const Standard_Integer>(1))
        .def("TypeNumber",
             (Standard_Integer (Interface_Protocol::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (Interface_Protocol::*)( const opencascade::handle<Standard_Type> & ) const>(&Interface_Protocol::TypeNumber),
             R"#(Returns a unique positive CaseNumber for each Recognized Type, Returns Zero for "<type> not recognized")#"  , py::arg("atype"))
        .def("GlobalCheck",
             (Standard_Boolean (Interface_Protocol::*)( const Interface_Graph & , opencascade::handle<Interface_Check> & ) const) static_cast<Standard_Boolean (Interface_Protocol::*)( const Interface_Graph & , opencascade::handle<Interface_Check> & ) const>(&Interface_Protocol::GlobalCheck),
             R"#(Evaluates a Global Check for a model (with its Graph) Returns True when done, False if data in model do not apply)#"  , py::arg("G"),  py::arg("ach"))
        .def("NewModel",
             (opencascade::handle<Interface_InterfaceModel> (Interface_Protocol::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Interface_Protocol::*)() const>(&Interface_Protocol::NewModel),
             R"#(Creates an empty Model of the considered Norm)#" )
        .def("IsSuitableModel",
             (Standard_Boolean (Interface_Protocol::*)( const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (Interface_Protocol::*)( const opencascade::handle<Interface_InterfaceModel> & ) const>(&Interface_Protocol::IsSuitableModel),
             R"#(Returns True if <model> is a Model of the considered Norm)#"  , py::arg("model"))
        .def("UnknownEntity",
             (opencascade::handle<Standard_Transient> (Interface_Protocol::*)() const) static_cast<opencascade::handle<Standard_Transient> (Interface_Protocol::*)() const>(&Interface_Protocol::UnknownEntity),
             R"#(Creates a new Unknown Entity for the considered Norm)#" )
        .def("IsUnknownEntity",
             (Standard_Boolean (Interface_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_Protocol::IsUnknownEntity),
             R"#(Returns True if <ent> is an Unknown Entity for the Norm, i.e. same Type as them created by method UnknownEntity (for an Entity out of the Norm, answer can be unpredicable))#"  , py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_Protocol::*)() const>(&Interface_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Active_s",
                    (opencascade::handle<Interface_Protocol> (*)() ) static_cast<opencascade::handle<Interface_Protocol> (*)() >(&Interface_Protocol::Active),
                    R"#(Returns the Active Protocol, if defined (else, returns a Null Handle, which means "no defined active protocol"))#" )
        .def_static("SetActive_s",
                    (void (*)( const opencascade::handle<Interface_Protocol> & ) ) static_cast<void (*)( const opencascade::handle<Interface_Protocol> & ) >(&Interface_Protocol::SetActive),
                    R"#(Sets a given Protocol to be the Active one (for the users of Active, see just above). Applies to every sub-type of Protocol)#"  , py::arg("aprotocol"))
        .def_static("ClearActive_s",
                    (void (*)() ) static_cast<void (*)() >(&Interface_Protocol::ClearActive),
                    R"#(Erases the Active Protocol (hence it becomes undefined))#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_Protocol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_Protocol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_ReaderLib , shared_ptr<Interface_ReaderLib> >>(m.attr("Interface_ReaderLib"))
    // constructors
        .def(py::init< const opencascade::handle<Interface_Protocol> & >()  , py::arg("aprotocol") )
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddProtocol",
             (void (Interface_ReaderLib::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_ReaderLib::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_ReaderLib::AddProtocol),
             R"#(Adds a couple (Module-Protocol) to the Library, given the class of a Protocol. Takes Resources into account. (if <aprotocol> is not of type TheProtocol, it is not added))#"  , py::arg("aprotocol"))
        .def("Clear",
             (void (Interface_ReaderLib::*)() ) static_cast<void (Interface_ReaderLib::*)() >(&Interface_ReaderLib::Clear),
             R"#(Clears the list of Modules of a library (can be used to redefine the order of Modules before action : Clear then refill the Library by calls to AddProtocol))#" )
        .def("SetComplete",
             (void (Interface_ReaderLib::*)() ) static_cast<void (Interface_ReaderLib::*)() >(&Interface_ReaderLib::SetComplete),
             R"#(Sets a library to be defined with the complete Global list (all the couples Protocol/Modules recorded in it))#" )
        .def("Select",
             (Standard_Boolean (Interface_ReaderLib::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_ReaderModule> & , Standard_Integer & ) const) static_cast<Standard_Boolean (Interface_ReaderLib::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_ReaderModule> & , Standard_Integer & ) const>(&Interface_ReaderLib::Select),
             R"#(Selects a Module from the Library, given an Object. Returns True if Select has succeeded, False else. Also Returns (as arguments) the selected Module and the Case Number determined by the associated Protocol. If Select has failed, <module> is Null Handle and CN is zero. (Select can work on any criterium, such as Object DynamicType))#"  , py::arg("obj"),  py::arg("module"),  py::arg("CN"))
        .def("Start",
             (void (Interface_ReaderLib::*)() ) static_cast<void (Interface_ReaderLib::*)() >(&Interface_ReaderLib::Start),
             R"#(Starts Iteration on the Modules (sets it on the first one))#" )
        .def("More",
             (Standard_Boolean (Interface_ReaderLib::*)() const) static_cast<Standard_Boolean (Interface_ReaderLib::*)() const>(&Interface_ReaderLib::More),
             R"#(Returns True if there are more Modules to iterate on)#" )
        .def("Next",
             (void (Interface_ReaderLib::*)() ) static_cast<void (Interface_ReaderLib::*)() >(&Interface_ReaderLib::Next),
             R"#(Iterates by getting the next Module in the list If there is none, the exception will be raised by Value)#" )
        .def("Module",
             (const opencascade::handle<Interface_ReaderModule> & (Interface_ReaderLib::*)() const) static_cast<const opencascade::handle<Interface_ReaderModule> & (Interface_ReaderLib::*)() const>(&Interface_ReaderLib::Module),
             R"#(Returns the current Module in the Iteration)#" )
        .def("Protocol",
             (const opencascade::handle<Interface_Protocol> & (Interface_ReaderLib::*)() const) static_cast<const opencascade::handle<Interface_Protocol> & (Interface_ReaderLib::*)() const>(&Interface_ReaderLib::Protocol),
             R"#(Returns the current Protocol in the Iteration)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("SetGlobal_s",
                    (void (*)( const opencascade::handle<Interface_ReaderModule> & , const opencascade::handle<Interface_Protocol> & ) ) static_cast<void (*)( const opencascade::handle<Interface_ReaderModule> & , const opencascade::handle<Interface_Protocol> & ) >(&Interface_ReaderLib::SetGlobal),
                    R"#(Adds a couple (Module-Protocol) into the global definition set for this class of Library.)#"  , py::arg("amodule"),  py::arg("aprotocol"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_ReaderModule ,opencascade::handle<Interface_ReaderModule>,Py_Interface_ReaderModule , Standard_Transient>>(m.attr("Interface_ReaderModule"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (Interface_ReaderModule::*)( const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer ) const) static_cast<Standard_Integer (Interface_ReaderModule::*)( const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer ) const>(&Interface_ReaderModule::CaseNum),
             R"#(Translates the type of record <num> in <data> to a positive Case Number. If Recognition fails, must return 0)#"  , py::arg("data"),  py::arg("num"))
        .def("Read",
             (void (Interface_ReaderModule::*)( const Standard_Integer , const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<Standard_Transient> & ) const) static_cast<void (Interface_ReaderModule::*)( const Standard_Integer , const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<Standard_Transient> & ) const>(&Interface_ReaderModule::Read),
             R"#(Performs the effective loading from <data>, record <num>, to the Entity <ent> formerly created In case of Error or Warning, fills <ach> with messages Remark that the Case Number comes from translating a record)#"  , py::arg("casenum"),  py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("NewRead",
             (Standard_Boolean (Interface_ReaderModule::*)( const Standard_Integer , const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_ReaderModule::*)( const Standard_Integer , const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) const>(&Interface_ReaderModule::NewRead),
             R"#(Specific operator (create+read) defaulted to do nothing. It can be redefined when it is not possible to work in two steps (NewVoid then Read). This occurs when no default constructor is defined : hence the result <ent> must be created with an effective definition from the reader. Remark : if NewRead is defined, Copy has nothing to do.)#"  , py::arg("casenum"),  py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_ReaderModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_ReaderModule::*)() const>(&Interface_ReaderModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_ReaderModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_ReaderModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_ReportEntity ,opencascade::handle<Interface_ReportEntity> , Standard_Transient>>(m.attr("Interface_ReportEntity"))
    // constructors
        .def(py::init< const opencascade::handle<Standard_Transient> & >()  , py::arg("unknown") )
        .def(py::init< const opencascade::handle<Interface_Check> &,const opencascade::handle<Standard_Transient> & >()  , py::arg("acheck"),  py::arg("concerned") )
    // custom constructors
    // methods
        .def("SetContent",
             (void (Interface_ReportEntity::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_ReportEntity::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_ReportEntity::SetContent),
             R"#(Sets a Content : it brings non interpreted data which belong to the Concerned Entity. It can be empty then loaded later. Remark that for an Unknown Entity, Content is set by Create.)#"  , py::arg("content"))
        .def("Check",
             (const opencascade::handle<Interface_Check> & (Interface_ReportEntity::*)() const) static_cast<const opencascade::handle<Interface_Check> & (Interface_ReportEntity::*)() const>(&Interface_ReportEntity::Check),
             R"#(Returns the stored Check)#" )
        .def("CCheck",
             (opencascade::handle<Interface_Check> & (Interface_ReportEntity::*)() ) static_cast<opencascade::handle<Interface_Check> & (Interface_ReportEntity::*)() >(&Interface_ReportEntity::CCheck),
             R"#(Returns the stored Check in order to change it)#" )
        .def("Concerned",
             (opencascade::handle<Standard_Transient> (Interface_ReportEntity::*)() const) static_cast<opencascade::handle<Standard_Transient> (Interface_ReportEntity::*)() const>(&Interface_ReportEntity::Concerned),
             R"#(Returns the stored Concerned Entity. It equates the Content in the case of an Unknown Entity)#" )
        .def("HasContent",
             (Standard_Boolean (Interface_ReportEntity::*)() const) static_cast<Standard_Boolean (Interface_ReportEntity::*)() const>(&Interface_ReportEntity::HasContent),
             R"#(Returns True if a Content is stored (it can equate Concerned))#" )
        .def("HasNewContent",
             (Standard_Boolean (Interface_ReportEntity::*)() const) static_cast<Standard_Boolean (Interface_ReportEntity::*)() const>(&Interface_ReportEntity::HasNewContent),
             R"#(Returns True if a Content is stored AND differs from Concerned (i.e. redefines content) : used when Concerned could not be loaded)#" )
        .def("Content",
             (opencascade::handle<Standard_Transient> (Interface_ReportEntity::*)() const) static_cast<opencascade::handle<Standard_Transient> (Interface_ReportEntity::*)() const>(&Interface_ReportEntity::Content),
             R"#(Returns the stored Content, or a Null Handle Remark that it must be an "Unknown Entity" suitable for the norm of the containing Model)#" )
        .def("IsError",
             (Standard_Boolean (Interface_ReportEntity::*)() const) static_cast<Standard_Boolean (Interface_ReportEntity::*)() const>(&Interface_ReportEntity::IsError),
             R"#(Returns True for an Error Entity, i.e. if the Check brings at least one Fail message)#" )
        .def("IsUnknown",
             (Standard_Boolean (Interface_ReportEntity::*)() const) static_cast<Standard_Boolean (Interface_ReportEntity::*)() const>(&Interface_ReportEntity::IsUnknown),
             R"#(Returns True for an Unknown Entity, i,e. if the Check is empty and Concerned equates Content)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_ReportEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_ReportEntity::*)() const>(&Interface_ReportEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_ReportEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_ReportEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_STAT , shared_ptr<Interface_STAT> >>(m.attr("Interface_STAT"))
    // constructors
        .def(py::init< const Standard_CString >()  , py::arg("title")=static_cast<const Standard_CString>("") )
        .def(py::init< const Interface_STAT & >()  , py::arg("other") )
    // custom constructors
    // methods
        .def("AddPhase",
             (void (Interface_STAT::*)( const Standard_Real , const Standard_CString ) ) static_cast<void (Interface_STAT::*)( const Standard_Real , const Standard_CString ) >(&Interface_STAT::AddPhase),
             R"#(Adds a new phase to the description. The first one after Create replaces the default unique one)#"  , py::arg("weight"),  py::arg("name")=static_cast<const Standard_CString>(""))
        .def("AddStep",
             (void (Interface_STAT::*)( const Standard_Real ) ) static_cast<void (Interface_STAT::*)( const Standard_Real ) >(&Interface_STAT::AddStep),
             R"#(Adds a new step for the last added phase, the default unique one if no AddPhase has already been added Warning : AddStep before the first AddPhase are cancelled)#"  , py::arg("weight")=static_cast<const Standard_Real>(1))
        .def("Step",
             (Standard_Real (Interface_STAT::*)( const Standard_Integer ) const) static_cast<Standard_Real (Interface_STAT::*)( const Standard_Integer ) const>(&Interface_STAT::Step),
             R"#(Returns weight of a Step, related to the cumul given for the phase. <num> is given by <n0step> + i, i between 1 and <nbsteps> (default gives n0step < 0 then weight is one))#"  , py::arg("num"))
        .def("Start",
             (void (Interface_STAT::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<void (Interface_STAT::*)( const Standard_Integer , const Standard_Integer ) const>(&Interface_STAT::Start),
             R"#(Starts a STAT on its first phase (or its default one) <items> gives the total count of items, <cycles> the count of cycles If <cycles> is more than one, the first Cycle must then be started by NextCycle (NextStep/NextItem are ignored). If it is one, NextItem/NextStep can then be called)#"  , py::arg("items"),  py::arg("cycles")=static_cast<const Standard_Integer>(1))
    // methods using call by reference i.s.o. return
        .def("Internals",
             []( Interface_STAT &self , opencascade::handle<TCollection_HAsciiString> & tit,opencascade::handle<TColStd_HSequenceOfAsciiString> & phn,opencascade::handle<TColStd_HSequenceOfReal> & phw,opencascade::handle<TColStd_HSequenceOfInteger> & phdeb,opencascade::handle<TColStd_HSequenceOfInteger> & phfin,opencascade::handle<TColStd_HSequenceOfReal> & stw ){ Standard_Real  total; self.Internals(tit,total,phn,phw,phdeb,phfin,stw); return std::make_tuple(total); },
             R"#(Returns fields in once, without copying them, used for copy when starting)#"  , py::arg("tit"),  py::arg("phn"),  py::arg("phw"),  py::arg("phdeb"),  py::arg("phfin"),  py::arg("stw"))
    // static methods
        .def_static("StartCount_s",
                    (void (*)( const Standard_Integer , const Standard_CString ) ) static_cast<void (*)( const Standard_Integer , const Standard_CString ) >(&Interface_STAT::StartCount),
                    R"#(Starts a default STAT, with no phase, no step, ready to just count items. <items> gives the total count of items Hence, NextItem is available to directly count)#"  , py::arg("items"),  py::arg("title")=static_cast<const Standard_CString>(""))
        .def_static("NextPhase_s",
                    (void (*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (*)( const Standard_Integer , const Standard_Integer ) >(&Interface_STAT::NextPhase),
                    R"#(Commands to resume the preceeding phase and start a new one <items> and <cycles> as for Start, but for this new phase Ignored if count of phases is already passed If <cycles> is more than one, the first Cycle must then be started by NextCycle (NextStep/NextItem are ignored). If it is one, NextItem/NextStep can then be called)#"  , py::arg("items"),  py::arg("cycles")=static_cast<const Standard_Integer>(1))
        .def_static("SetPhase_s",
                    (void (*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (*)( const Standard_Integer , const Standard_Integer ) >(&Interface_STAT::SetPhase),
                    R"#(Changes the parameters of the phase to start To be used before first counting (i.e. just after NextPhase) Can be used by an operator which has to reajust counts on run)#"  , py::arg("items"),  py::arg("cycles")=static_cast<const Standard_Integer>(1))
        .def_static("NextCycle_s",
                    (void (*)( const Standard_Integer ) ) static_cast<void (*)( const Standard_Integer ) >(&Interface_STAT::NextCycle),
                    R"#(Commands to resume the preceeding cycle and start a new one, with a count of items Ignored if count of cycles is already passed Then, first step is started (or default one) NextItem can be called for the first step, or NextStep to pass to the next one)#"  , py::arg("items"))
        .def_static("NextStep_s",
                    (void (*)() ) static_cast<void (*)() >(&Interface_STAT::NextStep),
                    R"#(Commands to resume the preceeding step of the cycle Ignored if count of steps is already passed NextItem can be called for this step, NextStep passes to next)#" )
        .def_static("NextItem_s",
                    (void (*)( const Standard_Integer ) ) static_cast<void (*)( const Standard_Integer ) >(&Interface_STAT::NextItem),
                    R"#(Commands to add an item in the current step of the current cycle of the current phase By default, one item per call, can be overpassed Ignored if count of items of this cycle is already passed)#"  , py::arg("nbitems")=static_cast<const Standard_Integer>(1))
        .def_static("End_s",
                    (void (*)() ) static_cast<void (*)() >(&Interface_STAT::End),
                    R"#(Commands to declare the process ended (hence, advancement is forced to 100 %))#" )
        .def_static("Where_s",
                    (Standard_CString (*)( const Standard_Boolean ) ) static_cast<Standard_CString (*)( const Standard_Boolean ) >(&Interface_STAT::Where),
                    R"#(Returns an identification of the STAT : <phase> True (D) : the name of the current phase <phase> False : the title of the current STAT)#"  , py::arg("phase")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Percent_s",
                    (Standard_Integer (*)( const Standard_Boolean ) ) static_cast<Standard_Integer (*)( const Standard_Boolean ) >(&Interface_STAT::Percent),
                    R"#(Returns the advancement as a percentage : <phase> True : inside the current phase <phase> False (D) : relative to the whole process)#"  , py::arg("phase")=static_cast<const Standard_Boolean>(Standard_False))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_ShareFlags , shared_ptr<Interface_ShareFlags> >>(m.attr("Interface_ShareFlags"))
    // constructors
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const Interface_GeneralLib & >()  , py::arg("amodel"),  py::arg("lib") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Interface_GTool> & >()  , py::arg("amodel"),  py::arg("gtool") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Interface_Protocol> & >()  , py::arg("amodel"),  py::arg("protocol") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> & >()  , py::arg("amodel") )
        .def(py::init< const Interface_Graph & >()  , py::arg("agraph") )
    // custom constructors
    // methods
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (Interface_ShareFlags::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Interface_ShareFlags::*)() const>(&Interface_ShareFlags::Model),
             R"#(Returns the Model used for the evaluation)#" )
        .def("IsShared",
             (Standard_Boolean (Interface_ShareFlags::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_ShareFlags::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_ShareFlags::IsShared),
             R"#(Returns True if <ent> is Shared by one or more other Entity(ies) of the Model)#"  , py::arg("ent"))
        .def("RootEntities",
             (Interface_EntityIterator (Interface_ShareFlags::*)() const) static_cast<Interface_EntityIterator (Interface_ShareFlags::*)() const>(&Interface_ShareFlags::RootEntities),
             R"#(Returns the Entities which are not Shared (see their flags))#" )
        .def("NbRoots",
             (Standard_Integer (Interface_ShareFlags::*)() const) static_cast<Standard_Integer (Interface_ShareFlags::*)() const>(&Interface_ShareFlags::NbRoots),
             R"#(Returns the count of root entities)#" )
        .def("Root",
             (opencascade::handle<Standard_Transient> (Interface_ShareFlags::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Standard_Transient> (Interface_ShareFlags::*)( const Standard_Integer ) const>(&Interface_ShareFlags::Root),
             R"#(Returns a root entity according its rank in the list of roots By default, it returns the first one)#"  , py::arg("num")=static_cast<const Standard_Integer>(1))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_ShareTool , shared_ptr<Interface_ShareTool> >>(m.attr("Interface_ShareTool"))
    // constructors
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const Interface_GeneralLib & >()  , py::arg("amodel"),  py::arg("lib") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Interface_GTool> & >()  , py::arg("amodel"),  py::arg("gtool") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Interface_Protocol> & >()  , py::arg("amodel"),  py::arg("protocol") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> & >()  , py::arg("amodel") )
        .def(py::init< const Interface_Graph & >()  , py::arg("agraph") )
        .def(py::init< const opencascade::handle<Interface_HGraph> & >()  , py::arg("ahgraph") )
    // custom constructors
    // methods
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (Interface_ShareTool::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Interface_ShareTool::*)() const>(&Interface_ShareTool::Model),
             R"#(Returns the Model used for Creation (directly or for Graph))#" )
        .def("Graph",
             (const Interface_Graph & (Interface_ShareTool::*)() const) static_cast<const Interface_Graph & (Interface_ShareTool::*)() const>(&Interface_ShareTool::Graph),
             R"#(Returns the data used by the ShareTool to work Can then be used directly (read only))#" )
        .def("RootEntities",
             (Interface_EntityIterator (Interface_ShareTool::*)() const) static_cast<Interface_EntityIterator (Interface_ShareTool::*)() const>(&Interface_ShareTool::RootEntities),
             R"#(Returns the Entities which are not Shared (their Sharing List is empty) in the Model)#" )
        .def("IsShared",
             (Standard_Boolean (Interface_ShareTool::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_ShareTool::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_ShareTool::IsShared),
             R"#(Returns True if <ent> is Shared by other Entities in the Model)#"  , py::arg("ent"))
        .def("Shareds",
             (Interface_EntityIterator (Interface_ShareTool::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Interface_EntityIterator (Interface_ShareTool::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_ShareTool::Shareds),
             R"#(Returns the List of Entities Shared by a given Entity <ent>)#"  , py::arg("ent"))
        .def("Sharings",
             (Interface_EntityIterator (Interface_ShareTool::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Interface_EntityIterator (Interface_ShareTool::*)( const opencascade::handle<Standard_Transient> & ) const>(&Interface_ShareTool::Sharings),
             R"#(Returns the List of Entities Sharing a given Entity <ent>)#"  , py::arg("ent"))
        .def("NbTypedSharings",
             (Standard_Integer (Interface_ShareTool::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (Interface_ShareTool::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Type> & ) const>(&Interface_ShareTool::NbTypedSharings),
             R"#(Returns the count of Sharing Entities of an Entity, which are Kind of a given Type)#"  , py::arg("ent"),  py::arg("atype"))
        .def("TypedSharing",
             (opencascade::handle<Standard_Transient> (Interface_ShareTool::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Type> & ) const) static_cast<opencascade::handle<Standard_Transient> (Interface_ShareTool::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Type> & ) const>(&Interface_ShareTool::TypedSharing),
             R"#(Returns the Sharing Entity of an Entity, which is Kind of a given Type. Allows to access a Sharing Entity of a given type when there is one and only one (current case))#"  , py::arg("ent"),  py::arg("atype"))
        .def("All",
             (Interface_EntityIterator (Interface_ShareTool::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) const) static_cast<Interface_EntityIterator (Interface_ShareTool::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) const>(&Interface_ShareTool::All),
             R"#(Returns the complete list of entities shared by <ent> at any level, including <ent> itself If <ent> is the Model, considers the concatenation of AllShared for each root If <rootlast> is True (D), the list starts with lower level entities and ends by the root. Else, the root is first and the lower level entities are at end)#"  , py::arg("ent"),  py::arg("rootlast")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Print",
             (void (Interface_ShareTool::*)( const Interface_EntityIterator & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (Interface_ShareTool::*)( const Interface_EntityIterator & , const opencascade::handle<Message_Messenger> & ) const>(&Interface_ShareTool::Print),
             R"#(Utility method which Prints the content of an iterator (by their Numbers))#"  , py::arg("iter"),  py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_SignLabel ,opencascade::handle<Interface_SignLabel> >>(m.attr("Interface_SignLabel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Name",
             (Standard_CString (Interface_SignLabel::*)() const) static_cast<Standard_CString (Interface_SignLabel::*)() const>(&Interface_SignLabel::Name),
             R"#(Returns "Entity Label")#" )
        .def("Text",
             (TCollection_AsciiString (Interface_SignLabel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) const) static_cast<TCollection_AsciiString (Interface_SignLabel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) const>(&Interface_SignLabel::Text),
             R"#(Considers context as an InterfaceModel and returns the Label computed by it)#"  , py::arg("ent"),  py::arg("context"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_SignLabel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_SignLabel::*)() const>(&Interface_SignLabel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_SignLabel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_SignLabel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_SignType ,opencascade::handle<Interface_SignType>,Py_Interface_SignType >>(m.attr("Interface_SignType"))
    // constructors
    // custom constructors
    // methods
        .def("Text",
             (TCollection_AsciiString (Interface_SignType::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) const) static_cast<TCollection_AsciiString (Interface_SignType::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) const>(&Interface_SignType::Text),
             R"#(Returns an identification of the Signature (a word), given at initialization time Specialised to consider context as an InterfaceModel)#"  , py::arg("ent"),  py::arg("context"))
        .def("Value",
             (Standard_CString (Interface_SignType::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_CString (Interface_SignType::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&Interface_SignType::Value),
             R"#(Returns the Signature for a Transient object. It is specific of each sub-class of Signature. For a Null Handle, it should provide "" It can work with the model which contains the entity)#"  , py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_SignType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_SignType::*)() const>(&Interface_SignType::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ClassName_s",
                    (Standard_CString (*)( const Standard_CString ) ) static_cast<Standard_CString (*)( const Standard_CString ) >(&Interface_SignType::ClassName),
                    R"#(From a CDL Type Name, returns the Class part (package dropped) WARNING : buffered, to be immediately copied or printed)#"  , py::arg("typnam"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_SignType::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_SignType::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_TypedValue ,opencascade::handle<Interface_TypedValue> >>(m.attr("Interface_TypedValue"))
    // constructors
        .def(py::init< const Standard_CString,const Interface_ParamType,const Standard_CString >()  , py::arg("name"),  py::arg("type")=static_cast<const Interface_ParamType>(Interface_ParamText),  py::arg("init")=static_cast<const Standard_CString>("") )
    // custom constructors
    // methods
        .def("Type",
             (Interface_ParamType (Interface_TypedValue::*)() const) static_cast<Interface_ParamType (Interface_TypedValue::*)() const>(&Interface_TypedValue::Type),
             R"#(Returns the type I.E. calls ValueType then makes correspondance between ParamType from Interface (which remains for compatibility reasons) and ValueType from MoniTool)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_TypedValue::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_TypedValue::*)() const>(&Interface_TypedValue::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ParamTypeToValueType_s",
                    (MoniTool_ValueType (*)( const Interface_ParamType ) ) static_cast<MoniTool_ValueType (*)( const Interface_ParamType ) >(&Interface_TypedValue::ParamTypeToValueType),
                    R"#(Correspondance ParamType from Interface to ValueType from MoniTool)#"  , py::arg("typ"))
        .def_static("ValueTypeToParamType_s",
                    (Interface_ParamType (*)( const MoniTool_ValueType ) ) static_cast<Interface_ParamType (*)( const MoniTool_ValueType ) >(&Interface_TypedValue::ValueTypeToParamType),
                    R"#(Correspondance ParamType from Interface to ValueType from MoniTool)#"  , py::arg("typ"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_TypedValue::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_TypedValue::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_UndefinedContent ,opencascade::handle<Interface_UndefinedContent> , Standard_Transient>>(m.attr("Interface_UndefinedContent"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("NbParams",
             (Standard_Integer (Interface_UndefinedContent::*)() const) static_cast<Standard_Integer (Interface_UndefinedContent::*)() const>(&Interface_UndefinedContent::NbParams),
             R"#(Gives count of recorded parameters)#" )
        .def("NbLiterals",
             (Standard_Integer (Interface_UndefinedContent::*)() const) static_cast<Standard_Integer (Interface_UndefinedContent::*)() const>(&Interface_UndefinedContent::NbLiterals),
             R"#(Gives count of Literal Parameters)#" )
        .def("ParamData",
             (Standard_Boolean (Interface_UndefinedContent::*)( const Standard_Integer , Interface_ParamType & , opencascade::handle<Standard_Transient> & , opencascade::handle<TCollection_HAsciiString> & ) const) static_cast<Standard_Boolean (Interface_UndefinedContent::*)( const Standard_Integer , Interface_ParamType & , opencascade::handle<Standard_Transient> & , opencascade::handle<TCollection_HAsciiString> & ) const>(&Interface_UndefinedContent::ParamData),
             R"#(Returns data of a Parameter : its type, and the entity if it designates en entity ("ent") or its literal value else ("str") Returned value (Boolean) : True if it is an Entity, False else)#"  , py::arg("num"),  py::arg("ptype"),  py::arg("ent"),  py::arg("val"))
        .def("ParamType",
             (Interface_ParamType (Interface_UndefinedContent::*)( const Standard_Integer ) const) static_cast<Interface_ParamType (Interface_UndefinedContent::*)( const Standard_Integer ) const>(&Interface_UndefinedContent::ParamType),
             R"#(Returns the ParamType of a Param, given its rank Error if num is not between 1 and NbParams)#"  , py::arg("num"))
        .def("IsParamEntity",
             (Standard_Boolean (Interface_UndefinedContent::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Interface_UndefinedContent::*)( const Standard_Integer ) const>(&Interface_UndefinedContent::IsParamEntity),
             R"#(Returns True if a Parameter is recorded as an entity Error if num is not between 1 and NbParams)#"  , py::arg("num"))
        .def("ParamEntity",
             (opencascade::handle<Standard_Transient> (Interface_UndefinedContent::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Standard_Transient> (Interface_UndefinedContent::*)( const Standard_Integer ) const>(&Interface_UndefinedContent::ParamEntity),
             R"#(Returns Entity corresponding to a Param, given its rank)#"  , py::arg("num"))
        .def("ParamValue",
             (opencascade::handle<TCollection_HAsciiString> (Interface_UndefinedContent::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (Interface_UndefinedContent::*)( const Standard_Integer ) const>(&Interface_UndefinedContent::ParamValue),
             R"#(Returns litteral value of a Parameter, given its rank)#"  , py::arg("num"))
        .def("Reservate",
             (void (Interface_UndefinedContent::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Interface_UndefinedContent::*)( const Standard_Integer , const Standard_Integer ) >(&Interface_UndefinedContent::Reservate),
             R"#(Manages reservation for parameters (internal use) (nb : total count of parameters, nblit : count of literals))#"  , py::arg("nb"),  py::arg("nblit"))
        .def("AddLiteral",
             (void (Interface_UndefinedContent::*)( const Interface_ParamType , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (Interface_UndefinedContent::*)( const Interface_ParamType , const opencascade::handle<TCollection_HAsciiString> & ) >(&Interface_UndefinedContent::AddLiteral),
             R"#(Adds a literal Parameter to the list)#"  , py::arg("ptype"),  py::arg("val"))
        .def("AddEntity",
             (void (Interface_UndefinedContent::*)( const Interface_ParamType , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_UndefinedContent::*)( const Interface_ParamType , const opencascade::handle<Standard_Transient> & ) >(&Interface_UndefinedContent::AddEntity),
             R"#(Adds a Parameter which references an Entity)#"  , py::arg("ptype"),  py::arg("ent"))
        .def("RemoveParam",
             (void (Interface_UndefinedContent::*)( const Standard_Integer ) ) static_cast<void (Interface_UndefinedContent::*)( const Standard_Integer ) >(&Interface_UndefinedContent::RemoveParam),
             R"#(Removes a Parameter given its rank)#"  , py::arg("num"))
        .def("SetLiteral",
             (void (Interface_UndefinedContent::*)( const Standard_Integer , const Interface_ParamType , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (Interface_UndefinedContent::*)( const Standard_Integer , const Interface_ParamType , const opencascade::handle<TCollection_HAsciiString> & ) >(&Interface_UndefinedContent::SetLiteral),
             R"#(Sets a new value for the Parameter <num>, to a literal value (if it referenced formerly an Entity, this Entity is removed))#"  , py::arg("num"),  py::arg("ptype"),  py::arg("val"))
        .def("SetEntity",
             (void (Interface_UndefinedContent::*)( const Standard_Integer , const Interface_ParamType , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_UndefinedContent::*)( const Standard_Integer , const Interface_ParamType , const opencascade::handle<Standard_Transient> & ) >(&Interface_UndefinedContent::SetEntity),
             R"#(Sets a new value for the Parameter <num>, to reference an Entity. To simply change the Entity, see the variant below)#"  , py::arg("num"),  py::arg("ptype"),  py::arg("ent"))
        .def("SetEntity",
             (void (Interface_UndefinedContent::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_UndefinedContent::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) >(&Interface_UndefinedContent::SetEntity),
             R"#(Changes the Entity referenced by the Parameter <num> (with same ParamType))#"  , py::arg("num"),  py::arg("ent"))
        .def("EntityList",
             (Interface_EntityList (Interface_UndefinedContent::*)() const) static_cast<Interface_EntityList (Interface_UndefinedContent::*)() const>(&Interface_UndefinedContent::EntityList),
             R"#(Returns globally the list of param entities. Note that it can be used as shared entity list for the UndefinedEntity)#" )
        .def("GetFromAnother",
             (void (Interface_UndefinedContent::*)( const opencascade::handle<Interface_UndefinedContent> & , Interface_CopyTool & ) ) static_cast<void (Interface_UndefinedContent::*)( const opencascade::handle<Interface_UndefinedContent> & , Interface_CopyTool & ) >(&Interface_UndefinedContent::GetFromAnother),
             R"#(Copies contents of undefined entities; deigned to be called by GetFromAnother method from Undefined entity of each Interface (the basic operation is the same regardless the norm))#"  , py::arg("other"),  py::arg("TC"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_UndefinedContent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_UndefinedContent::*)() const>(&Interface_UndefinedContent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_UndefinedContent::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_UndefinedContent::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_CopyMap ,opencascade::handle<Interface_CopyMap> , Interface_CopyControl>>(m.attr("Interface_CopyMap"))
    // constructors
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> & >()  , py::arg("amodel") )
    // custom constructors
    // methods
        .def("Clear",
             (void (Interface_CopyMap::*)() ) static_cast<void (Interface_CopyMap::*)() >(&Interface_CopyMap::Clear),
             R"#(Clears Transfer List. Gets Ready to begin another Transfer)#" )
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (Interface_CopyMap::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Interface_CopyMap::*)() const>(&Interface_CopyMap::Model),
             R"#(Returns the InterfaceModel used at Creation time)#" )
        .def("Bind",
             (void (Interface_CopyMap::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_CopyMap::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) >(&Interface_CopyMap::Bind),
             R"#(Binds a Starting Entity identified by its Number <num> in the Starting Model, to a Result of Transfer <res>)#"  , py::arg("ent"),  py::arg("res"))
        .def("Search",
             (Standard_Boolean (Interface_CopyMap::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Interface_CopyMap::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const>(&Interface_CopyMap::Search),
             R"#(Search for the result of a Starting Object (i.e. an Entity, identified by its Number <num> in the Starting Model) Returns True if a Result is Bound (and fills <res>) Returns False if no result is Bound (and nullifies <res>))#"  , py::arg("ent"),  py::arg("res"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_CopyMap::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_CopyMap::*)() const>(&Interface_CopyMap::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_CopyMap::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_CopyMap::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_GraphContent , shared_ptr<Interface_GraphContent> , Interface_EntityIterator>>(m.attr("Interface_GraphContent"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Interface_Graph & >()  , py::arg("agraph") )
        .def(py::init< const Interface_Graph &,const Standard_Integer >()  , py::arg("agraph"),  py::arg("stat") )
        .def(py::init< const Interface_Graph &,const opencascade::handle<Standard_Transient> & >()  , py::arg("agraph"),  py::arg("ent") )
    // custom constructors
    // methods
        .def("GetFromGraph",
             (void (Interface_GraphContent::*)( const Interface_Graph & ) ) static_cast<void (Interface_GraphContent::*)( const Interface_Graph & ) >(&Interface_GraphContent::GetFromGraph),
             R"#(Gets all Entities designated by a Graph (once created), adds them to those already recorded)#"  , py::arg("agraph"))
        .def("GetFromGraph",
             (void (Interface_GraphContent::*)( const Interface_Graph & , const Standard_Integer ) ) static_cast<void (Interface_GraphContent::*)( const Interface_Graph & , const Standard_Integer ) >(&Interface_GraphContent::GetFromGraph),
             R"#(Gets entities from a graph which have a specific Status value (one created), adds them to those already recorded)#"  , py::arg("agraph"),  py::arg("stat"))
        .def("Result",
             (Interface_EntityIterator (Interface_GraphContent::*)() ) static_cast<Interface_EntityIterator (Interface_GraphContent::*)() >(&Interface_GraphContent::Result),
             R"#(Returns Result under the exact form of an EntityIterator : Can be used when EntityIterator itself is required (as a returned value for instance), whitout way for a sub-class)#" )
        .def("Begin",
             (void (Interface_GraphContent::*)() ) static_cast<void (Interface_GraphContent::*)() >(&Interface_GraphContent::Begin),
             R"#(Does the Evaluation before starting the iteration itself (in out))#" )
        .def("Evaluate",
             (void (Interface_GraphContent::*)() ) static_cast<void (Interface_GraphContent::*)() >(&Interface_GraphContent::Evaluate),
             R"#(Evaluates list of Entities to be iterated. Called by Start Default is set to doing nothing : intended to be redefined by each sub-class)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_Static ,opencascade::handle<Interface_Static> , Interface_TypedValue>>(m.attr("Interface_Static"))
    // constructors
        .def(py::init< const Standard_CString,const Standard_CString,const Interface_ParamType,const Standard_CString >()  , py::arg("family"),  py::arg("name"),  py::arg("type")=static_cast<const Interface_ParamType>(Interface_ParamText),  py::arg("init")=static_cast<const Standard_CString>("") )
        .def(py::init< const Standard_CString,const Standard_CString,const opencascade::handle<Interface_Static> & >()  , py::arg("family"),  py::arg("name"),  py::arg("other") )
    // custom constructors
    // methods
        .def("PrintStatic",
             (void (Interface_Static::*)( const opencascade::handle<Message_Messenger> & ) const) static_cast<void (Interface_Static::*)( const opencascade::handle<Message_Messenger> & ) const>(&Interface_Static::PrintStatic),
             R"#(Writes the properties of a parameter in the diagnostic file. These include: - Name - Family, - Wildcard (if it has one) - Current status (empty string if it was updated or if it is the original one) - Value)#"  , py::arg("S"))
        .def("Family",
             (Standard_CString (Interface_Static::*)() const) static_cast<Standard_CString (Interface_Static::*)() const>(&Interface_Static::Family),
             R"#(Returns the family. It can be : a resource name for applis, an internal name between : $e (environment variables), $l (other, purely local))#" )
        .def("SetWild",
             (void (Interface_Static::*)( const opencascade::handle<Interface_Static> & ) ) static_cast<void (Interface_Static::*)( const opencascade::handle<Interface_Static> & ) >(&Interface_Static::SetWild),
             R"#(Sets a "wild-card" static : its value will be considered if <me> is not properly set. (reset by set a null one))#"  , py::arg("wildcard"))
        .def("Wild",
             (opencascade::handle<Interface_Static> (Interface_Static::*)() const) static_cast<opencascade::handle<Interface_Static> (Interface_Static::*)() const>(&Interface_Static::Wild),
             R"#(Returns the wildcard static, which can be (is most often) null)#" )
        .def("SetUptodate",
             (void (Interface_Static::*)() ) static_cast<void (Interface_Static::*)() >(&Interface_Static::SetUptodate),
             R"#(Records a Static has "uptodate", i.e. its value has been taken into account by a reinitialisation procedure This flag is reset at each successful SetValue)#" )
        .def("UpdatedStatus",
             (Standard_Boolean (Interface_Static::*)() const) static_cast<Standard_Boolean (Interface_Static::*)() const>(&Interface_Static::UpdatedStatus),
             R"#(Returns the status "uptodate")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_Static::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_Static::*)() const>(&Interface_Static::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Init_s",
                    (Standard_Boolean (*)( const Standard_CString , const Standard_CString , const Interface_ParamType , const Standard_CString ) ) static_cast<Standard_Boolean (*)( const Standard_CString , const Standard_CString , const Interface_ParamType , const Standard_CString ) >(&Interface_Static::Init),
                    R"#(Declares a new Static (by calling its constructor) If this name is already taken, does nothing and returns False Else, creates it and returns True For additional definitions, get the Static then edit it)#"  , py::arg("family"),  py::arg("name"),  py::arg("type"),  py::arg("init")=static_cast<const Standard_CString>(""))
        .def_static("Init_s",
                    (Standard_Boolean (*)( const Standard_CString , const Standard_CString , const Standard_Character , const Standard_CString ) ) static_cast<Standard_Boolean (*)( const Standard_CString , const Standard_CString , const Standard_Character , const Standard_CString ) >(&Interface_Static::Init),
                    R"#(As Init with ParamType, but type is given as a character This allows a simpler call Types : 'i' Integer, 'r' Real, 't' Text, 'e' Enum, 'o' Object '=' for same definition as, <init> gives the initial Static Returns False if <type> does not match this list)#"  , py::arg("family"),  py::arg("name"),  py::arg("type"),  py::arg("init")=static_cast<const Standard_CString>(""))
        .def_static("Static_s",
                    (opencascade::handle<Interface_Static> (*)( const Standard_CString ) ) static_cast<opencascade::handle<Interface_Static> (*)( const Standard_CString ) >(&Interface_Static::Static),
                    R"#(Returns a Static from its name. Null Handle if not present)#"  , py::arg("name"))
        .def_static("IsPresent_s",
                    (Standard_Boolean (*)( const Standard_CString ) ) static_cast<Standard_Boolean (*)( const Standard_CString ) >(&Interface_Static::IsPresent),
                    R"#(Returns True if a Static named <name> is present, False else)#"  , py::arg("name"))
        .def_static("CDef_s",
                    (Standard_CString (*)( const Standard_CString , const Standard_CString ) ) static_cast<Standard_CString (*)( const Standard_CString , const Standard_CString ) >(&Interface_Static::CDef),
                    R"#(Returns a part of the definition of a Static, as a CString The part is designated by its name, as a CString If the required value is not a string, it is converted to a CString then returned If <name> is not present, or <part> not defined for <name>, this function returns an empty string)#"  , py::arg("name"),  py::arg("part"))
        .def_static("IDef_s",
                    (Standard_Integer (*)( const Standard_CString , const Standard_CString ) ) static_cast<Standard_Integer (*)( const Standard_CString , const Standard_CString ) >(&Interface_Static::IDef),
                    R"#(Returns a part of the definition of a Static, as an Integer The part is designated by its name, as a CString If the required value is not a string, returns zero For a Boolean, 0 for false, 1 for true If <name> is not present, or <part> not defined for <name>, this function returns zero)#"  , py::arg("name"),  py::arg("part"))
        .def_static("IsSet_s",
                    (Standard_Boolean (*)( const Standard_CString , const Standard_Boolean ) ) static_cast<Standard_Boolean (*)( const Standard_CString , const Standard_Boolean ) >(&Interface_Static::IsSet),
                    R"#(Returns True if <name> is present AND set <proper> True (D) : considers this item only <proper> False : if not set and attached to a wild-card, considers this wild-card)#"  , py::arg("name"),  py::arg("proper")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("CVal_s",
                    (Standard_CString (*)( const Standard_CString ) ) static_cast<Standard_CString (*)( const Standard_CString ) >(&Interface_Static::CVal),
                    R"#(Returns the value of the parameter identified by the string name. If the specified parameter does not exist, an empty string is returned. Example Interface_Static::CVal("write.step.schema"); which could return: "AP214")#"  , py::arg("name"))
        .def_static("IVal_s",
                    (Standard_Integer (*)( const Standard_CString ) ) static_cast<Standard_Integer (*)( const Standard_CString ) >(&Interface_Static::IVal),
                    R"#(Returns the integer value of the translation parameter identified by the string name. Returns the value 0 if the parameter does not exist. Example Interface_Static::IVal("write.step.schema"); which could return: 3)#"  , py::arg("name"))
        .def_static("RVal_s",
                    (Standard_Real (*)( const Standard_CString ) ) static_cast<Standard_Real (*)( const Standard_CString ) >(&Interface_Static::RVal),
                    R"#(Returns the value of a static translation parameter identified by the string name. Returns the value 0.0 if the parameter does not exist.)#"  , py::arg("name"))
        .def_static("SetCVal_s",
                    (Standard_Boolean (*)( const Standard_CString , const Standard_CString ) ) static_cast<Standard_Boolean (*)( const Standard_CString , const Standard_CString ) >(&Interface_Static::SetCVal),
                    R"#(Modifies the value of the parameter identified by name. The modification is specified by the string val. false is returned if the parameter does not exist. Example Interface_Static::SetCVal ("write.step.schema","AP203") This syntax specifies a switch from the default STEP 214 mode to STEP 203 mode.)#"  , py::arg("name"),  py::arg("val"))
        .def_static("SetIVal_s",
                    (Standard_Boolean (*)( const Standard_CString , const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const Standard_CString , const Standard_Integer ) >(&Interface_Static::SetIVal),
                    R"#(Modifies the value of the parameter identified by name. The modification is specified by the integer value val. false is returned if the parameter does not exist. Example Interface_Static::SetIVal ("write.step.schema", 3) This syntax specifies a switch from the default STEP 214 mode to STEP 203 mode.S)#"  , py::arg("name"),  py::arg("val"))
        .def_static("SetRVal_s",
                    (Standard_Boolean (*)( const Standard_CString , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const Standard_CString , const Standard_Real ) >(&Interface_Static::SetRVal),
                    R"#(Modifies the value of a translation parameter. false is returned if the parameter does not exist. The modification is specified by the real number value val.)#"  , py::arg("name"),  py::arg("val"))
        .def_static("Update_s",
                    (Standard_Boolean (*)( const Standard_CString ) ) static_cast<Standard_Boolean (*)( const Standard_CString ) >(&Interface_Static::Update),
                    R"#(Sets a Static to be "uptodate" Returns False if <name> is not present This status can be used by a reinitialisation procedure to rerun if a value has been changed)#"  , py::arg("name"))
        .def_static("IsUpdated_s",
                    (Standard_Boolean (*)( const Standard_CString ) ) static_cast<Standard_Boolean (*)( const Standard_CString ) >(&Interface_Static::IsUpdated),
                    R"#(Returns the status "uptodate" from a Static Returns False if <name> is not present)#"  , py::arg("name"))
        .def_static("Items_s",
                    (opencascade::handle<TColStd_HSequenceOfHAsciiString> (*)( const Standard_Integer , const Standard_CString ) ) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (*)( const Standard_Integer , const Standard_CString ) >(&Interface_Static::Items),
                    R"#(Returns a list of names of statics : <mode> = 0 (D) : criter is for family <mode> = 1 : criter is regexp on names, takes final items (ignore wild cards) <mode> = 2 : idem but take only wilded, not final items <mode> = 3 : idem, take all items matching criter idem + 100 : takes only non-updated items idem + 200 : takes only updated items criter empty (D) : returns all names else returns names which match the given criter Remark : families beginning by '$' are not listed by criter "" they are listed only by criter "$")#"  , py::arg("mode")=static_cast<const Standard_Integer>(0),  py::arg("criter")=static_cast<const Standard_CString>(""))
        .def_static("Standards_s",
                    (void (*)() ) static_cast<void (*)() >(&Interface_Static::Standards),
                    R"#(Initializes all standard static parameters, which can be used by every function. statics specific of a norm or a function must be defined around it)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_Static::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Interface_Static::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\Interface_ValueSatisfies.hxx
// ./opencascade\Interface_FileReaderData.hxx
// ./opencascade\Interface_DataMapOfTransientInteger.hxx
// ./opencascade\Interface_InterfaceMismatch.hxx
// ./opencascade\Interface_FloatWriter.hxx
// ./opencascade\Interface_Array1OfHAsciiString.hxx
// ./opencascade\Interface_Translates.hxx
// ./opencascade\Interface_Category.hxx
// ./opencascade\Interface_GTool.hxx
// ./opencascade\Interface_ShareFlags.hxx
// ./opencascade\Interface_Macros.hxx
// ./opencascade\Interface_MapAsciiStringHasher.hxx
// ./opencascade\Interface_ReportEntity.hxx
// ./opencascade\Interface_SignLabel.hxx
// ./opencascade\Interface_IntVal.hxx
// ./opencascade\Interface_StaticSatisfies.hxx
// ./opencascade\Interface_DataState.hxx
// ./opencascade\Interface_SignType.hxx
// ./opencascade\Interface_GeneralModule.hxx
// ./opencascade\Interface_ParamList.hxx
// ./opencascade\Interface_CopyTool.hxx
// ./opencascade\Interface_HArray1OfHAsciiString.hxx
// ./opencascade\Interface_Static.hxx
// ./opencascade\Interface_DataMapIteratorOfDataMapOfTransientInteger.hxx
// ./opencascade\Interface_HSequenceOfCheck.hxx
// ./opencascade\Interface_LineBuffer.hxx
// ./opencascade\Interface_SequenceOfCheck.hxx
// ./opencascade\Interface_CopyMap.hxx
// ./opencascade\Interface_EntityCluster.hxx
// ./opencascade\Interface_ReaderLib.hxx
// ./opencascade\Interface_GraphContent.hxx
// ./opencascade\Interface_EntityIterator.hxx
// ./opencascade\Interface_MSG.hxx
// ./opencascade\Interface_Version.hxx
// ./opencascade\Interface_HGraph.hxx
// ./opencascade\Interface_ParamType.hxx
// ./opencascade\Interface_FileParameter.hxx
// ./opencascade\Interface_GlobalNodeOfGeneralLib.hxx
// ./opencascade\Interface_EntityList.hxx
// ./opencascade\Interface_ParamSet.hxx
// ./opencascade\Interface_Array1OfFileParameter.hxx
// ./opencascade\Interface_Protocol.hxx
// ./opencascade\Interface_InterfaceModel.hxx
// ./opencascade\Interface_NodeOfReaderLib.hxx
// ./opencascade\Interface_CheckIterator.hxx
// ./opencascade\Interface_CheckTool.hxx
// ./opencascade\Interface_InterfaceError.hxx
// ./opencascade\Interface_Statics.hxx
// ./opencascade\Interface_FileReaderTool.hxx
// ./opencascade\Interface_GeneralLib.hxx
// ./opencascade\Interface_CopyControl.hxx
// ./opencascade\Interface_GlobalNodeOfReaderLib.hxx
// ./opencascade\Interface_VectorOfFileParameter.hxx
// ./opencascade\Interface_UndefinedContent.hxx
// ./opencascade\Interface_TypedValue.hxx
// ./opencascade\Interface_IntList.hxx
// ./opencascade\Interface_CheckFailure.hxx
// ./opencascade\Interface_ValueInterpret.hxx
// ./opencascade\Interface_ReaderModule.hxx
// ./opencascade\Interface_Check.hxx
// ./opencascade\Interface_IndexedMapOfAsciiString.hxx
// ./opencascade\Interface_BitMap.hxx
// ./opencascade\Interface_Graph.hxx
// ./opencascade\Interface_CheckStatus.hxx
// ./opencascade\Interface_ShareTool.hxx
// ./opencascade\Interface_NodeOfGeneralLib.hxx
// ./opencascade\Interface_STAT.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<opencascade::handle<Standard_Transient>, Standard_Integer, TColStd_MapTransientHasher>(m,"Interface_DataMapOfTransientInteger");
    register_template_NCollection_Array1<opencascade::handle<TCollection_HAsciiString> >(m,"Interface_Array1OfHAsciiString");
    register_template_NCollection_Sequence<opencascade::handle<Interface_Check> >(m,"Interface_SequenceOfCheck");
    register_template_NCollection_Array1<Interface_FileParameter>(m,"Interface_Array1OfFileParameter");
    register_template_NCollection_Vector<Interface_FileParameter>(m,"Interface_VectorOfFileParameter");
    register_template_NCollection_IndexedMap<TCollection_AsciiString, Interface_MapAsciiStringHasher>(m,"Interface_IndexedMapOfAsciiString");


// exceptions
register_occ_exception<Interface_InterfaceError>(m, "Interface_InterfaceError");
register_occ_exception<Interface_CheckFailure>(m, "Interface_CheckFailure");
register_occ_exception<Interface_InterfaceMismatch>(m, "Interface_InterfaceMismatch");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

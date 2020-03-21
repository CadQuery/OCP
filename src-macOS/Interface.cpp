
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Interface_Check.hxx>
#include <Interface_GTool.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_ReportEntity.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_EntityIterator.hxx>
#include <Message_Messenger.hxx>
#include <Interface_ReaderModule.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_ReaderLib.hxx>
#include <Interface_NodeOfReaderLib.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_GTool.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <Standard_OutOfRange.hxx>
#include <Interface_InterfaceError.hxx>
#include <Standard_NullObject.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_NodeOfGeneralLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Interface_GeneralModule.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_GlobalNodeOfGeneralLib.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_GTool.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ParamList.hxx>
#include <Standard_OutOfRange.hxx>
#include <Interface_FileParameter.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Check.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_GlobalNodeOfGeneralLib.hxx>
#include <Interface_GeneralModule.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_CopyControl.hxx>
#include <Interface_CopyMap.hxx>
#include <Interface_GeneralModule.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_SignType.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_GeneralModule.hxx>
#include <Interface_GlobalNodeOfReaderLib.hxx>
#include <Interface_ReaderModule.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_ReaderLib.hxx>
#include <Standard_DomainError.hxx>
#include <Interface_FileReaderData.hxx>
#include <Interface_Check.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_NullObject.hxx>
#include <Interface_EntityList.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceError.hxx>
#include <Message_Messenger.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_IntVal.hxx>
#include <Message_Messenger.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_GTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_NodeOfReaderLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Interface_ReaderModule.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_GlobalNodeOfReaderLib.hxx>
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
#include <Interface_IntVal.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Interface_ParamSet.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_FileParameter.hxx>
#include <Interface_ParamList.hxx>
#include <Standard_OutOfMemory.hxx>
#include <Interface_InterfaceError.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_GeneralModule.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_NodeOfGeneralLib.hxx>
#include <TCollection_AsciiString.hxx>
#include <Message_Msg.hxx>
#include <Message_Messenger.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_CopyTool.hxx>
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
#include <Interface_Check.hxx>

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
// ./opencascade/Interface_SequenceOfCheck.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Interface_Array1OfHAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Interface_Array1OfFileParameter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Interface_IndexedMapOfAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Interface_VectorOfFileParameter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Interface_DataMapOfTransientInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Interface_DataMapOfTransientInteger.hxx
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
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
        .def("ClearNums",
             (void (Interface_Category::*)() ) static_cast<void (Interface_Category::*)() >(&Interface_Category::ClearNums),
             R"#(Clears the recorded list of category numbers for a Model)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_Check ,opencascade::handle<Interface_Check> , Standard_Transient>>(m.attr("Interface_Check"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_Check::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_Check::*)() const>(&Interface_Check::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_Check::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_CheckIterator , shared_ptr<Interface_CheckIterator> >>(m.attr("Interface_CheckIterator"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_CheckTool , shared_ptr<Interface_CheckTool> >>(m.attr("Interface_CheckTool"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_CopyTool , shared_ptr<Interface_CopyTool> >>(m.attr("Interface_CopyTool"))
    // constructors
    // custom constructors
    // methods
        .def("Clear",
             (void (Interface_CopyTool::*)() ) static_cast<void (Interface_CopyTool::*)() >(&Interface_CopyTool::Clear),
             R"#(Clears Transfer List. Gets Ready to begin another Transfer)#" )
        .def("Copy",
             (Standard_Boolean (Interface_CopyTool::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Boolean (Interface_CopyTool::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & , const Standard_Boolean , const Standard_Boolean ) >(&Interface_CopyTool::Copy),
             R"#(Creates the CounterPart of an Entity (by ShallowCopy), Binds it, then Copies the content of the former Entity to the other one (same Type), by call to the General Service Library It may command the Copy of Referenced Entities Then, its returns True.)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("mapped"),  py::arg("errstat"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_EntityCluster ,opencascade::handle<Interface_EntityCluster> , Standard_Transient>>(m.attr("Interface_EntityCluster"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_EntityCluster::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_EntityCluster::*)() const>(&Interface_EntityCluster::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_EntityCluster::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_EntityIterator , shared_ptr<Interface_EntityIterator> >>(m.attr("Interface_EntityIterator"))
    // constructors
    // custom constructors
    // methods
        .def("Start",
             (void (Interface_EntityIterator::*)() const) static_cast<void (Interface_EntityIterator::*)() const>(&Interface_EntityIterator::Start),
             R"#(Allows re-iteration (useless for the first iteration))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_EntityList , shared_ptr<Interface_EntityList> >>(m.attr("Interface_EntityList"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_FileParameter , shared_ptr<Interface_FileParameter> >>(m.attr("Interface_FileParameter"))
    // constructors
    // custom constructors
    // methods
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
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_FileReaderData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_FileReaderData::*)() const>(&Interface_FileReaderData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_FileReaderData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_FileReaderTool , shared_ptr<Interface_FileReaderTool>,Py_Interface_FileReaderTool >>(m.attr("Interface_FileReaderTool"))
    // constructors
    // custom constructors
    // methods
        .def("Recognize",
             (Standard_Boolean (Interface_FileReaderTool::*)( const Standard_Integer , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (Interface_FileReaderTool::*)( const Standard_Integer , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) >(&Interface_FileReaderTool::Recognize),
             R"#(Recognizes a record, given its number. Specific to each Interface; called by SetEntities. It can call the basic method RecognizeByLib. Returns False if recognition has failed, True else. <ach> has not to be filled if simply Recognition has failed : it must record true error messages : RecognizeByLib can generate error messages if NewRead is called)#"  , py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("BeginRead",
             (void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&Interface_FileReaderTool::BeginRead),
             R"#(Fills model's header; each Interface defines for its Model its own file header; this method fills it from FileReaderTool.+ It is called by AnalyseFile from InterfaceModel)#"  , py::arg("amodel"))
        .def("AnalyseRecord",
             (Standard_Boolean (Interface_FileReaderTool::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_Check> & ) ) static_cast<Standard_Boolean (Interface_FileReaderTool::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_Check> & ) >(&Interface_FileReaderTool::AnalyseRecord),
             R"#(Fills an Entity, given record no; specific to each Interface, called by AnalyseFile from InterfaceModel (which manages its calling arguments) To work, each Interface can define a method in its proper Transient class, like this (given as an example) : AnalyseRecord (me : mutable; FR : in out FileReaderTool; num : Integer; acheck : in out Check) returns Boolean; and call it from AnalyseRecord)#"  , py::arg("num"),  py::arg("anent"),  py::arg("acheck"))
        .def("EndRead",
             (void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (Interface_FileReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&Interface_FileReaderTool::EndRead),
             R"#(Ends file reading after reading all the entities default is doing nothing; redefinable as necessary)#"  , py::arg("amodel"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_FloatWriter , shared_ptr<Interface_FloatWriter> >>(m.attr("Interface_FloatWriter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_GTool ,opencascade::handle<Interface_GTool> , Standard_Transient>>(m.attr("Interface_GTool"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_GTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_GTool::*)() const>(&Interface_GTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_GTool::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_GeneralLib , shared_ptr<Interface_GeneralLib> >>(m.attr("Interface_GeneralLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_GlobalNodeOfGeneralLib ,opencascade::handle<Interface_GlobalNodeOfGeneralLib> , Standard_Transient>>(m.attr("Interface_GlobalNodeOfGeneralLib"))
    // constructors
    // custom constructors
    // methods
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
    // custom constructors
    // methods
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
    // custom constructors
    // methods
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
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_HGraph::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_HGraph::*)() const>(&Interface_HGraph::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_HGraph::get_type_name),
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_IntVal ,opencascade::handle<Interface_IntVal> , Standard_Transient>>(m.attr("Interface_IntVal"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_IntVal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_IntVal::*)() const>(&Interface_IntVal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_IntVal::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_InterfaceModel ,opencascade::handle<Interface_InterfaceModel>,Py_Interface_InterfaceModel , Standard_Transient>>(m.attr("Interface_InterfaceModel"))
    // constructors
    // custom constructors
    // methods
        .def("Protocol",
             (opencascade::handle<Interface_Protocol> (Interface_InterfaceModel::*)() const) static_cast<opencascade::handle<Interface_Protocol> (Interface_InterfaceModel::*)() const>(&Interface_InterfaceModel::Protocol),
             R"#(Returns the Protocol which has been set by SetProtocol, or AddWithRefs with Protocol)#" )
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
        .def("Reservate",
             (void (Interface_InterfaceModel::*)( const Standard_Integer ) ) static_cast<void (Interface_InterfaceModel::*)( const Standard_Integer ) >(&Interface_InterfaceModel::Reservate),
             R"#(Does a reservation for the List of Entities (for optimized storage management). If it is not called, storage management can be less efficient. <nbent> is the expected count of Entities to store)#"  , py::arg("nbent"))
        .def("AddEntity",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Standard_Transient> & ) >(&Interface_InterfaceModel::AddEntity),
             R"#(Internal method for adding an Entity. Used by file reading (defined by each Interface) and Transfer tools. It adds the entity required to be added, not its refs : see AddWithRefs. If <anentity> is a ReportEntity, it is added to the list of Reports, its Concerned Entity (Erroneous or Corrected, else Unknown) is added to the list of Entities. That is, the ReportEntity must be created before Adding)#"  , py::arg("anentity"))
        .def("GetFromAnother",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&Interface_InterfaceModel::GetFromAnother),
             R"#(Gets header (data specific of a defined Interface) from another InterfaceModel; called from TransferCopy)#"  , py::arg("other"))
        .def("NewEmptyModel",
             (opencascade::handle<Interface_InterfaceModel> (Interface_InterfaceModel::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Interface_InterfaceModel::*)() const>(&Interface_InterfaceModel::NewEmptyModel),
             R"#(Returns a New Empty Model, same type as <me> (whatever its Type); called to Copy parts a Model into other ones, then followed by a call to GetFromAnother (Header) then filling with specified Entities, themselves copied)#" )
        .def("VerifyCheck",
             (void (Interface_InterfaceModel::*)( opencascade::handle<Interface_Check> & ) const) static_cast<void (Interface_InterfaceModel::*)( opencascade::handle<Interface_Check> & ) const>(&Interface_InterfaceModel::VerifyCheck),
             R"#(Minimum Semantic Global Check on data in model (header) Can only check basic Data. See also GlobalCheck from Protocol for a check which takes the Graph into account Default does nothing, can be redefined)#"  , py::arg("ach"))
        .def("DumpHeader",
             (void (Interface_InterfaceModel::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (Interface_InterfaceModel::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&Interface_InterfaceModel::DumpHeader),
             R"#(Dumps Header in a short, easy to read, form, onto a Stream <level> allows to print more or less parts of the header, if necessary. 0 for basic print)#"  , py::arg("S"),  py::arg("level")=static_cast<const Standard_Integer>(0))
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
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_InterfaceModel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_LineBuffer , shared_ptr<Interface_LineBuffer> >>(m.attr("Interface_LineBuffer"))
    // constructors
    // custom constructors
    // methods
        .def("Content",
             (Standard_CString (Interface_LineBuffer::*)() const) static_cast<Standard_CString (Interface_LineBuffer::*)() const>(&Interface_LineBuffer::Content),
             R"#(Returns the Content of the LineBuffer)#" )
        .def("Length",
             (Standard_Integer (Interface_LineBuffer::*)() const) static_cast<Standard_Integer (Interface_LineBuffer::*)() const>(&Interface_LineBuffer::Length),
             R"#(Returns the Length of the LineBuffer)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_MSG , shared_ptr<Interface_MSG> >>(m.attr("Interface_MSG"))
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
    register_default_constructor<Interface_MapAsciiStringHasher , shared_ptr<Interface_MapAsciiStringHasher>>(m,"Interface_MapAsciiStringHasher");

    static_cast<py::class_<Interface_MapAsciiStringHasher , shared_ptr<Interface_MapAsciiStringHasher> >>(m.attr("Interface_MapAsciiStringHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_NodeOfGeneralLib ,opencascade::handle<Interface_NodeOfGeneralLib> , Standard_Transient>>(m.attr("Interface_NodeOfGeneralLib"))
    // constructors
    // custom constructors
    // methods
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
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_ParamSet ,opencascade::handle<Interface_ParamSet> , Standard_Transient>>(m.attr("Interface_ParamSet"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_ParamSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_ParamSet::*)() const>(&Interface_ParamSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_ParamSet::get_type_name),
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
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_Protocol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_ReaderLib , shared_ptr<Interface_ReaderLib> >>(m.attr("Interface_ReaderLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_ReportEntity ,opencascade::handle<Interface_ReportEntity> , Standard_Transient>>(m.attr("Interface_ReportEntity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_ReportEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_ReportEntity::*)() const>(&Interface_ReportEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_ReportEntity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_STAT , shared_ptr<Interface_STAT> >>(m.attr("Interface_STAT"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_ShareFlags , shared_ptr<Interface_ShareFlags> >>(m.attr("Interface_ShareFlags"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_ShareTool , shared_ptr<Interface_ShareTool> >>(m.attr("Interface_ShareTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_SignLabel ,opencascade::handle<Interface_SignLabel> >>(m.attr("Interface_SignLabel"))
    // constructors
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
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_SignType::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_TypedValue ,opencascade::handle<Interface_TypedValue> >>(m.attr("Interface_TypedValue"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_TypedValue::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_TypedValue::*)() const>(&Interface_TypedValue::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_TypedValue::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_UndefinedContent ,opencascade::handle<Interface_UndefinedContent> , Standard_Transient>>(m.attr("Interface_UndefinedContent"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_UndefinedContent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_UndefinedContent::*)() const>(&Interface_UndefinedContent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_UndefinedContent::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_CopyMap ,opencascade::handle<Interface_CopyMap> , Interface_CopyControl>>(m.attr("Interface_CopyMap"))
    // constructors
    // custom constructors
    // methods
        .def("Clear",
             (void (Interface_CopyMap::*)() ) static_cast<void (Interface_CopyMap::*)() >(&Interface_CopyMap::Clear),
             R"#(Clears Transfer List. Gets Ready to begin another Transfer)#" )
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interface_GraphContent , shared_ptr<Interface_GraphContent> , Interface_EntityIterator>>(m.attr("Interface_GraphContent"))
    // constructors
    // custom constructors
    // methods
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
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Interface_Static::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Interface_Static::*)() const>(&Interface_Static::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Interface_Static::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Interface_SequenceOfCheck.hxx
// ./opencascade/Interface_FloatWriter.hxx
// ./opencascade/Interface_InterfaceModel.hxx
// ./opencascade/Interface_GlobalNodeOfReaderLib.hxx
// ./opencascade/Interface_ShareFlags.hxx
// ./opencascade/Interface_Array1OfHAsciiString.hxx
// ./opencascade/Interface_EntityList.hxx
// ./opencascade/Interface_STAT.hxx
// ./opencascade/Interface_Category.hxx
// ./opencascade/Interface_IntVal.hxx
// ./opencascade/Interface_CopyMap.hxx
// ./opencascade/Interface_InterfaceMismatch.hxx
// ./opencascade/Interface_GeneralLib.hxx
// ./opencascade/Interface_Translates.hxx
// ./opencascade/Interface_Graph.hxx
// ./opencascade/Interface_BitMap.hxx
// ./opencascade/Interface_ParamSet.hxx
// ./opencascade/Interface_Protocol.hxx
// ./opencascade/Interface_Array1OfFileParameter.hxx
// ./opencascade/Interface_TypedValue.hxx
// ./opencascade/Interface_NodeOfGeneralLib.hxx
// ./opencascade/Interface_CopyTool.hxx
// ./opencascade/Interface_SignLabel.hxx
// ./opencascade/Interface_Macros.hxx
// ./opencascade/Interface_GTool.hxx
// ./opencascade/Interface_CheckStatus.hxx
// ./opencascade/Interface_NodeOfReaderLib.hxx
// ./opencascade/Interface_ReaderModule.hxx
// ./opencascade/Interface_EntityCluster.hxx
// ./opencascade/Interface_HSequenceOfCheck.hxx
// ./opencascade/Interface_GraphContent.hxx
// ./opencascade/Interface_Static.hxx
// ./opencascade/Interface_CheckFailure.hxx
// ./opencascade/Interface_CheckIterator.hxx
// ./opencascade/Interface_GeneralModule.hxx
// ./opencascade/Interface_Statics.hxx
// ./opencascade/Interface_IntList.hxx
// ./opencascade/Interface_MSG.hxx
// ./opencascade/Interface_HGraph.hxx
// ./opencascade/Interface_DataMapIteratorOfDataMapOfTransientInteger.hxx
// ./opencascade/Interface_FileParameter.hxx
// ./opencascade/Interface_StaticSatisfies.hxx
// ./opencascade/Interface_ReaderLib.hxx
// ./opencascade/Interface_ShareTool.hxx
// ./opencascade/Interface_IndexedMapOfAsciiString.hxx
// ./opencascade/Interface_ParamType.hxx
// ./opencascade/Interface_EntityIterator.hxx
// ./opencascade/Interface_FileReaderData.hxx
// ./opencascade/Interface_ValueSatisfies.hxx
// ./opencascade/Interface_LineBuffer.hxx
// ./opencascade/Interface_ParamList.hxx
// ./opencascade/Interface_CopyControl.hxx
// ./opencascade/Interface_HArray1OfHAsciiString.hxx
// ./opencascade/Interface_VectorOfFileParameter.hxx
// ./opencascade/Interface_ValueInterpret.hxx
// ./opencascade/Interface_DataMapOfTransientInteger.hxx
// ./opencascade/Interface_SignType.hxx
// ./opencascade/Interface_GlobalNodeOfGeneralLib.hxx
// ./opencascade/Interface_DataState.hxx
// ./opencascade/Interface_MapAsciiStringHasher.hxx
// ./opencascade/Interface_Check.hxx
// ./opencascade/Interface_InterfaceError.hxx
// ./opencascade/Interface_UndefinedContent.hxx
// ./opencascade/Interface_CheckTool.hxx
// ./opencascade/Interface_FileReaderTool.hxx
// ./opencascade/Interface_ReportEntity.hxx
// ./opencascade/Interface_Version.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<Interface_Check> >(m,"Interface_SequenceOfCheck");
    register_template_NCollection_Array1<opencascade::handle<TCollection_HAsciiString> >(m,"Interface_Array1OfHAsciiString");
    register_template_NCollection_Array1<Interface_FileParameter>(m,"Interface_Array1OfFileParameter");
    register_template_NCollection_IndexedMap<TCollection_AsciiString, Interface_MapAsciiStringHasher>(m,"Interface_IndexedMapOfAsciiString");
    register_template_NCollection_Vector<Interface_FileParameter>(m,"Interface_VectorOfFileParameter");
    register_template_NCollection_DataMap<opencascade::handle<Standard_Transient>, Standard_Integer, TColStd_MapTransientHasher>(m,"Interface_DataMapOfTransientInteger");


// exceptions
register_occ_exception<Interface_InterfaceError>(m, "Interface_InterfaceError");
register_occ_exception<Interface_CheckFailure>(m, "Interface_CheckFailure");
register_occ_exception<Interface_InterfaceMismatch>(m, "Interface_InterfaceMismatch");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

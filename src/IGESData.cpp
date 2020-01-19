
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IGESData_GlobalNodeOfWriterLib.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_ReadWriteModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_WriterLib.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_NoSuchObject.hxx>
#include <IGESData_IGESType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <IGESData_ReadWriteModule.hxx>
#include <IGESData_GeneralModule.hxx>
#include <IGESData_IGESReaderTool.hxx>
#include <IGESData_DirChecker.hxx>
#include <IGESData_IGESType.hxx>
#include <IGESData_LineFontEntity.hxx>
#include <IGESData_LevelListEntity.hxx>
#include <IGESData_ViewKindEntity.hxx>
#include <IGESData_TransfEntity.hxx>
#include <IGESData_LabelDisplayEntity.hxx>
#include <IGESData_ColorEntity.hxx>
#include <gp_GTrsf.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_InterfaceError.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Standard_OutOfRange.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_ParamSet.hxx>
#include <Interface_Check.hxx>
#include <gp_XYZ.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_ParamList.hxx>
#include <Interface_Check.hxx>
#include <Interface_InterfaceError.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamCursor.hxx>
#include <Message_Msg.hxx>
#include <gp_XY.hxx>
#include <gp_XYZ.hxx>
#include <Standard_OutOfRange.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_ReadWriteModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_WriterLib.hxx>
#include <IGESData_NodeOfWriterLib.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_GlobalSection.hxx>
#include <IGESData_IGESEntity.hxx>
#include <gp_XY.hxx>
#include <gp_XYZ.hxx>
#include <Interface_Check.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_NodeOfSpecificLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_SpecificModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_GlobalNodeOfSpecificLib.hxx>
#include <IGESData_NodeOfWriterLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_ReadWriteModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_GlobalNodeOfWriterLib.hxx>
#include <Interface_ParamSet.hxx>
#include <Interface_Check.hxx>
#include <Standard_DomainError.hxx>
#include <Interface_FileReaderData.hxx>
#include <Interface_Check.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Standard_OutOfRange.hxx>
#include <gp_GTrsf.hxx>
#include <IGESData_IGESType.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Message_Messenger.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_Check.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESEntity.hxx>
#include <gp_GTrsf.hxx>
#include <gp_Trsf.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Interface_UndefinedContent.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_DirPart.hxx>
#include <Interface_Check.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Message_Messenger.hxx>
#include <Interface_ParamList.hxx>
#include <IGESData_FileRecognizer.hxx>
#include <Interface_Check.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_Protocol.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_DirPart.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_LineFontEntity.hxx>
#include <IGESData_LevelListEntity.hxx>
#include <IGESData_TransfEntity.hxx>
#include <IGESData_ViewKindEntity.hxx>
#include <IGESData_LabelDisplayEntity.hxx>
#include <IGESData_ColorEntity.hxx>
#include <IGESData_NameEntity.hxx>
#include <IGESData_SingleParentEntity.hxx>
#include <IGESData_UndefinedEntity.hxx>
#include <IGESData_FreeFormatEntity.hxx>
#include <IGESData_GlobalSection.hxx>
#include <IGESData_DefSwitch.hxx>
#include <IGESData_DirChecker.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_IGESReaderTool.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_ParamCursor.hxx>
#include <IGESData_DirPart.hxx>
#include <IGESData_IGESType.hxx>
#include <IGESData_FileRecognizer.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IGESData_IGESDumper.hxx>
#include <IGESData_BasicEditor.hxx>
#include <IGESData_ToolLocation.hxx>
#include <IGESData_GeneralModule.hxx>
#include <IGESData_DefaultGeneral.hxx>
#include <IGESData_ReadWriteModule.hxx>
#include <IGESData_SpecificModule.hxx>
#include <IGESData_DefaultSpecific.hxx>
#include <IGESData_FileProtocol.hxx>
#include <IGESData_WriterLib.hxx>
#include <IGESData_SpecificLib.hxx>
#include <IGESData_GlobalNodeOfWriterLib.hxx>
#include <IGESData_NodeOfWriterLib.hxx>
#include <IGESData_GlobalNodeOfSpecificLib.hxx>
#include <IGESData_NodeOfSpecificLib.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESData_SpecificModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_SpecificLib.hxx>
#include <IGESData_NodeOfSpecificLib.hxx>
#include <IGESData_GlobalNodeOfSpecificLib.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_SpecificModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_SpecificLib.hxx>

// module includes
#include <IGESData.hxx>
#include <IGESData_Array1OfDirPart.hxx>
#include <IGESData_Array1OfIGESEntity.hxx>
#include <IGESData_BasicEditor.hxx>
#include <IGESData_ColorEntity.hxx>
#include <IGESData_DefaultGeneral.hxx>
#include <IGESData_DefaultSpecific.hxx>
#include <IGESData_DefList.hxx>
#include <IGESData_DefSwitch.hxx>
#include <IGESData_DefType.hxx>
#include <IGESData_DirChecker.hxx>
#include <IGESData_DirPart.hxx>
#include <IGESData_Dump.hxx>
#include <IGESData_FileProtocol.hxx>
#include <IGESData_FileRecognizer.hxx>
#include <IGESData_FreeFormatEntity.hxx>
#include <IGESData_GeneralModule.hxx>
#include <IGESData_GlobalNodeOfSpecificLib.hxx>
#include <IGESData_GlobalNodeOfWriterLib.hxx>
#include <IGESData_GlobalSection.hxx>
#include <IGESData_HArray1OfIGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_IGESReaderTool.hxx>
#include <IGESData_IGESType.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IGESData_LabelDisplayEntity.hxx>
#include <IGESData_LevelListEntity.hxx>
#include <IGESData_LineFontEntity.hxx>
#include <IGESData_NameEntity.hxx>
#include <IGESData_NodeOfSpecificLib.hxx>
#include <IGESData_NodeOfWriterLib.hxx>
#include <IGESData_ParamCursor.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_ReadStage.hxx>
#include <IGESData_ReadWriteModule.hxx>
#include <IGESData_SingleParentEntity.hxx>
#include <IGESData_SpecificLib.hxx>
#include <IGESData_SpecificModule.hxx>
#include <IGESData_Status.hxx>
#include <IGESData_ToolLocation.hxx>
#include <IGESData_TransfEntity.hxx>
#include <IGESData_UndefinedEntity.hxx>
#include <IGESData_ViewKindEntity.hxx>
#include <IGESData_WriterLib.hxx>

// template related includes
// ./opencascade/IGESData_Array1OfDirPart.hxx
#include "NCollection.hxx"
// ./opencascade/IGESData_Array1OfIGESEntity.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESData(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESData"));


//Python trampoline classes
    class Py_IGESData_FileRecognizer : public IGESData_FileRecognizer{
    public:
        using IGESData_FileRecognizer::IGESData_FileRecognizer;
        
        // public pure virtual
        
        
        // protected pure virtual
        void Eval(const IGESData_IGESType & akey) override { PYBIND11_OVERLOAD_PURE(void,IGESData_FileRecognizer,Eval,akey) };
        
        
        // private pure virtual
        
    };
    class Py_IGESData_GeneralModule : public IGESData_GeneralModule{
    public:
        using IGESData_GeneralModule::IGESData_GeneralModule;
        
        // public pure virtual
        void OwnSharedCase(const Standard_Integer CN,const opencascade::handle<IGESData_IGESEntity> & ent,Interface_EntityIterator & iter) const  override { PYBIND11_OVERLOAD_PURE(void,IGESData_GeneralModule,OwnSharedCase,CN,ent,iter) };
        IGESData_DirChecker DirChecker(const Standard_Integer CN,const opencascade::handle<IGESData_IGESEntity> & ent) const  override { PYBIND11_OVERLOAD_PURE(IGESData_DirChecker,IGESData_GeneralModule,DirChecker,CN,ent) };
        void OwnCheckCase(const Standard_Integer CN,const opencascade::handle<IGESData_IGESEntity> & ent,const Interface_ShareTool & shares,opencascade::handle<Interface_Check> & ach) const  override { PYBIND11_OVERLOAD_PURE(void,IGESData_GeneralModule,OwnCheckCase,CN,ent,shares,ach) };
        Standard_Boolean NewVoid(const Standard_Integer CN,opencascade::handle<Standard_Transient> & entto) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IGESData_GeneralModule,NewVoid,CN,entto) };
        void OwnCopyCase(const Standard_Integer CN,const opencascade::handle<IGESData_IGESEntity> & entfrom,const opencascade::handle<IGESData_IGESEntity> & entto,Interface_CopyTool & TC) const  override { PYBIND11_OVERLOAD_PURE(void,IGESData_GeneralModule,OwnCopyCase,CN,entfrom,entto,TC) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_IGESData_ReadWriteModule : public IGESData_ReadWriteModule{
    public:
        using IGESData_ReadWriteModule::IGESData_ReadWriteModule;
        
        // public pure virtual
        Standard_Integer CaseIGES(const Standard_Integer typenum,const Standard_Integer formnum) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IGESData_ReadWriteModule,CaseIGES,typenum,formnum) };
        void ReadOwnParams(const Standard_Integer CN,const opencascade::handle<IGESData_IGESEntity> & ent,const opencascade::handle<IGESData_IGESReaderData> & IR,IGESData_ParamReader & PR) const  override { PYBIND11_OVERLOAD_PURE(void,IGESData_ReadWriteModule,ReadOwnParams,CN,ent,IR,PR) };
        void WriteOwnParams(const Standard_Integer CN,const opencascade::handle<IGESData_IGESEntity> & ent,IGESData_IGESWriter & IW) const  override { PYBIND11_OVERLOAD_PURE(void,IGESData_ReadWriteModule,WriteOwnParams,CN,ent,IW) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_IGESData_SpecificModule : public IGESData_SpecificModule{
    public:
        using IGESData_SpecificModule::IGESData_SpecificModule;
        
        // public pure virtual
        void OwnDump(const Standard_Integer CN,const opencascade::handle<IGESData_IGESEntity> & ent,const IGESData_IGESDumper & dumper,const opencascade::handle<Message_Messenger> & S,const Standard_Integer own) const  override { PYBIND11_OVERLOAD_PURE(void,IGESData_SpecificModule,OwnDump,CN,ent,dumper,S,own) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_IGESData_LevelListEntity : public IGESData_LevelListEntity{
    public:
        using IGESData_LevelListEntity::IGESData_LevelListEntity;
        
        // public pure virtual
        Standard_Integer NbLevelNumbers() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IGESData_LevelListEntity,NbLevelNumbers,) };
        Standard_Integer LevelNumber(const Standard_Integer num) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IGESData_LevelListEntity,LevelNumber,num) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_IGESData_NameEntity : public IGESData_NameEntity{
    public:
        using IGESData_NameEntity::IGESData_NameEntity;
        
        // public pure virtual
        opencascade::handle<TCollection_HAsciiString> Value() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TCollection_HAsciiString>,IGESData_NameEntity,Value,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_IGESData_SingleParentEntity : public IGESData_SingleParentEntity{
    public:
        using IGESData_SingleParentEntity::IGESData_SingleParentEntity;
        
        // public pure virtual
        opencascade::handle<IGESData_IGESEntity> SingleParent() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<IGESData_IGESEntity>,IGESData_SingleParentEntity,SingleParent,) };
        Standard_Integer NbChildren() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IGESData_SingleParentEntity,NbChildren,) };
        opencascade::handle<IGESData_IGESEntity> Child(const Standard_Integer num) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<IGESData_IGESEntity>,IGESData_SingleParentEntity,Child,num) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_IGESData_TransfEntity : public IGESData_TransfEntity{
    public:
        using IGESData_TransfEntity::IGESData_TransfEntity;
        
        // public pure virtual
        gp_GTrsf Value() const  override { PYBIND11_OVERLOAD_PURE(gp_GTrsf,IGESData_TransfEntity,Value,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_IGESData_ViewKindEntity : public IGESData_ViewKindEntity{
    public:
        using IGESData_ViewKindEntity::IGESData_ViewKindEntity;
        
        // public pure virtual
        Standard_Boolean IsSingle() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IGESData_ViewKindEntity,IsSingle,) };
        Standard_Integer NbViews() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IGESData_ViewKindEntity,NbViews,) };
        opencascade::handle<IGESData_ViewKindEntity> ViewItem(const Standard_Integer num) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<IGESData_ViewKindEntity>,IGESData_ViewKindEntity,ViewItem,num) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes

    register_default_constructor<IGESData , shared_ptr<IGESData>>(m,"IGESData");

    static_cast<py::class_<IGESData , shared_ptr<IGESData>  >>(m.attr("IGESData"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&IGESData::Init),
                    R"#(Prepares General dynamic data used for IGESData specifically : Protocol and Modules, which treat UndefinedEntity)#" )
        .def_static("Protocol_s",
                    (opencascade::handle<IGESData_Protocol> (*)() ) static_cast<opencascade::handle<IGESData_Protocol> (*)() >(&IGESData::Protocol),
                    R"#(Returns a Protocol from IGESData (avoids to create it))#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_BasicEditor , shared_ptr<IGESData_BasicEditor>  >>(m.attr("IGESData_BasicEditor"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<IGESData_Protocol> & >()  , py::arg("protocol") )
        .def(py::init< const opencascade::handle<IGESData_IGESModel> &,const opencascade::handle<IGESData_Protocol> & >()  , py::arg("model"),  py::arg("protocol") )
    // methods
        .def("Init",
             (void (IGESData_BasicEditor::*)( const opencascade::handle<IGESData_Protocol> &  ) ) static_cast<void (IGESData_BasicEditor::*)( const opencascade::handle<IGESData_Protocol> &  ) >(&IGESData_BasicEditor::Init),
             R"#(Initialize a Basic Editor, with a new IGESModel, ready to run)#"  , py::arg("protocol"))
        .def("Init",
             (void (IGESData_BasicEditor::*)( const opencascade::handle<IGESData_IGESModel> & ,  const opencascade::handle<IGESData_Protocol> &  ) ) static_cast<void (IGESData_BasicEditor::*)( const opencascade::handle<IGESData_IGESModel> & ,  const opencascade::handle<IGESData_Protocol> &  ) >(&IGESData_BasicEditor::Init),
             R"#(Initialize a Basic Editor for IGES Data, ready to run)#"  , py::arg("model"),  py::arg("protocol"))
        .def("Model",
             (opencascade::handle<IGESData_IGESModel> (IGESData_BasicEditor::*)() const) static_cast<opencascade::handle<IGESData_IGESModel> (IGESData_BasicEditor::*)() const>(&IGESData_BasicEditor::Model),
             R"#(Returns the designated model)#" )
        .def("SetUnitFlag",
             (Standard_Boolean (IGESData_BasicEditor::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (IGESData_BasicEditor::*)( const Standard_Integer  ) >(&IGESData_BasicEditor::SetUnitFlag),
             R"#(Sets a new unit from its flag (param 14 of Global Section) Returns True if done, False if <flag> is incorrect)#"  , py::arg("flag"))
        .def("SetUnitValue",
             (Standard_Boolean (IGESData_BasicEditor::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (IGESData_BasicEditor::*)( const Standard_Real  ) >(&IGESData_BasicEditor::SetUnitValue),
             R"#(Sets a new unit from its value in meters (rounded to the closest one, max gap 1%) Returns True if done, False if <val> is too far from a suitable value)#"  , py::arg("val"))
        .def("SetUnitName",
             (Standard_Boolean (IGESData_BasicEditor::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (IGESData_BasicEditor::*)( const Standard_CString  ) >(&IGESData_BasicEditor::SetUnitName),
             R"#(Sets a new unit from its name (param 15 of Global Section) Returns True if done, False if <name> is incorrect Remark : if <flag> has been set to 3 (user defined), <name> is then free)#"  , py::arg("name"))
        .def("ApplyUnit",
             (void (IGESData_BasicEditor::*)( const Standard_Boolean  ) ) static_cast<void (IGESData_BasicEditor::*)( const Standard_Boolean  ) >(&IGESData_BasicEditor::ApplyUnit),
             R"#(Applies unit value to convert header data : Resolution, MaxCoord, MaxLineWeight Applies unit only once after SetUnit... has been called, if <enforce> is given as True. It can be called just before writing the model to a file, i.e. when definitive values are finally known)#"  , py::arg("enforce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ComputeStatus",
             (void (IGESData_BasicEditor::*)() ) static_cast<void (IGESData_BasicEditor::*)() >(&IGESData_BasicEditor::ComputeStatus),
             R"#(Performs the re-computation of status on the whole model (Subordinate Status and Use Flag of each IGES Entity), which can have required values according the way they are referenced (see definitions of Logical use, Physical use, etc...))#" )
        .def("AutoCorrect",
             (Standard_Boolean (IGESData_BasicEditor::*)( const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<Standard_Boolean (IGESData_BasicEditor::*)( const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESData_BasicEditor::AutoCorrect),
             R"#(Performs auto-correction on an IGESEntity Returns True if something has changed, False if nothing done.)#"  , py::arg("ent"))
        .def("AutoCorrectModel",
             (Standard_Integer (IGESData_BasicEditor::*)() ) static_cast<Standard_Integer (IGESData_BasicEditor::*)() >(&IGESData_BasicEditor::AutoCorrectModel),
             R"#(Performs auto-correction on the whole Model Returns the count of modified entities)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("UnitNameFlag_s",
                    (Standard_Integer (*)( const Standard_CString  ) ) static_cast<Standard_Integer (*)( const Standard_CString  ) >(&IGESData_BasicEditor::UnitNameFlag),
                    R"#(From the name of unit, computes flag number, 0 if incorrect (in this case, user defined entity remains possible))#"  , py::arg("name"))
        .def_static("UnitFlagValue_s",
                    (Standard_Real (*)( const Standard_Integer  ) ) static_cast<Standard_Real (*)( const Standard_Integer  ) >(&IGESData_BasicEditor::UnitFlagValue),
                    R"#(From the flag of unit, determines value in MM, 0 if incorrect)#"  , py::arg("flag"))
        .def_static("UnitFlagName_s",
                    (Standard_CString (*)( const Standard_Integer  ) ) static_cast<Standard_CString (*)( const Standard_Integer  ) >(&IGESData_BasicEditor::UnitFlagName),
                    R"#(From the flag of unit, determines its name, "" if incorrect)#"  , py::arg("flag"))
        .def_static("IGESVersionName_s",
                    (Standard_CString (*)( const Standard_Integer  ) ) static_cast<Standard_CString (*)( const Standard_Integer  ) >(&IGESData_BasicEditor::IGESVersionName),
                    R"#(From the flag of IGES version, returns name, "" if incorrect)#"  , py::arg("flag"))
        .def_static("IGESVersionMax_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&IGESData_BasicEditor::IGESVersionMax),
                    R"#(Returns the maximum allowed value for IGESVersion Flag)#" )
        .def_static("DraftingName_s",
                    (Standard_CString (*)( const Standard_Integer  ) ) static_cast<Standard_CString (*)( const Standard_Integer  ) >(&IGESData_BasicEditor::DraftingName),
                    R"#(From the flag of drafting standard, returns name, "" if incorrect)#"  , py::arg("flag"))
        .def_static("DraftingMax_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&IGESData_BasicEditor::DraftingMax),
                    R"#(Returns the maximum allowed value for Drafting Flag)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_DefSwitch , shared_ptr<IGESData_DefSwitch>  >>(m.attr("IGESData_DefSwitch"))
        .def(py::init<  >()  )
    // methods
        .def("SetVoid",
             (void (IGESData_DefSwitch::*)() ) static_cast<void (IGESData_DefSwitch::*)() >(&IGESData_DefSwitch::SetVoid),
             R"#(sets DefSwitch to "Void" status (in file : Integer = 0))#" )
        .def("SetReference",
             (void (IGESData_DefSwitch::*)() ) static_cast<void (IGESData_DefSwitch::*)() >(&IGESData_DefSwitch::SetReference),
             R"#(sets DefSwitch to "Reference" Status (in file : Integer < 0))#" )
        .def("SetRank",
             (void (IGESData_DefSwitch::*)( const Standard_Integer  ) ) static_cast<void (IGESData_DefSwitch::*)( const Standard_Integer  ) >(&IGESData_DefSwitch::SetRank),
             R"#(sets DefSwitch to "Rank" with a Value (in file : Integer > 0))#"  , py::arg("val"))
        .def("DefType",
             (IGESData_DefType (IGESData_DefSwitch::*)() const) static_cast<IGESData_DefType (IGESData_DefSwitch::*)() const>(&IGESData_DefSwitch::DefType),
             R"#(returns DefType status (Void,Reference,Rank))#" )
        .def("Value",
             (Standard_Integer (IGESData_DefSwitch::*)() const) static_cast<Standard_Integer (IGESData_DefSwitch::*)() const>(&IGESData_DefSwitch::Value),
             R"#(returns Value as Integer (sensefull for a Rank))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_DirChecker , shared_ptr<IGESData_DirChecker>  >>(m.attr("IGESData_DirChecker"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer >()  , py::arg("atype") )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("atype"),  py::arg("aform") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("atype"),  py::arg("aform1"),  py::arg("aform2") )
    // methods
        .def("IsSet",
             (Standard_Boolean (IGESData_DirChecker::*)() const) static_cast<Standard_Boolean (IGESData_DirChecker::*)() const>(&IGESData_DirChecker::IsSet),
             R"#(Returns True if at least one criterium has already been set Allows user to store a DirChecker (static variable) then ask if it has been set before setting it)#" )
        .def("SetDefault",
             (void (IGESData_DirChecker::*)() ) static_cast<void (IGESData_DirChecker::*)() >(&IGESData_DirChecker::SetDefault),
             R"#(Sets a DirChecker with most current criteria, that is : Structure Ignored ( worths call Structure(crit = DefVoid) ))#" )
        .def("Structure",
             (void (IGESData_DirChecker::*)( const IGESData_DefType  ) ) static_cast<void (IGESData_DirChecker::*)( const IGESData_DefType  ) >(&IGESData_DirChecker::Structure),
             R"#(Sets Structure criterium. If crit is DefVoid, Ignored : should not be defined If crit is DefReference, Required : must be defined Other values are not taken in account)#"  , py::arg("crit"))
        .def("LineFont",
             (void (IGESData_DirChecker::*)( const IGESData_DefType  ) ) static_cast<void (IGESData_DirChecker::*)( const IGESData_DefType  ) >(&IGESData_DirChecker::LineFont),
             R"#(Sets LineFont criterium If crit is DefVoid, Ignored : should not be defined If crit is DefAny, Required : must be defined (value or ref) If crit is DefValue, Required as a Value (error if Reference) Other values are not taken in account)#"  , py::arg("crit"))
        .def("LineWeight",
             (void (IGESData_DirChecker::*)( const IGESData_DefType  ) ) static_cast<void (IGESData_DirChecker::*)( const IGESData_DefType  ) >(&IGESData_DirChecker::LineWeight),
             R"#(Sets LineWeight criterium If crit is DefVoid, Ignored : should not be defined If crit is DefValue, Required Other values are not taken in account)#"  , py::arg("crit"))
        .def("Color",
             (void (IGESData_DirChecker::*)( const IGESData_DefType  ) ) static_cast<void (IGESData_DirChecker::*)( const IGESData_DefType  ) >(&IGESData_DirChecker::Color),
             R"#(Sets Color criterium If crit is DefVoid, Ignored : should not be defined If crit is DefAny, Required : must be defined (value or ref) Other values are not taken in account)#"  , py::arg("crit"))
        .def("GraphicsIgnored",
             (void (IGESData_DirChecker::*)( const Standard_Integer  ) ) static_cast<void (IGESData_DirChecker::*)( const Standard_Integer  ) >(&IGESData_DirChecker::GraphicsIgnored),
             R"#(Sets Graphics data (LineFont, LineWeight, Color, Level, View) to be ignored according value of Hierarchy status : If hierarchy is not given, they are Ignored any way (that is, they should not be defined) If hierarchy is given, Graphics are Ignored if the Hierarchy status has the value given in argument "hierarchy")#"  , py::arg("hierarchy")=static_cast<const Standard_Integer>(- 1))
        .def("BlankStatusIgnored",
             (void (IGESData_DirChecker::*)() ) static_cast<void (IGESData_DirChecker::*)() >(&IGESData_DirChecker::BlankStatusIgnored),
             R"#(Sets Blank Status to be ignored (should not be defined, or its value should be 0))#" )
        .def("BlankStatusRequired",
             (void (IGESData_DirChecker::*)( const Standard_Integer  ) ) static_cast<void (IGESData_DirChecker::*)( const Standard_Integer  ) >(&IGESData_DirChecker::BlankStatusRequired),
             R"#(Sets Blank Status to be required at a given value)#"  , py::arg("val"))
        .def("SubordinateStatusIgnored",
             (void (IGESData_DirChecker::*)() ) static_cast<void (IGESData_DirChecker::*)() >(&IGESData_DirChecker::SubordinateStatusIgnored),
             R"#(Sets Subordinate Status to be ignored (should not be defined, or its value should be 0))#" )
        .def("SubordinateStatusRequired",
             (void (IGESData_DirChecker::*)( const Standard_Integer  ) ) static_cast<void (IGESData_DirChecker::*)( const Standard_Integer  ) >(&IGESData_DirChecker::SubordinateStatusRequired),
             R"#(Sets Subordinate Status to be required at a given value)#"  , py::arg("val"))
        .def("UseFlagIgnored",
             (void (IGESData_DirChecker::*)() ) static_cast<void (IGESData_DirChecker::*)() >(&IGESData_DirChecker::UseFlagIgnored),
             R"#(Sets Blank Status to be ignored (should not be defined, or its value should be 0))#" )
        .def("UseFlagRequired",
             (void (IGESData_DirChecker::*)( const Standard_Integer  ) ) static_cast<void (IGESData_DirChecker::*)( const Standard_Integer  ) >(&IGESData_DirChecker::UseFlagRequired),
             R"#(Sets Blank Status to be required at a given value Give -1 to demand UseFlag not zero (but no precise value req.))#"  , py::arg("val"))
        .def("HierarchyStatusIgnored",
             (void (IGESData_DirChecker::*)() ) static_cast<void (IGESData_DirChecker::*)() >(&IGESData_DirChecker::HierarchyStatusIgnored),
             R"#(Sets Hierarchy Status to be ignored (should not be defined, or its value should be 0))#" )
        .def("HierarchyStatusRequired",
             (void (IGESData_DirChecker::*)( const Standard_Integer  ) ) static_cast<void (IGESData_DirChecker::*)( const Standard_Integer  ) >(&IGESData_DirChecker::HierarchyStatusRequired),
             R"#(Sets Hierarchy Status to be required at a given value)#"  , py::arg("val"))
        .def("Check",
             (void (IGESData_DirChecker::*)( opencascade::handle<Interface_Check> & ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<void (IGESData_DirChecker::*)( opencascade::handle<Interface_Check> & ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_DirChecker::Check),
             R"#(Performs the Checks on an IGESEntity, according to the recorded criteria In addition, does minimal Checks, such as admitted range for Status, or presence of Error status in some data (Color, ...))#"  , py::arg("ach"),  py::arg("ent"))
        .def("CheckTypeAndForm",
             (void (IGESData_DirChecker::*)( opencascade::handle<Interface_Check> & ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<void (IGESData_DirChecker::*)( opencascade::handle<Interface_Check> & ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_DirChecker::CheckTypeAndForm),
             R"#(Performs a Check only on Values of Type Number and Form Number This allows to do a check on an Entity not yet completely filled but of which Type and Form Number have been already set)#"  , py::arg("ach"),  py::arg("ent"))
        .def("Correct",
             (Standard_Boolean (IGESData_DirChecker::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<Standard_Boolean (IGESData_DirChecker::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_DirChecker::Correct),
             R"#(Corrects the Directory Entry of an IGES Entity as far as it is possible according recorded criteria without any ambiguity : - if a numeric Status is required a given value, this value is enforced - if an item is required to be Void, or if it recorded as Erroneous, it is cleared (set to Void) - Type Number is enforced - finally Form Number is enforced only if one and only Value is admitted (no range, see Constructors of DirChecker))#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_DirPart , shared_ptr<IGESData_DirPart>  >>(m.attr("IGESData_DirPart"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESData_DirPart::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_CString ,  const Standard_CString ,  const Standard_CString ,  const Standard_CString  ) ) static_cast<void (IGESData_DirPart::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_CString ,  const Standard_CString ,  const Standard_CString ,  const Standard_CString  ) >(&IGESData_DirPart::Init),
             R"#(fills DirPart with consistant data read from file)#"  , py::arg("i1"),  py::arg("i2"),  py::arg("i3"),  py::arg("i4"),  py::arg("i5"),  py::arg("i6"),  py::arg("i7"),  py::arg("i8"),  py::arg("i9"),  py::arg("i19"),  py::arg("i11"),  py::arg("i12"),  py::arg("i13"),  py::arg("i14"),  py::arg("i15"),  py::arg("i16"),  py::arg("i17"),  py::arg("res1"),  py::arg("res2"),  py::arg("label"),  py::arg("subscript"))
        .def("Type",
             (IGESData_IGESType (IGESData_DirPart::*)() const) static_cast<IGESData_IGESType (IGESData_DirPart::*)() const>(&IGESData_DirPart::Type),
             R"#(returns "type" and "form" info, used to recognize the entity)#" )
    // methods using call by reference i.s.o. return
        .def("Values",
             []( IGESData_DirPart &self , const Standard_CString res1,const Standard_CString res2,const Standard_CString label,const Standard_CString subscript ){ Standard_Integer  i1; Standard_Integer  i2; Standard_Integer  i3; Standard_Integer  i4; Standard_Integer  i5; Standard_Integer  i6; Standard_Integer  i7; Standard_Integer  i8; Standard_Integer  i9; Standard_Integer  i19; Standard_Integer  i11; Standard_Integer  i12; Standard_Integer  i13; Standard_Integer  i14; Standard_Integer  i15; Standard_Integer  i16; Standard_Integer  i17; self.Values(i1,i2,i3,i4,i5,i6,i7,i8,i9,i19,i11,i12,i13,i14,i15,i16,i17,res1,res2,label,subscript); return std::make_tuple(i1,i2,i3,i4,i5,i6,i7,i8,i9,i19,i11,i12,i13,i14,i15,i16,i17); },
             R"#(returns values recorded in DirPart (content of cstrings are modified))#"  , py::arg("res1"),  py::arg("res2"),  py::arg("label"),  py::arg("subscript"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_FileRecognizer ,opencascade::handle<IGESData_FileRecognizer> ,Py_IGESData_FileRecognizer , Standard_Transient >>(m.attr("IGESData_FileRecognizer"))
    // methods
        .def("Evaluate",
             (Standard_Boolean (IGESData_FileRecognizer::*)( const IGESData_IGESType & ,  opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<Standard_Boolean (IGESData_FileRecognizer::*)( const IGESData_IGESType & ,  opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESData_FileRecognizer::Evaluate),
             R"#(Evaluates if recognition has a result, returns it if yes In case of success, Returns True and puts result in "res" In case of Failure, simply Returns False Works by calling deferred method Eval, and in case of failure, looks for Added Recognizers to work)#"  , py::arg("akey"),  py::arg("res"))
        .def("Result",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_FileRecognizer::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_FileRecognizer::*)() const>(&IGESData_FileRecognizer::Result),
             R"#(Returns result of last recognition (call of Evaluate))#" )
        .def("Add",
             (void (IGESData_FileRecognizer::*)( const opencascade::handle<IGESData_FileRecognizer> &  ) ) static_cast<void (IGESData_FileRecognizer::*)( const opencascade::handle<IGESData_FileRecognizer> &  ) >(&IGESData_FileRecognizer::Add),
             R"#(Adds a new Recognizer to the Compound, at the end Several calls to Add work by adding in the order of calls : Hence, when Eval has failed to recognize, Evaluate will call Evaluate from the first added Recognizer if there is one, and to the second if there is still no result, and so on)#"  , py::arg("reco"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_FileRecognizer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_FileRecognizer::*)() const>(&IGESData_FileRecognizer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_FileRecognizer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_FileRecognizer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_GeneralModule ,opencascade::handle<IGESData_GeneralModule> ,Py_IGESData_GeneralModule , Interface_GeneralModule >>(m.attr("IGESData_GeneralModule"))
    // methods
        .def("FillSharedCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  Interface_EntityIterator &  ) const>(&IGESData_GeneralModule::FillSharedCase),
             R"#(Fills the list of Entities shared by an IGESEntity <ent>, according a Case Number <CN> (formerly computed by CaseNum). Considers Properties and Directory Part, and calls OwnSharedCase (which is adapted to each Type of Entity))#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("OwnSharedCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const>(&IGESData_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("ListImpliedCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  Interface_EntityIterator &  ) const>(&IGESData_GeneralModule::ListImpliedCase),
             R"#(Lists the Implied References of <ent>. Here, these are the Associativities, plus the Entities defined by OwnSharedCase)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("OwnImpliedCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const>(&IGESData_GeneralModule::OwnImpliedCase),
             R"#(Specific list of Entities implied by a given IGESEntity <ent> (in addition to Associativities). By default, there are none, but this method can be redefined as required)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("CheckCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESData_GeneralModule::CheckCase),
             R"#(Semantic Checking of an IGESEntity. Performs general Checks, which use DirChecker, then call OwnCheck which does a check specific for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<IGESData_DirChecker (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESData_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("CanCopy",
             (Standard_Boolean (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> &  ) const>(&IGESData_GeneralModule::CanCopy),
             R"#(Specific answer to the question "is Copy properly implemented" For IGES, answer is always True)#"  , py::arg("CN"),  py::arg("ent"))
        .def("NewVoid",
             (Standard_Boolean (IGESData_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IGESData_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const>(&IGESData_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("CopyCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> & ,  Interface_CopyTool &  ) const>(&IGESData_GeneralModule::CopyCase),
             R"#(Copy ("Deep") from <entfrom> to <entto> (same type) by using a CopyTool which provides its working Map. For IGESEntities, Copies general data (Directory Part, List of Properties) and call OwnCopyCase)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnCopyCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const>(&IGESData_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("RenewImpliedCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> & ,  const Interface_CopyTool &  ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> & ,  const Interface_CopyTool &  ) const>(&IGESData_GeneralModule::RenewImpliedCase),
             R"#(Renewing of Implied References. For IGESEntities, Copies general data(List of Associativities) and calls OwnRenewCase)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnRenewCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_CopyTool &  ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_CopyTool &  ) const>(&IGESData_GeneralModule::OwnRenewCase),
             R"#(Renews parameters which are specific of each Type of Entity : the provided default does nothing, but this method may be redefined as required)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("WhenDeleteCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Standard_Boolean  ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Standard_Boolean  ) const>(&IGESData_GeneralModule::WhenDeleteCase),
             R"#(Prepares an IGES Entity for delete : works on directory part then calls OwnDeleteCase While dispatch requires to copy the entities, <dispatched> is ignored, entities are cleared in any case)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dispatched"))
        .def("OwnDeleteCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_GeneralModule::OwnDeleteCase),
             R"#(Specific preparation for delete, acts on own parameters Default does nothing, to be redefined as required)#"  , py::arg("CN"),  py::arg("ent"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const>(&IGESData_GeneralModule::Name),
             R"#(Returns the name of an IGES Entity (its NameValue) Can be redefined for an even more specific case ...)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_GeneralModule::*)() const>(&IGESData_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_GeneralModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_GeneralModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_GlobalNodeOfSpecificLib ,opencascade::handle<IGESData_GlobalNodeOfSpecificLib>  , Standard_Transient >>(m.attr("IGESData_GlobalNodeOfSpecificLib"))
        .def(py::init<  >()  )
    // methods
        .def("Add",
             (void (IGESData_GlobalNodeOfSpecificLib::*)( const opencascade::handle<IGESData_SpecificModule> & ,  const opencascade::handle<IGESData_Protocol> &  ) ) static_cast<void (IGESData_GlobalNodeOfSpecificLib::*)( const opencascade::handle<IGESData_SpecificModule> & ,  const opencascade::handle<IGESData_Protocol> &  ) >(&IGESData_GlobalNodeOfSpecificLib::Add),
             R"#(Adds a Module bound with a Protocol to the list : does nothing if already in the list, THAT IS, Same Type (exact match) and Same State (that is, IsEqual is not required) Once added, stores its attached Protocol in correspondance)#"  , py::arg("amodule"),  py::arg("aprotocol"))
        .def("Module",
             (const opencascade::handle<IGESData_SpecificModule> & (IGESData_GlobalNodeOfSpecificLib::*)() const) static_cast<const opencascade::handle<IGESData_SpecificModule> & (IGESData_GlobalNodeOfSpecificLib::*)() const>(&IGESData_GlobalNodeOfSpecificLib::Module),
             R"#(Returns the Module stored in a given GlobalNode)#" )
        .def("Protocol",
             (const opencascade::handle<IGESData_Protocol> & (IGESData_GlobalNodeOfSpecificLib::*)() const) static_cast<const opencascade::handle<IGESData_Protocol> & (IGESData_GlobalNodeOfSpecificLib::*)() const>(&IGESData_GlobalNodeOfSpecificLib::Protocol),
             R"#(Returns the attached Protocol stored in a given GlobalNode)#" )
        .def("Next",
             (const opencascade::handle<IGESData_GlobalNodeOfSpecificLib> & (IGESData_GlobalNodeOfSpecificLib::*)() const) static_cast<const opencascade::handle<IGESData_GlobalNodeOfSpecificLib> & (IGESData_GlobalNodeOfSpecificLib::*)() const>(&IGESData_GlobalNodeOfSpecificLib::Next),
             R"#(Returns the Next GlobalNode. If none is defined, returned value is a Null Handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_GlobalNodeOfSpecificLib::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_GlobalNodeOfSpecificLib::*)() const>(&IGESData_GlobalNodeOfSpecificLib::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_GlobalNodeOfSpecificLib::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_GlobalNodeOfSpecificLib::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_GlobalNodeOfWriterLib ,opencascade::handle<IGESData_GlobalNodeOfWriterLib>  , Standard_Transient >>(m.attr("IGESData_GlobalNodeOfWriterLib"))
        .def(py::init<  >()  )
    // methods
        .def("Add",
             (void (IGESData_GlobalNodeOfWriterLib::*)( const opencascade::handle<IGESData_ReadWriteModule> & ,  const opencascade::handle<IGESData_Protocol> &  ) ) static_cast<void (IGESData_GlobalNodeOfWriterLib::*)( const opencascade::handle<IGESData_ReadWriteModule> & ,  const opencascade::handle<IGESData_Protocol> &  ) >(&IGESData_GlobalNodeOfWriterLib::Add),
             R"#(Adds a Module bound with a Protocol to the list : does nothing if already in the list, THAT IS, Same Type (exact match) and Same State (that is, IsEqual is not required) Once added, stores its attached Protocol in correspondance)#"  , py::arg("amodule"),  py::arg("aprotocol"))
        .def("Module",
             (const opencascade::handle<IGESData_ReadWriteModule> & (IGESData_GlobalNodeOfWriterLib::*)() const) static_cast<const opencascade::handle<IGESData_ReadWriteModule> & (IGESData_GlobalNodeOfWriterLib::*)() const>(&IGESData_GlobalNodeOfWriterLib::Module),
             R"#(Returns the Module stored in a given GlobalNode)#" )
        .def("Protocol",
             (const opencascade::handle<IGESData_Protocol> & (IGESData_GlobalNodeOfWriterLib::*)() const) static_cast<const opencascade::handle<IGESData_Protocol> & (IGESData_GlobalNodeOfWriterLib::*)() const>(&IGESData_GlobalNodeOfWriterLib::Protocol),
             R"#(Returns the attached Protocol stored in a given GlobalNode)#" )
        .def("Next",
             (const opencascade::handle<IGESData_GlobalNodeOfWriterLib> & (IGESData_GlobalNodeOfWriterLib::*)() const) static_cast<const opencascade::handle<IGESData_GlobalNodeOfWriterLib> & (IGESData_GlobalNodeOfWriterLib::*)() const>(&IGESData_GlobalNodeOfWriterLib::Next),
             R"#(Returns the Next GlobalNode. If none is defined, returned value is a Null Handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_GlobalNodeOfWriterLib::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_GlobalNodeOfWriterLib::*)() const>(&IGESData_GlobalNodeOfWriterLib::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_GlobalNodeOfWriterLib::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_GlobalNodeOfWriterLib::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_GlobalSection , shared_ptr<IGESData_GlobalSection>  >>(m.attr("IGESData_GlobalSection"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESData_GlobalSection::*)( const opencascade::handle<Interface_ParamSet> & ,  opencascade::handle<Interface_Check> &  ) ) static_cast<void (IGESData_GlobalSection::*)( const opencascade::handle<Interface_ParamSet> & ,  opencascade::handle<Interface_Check> &  ) >(&IGESData_GlobalSection::Init),
             R"#(Fills GlobalSection from a ParamSet (i.e. taken from file) undefined parameters do not change default values when defined Fills Check about Corrections or Fails)#"  , py::arg("params"),  py::arg("ach"))
        .def("CopyRefs",
             (void (IGESData_GlobalSection::*)() ) static_cast<void (IGESData_GlobalSection::*)() >(&IGESData_GlobalSection::CopyRefs),
             R"#(Copies data referenced by Handle (that is, Strings) usefull to "isolate" a GlobalSection after copy by "=" (from a Model to another Model for instance))#" )
        .def("Params",
             (opencascade::handle<Interface_ParamSet> (IGESData_GlobalSection::*)() const) static_cast<opencascade::handle<Interface_ParamSet> (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::Params),
             R"#(Returns all contained data in the form of a ParamSet Remark : Strings are given under Hollerith form)#" )
        .def("TranslatedFromHollerith",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const>(&IGESData_GlobalSection::TranslatedFromHollerith),
             R"#(Returns a string withpout its Hollerith marks (nnnH ahead). Remark : all strings stored in GlobalSection are expurged from Hollerith informations (without nnnH) If <astr> is not Hollerith form, it is simply copied)#"  , py::arg("astr"))
        .def("Separator",
             (Standard_Character (IGESData_GlobalSection::*)() const) static_cast<Standard_Character (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::Separator),
             R"#(Returns the parameter delimiter character.)#" )
        .def("EndMark",
             (Standard_Character (IGESData_GlobalSection::*)() const) static_cast<Standard_Character (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::EndMark),
             R"#(Returns the record delimiter character.)#" )
        .def("SendName",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::SendName),
             R"#(Returns the name of the sending system.)#" )
        .def("FileName",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::FileName),
             R"#(Returns the name of the IGES file.)#" )
        .def("SystemId",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::SystemId),
             R"#(Returns the Native System ID of the system that created the IGES file.)#" )
        .def("InterfaceVersion",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::InterfaceVersion),
             R"#(Returns the name of the pre-processor used to write the IGES file.)#" )
        .def("IntegerBits",
             (Standard_Integer (IGESData_GlobalSection::*)() const) static_cast<Standard_Integer (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::IntegerBits),
             R"#(Returns the number of binary bits for integer representations.)#" )
        .def("MaxPower10Single",
             (Standard_Integer (IGESData_GlobalSection::*)() const) static_cast<Standard_Integer (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::MaxPower10Single),
             R"#(Returns the maximum power of a decimal representation of a single-precision floating point number in the sending system.)#" )
        .def("MaxDigitsSingle",
             (Standard_Integer (IGESData_GlobalSection::*)() const) static_cast<Standard_Integer (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::MaxDigitsSingle),
             R"#(None)#" )
        .def("MaxPower10Double",
             (Standard_Integer (IGESData_GlobalSection::*)() const) static_cast<Standard_Integer (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::MaxPower10Double),
             R"#(Returns the maximum power of a decimal representation of a double-precision floating point number in the sending system.)#" )
        .def("MaxDigitsDouble",
             (Standard_Integer (IGESData_GlobalSection::*)() const) static_cast<Standard_Integer (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::MaxDigitsDouble),
             R"#(None)#" )
        .def("ReceiveName",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::ReceiveName),
             R"#(Returns the name of the receiving system.)#" )
        .def("Scale",
             (Standard_Real (IGESData_GlobalSection::*)() const) static_cast<Standard_Real (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::Scale),
             R"#(Returns the scale used in the IGES file.)#" )
        .def("UnitFlag",
             (Standard_Integer (IGESData_GlobalSection::*)() const) static_cast<Standard_Integer (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::UnitFlag),
             R"#(Returns the unit flag that was used to write the IGES file.)#" )
        .def("UnitName",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::UnitName),
             R"#(Returns the name of the unit the IGES file was written in.)#" )
        .def("LineWeightGrad",
             (Standard_Integer (IGESData_GlobalSection::*)() const) static_cast<Standard_Integer (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::LineWeightGrad),
             R"#(Returns the maximum number of line weight gradations.)#" )
        .def("MaxLineWeight",
             (Standard_Real (IGESData_GlobalSection::*)() const) static_cast<Standard_Real (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::MaxLineWeight),
             R"#(Returns the of maximum line weight width in IGES file units.)#" )
        .def("Date",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::Date),
             R"#(Returns the IGES file creation date.)#" )
        .def("Resolution",
             (Standard_Real (IGESData_GlobalSection::*)() const) static_cast<Standard_Real (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::Resolution),
             R"#(Returns the resolution used in the IGES file.)#" )
        .def("MaxCoord",
             (Standard_Real (IGESData_GlobalSection::*)() const) static_cast<Standard_Real (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::MaxCoord),
             R"#(Returns the approximate maximum coordinate value found in the model.)#" )
        .def("HasMaxCoord",
             (Standard_Boolean (IGESData_GlobalSection::*)() const) static_cast<Standard_Boolean (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::HasMaxCoord),
             R"#(Returns True if the approximate maximum coordinate value found in the model is greater than 0.)#" )
        .def("AuthorName",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::AuthorName),
             R"#(Returns the name of the IGES file author.)#" )
        .def("CompanyName",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::CompanyName),
             R"#(Returns the name of the company where the IGES file was written.)#" )
        .def("IGESVersion",
             (Standard_Integer (IGESData_GlobalSection::*)() const) static_cast<Standard_Integer (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::IGESVersion),
             R"#(Returns the IGES version that the IGES file was written in.)#" )
        .def("DraftingStandard",
             (Standard_Integer (IGESData_GlobalSection::*)() const) static_cast<Standard_Integer (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::DraftingStandard),
             R"#(None)#" )
        .def("LastChangeDate",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::LastChangeDate),
             R"#(Returns the date and time when the model was created or last modified (for IGES 5.1 and later).)#" )
        .def("HasLastChangeDate",
             (Standard_Boolean (IGESData_GlobalSection::*)() const) static_cast<Standard_Boolean (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::HasLastChangeDate),
             R"#(Returns True if the date and time when the model was created or last modified are specified, i.e. not defaulted to NULL.)#" )
        .def("SetLastChangeDate",
             (void (IGESData_GlobalSection::*)() ) static_cast<void (IGESData_GlobalSection::*)() >(&IGESData_GlobalSection::SetLastChangeDate),
             R"#(None)#" )
        .def("ApplicationProtocol",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::ApplicationProtocol),
             R"#(None)#" )
        .def("HasApplicationProtocol",
             (Standard_Boolean (IGESData_GlobalSection::*)() const) static_cast<Standard_Boolean (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::HasApplicationProtocol),
             R"#(None)#" )
        .def("UnitValue",
             (Standard_Real (IGESData_GlobalSection::*)() const) static_cast<Standard_Real (IGESData_GlobalSection::*)() const>(&IGESData_GlobalSection::UnitValue),
             R"#(Returns the unit value (in meters) that the IGES file was written in.)#" )
        .def("SetSeparator",
             (void (IGESData_GlobalSection::*)( const Standard_Character  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Character  ) >(&IGESData_GlobalSection::SetSeparator),
             R"#(None)#"  , py::arg("val"))
        .def("SetEndMark",
             (void (IGESData_GlobalSection::*)( const Standard_Character  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Character  ) >(&IGESData_GlobalSection::SetEndMark),
             R"#(None)#"  , py::arg("val"))
        .def("SetSendName",
             (void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_GlobalSection::SetSendName),
             R"#(None)#"  , py::arg("val"))
        .def("SetFileName",
             (void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_GlobalSection::SetFileName),
             R"#(None)#"  , py::arg("val"))
        .def("SetSystemId",
             (void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_GlobalSection::SetSystemId),
             R"#(None)#"  , py::arg("val"))
        .def("SetInterfaceVersion",
             (void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_GlobalSection::SetInterfaceVersion),
             R"#(None)#"  , py::arg("val"))
        .def("SetIntegerBits",
             (void (IGESData_GlobalSection::*)( const Standard_Integer  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Integer  ) >(&IGESData_GlobalSection::SetIntegerBits),
             R"#(None)#"  , py::arg("val"))
        .def("SetMaxPower10Single",
             (void (IGESData_GlobalSection::*)( const Standard_Integer  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Integer  ) >(&IGESData_GlobalSection::SetMaxPower10Single),
             R"#(None)#"  , py::arg("val"))
        .def("SetMaxDigitsSingle",
             (void (IGESData_GlobalSection::*)( const Standard_Integer  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Integer  ) >(&IGESData_GlobalSection::SetMaxDigitsSingle),
             R"#(None)#"  , py::arg("val"))
        .def("SetMaxPower10Double",
             (void (IGESData_GlobalSection::*)( const Standard_Integer  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Integer  ) >(&IGESData_GlobalSection::SetMaxPower10Double),
             R"#(None)#"  , py::arg("val"))
        .def("SetMaxDigitsDouble",
             (void (IGESData_GlobalSection::*)( const Standard_Integer  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Integer  ) >(&IGESData_GlobalSection::SetMaxDigitsDouble),
             R"#(None)#"  , py::arg("val"))
        .def("SetReceiveName",
             (void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_GlobalSection::SetReceiveName),
             R"#(None)#"  , py::arg("val"))
        .def("SetScale",
             (void (IGESData_GlobalSection::*)( const Standard_Real  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Real  ) >(&IGESData_GlobalSection::SetScale),
             R"#(None)#"  , py::arg("val"))
        .def("SetUnitFlag",
             (void (IGESData_GlobalSection::*)( const Standard_Integer  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Integer  ) >(&IGESData_GlobalSection::SetUnitFlag),
             R"#(None)#"  , py::arg("val"))
        .def("SetUnitName",
             (void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_GlobalSection::SetUnitName),
             R"#(None)#"  , py::arg("val"))
        .def("SetLineWeightGrad",
             (void (IGESData_GlobalSection::*)( const Standard_Integer  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Integer  ) >(&IGESData_GlobalSection::SetLineWeightGrad),
             R"#(None)#"  , py::arg("val"))
        .def("SetMaxLineWeight",
             (void (IGESData_GlobalSection::*)( const Standard_Real  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Real  ) >(&IGESData_GlobalSection::SetMaxLineWeight),
             R"#(None)#"  , py::arg("val"))
        .def("SetDate",
             (void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_GlobalSection::SetDate),
             R"#(None)#"  , py::arg("val"))
        .def("SetResolution",
             (void (IGESData_GlobalSection::*)( const Standard_Real  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Real  ) >(&IGESData_GlobalSection::SetResolution),
             R"#(None)#"  , py::arg("val"))
        .def("SetMaxCoord",
             (void (IGESData_GlobalSection::*)( const Standard_Real  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Real  ) >(&IGESData_GlobalSection::SetMaxCoord),
             R"#(None)#"  , py::arg("val")=static_cast<const Standard_Real>(0.0))
        .def("MaxMaxCoord",
             (void (IGESData_GlobalSection::*)( const Standard_Real  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Real  ) >(&IGESData_GlobalSection::MaxMaxCoord),
             R"#(None)#"  , py::arg("val")=static_cast<const Standard_Real>(0.0))
        .def("MaxMaxCoords",
             (void (IGESData_GlobalSection::*)( const gp_XYZ &  ) ) static_cast<void (IGESData_GlobalSection::*)( const gp_XYZ &  ) >(&IGESData_GlobalSection::MaxMaxCoords),
             R"#(None)#"  , py::arg("xyz"))
        .def("SetAuthorName",
             (void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_GlobalSection::SetAuthorName),
             R"#(None)#"  , py::arg("val"))
        .def("SetCompanyName",
             (void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_GlobalSection::SetCompanyName),
             R"#(None)#"  , py::arg("val"))
        .def("SetIGESVersion",
             (void (IGESData_GlobalSection::*)( const Standard_Integer  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Integer  ) >(&IGESData_GlobalSection::SetIGESVersion),
             R"#(None)#"  , py::arg("val"))
        .def("SetDraftingStandard",
             (void (IGESData_GlobalSection::*)( const Standard_Integer  ) ) static_cast<void (IGESData_GlobalSection::*)( const Standard_Integer  ) >(&IGESData_GlobalSection::SetDraftingStandard),
             R"#(None)#"  , py::arg("val"))
        .def("SetLastChangeDate",
             (void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_GlobalSection::SetLastChangeDate),
             R"#(None)#"  , py::arg("val"))
        .def("SetApplicationProtocol",
             (void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_GlobalSection::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_GlobalSection::SetApplicationProtocol),
             R"#(None)#"  , py::arg("val"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NewDateString_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&IGESData_GlobalSection::NewDateString),
                    R"#(Returns a string built from year, month, day, hour, minute and second values. The form of the resulting string is defined as follows: - -1: YYMMDD.HHNNSS, - 0: YYYYMMDD.HHNNSS, - 1: YYYY-MM-DD:HH-NN-SS, where: - YYYY or YY is 4 or 2 digit year, - HH is hour (00-23), - MM is month (01-12), - NN is minute (00-59) - DD is day (01-31), - SS is second (00-59).)#"  , py::arg("year"),  py::arg("month"),  py::arg("day"),  py::arg("hour"),  py::arg("minut"),  py::arg("second"),  py::arg("mode")=static_cast<const Standard_Integer>(- 1))
        .def_static("NewDateString_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer  ) >(&IGESData_GlobalSection::NewDateString),
                    R"#(Converts the string given in the form YYMMDD.HHNNSS or YYYYMMDD.HHNNSS to either YYMMDD.HHNNSS, YYYYMMDD.HHNNSS or YYYY-MM-DD:HH-NN-SS.)#"  , py::arg("date"),  py::arg("mode")=static_cast<const Standard_Integer>(1))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_HArray1OfIGESEntity ,opencascade::handle<IGESData_HArray1OfIGESEntity>  , IGESData_Array1OfIGESEntity , Standard_Transient >>(m.attr("IGESData_HArray1OfIGESEntity"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESData_IGESEntity> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESData_IGESEntity> > & >()  , py::arg("theOther") )
    // methods
        .def("Array1",
             (const IGESData_Array1OfIGESEntity & (IGESData_HArray1OfIGESEntity::*)() const) static_cast<const IGESData_Array1OfIGESEntity & (IGESData_HArray1OfIGESEntity::*)() const>(&IGESData_HArray1OfIGESEntity::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESData_Array1OfIGESEntity & (IGESData_HArray1OfIGESEntity::*)() ) static_cast<IGESData_Array1OfIGESEntity & (IGESData_HArray1OfIGESEntity::*)() >(&IGESData_HArray1OfIGESEntity::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_HArray1OfIGESEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_HArray1OfIGESEntity::*)() const>(&IGESData_HArray1OfIGESEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_HArray1OfIGESEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_HArray1OfIGESEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_IGESDumper , shared_ptr<IGESData_IGESDumper>  >>(m.attr("IGESData_IGESDumper"))
        .def(py::init< const opencascade::handle<IGESData_IGESModel> &,const opencascade::handle<IGESData_Protocol> & >()  , py::arg("model"),  py::arg("protocol") )
    // methods
        .def("PrintDNum",
             (void (IGESData_IGESDumper::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<Message_Messenger> &  ) const) static_cast<void (IGESData_IGESDumper::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<Message_Messenger> &  ) const>(&IGESData_IGESDumper::PrintDNum),
             R"#(Prints onto an output, the "Number of Directory Entry" which corresponds to an IGESEntity in the IGESModel, under the form "D#nnn" (a Null Handle gives D#0))#"  , py::arg("ent"),  py::arg("S"))
        .def("PrintShort",
             (void (IGESData_IGESDumper::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<Message_Messenger> &  ) const) static_cast<void (IGESData_IGESDumper::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<Message_Messenger> &  ) const>(&IGESData_IGESDumper::PrintShort),
             R"#(Prints onto an output, the "Number of Directory Entry" (see PrintDNum) plus IGES Type and Form Numbers, which gives "D#nnn Type nnn Form nnn")#"  , py::arg("ent"),  py::arg("S"))
        .def("Dump",
             (void (IGESData_IGESDumper::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (IGESData_IGESDumper::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer ,  const Standard_Integer  ) const>(&IGESData_IGESDumper::Dump),
             R"#(None)#"  , py::arg("ent"),  py::arg("S"),  py::arg("own"),  py::arg("attached")=static_cast<const Standard_Integer>(- 1))
        .def("OwnDump",
             (void (IGESData_IGESDumper::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESData_IGESDumper::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESData_IGESDumper::OwnDump),
             R"#(Specific Dump for each IGES Entity, call by Dump (just above) <own> is the parameter <own> from Dump)#"  , py::arg("ent"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_IGESEntity ,opencascade::handle<IGESData_IGESEntity>  , Standard_Transient >>(m.attr("IGESData_IGESEntity"))
    // methods
        .def("IGESType",
             (IGESData_IGESType (IGESData_IGESEntity::*)() const) static_cast<IGESData_IGESType (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::IGESType),
             R"#(gives IGES typing info (includes "Type" and "Form" data))#" )
        .def("TypeNumber",
             (Standard_Integer (IGESData_IGESEntity::*)() const) static_cast<Standard_Integer (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::TypeNumber),
             R"#(gives IGES Type Number (often coupled with Form Number))#" )
        .def("FormNumber",
             (Standard_Integer (IGESData_IGESEntity::*)() const) static_cast<Standard_Integer (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::FormNumber),
             R"#(Returns the form number for that type of an IGES entity. The default form number is 0.)#" )
        .def("DirFieldEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_IGESEntity::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_IGESEntity::*)( const Standard_Integer  ) const>(&IGESData_IGESEntity::DirFieldEntity),
             R"#(Returns the Entity which has been recorded for a given Field Number, i.e. without any cast. Maps with : 3 : Structure 4 : LineFont 5 : LevelList 6 : View 7 : Transf(ormation Matrix) 8 : LabelDisplay 13 : Color. Other values give a null handle It can then be of any kind, while specific items have a Type)#"  , py::arg("fieldnum"))
        .def("HasStructure",
             (Standard_Boolean (IGESData_IGESEntity::*)() const) static_cast<Standard_Boolean (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::HasStructure),
             R"#(returns True if an IGESEntity is defined with a Structure (it is normally reserved for certain classes, such as Macros))#" )
        .def("Structure",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_IGESEntity::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::Structure),
             R"#(Returns Structure (used by some types of IGES Entities only) Returns a Null Handle if Structure is not defined)#" )
        .def("DefLineFont",
             (IGESData_DefType (IGESData_IGESEntity::*)() const) static_cast<IGESData_DefType (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::DefLineFont),
             R"#(Returns the definition status of LineFont)#" )
        .def("RankLineFont",
             (Standard_Integer (IGESData_IGESEntity::*)() const) static_cast<Standard_Integer (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::RankLineFont),
             R"#(Returns LineFont definition as an Integer (if defined as Rank) If LineFont is defined as an Entity, returns a negative value)#" )
        .def("LineFont",
             (opencascade::handle<IGESData_LineFontEntity> (IGESData_IGESEntity::*)() const) static_cast<opencascade::handle<IGESData_LineFontEntity> (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::LineFont),
             R"#(Returns LineFont as an Entity (if defined as Reference) Returns a Null Handle if DefLineFont is not "DefReference")#" )
        .def("DefLevel",
             (IGESData_DefList (IGESData_IGESEntity::*)() const) static_cast<IGESData_DefList (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::DefLevel),
             R"#(Returns the definition status of Level)#" )
        .def("Level",
             (Standard_Integer (IGESData_IGESEntity::*)() const) static_cast<Standard_Integer (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::Level),
             R"#(Returns the level the entity belongs to. Returns -1 if the entity belongs to more than one level.)#" )
        .def("LevelList",
             (opencascade::handle<IGESData_LevelListEntity> (IGESData_IGESEntity::*)() const) static_cast<opencascade::handle<IGESData_LevelListEntity> (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::LevelList),
             R"#(Returns LevelList if Level is defined as a list. Returns a null handle if DefLevel is not DefSeveral.)#" )
        .def("DefView",
             (IGESData_DefList (IGESData_IGESEntity::*)() const) static_cast<IGESData_DefList (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::DefView),
             R"#(Returns the definition status of the view. This can be: none, one or several.)#" )
        .def("View",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESData_IGESEntity::*)() const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::View),
             R"#(Returns the view of this IGES entity. This view can be a single view or a list of views. Warning A null handle is returned if the view is not defined.)#" )
        .def("SingleView",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESData_IGESEntity::*)() const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::SingleView),
             R"#(Returns the view as a single view if it was defined as such and not as a list of views. Warning A null handle is returned if DefView does not have the value DefOne.)#" )
        .def("ViewList",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESData_IGESEntity::*)() const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::ViewList),
             R"#(Returns the view of this IGES entity as a list. Warning A null handle is returned if the definition status does not have the value DefSeveral.)#" )
        .def("HasTransf",
             (Standard_Boolean (IGESData_IGESEntity::*)() const) static_cast<Standard_Boolean (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::HasTransf),
             R"#(Returns True if a Transformation Matrix is defined)#" )
        .def("Transf",
             (opencascade::handle<IGESData_TransfEntity> (IGESData_IGESEntity::*)() const) static_cast<opencascade::handle<IGESData_TransfEntity> (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::Transf),
             R"#(Returns the Transformation Matrix (under IGES definition) Returns a Null Handle if there is none for a more complete use, see Location & CompoundLocation)#" )
        .def("HasLabelDisplay",
             (Standard_Boolean (IGESData_IGESEntity::*)() const) static_cast<Standard_Boolean (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::HasLabelDisplay),
             R"#(Returns True if a LabelDisplay mode is defined for this entity)#" )
        .def("LabelDisplay",
             (opencascade::handle<IGESData_LabelDisplayEntity> (IGESData_IGESEntity::*)() const) static_cast<opencascade::handle<IGESData_LabelDisplayEntity> (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::LabelDisplay),
             R"#(Returns the Label Display Associativity Entity if there is one. Returns a null handle if there is none.)#" )
        .def("BlankStatus",
             (Standard_Integer (IGESData_IGESEntity::*)() const) static_cast<Standard_Integer (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::BlankStatus),
             R"#(gives Blank Status (0 visible, 1 blanked))#" )
        .def("SubordinateStatus",
             (Standard_Integer (IGESData_IGESEntity::*)() const) static_cast<Standard_Integer (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::SubordinateStatus),
             R"#(gives Subordinate Switch (0-1-2-3))#" )
        .def("UseFlag",
             (Standard_Integer (IGESData_IGESEntity::*)() const) static_cast<Standard_Integer (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::UseFlag),
             R"#(gives Entity's Use Flag (0 to 5))#" )
        .def("HierarchyStatus",
             (Standard_Integer (IGESData_IGESEntity::*)() const) static_cast<Standard_Integer (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::HierarchyStatus),
             R"#(gives Hierarchy status (0-1-2))#" )
        .def("LineWeightNumber",
             (Standard_Integer (IGESData_IGESEntity::*)() const) static_cast<Standard_Integer (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::LineWeightNumber),
             R"#(Returns the LineWeight Number (0 not defined), see also LineWeight)#" )
        .def("LineWeight",
             (Standard_Real (IGESData_IGESEntity::*)() const) static_cast<Standard_Real (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::LineWeight),
             R"#(Returns the true Line Weight, computed from LineWeightNumber and Global Parameter in the Model by call to SetLineWeight)#" )
        .def("DefColor",
             (IGESData_DefType (IGESData_IGESEntity::*)() const) static_cast<IGESData_DefType (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::DefColor),
             R"#(Returns the definition status of Color.)#" )
        .def("RankColor",
             (Standard_Integer (IGESData_IGESEntity::*)() const) static_cast<Standard_Integer (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::RankColor),
             R"#(Returns the color definition as an integer value if the color was defined as a rank. Warning A negative value is returned if the color was defined as an entity.)#" )
        .def("Color",
             (opencascade::handle<IGESData_ColorEntity> (IGESData_IGESEntity::*)() const) static_cast<opencascade::handle<IGESData_ColorEntity> (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::Color),
             R"#(Returns the IGES entity which describes the color of the entity. Returns a null handle if this entity was defined as an integer.)#" )
        .def("CResValues",
             (Standard_Boolean (IGESData_IGESEntity::*)( const Standard_CString ,  const Standard_CString  ) const) static_cast<Standard_Boolean (IGESData_IGESEntity::*)( const Standard_CString ,  const Standard_CString  ) const>(&IGESData_IGESEntity::CResValues),
             R"#(returns "reserved" alphanumeric values res1 and res2 res1 and res2 have to be reserved as Character[9 at least] (remark : their content is changed) returned values are ended by null character in 9th returned Boolean is False if res1 and res2 are blank, true else)#"  , py::arg("res1"),  py::arg("res2"))
        .def("HasShortLabel",
             (Standard_Boolean (IGESData_IGESEntity::*)() const) static_cast<Standard_Boolean (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::HasShortLabel),
             R"#(Returns true if a short label is defined. A short label is a non-blank 8-character string.)#" )
        .def("ShortLabel",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_IGESEntity::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::ShortLabel),
             R"#(Returns the label value for this IGES entity as a string. Warning If the label is blank, this string is null.)#" )
        .def("HasSubScriptNumber",
             (Standard_Boolean (IGESData_IGESEntity::*)() const) static_cast<Standard_Boolean (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::HasSubScriptNumber),
             R"#(Returns true if a subscript number is defined. A subscript number is an integer used to identify a label.)#" )
        .def("SubScriptNumber",
             (Standard_Integer (IGESData_IGESEntity::*)() const) static_cast<Standard_Integer (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::SubScriptNumber),
             R"#(Returns the integer subscript number used to identify this IGES entity. Warning 0 is returned if no subscript number is defined for this IGES entity.)#" )
        .def("InitDirFieldEntity",
             (void (IGESData_IGESEntity::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESData_IGESEntity::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESData_IGESEntity::InitDirFieldEntity),
             R"#(Initializes a directory field as an Entiy of any kind See DirFieldEntity for more details)#"  , py::arg("fieldnum"),  py::arg("ent"))
        .def("InitTransf",
             (void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_TransfEntity> &  ) ) static_cast<void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_TransfEntity> &  ) >(&IGESData_IGESEntity::InitTransf),
             R"#(Initializes Transf, or erases it if <ent> is given Null)#"  , py::arg("ent"))
        .def("InitView",
             (void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_ViewKindEntity> &  ) ) static_cast<void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_ViewKindEntity> &  ) >(&IGESData_IGESEntity::InitView),
             R"#(Initializes View, or erases it if <ent> is given Null)#"  , py::arg("ent"))
        .def("InitLineFont",
             (void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_LineFontEntity> & ,  const Standard_Integer  ) ) static_cast<void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_LineFontEntity> & ,  const Standard_Integer  ) >(&IGESData_IGESEntity::InitLineFont),
             R"#(Initializes LineFont : if <ent> is not Null, it gives LineFont, else <rank> gives or erases (if zero) RankLineFont)#"  , py::arg("ent"),  py::arg("rank")=static_cast<const Standard_Integer>(0))
        .def("InitLevel",
             (void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_LevelListEntity> & ,  const Standard_Integer  ) ) static_cast<void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_LevelListEntity> & ,  const Standard_Integer  ) >(&IGESData_IGESEntity::InitLevel),
             R"#(Initializes Level : if <ent> is not Null, it gives LevelList, else <val> gives or erases (if zero) unique Level)#"  , py::arg("ent"),  py::arg("val")=static_cast<const Standard_Integer>(0))
        .def("InitColor",
             (void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_ColorEntity> & ,  const Standard_Integer  ) ) static_cast<void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_ColorEntity> & ,  const Standard_Integer  ) >(&IGESData_IGESEntity::InitColor),
             R"#(Initializes Color data : if <ent> is not Null, it gives Color, else <rank> gives or erases (if zero) RankColor)#"  , py::arg("ent"),  py::arg("rank")=static_cast<const Standard_Integer>(0))
        .def("InitStatus",
             (void (IGESData_IGESEntity::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IGESData_IGESEntity::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&IGESData_IGESEntity::InitStatus),
             R"#(Initializes the Status of Directory Part)#"  , py::arg("blank"),  py::arg("subordinate"),  py::arg("useflag"),  py::arg("hierarchy"))
        .def("SetLabel",
             (void (IGESData_IGESEntity::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer  ) ) static_cast<void (IGESData_IGESEntity::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer  ) >(&IGESData_IGESEntity::SetLabel),
             R"#(Sets a new Label to an IGES Entity If is given, it sets value of SubScriptNumber else, SubScriptNumber is erased)#"  , py::arg("label"),  py::arg("sub")=static_cast<const Standard_Integer>(- 1))
        .def("InitMisc",
             (void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_LabelDisplayEntity> & ,  const Standard_Integer  ) ) static_cast<void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_LabelDisplayEntity> & ,  const Standard_Integer  ) >(&IGESData_IGESEntity::InitMisc),
             R"#(Initializes various data (those not yet seen above), or erases them if they are given as Null (Zero for <weightnum>) : <str> for Structure, <lab> for LabelDisplay, and <weightnum> for WeightNumber)#"  , py::arg("str"),  py::arg("lab"),  py::arg("weightnum"))
        .def("HasOneParent",
             (Standard_Boolean (IGESData_IGESEntity::*)() const) static_cast<Standard_Boolean (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::HasOneParent),
             R"#(Returns True if an entity has one and only one parent, defined by a SingleParentEntity Type Associativity (explicit sharing). Thus, implicit sharing remains defined at model level (see class ToolLocation))#" )
        .def("UniqueParent",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_IGESEntity::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::UniqueParent),
             R"#(Returns the Unique Parent (in the sense given by HasOneParent) Error if there is none or several)#" )
        .def("Location",
             (gp_GTrsf (IGESData_IGESEntity::*)() const) static_cast<gp_GTrsf (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::Location),
             R"#(Returns Location given by Transf in Directory Part (see above) It must be considered for local definition : if the Entity is set in a "Parent", that one can add its one Location, but this is not taken in account here : see CompoundLocation for that. If no Transf is defined, returns Identity If Transf is itself compound, gives the final result)#" )
        .def("VectorLocation",
             (gp_GTrsf (IGESData_IGESEntity::*)() const) static_cast<gp_GTrsf (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::VectorLocation),
             R"#(Returns Location considered for Vectors, i.e. without its Translation Part. As Location, it gives local definition.)#" )
        .def("CompoundLocation",
             (gp_GTrsf (IGESData_IGESEntity::*)() const) static_cast<gp_GTrsf (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::CompoundLocation),
             R"#(Returns Location by taking in account a Parent which has its own Location : that one will be combined to that of <me> The Parent is considered only if HasOneParent is True, else it is ignored and CompoundLocation = Location)#" )
        .def("HasName",
             (Standard_Boolean (IGESData_IGESEntity::*)() const) static_cast<Standard_Boolean (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::HasName),
             R"#(says if a Name is defined, as Short Label or as Name Property (Property is looked first, else ShortLabel is considered))#" )
        .def("NameValue",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_IGESEntity::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::NameValue),
             R"#(returns Name value as a String (Property Name or ShortLabel) if SubNumber is defined, it is concatenated after ShortLabel as follows label(number). Ignored with a Property Name)#" )
        .def("ArePresentAssociativities",
             (Standard_Boolean (IGESData_IGESEntity::*)() const) static_cast<Standard_Boolean (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::ArePresentAssociativities),
             R"#(Returns True if the Entity is defined with an Associativity list, even empty (that is, file contains its length 0) Else, the file contained NO idencation at all about this list.)#" )
        .def("NbAssociativities",
             (Standard_Integer (IGESData_IGESEntity::*)() const) static_cast<Standard_Integer (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::NbAssociativities),
             R"#(gives number of recorded associativities (0 no list defined))#" )
        .def("Associativities",
             (Interface_EntityIterator (IGESData_IGESEntity::*)() const) static_cast<Interface_EntityIterator (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::Associativities),
             R"#(Returns the Associativity List under the form of an EntityIterator.)#" )
        .def("NbTypedAssociativities",
             (Standard_Integer (IGESData_IGESEntity::*)( const opencascade::handle<Standard_Type> &  ) const) static_cast<Standard_Integer (IGESData_IGESEntity::*)( const opencascade::handle<Standard_Type> &  ) const>(&IGESData_IGESEntity::NbTypedAssociativities),
             R"#(gives how many Associativities have a given type)#"  , py::arg("atype"))
        .def("TypedAssociativity",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_IGESEntity::*)( const opencascade::handle<Standard_Type> &  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_IGESEntity::*)( const opencascade::handle<Standard_Type> &  ) const>(&IGESData_IGESEntity::TypedAssociativity),
             R"#(returns the Associativity of a given Type (if only one exists) Error if none or more than one)#"  , py::arg("atype"))
        .def("Associate",
             (void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_IGESEntity::Associate),
             R"#(Sets "me" in the Associativity list of another Entity)#"  , py::arg("ent"))
        .def("Dissociate",
             (void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_IGESEntity::Dissociate),
             R"#(Resets "me" from the Associativity list of another Entity)#"  , py::arg("ent"))
        .def("ArePresentProperties",
             (Standard_Boolean (IGESData_IGESEntity::*)() const) static_cast<Standard_Boolean (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::ArePresentProperties),
             R"#(Returns True if the Entity is defined with a Property list, even empty (that is, file contains its length 0) Else, the file contained NO idencation at all about this list)#" )
        .def("NbProperties",
             (Standard_Integer (IGESData_IGESEntity::*)() const) static_cast<Standard_Integer (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::NbProperties),
             R"#(Gives number of recorded properties (0 no list defined))#" )
        .def("Properties",
             (Interface_EntityIterator (IGESData_IGESEntity::*)() const) static_cast<Interface_EntityIterator (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::Properties),
             R"#(Returns Property List under the form of an EntityIterator)#" )
        .def("NbTypedProperties",
             (Standard_Integer (IGESData_IGESEntity::*)( const opencascade::handle<Standard_Type> &  ) const) static_cast<Standard_Integer (IGESData_IGESEntity::*)( const opencascade::handle<Standard_Type> &  ) const>(&IGESData_IGESEntity::NbTypedProperties),
             R"#(gives how many Properties have a given type)#"  , py::arg("atype"))
        .def("TypedProperty",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_IGESEntity::*)( const opencascade::handle<Standard_Type> & ,  const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_IGESEntity::*)( const opencascade::handle<Standard_Type> & ,  const Standard_Integer  ) const>(&IGESData_IGESEntity::TypedProperty),
             R"#(returns the Property of a given Type Error if none or more than one)#"  , py::arg("atype"),  py::arg("anum")=static_cast<const Standard_Integer>(0))
        .def("AddProperty",
             (void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESData_IGESEntity::AddProperty),
             R"#(Adds a Property in the list)#"  , py::arg("ent"))
        .def("RemoveProperty",
             (void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESData_IGESEntity::*)( const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESData_IGESEntity::RemoveProperty),
             R"#(Removes a Property from the list)#"  , py::arg("ent"))
        .def("SetLineWeight",
             (void (IGESData_IGESEntity::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (IGESData_IGESEntity::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&IGESData_IGESEntity::SetLineWeight),
             R"#(computes and sets "true" line weight according IGES rules from global data MaxLineWeight (maxv) and LineWeightGrad (gradw), or sets it to defw (Default) if LineWeightNumber is null)#"  , py::arg("defw"),  py::arg("maxw"),  py::arg("gradw"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_IGESEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_IGESEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_IGESEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_IGESModel ,opencascade::handle<IGESData_IGESModel>  , Interface_InterfaceModel >>(m.attr("IGESData_IGESModel"))
        .def(py::init<  >()  )
    // methods
        .def("ClearHeader",
             (void (IGESData_IGESModel::*)() ) static_cast<void (IGESData_IGESModel::*)() >(&IGESData_IGESModel::ClearHeader),
             R"#(Erases all data specific to IGES file Header (Start + Global))#" )
        .def("DumpHeader",
             (void (IGESData_IGESModel::*)( const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESData_IGESModel::*)( const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESData_IGESModel::DumpHeader),
             R"#(Prints the IGES file header (Start and Global Sections) to the log file. The integer parameter is intended to be used as a level indicator but is not used at present.)#"  , py::arg("S"),  py::arg("level")=static_cast<const Standard_Integer>(0))
        .def("StartSection",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IGESData_IGESModel::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IGESData_IGESModel::*)() const>(&IGESData_IGESModel::StartSection),
             R"#(Returns Model's Start Section (list of comment lines))#" )
        .def("NbStartLines",
             (Standard_Integer (IGESData_IGESModel::*)() const) static_cast<Standard_Integer (IGESData_IGESModel::*)() const>(&IGESData_IGESModel::NbStartLines),
             R"#(Returns the count of recorded Start Lines)#" )
        .def("StartLine",
             (Standard_CString (IGESData_IGESModel::*)( const Standard_Integer  ) const) static_cast<Standard_CString (IGESData_IGESModel::*)( const Standard_Integer  ) const>(&IGESData_IGESModel::StartLine),
             R"#(Returns a line from the IGES file Start section by specifying its number. An empty string is returned if the number given is out of range, the range being from 1 to NbStartLines.)#"  , py::arg("num"))
        .def("ClearStartSection",
             (void (IGESData_IGESModel::*)() ) static_cast<void (IGESData_IGESModel::*)() >(&IGESData_IGESModel::ClearStartSection),
             R"#(Clears the IGES file Start Section)#" )
        .def("SetStartSection",
             (void (IGESData_IGESModel::*)( const opencascade::handle<TColStd_HSequenceOfHAsciiString> & ,  const Standard_Boolean  ) ) static_cast<void (IGESData_IGESModel::*)( const opencascade::handle<TColStd_HSequenceOfHAsciiString> & ,  const Standard_Boolean  ) >(&IGESData_IGESModel::SetStartSection),
             R"#(Sets a new Start section from a list of strings. If copy is false, the Start section will be shared. Any modifications made to the strings later on, will have an effect on the Start section. If copy is true (default value), an independent copy of the strings is created and used as the Start section. Any modifications made to the strings later on, will have no effect on the Start section.)#"  , py::arg("list"),  py::arg("copy")=static_cast<const Standard_Boolean>(Standard_True))
        .def("AddStartLine",
             (void (IGESData_IGESModel::*)( const Standard_CString ,  const Standard_Integer  ) ) static_cast<void (IGESData_IGESModel::*)( const Standard_CString ,  const Standard_Integer  ) >(&IGESData_IGESModel::AddStartLine),
             R"#(Adds a new string to the existing Start section at the end if atnum is 0 or not given, or before atnumth line.)#"  , py::arg("line"),  py::arg("atnum")=static_cast<const Standard_Integer>(0))
        .def("GlobalSection",
             (const IGESData_GlobalSection & (IGESData_IGESModel::*)() const) static_cast<const IGESData_GlobalSection & (IGESData_IGESModel::*)() const>(&IGESData_IGESModel::GlobalSection),
             R"#(Returns the Global section of the IGES file.)#" )
        .def("SetGlobalSection",
             (void (IGESData_IGESModel::*)( const IGESData_GlobalSection &  ) ) static_cast<void (IGESData_IGESModel::*)( const IGESData_GlobalSection &  ) >(&IGESData_IGESModel::SetGlobalSection),
             R"#(Sets the Global section of the IGES file.)#"  , py::arg("header"))
        .def("ApplyStatic",
             (Standard_Boolean (IGESData_IGESModel::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (IGESData_IGESModel::*)( const Standard_CString  ) >(&IGESData_IGESModel::ApplyStatic),
             R"#(Sets some of the Global section parameters with the values defined by the translation parameters. param may be: - receiver (value read in XSTEP.iges.header.receiver), - author (value read in XSTEP.iges.header.author), - company (value read in XSTEP.iges.header.company). The default value for param is an empty string. Returns True when done and if param is given, False if param is unknown or empty. Note: Set the unit in the IGES file Global section via IGESData_BasicEditor class.)#"  , py::arg("param")=static_cast<const Standard_CString>(""))
        .def("Entity",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_IGESModel::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_IGESModel::*)( const Standard_Integer  ) const>(&IGESData_IGESModel::Entity),
             R"#(Returns an IGES entity given by its rank number.)#"  , py::arg("num"))
        .def("DNum",
             (Standard_Integer (IGESData_IGESModel::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<Standard_Integer (IGESData_IGESModel::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_IGESModel::DNum),
             R"#(Returns the equivalent DE Number for an Entity, i.e. 2*Number(ent)-1 , or 0 if <ent> is unknown from <me> This DE Number is used for File Writing for instance)#"  , py::arg("ent"))
        .def("GetFromAnother",
             (void (IGESData_IGESModel::*)( const opencascade::handle<Interface_InterfaceModel> &  ) ) static_cast<void (IGESData_IGESModel::*)( const opencascade::handle<Interface_InterfaceModel> &  ) >(&IGESData_IGESModel::GetFromAnother),
             R"#(gets Header (GlobalSection) from another Model)#"  , py::arg("other"))
        .def("NewEmptyModel",
             (opencascade::handle<Interface_InterfaceModel> (IGESData_IGESModel::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (IGESData_IGESModel::*)() const>(&IGESData_IGESModel::NewEmptyModel),
             R"#(Returns a New Empty Model, same type as <me> i.e. IGESModel)#" )
        .def("VerifyCheck",
             (void (IGESData_IGESModel::*)( opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESData_IGESModel::*)( opencascade::handle<Interface_Check> &  ) const>(&IGESData_IGESModel::VerifyCheck),
             R"#(Checks that the IGES file Global section contains valid data that conforms to the IGES specifications.)#"  , py::arg("ach"))
        .def("SetLineWeights",
             (void (IGESData_IGESModel::*)( const Standard_Real  ) ) static_cast<void (IGESData_IGESModel::*)( const Standard_Real  ) >(&IGESData_IGESModel::SetLineWeights),
             R"#(Sets LineWeights of contained Entities according header data (MaxLineWeight and LineWeightGrad) or to a default value for undefined weights)#"  , py::arg("defw"))
        .def("ClearLabels",
             (void (IGESData_IGESModel::*)() ) static_cast<void (IGESData_IGESModel::*)() >(&IGESData_IGESModel::ClearLabels),
             R"#(erases specific labels, i.e. does nothing)#" )
        .def("PrintLabel",
             (void (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Message_Messenger> &  ) const) static_cast<void (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Message_Messenger> &  ) const>(&IGESData_IGESModel::PrintLabel),
             R"#(Prints label specific to IGES norm for a given entity, i.e. its directory entry number (2*Number-1))#"  , py::arg("ent"),  py::arg("S"))
        .def("PrintToLog",
             (void (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Message_Messenger> &  ) const) static_cast<void (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Message_Messenger> &  ) const>(&IGESData_IGESModel::PrintToLog),
             R"#(Prints label specific to IGES norm for a given -- -- entity, i.e. its directory entry number (2*Number-1) in the log file format.)#"  , py::arg("ent"),  py::arg("S"))
        .def("PrintInfo",
             (void (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Message_Messenger> &  ) const) static_cast<void (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Message_Messenger> &  ) const>(&IGESData_IGESModel::PrintInfo),
             R"#(Prints label specific to IGES norm for a given entity, i.e. its directory entry number (2*Number-1))#"  , py::arg("ent"),  py::arg("S"))
        .def("StringLabel",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> &  ) const>(&IGESData_IGESModel::StringLabel),
             R"#(Returns a string with the label attached to a given entity, i.e. a string "Dnn" with nn = directory entry number (2*N-1))#"  , py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_IGESModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_IGESModel::*)() const>(&IGESData_IGESModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_IGESModel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_IGESModel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_IGESReaderData ,opencascade::handle<IGESData_IGESReaderData>  , Interface_FileReaderData >>(m.attr("IGESData_IGESReaderData"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("nbe"),  py::arg("nbp") )
    // methods
        .def("AddStartLine",
             (void (IGESData_IGESReaderData::*)( const Standard_CString  ) ) static_cast<void (IGESData_IGESReaderData::*)( const Standard_CString  ) >(&IGESData_IGESReaderData::AddStartLine),
             R"#(adds a start line to start section)#"  , py::arg("aval"))
        .def("StartSection",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IGESData_IGESReaderData::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IGESData_IGESReaderData::*)() const>(&IGESData_IGESReaderData::StartSection),
             R"#(Returns the Start Section in once)#" )
        .def("AddGlobal",
             (void (IGESData_IGESReaderData::*)( const Interface_ParamType ,  const Standard_CString  ) ) static_cast<void (IGESData_IGESReaderData::*)( const Interface_ParamType ,  const Standard_CString  ) >(&IGESData_IGESReaderData::AddGlobal),
             R"#(adds a parameter to global section's parameter list)#"  , py::arg("atype"),  py::arg("aval"))
        .def("SetGlobalSection",
             (void (IGESData_IGESReaderData::*)() ) static_cast<void (IGESData_IGESReaderData::*)() >(&IGESData_IGESReaderData::SetGlobalSection),
             R"#(reads header (as GlobalSection) content from the ParamSet after it has been filled by successive calls to AddGlobal)#" )
        .def("GlobalSection",
             (const IGESData_GlobalSection & (IGESData_IGESReaderData::*)() const) static_cast<const IGESData_GlobalSection & (IGESData_IGESReaderData::*)() const>(&IGESData_IGESReaderData::GlobalSection),
             R"#(returns header as GlobalSection)#" )
        .def("SetDirPart",
             (void (IGESData_IGESReaderData::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_CString ,  const Standard_CString ,  const Standard_CString ,  const Standard_CString  ) ) static_cast<void (IGESData_IGESReaderData::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_CString ,  const Standard_CString ,  const Standard_CString ,  const Standard_CString  ) >(&IGESData_IGESReaderData::SetDirPart),
             R"#(fills a DirPart, designated by its rank (that is, (N+1)/2 if N is its first number in section D))#"  , py::arg("num"),  py::arg("i1"),  py::arg("i2"),  py::arg("i3"),  py::arg("i4"),  py::arg("i5"),  py::arg("i6"),  py::arg("i7"),  py::arg("i8"),  py::arg("i9"),  py::arg("i10"),  py::arg("i11"),  py::arg("i12"),  py::arg("i13"),  py::arg("i14"),  py::arg("i15"),  py::arg("i16"),  py::arg("i17"),  py::arg("res1"),  py::arg("res2"),  py::arg("label"),  py::arg("subs"))
        .def("DirPart",
             (const IGESData_DirPart & (IGESData_IGESReaderData::*)( const Standard_Integer  ) const) static_cast<const IGESData_DirPart & (IGESData_IGESReaderData::*)( const Standard_Integer  ) const>(&IGESData_IGESReaderData::DirPart),
             R"#(returns DirPart identified by record no (half Dsect number))#"  , py::arg("num"))
        .def("DirType",
             (IGESData_IGESType (IGESData_IGESReaderData::*)( const Standard_Integer  ) const) static_cast<IGESData_IGESType (IGESData_IGESReaderData::*)( const Standard_Integer  ) const>(&IGESData_IGESReaderData::DirType),
             R"#(returns "type" and "form" info from a directory part)#"  , py::arg("num"))
        .def("NbEntities",
             (Standard_Integer (IGESData_IGESReaderData::*)() const) static_cast<Standard_Integer (IGESData_IGESReaderData::*)() const>(&IGESData_IGESReaderData::NbEntities),
             R"#(Returns count of recorded Entities (i.e. size of Directory))#" )
        .def("FindNextRecord",
             (Standard_Integer (IGESData_IGESReaderData::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESData_IGESReaderData::*)( const Standard_Integer  ) const>(&IGESData_IGESReaderData::FindNextRecord),
             R"#(determines next suitable record from num; that is num+1 except for last one which gives 0)#"  , py::arg("num"))
        .def("SetEntityNumbers",
             (void (IGESData_IGESReaderData::*)() ) static_cast<void (IGESData_IGESReaderData::*)() >(&IGESData_IGESReaderData::SetEntityNumbers),
             R"#(determines reference numbers in EntityNumber fields (called by SetEntities from IGESReaderTool) works on "Integer" type Parameters, because IGES does not distinguish Integer and Entity Refs : every Integer which is odd and less than twice NbRecords can be an Entity Ref ... (Ref Number is then (N+1)/2 if N is the Integer Value))#" )
        .def("GlobalCheck",
             (opencascade::handle<Interface_Check> (IGESData_IGESReaderData::*)() const) static_cast<opencascade::handle<Interface_Check> (IGESData_IGESReaderData::*)() const>(&IGESData_IGESReaderData::GlobalCheck),
             R"#(Returns the recorded Global Check)#" )
        .def("SetDefaultLineWeight",
             (void (IGESData_IGESReaderData::*)( const Standard_Real  ) ) static_cast<void (IGESData_IGESReaderData::*)( const Standard_Real  ) >(&IGESData_IGESReaderData::SetDefaultLineWeight),
             R"#(allows to set a default line weight, will be later applied at load time, on Entities which have no specified line weight)#"  , py::arg("defw"))
        .def("DefaultLineWeight",
             (Standard_Real (IGESData_IGESReaderData::*)() const) static_cast<Standard_Real (IGESData_IGESReaderData::*)() const>(&IGESData_IGESReaderData::DefaultLineWeight),
             R"#(Returns the recorded Default Line Weight, if there is (else, returns 0))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_IGESReaderData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_IGESReaderData::*)() const>(&IGESData_IGESReaderData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_IGESReaderData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_IGESReaderData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_IGESReaderTool , shared_ptr<IGESData_IGESReaderTool>  , Interface_FileReaderTool >>(m.attr("IGESData_IGESReaderTool"))
        .def(py::init< const opencascade::handle<IGESData_IGESReaderData> &,const opencascade::handle<IGESData_Protocol> & >()  , py::arg("reader"),  py::arg("protocol") )
    // methods
        .def("Prepare",
             (void (IGESData_IGESReaderTool::*)( const opencascade::handle<IGESData_FileRecognizer> &  ) ) static_cast<void (IGESData_IGESReaderTool::*)( const opencascade::handle<IGESData_FileRecognizer> &  ) >(&IGESData_IGESReaderTool::Prepare),
             R"#(binds empty entities to records, works with the Protocol (from IGESData) stored and later used RQ : Actually, sets DNum into IGES Entities Also loads the list of parameters for ParamReader)#"  , py::arg("reco"))
        .def("Recognize",
             (Standard_Boolean (IGESData_IGESReaderTool::*)( const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Boolean (IGESData_IGESReaderTool::*)( const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  opencascade::handle<Standard_Transient> &  ) >(&IGESData_IGESReaderTool::Recognize),
             R"#(recognizes records by asking Protocol (on data of DirType))#"  , py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("BeginRead",
             (void (IGESData_IGESReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> &  ) ) static_cast<void (IGESData_IGESReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> &  ) >(&IGESData_IGESReaderTool::BeginRead),
             R"#(fills model's header, that is, its GlobalSection)#"  , py::arg("amodel"))
        .def("AnalyseRecord",
             (Standard_Boolean (IGESData_IGESReaderTool::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  opencascade::handle<Interface_Check> &  ) ) static_cast<Standard_Boolean (IGESData_IGESReaderTool::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  opencascade::handle<Interface_Check> &  ) >(&IGESData_IGESReaderTool::AnalyseRecord),
             R"#(fills an entity, given record no; works by calling ReadDirPart then ReadParams (with help of a ParamReader), then if required ReadProps and ReadAssocs, from IGESEntity Returns True if no fail has been recorded)#"  , py::arg("num"),  py::arg("anent"),  py::arg("acheck"))
        .def("EndRead",
             (void (IGESData_IGESReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> &  ) ) static_cast<void (IGESData_IGESReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> &  ) >(&IGESData_IGESReaderTool::EndRead),
             R"#(after reading entities, true line weights can be computed)#"  , py::arg("amodel"))
        .def("ReadDir",
             (void (IGESData_IGESReaderTool::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_DirPart & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESData_IGESReaderTool::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_DirPart & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESData_IGESReaderTool::ReadDir),
             R"#(Reads directory part componants from file; DP is the litteral directory part, IR detains entities referenced by DP)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("DP"),  py::arg("ach"))
        .def("ReadOwnParams",
             (void (IGESData_IGESReaderTool::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESData_IGESReaderTool::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESData_IGESReaderTool::ReadOwnParams),
             R"#(Performs Reading of own Parameters for each IGESEntity Works with the ReaderLib loaded with ReadWriteModules for IGES In case of failure, tries UndefinedEntity from IGES)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("ReadProps",
             (void (IGESData_IGESReaderTool::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESData_IGESReaderTool::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESData_IGESReaderTool::ReadProps),
             R"#(Reads Property List, if there is (if not, does nothing) criterium is : current parameter of PR remains inside params list, and Stage is "Own" Current parameter must be a positive integer, which value gives the length of the list; else, a Fail is produced (into Check of PR) and reading process is stopped)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("ReadAssocs",
             (void (IGESData_IGESReaderTool::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESData_IGESReaderTool::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESData_IGESReaderTool::ReadAssocs),
             R"#(Reads Associativity List, if there is (if not, does nothing) criterium is : current parameter of PR remains inside params list, and Stage is "Own" Same conditions as above; in addition, no parameter must be let after the list once read Note that "Associated" entities are not declared "Shared")#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_IGESType , shared_ptr<IGESData_IGESType>  >>(m.attr("IGESData_IGESType"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("atype"),  py::arg("aform") )
    // methods
        .def("Type",
             (Standard_Integer (IGESData_IGESType::*)() const) static_cast<Standard_Integer (IGESData_IGESType::*)() const>(&IGESData_IGESType::Type),
             R"#(returns "type" data)#" )
        .def("Form",
             (Standard_Integer (IGESData_IGESType::*)() const) static_cast<Standard_Integer (IGESData_IGESType::*)() const>(&IGESData_IGESType::Form),
             R"#(returns "form" data)#" )
        .def("IsEqual",
             (Standard_Boolean (IGESData_IGESType::*)( const IGESData_IGESType &  ) const) static_cast<Standard_Boolean (IGESData_IGESType::*)( const IGESData_IGESType &  ) const>(&IGESData_IGESType::IsEqual),
             R"#(compares two IGESTypes, avoiding comparing their fields)#"  , py::arg("another"))
        .def("Nullify",
             (void (IGESData_IGESType::*)() ) static_cast<void (IGESData_IGESType::*)() >(&IGESData_IGESType::Nullify),
             R"#(resets fields (usefull when an IGESType is stored as mask))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_IGESWriter , shared_ptr<IGESData_IGESWriter>  >>(m.attr("IGESData_IGESWriter"))
        .def(py::init< const opencascade::handle<IGESData_IGESModel> & >()  , py::arg("amodel") )
        .def(py::init<  >()  )
        .def(py::init< const IGESData_IGESWriter & >()  , py::arg("other") )
    // methods
        .def("FloatWriter",
             (Interface_FloatWriter & (IGESData_IGESWriter::*)() ) static_cast<Interface_FloatWriter & (IGESData_IGESWriter::*)() >(&IGESData_IGESWriter::FloatWriter),
             R"#(Returns the embedded FloatWriter, which controls sending Reals Use this method to access FloatWriter in order to consult or change its options (MainFormat, FormatForRange,ZeroSuppress), because it is returned as the address of its field)#" )
        .def("WriteMode",
             (Standard_Integer & (IGESData_IGESWriter::*)() ) static_cast<Standard_Integer & (IGESData_IGESWriter::*)() >(&IGESData_IGESWriter::WriteMode),
             R"#(Returns the write mode, in order to be read and/or changed Write Mode controls the way final print works 0 (D) : Normal IGES, 10 : FNES)#" )
        .def("SendStartLine",
             (void (IGESData_IGESWriter::*)( const Standard_CString  ) ) static_cast<void (IGESData_IGESWriter::*)( const Standard_CString  ) >(&IGESData_IGESWriter::SendStartLine),
             R"#(Sends an additionnal Starting Line : this is the way used to send comments in an IGES File (at beginning of the file). If the line is more than 72 char.s long, it is splited into as many lines as required to send it completely)#"  , py::arg("startline"))
        .def("SendModel",
             (void (IGESData_IGESWriter::*)( const opencascade::handle<IGESData_Protocol> &  ) ) static_cast<void (IGESData_IGESWriter::*)( const opencascade::handle<IGESData_Protocol> &  ) >(&IGESData_IGESWriter::SendModel),
             R"#(Sends the complete IGESModel (Global Section, Entities as Directory Entries & Parameter Lists, etc...) i.e. fills a list of texts. Once filled, it can be sent by method Print)#"  , py::arg("protocol"))
        .def("SectionS",
             (void (IGESData_IGESWriter::*)() ) static_cast<void (IGESData_IGESWriter::*)() >(&IGESData_IGESWriter::SectionS),
             R"#(declares sending of S section (only a declaration) error if state is not initial)#" )
        .def("SectionG",
             (void (IGESData_IGESWriter::*)( const IGESData_GlobalSection &  ) ) static_cast<void (IGESData_IGESWriter::*)( const IGESData_GlobalSection &  ) >(&IGESData_IGESWriter::SectionG),
             R"#(prepares sending of header, from a GlobalSection (stores it) error if SectionS was not called just before takes in account special characters (Separator, EndMark))#"  , py::arg("header"))
        .def("SectionsDP",
             (void (IGESData_IGESWriter::*)() ) static_cast<void (IGESData_IGESWriter::*)() >(&IGESData_IGESWriter::SectionsDP),
             R"#(prepares sending of list of entities, as Sections D (directory list) and P (Parameters lists, one per entity) Entities will be then processed, one after the other error if SectionG has not be called just before)#" )
        .def("SectionT",
             (void (IGESData_IGESWriter::*)() ) static_cast<void (IGESData_IGESWriter::*)() >(&IGESData_IGESWriter::SectionT),
             R"#(declares sending of T section (only a declaration) error if does not follow Entities sending)#" )
        .def("DirPart",
             (void (IGESData_IGESWriter::*)( const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESData_IGESWriter::*)( const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESData_IGESWriter::DirPart),
             R"#(translates directory part of an Entity into a litteral DirPart Some infos are computed after sending parameters Error if not in sections DP or Stage not "Dir")#"  , py::arg("anent"))
        .def("OwnParams",
             (void (IGESData_IGESWriter::*)( const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESData_IGESWriter::*)( const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESData_IGESWriter::OwnParams),
             R"#(sends own parameters of the entity, by sending firstly its type, then calling specific method WriteOwnParams Error if not in sections DP or Stage not "Own")#"  , py::arg("anent"))
        .def("Associativities",
             (void (IGESData_IGESWriter::*)( const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESData_IGESWriter::*)( const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESData_IGESWriter::Associativities),
             R"#(sends associativity list, as complement of parameters list error if not in sections DP or Stage not "Associativity")#"  , py::arg("anent"))
        .def("Properties",
             (void (IGESData_IGESWriter::*)( const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESData_IGESWriter::*)( const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESData_IGESWriter::Properties),
             R"#(sends property list, as complement of parameters list error if not in sections DP or Stage not "Property")#"  , py::arg("anent"))
        .def("EndEntity",
             (void (IGESData_IGESWriter::*)() ) static_cast<void (IGESData_IGESWriter::*)() >(&IGESData_IGESWriter::EndEntity),
             R"#(declares end of sending an entity (ends param list by ';'))#" )
        .def("SendVoid",
             (void (IGESData_IGESWriter::*)() ) static_cast<void (IGESData_IGESWriter::*)() >(&IGESData_IGESWriter::SendVoid),
             R"#(sends a void parameter, that is null text)#" )
        .def("Send",
             (void (IGESData_IGESWriter::*)( const Standard_Integer  ) ) static_cast<void (IGESData_IGESWriter::*)( const Standard_Integer  ) >(&IGESData_IGESWriter::Send),
             R"#(sends an Integer parameter)#"  , py::arg("val"))
        .def("SendBoolean",
             (void (IGESData_IGESWriter::*)( const Standard_Boolean  ) ) static_cast<void (IGESData_IGESWriter::*)( const Standard_Boolean  ) >(&IGESData_IGESWriter::SendBoolean),
             R"#(sends a Boolean parameter as an Integer value 0(False)/1(True))#"  , py::arg("val"))
        .def("Send",
             (void (IGESData_IGESWriter::*)( const Standard_Real  ) ) static_cast<void (IGESData_IGESWriter::*)( const Standard_Real  ) >(&IGESData_IGESWriter::Send),
             R"#(sends a Real parameter. Works with FloatWriter)#"  , py::arg("val"))
        .def("Send",
             (void (IGESData_IGESWriter::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_IGESWriter::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_IGESWriter::Send),
             R"#(sends a Text parameter under Hollerith form)#"  , py::arg("val"))
        .def("Send",
             (void (IGESData_IGESWriter::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean  ) ) static_cast<void (IGESData_IGESWriter::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean  ) >(&IGESData_IGESWriter::Send),
             R"#(sends a Reference to an Entity (if its Number is N, its pointer is 2*N-1) If <val> is Null, "0" will be sent If <negative> is True, "Pointer" is sent as negative)#"  , py::arg("val"),  py::arg("negative")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SendString",
             (void (IGESData_IGESWriter::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_IGESWriter::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_IGESWriter::SendString),
             R"#(sends a parameter under its exact form given as a string)#"  , py::arg("val"))
        .def("Send",
             (void (IGESData_IGESWriter::*)( const gp_XY &  ) ) static_cast<void (IGESData_IGESWriter::*)( const gp_XY &  ) >(&IGESData_IGESWriter::Send),
             R"#(Sends a XY, interpreted as a couple of 2 Reals (X & Y))#"  , py::arg("val"))
        .def("Send",
             (void (IGESData_IGESWriter::*)( const gp_XYZ &  ) ) static_cast<void (IGESData_IGESWriter::*)( const gp_XYZ &  ) >(&IGESData_IGESWriter::Send),
             R"#(Sends a XYZ, interpreted as a couple of 2 Reals (X , Y & Z))#"  , py::arg("val"))
        .def("SectionStrings",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IGESData_IGESWriter::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IGESData_IGESWriter::*)( const Standard_Integer  ) const>(&IGESData_IGESWriter::SectionStrings),
             R"#(Returns the list of strings for a section given its rank 1 : Start (if not empty) 2 : Global 3 or 4 : Parameters RQ: no string list for Directory section An empty section gives a null handle)#"  , py::arg("numsec"))
        .def("Print",
             (Standard_Boolean (IGESData_IGESWriter::*)( std::ostream &  ) const) static_cast<Standard_Boolean (IGESData_IGESWriter::*)( std::ostream &  ) const>(&IGESData_IGESWriter::Print),
             R"#(Writes result on an output defined as an OStream resolves stored infos at this time; in particular, numbers of lines used to adress P-section from D-section and final totals Takes WriteMode into account)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_NodeOfSpecificLib ,opencascade::handle<IGESData_NodeOfSpecificLib>  , Standard_Transient >>(m.attr("IGESData_NodeOfSpecificLib"))
        .def(py::init<  >()  )
    // methods
        .def("AddNode",
             (void (IGESData_NodeOfSpecificLib::*)( const opencascade::handle<IGESData_GlobalNodeOfSpecificLib> &  ) ) static_cast<void (IGESData_NodeOfSpecificLib::*)( const opencascade::handle<IGESData_GlobalNodeOfSpecificLib> &  ) >(&IGESData_NodeOfSpecificLib::AddNode),
             R"#(Adds a couple (Module,Protocol), that is, stores it into itself if not yet done, else creates a Next Node to do it)#"  , py::arg("anode"))
        .def("Module",
             (const opencascade::handle<IGESData_SpecificModule> & (IGESData_NodeOfSpecificLib::*)() const) static_cast<const opencascade::handle<IGESData_SpecificModule> & (IGESData_NodeOfSpecificLib::*)() const>(&IGESData_NodeOfSpecificLib::Module),
             R"#(Returns the Module designated by a precise Node)#" )
        .def("Protocol",
             (const opencascade::handle<IGESData_Protocol> & (IGESData_NodeOfSpecificLib::*)() const) static_cast<const opencascade::handle<IGESData_Protocol> & (IGESData_NodeOfSpecificLib::*)() const>(&IGESData_NodeOfSpecificLib::Protocol),
             R"#(Returns the Protocol designated by a precise Node)#" )
        .def("Next",
             (const opencascade::handle<IGESData_NodeOfSpecificLib> & (IGESData_NodeOfSpecificLib::*)() const) static_cast<const opencascade::handle<IGESData_NodeOfSpecificLib> & (IGESData_NodeOfSpecificLib::*)() const>(&IGESData_NodeOfSpecificLib::Next),
             R"#(Returns the Next Node. If none was defined, returned value is a Null Handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_NodeOfSpecificLib::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_NodeOfSpecificLib::*)() const>(&IGESData_NodeOfSpecificLib::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_NodeOfSpecificLib::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_NodeOfSpecificLib::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_NodeOfWriterLib ,opencascade::handle<IGESData_NodeOfWriterLib>  , Standard_Transient >>(m.attr("IGESData_NodeOfWriterLib"))
        .def(py::init<  >()  )
    // methods
        .def("AddNode",
             (void (IGESData_NodeOfWriterLib::*)( const opencascade::handle<IGESData_GlobalNodeOfWriterLib> &  ) ) static_cast<void (IGESData_NodeOfWriterLib::*)( const opencascade::handle<IGESData_GlobalNodeOfWriterLib> &  ) >(&IGESData_NodeOfWriterLib::AddNode),
             R"#(Adds a couple (Module,Protocol), that is, stores it into itself if not yet done, else creates a Next Node to do it)#"  , py::arg("anode"))
        .def("Module",
             (const opencascade::handle<IGESData_ReadWriteModule> & (IGESData_NodeOfWriterLib::*)() const) static_cast<const opencascade::handle<IGESData_ReadWriteModule> & (IGESData_NodeOfWriterLib::*)() const>(&IGESData_NodeOfWriterLib::Module),
             R"#(Returns the Module designated by a precise Node)#" )
        .def("Protocol",
             (const opencascade::handle<IGESData_Protocol> & (IGESData_NodeOfWriterLib::*)() const) static_cast<const opencascade::handle<IGESData_Protocol> & (IGESData_NodeOfWriterLib::*)() const>(&IGESData_NodeOfWriterLib::Protocol),
             R"#(Returns the Protocol designated by a precise Node)#" )
        .def("Next",
             (const opencascade::handle<IGESData_NodeOfWriterLib> & (IGESData_NodeOfWriterLib::*)() const) static_cast<const opencascade::handle<IGESData_NodeOfWriterLib> & (IGESData_NodeOfWriterLib::*)() const>(&IGESData_NodeOfWriterLib::Next),
             R"#(Returns the Next Node. If none was defined, returned value is a Null Handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_NodeOfWriterLib::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_NodeOfWriterLib::*)() const>(&IGESData_NodeOfWriterLib::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_NodeOfWriterLib::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_NodeOfWriterLib::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_ParamCursor , shared_ptr<IGESData_ParamCursor>  >>(m.attr("IGESData_ParamCursor"))
        .def(py::init< const Standard_Integer >()  , py::arg("num") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("num"),  py::arg("nb"),  py::arg("size")=static_cast<const Standard_Integer>(1) )
    // methods
        .def("SetTerm",
             (void (IGESData_ParamCursor::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (IGESData_ParamCursor::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&IGESData_ParamCursor::SetTerm),
             R"#(Defines the size of a term to read in the item : this commands ParamReader to read "size" parameters for each item, then skip the remainder of the item to the same term of next Item (that is, skip "item size" - "term size"))#"  , py::arg("size"),  py::arg("autoadv")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetOne",
             (void (IGESData_ParamCursor::*)( const Standard_Boolean  ) ) static_cast<void (IGESData_ParamCursor::*)( const Standard_Boolean  ) >(&IGESData_ParamCursor::SetOne),
             R"#(Defines a term of one Parameter (very current case))#"  , py::arg("autoadv")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetXY",
             (void (IGESData_ParamCursor::*)( const Standard_Boolean  ) ) static_cast<void (IGESData_ParamCursor::*)( const Standard_Boolean  ) >(&IGESData_ParamCursor::SetXY),
             R"#(Defines a term of two Parameters for a XY (current case))#"  , py::arg("autoadv")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetXYZ",
             (void (IGESData_ParamCursor::*)( const Standard_Boolean  ) ) static_cast<void (IGESData_ParamCursor::*)( const Standard_Boolean  ) >(&IGESData_ParamCursor::SetXYZ),
             R"#(Defines a term of three Parameters for XYZ (current case))#"  , py::arg("autoadv")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetAdvance",
             (void (IGESData_ParamCursor::*)( const Standard_Boolean  ) ) static_cast<void (IGESData_ParamCursor::*)( const Standard_Boolean  ) >(&IGESData_ParamCursor::SetAdvance),
             R"#(Changes command to advance current cursor after reading parameters. If "advance" True, sets advance, if "False", resets it. ParamCursor is created by default with True.)#"  , py::arg("advance"))
        .def("Start",
             (Standard_Integer (IGESData_ParamCursor::*)() const) static_cast<Standard_Integer (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::Start),
             R"#(Returns (included) starting number for reading parameters)#" )
        .def("Limit",
             (Standard_Integer (IGESData_ParamCursor::*)() const) static_cast<Standard_Integer (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::Limit),
             R"#(Returns (excluded) upper limit number for reading parameters)#" )
        .def("Count",
             (Standard_Integer (IGESData_ParamCursor::*)() const) static_cast<Standard_Integer (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::Count),
             R"#(Returns required count of items to be read)#" )
        .def("ItemSize",
             (Standard_Integer (IGESData_ParamCursor::*)() const) static_cast<Standard_Integer (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::ItemSize),
             R"#(Returns length of item (count of parameters per item))#" )
        .def("TermSize",
             (Standard_Integer (IGESData_ParamCursor::*)() const) static_cast<Standard_Integer (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::TermSize),
             R"#(Returns length of current term (count of parameters) in item)#" )
        .def("Offset",
             (Standard_Integer (IGESData_ParamCursor::*)() const) static_cast<Standard_Integer (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::Offset),
             R"#(Returns offset from which current term must be read in item)#" )
        .def("Advance",
             (Standard_Boolean (IGESData_ParamCursor::*)() const) static_cast<Standard_Boolean (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::Advance),
             R"#(Returns True if Advance command has been set)#" )
        .def("Start",
             (Standard_Integer (IGESData_ParamCursor::*)() const) static_cast<Standard_Integer (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::Start),
             R"#(Returns (included) starting number for reading parameters)#" )
        .def("Limit",
             (Standard_Integer (IGESData_ParamCursor::*)() const) static_cast<Standard_Integer (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::Limit),
             R"#(Returns (excluded) upper limit number for reading parameters)#" )
        .def("Count",
             (Standard_Integer (IGESData_ParamCursor::*)() const) static_cast<Standard_Integer (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::Count),
             R"#(Returns required count of items to be read)#" )
        .def("ItemSize",
             (Standard_Integer (IGESData_ParamCursor::*)() const) static_cast<Standard_Integer (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::ItemSize),
             R"#(Returns length of item (count of parameters per item))#" )
        .def("TermSize",
             (Standard_Integer (IGESData_ParamCursor::*)() const) static_cast<Standard_Integer (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::TermSize),
             R"#(Returns length of current term (count of parameters) in item)#" )
        .def("Offset",
             (Standard_Integer (IGESData_ParamCursor::*)() const) static_cast<Standard_Integer (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::Offset),
             R"#(Returns offset from which current term must be read in item)#" )
        .def("Advance",
             (Standard_Boolean (IGESData_ParamCursor::*)() const) static_cast<Standard_Boolean (IGESData_ParamCursor::*)() const>(&IGESData_ParamCursor::Advance),
             R"#(Returns True if Advance command has been set)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_ParamReader , shared_ptr<IGESData_ParamReader>  >>(m.attr("IGESData_ParamReader"))
        .def(py::init< const opencascade::handle<Interface_ParamList> &,const opencascade::handle<Interface_Check> &,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("list"),  py::arg("ach"),  py::arg("base")=static_cast<const Standard_Integer>(1),  py::arg("nbpar")=static_cast<const Standard_Integer>(0),  py::arg("num")=static_cast<const Standard_Integer>(0) )
    // methods
        .def("EntityNumber",
             (Standard_Integer (IGESData_ParamReader::*)() const) static_cast<Standard_Integer (IGESData_ParamReader::*)() const>(&IGESData_ParamReader::EntityNumber),
             R"#(Returns the entity number in the file)#" )
        .def("Clear",
             (void (IGESData_ParamReader::*)() ) static_cast<void (IGESData_ParamReader::*)() >(&IGESData_ParamReader::Clear),
             R"#(resets state (stage, current param number, check with no fail))#" )
        .def("CurrentNumber",
             (Standard_Integer (IGESData_ParamReader::*)() const) static_cast<Standard_Integer (IGESData_ParamReader::*)() const>(&IGESData_ParamReader::CurrentNumber),
             R"#(returns the current parameter number This notion is involved by the organisation of an IGES list of parameter : it can be ended by two lists (Associativities and Properties), which can be empty, or even absent. Hence, it is necessary to know, at the end of specific reading, how many parameters have been read : the optionnal lists follow)#" )
        .def("SetCurrentNumber",
             (void (IGESData_ParamReader::*)( const Standard_Integer  ) ) static_cast<void (IGESData_ParamReader::*)( const Standard_Integer  ) >(&IGESData_ParamReader::SetCurrentNumber),
             R"#(sets current parameter number to a new value must be done at end of each step : set on first parameter following last read one; is done by some Read... methods (must be done directly if these method are not used) num greater than NbParams means that following lists are empty If current num is not managed, it remains at 1, which probably will cause error when successive steps of reading are made)#"  , py::arg("num"))
        .def("Stage",
             (IGESData_ReadStage (IGESData_ParamReader::*)() const) static_cast<IGESData_ReadStage (IGESData_ParamReader::*)() const>(&IGESData_ParamReader::Stage),
             R"#(gives current stage (Own-Props-Assocs-End, begins at Own))#" )
        .def("NextStage",
             (void (IGESData_ParamReader::*)() ) static_cast<void (IGESData_ParamReader::*)() >(&IGESData_ParamReader::NextStage),
             R"#(passes to next stage (must be linked with setting Current))#" )
        .def("EndAll",
             (void (IGESData_ParamReader::*)() ) static_cast<void (IGESData_ParamReader::*)() >(&IGESData_ParamReader::EndAll),
             R"#(passes directly to the end of reading process)#" )
        .def("NbParams",
             (Standard_Integer (IGESData_ParamReader::*)() const) static_cast<Standard_Integer (IGESData_ParamReader::*)() const>(&IGESData_ParamReader::NbParams),
             R"#(returns number of parameters (minus the first one) following method skip the first parameter (1 gives the 2nd))#" )
        .def("ParamType",
             (Interface_ParamType (IGESData_ParamReader::*)( const Standard_Integer  ) const) static_cast<Interface_ParamType (IGESData_ParamReader::*)( const Standard_Integer  ) const>(&IGESData_ParamReader::ParamType),
             R"#(returns type of parameter; note that "Ident" or "Sub" cannot be encountered, they correspond to "Integer", see also below)#"  , py::arg("num"))
        .def("ParamValue",
             (Standard_CString (IGESData_ParamReader::*)( const Standard_Integer  ) const) static_cast<Standard_CString (IGESData_ParamReader::*)( const Standard_Integer  ) const>(&IGESData_ParamReader::ParamValue),
             R"#(returns litteral value of a parameter, as it was in file)#"  , py::arg("num"))
        .def("IsParamDefined",
             (Standard_Boolean (IGESData_ParamReader::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const Standard_Integer  ) const>(&IGESData_ParamReader::IsParamDefined),
             R"#(says if a parameter is defined (not void) See also DefinedElseSkip)#"  , py::arg("num"))
        .def("IsParamEntity",
             (Standard_Boolean (IGESData_ParamReader::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const Standard_Integer  ) const>(&IGESData_ParamReader::IsParamEntity),
             R"#(says if a parameter can be regarded as an entity reference (see Prepare from IGESReaderData for more explanation) Note that such a parameter can seen as be a plain Integer too)#"  , py::arg("num"))
        .def("ParamNumber",
             (Standard_Integer (IGESData_ParamReader::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESData_ParamReader::*)( const Standard_Integer  ) const>(&IGESData_ParamReader::ParamNumber),
             R"#(returns entity number corresponding to a parameter if there is otherwise zero (according criterium IsParamEntity))#"  , py::arg("num"))
        .def("ParamEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const Standard_Integer  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const Standard_Integer  ) >(&IGESData_ParamReader::ParamEntity),
             R"#(directly returns entity referenced by a parameter)#"  , py::arg("IR"),  py::arg("num"))
        .def("Current",
             (IGESData_ParamCursor (IGESData_ParamReader::*)() const) static_cast<IGESData_ParamCursor (IGESData_ParamReader::*)() const>(&IGESData_ParamReader::Current),
             R"#(Creates a ParamCursor from the Current Number, to read one parameter, and to advance Current Number after reading)#" )
        .def("CurrentList",
             (IGESData_ParamCursor (IGESData_ParamReader::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<IGESData_ParamCursor (IGESData_ParamReader::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESData_ParamReader::CurrentList),
             R"#(Creates a ParamCursor from the Current Number, to read a list of "nb" items, and to advance Current Number after reading By default, each item is made of one parameter If size is given, it precises the number of params per item)#"  , py::arg("nb"),  py::arg("size")=static_cast<const Standard_Integer>(1))
        .def("DefinedElseSkip",
             (Standard_Boolean (IGESData_ParamReader::*)() ) static_cast<Standard_Boolean (IGESData_ParamReader::*)() >(&IGESData_ParamReader::DefinedElseSkip),
             R"#(Allows to simply process a parameter which can be defaulted. Waits on the Current Number a defined parameter or skips it : If the parameter <num> is defined, changes nothing and returns True Hence, the next reading with current cursor will concern <num> If it is void, advances Current Position by one, and returns False The next reading will concern <num+1> (except if <num> = NbParams))#" )
        .def("ReadInteger",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  Standard_Integer &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  Standard_Integer &  ) >(&IGESData_ParamReader::ReadInteger),
             R"#(None)#"  , py::arg("PC"),  py::arg("val"))
        .def("ReadInteger",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  Standard_Integer &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  Standard_Integer &  ) >(&IGESData_ParamReader::ReadInteger),
             R"#(Reads an Integer value designated by PC The method Current designates the current parameter and advances the Current Number by one after reading Note that if a count (not 1) is given, it is ignored If it is not an Integer, fills Check with a Fail (using mess) and returns False)#"  , py::arg("PC"),  py::arg("mess"),  py::arg("val"))
        .def("ReadBoolean",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Message_Msg & ,  Standard_Boolean & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Message_Msg & ,  Standard_Boolean & ,  const Standard_Boolean  ) >(&IGESData_ParamReader::ReadBoolean),
             R"#(None)#"  , py::arg("PC"),  py::arg("amsg"),  py::arg("val"),  py::arg("exact")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ReadBoolean",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  Standard_Boolean & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  Standard_Boolean & ,  const Standard_Boolean  ) >(&IGESData_ParamReader::ReadBoolean),
             R"#(Reads a Boolean value from parameter "num" A Boolean is given as an Integer value 0 (False) or 1 (True) Anyway, an Integer is demanded (else, Check is filled) If exact is given True, those precise values are demanded Else, Correction is done, as False for 0 or <0, True for >0 (with a Warning error message, and return is True) In case of error (not an Integer, or not 0/1 and exact True), Check is filled with a Fail (using mess) and return is False)#"  , py::arg("PC"),  py::arg("mess"),  py::arg("val"),  py::arg("exact")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ReadReal",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  Standard_Real &  ) >(&IGESData_ParamReader::ReadReal),
             R"#(None)#"  , py::arg("PC"),  py::arg("val"))
        .def("ReadReal",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  Standard_Real &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  Standard_Real &  ) >(&IGESData_ParamReader::ReadReal),
             R"#(Reads a Real value from parameter "num" An Integer is accepted (Check is filled with a Warning message) and causes return to be True (as normal case) In other cases, Check is filled with a Fail and return is False)#"  , py::arg("PC"),  py::arg("mess"),  py::arg("val"))
        .def("ReadXY",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  Message_Msg & ,  gp_XY &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  Message_Msg & ,  gp_XY &  ) >(&IGESData_ParamReader::ReadXY),
             R"#(None)#"  , py::arg("PC"),  py::arg("amsg"),  py::arg("val"))
        .def("ReadXY",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  gp_XY &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  gp_XY &  ) >(&IGESData_ParamReader::ReadXY),
             R"#(Reads a couple of Real values (X,Y) from parameter "num" Integers are accepted (Check is filled with a Warning message) and cause return to be True (as normal case) In other cases, Check is filled with a Fail and return is False)#"  , py::arg("PC"),  py::arg("mess"),  py::arg("val"))
        .def("ReadXYZ",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  Message_Msg & ,  gp_XYZ &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  Message_Msg & ,  gp_XYZ &  ) >(&IGESData_ParamReader::ReadXYZ),
             R"#(None)#"  , py::arg("PC"),  py::arg("amsg"),  py::arg("val"))
        .def("ReadXYZ",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  gp_XYZ &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  gp_XYZ &  ) >(&IGESData_ParamReader::ReadXYZ),
             R"#(Reads a triplet of Real values (X,Y,Z) from parameter "num" Integers are accepted (Check is filled with a Warning message) and cause return to be True (as normal case) In other cases, Check is filled with a Fail and return is False For Message)#"  , py::arg("PC"),  py::arg("mess"),  py::arg("val"))
        .def("ReadText",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Message_Msg & ,  opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Message_Msg & ,  opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_ParamReader::ReadText),
             R"#(None)#"  , py::arg("PC"),  py::arg("amsg"),  py::arg("val"))
        .def("ReadText",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_ParamReader::ReadText),
             R"#(Reads a Text value from parameter "num", as a String from Collection, that is, Hollerith text without leading "nnnH" If it is not a String, fills Check with a Fail (using mess) and returns False)#"  , py::arg("PC"),  py::arg("mess"),  py::arg("val"))
        .def("ReadEntity",
             (Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  IGESData_Status & ,  opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  IGESData_Status & ,  opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean  ) >(&IGESData_ParamReader::ReadEntity),
             R"#(None)#"  , py::arg("IR"),  py::arg("PC"),  py::arg("aStatus"),  py::arg("val"),  py::arg("canbenul")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReadEntity",
             (Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  const Standard_CString ,  opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  const Standard_CString ,  opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean  ) >(&IGESData_ParamReader::ReadEntity),
             R"#(Reads an IGES entity from parameter "num" An Entity is known by its reference, which has the form of an odd Integer Value (a number in the Directory) If <canbenul> is given True, a Reference can also be Null : in this case, the result is a Null Handle with no Error If <canbenul> is False, a Null Reference causes an Error If the parameter cannot refer to an entity (or null), fills Check with a Fail (using mess) and returns False)#"  , py::arg("IR"),  py::arg("PC"),  py::arg("mess"),  py::arg("val"),  py::arg("canbenul")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReadEntity",
             (Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  IGESData_Status & ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  IGESData_Status & ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean  ) >(&IGESData_ParamReader::ReadEntity),
             R"#(None)#"  , py::arg("IR"),  py::arg("PC"),  py::arg("aStatus"),  py::arg("type"),  py::arg("val"),  py::arg("canbenul")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReadEntity",
             (Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  const Standard_CString ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  const Standard_CString ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean  ) >(&IGESData_ParamReader::ReadEntity),
             R"#(Works as ReadEntity without Type, but in addition checks the Type of the Entity, which must be "kind of" a given <type> Then, gives the same fail cases as ReadEntity without Type, plus the case "Incorrect Type" (in such a case, returns False and givel <val> = Null))#"  , py::arg("IR"),  py::arg("PC"),  py::arg("mess"),  py::arg("type"),  py::arg("val"),  py::arg("canbenul")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReadInts",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Message_Msg & ,  opencascade::handle<TColStd_HArray1OfInteger> & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Message_Msg & ,  opencascade::handle<TColStd_HArray1OfInteger> & ,  const Standard_Integer  ) >(&IGESData_ParamReader::ReadInts),
             R"#(None)#"  , py::arg("PC"),  py::arg("amsg"),  py::arg("val"),  py::arg("index")=static_cast<const Standard_Integer>(1))
        .def("ReadInts",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  opencascade::handle<TColStd_HArray1OfInteger> & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  opencascade::handle<TColStd_HArray1OfInteger> & ,  const Standard_Integer  ) >(&IGESData_ParamReader::ReadInts),
             R"#(Reads a list of Integer values, defined by PC (with a count of parameters). PC can start from Current Number and command it to advance after reading (use method CurrentList to do this) The list is given as a HArray1, numered from "index" If all params are not Integer, Check is filled (using mess) and return value is False)#"  , py::arg("PC"),  py::arg("mess"),  py::arg("val"),  py::arg("index")=static_cast<const Standard_Integer>(1))
        .def("ReadReals",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  Message_Msg & ,  opencascade::handle<TColStd_HArray1OfReal> & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  Message_Msg & ,  opencascade::handle<TColStd_HArray1OfReal> & ,  const Standard_Integer  ) >(&IGESData_ParamReader::ReadReals),
             R"#(None)#"  , py::arg("PC"),  py::arg("amsg"),  py::arg("val"),  py::arg("index")=static_cast<const Standard_Integer>(1))
        .def("ReadReals",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  opencascade::handle<TColStd_HArray1OfReal> & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  opencascade::handle<TColStd_HArray1OfReal> & ,  const Standard_Integer  ) >(&IGESData_ParamReader::ReadReals),
             R"#(Reads a list of Real values defined by PC Same conditions as for ReadInts, for PC and index An Integer parameter is accepted, if at least one parameter is Integer, Check is filled with a "Warning" message If all params are neither Real nor Integer, Check is filled (using mess) and return value is False)#"  , py::arg("PC"),  py::arg("mess"),  py::arg("val"),  py::arg("index")=static_cast<const Standard_Integer>(1))
        .def("ReadTexts",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Message_Msg & ,  opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Message_Msg & ,  opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const Standard_Integer  ) >(&IGESData_ParamReader::ReadTexts),
             R"#(None)#"  , py::arg("PC"),  py::arg("amsg"),  py::arg("val"),  py::arg("index")=static_cast<const Standard_Integer>(1))
        .def("ReadTexts",
             (Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const IGESData_ParamCursor & ,  const Standard_CString ,  opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const Standard_Integer  ) >(&IGESData_ParamReader::ReadTexts),
             R"#(Reads a list of Hollerith Texts, defined by PC Texts are read as Hollerith texts without leading "nnnH" Same conditions as for ReadInts, for PC and index If all params are not Text, Check is filled (using mess) and return value is False)#"  , py::arg("PC"),  py::arg("mess"),  py::arg("val"),  py::arg("index")=static_cast<const Standard_Integer>(1))
        .def("ReadEnts",
             (Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  const Message_Msg & ,  opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  const Message_Msg & ,  opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const Standard_Integer  ) >(&IGESData_ParamReader::ReadEnts),
             R"#(None)#"  , py::arg("IR"),  py::arg("PC"),  py::arg("amsg"),  py::arg("val"),  py::arg("index")=static_cast<const Standard_Integer>(1))
        .def("ReadEnts",
             (Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  const Standard_CString ,  opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  const Standard_CString ,  opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const Standard_Integer  ) >(&IGESData_ParamReader::ReadEnts),
             R"#(Reads a list of Entities defined by PC Same conditions as for ReadInts, for PC and index The list is given as a HArray1, numered from "index" If all params cannot be read as Entities, Check is filled (using mess) and return value is False Remark : Null references are accepted, they are ignored (negative pointers too : they provoke a Warning message) If the caller wants to check them, a loop on ReadEntity should be used)#"  , py::arg("IR"),  py::arg("PC"),  py::arg("mess"),  py::arg("val"),  py::arg("index")=static_cast<const Standard_Integer>(1))
        .def("ReadEntList",
             (Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  Message_Msg & ,  Interface_EntityList & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  Message_Msg & ,  Interface_EntityList & ,  const Standard_Boolean  ) >(&IGESData_ParamReader::ReadEntList),
             R"#(None)#"  , py::arg("IR"),  py::arg("PC"),  py::arg("amsg"),  py::arg("val"),  py::arg("ord")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ReadEntList",
             (Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  const Standard_CString ,  Interface_EntityList & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  const IGESData_ParamCursor & ,  const Standard_CString ,  Interface_EntityList & ,  const Standard_Boolean  ) >(&IGESData_ParamReader::ReadEntList),
             R"#(Reads a list of Entities defined by PC Same conditions as for ReadEnts, for PC The list is given as an EntityList (index has no meaning; the EntityList starts from clear) If "ord" is given True (default), entities will be added to the list in their original order Remark : Negative or Null Pointers are ignored Else ("ord" False), order is not garanteed (faster mode) If all params cannot be read as Entities, same as above Warning Give "ord" to False ONLY if order is not significant)#"  , py::arg("IR"),  py::arg("PC"),  py::arg("mess"),  py::arg("val"),  py::arg("ord")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ReadingReal",
             (Standard_Boolean (IGESData_ParamReader::*)( const Standard_Integer ,  Standard_Real &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const Standard_Integer ,  Standard_Real &  ) >(&IGESData_ParamReader::ReadingReal),
             R"#(None)#"  , py::arg("num"),  py::arg("val"))
        .def("ReadingReal",
             (Standard_Boolean (IGESData_ParamReader::*)( const Standard_Integer ,  const Standard_CString ,  Standard_Real &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const Standard_Integer ,  const Standard_CString ,  Standard_Real &  ) >(&IGESData_ParamReader::ReadingReal),
             R"#(Routine which reads a Real parameter, given its number Same conditions as ReadReal for mess, val, and return value)#"  , py::arg("num"),  py::arg("mess"),  py::arg("val"))
        .def("ReadingEntityNumber",
             (Standard_Boolean (IGESData_ParamReader::*)( const Standard_Integer ,  Standard_Integer &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const Standard_Integer ,  Standard_Integer &  ) >(&IGESData_ParamReader::ReadingEntityNumber),
             R"#(None)#"  , py::arg("num"),  py::arg("val"))
        .def("ReadingEntityNumber",
             (Standard_Boolean (IGESData_ParamReader::*)( const Standard_Integer ,  const Standard_CString ,  Standard_Integer &  ) ) static_cast<Standard_Boolean (IGESData_ParamReader::*)( const Standard_Integer ,  const Standard_CString ,  Standard_Integer &  ) >(&IGESData_ParamReader::ReadingEntityNumber),
             R"#(Routine which reads an Entity Number (which allows to read the Entity in the IGESReaderData by BoundEntity), given its number in the list of Parameters Same conditions as ReadEntity for mess, val, and return value In particular, returns True and val to zero means Null Entity, and val not zero means Entity read by BoundEntity)#"  , py::arg("num"),  py::arg("mess"),  py::arg("val"))
        .def("SendFail",
             (void (IGESData_ParamReader::*)( const Message_Msg &  ) ) static_cast<void (IGESData_ParamReader::*)( const Message_Msg &  ) >(&IGESData_ParamReader::SendFail),
             R"#(None)#"  , py::arg("amsg"))
        .def("SendWarning",
             (void (IGESData_ParamReader::*)( const Message_Msg &  ) ) static_cast<void (IGESData_ParamReader::*)( const Message_Msg &  ) >(&IGESData_ParamReader::SendWarning),
             R"#(None)#"  , py::arg("amsg"))
        .def("AddFail",
             (void (IGESData_ParamReader::*)( const Standard_CString ,  const Standard_CString  ) ) static_cast<void (IGESData_ParamReader::*)( const Standard_CString ,  const Standard_CString  ) >(&IGESData_ParamReader::AddFail),
             R"#(None)#"  , py::arg("afail"),  py::arg("bfail")=static_cast<const Standard_CString>(""))
        .def("AddFail",
             (void (IGESData_ParamReader::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_ParamReader::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_ParamReader::AddFail),
             R"#(feeds the Check with a new fail (as a String or as a CString))#"  , py::arg("af"),  py::arg("bf"))
        .def("AddWarning",
             (void (IGESData_ParamReader::*)( const Standard_CString ,  const Standard_CString  ) ) static_cast<void (IGESData_ParamReader::*)( const Standard_CString ,  const Standard_CString  ) >(&IGESData_ParamReader::AddWarning),
             R"#(None)#"  , py::arg("awarn"),  py::arg("bwarn")=static_cast<const Standard_CString>(""))
        .def("AddWarning",
             (void (IGESData_ParamReader::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_ParamReader::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_ParamReader::AddWarning),
             R"#(feeds the Check with a new Warning message)#"  , py::arg("aw"),  py::arg("bw"))
        .def("Mend",
             (void (IGESData_ParamReader::*)( const Standard_CString  ) ) static_cast<void (IGESData_ParamReader::*)( const Standard_CString  ) >(&IGESData_ParamReader::Mend),
             R"#(None)#"  , py::arg("pref")=static_cast<const Standard_CString>(""))
        .def("HasFailed",
             (Standard_Boolean (IGESData_ParamReader::*)() const) static_cast<Standard_Boolean (IGESData_ParamReader::*)() const>(&IGESData_ParamReader::HasFailed),
             R"#(says if fails have been recorded into the Check)#" )
        .def("Check",
             (const opencascade::handle<Interface_Check> & (IGESData_ParamReader::*)() const) static_cast<const opencascade::handle<Interface_Check> & (IGESData_ParamReader::*)() const>(&IGESData_ParamReader::Check),
             R"#(returns the Check Note that any error signaled above is also recorded into it)#" )
        .def("CCheck",
             (opencascade::handle<Interface_Check> & (IGESData_ParamReader::*)() ) static_cast<opencascade::handle<Interface_Check> & (IGESData_ParamReader::*)() >(&IGESData_ParamReader::CCheck),
             R"#(returns the check in a way which allows to work on it directly (i.e. messages added to the Check are added to ParamReader too))#" )
        .def("IsCheckEmpty",
             (Standard_Boolean (IGESData_ParamReader::*)() const) static_cast<Standard_Boolean (IGESData_ParamReader::*)() const>(&IGESData_ParamReader::IsCheckEmpty),
             R"#(Returns True if the Check is Empty Else, it has to be recorded with the Read Entity)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_Protocol ,opencascade::handle<IGESData_Protocol>  , Interface_Protocol >>(m.attr("IGESData_Protocol"))
        .def(py::init<  >()  )
    // methods
        .def("NbResources",
             (Standard_Integer (IGESData_Protocol::*)() const) static_cast<Standard_Integer (IGESData_Protocol::*)() const>(&IGESData_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, none)#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESData_Protocol::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESData_Protocol::*)( const Standard_Integer  ) const>(&IGESData_Protocol::Resource),
             R"#(Returns a Resource, given a rank. Here, none)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESData_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const) static_cast<Standard_Integer (IGESData_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const>(&IGESData_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type Here, Undefined and Free Format Entities have the Number 1.)#"  , py::arg("atype"))
        .def("NewModel",
             (opencascade::handle<Interface_InterfaceModel> (IGESData_Protocol::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (IGESData_Protocol::*)() const>(&IGESData_Protocol::NewModel),
             R"#(Creates an empty Model for IGES Norm)#" )
        .def("IsSuitableModel",
             (Standard_Boolean (IGESData_Protocol::*)( const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_Boolean (IGESData_Protocol::*)( const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESData_Protocol::IsSuitableModel),
             R"#(Returns True if <model> is a Model of IGES Norm)#"  , py::arg("model"))
        .def("UnknownEntity",
             (opencascade::handle<Standard_Transient> (IGESData_Protocol::*)() const) static_cast<opencascade::handle<Standard_Transient> (IGESData_Protocol::*)() const>(&IGESData_Protocol::UnknownEntity),
             R"#(Creates a new Unknown Entity for IGES (UndefinedEntity))#" )
        .def("IsUnknownEntity",
             (Standard_Boolean (IGESData_Protocol::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IGESData_Protocol::*)( const opencascade::handle<Standard_Transient> &  ) const>(&IGESData_Protocol::IsUnknownEntity),
             R"#(Returns True if <ent> is an Unknown Entity for the Norm, i.e. Type UndefinedEntity, status Unknown)#"  , py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_Protocol::*)() const>(&IGESData_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_Protocol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_Protocol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_ReadWriteModule ,opencascade::handle<IGESData_ReadWriteModule> ,Py_IGESData_ReadWriteModule , Interface_ReaderModule >>(m.attr("IGESData_ReadWriteModule"))
    // methods
        .def("CaseNum",
             (Standard_Integer (IGESData_ReadWriteModule::*)( const opencascade::handle<Interface_FileReaderData> & ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IGESData_ReadWriteModule::*)( const opencascade::handle<Interface_FileReaderData> & ,  const Standard_Integer  ) const>(&IGESData_ReadWriteModule::CaseNum),
             R"#(Translates the Type of record <num> in <data> to a positive Case Number, or 0 if failed. Works with IGESReaderData which provides Type & Form Numbers, and calls CaseIGES (see below))#"  , py::arg("data"),  py::arg("num"))
        .def("CaseIGES",
             (Standard_Integer (IGESData_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IGESData_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESData_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers corresponding to the Entity Types taken into account by a sub-class of ReadWriteModule (hence, each sub-class of ReadWriteModule has to redefine this method) Called by CaseNum. Its result will then be used to call Read, etc ...)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("Read",
             (void (IGESData_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<Interface_FileReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<Standard_Transient> &  ) const) static_cast<void (IGESData_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<Interface_FileReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<Standard_Transient> &  ) const>(&IGESData_ReadWriteModule::Read),
             R"#(General Read Function. See IGESReaderTool for more info)#"  , py::arg("CN"),  py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("ReadOwnParams",
             (void (IGESData_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESData_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESData_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity; <PR> gives access to them, <IR> detains parameter types and values For each class, there must be a specific action provided Note that Properties and Associativities Lists are Read by specific methods (see below), they are called under control of reading process (only one call) according Stage recorded in ParamReader)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESData_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESData_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const>(&IGESData_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter; defined for each class (to be redefined for other IGES ReadWriteModules) Warning : Properties and Associativities are directly managed by WriteIGES, must not be sent by this method)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_ReadWriteModule::*)() const>(&IGESData_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_ReadWriteModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_ReadWriteModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_SpecificLib , shared_ptr<IGESData_SpecificLib>  >>(m.attr("IGESData_SpecificLib"))
        .def(py::init< const opencascade::handle<IGESData_Protocol> & >()  , py::arg("aprotocol") )
        .def(py::init<  >()  )
    // methods
        .def("AddProtocol",
             (void (IGESData_SpecificLib::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (IGESData_SpecificLib::*)( const opencascade::handle<Standard_Transient> &  ) >(&IGESData_SpecificLib::AddProtocol),
             R"#(Adds a couple (Module-Protocol) to the Library, given the class of a Protocol. Takes Resources into account. (if <aprotocol> is not of type TheProtocol, it is not added))#"  , py::arg("aprotocol"))
        .def("Clear",
             (void (IGESData_SpecificLib::*)() ) static_cast<void (IGESData_SpecificLib::*)() >(&IGESData_SpecificLib::Clear),
             R"#(Clears the list of Modules of a library (can be used to redefine the order of Modules before action : Clear then refill the Library by calls to AddProtocol))#" )
        .def("SetComplete",
             (void (IGESData_SpecificLib::*)() ) static_cast<void (IGESData_SpecificLib::*)() >(&IGESData_SpecificLib::SetComplete),
             R"#(Sets a library to be defined with the complete Global list (all the couples Protocol/Modules recorded in it))#" )
        .def("Select",
             (Standard_Boolean (IGESData_SpecificLib::*)( const opencascade::handle<IGESData_IGESEntity> & ,  opencascade::handle<IGESData_SpecificModule> & ,  Standard_Integer &  ) const) static_cast<Standard_Boolean (IGESData_SpecificLib::*)( const opencascade::handle<IGESData_IGESEntity> & ,  opencascade::handle<IGESData_SpecificModule> & ,  Standard_Integer &  ) const>(&IGESData_SpecificLib::Select),
             R"#(Selects a Module from the Library, given an Object. Returns True if Select has succeeded, False else. Also Returns (as arguments) the selected Module and the Case Number determined by the associated Protocol. If Select has failed, <module> is Null Handle and CN is zero. (Select can work on any criterium, such as Object DynamicType))#"  , py::arg("obj"),  py::arg("module"),  py::arg("CN"))
        .def("Start",
             (void (IGESData_SpecificLib::*)() ) static_cast<void (IGESData_SpecificLib::*)() >(&IGESData_SpecificLib::Start),
             R"#(Starts Iteration on the Modules (sets it on the first one))#" )
        .def("More",
             (Standard_Boolean (IGESData_SpecificLib::*)() const) static_cast<Standard_Boolean (IGESData_SpecificLib::*)() const>(&IGESData_SpecificLib::More),
             R"#(Returns True if there are more Modules to iterate on)#" )
        .def("Next",
             (void (IGESData_SpecificLib::*)() ) static_cast<void (IGESData_SpecificLib::*)() >(&IGESData_SpecificLib::Next),
             R"#(Iterates by getting the next Module in the list If there is none, the exception will be raised by Value)#" )
        .def("Module",
             (const opencascade::handle<IGESData_SpecificModule> & (IGESData_SpecificLib::*)() const) static_cast<const opencascade::handle<IGESData_SpecificModule> & (IGESData_SpecificLib::*)() const>(&IGESData_SpecificLib::Module),
             R"#(Returns the current Module in the Iteration)#" )
        .def("Protocol",
             (const opencascade::handle<IGESData_Protocol> & (IGESData_SpecificLib::*)() const) static_cast<const opencascade::handle<IGESData_Protocol> & (IGESData_SpecificLib::*)() const>(&IGESData_SpecificLib::Protocol),
             R"#(Returns the current Protocol in the Iteration)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("SetGlobal_s",
                    (void (*)( const opencascade::handle<IGESData_SpecificModule> & ,  const opencascade::handle<IGESData_Protocol> &  ) ) static_cast<void (*)( const opencascade::handle<IGESData_SpecificModule> & ,  const opencascade::handle<IGESData_Protocol> &  ) >(&IGESData_SpecificLib::SetGlobal),
                    R"#(Adds a couple (Module-Protocol) into the global definition set for this class of Library.)#"  , py::arg("amodule"),  py::arg("aprotocol"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_SpecificModule ,opencascade::handle<IGESData_SpecificModule> ,Py_IGESData_SpecificModule , Standard_Transient >>(m.attr("IGESData_SpecificModule"))
    // methods
        .def("OwnDump",
             (void (IGESData_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESData_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESData_SpecificModule::OwnDump),
             R"#(Specific Dump for each type of IGES Entity : it concerns only own parameters, the general data (Directory Part, Lists) are taken into account by the IGESDumper See class IGESDumper for the rules to follow for <own> and <attached> level)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESData_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<Standard_Boolean (IGESData_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_SpecificModule::OwnCorrect),
             R"#(Specific Automatic Correction on own Parameters of an Entity. It works by setting in accordance redundant data, if there are when there is no ambiguity (else, it does nothing). Remark that classic Corrections on Directory Entry (to set void data) are taken into account alsewhere.)#"  , py::arg("CN"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_SpecificModule::*)() const>(&IGESData_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_SpecificModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_SpecificModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_ToolLocation ,opencascade::handle<IGESData_ToolLocation>  , Standard_Transient >>(m.attr("IGESData_ToolLocation"))
        .def(py::init< const opencascade::handle<IGESData_IGESModel> &,const opencascade::handle<IGESData_Protocol> & >()  , py::arg("amodel"),  py::arg("protocol") )
    // methods
        .def("Load",
             (void (IGESData_ToolLocation::*)() ) static_cast<void (IGESData_ToolLocation::*)() >(&IGESData_ToolLocation::Load),
             R"#(Does the effective work of determining Locations of Entities)#" )
        .def("SetPrecision",
             (void (IGESData_ToolLocation::*)( const Standard_Real  ) ) static_cast<void (IGESData_ToolLocation::*)( const Standard_Real  ) >(&IGESData_ToolLocation::SetPrecision),
             R"#(Sets a precision for the Analysis of Locations (default by constructor is 1.E-05))#"  , py::arg("prec"))
        .def("SetReference",
             (void (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESData_ToolLocation::SetReference),
             R"#(Sets the "Reference" information for <child> as being <parent> Sets an Error Status if already set (see method IsAmbiguous))#"  , py::arg("parent"),  py::arg("child"))
        .def("SetParentAssoc",
             (void (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESData_ToolLocation::SetParentAssoc),
             R"#(Sets the "Associativity" information for <child> as being <parent> (it must be the Parent itself, not the Associativity))#"  , py::arg("parent"),  py::arg("child"))
        .def("ResetDependences",
             (void (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESData_ToolLocation::ResetDependences),
             R"#(Resets all informations about dependences for <child>)#"  , py::arg("child"))
        .def("SetOwnAsDependent",
             (void (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESData_ToolLocation::SetOwnAsDependent),
             R"#(Unitary action which defines Entities referenced by <ent> (except those in Directory Part and Associativities List) as Dependent (their Locations are related to that of <ent>))#"  , py::arg("ent"))
        .def("IsTransf",
             (Standard_Boolean (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<Standard_Boolean (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_ToolLocation::IsTransf),
             R"#(Returns True if <ent> is kind of TransfEntity. Then, it has no location, while it can be used to define a Location))#"  , py::arg("ent"))
        .def("IsAssociativity",
             (Standard_Boolean (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<Standard_Boolean (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_ToolLocation::IsAssociativity),
             R"#(Returns True if <ent> is an Associativity (IGES Type 402). Then, Location does not apply.)#"  , py::arg("ent"))
        .def("HasTransf",
             (Standard_Boolean (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<Standard_Boolean (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_ToolLocation::HasTransf),
             R"#(Returns True if <ent> has a Transformation Matrix in proper (referenced from its Directory Part))#"  , py::arg("ent"))
        .def("ExplicitLocation",
             (gp_GTrsf (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<gp_GTrsf (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_ToolLocation::ExplicitLocation),
             R"#(Returns the Explicit Location defined by the Transformation Matrix of <ent>. Identity if there is none)#"  , py::arg("ent"))
        .def("IsAmbiguous",
             (Standard_Boolean (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<Standard_Boolean (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_ToolLocation::IsAmbiguous),
             R"#(Returns True if more than one Parent has been determined for <ent>, by adding direct References and Associativities)#"  , py::arg("ent"))
        .def("HasParent",
             (Standard_Boolean (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<Standard_Boolean (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_ToolLocation::HasParent),
             R"#(Returns True if <ent> is dependent from one and only one other Entity, either by Reference or by Associativity)#"  , py::arg("ent"))
        .def("Parent",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_ToolLocation::Parent),
             R"#(Returns the unique Parent recorded for <ent>. Returns a Null Handle if there is none)#"  , py::arg("ent"))
        .def("HasParentByAssociativity",
             (Standard_Boolean (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<Standard_Boolean (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_ToolLocation::HasParentByAssociativity),
             R"#(Returns True if the Parent, if there is one, is defined by a SingleParentEntity Associativity Else, if HasParent is True, it is by Reference)#"  , py::arg("ent"))
        .def("ParentLocation",
             (gp_GTrsf (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<gp_GTrsf (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_ToolLocation::ParentLocation),
             R"#(Returns the effective Location of the Parent of <ent>, if there is one : this Location is itself given as compound according dependences on the Parent, if there are some. Returns an Identity Transformation if no Parent is recorded.)#"  , py::arg("ent"))
        .def("EffectiveLocation",
             (gp_GTrsf (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<gp_GTrsf (IGESData_ToolLocation::*)( const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_ToolLocation::EffectiveLocation),
             R"#(Returns the effective Location of an Entity, i.e. the composition of its proper Transformation Matrix (returned by Transf) and its Parent's Location (returned by ParentLocation))#"  , py::arg("ent"))
        .def("AnalyseLocation",
             (Standard_Boolean (IGESData_ToolLocation::*)( const gp_GTrsf & ,  gp_Trsf &  ) const) static_cast<Standard_Boolean (IGESData_ToolLocation::*)( const gp_GTrsf & ,  gp_Trsf &  ) const>(&IGESData_ToolLocation::AnalyseLocation),
             R"#(Analysis a Location given as a GTrsf, by trying to convert it to a Trsf (i.e. to a True Location of which effect is described by an Isometry or a Similarity) Works with the Precision given by default or by SetPrecision Calls ConvertLocation (see below))#"  , py::arg("loc"),  py::arg("result"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_ToolLocation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_ToolLocation::*)() const>(&IGESData_ToolLocation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ConvertLocation_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const gp_GTrsf & ,  gp_Trsf & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const gp_GTrsf & ,  gp_Trsf & ,  const Standard_Real  ) >(&IGESData_ToolLocation::ConvertLocation),
                    R"#(Convertion of a Location, from GTrsf form to Trsf form Works with a precision given as argument. Returns True if the Conversion is possible, (hence, <result> contains the converted location), False else <unit>, if given, indicates the unit in which <loc> is defined in meters. It concerns the translation part (to be converted.)#"  , py::arg("prec"),  py::arg("loc"),  py::arg("result"),  py::arg("uni")=static_cast<const Standard_Real>(1))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_ToolLocation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_ToolLocation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_WriterLib , shared_ptr<IGESData_WriterLib>  >>(m.attr("IGESData_WriterLib"))
        .def(py::init< const opencascade::handle<IGESData_Protocol> & >()  , py::arg("aprotocol") )
        .def(py::init<  >()  )
    // methods
        .def("AddProtocol",
             (void (IGESData_WriterLib::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (IGESData_WriterLib::*)( const opencascade::handle<Standard_Transient> &  ) >(&IGESData_WriterLib::AddProtocol),
             R"#(Adds a couple (Module-Protocol) to the Library, given the class of a Protocol. Takes Resources into account. (if <aprotocol> is not of type TheProtocol, it is not added))#"  , py::arg("aprotocol"))
        .def("Clear",
             (void (IGESData_WriterLib::*)() ) static_cast<void (IGESData_WriterLib::*)() >(&IGESData_WriterLib::Clear),
             R"#(Clears the list of Modules of a library (can be used to redefine the order of Modules before action : Clear then refill the Library by calls to AddProtocol))#" )
        .def("SetComplete",
             (void (IGESData_WriterLib::*)() ) static_cast<void (IGESData_WriterLib::*)() >(&IGESData_WriterLib::SetComplete),
             R"#(Sets a library to be defined with the complete Global list (all the couples Protocol/Modules recorded in it))#" )
        .def("Select",
             (Standard_Boolean (IGESData_WriterLib::*)( const opencascade::handle<IGESData_IGESEntity> & ,  opencascade::handle<IGESData_ReadWriteModule> & ,  Standard_Integer &  ) const) static_cast<Standard_Boolean (IGESData_WriterLib::*)( const opencascade::handle<IGESData_IGESEntity> & ,  opencascade::handle<IGESData_ReadWriteModule> & ,  Standard_Integer &  ) const>(&IGESData_WriterLib::Select),
             R"#(Selects a Module from the Library, given an Object. Returns True if Select has succeeded, False else. Also Returns (as arguments) the selected Module and the Case Number determined by the associated Protocol. If Select has failed, <module> is Null Handle and CN is zero. (Select can work on any criterium, such as Object DynamicType))#"  , py::arg("obj"),  py::arg("module"),  py::arg("CN"))
        .def("Start",
             (void (IGESData_WriterLib::*)() ) static_cast<void (IGESData_WriterLib::*)() >(&IGESData_WriterLib::Start),
             R"#(Starts Iteration on the Modules (sets it on the first one))#" )
        .def("More",
             (Standard_Boolean (IGESData_WriterLib::*)() const) static_cast<Standard_Boolean (IGESData_WriterLib::*)() const>(&IGESData_WriterLib::More),
             R"#(Returns True if there are more Modules to iterate on)#" )
        .def("Next",
             (void (IGESData_WriterLib::*)() ) static_cast<void (IGESData_WriterLib::*)() >(&IGESData_WriterLib::Next),
             R"#(Iterates by getting the next Module in the list If there is none, the exception will be raised by Value)#" )
        .def("Module",
             (const opencascade::handle<IGESData_ReadWriteModule> & (IGESData_WriterLib::*)() const) static_cast<const opencascade::handle<IGESData_ReadWriteModule> & (IGESData_WriterLib::*)() const>(&IGESData_WriterLib::Module),
             R"#(Returns the current Module in the Iteration)#" )
        .def("Protocol",
             (const opencascade::handle<IGESData_Protocol> & (IGESData_WriterLib::*)() const) static_cast<const opencascade::handle<IGESData_Protocol> & (IGESData_WriterLib::*)() const>(&IGESData_WriterLib::Protocol),
             R"#(Returns the current Protocol in the Iteration)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("SetGlobal_s",
                    (void (*)( const opencascade::handle<IGESData_ReadWriteModule> & ,  const opencascade::handle<IGESData_Protocol> &  ) ) static_cast<void (*)( const opencascade::handle<IGESData_ReadWriteModule> & ,  const opencascade::handle<IGESData_Protocol> &  ) >(&IGESData_WriterLib::SetGlobal),
                    R"#(Adds a couple (Module-Protocol) into the global definition set for this class of Library.)#"  , py::arg("amodule"),  py::arg("aprotocol"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<IGESData_ColorEntity ,opencascade::handle<IGESData_ColorEntity>>(m,"IGESData_ColorEntity");

    static_cast<py::class_<IGESData_ColorEntity ,opencascade::handle<IGESData_ColorEntity>  , IGESData_IGESEntity >>(m.attr("IGESData_ColorEntity"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_ColorEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_ColorEntity::*)() const>(&IGESData_ColorEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_ColorEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_ColorEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_DefaultGeneral ,opencascade::handle<IGESData_DefaultGeneral>  , IGESData_GeneralModule >>(m.attr("IGESData_DefaultGeneral"))
        .def(py::init<  >()  )
    // methods
        .def("OwnSharedCase",
             (void (IGESData_DefaultGeneral::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESData_DefaultGeneral::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const>(&IGESData_DefaultGeneral::OwnSharedCase),
             R"#(Lists the Entities shared by an IGESEntity, which must be an UndefinedEntity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESData_DefaultGeneral::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<IGESData_DirChecker (IGESData_DefaultGeneral::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESData_DefaultGeneral::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity Here, Returns an empty DirChecker (no constraint to check))#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESData_DefaultGeneral::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESData_DefaultGeneral::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESData_DefaultGeneral::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity Here, does nothing (no constraint to check))#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESData_DefaultGeneral::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IGESData_DefaultGeneral::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const>(&IGESData_DefaultGeneral::NewVoid),
             R"#(Specific creation of a new void entity (UndefinedEntity only))#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESData_DefaultGeneral::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESData_DefaultGeneral::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const>(&IGESData_DefaultGeneral::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_DefaultGeneral::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_DefaultGeneral::*)() const>(&IGESData_DefaultGeneral::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_DefaultGeneral::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_DefaultGeneral::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_DefaultSpecific ,opencascade::handle<IGESData_DefaultSpecific>  , IGESData_SpecificModule >>(m.attr("IGESData_DefaultSpecific"))
        .def(py::init<  >()  )
    // methods
        .def("OwnDump",
             (void (IGESData_DefaultSpecific::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESData_DefaultSpecific::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESData_DefaultSpecific::OwnDump),
             R"#(Specific Dump for UndefinedEntity : it concerns only own parameters, the general data (Directory Part, Lists) are taken into account by the IGESDumper)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_DefaultSpecific::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_DefaultSpecific::*)() const>(&IGESData_DefaultSpecific::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_DefaultSpecific::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_DefaultSpecific::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_FileProtocol ,opencascade::handle<IGESData_FileProtocol>  , IGESData_Protocol >>(m.attr("IGESData_FileProtocol"))
        .def(py::init<  >()  )
    // methods
        .def("Add",
             (void (IGESData_FileProtocol::*)( const opencascade::handle<IGESData_Protocol> &  ) ) static_cast<void (IGESData_FileProtocol::*)( const opencascade::handle<IGESData_Protocol> &  ) >(&IGESData_FileProtocol::Add),
             R"#(Adds a resource)#"  , py::arg("protocol"))
        .def("NbResources",
             (Standard_Integer (IGESData_FileProtocol::*)() const) static_cast<Standard_Integer (IGESData_FileProtocol::*)() const>(&IGESData_FileProtocol::NbResources),
             R"#(Gives the count of Resources : the count of Added Protocols)#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESData_FileProtocol::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESData_FileProtocol::*)( const Standard_Integer  ) const>(&IGESData_FileProtocol::Resource),
             R"#(Returns a Resource, given a rank (rank of call to Add))#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_FileProtocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_FileProtocol::*)() const>(&IGESData_FileProtocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_FileProtocol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_FileProtocol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<IGESData_LabelDisplayEntity ,opencascade::handle<IGESData_LabelDisplayEntity>>(m,"IGESData_LabelDisplayEntity");

    static_cast<py::class_<IGESData_LabelDisplayEntity ,opencascade::handle<IGESData_LabelDisplayEntity>  , IGESData_IGESEntity >>(m.attr("IGESData_LabelDisplayEntity"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_LabelDisplayEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_LabelDisplayEntity::*)() const>(&IGESData_LabelDisplayEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_LabelDisplayEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_LabelDisplayEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_LevelListEntity ,opencascade::handle<IGESData_LevelListEntity> ,Py_IGESData_LevelListEntity , IGESData_IGESEntity >>(m.attr("IGESData_LevelListEntity"))
    // methods
        .def("NbLevelNumbers",
             (Standard_Integer (IGESData_LevelListEntity::*)() const) static_cast<Standard_Integer (IGESData_LevelListEntity::*)() const>(&IGESData_LevelListEntity::NbLevelNumbers),
             R"#(Must return the count of levels)#" )
        .def("LevelNumber",
             (Standard_Integer (IGESData_LevelListEntity::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESData_LevelListEntity::*)( const Standard_Integer  ) const>(&IGESData_LevelListEntity::LevelNumber),
             R"#(returns the Level Number of <me>, indicated by <num> raises an exception if num is out of range)#"  , py::arg("num"))
        .def("HasLevelNumber",
             (Standard_Boolean (IGESData_LevelListEntity::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESData_LevelListEntity::*)( const Standard_Integer  ) const>(&IGESData_LevelListEntity::HasLevelNumber),
             R"#(returns True if <level> is in the list)#"  , py::arg("level"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_LevelListEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_LevelListEntity::*)() const>(&IGESData_LevelListEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_LevelListEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_LevelListEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<IGESData_LineFontEntity ,opencascade::handle<IGESData_LineFontEntity>>(m,"IGESData_LineFontEntity");

    static_cast<py::class_<IGESData_LineFontEntity ,opencascade::handle<IGESData_LineFontEntity>  , IGESData_IGESEntity >>(m.attr("IGESData_LineFontEntity"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_LineFontEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_LineFontEntity::*)() const>(&IGESData_LineFontEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_LineFontEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_LineFontEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_NameEntity ,opencascade::handle<IGESData_NameEntity> ,Py_IGESData_NameEntity , IGESData_IGESEntity >>(m.attr("IGESData_NameEntity"))
    // methods
        .def("Value",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_NameEntity::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_NameEntity::*)() const>(&IGESData_NameEntity::Value),
             R"#(Retyrns the alphanumeric value of the Name, to be defined)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_NameEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_NameEntity::*)() const>(&IGESData_NameEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_NameEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_NameEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_SingleParentEntity ,opencascade::handle<IGESData_SingleParentEntity> ,Py_IGESData_SingleParentEntity , IGESData_IGESEntity >>(m.attr("IGESData_SingleParentEntity"))
    // methods
        .def("SingleParent",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_SingleParentEntity::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_SingleParentEntity::*)() const>(&IGESData_SingleParentEntity::SingleParent),
             R"#(Returns the parent designated by the Entity, if only one !)#" )
        .def("NbChildren",
             (Standard_Integer (IGESData_SingleParentEntity::*)() const) static_cast<Standard_Integer (IGESData_SingleParentEntity::*)() const>(&IGESData_SingleParentEntity::NbChildren),
             R"#(Returns the count of Entities designated as children)#" )
        .def("Child",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_SingleParentEntity::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_SingleParentEntity::*)( const Standard_Integer  ) const>(&IGESData_SingleParentEntity::Child),
             R"#(Returns a Child given its rank)#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_SingleParentEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_SingleParentEntity::*)() const>(&IGESData_SingleParentEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_SingleParentEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_SingleParentEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_TransfEntity ,opencascade::handle<IGESData_TransfEntity> ,Py_IGESData_TransfEntity , IGESData_IGESEntity >>(m.attr("IGESData_TransfEntity"))
    // methods
        .def("Value",
             (gp_GTrsf (IGESData_TransfEntity::*)() const) static_cast<gp_GTrsf (IGESData_TransfEntity::*)() const>(&IGESData_TransfEntity::Value),
             R"#(gives value of the transformation, as a GTrsf To be defined by an effective class of Transformation Entity Warning : Must take in account Composition : if a TransfEntity has in its Directory Part, a Transf, this means that it is Compound, Value must return the global result)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_TransfEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_TransfEntity::*)() const>(&IGESData_TransfEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_TransfEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_TransfEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_UndefinedEntity ,opencascade::handle<IGESData_UndefinedEntity>  , IGESData_IGESEntity >>(m.attr("IGESData_UndefinedEntity"))
        .def(py::init<  >()  )
    // methods
        .def("UndefinedContent",
             (opencascade::handle<Interface_UndefinedContent> (IGESData_UndefinedEntity::*)() const) static_cast<opencascade::handle<Interface_UndefinedContent> (IGESData_UndefinedEntity::*)() const>(&IGESData_UndefinedEntity::UndefinedContent),
             R"#(Returns own data as an UndefinedContent)#" )
        .def("ChangeableContent",
             (opencascade::handle<Interface_UndefinedContent> (IGESData_UndefinedEntity::*)() ) static_cast<opencascade::handle<Interface_UndefinedContent> (IGESData_UndefinedEntity::*)() >(&IGESData_UndefinedEntity::ChangeableContent),
             R"#(Returns own data as an UndefinedContent, in order to touch it)#" )
        .def("SetNewContent",
             (void (IGESData_UndefinedEntity::*)( const opencascade::handle<Interface_UndefinedContent> &  ) ) static_cast<void (IGESData_UndefinedEntity::*)( const opencascade::handle<Interface_UndefinedContent> &  ) >(&IGESData_UndefinedEntity::SetNewContent),
             R"#(Redefines a completely new UndefinedContent Used by a Copy which begins by ShallowCopy, for instance)#"  , py::arg("cont"))
        .def("IsOKDirPart",
             (Standard_Boolean (IGESData_UndefinedEntity::*)() const) static_cast<Standard_Boolean (IGESData_UndefinedEntity::*)() const>(&IGESData_UndefinedEntity::IsOKDirPart),
             R"#(says if DirPart is OK or not (if not, it is erroneous) Note that if it is not, Def* methods can return Error status)#" )
        .def("DirStatus",
             (Standard_Integer (IGESData_UndefinedEntity::*)() const) static_cast<Standard_Integer (IGESData_UndefinedEntity::*)() const>(&IGESData_UndefinedEntity::DirStatus),
             R"#(returns Directory Error Status (used for Copy))#" )
        .def("SetOKDirPart",
             (void (IGESData_UndefinedEntity::*)() ) static_cast<void (IGESData_UndefinedEntity::*)() >(&IGESData_UndefinedEntity::SetOKDirPart),
             R"#(Erases the Directory Error Status Warning : Be sure that data are consistent to call this method ...)#" )
        .def("DefLineFont",
             (IGESData_DefType (IGESData_UndefinedEntity::*)() const) static_cast<IGESData_DefType (IGESData_UndefinedEntity::*)() const>(&IGESData_UndefinedEntity::DefLineFont),
             R"#(returns Error status if necessary, else calls original method)#" )
        .def("DefLevel",
             (IGESData_DefList (IGESData_UndefinedEntity::*)() const) static_cast<IGESData_DefList (IGESData_UndefinedEntity::*)() const>(&IGESData_UndefinedEntity::DefLevel),
             R"#(returns Error status if necessary, else calls original method)#" )
        .def("DefView",
             (IGESData_DefList (IGESData_UndefinedEntity::*)() const) static_cast<IGESData_DefList (IGESData_UndefinedEntity::*)() const>(&IGESData_UndefinedEntity::DefView),
             R"#(returns Error status if necessary, else calls original method)#" )
        .def("DefColor",
             (IGESData_DefType (IGESData_UndefinedEntity::*)() const) static_cast<IGESData_DefType (IGESData_UndefinedEntity::*)() const>(&IGESData_UndefinedEntity::DefColor),
             R"#(returns Error status if necessary, else calls original method)#" )
        .def("HasSubScriptNumber",
             (Standard_Boolean (IGESData_UndefinedEntity::*)() const) static_cast<Standard_Boolean (IGESData_UndefinedEntity::*)() const>(&IGESData_UndefinedEntity::HasSubScriptNumber),
             R"#(returns Error status if necessary, else calls original method (that is, if SubScript field is not blank or positive integer))#" )
        .def("ReadDir",
             (Standard_Boolean (IGESData_UndefinedEntity::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_DirPart & ,  opencascade::handle<Interface_Check> &  ) ) static_cast<Standard_Boolean (IGESData_UndefinedEntity::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_DirPart & ,  opencascade::handle<Interface_Check> &  ) >(&IGESData_UndefinedEntity::ReadDir),
             R"#(Computes the Directory Error Status, to be called before standard ReadDir from IGESReaderTool Returns True if OK (hence, Directory can be loaded), Else returns False and the DirPart <DP> is modified (hence, Directory Error Status is non null; and standard Read will work with an acceptable DirectoryPart))#"  , py::arg("IR"),  py::arg("DP"),  py::arg("ach"))
        .def("ReadOwnParams",
             (void (IGESData_UndefinedEntity::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) ) static_cast<void (IGESData_UndefinedEntity::*)( const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) >(&IGESData_UndefinedEntity::ReadOwnParams),
             R"#(reads own parameters from file; PR gives access to them, IR detains parameter types and values Here, reads all parameters, integers are considered as entity reference unless they cannot be; no list interpretation No property or associativity list is managed)#"  , py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESData_UndefinedEntity::*)( IGESData_IGESWriter &  ) const) static_cast<void (IGESData_UndefinedEntity::*)( IGESData_IGESWriter &  ) const>(&IGESData_UndefinedEntity::WriteOwnParams),
             R"#(writes parameters to IGESWriter, taken from UndefinedContent)#"  , py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_UndefinedEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_UndefinedEntity::*)() const>(&IGESData_UndefinedEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_UndefinedEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_UndefinedEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_ViewKindEntity ,opencascade::handle<IGESData_ViewKindEntity> ,Py_IGESData_ViewKindEntity , IGESData_IGESEntity >>(m.attr("IGESData_ViewKindEntity"))
    // methods
        .def("IsSingle",
             (Standard_Boolean (IGESData_ViewKindEntity::*)() const) static_cast<Standard_Boolean (IGESData_ViewKindEntity::*)() const>(&IGESData_ViewKindEntity::IsSingle),
             R"#(says if "me" is a Single View (True) or a List of Views (False))#" )
        .def("NbViews",
             (Standard_Integer (IGESData_ViewKindEntity::*)() const) static_cast<Standard_Integer (IGESData_ViewKindEntity::*)() const>(&IGESData_ViewKindEntity::NbViews),
             R"#(Returns the count of Views for a List of Views. For a Single View, may return simply 1)#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESData_ViewKindEntity::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESData_ViewKindEntity::*)( const Standard_Integer  ) const>(&IGESData_ViewKindEntity::ViewItem),
             R"#(Returns the View n0. <num> for a List of Views. For a Single Views, may return <me> itself)#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_ViewKindEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_ViewKindEntity::*)() const>(&IGESData_ViewKindEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_ViewKindEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_ViewKindEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESData_FreeFormatEntity ,opencascade::handle<IGESData_FreeFormatEntity>  , IGESData_UndefinedEntity >>(m.attr("IGESData_FreeFormatEntity"))
        .def(py::init<  >()  )
    // methods
        .def("SetTypeNumber",
             (void (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) ) static_cast<void (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) >(&IGESData_FreeFormatEntity::SetTypeNumber),
             R"#(Sets Type Number to a new Value, and Form Number to Zero)#"  , py::arg("typenum"))
        .def("SetFormNumber",
             (void (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) ) static_cast<void (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) >(&IGESData_FreeFormatEntity::SetFormNumber),
             R"#(Sets Form Number to a new Value (to called after SetTypeNumber))#"  , py::arg("formnum"))
        .def("NbParams",
             (Standard_Integer (IGESData_FreeFormatEntity::*)() const) static_cast<Standard_Integer (IGESData_FreeFormatEntity::*)() const>(&IGESData_FreeFormatEntity::NbParams),
             R"#(Gives count of recorded parameters)#" )
        .def("ParamData",
             (Standard_Boolean (IGESData_FreeFormatEntity::*)( const Standard_Integer ,  Interface_ParamType & ,  opencascade::handle<IGESData_IGESEntity> & ,  opencascade::handle<TCollection_HAsciiString> &  ) const) static_cast<Standard_Boolean (IGESData_FreeFormatEntity::*)( const Standard_Integer ,  Interface_ParamType & ,  opencascade::handle<IGESData_IGESEntity> & ,  opencascade::handle<TCollection_HAsciiString> &  ) const>(&IGESData_FreeFormatEntity::ParamData),
             R"#(Returns data of a Parameter : its type, and the entity if it designates en entity ("ent") or its literal value else ("str") Returned value (Boolean) : True if it is an Entity, False else)#"  , py::arg("num"),  py::arg("ptype"),  py::arg("ent"),  py::arg("val"))
        .def("ParamType",
             (Interface_ParamType (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) const) static_cast<Interface_ParamType (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) const>(&IGESData_FreeFormatEntity::ParamType),
             R"#(Returns the ParamType of a Param, given its rank Error if num is not between 1 and NbParams)#"  , py::arg("num"))
        .def("IsParamEntity",
             (Standard_Boolean (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) const>(&IGESData_FreeFormatEntity::IsParamEntity),
             R"#(Returns True if a Parameter is recorded as an entity Error if num is not between 1 and NbParams)#"  , py::arg("num"))
        .def("ParamEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) const>(&IGESData_FreeFormatEntity::ParamEntity),
             R"#(Returns Entity corresponding to a Param, given its rank Error if out of range or if Param num does not designate an Entity)#"  , py::arg("num"))
        .def("IsNegativePointer",
             (Standard_Boolean (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) const>(&IGESData_FreeFormatEntity::IsNegativePointer),
             R"#(Returns True if <num> is noted as for a "Negative Pointer" (see AddEntity for details). Senseful only if IsParamEntity answers True for <num>, else returns False.)#"  , py::arg("num"))
        .def("ParamValue",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_FreeFormatEntity::*)( const Standard_Integer  ) const>(&IGESData_FreeFormatEntity::ParamValue),
             R"#(Returns litteral value of a Parameter, given its rank Error if num is out of range, or if Parameter is not literal)#"  , py::arg("num"))
        .def("NegativePointers",
             (opencascade::handle<TColStd_HSequenceOfInteger> (IGESData_FreeFormatEntity::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfInteger> (IGESData_FreeFormatEntity::*)() const>(&IGESData_FreeFormatEntity::NegativePointers),
             R"#(Returns the complete list of Ramks of Parameters which have been noted as Negative Pointers Warning : It is returned as a Null Handle if none was noted)#" )
        .def("AddLiteral",
             (void (IGESData_FreeFormatEntity::*)( const Interface_ParamType ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESData_FreeFormatEntity::*)( const Interface_ParamType ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESData_FreeFormatEntity::AddLiteral),
             R"#(Adds a literal Parameter to the list (as such))#"  , py::arg("ptype"),  py::arg("val"))
        .def("AddLiteral",
             (void (IGESData_FreeFormatEntity::*)( const Interface_ParamType ,  const Standard_CString  ) ) static_cast<void (IGESData_FreeFormatEntity::*)( const Interface_ParamType ,  const Standard_CString  ) >(&IGESData_FreeFormatEntity::AddLiteral),
             R"#(Adds a literal Parameter to the list (builds an HAsciiString))#"  , py::arg("ptype"),  py::arg("val"))
        .def("AddEntity",
             (void (IGESData_FreeFormatEntity::*)( const Interface_ParamType ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean  ) ) static_cast<void (IGESData_FreeFormatEntity::*)( const Interface_ParamType ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean  ) >(&IGESData_FreeFormatEntity::AddEntity),
             R"#(Adds a Parameter which references an Entity. If the Entity is Null, the added parameter will define a "Null Pointer" (0) If <negative> is given True, this will command Sending to File (see IGESWriter) to produce a "Negative Pointer" (Default is False))#"  , py::arg("ptype"),  py::arg("ent"),  py::arg("negative")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AddEntities",
             (void (IGESData_FreeFormatEntity::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESData_FreeFormatEntity::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESData_FreeFormatEntity::AddEntities),
             R"#(Adds a set of Entities, given as a HArray1OfIGESEntity Causes creation of : an Integer Parameter which gives count of Entities, then the list of Entities of the Array Error if an Entity is not an IGESEntity All these Entities will be interpreted as "Positive Pointers" by IGESWriter)#"  , py::arg("ents"))
        .def("AddNegativePointers",
             (void (IGESData_FreeFormatEntity::*)( const opencascade::handle<TColStd_HSequenceOfInteger> &  ) ) static_cast<void (IGESData_FreeFormatEntity::*)( const opencascade::handle<TColStd_HSequenceOfInteger> &  ) >(&IGESData_FreeFormatEntity::AddNegativePointers),
             R"#(Adds a list of Ranks of Parameters to be noted as Negative Pointers (this will be taken into account for Parameters which are Entities))#"  , py::arg("list"))
        .def("ClearNegativePointers",
             (void (IGESData_FreeFormatEntity::*)() ) static_cast<void (IGESData_FreeFormatEntity::*)() >(&IGESData_FreeFormatEntity::ClearNegativePointers),
             R"#(Clears all informations about Negative Pointers, hence every Entity kind Parameter will be send normally, as Positive)#" )
        .def("WriteOwnParams",
             (void (IGESData_FreeFormatEntity::*)( IGESData_IGESWriter &  ) const) static_cast<void (IGESData_FreeFormatEntity::*)( IGESData_IGESWriter &  ) const>(&IGESData_FreeFormatEntity::WriteOwnParams),
             R"#(WriteOwnParams is redefined for FreeFormatEntity to take into account the supplementary information "Negative Pointer")#"  , py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_FreeFormatEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_FreeFormatEntity::*)() const>(&IGESData_FreeFormatEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_FreeFormatEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESData_FreeFormatEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/IGESData_NodeOfWriterLib.hxx
// ./opencascade/IGESData_Protocol.hxx
// ./opencascade/IGESData_DefSwitch.hxx
// ./opencascade/IGESData_FileRecognizer.hxx
// ./opencascade/IGESData_IGESEntity.hxx
// ./opencascade/IGESData_FreeFormatEntity.hxx
// ./opencascade/IGESData_LevelListEntity.hxx
// ./opencascade/IGESData_DefList.hxx
// ./opencascade/IGESData_GlobalSection.hxx
// ./opencascade/IGESData_ParamCursor.hxx
// ./opencascade/IGESData_ParamReader.hxx
// ./opencascade/IGESData_Array1OfDirPart.hxx
// ./opencascade/IGESData_Status.hxx
// ./opencascade/IGESData_Array1OfIGESEntity.hxx
// ./opencascade/IGESData_SingleParentEntity.hxx
// ./opencascade/IGESData_DefaultGeneral.hxx
// ./opencascade/IGESData_BasicEditor.hxx
// ./opencascade/IGESData_GlobalNodeOfWriterLib.hxx
// ./opencascade/IGESData_IGESWriter.hxx
// ./opencascade/IGESData_DirChecker.hxx
// ./opencascade/IGESData_SpecificLib.hxx
// ./opencascade/IGESData_WriterLib.hxx
// ./opencascade/IGESData_IGESType.hxx
// ./opencascade/IGESData_IGESReaderData.hxx
// ./opencascade/IGESData_ReadWriteModule.hxx
// ./opencascade/IGESData_ViewKindEntity.hxx
// ./opencascade/IGESData_TransfEntity.hxx
// ./opencascade/IGESData_ColorEntity.hxx
// ./opencascade/IGESData_DirPart.hxx
// ./opencascade/IGESData_GeneralModule.hxx
// ./opencascade/IGESData_FileProtocol.hxx
// ./opencascade/IGESData_IGESModel.hxx
// ./opencascade/IGESData_HArray1OfIGESEntity.hxx
// ./opencascade/IGESData_ToolLocation.hxx
// ./opencascade/IGESData_SpecificModule.hxx
// ./opencascade/IGESData_UndefinedEntity.hxx
// ./opencascade/IGESData_ReadStage.hxx
// ./opencascade/IGESData_DefaultSpecific.hxx
// ./opencascade/IGESData_LabelDisplayEntity.hxx
// ./opencascade/IGESData_IGESDumper.hxx
// ./opencascade/IGESData_IGESReaderTool.hxx
// ./opencascade/IGESData.hxx
// ./opencascade/IGESData_NameEntity.hxx
// ./opencascade/IGESData_DefType.hxx
// ./opencascade/IGESData_LineFontEntity.hxx
// ./opencascade/IGESData_GlobalNodeOfSpecificLib.hxx
// ./opencascade/IGESData_Dump.hxx
// ./opencascade/IGESData_NodeOfSpecificLib.hxx

// operators

// register typdefs
    register_template_NCollection_Array1<IGESData_DirPart>(m,"IGESData_Array1OfDirPart");  
    register_template_NCollection_Array1<opencascade::handle<IGESData_IGESEntity> >(m,"IGESData_Array1OfIGESEntity");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

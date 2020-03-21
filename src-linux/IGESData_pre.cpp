
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_OutOfRange.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_ParamSet.hxx>
#include <Interface_Check.hxx>
#include <gp_XYZ.hxx>
#include <Interface_UndefinedContent.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_DirPart.hxx>
#include <Interface_Check.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESEntity.hxx>
#include <gp_GTrsf.hxx>
#include <gp_Trsf.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_InterfaceError.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESData_IGESWriter.hxx>
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
#include <IGESData_NodeOfSpecificLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_SpecificModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_GlobalNodeOfSpecificLib.hxx>
#include <IGESData_ReadWriteModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_WriterLib.hxx>
#include <IGESData_NodeOfWriterLib.hxx>
#include <Interface_ParamList.hxx>
#include <Interface_Check.hxx>
#include <Interface_InterfaceError.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamCursor.hxx>
#include <Message_Msg.hxx>
#include <gp_XY.hxx>
#include <gp_XYZ.hxx>
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
#include <Standard_DomainError.hxx>
#include <Interface_FileReaderData.hxx>
#include <Interface_Check.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IGESData_GlobalNodeOfWriterLib.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_ReadWriteModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_WriterLib.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_GlobalSection.hxx>
#include <IGESData_IGESEntity.hxx>
#include <gp_XY.hxx>
#include <gp_XYZ.hxx>
#include <Standard_OutOfRange.hxx>
#include <IGESData_SpecificModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_SpecificLib.hxx>
#include <IGESData_NodeOfSpecificLib.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Interface_Check.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_OutOfRange.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESType.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_NoSuchObject.hxx>
#include <IGESData_IGESType.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Message_Messenger.hxx>
#include <gp_GTrsf.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESData_GlobalNodeOfSpecificLib.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_SpecificModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_SpecificLib.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Message_Messenger.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_Check.hxx>
#include <IGESData_NodeOfWriterLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_ReadWriteModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_GlobalNodeOfWriterLib.hxx>
#include <Interface_ParamSet.hxx>
#include <Interface_Check.hxx>

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
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESData_Array1OfIGESEntity.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESData_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IGESData", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<IGESData_ReadStage>(m, "IGESData_ReadStage",R"#(gives successive stages of reading an entity (see ParamReader))#")
        .value("IGESData_ReadDir",IGESData_ReadStage::IGESData_ReadDir)
        .value("IGESData_ReadOwn",IGESData_ReadStage::IGESData_ReadOwn)
        .value("IGESData_ReadAssocs",IGESData_ReadStage::IGESData_ReadAssocs)
        .value("IGESData_ReadProps",IGESData_ReadStage::IGESData_ReadProps)
        .value("IGESData_ReadEnd",IGESData_ReadStage::IGESData_ReadEnd).export_values();
    py::enum_<IGESData_Status>(m, "IGESData_Status",R"#(None)#")
        .value("IGESData_EntityOK",IGESData_Status::IGESData_EntityOK)
        .value("IGESData_EntityError",IGESData_Status::IGESData_EntityError)
        .value("IGESData_ReferenceError",IGESData_Status::IGESData_ReferenceError)
        .value("IGESData_TypeError",IGESData_Status::IGESData_TypeError).export_values();
    py::enum_<IGESData_DefType>(m, "IGESData_DefType",R"#(Some fields of an IGES entity may be - Undefined - Defined as a positive integer - Defined as a reference to a specialized entity. A typical example of this kind of variation is color. This enumeration allows you to identify which of the above is the case. The semantics of the terms are as follows: - DefVoid indicates that the item contained in the field is undefined - DefValue indicates that the item is defined as an immediate positive integer value (i.e. not a pointer) - DefReference indicates that the item is defined as an entity - DefAny indicates the item could not be determined - ErrorVal indicates that the item is defined as an integer but its value is incorrect (it could be out of range, for example) - ErrorRef indicates that the item is defined as an entity but is not of the required type.)#")
        .value("IGESData_DefVoid",IGESData_DefType::IGESData_DefVoid)
        .value("IGESData_DefValue",IGESData_DefType::IGESData_DefValue)
        .value("IGESData_DefReference",IGESData_DefType::IGESData_DefReference)
        .value("IGESData_DefAny",IGESData_DefType::IGESData_DefAny)
        .value("IGESData_ErrorVal",IGESData_DefType::IGESData_ErrorVal)
        .value("IGESData_ErrorRef",IGESData_DefType::IGESData_ErrorRef).export_values();
    py::enum_<IGESData_DefList>(m, "IGESData_DefList",R"#(Some fields of an IGES entity may be - Undefined - Defined as a single item - Defined as a list of items. A typical example, which presents this kind of variation, is a level number. This enumeration allows you to identify which of the above is the case. The semantics of the terms is as follows: - DefNone indicates that the list is empty (there is not even a single item). - DefOne indicates that the list contains a single item. - DefSeveral indicates that the list contains several items. - ErrorOne indicates that the list contains one item, but that this item is incorrect - ErrorSeveral indicates that the list contains several items, but that at least one of them is incorrect.)#")
        .value("IGESData_DefNone",IGESData_DefList::IGESData_DefNone)
        .value("IGESData_DefOne",IGESData_DefList::IGESData_DefOne)
        .value("IGESData_DefSeveral",IGESData_DefList::IGESData_DefSeveral)
        .value("IGESData_ErrorOne",IGESData_DefList::IGESData_ErrorOne)
        .value("IGESData_ErrorSeveral",IGESData_DefList::IGESData_ErrorSeveral).export_values();

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

// pre-register typdefs
    preregister_template_NCollection_Array1<IGESData_DirPart>(m,"IGESData_Array1OfDirPart");
    preregister_template_NCollection_Array1<opencascade::handle<IGESData_IGESEntity> >(m,"IGESData_Array1OfIGESEntity");

// classes forward declarations only
    py::class_<IGESData , shared_ptr<IGESData> >(m,"IGESData",R"#(basic description of an IGES Interface)#");
    py::class_<IGESData_BasicEditor , shared_ptr<IGESData_BasicEditor> >(m,"IGESData_BasicEditor",R"#(This class provides various functions of basic edition, such as : - setting header unit (WARNING : DOES NOT convert entities) - computation of the status (Subordinate, UseFlag) of entities of IGES Entities on a whole model - auto correction of IGES Entities, defined both by DirChecker and by specific service AutoCorrect (this auto correction performs non-ambigious, rather logic, editions))#");
    py::class_<IGESData_DefSwitch , shared_ptr<IGESData_DefSwitch> >(m,"IGESData_DefSwitch",R"#(description of a directory componant which can be either undefined (let Void), defined as a Reference to an entity, or as a Rank, integer value adressing a builtin table The entity reference is not included here, only reference status is kept (because entity type must be adapted))#");
    py::class_<IGESData_DirChecker , shared_ptr<IGESData_DirChecker> >(m,"IGESData_DirChecker",R"#(This class centralizes general Checks upon an IGES Entity's Directory Part. That is : such field Ignored or Required, or Required with a given Value (for an Integer field) More precise checks can be performed as necessary, by each Entity (method OwnCheck).)#");
    py::class_<IGESData_DirPart , shared_ptr<IGESData_DirPart> >(m,"IGESData_DirPart",R"#(litteral/numeric description of an entity's directory section, taken from file)#");
    py::class_<IGESData_FileRecognizer ,opencascade::handle<IGESData_FileRecognizer>,Py_IGESData_FileRecognizer , Standard_Transient>(m,"IGESData_FileRecognizer",R"#()#");
    py::class_<IGESData_GeneralModule ,opencascade::handle<IGESData_GeneralModule>,Py_IGESData_GeneralModule , Interface_GeneralModule>(m,"IGESData_GeneralModule",R"#(Definition of General Services adapted to IGES. This Services comprise : Shared & Implied Lists, Copy, Check They are adapted according to the organisation of IGES Entities : Directory Part, Lists of Associativities and Properties are specifically processedDefinition of General Services adapted to IGES. This Services comprise : Shared & Implied Lists, Copy, Check They are adapted according to the organisation of IGES Entities : Directory Part, Lists of Associativities and Properties are specifically processedDefinition of General Services adapted to IGES. This Services comprise : Shared & Implied Lists, Copy, Check They are adapted according to the organisation of IGES Entities : Directory Part, Lists of Associativities and Properties are specifically processed)#");
    py::class_<IGESData_GlobalNodeOfSpecificLib ,opencascade::handle<IGESData_GlobalNodeOfSpecificLib> , Standard_Transient>(m,"IGESData_GlobalNodeOfSpecificLib",R"#()#");
    py::class_<IGESData_GlobalNodeOfWriterLib ,opencascade::handle<IGESData_GlobalNodeOfWriterLib> , Standard_Transient>(m,"IGESData_GlobalNodeOfWriterLib",R"#()#");
    py::class_<IGESData_GlobalSection , shared_ptr<IGESData_GlobalSection> >(m,"IGESData_GlobalSection",R"#(Description of a global section (corresponds to file header) used as well in IGESModel, IGESReader and IGESWriter Warning : From IGES-5.1, a parameter is added : LastChangeDate (concerns transferred set of data, not the file itself) Of course, it can be absent if read from earlier versions (a default is then to be set to current date) From 5.3, one more : ApplicationProtocol (optional))#");
    py::class_<IGESData_HArray1OfIGESEntity ,opencascade::handle<IGESData_HArray1OfIGESEntity> , IGESData_Array1OfIGESEntity, Standard_Transient>(m,"IGESData_HArray1OfIGESEntity",R"#()#");
    py::class_<IGESData_IGESDumper , shared_ptr<IGESData_IGESDumper> >(m,"IGESData_IGESDumper",R"#(Provides a way to obtain a clear Dump of an IGESEntity (distinct from normalized output). It works with tools attached to Entities, as for normalized Reade and Write)#");
    py::class_<IGESData_IGESEntity ,opencascade::handle<IGESData_IGESEntity> , Standard_Transient>(m,"IGESData_IGESEntity",R"#(defines root of IGES Entity definition, including Directory Part, lists of (optionnal) Properties and Associativitiesdefines root of IGES Entity definition, including Directory Part, lists of (optionnal) Properties and Associativitiesdefines root of IGES Entity definition, including Directory Part, lists of (optionnal) Properties and Associativities)#");
    py::class_<IGESData_IGESModel ,opencascade::handle<IGESData_IGESModel> , Interface_InterfaceModel>(m,"IGESData_IGESModel",R"#(Defines the file header and entities for IGES files. These headers and entities result from a complete data translation using the IGES data exchange processor. Each entity is contained in a single model only and has a unique identifier. You can access this identifier using the method Number. Gives an access to the general data in the Start and the Global sections of an IGES file. The IGES file includes the following sections: -Start, -Global, -Directory Entry, -Parameter Data, -TerminateDefines the file header and entities for IGES files. These headers and entities result from a complete data translation using the IGES data exchange processor. Each entity is contained in a single model only and has a unique identifier. You can access this identifier using the method Number. Gives an access to the general data in the Start and the Global sections of an IGES file. The IGES file includes the following sections: -Start, -Global, -Directory Entry, -Parameter Data, -TerminateDefines the file header and entities for IGES files. These headers and entities result from a complete data translation using the IGES data exchange processor. Each entity is contained in a single model only and has a unique identifier. You can access this identifier using the method Number. Gives an access to the general data in the Start and the Global sections of an IGES file. The IGES file includes the following sections: -Start, -Global, -Directory Entry, -Parameter Data, -Terminate)#");
    py::class_<IGESData_IGESReaderData ,opencascade::handle<IGESData_IGESReaderData> , Interface_FileReaderData>(m,"IGESData_IGESReaderData",R"#(specific FileReaderData for IGES contains header as GlobalSection, and for each Entity, its directory part as DirPart, list of Parameters as ParamSet Each Item has a DirPart, plus classically a ParamSet and the correspondant recognized Entity (inherited from FileReaderData) Parameters are accessed through specific objects, ParamReadersspecific FileReaderData for IGES contains header as GlobalSection, and for each Entity, its directory part as DirPart, list of Parameters as ParamSet Each Item has a DirPart, plus classically a ParamSet and the correspondant recognized Entity (inherited from FileReaderData) Parameters are accessed through specific objects, ParamReadersspecific FileReaderData for IGES contains header as GlobalSection, and for each Entity, its directory part as DirPart, list of Parameters as ParamSet Each Item has a DirPart, plus classically a ParamSet and the correspondant recognized Entity (inherited from FileReaderData) Parameters are accessed through specific objects, ParamReaders)#");
    py::class_<IGESData_IGESReaderTool , shared_ptr<IGESData_IGESReaderTool> , Interface_FileReaderTool>(m,"IGESData_IGESReaderTool",R"#(specific FileReaderTool for IGES Parameters are accessed through specific objects, ParamReaders)#");
    py::class_<IGESData_IGESType , shared_ptr<IGESData_IGESType> >(m,"IGESData_IGESType",R"#(taken from directory part of an entity (from file or model), gives "type" and "form" data, used to recognize entity's type)#");
    py::class_<IGESData_IGESWriter , shared_ptr<IGESData_IGESWriter> >(m,"IGESData_IGESWriter",R"#(manages atomic file writing, under control of IGESModel : prepare text to be sent then sends it takes into account distinction between successive Sections)#");
    py::class_<IGESData_NodeOfSpecificLib ,opencascade::handle<IGESData_NodeOfSpecificLib> , Standard_Transient>(m,"IGESData_NodeOfSpecificLib",R"#()#");
    py::class_<IGESData_NodeOfWriterLib ,opencascade::handle<IGESData_NodeOfWriterLib> , Standard_Transient>(m,"IGESData_NodeOfWriterLib",R"#()#");
    py::class_<IGESData_ParamCursor , shared_ptr<IGESData_ParamCursor> >(m,"IGESData_ParamCursor",R"#(Auxiliary class for ParamReader. It stores commands for a ParamReader to manage the current parameter number. Used by methods Read... from ParamReader. It allows to define the following commands : - read a parameter specified by a precise Number (basic case) - read a parameter then set Current Number to follow its number - read the current parameter (with Current Number) then advance Current Number by one - idem with several : read "nb" parameters from one specified, included, with or without setting Current Number to follow last parameter read - read several parameter from the current one, then advance Current Number to follow the last one read - Read several parameters (as above) but in interlaced lists, i.e. from complex items (each one including successively for instance, an Integer, a Real, an Entity ...))#");
    py::class_<IGESData_ParamReader , shared_ptr<IGESData_ParamReader> >(m,"IGESData_ParamReader",R"#(access to a list of parameters, with management of read stage (owned parameters, properties, associativities) and current parameter number, read errors (which feed a Check), plus convenient facilities to read parameters, in particular : - first parameter is ignored (it repeats entity type), hence number 1 gives 2nd parameter, etc... - lists are not explicit, list-reading methods are provided which manage a current param. number - interpretation is made as possible (texts, reals, entities ...) (in particular, Reading a Real accepts an Integer))#");
    py::class_<IGESData_Protocol ,opencascade::handle<IGESData_Protocol> , Interface_Protocol>(m,"IGESData_Protocol",R"#(Description of basic Protocol for IGES This comprises treatement of IGESModel and Recognition of Undefined-FreeFormat-EntityDescription of basic Protocol for IGES This comprises treatement of IGESModel and Recognition of Undefined-FreeFormat-EntityDescription of basic Protocol for IGES This comprises treatement of IGESModel and Recognition of Undefined-FreeFormat-Entity)#");
    py::class_<IGESData_ReadWriteModule ,opencascade::handle<IGESData_ReadWriteModule>,Py_IGESData_ReadWriteModule , Interface_ReaderModule>(m,"IGESData_ReadWriteModule",R"#(Defines basic File Access Module, under the control of IGESReaderTool for Reading and IGESWriter for Writing : Specific actions concern : Read and Write Own Parameters of an IGESEntity. The common parts (Directory Entry, Lists of Associativities and Properties) are processed by IGESReaderTool & IGESWriterDefines basic File Access Module, under the control of IGESReaderTool for Reading and IGESWriter for Writing : Specific actions concern : Read and Write Own Parameters of an IGESEntity. The common parts (Directory Entry, Lists of Associativities and Properties) are processed by IGESReaderTool & IGESWriterDefines basic File Access Module, under the control of IGESReaderTool for Reading and IGESWriter for Writing : Specific actions concern : Read and Write Own Parameters of an IGESEntity. The common parts (Directory Entry, Lists of Associativities and Properties) are processed by IGESReaderTool & IGESWriter)#");
    py::class_<IGESData_SpecificLib , shared_ptr<IGESData_SpecificLib> >(m,"IGESData_SpecificLib",R"#(None)#");
    py::class_<IGESData_SpecificModule ,opencascade::handle<IGESData_SpecificModule>,Py_IGESData_SpecificModule , Standard_Transient>(m,"IGESData_SpecificModule",R"#(This class defines some Services which are specifically attached to IGES Entities : DumpThis class defines some Services which are specifically attached to IGES Entities : DumpThis class defines some Services which are specifically attached to IGES Entities : Dump)#");
    py::class_<IGESData_ToolLocation ,opencascade::handle<IGESData_ToolLocation> , Standard_Transient>(m,"IGESData_ToolLocation",R"#(This Tool determines and gives access to effective Locations of IGES Entities as defined by the IGES Norm. These Locations can be for each Entity : - on one part, explicitly defined by a Transf in Directory Part (this Transf can be itself compound); if not defined, no proper Transformation is defined - on the other part, implicitly defined by a reference from another Entity : its Parent Both implicit and explicit locations are combinable.This Tool determines and gives access to effective Locations of IGES Entities as defined by the IGES Norm. These Locations can be for each Entity : - on one part, explicitly defined by a Transf in Directory Part (this Transf can be itself compound); if not defined, no proper Transformation is defined - on the other part, implicitly defined by a reference from another Entity : its Parent Both implicit and explicit locations are combinable.This Tool determines and gives access to effective Locations of IGES Entities as defined by the IGES Norm. These Locations can be for each Entity : - on one part, explicitly defined by a Transf in Directory Part (this Transf can be itself compound); if not defined, no proper Transformation is defined - on the other part, implicitly defined by a reference from another Entity : its Parent Both implicit and explicit locations are combinable.)#");
    py::class_<IGESData_WriterLib , shared_ptr<IGESData_WriterLib> >(m,"IGESData_WriterLib",R"#(None)#");
    py::class_<IGESData_ColorEntity ,opencascade::handle<IGESData_ColorEntity> , IGESData_IGESEntity>(m,"IGESData_ColorEntity",R"#(defines required type for Color in directory part an effective Color entity must inherits itdefines required type for Color in directory part an effective Color entity must inherits itdefines required type for Color in directory part an effective Color entity must inherits it)#");
    py::class_<IGESData_DefaultGeneral ,opencascade::handle<IGESData_DefaultGeneral> , IGESData_GeneralModule>(m,"IGESData_DefaultGeneral",R"#(Processes the specific case of UndefinedEntity from IGESData (Case Number 1)Processes the specific case of UndefinedEntity from IGESData (Case Number 1)Processes the specific case of UndefinedEntity from IGESData (Case Number 1))#");
    py::class_<IGESData_DefaultSpecific ,opencascade::handle<IGESData_DefaultSpecific> , IGESData_SpecificModule>(m,"IGESData_DefaultSpecific",R"#(Specific IGES Services for UndefinedEntity, FreeFormatEntitySpecific IGES Services for UndefinedEntity, FreeFormatEntitySpecific IGES Services for UndefinedEntity, FreeFormatEntity)#");
    py::class_<IGESData_FileProtocol ,opencascade::handle<IGESData_FileProtocol> , IGESData_Protocol>(m,"IGESData_FileProtocol",R"#(This class allows to define complex protocols, in order to treat various sub-sets (or the complete set) of the IGES Norm, such as Solid + Draw (which are normally independant), etc... While it inherits Protocol from IGESData, it admits UndefinedEntity tooThis class allows to define complex protocols, in order to treat various sub-sets (or the complete set) of the IGES Norm, such as Solid + Draw (which are normally independant), etc... While it inherits Protocol from IGESData, it admits UndefinedEntity tooThis class allows to define complex protocols, in order to treat various sub-sets (or the complete set) of the IGES Norm, such as Solid + Draw (which are normally independant), etc... While it inherits Protocol from IGESData, it admits UndefinedEntity too)#");
    py::class_<IGESData_LabelDisplayEntity ,opencascade::handle<IGESData_LabelDisplayEntity> , IGESData_IGESEntity>(m,"IGESData_LabelDisplayEntity",R"#(defines required type for LabelDisplay in directory part an effective LabelDisplay entity must inherits itdefines required type for LabelDisplay in directory part an effective LabelDisplay entity must inherits itdefines required type for LabelDisplay in directory part an effective LabelDisplay entity must inherits it)#");
    py::class_<IGESData_LevelListEntity ,opencascade::handle<IGESData_LevelListEntity>,Py_IGESData_LevelListEntity , IGESData_IGESEntity>(m,"IGESData_LevelListEntity",R"#(defines required type for LevelList in directory part an effective LevelList entity must inherits itdefines required type for LevelList in directory part an effective LevelList entity must inherits itdefines required type for LevelList in directory part an effective LevelList entity must inherits it)#");
    py::class_<IGESData_LineFontEntity ,opencascade::handle<IGESData_LineFontEntity> , IGESData_IGESEntity>(m,"IGESData_LineFontEntity",R"#(defines required type for LineFont in directory part an effective LineFont entity must inherits itdefines required type for LineFont in directory part an effective LineFont entity must inherits itdefines required type for LineFont in directory part an effective LineFont entity must inherits it)#");
    py::class_<IGESData_NameEntity ,opencascade::handle<IGESData_NameEntity>,Py_IGESData_NameEntity , IGESData_IGESEntity>(m,"IGESData_NameEntity",R"#(a NameEntity is a kind of IGESEntity which can provide a Name under alphanumeric (String) form, from Properties list an effective Name entity must inherit ita NameEntity is a kind of IGESEntity which can provide a Name under alphanumeric (String) form, from Properties list an effective Name entity must inherit ita NameEntity is a kind of IGESEntity which can provide a Name under alphanumeric (String) form, from Properties list an effective Name entity must inherit it)#");
    py::class_<IGESData_SingleParentEntity ,opencascade::handle<IGESData_SingleParentEntity>,Py_IGESData_SingleParentEntity , IGESData_IGESEntity>(m,"IGESData_SingleParentEntity",R"#(a SingleParentEntity is a kind of IGESEntity which can refer to a (Single) Parent, from Associativities list of an Entity a effective SingleParent definition entity must inherit ita SingleParentEntity is a kind of IGESEntity which can refer to a (Single) Parent, from Associativities list of an Entity a effective SingleParent definition entity must inherit ita SingleParentEntity is a kind of IGESEntity which can refer to a (Single) Parent, from Associativities list of an Entity a effective SingleParent definition entity must inherit it)#");
    py::class_<IGESData_TransfEntity ,opencascade::handle<IGESData_TransfEntity>,Py_IGESData_TransfEntity , IGESData_IGESEntity>(m,"IGESData_TransfEntity",R"#(defines required type for Transf in directory part an effective Transf entity must inherits itdefines required type for Transf in directory part an effective Transf entity must inherits itdefines required type for Transf in directory part an effective Transf entity must inherits it)#");
    py::class_<IGESData_UndefinedEntity ,opencascade::handle<IGESData_UndefinedEntity> , IGESData_IGESEntity>(m,"IGESData_UndefinedEntity",R"#(undefined (unknown or error) entity specific of IGES DirPart can be correct or not : if it is not, a flag indicates it, and each corrupted field has an associated error flagundefined (unknown or error) entity specific of IGES DirPart can be correct or not : if it is not, a flag indicates it, and each corrupted field has an associated error flagundefined (unknown or error) entity specific of IGES DirPart can be correct or not : if it is not, a flag indicates it, and each corrupted field has an associated error flag)#");
    py::class_<IGESData_ViewKindEntity ,opencascade::handle<IGESData_ViewKindEntity>,Py_IGESData_ViewKindEntity , IGESData_IGESEntity>(m,"IGESData_ViewKindEntity",R"#(defines required type for ViewKind in directory part that is, Single view or Multiple view An effective ViewKind entity must inherit it and define IsSingle (True for Single, False for List of Views), NbViews and ViewItem (especially for a List)defines required type for ViewKind in directory part that is, Single view or Multiple view An effective ViewKind entity must inherit it and define IsSingle (True for Single, False for List of Views), NbViews and ViewItem (especially for a List)defines required type for ViewKind in directory part that is, Single view or Multiple view An effective ViewKind entity must inherit it and define IsSingle (True for Single, False for List of Views), NbViews and ViewItem (especially for a List))#");
    py::class_<IGESData_FreeFormatEntity ,opencascade::handle<IGESData_FreeFormatEntity> , IGESData_UndefinedEntity>(m,"IGESData_FreeFormatEntity",R"#(This class allows to create IGES Entities in a literal form : their definition is free, but they are not recognized as instances of specific classes.This class allows to create IGES Entities in a literal form : their definition is free, but they are not recognized as instances of specific classes.This class allows to create IGES Entities in a literal form : their definition is free, but they are not recognized as instances of specific classes.)#");

};

// user-defined post-inclusion per module

// user-defined post

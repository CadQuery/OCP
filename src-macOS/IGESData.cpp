
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESType.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_GlobalSection.hxx>
#include <IGESData_IGESEntity.hxx>
#include <gp_XY.hxx>
#include <gp_XYZ.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_ParamList.hxx>
#include <Interface_Check.hxx>
#include <Interface_InterfaceError.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamCursor.hxx>
#include <Message_Msg.hxx>
#include <gp_XY.hxx>
#include <gp_XYZ.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESData_SpecificModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_SpecificLib.hxx>
#include <IGESData_NodeOfSpecificLib.hxx>
#include <Interface_ParamSet.hxx>
#include <Interface_Check.hxx>
#include <gp_GTrsf.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESEntity.hxx>
#include <gp_GTrsf.hxx>
#include <gp_Trsf.hxx>
#include <Interface_ParamList.hxx>
#include <IGESData_FileRecognizer.hxx>
#include <Interface_Check.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_Protocol.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_DirPart.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_NoSuchObject.hxx>
#include <IGESData_IGESType.hxx>
#include <Standard_OutOfRange.hxx>
#include <Interface_InterfaceError.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_InterfaceError.hxx>
#include <Message_Messenger.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_Check.hxx>
#include <Interface_InterfaceError.hxx>
#include <IGESData_ReadWriteModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_WriterLib.hxx>
#include <IGESData_NodeOfWriterLib.hxx>
#include <Interface_UndefinedContent.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_DirPart.hxx>
#include <Interface_Check.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IGESData_GlobalNodeOfWriterLib.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_ReadWriteModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_WriterLib.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_ParamSet.hxx>
#include <Interface_Check.hxx>
#include <gp_XYZ.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_IGESEntity.hxx>
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
#include <Interface_Check.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_DomainError.hxx>
#include <Interface_FileReaderData.hxx>
#include <Interface_Check.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Standard_OutOfRange.hxx>
#include <IGESData_GlobalNodeOfSpecificLib.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_SpecificModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_SpecificLib.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Message_Messenger.hxx>
#include <IGESData_NodeOfWriterLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_ReadWriteModule.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_GlobalNodeOfWriterLib.hxx>
#include <Standard_OutOfRange.hxx>

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
// ./opencascade/IGESData_Array1OfIGESEntity.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESData_Array1OfDirPart.hxx
#include "NCollection_tmpl.hxx"


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

    // default constructor
    register_default_constructor<IGESData , shared_ptr<IGESData>>(m,"IGESData");

    static_cast<py::class_<IGESData , shared_ptr<IGESData> >>(m.attr("IGESData"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_BasicEditor , shared_ptr<IGESData_BasicEditor> >>(m.attr("IGESData_BasicEditor"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_DefSwitch , shared_ptr<IGESData_DefSwitch> >>(m.attr("IGESData_DefSwitch"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_DirChecker , shared_ptr<IGESData_DirChecker> >>(m.attr("IGESData_DirChecker"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_DirPart , shared_ptr<IGESData_DirPart> >>(m.attr("IGESData_DirPart"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_FileRecognizer ,opencascade::handle<IGESData_FileRecognizer>,Py_IGESData_FileRecognizer , Standard_Transient>>(m.attr("IGESData_FileRecognizer"))
    // constructors
    // custom constructors
    // methods
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
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_GeneralModule ,opencascade::handle<IGESData_GeneralModule>,Py_IGESData_GeneralModule , Interface_GeneralModule>>(m.attr("IGESData_GeneralModule"))
    // constructors
    // custom constructors
    // methods
        .def("FillSharedCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const>(&IGESData_GeneralModule::FillSharedCase),
             R"#(Fills the list of Entities shared by an IGESEntity <ent>, according a Case Number <CN> (formerly computed by CaseNum). Considers Properties and Directory Part, and calls OwnSharedCase (which is adapted to each Type of Entity))#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("OwnSharedCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const>(&IGESData_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("ListImpliedCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const>(&IGESData_GeneralModule::ListImpliedCase),
             R"#(Lists the Implied References of <ent>. Here, these are the Associativities, plus the Entities defined by OwnSharedCase)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("OwnImpliedCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const>(&IGESData_GeneralModule::OwnImpliedCase),
             R"#(Specific list of Entities implied by a given IGESEntity <ent> (in addition to Associativities). By default, there are none, but this method can be redefined as required)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("CheckCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESData_GeneralModule::CheckCase),
             R"#(Semantic Checking of an IGESEntity. Performs general Checks, which use DirChecker, then call OwnCheck which does a check specific for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<IGESData_DirChecker (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESData_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESData_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("CanCopy",
             (Standard_Boolean (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) const>(&IGESData_GeneralModule::CanCopy),
             R"#(Specific answer to the question "is Copy properly implemented" For IGES, answer is always True)#"  , py::arg("CN"),  py::arg("ent"))
        .def("NewVoid",
             (Standard_Boolean (IGESData_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IGESData_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const>(&IGESData_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("CopyCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const>(&IGESData_GeneralModule::CopyCase),
             R"#(Copy ("Deep") from <entfrom> to <entto> (same type) by using a CopyTool which provides its working Map. For IGESEntities, Copies general data (Directory Part, List of Properties) and call OwnCopyCase)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnCopyCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const>(&IGESData_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("RenewImpliedCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , const Interface_CopyTool & ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , const Interface_CopyTool & ) const>(&IGESData_GeneralModule::RenewImpliedCase),
             R"#(Renewing of Implied References. For IGESEntities, Copies general data(List of Associativities) and calls OwnRenewCase)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnRenewCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , const Interface_CopyTool & ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , const Interface_CopyTool & ) const>(&IGESData_GeneralModule::OwnRenewCase),
             R"#(Renews parameters which are specific of each Type of Entity : the provided default does nothing, but this method may be redefined as required)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("WhenDeleteCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) const>(&IGESData_GeneralModule::WhenDeleteCase),
             R"#(Prepares an IGES Entity for delete : works on directory part then calls OwnDeleteCase While dispatch requires to copy the entities, <dispatched> is ignored, entities are cleared in any case)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dispatched"))
        .def("OwnDeleteCase",
             (void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<void (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESData_GeneralModule::OwnDeleteCase),
             R"#(Specific preparation for delete, acts on own parameters Default does nothing, to be redefined as required)#"  , py::arg("CN"),  py::arg("ent"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const>(&IGESData_GeneralModule::Name),
             R"#(Returns the name of an IGES Entity (its NameValue) Can be redefined for an even more specific case ...)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_GeneralModule::*)() const>(&IGESData_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_GeneralModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_GlobalNodeOfSpecificLib ,opencascade::handle<IGESData_GlobalNodeOfSpecificLib> , Standard_Transient>>(m.attr("IGESData_GlobalNodeOfSpecificLib"))
    // constructors
    // custom constructors
    // methods
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
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_GlobalNodeOfWriterLib ,opencascade::handle<IGESData_GlobalNodeOfWriterLib> , Standard_Transient>>(m.attr("IGESData_GlobalNodeOfWriterLib"))
    // constructors
    // custom constructors
    // methods
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
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_GlobalSection , shared_ptr<IGESData_GlobalSection> >>(m.attr("IGESData_GlobalSection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_HArray1OfIGESEntity ,opencascade::handle<IGESData_HArray1OfIGESEntity> , IGESData_Array1OfIGESEntity, Standard_Transient>>(m.attr("IGESData_HArray1OfIGESEntity"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESData_IGESEntity> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESData_IGESEntity> > & >()  , py::arg("theOther") )
    // custom constructors
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
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_IGESDumper , shared_ptr<IGESData_IGESDumper> >>(m.attr("IGESData_IGESDumper"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_IGESEntity ,opencascade::handle<IGESData_IGESEntity> , Standard_Transient>>(m.attr("IGESData_IGESEntity"))
    // constructors
    // custom constructors
    // methods
        .def("DefLineFont",
             (IGESData_DefType (IGESData_IGESEntity::*)() const) static_cast<IGESData_DefType (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::DefLineFont),
             R"#(Returns the definition status of LineFont)#" )
        .def("DefLevel",
             (IGESData_DefList (IGESData_IGESEntity::*)() const) static_cast<IGESData_DefList (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::DefLevel),
             R"#(Returns the definition status of Level)#" )
        .def("DefView",
             (IGESData_DefList (IGESData_IGESEntity::*)() const) static_cast<IGESData_DefList (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::DefView),
             R"#(Returns the definition status of the view. This can be: none, one or several.)#" )
        .def("DefColor",
             (IGESData_DefType (IGESData_IGESEntity::*)() const) static_cast<IGESData_DefType (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::DefColor),
             R"#(Returns the definition status of Color.)#" )
        .def("HasSubScriptNumber",
             (Standard_Boolean (IGESData_IGESEntity::*)() const) static_cast<Standard_Boolean (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::HasSubScriptNumber),
             R"#(Returns true if a subscript number is defined. A subscript number is an integer used to identify a label.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_IGESEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_IGESEntity::*)() const>(&IGESData_IGESEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_IGESEntity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_IGESModel ,opencascade::handle<IGESData_IGESModel> , Interface_InterfaceModel>>(m.attr("IGESData_IGESModel"))
    // constructors
    // custom constructors
    // methods
        .def("ClearHeader",
             (void (IGESData_IGESModel::*)() ) static_cast<void (IGESData_IGESModel::*)() >(&IGESData_IGESModel::ClearHeader),
             R"#(Erases all data specific to IGES file Header (Start + Global))#" )
        .def("DumpHeader",
             (void (IGESData_IGESModel::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESData_IGESModel::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESData_IGESModel::DumpHeader),
             R"#(Prints the IGES file header (Start and Global Sections) to the log file. The integer parameter is intended to be used as a level indicator but is not used at present.)#"  , py::arg("S"),  py::arg("level")=static_cast<const Standard_Integer>(0))
        .def("GetFromAnother",
             (void (IGESData_IGESModel::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (IGESData_IGESModel::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&IGESData_IGESModel::GetFromAnother),
             R"#(gets Header (GlobalSection) from another Model)#"  , py::arg("other"))
        .def("NewEmptyModel",
             (opencascade::handle<Interface_InterfaceModel> (IGESData_IGESModel::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (IGESData_IGESModel::*)() const>(&IGESData_IGESModel::NewEmptyModel),
             R"#(Returns a New Empty Model, same type as <me> i.e. IGESModel)#" )
        .def("VerifyCheck",
             (void (IGESData_IGESModel::*)( opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESData_IGESModel::*)( opencascade::handle<Interface_Check> & ) const>(&IGESData_IGESModel::VerifyCheck),
             R"#(Checks that the IGES file Global section contains valid data that conforms to the IGES specifications.)#"  , py::arg("ach"))
        .def("ClearLabels",
             (void (IGESData_IGESModel::*)() ) static_cast<void (IGESData_IGESModel::*)() >(&IGESData_IGESModel::ClearLabels),
             R"#(erases specific labels, i.e. does nothing)#" )
        .def("PrintLabel",
             (void (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const>(&IGESData_IGESModel::PrintLabel),
             R"#(Prints label specific to IGES norm for a given entity, i.e. its directory entry number (2*Number-1))#"  , py::arg("ent"),  py::arg("S"))
        .def("PrintToLog",
             (void (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const>(&IGESData_IGESModel::PrintToLog),
             R"#(Prints label specific to IGES norm for a given -- -- entity, i.e. its directory entry number (2*Number-1) in the log file format.)#"  , py::arg("ent"),  py::arg("S"))
        .def("StringLabel",
             (opencascade::handle<TCollection_HAsciiString> (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESData_IGESModel::*)( const opencascade::handle<Standard_Transient> & ) const>(&IGESData_IGESModel::StringLabel),
             R"#(Returns a string with the label attached to a given entity, i.e. a string "Dnn" with nn = directory entry number (2*N-1))#"  , py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_IGESModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_IGESModel::*)() const>(&IGESData_IGESModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_IGESModel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_IGESReaderData ,opencascade::handle<IGESData_IGESReaderData> , Interface_FileReaderData>>(m.attr("IGESData_IGESReaderData"))
    // constructors
    // custom constructors
    // methods
        .def("NbEntities",
             (Standard_Integer (IGESData_IGESReaderData::*)() const) static_cast<Standard_Integer (IGESData_IGESReaderData::*)() const>(&IGESData_IGESReaderData::NbEntities),
             R"#(Returns count of recorded Entities (i.e. size of Directory))#" )
        .def("FindNextRecord",
             (Standard_Integer (IGESData_IGESReaderData::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IGESData_IGESReaderData::*)( const Standard_Integer ) const>(&IGESData_IGESReaderData::FindNextRecord),
             R"#(determines next suitable record from num; that is num+1 except for last one which gives 0)#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_IGESReaderData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_IGESReaderData::*)() const>(&IGESData_IGESReaderData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_IGESReaderData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_IGESReaderTool , shared_ptr<IGESData_IGESReaderTool> , Interface_FileReaderTool>>(m.attr("IGESData_IGESReaderTool"))
    // constructors
    // custom constructors
    // methods
        .def("Recognize",
             (Standard_Boolean (IGESData_IGESReaderTool::*)( const Standard_Integer , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IGESData_IGESReaderTool::*)( const Standard_Integer , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) >(&IGESData_IGESReaderTool::Recognize),
             R"#(recognizes records by asking Protocol (on data of DirType))#"  , py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("BeginRead",
             (void (IGESData_IGESReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (IGESData_IGESReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&IGESData_IGESReaderTool::BeginRead),
             R"#(fills model's header, that is, its GlobalSection)#"  , py::arg("amodel"))
        .def("AnalyseRecord",
             (Standard_Boolean (IGESData_IGESReaderTool::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_Check> & ) ) static_cast<Standard_Boolean (IGESData_IGESReaderTool::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_Check> & ) >(&IGESData_IGESReaderTool::AnalyseRecord),
             R"#(fills an entity, given record no; works by calling ReadDirPart then ReadParams (with help of a ParamReader), then if required ReadProps and ReadAssocs, from IGESEntity Returns True if no fail has been recorded)#"  , py::arg("num"),  py::arg("anent"),  py::arg("acheck"))
        .def("EndRead",
             (void (IGESData_IGESReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (IGESData_IGESReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&IGESData_IGESReaderTool::EndRead),
             R"#(after reading entities, true line weights can be computed)#"  , py::arg("amodel"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_IGESType , shared_ptr<IGESData_IGESType> >>(m.attr("IGESData_IGESType"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_IGESWriter , shared_ptr<IGESData_IGESWriter> >>(m.attr("IGESData_IGESWriter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_NodeOfSpecificLib ,opencascade::handle<IGESData_NodeOfSpecificLib> , Standard_Transient>>(m.attr("IGESData_NodeOfSpecificLib"))
    // constructors
    // custom constructors
    // methods
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
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_NodeOfWriterLib ,opencascade::handle<IGESData_NodeOfWriterLib> , Standard_Transient>>(m.attr("IGESData_NodeOfWriterLib"))
    // constructors
    // custom constructors
    // methods
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
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_ParamCursor , shared_ptr<IGESData_ParamCursor> >>(m.attr("IGESData_ParamCursor"))
    // constructors
    // custom constructors
    // methods
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
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_ParamReader , shared_ptr<IGESData_ParamReader> >>(m.attr("IGESData_ParamReader"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_Protocol ,opencascade::handle<IGESData_Protocol> , Interface_Protocol>>(m.attr("IGESData_Protocol"))
    // constructors
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (IGESData_Protocol::*)() const) static_cast<Standard_Integer (IGESData_Protocol::*)() const>(&IGESData_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, none)#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESData_Protocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESData_Protocol::*)( const Standard_Integer ) const>(&IGESData_Protocol::Resource),
             R"#(Returns a Resource, given a rank. Here, none)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESData_Protocol::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (IGESData_Protocol::*)( const opencascade::handle<Standard_Type> & ) const>(&IGESData_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type Here, Undefined and Free Format Entities have the Number 1.)#"  , py::arg("atype"))
        .def("NewModel",
             (opencascade::handle<Interface_InterfaceModel> (IGESData_Protocol::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (IGESData_Protocol::*)() const>(&IGESData_Protocol::NewModel),
             R"#(Creates an empty Model for IGES Norm)#" )
        .def("IsSuitableModel",
             (Standard_Boolean (IGESData_Protocol::*)( const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IGESData_Protocol::*)( const opencascade::handle<Interface_InterfaceModel> & ) const>(&IGESData_Protocol::IsSuitableModel),
             R"#(Returns True if <model> is a Model of IGES Norm)#"  , py::arg("model"))
        .def("UnknownEntity",
             (opencascade::handle<Standard_Transient> (IGESData_Protocol::*)() const) static_cast<opencascade::handle<Standard_Transient> (IGESData_Protocol::*)() const>(&IGESData_Protocol::UnknownEntity),
             R"#(Creates a new Unknown Entity for IGES (UndefinedEntity))#" )
        .def("IsUnknownEntity",
             (Standard_Boolean (IGESData_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IGESData_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const>(&IGESData_Protocol::IsUnknownEntity),
             R"#(Returns True if <ent> is an Unknown Entity for the Norm, i.e. Type UndefinedEntity, status Unknown)#"  , py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_Protocol::*)() const>(&IGESData_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_Protocol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_ReadWriteModule ,opencascade::handle<IGESData_ReadWriteModule>,Py_IGESData_ReadWriteModule , Interface_ReaderModule>>(m.attr("IGESData_ReadWriteModule"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (IGESData_ReadWriteModule::*)( const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer ) const) static_cast<Standard_Integer (IGESData_ReadWriteModule::*)( const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer ) const>(&IGESData_ReadWriteModule::CaseNum),
             R"#(Translates the Type of record <num> in <data> to a positive Case Number, or 0 if failed. Works with IGESReaderData which provides Type & Form Numbers, and calls CaseIGES (see below))#"  , py::arg("data"),  py::arg("num"))
        .def("CaseIGES",
             (Standard_Integer (IGESData_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (IGESData_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESData_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers corresponding to the Entity Types taken into account by a sub-class of ReadWriteModule (hence, each sub-class of ReadWriteModule has to redefine this method) Called by CaseNum. Its result will then be used to call Read, etc ...)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("Read",
             (void (IGESData_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<Standard_Transient> & ) const) static_cast<void (IGESData_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<Standard_Transient> & ) const>(&IGESData_ReadWriteModule::Read),
             R"#(General Read Function. See IGESReaderTool for more info)#"  , py::arg("CN"),  py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("ReadOwnParams",
             (void (IGESData_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESData_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESData_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity; <PR> gives access to them, <IR> detains parameter types and values For each class, there must be a specific action provided Note that Properties and Associativities Lists are Read by specific methods (see below), they are called under control of reading process (only one call) according Stage recorded in ParamReader)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESData_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const) static_cast<void (IGESData_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const>(&IGESData_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter; defined for each class (to be redefined for other IGES ReadWriteModules) Warning : Properties and Associativities are directly managed by WriteIGES, must not be sent by this method)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_ReadWriteModule::*)() const>(&IGESData_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_ReadWriteModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_SpecificLib , shared_ptr<IGESData_SpecificLib> >>(m.attr("IGESData_SpecificLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_SpecificModule ,opencascade::handle<IGESData_SpecificModule>,Py_IGESData_SpecificModule , Standard_Transient>>(m.attr("IGESData_SpecificModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnDump",
             (void (IGESData_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESData_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESData_SpecificModule::OwnDump),
             R"#(Specific Dump for each type of IGES Entity : it concerns only own parameters, the general data (Directory Part, Lists) are taken into account by the IGESDumper See class IGESDumper for the rules to follow for <own> and <attached> level)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESData_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<Standard_Boolean (IGESData_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESData_SpecificModule::OwnCorrect),
             R"#(Specific Automatic Correction on own Parameters of an Entity. It works by setting in accordance redundant data, if there are when there is no ambiguity (else, it does nothing). Remark that classic Corrections on Directory Entry (to set void data) are taken into account alsewhere.)#"  , py::arg("CN"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_SpecificModule::*)() const>(&IGESData_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_SpecificModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_ToolLocation ,opencascade::handle<IGESData_ToolLocation> , Standard_Transient>>(m.attr("IGESData_ToolLocation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_ToolLocation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_ToolLocation::*)() const>(&IGESData_ToolLocation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_ToolLocation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_WriterLib , shared_ptr<IGESData_WriterLib> >>(m.attr("IGESData_WriterLib"))
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
    register_default_constructor<IGESData_ColorEntity ,opencascade::handle<IGESData_ColorEntity>>(m,"IGESData_ColorEntity");

    static_cast<py::class_<IGESData_ColorEntity ,opencascade::handle<IGESData_ColorEntity> , IGESData_IGESEntity>>(m.attr("IGESData_ColorEntity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_ColorEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_ColorEntity::*)() const>(&IGESData_ColorEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_ColorEntity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_DefaultGeneral ,opencascade::handle<IGESData_DefaultGeneral> , IGESData_GeneralModule>>(m.attr("IGESData_DefaultGeneral"))
    // constructors
    // custom constructors
    // methods
        .def("OwnSharedCase",
             (void (IGESData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const) static_cast<void (IGESData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const>(&IGESData_DefaultGeneral::OwnSharedCase),
             R"#(Lists the Entities shared by an IGESEntity, which must be an UndefinedEntity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<IGESData_DirChecker (IGESData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESData_DefaultGeneral::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity Here, Returns an empty DirChecker (no constraint to check))#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESData_DefaultGeneral::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity Here, does nothing (no constraint to check))#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESData_DefaultGeneral::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IGESData_DefaultGeneral::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const>(&IGESData_DefaultGeneral::NewVoid),
             R"#(Specific creation of a new void entity (UndefinedEntity only))#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const) static_cast<void (IGESData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const>(&IGESData_DefaultGeneral::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_DefaultGeneral::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_DefaultGeneral::*)() const>(&IGESData_DefaultGeneral::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_DefaultGeneral::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_DefaultSpecific ,opencascade::handle<IGESData_DefaultSpecific> , IGESData_SpecificModule>>(m.attr("IGESData_DefaultSpecific"))
    // constructors
    // custom constructors
    // methods
        .def("OwnDump",
             (void (IGESData_DefaultSpecific::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESData_DefaultSpecific::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESData_DefaultSpecific::OwnDump),
             R"#(Specific Dump for UndefinedEntity : it concerns only own parameters, the general data (Directory Part, Lists) are taken into account by the IGESDumper)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_DefaultSpecific::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_DefaultSpecific::*)() const>(&IGESData_DefaultSpecific::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_DefaultSpecific::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_FileProtocol ,opencascade::handle<IGESData_FileProtocol> , IGESData_Protocol>>(m.attr("IGESData_FileProtocol"))
    // constructors
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (IGESData_FileProtocol::*)() const) static_cast<Standard_Integer (IGESData_FileProtocol::*)() const>(&IGESData_FileProtocol::NbResources),
             R"#(Gives the count of Resources : the count of Added Protocols)#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESData_FileProtocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESData_FileProtocol::*)( const Standard_Integer ) const>(&IGESData_FileProtocol::Resource),
             R"#(Returns a Resource, given a rank (rank of call to Add))#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_FileProtocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_FileProtocol::*)() const>(&IGESData_FileProtocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_FileProtocol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IGESData_LabelDisplayEntity ,opencascade::handle<IGESData_LabelDisplayEntity>>(m,"IGESData_LabelDisplayEntity");

    static_cast<py::class_<IGESData_LabelDisplayEntity ,opencascade::handle<IGESData_LabelDisplayEntity> , IGESData_IGESEntity>>(m.attr("IGESData_LabelDisplayEntity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_LabelDisplayEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_LabelDisplayEntity::*)() const>(&IGESData_LabelDisplayEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_LabelDisplayEntity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_LevelListEntity ,opencascade::handle<IGESData_LevelListEntity>,Py_IGESData_LevelListEntity , IGESData_IGESEntity>>(m.attr("IGESData_LevelListEntity"))
    // constructors
    // custom constructors
    // methods
        .def("NbLevelNumbers",
             (Standard_Integer (IGESData_LevelListEntity::*)() const) static_cast<Standard_Integer (IGESData_LevelListEntity::*)() const>(&IGESData_LevelListEntity::NbLevelNumbers),
             R"#(Must return the count of levels)#" )
        .def("LevelNumber",
             (Standard_Integer (IGESData_LevelListEntity::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IGESData_LevelListEntity::*)( const Standard_Integer ) const>(&IGESData_LevelListEntity::LevelNumber),
             R"#(returns the Level Number of <me>, indicated by <num> raises an exception if num is out of range)#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_LevelListEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_LevelListEntity::*)() const>(&IGESData_LevelListEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_LevelListEntity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IGESData_LineFontEntity ,opencascade::handle<IGESData_LineFontEntity>>(m,"IGESData_LineFontEntity");

    static_cast<py::class_<IGESData_LineFontEntity ,opencascade::handle<IGESData_LineFontEntity> , IGESData_IGESEntity>>(m.attr("IGESData_LineFontEntity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_LineFontEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_LineFontEntity::*)() const>(&IGESData_LineFontEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_LineFontEntity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_NameEntity ,opencascade::handle<IGESData_NameEntity>,Py_IGESData_NameEntity , IGESData_IGESEntity>>(m.attr("IGESData_NameEntity"))
    // constructors
    // custom constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_SingleParentEntity ,opencascade::handle<IGESData_SingleParentEntity>,Py_IGESData_SingleParentEntity , IGESData_IGESEntity>>(m.attr("IGESData_SingleParentEntity"))
    // constructors
    // custom constructors
    // methods
        .def("SingleParent",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_SingleParentEntity::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_SingleParentEntity::*)() const>(&IGESData_SingleParentEntity::SingleParent),
             R"#(Returns the parent designated by the Entity, if only one !)#" )
        .def("NbChildren",
             (Standard_Integer (IGESData_SingleParentEntity::*)() const) static_cast<Standard_Integer (IGESData_SingleParentEntity::*)() const>(&IGESData_SingleParentEntity::NbChildren),
             R"#(Returns the count of Entities designated as children)#" )
        .def("Child",
             (opencascade::handle<IGESData_IGESEntity> (IGESData_SingleParentEntity::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESData_SingleParentEntity::*)( const Standard_Integer ) const>(&IGESData_SingleParentEntity::Child),
             R"#(Returns a Child given its rank)#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_SingleParentEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_SingleParentEntity::*)() const>(&IGESData_SingleParentEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_SingleParentEntity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_TransfEntity ,opencascade::handle<IGESData_TransfEntity>,Py_IGESData_TransfEntity , IGESData_IGESEntity>>(m.attr("IGESData_TransfEntity"))
    // constructors
    // custom constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_UndefinedEntity ,opencascade::handle<IGESData_UndefinedEntity> , IGESData_IGESEntity>>(m.attr("IGESData_UndefinedEntity"))
    // constructors
    // custom constructors
    // methods
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
             (Standard_Boolean (IGESData_UndefinedEntity::*)( const opencascade::handle<IGESData_IGESReaderData> & , IGESData_DirPart & , opencascade::handle<Interface_Check> & ) ) static_cast<Standard_Boolean (IGESData_UndefinedEntity::*)( const opencascade::handle<IGESData_IGESReaderData> & , IGESData_DirPart & , opencascade::handle<Interface_Check> & ) >(&IGESData_UndefinedEntity::ReadDir),
             R"#(Computes the Directory Error Status, to be called before standard ReadDir from IGESReaderTool Returns True if OK (hence, Directory can be loaded), Else returns False and the DirPart <DP> is modified (hence, Directory Error Status is non null; and standard Read will work with an acceptable DirectoryPart))#"  , py::arg("IR"),  py::arg("DP"),  py::arg("ach"))
        .def("ReadOwnParams",
             (void (IGESData_UndefinedEntity::*)( const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) ) static_cast<void (IGESData_UndefinedEntity::*)( const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) >(&IGESData_UndefinedEntity::ReadOwnParams),
             R"#(reads own parameters from file; PR gives access to them, IR detains parameter types and values Here, reads all parameters, integers are considered as entity reference unless they cannot be; no list interpretation No property or associativity list is managed)#"  , py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESData_UndefinedEntity::*)( IGESData_IGESWriter & ) const) static_cast<void (IGESData_UndefinedEntity::*)( IGESData_IGESWriter & ) const>(&IGESData_UndefinedEntity::WriteOwnParams),
             R"#(writes parameters to IGESWriter, taken from UndefinedContent)#"  , py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_UndefinedEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_UndefinedEntity::*)() const>(&IGESData_UndefinedEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_UndefinedEntity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_ViewKindEntity ,opencascade::handle<IGESData_ViewKindEntity>,Py_IGESData_ViewKindEntity , IGESData_IGESEntity>>(m.attr("IGESData_ViewKindEntity"))
    // constructors
    // custom constructors
    // methods
        .def("IsSingle",
             (Standard_Boolean (IGESData_ViewKindEntity::*)() const) static_cast<Standard_Boolean (IGESData_ViewKindEntity::*)() const>(&IGESData_ViewKindEntity::IsSingle),
             R"#(says if "me" is a Single View (True) or a List of Views (False))#" )
        .def("NbViews",
             (Standard_Integer (IGESData_ViewKindEntity::*)() const) static_cast<Standard_Integer (IGESData_ViewKindEntity::*)() const>(&IGESData_ViewKindEntity::NbViews),
             R"#(Returns the count of Views for a List of Views. For a Single View, may return simply 1)#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESData_ViewKindEntity::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESData_ViewKindEntity::*)( const Standard_Integer ) const>(&IGESData_ViewKindEntity::ViewItem),
             R"#(Returns the View n0. <num> for a List of Views. For a Single Views, may return <me> itself)#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_ViewKindEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_ViewKindEntity::*)() const>(&IGESData_ViewKindEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_ViewKindEntity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESData_FreeFormatEntity ,opencascade::handle<IGESData_FreeFormatEntity> , IGESData_UndefinedEntity>>(m.attr("IGESData_FreeFormatEntity"))
    // constructors
    // custom constructors
    // methods
        .def("WriteOwnParams",
             (void (IGESData_FreeFormatEntity::*)( IGESData_IGESWriter & ) const) static_cast<void (IGESData_FreeFormatEntity::*)( IGESData_IGESWriter & ) const>(&IGESData_FreeFormatEntity::WriteOwnParams),
             R"#(WriteOwnParams is redefined for FreeFormatEntity to take into account the supplementary information "Negative Pointer")#"  , py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESData_FreeFormatEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESData_FreeFormatEntity::*)() const>(&IGESData_FreeFormatEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESData_FreeFormatEntity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IGESData_LineFontEntity.hxx
// ./opencascade/IGESData_Dump.hxx
// ./opencascade/IGESData_IGESType.hxx
// ./opencascade/IGESData_DefaultGeneral.hxx
// ./opencascade/IGESData_DirPart.hxx
// ./opencascade/IGESData_IGESWriter.hxx
// ./opencascade/IGESData_GeneralModule.hxx
// ./opencascade/IGESData_ParamReader.hxx
// ./opencascade/IGESData_Protocol.hxx
// ./opencascade/IGESData_DefaultSpecific.hxx
// ./opencascade/IGESData_GlobalNodeOfSpecificLib.hxx
// ./opencascade/IGESData_ReadStage.hxx
// ./opencascade/IGESData_Status.hxx
// ./opencascade/IGESData_IGESReaderData.hxx
// ./opencascade/IGESData_TransfEntity.hxx
// ./opencascade/IGESData_ToolLocation.hxx
// ./opencascade/IGESData_IGESReaderTool.hxx
// ./opencascade/IGESData_DefType.hxx
// ./opencascade/IGESData_LabelDisplayEntity.hxx
// ./opencascade/IGESData_FileRecognizer.hxx
// ./opencascade/IGESData_SingleParentEntity.hxx
// ./opencascade/IGESData_FreeFormatEntity.hxx
// ./opencascade/IGESData_Array1OfIGESEntity.hxx
// ./opencascade/IGESData_IGESModel.hxx
// ./opencascade/IGESData_ParamCursor.hxx
// ./opencascade/IGESData_GlobalNodeOfWriterLib.hxx
// ./opencascade/IGESData_UndefinedEntity.hxx
// ./opencascade/IGESData_NodeOfWriterLib.hxx
// ./opencascade/IGESData_GlobalSection.hxx
// ./opencascade/IGESData_SpecificModule.hxx
// ./opencascade/IGESData_BasicEditor.hxx
// ./opencascade/IGESData.hxx
// ./opencascade/IGESData_IGESEntity.hxx
// ./opencascade/IGESData_SpecificLib.hxx
// ./opencascade/IGESData_HArray1OfIGESEntity.hxx
// ./opencascade/IGESData_DirChecker.hxx
// ./opencascade/IGESData_ReadWriteModule.hxx
// ./opencascade/IGESData_DefSwitch.hxx
// ./opencascade/IGESData_LevelListEntity.hxx
// ./opencascade/IGESData_NodeOfSpecificLib.hxx
// ./opencascade/IGESData_FileProtocol.hxx
// ./opencascade/IGESData_ColorEntity.hxx
// ./opencascade/IGESData_NameEntity.hxx
// ./opencascade/IGESData_IGESDumper.hxx
// ./opencascade/IGESData_WriterLib.hxx
// ./opencascade/IGESData_DefList.hxx
// ./opencascade/IGESData_ViewKindEntity.hxx
// ./opencascade/IGESData_Array1OfDirPart.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESData_IGESEntity> >(m,"IGESData_Array1OfIGESEntity");
    register_template_NCollection_Array1<IGESData_DirPart>(m,"IGESData_Array1OfDirPart");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

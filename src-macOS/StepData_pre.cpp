
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_NoSuchObject.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_OutOfRange.hxx>
#include <StepData_Field.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_StepModel.hxx>
#include <StepData_UndefinedEntity.hxx>
#include <StepData_SelectType.hxx>
#include <StepData_Field.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_SelectInt.hxx>
#include <StepData_SelectReal.hxx>
#include <StepData_SelectNamed.hxx>
#include <StepData_SelectArrReal.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_FieldList.hxx>
#include <StepData_FieldList1.hxx>
#include <StepData_FieldListN.hxx>
#include <StepData_FieldListD.hxx>
#include <StepData_EDescr.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_ECDescr.hxx>
#include <StepData_Described.hxx>
#include <StepData_Simple.hxx>
#include <StepData_Plex.hxx>
#include <StepData_FreeFormEntity.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_GeneralModule.hxx>
#include <StepData_FileRecognizer.hxx>
#include <StepData_FileProtocol.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepReaderTool.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepDumper.hxx>
#include <StepData_WriterLib.hxx>
#include <StepData_DefaultGeneral.hxx>
#include <StepData_GlobalNodeOfWriterLib.hxx>
#include <StepData_NodeOfWriterLib.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_ECDescr.hxx>
#include <StepData_Simple.hxx>
#include <StepData_Field.hxx>
#include <Interface_Check.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <StepData_NodeOfWriterLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_GlobalNodeOfWriterLib.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_StepModel.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_WriterLib.hxx>
#include <StepData_Field.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_FieldList.hxx>
#include <StepData_ESDescr.hxx>
#include <Interface_Check.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_Field.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_FieldList.hxx>
#include <StepData_SelectType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_Described.hxx>
#include <StepData_EDescr.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_Simple.hxx>
#include <StepData_Field.hxx>
#include <Interface_Check.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepModel.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_Protocol.hxx>
#include <Message_Messenger.hxx>
#include <StepData_EDescr.hxx>
#include <StepData_Field.hxx>
#include <Interface_Check.hxx>
#include <StepData_GlobalNodeOfWriterLib.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_WriterLib.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Check.hxx>
#include <Message_Messenger.hxx>
#include <StepData_FileRecognizer.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_Protocol.hxx>
#include <Interface_Check.hxx>
#include <Interface_InterfaceModel.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_WriterLib.hxx>
#include <StepData_NodeOfWriterLib.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_FileReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepWriter.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_Described.hxx>
#include <Interface_InterfaceModel.hxx>
#include <StepData_EDescr.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_ECDescr.hxx>
#include <StepData_PDescr.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Check.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_ESDescr.hxx>
#include <Interface_Check.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_UndefinedContent.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_EntityIterator.hxx>
#include <Standard_OutOfRange.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_Described.hxx>

// module includes
#include <StepData.hxx>
#include <StepData_Array1OfField.hxx>
#include <StepData_DefaultGeneral.hxx>
#include <StepData_Described.hxx>
#include <StepData_ECDescr.hxx>
#include <StepData_EDescr.hxx>
#include <StepData_EnumTool.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_Field.hxx>
#include <StepData_FieldList.hxx>
#include <StepData_FieldList1.hxx>
#include <StepData_FieldListD.hxx>
#include <StepData_FieldListN.hxx>
#include <StepData_FileProtocol.hxx>
#include <StepData_FileRecognizer.hxx>
#include <StepData_FreeFormEntity.hxx>
#include <StepData_GeneralModule.hxx>
#include <StepData_GlobalNodeOfWriterLib.hxx>
#include <StepData_HArray1OfField.hxx>
#include <StepData_Logical.hxx>
#include <StepData_NodeOfWriterLib.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_Plex.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_SelectArrReal.hxx>
#include <StepData_SelectInt.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_SelectNamed.hxx>
#include <StepData_SelectReal.hxx>
#include <StepData_SelectType.hxx>
#include <StepData_Simple.hxx>
#include <StepData_StepDumper.hxx>
#include <StepData_StepModel.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepReaderTool.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_UndefinedEntity.hxx>
#include <StepData_WriterLib.hxx>

// template related includes
// ./opencascade/StepData_Array1OfField.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepData_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepData", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<StepData_Logical>(m, "StepData_Logical",R"#(A Standard Definition for STEP (which knows Boolean too))#")
        .value("StepData_LFalse",StepData_Logical::StepData_LFalse)
        .value("StepData_LTrue",StepData_Logical::StepData_LTrue)
        .value("StepData_LUnknown",StepData_Logical::StepData_LUnknown).export_values();

//Python trampoline classes
    class Py_StepData_Described : public StepData_Described{
    public:
        using StepData_Described::StepData_Described;


        // public pure virtual
        Standard_Boolean IsComplex() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,StepData_Described,IsComplex,) };
        Standard_Boolean Matches(const Standard_CString steptype) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,StepData_Described,Matches,steptype) };
        opencascade::handle<StepData_Simple> As(const Standard_CString steptype) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<StepData_Simple>,StepData_Described,As,steptype) };
        Standard_Boolean HasField(const Standard_CString name) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,StepData_Described,HasField,name) };
        const StepData_Field & Field(const Standard_CString name) const  override { PYBIND11_OVERLOAD_PURE(const StepData_Field &,StepData_Described,Field,name) };
        StepData_Field & CField(const Standard_CString name) override { PYBIND11_OVERLOAD_PURE(StepData_Field &,StepData_Described,CField,name) };
        void Check(opencascade::handle<Interface_Check> & ach) const  override { PYBIND11_OVERLOAD_PURE(void,StepData_Described,Check,ach) };
        void Shared(Interface_EntityIterator & list) const  override { PYBIND11_OVERLOAD_PURE(void,StepData_Described,Shared,list) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_StepData_EDescr : public StepData_EDescr{
    public:
        using StepData_EDescr::StepData_EDescr;


        // public pure virtual
        Standard_Boolean Matches(const Standard_CString steptype) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,StepData_EDescr,Matches,steptype) };
        Standard_Boolean IsComplex() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,StepData_EDescr,IsComplex,) };
        opencascade::handle<StepData_Described> NewEntity() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<StepData_Described>,StepData_EDescr,NewEntity,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_StepData_FileRecognizer : public StepData_FileRecognizer{
    public:
        using StepData_FileRecognizer::StepData_FileRecognizer;


        // public pure virtual


        // protected pure virtual
        void Eval(const TCollection_AsciiString & akey) override { PYBIND11_OVERLOAD_PURE(void,StepData_FileRecognizer,Eval,akey) };


        // private pure virtual

    };
    class Py_StepData_GeneralModule : public StepData_GeneralModule{
    public:
        using StepData_GeneralModule::StepData_GeneralModule;


        // public pure virtual
        void FillSharedCase(const Standard_Integer casenum,const opencascade::handle<Standard_Transient> & ent,Interface_EntityIterator & iter) const  override { PYBIND11_OVERLOAD_PURE(void,StepData_GeneralModule,FillSharedCase,casenum,ent,iter) };
        void CheckCase(const Standard_Integer casenum,const opencascade::handle<Standard_Transient> & ent,const Interface_ShareTool & shares,opencascade::handle<Interface_Check> & ach) const  override { PYBIND11_OVERLOAD_PURE(void,StepData_GeneralModule,CheckCase,casenum,ent,shares,ach) };
        void CopyCase(const Standard_Integer casenum,const opencascade::handle<Standard_Transient> & entfrom,const opencascade::handle<Standard_Transient> & entto,Interface_CopyTool & TC) const  override { PYBIND11_OVERLOAD_PURE(void,StepData_GeneralModule,CopyCase,casenum,entfrom,entto,TC) };

        Standard_Boolean NewVoid(const Standard_Integer CN,opencascade::handle<Standard_Transient> & entto) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Interface_GeneralModule,NewVoid,CN,entto) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_StepData_ReadWriteModule : public StepData_ReadWriteModule{
    public:
        using StepData_ReadWriteModule::StepData_ReadWriteModule;


        // public pure virtual
        Standard_Integer CaseStep(const TCollection_AsciiString & atype) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,StepData_ReadWriteModule,CaseStep,atype) };
        const TCollection_AsciiString & StepType(const Standard_Integer CN) const  override { PYBIND11_OVERLOAD_PURE(const TCollection_AsciiString &,StepData_ReadWriteModule,StepType,CN) };
        void ReadStep(const Standard_Integer CN,const opencascade::handle<StepData_StepReaderData> & data,const Standard_Integer num,opencascade::handle<Interface_Check> & ach,const opencascade::handle<Standard_Transient> & ent) const  override { PYBIND11_OVERLOAD_PURE(void,StepData_ReadWriteModule,ReadStep,CN,data,num,ach,ent) };
        void WriteStep(const Standard_Integer CN,StepData_StepWriter & SW,const opencascade::handle<Standard_Transient> & ent) const  override { PYBIND11_OVERLOAD_PURE(void,StepData_ReadWriteModule,WriteStep,CN,SW,ent) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_StepData_SelectType : public StepData_SelectType{
    public:
        using StepData_SelectType::StepData_SelectType;


        // public pure virtual
        Standard_Integer CaseNum(const opencascade::handle<Standard_Transient> & ent) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,StepData_SelectType,CaseNum,ent) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_Array1<StepData_Field>(m,"StepData_Array1OfField");

// classes forward declarations only
    py::class_<StepData , shared_ptr<StepData> >(m,"StepData",R"#(Gives basic data definition for Step Interface. Any class of a data model described in EXPRESS Language is candidate to be managed by a Step Interface)#");
    py::class_<StepData_Described ,opencascade::handle<StepData_Described>,Py_StepData_Described , Standard_Transient>(m,"StepData_Described",R"#(General frame to describe entities with Description (Simple or Complex)General frame to describe entities with Description (Simple or Complex)General frame to describe entities with Description (Simple or Complex))#");
    py::class_<StepData_EDescr ,opencascade::handle<StepData_EDescr>,Py_StepData_EDescr , Standard_Transient>(m,"StepData_EDescr",R"#(This class is intended to describe the authorized form for an entity, either Simple or PlexThis class is intended to describe the authorized form for an entity, either Simple or PlexThis class is intended to describe the authorized form for an entity, either Simple or Plex)#");
    py::class_<StepData_Field , shared_ptr<StepData_Field> >(m,"StepData_Field",R"#(Defines a generally defined Field for STEP data : can be used either in any kind of entity to implement it or in free format entities in a "late-binding" mode A field can have : no value (or derived), a single value of any kind, a list of value : single or double list)#");
    py::class_<StepData_FieldList , shared_ptr<StepData_FieldList> >(m,"StepData_FieldList",R"#(Describes a list of fields, in a general way This basic class is for a null size list Subclasses are for 1, N (fixed) or Dynamic sizes)#");
    py::class_<StepData_FileRecognizer ,opencascade::handle<StepData_FileRecognizer>,Py_StepData_FileRecognizer , Standard_Transient>(m,"StepData_FileRecognizer",R"#()#");
    py::class_<StepData_FreeFormEntity ,opencascade::handle<StepData_FreeFormEntity> , Standard_Transient>(m,"StepData_FreeFormEntity",R"#(A Free Form Entity allows to record any kind of STEP parameters, in any way of typing It is implemented with an array of fields A Complex entity can be defined, as a chain of FreeFormEntity (see Next and As)A Free Form Entity allows to record any kind of STEP parameters, in any way of typing It is implemented with an array of fields A Complex entity can be defined, as a chain of FreeFormEntity (see Next and As)A Free Form Entity allows to record any kind of STEP parameters, in any way of typing It is implemented with an array of fields A Complex entity can be defined, as a chain of FreeFormEntity (see Next and As))#");
    py::class_<StepData_GeneralModule ,opencascade::handle<StepData_GeneralModule>,Py_StepData_GeneralModule , Interface_GeneralModule>(m,"StepData_GeneralModule",R"#(Specific features for General Services adapted to STEPSpecific features for General Services adapted to STEPSpecific features for General Services adapted to STEP)#");
    py::class_<StepData_GlobalNodeOfWriterLib ,opencascade::handle<StepData_GlobalNodeOfWriterLib> , Standard_Transient>(m,"StepData_GlobalNodeOfWriterLib",R"#()#");
    py::class_<StepData_HArray1OfField ,opencascade::handle<StepData_HArray1OfField> , StepData_Array1OfField, Standard_Transient>(m,"StepData_HArray1OfField",R"#()#");
    py::class_<StepData_NodeOfWriterLib ,opencascade::handle<StepData_NodeOfWriterLib> , Standard_Transient>(m,"StepData_NodeOfWriterLib",R"#()#");
    py::class_<StepData_PDescr ,opencascade::handle<StepData_PDescr> , Standard_Transient>(m,"StepData_PDescr",R"#(This class is intended to describe the authorized form for a parameter, as a type or a value for a fieldThis class is intended to describe the authorized form for a parameter, as a type or a value for a fieldThis class is intended to describe the authorized form for a parameter, as a type or a value for a field)#");
    py::class_<StepData_Protocol ,opencascade::handle<StepData_Protocol> , Interface_Protocol>(m,"StepData_Protocol",R"#(Description of Basic Protocol for Step The class Protocol from StepData itself describes a default Protocol, which recognizes only UnknownEntities. Sub-classes will redefine CaseNumber and, if necessary, NbResources and Resources.Description of Basic Protocol for Step The class Protocol from StepData itself describes a default Protocol, which recognizes only UnknownEntities. Sub-classes will redefine CaseNumber and, if necessary, NbResources and Resources.Description of Basic Protocol for Step The class Protocol from StepData itself describes a default Protocol, which recognizes only UnknownEntities. Sub-classes will redefine CaseNumber and, if necessary, NbResources and Resources.)#");
    py::class_<StepData_ReadWriteModule ,opencascade::handle<StepData_ReadWriteModule>,Py_StepData_ReadWriteModule , Interface_ReaderModule>(m,"StepData_ReadWriteModule",R"#(Defines basic File Access Module (Recognize, Read, Write) That is : ReaderModule (Recognize & Read) + Write for StepWriter (for a more centralized description) Warning : A sub-class of ReadWriteModule, which belongs to a particular Protocol, must use the same definition for Case Numbers (give the same Value for a StepType defined as a String from a File as the Protocol does for the corresponding Entity)Defines basic File Access Module (Recognize, Read, Write) That is : ReaderModule (Recognize & Read) + Write for StepWriter (for a more centralized description) Warning : A sub-class of ReadWriteModule, which belongs to a particular Protocol, must use the same definition for Case Numbers (give the same Value for a StepType defined as a String from a File as the Protocol does for the corresponding Entity)Defines basic File Access Module (Recognize, Read, Write) That is : ReaderModule (Recognize & Read) + Write for StepWriter (for a more centralized description) Warning : A sub-class of ReadWriteModule, which belongs to a particular Protocol, must use the same definition for Case Numbers (give the same Value for a StepType defined as a String from a File as the Protocol does for the corresponding Entity))#");
    py::class_<StepData_SelectMember ,opencascade::handle<StepData_SelectMember> , Standard_Transient>(m,"StepData_SelectMember",R"#(The general form for a Select Member. A Select Member can, either define a value of a basic type (such as an integer) with an additional information : a name or list of names which precise the meaning of this value or be an alternate value in a select, which also accepts an entity (in this case, the name is not mandatory)The general form for a Select Member. A Select Member can, either define a value of a basic type (such as an integer) with an additional information : a name or list of names which precise the meaning of this value or be an alternate value in a select, which also accepts an entity (in this case, the name is not mandatory)The general form for a Select Member. A Select Member can, either define a value of a basic type (such as an integer) with an additional information : a name or list of names which precise the meaning of this value or be an alternate value in a select, which also accepts an entity (in this case, the name is not mandatory))#");
    py::class_<StepData_SelectType , shared_ptr<StepData_SelectType>,Py_StepData_SelectType >(m,"StepData_SelectType",R"#(SelectType is the basis used for SELECT_TYPE definitions from the EXPRESS form. A SELECT_TYPE in EXPRESS is an enumeration of Types, it corresponds in a way to a Super-Type, but with no specific Methods, and no exclusivity (a given Type can be member of several SELECT_TYPES, plus be itself a SUB_TYPE).)#");
    py::class_<StepData_StepDumper , shared_ptr<StepData_StepDumper> >(m,"StepData_StepDumper",R"#(Provides a way to dump entities processed through STEP, with these features : - same form as for writing a STEP File (because it is clear and compact enough, even if the names of the fields do not appear) : thus, no additionnal resource is required - possibility to look for an entity itself (only its Type or with its content), an entity and it shared items (one level) or all the entities its refers to, directly or recursively.)#");
    py::class_<StepData_StepModel ,opencascade::handle<StepData_StepModel> , Interface_InterfaceModel>(m,"StepData_StepModel",R"#(Gives access to - entities in a STEP file, - the STEP file header.Gives access to - entities in a STEP file, - the STEP file header.Gives access to - entities in a STEP file, - the STEP file header.)#");
    py::class_<StepData_StepReaderData ,opencascade::handle<StepData_StepReaderData> , Interface_FileReaderData>(m,"StepData_StepReaderData",R"#(Specific FileReaderData for Step Contains litteral description of entities (for each one : type as a string, ident, parameter list) provides references evaluation, plus access to litteral data and specific access methods (Boolean, XY, XYZ)Specific FileReaderData for Step Contains litteral description of entities (for each one : type as a string, ident, parameter list) provides references evaluation, plus access to litteral data and specific access methods (Boolean, XY, XYZ)Specific FileReaderData for Step Contains litteral description of entities (for each one : type as a string, ident, parameter list) provides references evaluation, plus access to litteral data and specific access methods (Boolean, XY, XYZ))#");
    py::class_<StepData_StepReaderTool , shared_ptr<StepData_StepReaderTool> , Interface_FileReaderTool>(m,"StepData_StepReaderTool",R"#(Specific FileReaderTool for Step; works with FileReaderData provides references evaluation, plus access to litteral data and specific methods defined by FileReaderTool Remarks : works with a ReaderLib to load Entities)#");
    py::class_<StepData_StepWriter , shared_ptr<StepData_StepWriter> >(m,"StepData_StepWriter",R"#(manages atomic file writing, under control of StepModel (for general organisation of file) and each class of Transient (for its own parameters) : prepares text to be written then writes it A stream cannot be used because Step limits line length at 72 In more, a specific object offers more appropriate functions)#");
    py::class_<StepData_UndefinedEntity ,opencascade::handle<StepData_UndefinedEntity> , Standard_Transient>(m,"StepData_UndefinedEntity",R"#(Undefined entity specific to Step Interface, in which StepType is defined at each instance, or is a SubList of another one Uses an UndefinedContent, that from Interface is suitable. Also an Entity defined by STEP can be "Complex Type" (see ANDOR clause in Express).Undefined entity specific to Step Interface, in which StepType is defined at each instance, or is a SubList of another one Uses an UndefinedContent, that from Interface is suitable. Also an Entity defined by STEP can be "Complex Type" (see ANDOR clause in Express).Undefined entity specific to Step Interface, in which StepType is defined at each instance, or is a SubList of another one Uses an UndefinedContent, that from Interface is suitable. Also an Entity defined by STEP can be "Complex Type" (see ANDOR clause in Express).)#");
    py::class_<StepData_WriterLib , shared_ptr<StepData_WriterLib> >(m,"StepData_WriterLib",R"#(None)#");
    py::class_<StepData_DefaultGeneral ,opencascade::handle<StepData_DefaultGeneral> , StepData_GeneralModule>(m,"StepData_DefaultGeneral",R"#(DefaultGeneral defines a GeneralModule which processes Unknown Entity from StepData onlyDefaultGeneral defines a GeneralModule which processes Unknown Entity from StepData onlyDefaultGeneral defines a GeneralModule which processes Unknown Entity from StepData only)#");
    py::class_<StepData_ECDescr ,opencascade::handle<StepData_ECDescr> , StepData_EDescr>(m,"StepData_ECDescr",R"#(Describes a Complex Entity (Plex) as a list of Simple onesDescribes a Complex Entity (Plex) as a list of Simple onesDescribes a Complex Entity (Plex) as a list of Simple ones)#");
    py::class_<StepData_ESDescr ,opencascade::handle<StepData_ESDescr> , StepData_EDescr>(m,"StepData_ESDescr",R"#(This class is intended to describe the authorized form for a Simple (not Plex) Entity, as a list of fieldsThis class is intended to describe the authorized form for a Simple (not Plex) Entity, as a list of fieldsThis class is intended to describe the authorized form for a Simple (not Plex) Entity, as a list of fields)#");
    py::class_<StepData_FieldList1 , shared_ptr<StepData_FieldList1> , StepData_FieldList>(m,"StepData_FieldList1",R"#(Describes a list of ONE field)#");
    py::class_<StepData_FieldListD , shared_ptr<StepData_FieldListD> , StepData_FieldList>(m,"StepData_FieldListD",R"#(Describes a list of fields, in a general way This basic class is for a null size list Subclasses are for 1, N (fixed) or Dynamic sizes)#");
    py::class_<StepData_FieldListN , shared_ptr<StepData_FieldListN> , StepData_FieldList>(m,"StepData_FieldListN",R"#(Describes a list of fields, in a general way This basic class is for a null size list Subclasses are for 1, N (fixed) or Dynamic sizes)#");
    py::class_<StepData_FileProtocol ,opencascade::handle<StepData_FileProtocol> , StepData_Protocol>(m,"StepData_FileProtocol",R"#(A FileProtocol is defined as the addition of several already existing Protocols. It corresponds to the definition of a SchemaName with several Names, each one being attached to a specific Protocol. Thus, a File defined with a compound Schema is processed as any other one, once built the equivalent compound Protocol, a FileProtocolA FileProtocol is defined as the addition of several already existing Protocols. It corresponds to the definition of a SchemaName with several Names, each one being attached to a specific Protocol. Thus, a File defined with a compound Schema is processed as any other one, once built the equivalent compound Protocol, a FileProtocolA FileProtocol is defined as the addition of several already existing Protocols. It corresponds to the definition of a SchemaName with several Names, each one being attached to a specific Protocol. Thus, a File defined with a compound Schema is processed as any other one, once built the equivalent compound Protocol, a FileProtocol)#");
    py::class_<StepData_Plex ,opencascade::handle<StepData_Plex> , StepData_Described>(m,"StepData_Plex",R"#(A Plex (for Complex) Entity is defined as a list of Simple Members ("external mapping") The types of these members must be in alphabetic orderA Plex (for Complex) Entity is defined as a list of Simple Members ("external mapping") The types of these members must be in alphabetic orderA Plex (for Complex) Entity is defined as a list of Simple Members ("external mapping") The types of these members must be in alphabetic order)#");
    py::class_<StepData_SelectInt ,opencascade::handle<StepData_SelectInt> , StepData_SelectMember>(m,"StepData_SelectInt",R"#(A SelectInt is a SelectMember specialised for a basic integer type in a select which also accepts entities : this one has NO NAME. For a named select, see SelectNamedA SelectInt is a SelectMember specialised for a basic integer type in a select which also accepts entities : this one has NO NAME. For a named select, see SelectNamedA SelectInt is a SelectMember specialised for a basic integer type in a select which also accepts entities : this one has NO NAME. For a named select, see SelectNamed)#");
    py::class_<StepData_SelectNamed ,opencascade::handle<StepData_SelectNamed> , StepData_SelectMember>(m,"StepData_SelectNamed",R"#(This select member can be of any kind, and be named But its takes more memory than some specialised ones This class allows one name for the instanceThis select member can be of any kind, and be named But its takes more memory than some specialised ones This class allows one name for the instanceThis select member can be of any kind, and be named But its takes more memory than some specialised ones This class allows one name for the instance)#");
    py::class_<StepData_SelectReal ,opencascade::handle<StepData_SelectReal> , StepData_SelectMember>(m,"StepData_SelectReal",R"#(A SelectReal is a SelectMember specialised for a basic real type in a select which also accepts entities : this one has NO NAME For a named select, see SelectNamedA SelectReal is a SelectMember specialised for a basic real type in a select which also accepts entities : this one has NO NAME For a named select, see SelectNamedA SelectReal is a SelectMember specialised for a basic real type in a select which also accepts entities : this one has NO NAME For a named select, see SelectNamed)#");
    py::class_<StepData_Simple ,opencascade::handle<StepData_Simple> , StepData_Described>(m,"StepData_Simple",R"#(A Simple Entity is defined by a type (which can heve super types) and a list of parametersA Simple Entity is defined by a type (which can heve super types) and a list of parametersA Simple Entity is defined by a type (which can heve super types) and a list of parameters)#");
    py::class_<StepData_SelectArrReal ,opencascade::handle<StepData_SelectArrReal> , StepData_SelectNamed>(m,"StepData_SelectArrReal",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post

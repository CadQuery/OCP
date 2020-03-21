
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NoSuchObject.hxx>
#include <TCollection_AsciiString.hxx>
#include <StepData_EDescr.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_Simple.hxx>
#include <StepData_Field.hxx>
#include <Interface_Check.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <StepData_EDescr.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_ECDescr.hxx>
#include <StepData_PDescr.hxx>
#include <Interface_Check.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_Field.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_FieldList.hxx>
#include <StepData_SelectType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_GlobalNodeOfWriterLib.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_WriterLib.hxx>
#include <Standard_OutOfRange.hxx>
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
#include <StepData_ESDescr.hxx>
#include <Interface_Check.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_Described.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_UndefinedContent.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_FileReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_EDescr.hxx>
#include <StepData_Field.hxx>
#include <Interface_Check.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_Described.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Check.hxx>
#include <Message_Messenger.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_WriterLib.hxx>
#include <StepData_NodeOfWriterLib.hxx>
#include <StepData_StepModel.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_WriterLib.hxx>
#include <StepData_Field.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_FieldList.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_FileRecognizer.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_Protocol.hxx>
#include <Interface_Check.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Standard_OutOfRange.hxx>
#include <StepData_Field.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepModel.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_Protocol.hxx>
#include <Message_Messenger.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <StepData_NodeOfWriterLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_GlobalNodeOfWriterLib.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Check.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_ECDescr.hxx>
#include <StepData_Simple.hxx>
#include <StepData_Field.hxx>
#include <Interface_Check.hxx>
#include <Interface_EntityIterator.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_Described.hxx>
#include <StepData_SelectMember.hxx>

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
void register_StepData(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepData"));


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

// classes

    // default constructor
    register_default_constructor<StepData , shared_ptr<StepData>>(m,"StepData");

    static_cast<py::class_<StepData , shared_ptr<StepData> >>(m.attr("StepData"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HeaderProtocol_s",
                    (opencascade::handle<StepData_Protocol> (*)() ) static_cast<opencascade::handle<StepData_Protocol> (*)() >(&StepData::HeaderProtocol),
                    R"#(Returns the recorded HeaderProtocol, which can be : - a Null Handle if no Header Protocol was yet defined - a simple Protocol if only one was defined - a FileProtocol if more than one Protocol was yet defined)#" )
        .def_static("AddHeaderProtocol_s",
                    (void (*)( const opencascade::handle<StepData_Protocol> & ) ) static_cast<void (*)( const opencascade::handle<StepData_Protocol> & ) >(&StepData::AddHeaderProtocol),
                    R"#(Adds a new Header Protocol to the Header Definition)#"  , py::arg("headerproto"))
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&StepData::Init),
                    R"#(Prepares General Data required to work with this package, which are the Protocol and Modules to be loaded into Libraries)#" )
        .def_static("Protocol_s",
                    (opencascade::handle<StepData_Protocol> (*)() ) static_cast<opencascade::handle<StepData_Protocol> (*)() >(&StepData::Protocol),
                    R"#(Returns a Protocol from StepData (avoids to create it))#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_Described ,opencascade::handle<StepData_Described>,Py_StepData_Described , Standard_Transient>>(m.attr("StepData_Described"))
    // constructors
    // custom constructors
    // methods
        .def("Description",
             (opencascade::handle<StepData_EDescr> (StepData_Described::*)() const) static_cast<opencascade::handle<StepData_EDescr> (StepData_Described::*)() const>(&StepData_Described::Description),
             R"#(Returns the Description used to define this entity)#" )
        .def("IsComplex",
             (Standard_Boolean (StepData_Described::*)() const) static_cast<Standard_Boolean (StepData_Described::*)() const>(&StepData_Described::IsComplex),
             R"#(Tells if a described entity is complex)#" )
        .def("Matches",
             (Standard_Boolean (StepData_Described::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepData_Described::*)( const Standard_CString ) const>(&StepData_Described::Matches),
             R"#(Tells if a step type is matched by <me> For a Simple Entity : own type or super type For a Complex Entity : one of the members)#"  , py::arg("steptype"))
        .def("As",
             (opencascade::handle<StepData_Simple> (StepData_Described::*)( const Standard_CString ) const) static_cast<opencascade::handle<StepData_Simple> (StepData_Described::*)( const Standard_CString ) const>(&StepData_Described::As),
             R"#(Returns a Simple Entity which matches with a Type in <me> : For a Simple Entity : me if it matches, else a null handle For a Complex Entity : the member which matches, else null)#"  , py::arg("steptype"))
        .def("HasField",
             (Standard_Boolean (StepData_Described::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepData_Described::*)( const Standard_CString ) const>(&StepData_Described::HasField),
             R"#(Tells if a Field brings a given name)#"  , py::arg("name"))
        .def("Field",
             (const StepData_Field & (StepData_Described::*)( const Standard_CString ) const) static_cast<const StepData_Field & (StepData_Described::*)( const Standard_CString ) const>(&StepData_Described::Field),
             R"#(Returns a Field from its name; read-only)#"  , py::arg("name"))
        .def("CField",
             (StepData_Field & (StepData_Described::*)( const Standard_CString ) ) static_cast<StepData_Field & (StepData_Described::*)( const Standard_CString ) >(&StepData_Described::CField),
             R"#(Returns a Field from its name; read or write)#"  , py::arg("name"))
        .def("Check",
             (void (StepData_Described::*)( opencascade::handle<Interface_Check> & ) const) static_cast<void (StepData_Described::*)( opencascade::handle<Interface_Check> & ) const>(&StepData_Described::Check),
             R"#(Fills a Check by using its Description)#"  , py::arg("ach"))
        .def("Shared",
             (void (StepData_Described::*)( Interface_EntityIterator & ) const) static_cast<void (StepData_Described::*)( Interface_EntityIterator & ) const>(&StepData_Described::Shared),
             R"#(Fills an EntityIterator with entities shared by <me>)#"  , py::arg("list"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_Described::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_Described::*)() const>(&StepData_Described::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_Described::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_Described::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_EDescr ,opencascade::handle<StepData_EDescr>,Py_StepData_EDescr , Standard_Transient>>(m.attr("StepData_EDescr"))
    // constructors
    // custom constructors
    // methods
        .def("Matches",
             (Standard_Boolean (StepData_EDescr::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepData_EDescr::*)( const Standard_CString ) const>(&StepData_EDescr::Matches),
             R"#(Tells if a ESDescr matches a step type : exact or super type)#"  , py::arg("steptype"))
        .def("IsComplex",
             (Standard_Boolean (StepData_EDescr::*)() const) static_cast<Standard_Boolean (StepData_EDescr::*)() const>(&StepData_EDescr::IsComplex),
             R"#(Tells if a EDescr is complex (ECDescr) or simple (ESDescr))#" )
        .def("NewEntity",
             (opencascade::handle<StepData_Described> (StepData_EDescr::*)() const) static_cast<opencascade::handle<StepData_Described> (StepData_EDescr::*)() const>(&StepData_EDescr::NewEntity),
             R"#(Creates a described entity (i.e. a simple one))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_EDescr::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_EDescr::*)() const>(&StepData_EDescr::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_EDescr::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_EDescr::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_Field , shared_ptr<StepData_Field> >>(m.attr("StepData_Field"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const StepData_Field &,const Standard_Boolean >()  , py::arg("other"),  py::arg("copy")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("CopyFrom",
             (void (StepData_Field::*)( const StepData_Field & ) ) static_cast<void (StepData_Field::*)( const StepData_Field & ) >(&StepData_Field::CopyFrom),
             R"#(Gets the copy of the values of another field)#"  , py::arg("other"))
        .def("Clear",
             (void (StepData_Field::*)( const Standard_Integer ) ) static_cast<void (StepData_Field::*)( const Standard_Integer ) >(&StepData_Field::Clear),
             R"#(Clears the field, to set it as "no value defined" Just before SetList, predeclares it as "any" A Kind can be directly set here to declare a type)#"  , py::arg("kind")=static_cast<const Standard_Integer>(0))
        .def("SetDerived",
             (void (StepData_Field::*)() ) static_cast<void (StepData_Field::*)() >(&StepData_Field::SetDerived),
             R"#(Codes a Field as derived (no proper value))#" )
        .def("SetInt",
             (void (StepData_Field::*)( const Standard_Integer ) ) static_cast<void (StepData_Field::*)( const Standard_Integer ) >(&StepData_Field::SetInt),
             R"#(Directly sets the Integer value, if its Kind matches Integer, Boolean, Logical, or Enum (does not change Kind))#"  , py::arg("val"))
        .def("SetInteger",
             (void (StepData_Field::*)( const Standard_Integer ) ) static_cast<void (StepData_Field::*)( const Standard_Integer ) >(&StepData_Field::SetInteger),
             R"#(Sets an Integer value (before SetList* declares it as Integer))#"  , py::arg("val")=static_cast<const Standard_Integer>(0))
        .def("SetBoolean",
             (void (StepData_Field::*)( const Standard_Boolean ) ) static_cast<void (StepData_Field::*)( const Standard_Boolean ) >(&StepData_Field::SetBoolean),
             R"#(Sets a Boolean value (or predeclares a list as boolean))#"  , py::arg("val")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetLogical",
             (void (StepData_Field::*)( const StepData_Logical ) ) static_cast<void (StepData_Field::*)( const StepData_Logical ) >(&StepData_Field::SetLogical),
             R"#(Sets a Logical Value (or predeclares a list as logical))#"  , py::arg("val")=static_cast<const StepData_Logical>(StepData_LFalse))
        .def("SetReal",
             (void (StepData_Field::*)( const Standard_Real ) ) static_cast<void (StepData_Field::*)( const Standard_Real ) >(&StepData_Field::SetReal),
             R"#(Sets a Real Value (or predeclares a list as Real);)#"  , py::arg("val")=static_cast<const Standard_Real>(0.0))
        .def("SetString",
             (void (StepData_Field::*)( const Standard_CString ) ) static_cast<void (StepData_Field::*)( const Standard_CString ) >(&StepData_Field::SetString),
             R"#(Sets a String Value (or predeclares a list as String) Does not redefine the Kind if it is alread String or Enum)#"  , py::arg("val")=static_cast<const Standard_CString>(""))
        .def("SetEnum",
             (void (StepData_Field::*)( const Standard_Integer , const Standard_CString ) ) static_cast<void (StepData_Field::*)( const Standard_Integer , const Standard_CString ) >(&StepData_Field::SetEnum),
             R"#(Sets an Enum Value (as its integer counterpart) (or predeclares a list as Enum) If <text> is given , also sets its textual expression <val> negative means unknown (known values begin at 0))#"  , py::arg("val")=static_cast<const Standard_Integer>(- 1),  py::arg("text")=static_cast<const Standard_CString>(""))
        .def("SetSelectMember",
             (void (StepData_Field::*)( const opencascade::handle<StepData_SelectMember> & ) ) static_cast<void (StepData_Field::*)( const opencascade::handle<StepData_SelectMember> & ) >(&StepData_Field::SetSelectMember),
             R"#(Sets a SelectMember (for Integer,Boolean,Enum,Real,Logical) Hence, the value of the field is accessed through this member)#"  , py::arg("val"))
        .def("SetEntity",
             (void (StepData_Field::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (StepData_Field::*)( const opencascade::handle<Standard_Transient> & ) >(&StepData_Field::SetEntity),
             R"#(Sets an Entity Value)#"  , py::arg("val"))
        .def("SetEntity",
             (void (StepData_Field::*)() ) static_cast<void (StepData_Field::*)() >(&StepData_Field::SetEntity),
             R"#(Predeclares a list as of entity)#" )
        .def("SetList",
             (void (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) >(&StepData_Field::SetList),
             R"#(Declares a field as a list, with an initial size Initial lower is defaulted as 1, can be defined The list starts empty, typed by the last Set* If no Set* before, sets it as "any" (transient/select))#"  , py::arg("size"),  py::arg("first")=static_cast<const Standard_Integer>(1))
        .def("SetList2",
             (void (StepData_Field::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<void (StepData_Field::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&StepData_Field::SetList2),
             R"#(Declares a field as an homogeneous square list, with initial sizes, and initial lowers)#"  , py::arg("siz1"),  py::arg("siz2"),  py::arg("f1")=static_cast<const Standard_Integer>(1),  py::arg("f2")=static_cast<const Standard_Integer>(1))
        .def("Set",
             (void (StepData_Field::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (StepData_Field::*)( const opencascade::handle<Standard_Transient> & ) >(&StepData_Field::Set),
             R"#(Sets an undetermined value : can be String, SelectMember, HArray(1-2) ... else, an Entity In case of an HArray, determines and records its size(s))#"  , py::arg("val"))
        .def("ClearItem",
             (void (StepData_Field::*)( const Standard_Integer ) ) static_cast<void (StepData_Field::*)( const Standard_Integer ) >(&StepData_Field::ClearItem),
             R"#(Declares an item of the list as undefined (ignored if list not defined as String,Entity or Any))#"  , py::arg("num"))
        .def("SetInt",
             (void (StepData_Field::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<void (StepData_Field::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&StepData_Field::SetInt),
             R"#(Internal access to an Integer Value for a list, plus its kind)#"  , py::arg("num"),  py::arg("val"),  py::arg("kind"))
        .def("SetInteger",
             (void (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) >(&StepData_Field::SetInteger),
             R"#(Sets an Integer Value for a list (rank num) (recognizes a SelectMember))#"  , py::arg("num"),  py::arg("val"))
        .def("SetBoolean",
             (void (StepData_Field::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (StepData_Field::*)( const Standard_Integer , const Standard_Boolean ) >(&StepData_Field::SetBoolean),
             R"#(None)#"  , py::arg("num"),  py::arg("val"))
        .def("SetLogical",
             (void (StepData_Field::*)( const Standard_Integer , const StepData_Logical ) ) static_cast<void (StepData_Field::*)( const Standard_Integer , const StepData_Logical ) >(&StepData_Field::SetLogical),
             R"#(None)#"  , py::arg("num"),  py::arg("val"))
        .def("SetEnum",
             (void (StepData_Field::*)( const Standard_Integer , const Standard_Integer , const Standard_CString ) ) static_cast<void (StepData_Field::*)( const Standard_Integer , const Standard_Integer , const Standard_CString ) >(&StepData_Field::SetEnum),
             R"#(Sets an Enum Value (Integer counterpart), also its text expression if known (if list has been set as "any"))#"  , py::arg("num"),  py::arg("val"),  py::arg("text")=static_cast<const Standard_CString>(""))
        .def("SetReal",
             (void (StepData_Field::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (StepData_Field::*)( const Standard_Integer , const Standard_Real ) >(&StepData_Field::SetReal),
             R"#(None)#"  , py::arg("num"),  py::arg("val"))
        .def("SetString",
             (void (StepData_Field::*)( const Standard_Integer , const Standard_CString ) ) static_cast<void (StepData_Field::*)( const Standard_Integer , const Standard_CString ) >(&StepData_Field::SetString),
             R"#(None)#"  , py::arg("num"),  py::arg("val"))
        .def("SetEntity",
             (void (StepData_Field::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (StepData_Field::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) >(&StepData_Field::SetEntity),
             R"#(None)#"  , py::arg("num"),  py::arg("val"))
        .def("IsSet",
             (Standard_Boolean (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Boolean (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const>(&StepData_Field::IsSet),
             R"#(None)#"  , py::arg("n1")=static_cast<const Standard_Integer>(1),  py::arg("n2")=static_cast<const Standard_Integer>(1))
        .def("ItemKind",
             (Standard_Integer (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const>(&StepData_Field::ItemKind),
             R"#(Returns the kind of an item in a list or double list It is the kind of the list, except if it is "Any", in such a case the true kind is determined and returned)#"  , py::arg("n1")=static_cast<const Standard_Integer>(1),  py::arg("n2")=static_cast<const Standard_Integer>(1))
        .def("Kind",
             (Standard_Integer (StepData_Field::*)( const Standard_Boolean ) const) static_cast<Standard_Integer (StepData_Field::*)( const Standard_Boolean ) const>(&StepData_Field::Kind),
             R"#(Returns the kind of the field <type> True (D) : returns only the type itself else, returns the complete kind)#"  , py::arg("type")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Arity",
             (Standard_Integer (StepData_Field::*)() const) static_cast<Standard_Integer (StepData_Field::*)() const>(&StepData_Field::Arity),
             R"#(None)#" )
        .def("Length",
             (Standard_Integer (StepData_Field::*)( const Standard_Integer ) const) static_cast<Standard_Integer (StepData_Field::*)( const Standard_Integer ) const>(&StepData_Field::Length),
             R"#(None)#"  , py::arg("index")=static_cast<const Standard_Integer>(1))
        .def("Lower",
             (Standard_Integer (StepData_Field::*)( const Standard_Integer ) const) static_cast<Standard_Integer (StepData_Field::*)( const Standard_Integer ) const>(&StepData_Field::Lower),
             R"#(None)#"  , py::arg("index")=static_cast<const Standard_Integer>(1))
        .def("Int",
             (Standard_Integer (StepData_Field::*)() const) static_cast<Standard_Integer (StepData_Field::*)() const>(&StepData_Field::Int),
             R"#(None)#" )
        .def("Integer",
             (Standard_Integer (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const>(&StepData_Field::Integer),
             R"#(None)#"  , py::arg("n1")=static_cast<const Standard_Integer>(1),  py::arg("n2")=static_cast<const Standard_Integer>(1))
        .def("Boolean",
             (Standard_Boolean (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Boolean (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const>(&StepData_Field::Boolean),
             R"#(None)#"  , py::arg("n1")=static_cast<const Standard_Integer>(1),  py::arg("n2")=static_cast<const Standard_Integer>(1))
        .def("Logical",
             (StepData_Logical (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<StepData_Logical (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const>(&StepData_Field::Logical),
             R"#(None)#"  , py::arg("n1")=static_cast<const Standard_Integer>(1),  py::arg("n2")=static_cast<const Standard_Integer>(1))
        .def("Real",
             (Standard_Real (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const>(&StepData_Field::Real),
             R"#(None)#"  , py::arg("n1")=static_cast<const Standard_Integer>(1),  py::arg("n2")=static_cast<const Standard_Integer>(1))
        .def("String",
             (Standard_CString (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_CString (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const>(&StepData_Field::String),
             R"#(None)#"  , py::arg("n1")=static_cast<const Standard_Integer>(1),  py::arg("n2")=static_cast<const Standard_Integer>(1))
        .def("Enum",
             (Standard_Integer (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const>(&StepData_Field::Enum),
             R"#(None)#"  , py::arg("n1")=static_cast<const Standard_Integer>(1),  py::arg("n2")=static_cast<const Standard_Integer>(1))
        .def("EnumText",
             (Standard_CString (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_CString (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const>(&StepData_Field::EnumText),
             R"#(None)#"  , py::arg("n1")=static_cast<const Standard_Integer>(1),  py::arg("n2")=static_cast<const Standard_Integer>(1))
        .def("Entity",
             (opencascade::handle<Standard_Transient> (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<Standard_Transient> (StepData_Field::*)( const Standard_Integer , const Standard_Integer ) const>(&StepData_Field::Entity),
             R"#(None)#"  , py::arg("n1")=static_cast<const Standard_Integer>(1),  py::arg("n2")=static_cast<const Standard_Integer>(1))
        .def("Transient",
             (opencascade::handle<Standard_Transient> (StepData_Field::*)() const) static_cast<opencascade::handle<Standard_Transient> (StepData_Field::*)() const>(&StepData_Field::Transient),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_FieldList , shared_ptr<StepData_FieldList> >>(m.attr("StepData_FieldList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("NbFields",
             (Standard_Integer (StepData_FieldList::*)() const) static_cast<Standard_Integer (StepData_FieldList::*)() const>(&StepData_FieldList::NbFields),
             R"#(Returns the count of fields. Here, returns 0)#" )
        .def("Field",
             (const StepData_Field & (StepData_FieldList::*)( const Standard_Integer ) const) static_cast<const StepData_Field & (StepData_FieldList::*)( const Standard_Integer ) const>(&StepData_FieldList::Field),
             R"#(Returns the field n0 <num> between 1 and NbFields (read only))#"  , py::arg("num"))
        .def("CField",
             (StepData_Field & (StepData_FieldList::*)( const Standard_Integer ) ) static_cast<StepData_Field & (StepData_FieldList::*)( const Standard_Integer ) >(&StepData_FieldList::CField),
             R"#(Returns the field n0 <num> between 1 and NbFields, in order to modify its content)#"  , py::arg("num"))
        .def("FillShared",
             (void (StepData_FieldList::*)( Interface_EntityIterator & ) const) static_cast<void (StepData_FieldList::*)( Interface_EntityIterator & ) const>(&StepData_FieldList::FillShared),
             R"#(Fills an iterator with the entities shared by <me>)#"  , py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_FileRecognizer ,opencascade::handle<StepData_FileRecognizer>,Py_StepData_FileRecognizer , Standard_Transient>>(m.attr("StepData_FileRecognizer"))
    // constructors
    // custom constructors
    // methods
        .def("Evaluate",
             (Standard_Boolean (StepData_FileRecognizer::*)( const TCollection_AsciiString & , opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (StepData_FileRecognizer::*)( const TCollection_AsciiString & , opencascade::handle<Standard_Transient> & ) >(&StepData_FileRecognizer::Evaluate),
             R"#(Evaluates if recognition has a result, returns it if yes In case of success, Returns True and puts result in "res" In case of Failure, simply Returns False Works by calling deferred method Eval, and in case of failure, looks for Added Recognizers to work)#"  , py::arg("akey"),  py::arg("res"))
        .def("Result",
             (opencascade::handle<Standard_Transient> (StepData_FileRecognizer::*)() const) static_cast<opencascade::handle<Standard_Transient> (StepData_FileRecognizer::*)() const>(&StepData_FileRecognizer::Result),
             R"#(Returns result of last recognition (call of Evaluate))#" )
        .def("Add",
             (void (StepData_FileRecognizer::*)( const opencascade::handle<StepData_FileRecognizer> & ) ) static_cast<void (StepData_FileRecognizer::*)( const opencascade::handle<StepData_FileRecognizer> & ) >(&StepData_FileRecognizer::Add),
             R"#(Adds a new Recognizer to the Compound, at the end Several calls to Add work by adding in the order of calls : Hence, when Eval has failed to recognize, Evaluate will call Evaluate from the first added Recognizer if there is one, and to the second if there is still no result, and so on)#"  , py::arg("reco"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_FileRecognizer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_FileRecognizer::*)() const>(&StepData_FileRecognizer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_FileRecognizer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_FileRecognizer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_FreeFormEntity ,opencascade::handle<StepData_FreeFormEntity> , Standard_Transient>>(m.attr("StepData_FreeFormEntity"))
    // constructors
    // custom constructors
    // methods
        .def("SetStepType",
             (void (StepData_FreeFormEntity::*)( const Standard_CString ) ) static_cast<void (StepData_FreeFormEntity::*)( const Standard_CString ) >(&StepData_FreeFormEntity::SetStepType),
             R"#(Sets the type of an entity For a complex one, the type of this member)#"  , py::arg("typenam"))
        .def("StepType",
             (Standard_CString (StepData_FreeFormEntity::*)() const) static_cast<Standard_CString (StepData_FreeFormEntity::*)() const>(&StepData_FreeFormEntity::StepType),
             R"#(Returns the recorded StepType For a complex one, the type of this member)#" )
        .def("SetNext",
             (void (StepData_FreeFormEntity::*)( const opencascade::handle<StepData_FreeFormEntity> & , const Standard_Boolean ) ) static_cast<void (StepData_FreeFormEntity::*)( const opencascade::handle<StepData_FreeFormEntity> & , const Standard_Boolean ) >(&StepData_FreeFormEntity::SetNext),
             R"#(Sets a next member, in order to define or complete a Complex entity If <last> is True (D), this next will be set as last of list Else, it is inserted just as next of <me> If <next> is Null, Next is cleared)#"  , py::arg("next"),  py::arg("last")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Next",
             (opencascade::handle<StepData_FreeFormEntity> (StepData_FreeFormEntity::*)() const) static_cast<opencascade::handle<StepData_FreeFormEntity> (StepData_FreeFormEntity::*)() const>(&StepData_FreeFormEntity::Next),
             R"#(Returns the next member of a Complex entity (remark : the last member has none))#" )
        .def("IsComplex",
             (Standard_Boolean (StepData_FreeFormEntity::*)() const) static_cast<Standard_Boolean (StepData_FreeFormEntity::*)() const>(&StepData_FreeFormEntity::IsComplex),
             R"#(Returns True if a FreeFormEntity is Complex (i.e. has Next))#" )
        .def("Typed",
             (opencascade::handle<StepData_FreeFormEntity> (StepData_FreeFormEntity::*)( const Standard_CString ) const) static_cast<opencascade::handle<StepData_FreeFormEntity> (StepData_FreeFormEntity::*)( const Standard_CString ) const>(&StepData_FreeFormEntity::Typed),
             R"#(Returns the member of a FreeFormEntity of which the type name is given (exact match, no sub-type))#"  , py::arg("typenam"))
        .def("TypeList",
             (opencascade::handle<TColStd_HSequenceOfAsciiString> (StepData_FreeFormEntity::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfAsciiString> (StepData_FreeFormEntity::*)() const>(&StepData_FreeFormEntity::TypeList),
             R"#(Returns the list of types (one type for a simple entity), as is (non reordered))#" )
        .def("SetNbFields",
             (void (StepData_FreeFormEntity::*)( const Standard_Integer ) ) static_cast<void (StepData_FreeFormEntity::*)( const Standard_Integer ) >(&StepData_FreeFormEntity::SetNbFields),
             R"#(Sets a count of Fields, from scratch)#"  , py::arg("nb"))
        .def("NbFields",
             (Standard_Integer (StepData_FreeFormEntity::*)() const) static_cast<Standard_Integer (StepData_FreeFormEntity::*)() const>(&StepData_FreeFormEntity::NbFields),
             R"#(Returns the count of fields)#" )
        .def("Field",
             (const StepData_Field & (StepData_FreeFormEntity::*)( const Standard_Integer ) const) static_cast<const StepData_Field & (StepData_FreeFormEntity::*)( const Standard_Integer ) const>(&StepData_FreeFormEntity::Field),
             R"#(Returns a field from its rank, for read-only use)#"  , py::arg("num"))
        .def("CField",
             (StepData_Field & (StepData_FreeFormEntity::*)( const Standard_Integer ) ) static_cast<StepData_Field & (StepData_FreeFormEntity::*)( const Standard_Integer ) >(&StepData_FreeFormEntity::CField),
             R"#(Returns a field from its rank, in order to modify it)#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_FreeFormEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_FreeFormEntity::*)() const>(&StepData_FreeFormEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Reorder_s",
                    (Standard_Boolean (*)( opencascade::handle<StepData_FreeFormEntity> & ) ) static_cast<Standard_Boolean (*)( opencascade::handle<StepData_FreeFormEntity> & ) >(&StepData_FreeFormEntity::Reorder),
                    R"#(Reorders a Complex entity if required, i.e. if member types are not in alphabetic order Returns False if nothing done (order was OK or simple entity), True plus modified <ent> if <ent> has been reordered)#"  , py::arg("ent"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_FreeFormEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_FreeFormEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_GeneralModule ,opencascade::handle<StepData_GeneralModule>,Py_StepData_GeneralModule , Interface_GeneralModule>>(m.attr("StepData_GeneralModule"))
    // constructors
    // custom constructors
    // methods
        .def("FillSharedCase",
             (void (StepData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const) static_cast<void (StepData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const>(&StepData_GeneralModule::FillSharedCase),
             R"#(Specific filling of the list of Entities shared by an Entity <ent>. Can use the internal utility method Share, below)#"  , py::arg("casenum"),  py::arg("ent"),  py::arg("iter"))
        .def("CheckCase",
             (void (StepData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (StepData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&StepData_GeneralModule::CheckCase),
             R"#(Specific Checking of an Entity <ent>)#"  , py::arg("casenum"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("CopyCase",
             (void (StepData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const) static_cast<void (StepData_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const>(&StepData_GeneralModule::CopyCase),
             R"#(Specific Copy ("Deep") from <entfrom> to <entto> (same type) by using a TransferControl which provides its working Map. Use method Transferred from TransferControl to work Specific Copying of Implied References A Default is provided which does nothing (must current case !) Already copied references (by CopyFrom) must remain unchanged Use method Search from TransferControl to work)#"  , py::arg("casenum"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_GeneralModule::*)() const>(&StepData_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_GeneralModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_GeneralModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_GlobalNodeOfWriterLib ,opencascade::handle<StepData_GlobalNodeOfWriterLib> , Standard_Transient>>(m.attr("StepData_GlobalNodeOfWriterLib"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Add",
             (void (StepData_GlobalNodeOfWriterLib::*)( const opencascade::handle<StepData_ReadWriteModule> & , const opencascade::handle<StepData_Protocol> & ) ) static_cast<void (StepData_GlobalNodeOfWriterLib::*)( const opencascade::handle<StepData_ReadWriteModule> & , const opencascade::handle<StepData_Protocol> & ) >(&StepData_GlobalNodeOfWriterLib::Add),
             R"#(Adds a Module bound with a Protocol to the list : does nothing if already in the list, THAT IS, Same Type (exact match) and Same State (that is, IsEqual is not required) Once added, stores its attached Protocol in correspondance)#"  , py::arg("amodule"),  py::arg("aprotocol"))
        .def("Module",
             (const opencascade::handle<StepData_ReadWriteModule> & (StepData_GlobalNodeOfWriterLib::*)() const) static_cast<const opencascade::handle<StepData_ReadWriteModule> & (StepData_GlobalNodeOfWriterLib::*)() const>(&StepData_GlobalNodeOfWriterLib::Module),
             R"#(Returns the Module stored in a given GlobalNode)#" )
        .def("Protocol",
             (const opencascade::handle<StepData_Protocol> & (StepData_GlobalNodeOfWriterLib::*)() const) static_cast<const opencascade::handle<StepData_Protocol> & (StepData_GlobalNodeOfWriterLib::*)() const>(&StepData_GlobalNodeOfWriterLib::Protocol),
             R"#(Returns the attached Protocol stored in a given GlobalNode)#" )
        .def("Next",
             (const opencascade::handle<StepData_GlobalNodeOfWriterLib> & (StepData_GlobalNodeOfWriterLib::*)() const) static_cast<const opencascade::handle<StepData_GlobalNodeOfWriterLib> & (StepData_GlobalNodeOfWriterLib::*)() const>(&StepData_GlobalNodeOfWriterLib::Next),
             R"#(Returns the Next GlobalNode. If none is defined, returned value is a Null Handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_GlobalNodeOfWriterLib::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_GlobalNodeOfWriterLib::*)() const>(&StepData_GlobalNodeOfWriterLib::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_GlobalNodeOfWriterLib::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_GlobalNodeOfWriterLib::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_HArray1OfField ,opencascade::handle<StepData_HArray1OfField> , StepData_Array1OfField, Standard_Transient>>(m.attr("StepData_HArray1OfField"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepData_Field & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepData_Field> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepData_Array1OfField & (StepData_HArray1OfField::*)() const) static_cast<const StepData_Array1OfField & (StepData_HArray1OfField::*)() const>(&StepData_HArray1OfField::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepData_Array1OfField & (StepData_HArray1OfField::*)() ) static_cast<StepData_Array1OfField & (StepData_HArray1OfField::*)() >(&StepData_HArray1OfField::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_HArray1OfField::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_HArray1OfField::*)() const>(&StepData_HArray1OfField::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_HArray1OfField::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_HArray1OfField::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_NodeOfWriterLib ,opencascade::handle<StepData_NodeOfWriterLib> , Standard_Transient>>(m.attr("StepData_NodeOfWriterLib"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddNode",
             (void (StepData_NodeOfWriterLib::*)( const opencascade::handle<StepData_GlobalNodeOfWriterLib> & ) ) static_cast<void (StepData_NodeOfWriterLib::*)( const opencascade::handle<StepData_GlobalNodeOfWriterLib> & ) >(&StepData_NodeOfWriterLib::AddNode),
             R"#(Adds a couple (Module,Protocol), that is, stores it into itself if not yet done, else creates a Next Node to do it)#"  , py::arg("anode"))
        .def("Module",
             (const opencascade::handle<StepData_ReadWriteModule> & (StepData_NodeOfWriterLib::*)() const) static_cast<const opencascade::handle<StepData_ReadWriteModule> & (StepData_NodeOfWriterLib::*)() const>(&StepData_NodeOfWriterLib::Module),
             R"#(Returns the Module designated by a precise Node)#" )
        .def("Protocol",
             (const opencascade::handle<StepData_Protocol> & (StepData_NodeOfWriterLib::*)() const) static_cast<const opencascade::handle<StepData_Protocol> & (StepData_NodeOfWriterLib::*)() const>(&StepData_NodeOfWriterLib::Protocol),
             R"#(Returns the Protocol designated by a precise Node)#" )
        .def("Next",
             (const opencascade::handle<StepData_NodeOfWriterLib> & (StepData_NodeOfWriterLib::*)() const) static_cast<const opencascade::handle<StepData_NodeOfWriterLib> & (StepData_NodeOfWriterLib::*)() const>(&StepData_NodeOfWriterLib::Next),
             R"#(Returns the Next Node. If none was defined, returned value is a Null Handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_NodeOfWriterLib::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_NodeOfWriterLib::*)() const>(&StepData_NodeOfWriterLib::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_NodeOfWriterLib::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_NodeOfWriterLib::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_PDescr ,opencascade::handle<StepData_PDescr> , Standard_Transient>>(m.attr("StepData_PDescr"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetName",
             (void (StepData_PDescr::*)( const Standard_CString ) ) static_cast<void (StepData_PDescr::*)( const Standard_CString ) >(&StepData_PDescr::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("Name",
             (Standard_CString (StepData_PDescr::*)() const) static_cast<Standard_CString (StepData_PDescr::*)() const>(&StepData_PDescr::Name),
             R"#(None)#" )
        .def("SetSelect",
             (void (StepData_PDescr::*)() ) static_cast<void (StepData_PDescr::*)() >(&StepData_PDescr::SetSelect),
             R"#(Declares this PDescr to be a Select, hence to have members <me> itself can be the first member)#" )
        .def("AddMember",
             (void (StepData_PDescr::*)( const opencascade::handle<StepData_PDescr> & ) ) static_cast<void (StepData_PDescr::*)( const opencascade::handle<StepData_PDescr> & ) >(&StepData_PDescr::AddMember),
             R"#(Adds a member to a SELECT description)#"  , py::arg("member"))
        .def("SetMemberName",
             (void (StepData_PDescr::*)( const Standard_CString ) ) static_cast<void (StepData_PDescr::*)( const Standard_CString ) >(&StepData_PDescr::SetMemberName),
             R"#(Sets a name for SELECT member. To be used if a member is for an immediate type)#"  , py::arg("memname"))
        .def("SetInteger",
             (void (StepData_PDescr::*)() ) static_cast<void (StepData_PDescr::*)() >(&StepData_PDescr::SetInteger),
             R"#(Sets <me> for an Integer value)#" )
        .def("SetReal",
             (void (StepData_PDescr::*)() ) static_cast<void (StepData_PDescr::*)() >(&StepData_PDescr::SetReal),
             R"#(Sets <me> for a Real value)#" )
        .def("SetString",
             (void (StepData_PDescr::*)() ) static_cast<void (StepData_PDescr::*)() >(&StepData_PDescr::SetString),
             R"#(Sets <me> for a String value)#" )
        .def("SetBoolean",
             (void (StepData_PDescr::*)() ) static_cast<void (StepData_PDescr::*)() >(&StepData_PDescr::SetBoolean),
             R"#(Sets <me> for a Boolean value (false,true))#" )
        .def("SetLogical",
             (void (StepData_PDescr::*)() ) static_cast<void (StepData_PDescr::*)() >(&StepData_PDescr::SetLogical),
             R"#(Sets <me> for a Logical value (false,true,unknown))#" )
        .def("SetEnum",
             (void (StepData_PDescr::*)() ) static_cast<void (StepData_PDescr::*)() >(&StepData_PDescr::SetEnum),
             R"#(Sets <me> for an Enum value Then, call AddEnumDef ordered from the first one (value 0))#" )
        .def("AddEnumDef",
             (void (StepData_PDescr::*)( const Standard_CString ) ) static_cast<void (StepData_PDescr::*)( const Standard_CString ) >(&StepData_PDescr::AddEnumDef),
             R"#(Adds an enum value as a string)#"  , py::arg("enumdef"))
        .def("SetType",
             (void (StepData_PDescr::*)( const opencascade::handle<Standard_Type> & ) ) static_cast<void (StepData_PDescr::*)( const opencascade::handle<Standard_Type> & ) >(&StepData_PDescr::SetType),
             R"#(Sets <me> for an Entity which must match a Type (early-bound))#"  , py::arg("atype"))
        .def("SetDescr",
             (void (StepData_PDescr::*)( const Standard_CString ) ) static_cast<void (StepData_PDescr::*)( const Standard_CString ) >(&StepData_PDescr::SetDescr),
             R"#(Sets <me> for a Described Entity, whose Description must match the type name <dscnam>)#"  , py::arg("dscnam"))
        .def("AddArity",
             (void (StepData_PDescr::*)( const Standard_Integer ) ) static_cast<void (StepData_PDescr::*)( const Standard_Integer ) >(&StepData_PDescr::AddArity),
             R"#(Adds an arity count to <me>, by default 1 1 : a simple field passes to a LIST/ARRAY etc or a LIST to a LIST OF LIST 2 : a simple field passes to a LIST OF LIST)#"  , py::arg("arity")=static_cast<const Standard_Integer>(1))
        .def("SetArity",
             (void (StepData_PDescr::*)( const Standard_Integer ) ) static_cast<void (StepData_PDescr::*)( const Standard_Integer ) >(&StepData_PDescr::SetArity),
             R"#(Directly sets the arity count 0 : simple field 1 : LIST or ARRAY etc 2 : LIST OF LIST)#"  , py::arg("arity")=static_cast<const Standard_Integer>(1))
        .def("SetFrom",
             (void (StepData_PDescr::*)( const opencascade::handle<StepData_PDescr> & ) ) static_cast<void (StepData_PDescr::*)( const opencascade::handle<StepData_PDescr> & ) >(&StepData_PDescr::SetFrom),
             R"#(Sets <me> as <other> but duplicated Hence, some definition may be changed)#"  , py::arg("other"))
        .def("SetOptional",
             (void (StepData_PDescr::*)( const Standard_Boolean ) ) static_cast<void (StepData_PDescr::*)( const Standard_Boolean ) >(&StepData_PDescr::SetOptional),
             R"#(Sets/Unsets <me> to accept undefined values)#"  , py::arg("opt")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetDerived",
             (void (StepData_PDescr::*)( const Standard_Boolean ) ) static_cast<void (StepData_PDescr::*)( const Standard_Boolean ) >(&StepData_PDescr::SetDerived),
             R"#(Sets/Unsets <me> to be for a derived field)#"  , py::arg("der")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetField",
             (void (StepData_PDescr::*)( const Standard_CString , const Standard_Integer ) ) static_cast<void (StepData_PDescr::*)( const Standard_CString , const Standard_Integer ) >(&StepData_PDescr::SetField),
             R"#(Sets <me> to describe a field of an entity With a name and a rank)#"  , py::arg("name"),  py::arg("rank"))
        .def("IsSelect",
             (Standard_Boolean (StepData_PDescr::*)() const) static_cast<Standard_Boolean (StepData_PDescr::*)() const>(&StepData_PDescr::IsSelect),
             R"#(Tells if <me> is for a SELECT)#" )
        .def("Member",
             (opencascade::handle<StepData_PDescr> (StepData_PDescr::*)( const Standard_CString ) const) static_cast<opencascade::handle<StepData_PDescr> (StepData_PDescr::*)( const Standard_CString ) const>(&StepData_PDescr::Member),
             R"#(For a SELECT, returns the member whose name matches <name> To this member, the following question can then be asked Null Handle if <name> not matched or <me> not a SELECT)#"  , py::arg("name"))
        .def("IsInteger",
             (Standard_Boolean (StepData_PDescr::*)() const) static_cast<Standard_Boolean (StepData_PDescr::*)() const>(&StepData_PDescr::IsInteger),
             R"#(Tells if <me> is for an Integer)#" )
        .def("IsReal",
             (Standard_Boolean (StepData_PDescr::*)() const) static_cast<Standard_Boolean (StepData_PDescr::*)() const>(&StepData_PDescr::IsReal),
             R"#(Tells if <me> is for a Real value)#" )
        .def("IsString",
             (Standard_Boolean (StepData_PDescr::*)() const) static_cast<Standard_Boolean (StepData_PDescr::*)() const>(&StepData_PDescr::IsString),
             R"#(Tells if <me> is for a String value)#" )
        .def("IsBoolean",
             (Standard_Boolean (StepData_PDescr::*)() const) static_cast<Standard_Boolean (StepData_PDescr::*)() const>(&StepData_PDescr::IsBoolean),
             R"#(Tells if <me> is for a Boolean value (false,true))#" )
        .def("IsLogical",
             (Standard_Boolean (StepData_PDescr::*)() const) static_cast<Standard_Boolean (StepData_PDescr::*)() const>(&StepData_PDescr::IsLogical),
             R"#(Tells if <me> is for a Logical value (false,true,unknown))#" )
        .def("IsEnum",
             (Standard_Boolean (StepData_PDescr::*)() const) static_cast<Standard_Boolean (StepData_PDescr::*)() const>(&StepData_PDescr::IsEnum),
             R"#(Tells if <me> is for an Enum value Then, call AddEnumDef ordered from the first one (value 0) Managed by an EnumTool)#" )
        .def("EnumMax",
             (Standard_Integer (StepData_PDescr::*)() const) static_cast<Standard_Integer (StepData_PDescr::*)() const>(&StepData_PDescr::EnumMax),
             R"#(Returns the maximum integer for a suitable value (count - 1))#" )
        .def("EnumValue",
             (Standard_Integer (StepData_PDescr::*)( const Standard_CString ) const) static_cast<Standard_Integer (StepData_PDescr::*)( const Standard_CString ) const>(&StepData_PDescr::EnumValue),
             R"#(Returns the numeric value found for an enum text The text must be in capitals and limited by dots A non-suitable text gives a negative value to be returned)#"  , py::arg("name"))
        .def("EnumText",
             (Standard_CString (StepData_PDescr::*)( const Standard_Integer ) const) static_cast<Standard_CString (StepData_PDescr::*)( const Standard_Integer ) const>(&StepData_PDescr::EnumText),
             R"#(Returns the text which corresponds to a numeric value, between 0 and EnumMax. It is limited by dots)#"  , py::arg("val"))
        .def("IsEntity",
             (Standard_Boolean (StepData_PDescr::*)() const) static_cast<Standard_Boolean (StepData_PDescr::*)() const>(&StepData_PDescr::IsEntity),
             R"#(Tells if <me> is for an Entity, either Described or CDL Type)#" )
        .def("IsType",
             (Standard_Boolean (StepData_PDescr::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Boolean (StepData_PDescr::*)( const opencascade::handle<Standard_Type> & ) const>(&StepData_PDescr::IsType),
             R"#(Tells if <me> is for an entity of a given CDL type (early-bnd) (works for <me> + nexts if <me> is a Select))#"  , py::arg("atype"))
        .def("Type",
             (opencascade::handle<Standard_Type> (StepData_PDescr::*)() const) static_cast<opencascade::handle<Standard_Type> (StepData_PDescr::*)() const>(&StepData_PDescr::Type),
             R"#(Returns the type to match (IsKind), for a CDL Entity (else, null handle))#" )
        .def("IsDescr",
             (Standard_Boolean (StepData_PDescr::*)( const opencascade::handle<StepData_EDescr> & ) const) static_cast<Standard_Boolean (StepData_PDescr::*)( const opencascade::handle<StepData_EDescr> & ) const>(&StepData_PDescr::IsDescr),
             R"#(Tells if <me> is for a Described entity of a given EDescr (does this EDescr match description name ?). For late-bnd (works for <me> + nexts if <me> is a Select))#"  , py::arg("descr"))
        .def("DescrName",
             (Standard_CString (StepData_PDescr::*)() const) static_cast<Standard_CString (StepData_PDescr::*)() const>(&StepData_PDescr::DescrName),
             R"#(Returns the description (type name) to match, for a Described (else, empty string))#" )
        .def("Arity",
             (Standard_Integer (StepData_PDescr::*)() const) static_cast<Standard_Integer (StepData_PDescr::*)() const>(&StepData_PDescr::Arity),
             R"#(Returns the arity of <me>)#" )
        .def("Simple",
             (opencascade::handle<StepData_PDescr> (StepData_PDescr::*)() const) static_cast<opencascade::handle<StepData_PDescr> (StepData_PDescr::*)() const>(&StepData_PDescr::Simple),
             R"#(For a LIST or LIST OF LIST, Returns the PDescr for the simpler PDescr. Else, returns <me> This allows to have different attributes for Optional for instance, on a field, and on the parameter of a LIST : [OPTIONAL] LIST OF [OPTIONAL] ...)#" )
        .def("IsOptional",
             (Standard_Boolean (StepData_PDescr::*)() const) static_cast<Standard_Boolean (StepData_PDescr::*)() const>(&StepData_PDescr::IsOptional),
             R"#(Tells if <me> is Optional)#" )
        .def("IsDerived",
             (Standard_Boolean (StepData_PDescr::*)() const) static_cast<Standard_Boolean (StepData_PDescr::*)() const>(&StepData_PDescr::IsDerived),
             R"#(Tells if <me> is Derived)#" )
        .def("IsField",
             (Standard_Boolean (StepData_PDescr::*)() const) static_cast<Standard_Boolean (StepData_PDescr::*)() const>(&StepData_PDescr::IsField),
             R"#(Tells if <me> is a Field. Else it is a Type)#" )
        .def("FieldName",
             (Standard_CString (StepData_PDescr::*)() const) static_cast<Standard_CString (StepData_PDescr::*)() const>(&StepData_PDescr::FieldName),
             R"#(None)#" )
        .def("FieldRank",
             (Standard_Integer (StepData_PDescr::*)() const) static_cast<Standard_Integer (StepData_PDescr::*)() const>(&StepData_PDescr::FieldRank),
             R"#(None)#" )
        .def("Check",
             (void (StepData_PDescr::*)( const StepData_Field & , opencascade::handle<Interface_Check> & ) const) static_cast<void (StepData_PDescr::*)( const StepData_Field & , opencascade::handle<Interface_Check> & ) const>(&StepData_PDescr::Check),
             R"#(Semantic Check of a Field : does it complies with the given description ?)#"  , py::arg("afild"),  py::arg("ach"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_PDescr::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_PDescr::*)() const>(&StepData_PDescr::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_PDescr::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_PDescr::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_Protocol ,opencascade::handle<StepData_Protocol> , Interface_Protocol>>(m.attr("StepData_Protocol"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (StepData_Protocol::*)() const) static_cast<Standard_Integer (StepData_Protocol::*)() const>(&StepData_Protocol::NbResources),
             R"#(Gives the count of Protocols used as Resource (can be zero) Here, No resource)#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (StepData_Protocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_Protocol> (StepData_Protocol::*)( const Standard_Integer ) const>(&StepData_Protocol::Resource),
             R"#(Returns a Resource, given a rank. Here, none)#"  , py::arg("num"))
        .def("CaseNumber",
             (Standard_Integer (StepData_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepData_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepData_Protocol::CaseNumber),
             R"#(Returns a unique positive number for any recognized entity Redefined to work by calling both TypeNumber and, for a Described Entity (late binding) DescrNumber)#"  , py::arg("obj"))
        .def("TypeNumber",
             (Standard_Integer (StepData_Protocol::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (StepData_Protocol::*)( const opencascade::handle<Standard_Type> & ) const>(&StepData_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type Here, only Unknown Entity is recognized)#"  , py::arg("atype"))
        .def("SchemaName",
             (Standard_CString (StepData_Protocol::*)() const) static_cast<Standard_CString (StepData_Protocol::*)() const>(&StepData_Protocol::SchemaName),
             R"#(Returns the Schema Name attached to each class of Protocol To be redefined by each sub-class Here, SchemaName returns "(DEFAULT)" was C++ : return const)#" )
        .def("NewModel",
             (opencascade::handle<Interface_InterfaceModel> (StepData_Protocol::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (StepData_Protocol::*)() const>(&StepData_Protocol::NewModel),
             R"#(Creates an empty Model for Step Norm)#" )
        .def("IsSuitableModel",
             (Standard_Boolean (StepData_Protocol::*)( const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (StepData_Protocol::*)( const opencascade::handle<Interface_InterfaceModel> & ) const>(&StepData_Protocol::IsSuitableModel),
             R"#(Returns True if <model> is a Model of Step Norm)#"  , py::arg("model"))
        .def("UnknownEntity",
             (opencascade::handle<Standard_Transient> (StepData_Protocol::*)() const) static_cast<opencascade::handle<Standard_Transient> (StepData_Protocol::*)() const>(&StepData_Protocol::UnknownEntity),
             R"#(Creates a new Unknown Entity for Step (UndefinedEntity))#" )
        .def("IsUnknownEntity",
             (Standard_Boolean (StepData_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (StepData_Protocol::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepData_Protocol::IsUnknownEntity),
             R"#(Returns True if <ent> is an Unknown Entity for the Norm, i.e. Type UndefinedEntity, status Unknown)#"  , py::arg("ent"))
        .def("DescrNumber",
             (Standard_Integer (StepData_Protocol::*)( const opencascade::handle<StepData_EDescr> & ) const) static_cast<Standard_Integer (StepData_Protocol::*)( const opencascade::handle<StepData_EDescr> & ) const>(&StepData_Protocol::DescrNumber),
             R"#(Returns a unique positive CaseNumber for types described by an EDescr (late binding) Warning : TypeNumber and DescrNumber must give together a unique positive case number for each distinct case, type or descr)#"  , py::arg("adescr"))
        .def("AddDescr",
             (void (StepData_Protocol::*)( const opencascade::handle<StepData_EDescr> & , const Standard_Integer ) ) static_cast<void (StepData_Protocol::*)( const opencascade::handle<StepData_EDescr> & , const Standard_Integer ) >(&StepData_Protocol::AddDescr),
             R"#(Records an EDescr with its case number Also records its name for an ESDescr (simple type): an ESDescr is then used, for case number, or for type name)#"  , py::arg("adescr"),  py::arg("CN"))
        .def("HasDescr",
             (Standard_Boolean (StepData_Protocol::*)() const) static_cast<Standard_Boolean (StepData_Protocol::*)() const>(&StepData_Protocol::HasDescr),
             R"#(Tells if a Protocol brings at least one ESDescr, i.e. if it defines at least one entity description by ESDescr mechanism)#" )
        .def("Descr",
             (opencascade::handle<StepData_EDescr> (StepData_Protocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepData_EDescr> (StepData_Protocol::*)( const Standard_Integer ) const>(&StepData_Protocol::Descr),
             R"#(Returns the description attached to a case number, or null)#"  , py::arg("num"))
        .def("Descr",
             (opencascade::handle<StepData_EDescr> (StepData_Protocol::*)( const Standard_CString , const Standard_Boolean ) const) static_cast<opencascade::handle<StepData_EDescr> (StepData_Protocol::*)( const Standard_CString , const Standard_Boolean ) const>(&StepData_Protocol::Descr),
             R"#(Returns a description according to its name <anylevel> True (D) : for <me> and its resources <anylevel> False : for <me> only)#"  , py::arg("name"),  py::arg("anylevel")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ESDescr",
             (opencascade::handle<StepData_ESDescr> (StepData_Protocol::*)( const Standard_CString , const Standard_Boolean ) const) static_cast<opencascade::handle<StepData_ESDescr> (StepData_Protocol::*)( const Standard_CString , const Standard_Boolean ) const>(&StepData_Protocol::ESDescr),
             R"#(Idem as Descr but cast to simple description)#"  , py::arg("name"),  py::arg("anylevel")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ECDescr",
             (opencascade::handle<StepData_ECDescr> (StepData_Protocol::*)(  const NCollection_Sequence<TCollection_AsciiString> & , const Standard_Boolean ) const) static_cast<opencascade::handle<StepData_ECDescr> (StepData_Protocol::*)(  const NCollection_Sequence<TCollection_AsciiString> & , const Standard_Boolean ) const>(&StepData_Protocol::ECDescr),
             R"#(Returns a complex description according to list of names <anylevel> True (D) : for <me> and its resources <anylevel> False : for <me> only)#"  , py::arg("names"),  py::arg("anylevel")=static_cast<const Standard_Boolean>(Standard_True))
        .def("AddPDescr",
             (void (StepData_Protocol::*)( const opencascade::handle<StepData_PDescr> & ) ) static_cast<void (StepData_Protocol::*)( const opencascade::handle<StepData_PDescr> & ) >(&StepData_Protocol::AddPDescr),
             R"#(Records an PDescr)#"  , py::arg("pdescr"))
        .def("PDescr",
             (opencascade::handle<StepData_PDescr> (StepData_Protocol::*)( const Standard_CString , const Standard_Boolean ) const) static_cast<opencascade::handle<StepData_PDescr> (StepData_Protocol::*)( const Standard_CString , const Standard_Boolean ) const>(&StepData_Protocol::PDescr),
             R"#(Returns a parameter description according to its name <anylevel> True (D) : for <me> and its resources <anylevel> False : for <me> only)#"  , py::arg("name"),  py::arg("anylevel")=static_cast<const Standard_Boolean>(Standard_True))
        .def("AddBasicDescr",
             (void (StepData_Protocol::*)( const opencascade::handle<StepData_ESDescr> & ) ) static_cast<void (StepData_Protocol::*)( const opencascade::handle<StepData_ESDescr> & ) >(&StepData_Protocol::AddBasicDescr),
             R"#(Records an ESDescr, intended to build complex descriptions)#"  , py::arg("esdescr"))
        .def("BasicDescr",
             (opencascade::handle<StepData_EDescr> (StepData_Protocol::*)( const Standard_CString , const Standard_Boolean ) const) static_cast<opencascade::handle<StepData_EDescr> (StepData_Protocol::*)( const Standard_CString , const Standard_Boolean ) const>(&StepData_Protocol::BasicDescr),
             R"#(Returns a basic description according to its name <anylevel> True (D) : for <me> and its resources <anylevel> False : for <me> only)#"  , py::arg("name"),  py::arg("anylevel")=static_cast<const Standard_Boolean>(Standard_True))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_Protocol::*)() const>(&StepData_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_Protocol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_Protocol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_ReadWriteModule ,opencascade::handle<StepData_ReadWriteModule>,Py_StepData_ReadWriteModule , Interface_ReaderModule>>(m.attr("StepData_ReadWriteModule"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepData_ReadWriteModule::*)( const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer ) const) static_cast<Standard_Integer (StepData_ReadWriteModule::*)( const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer ) const>(&StepData_ReadWriteModule::CaseNum),
             R"#(Translate the Type of record <num> in <data> to a positive Case Number, or 0 if failed. Works with a StepReaderData, in which the Type of an Entity is defined as a String : Reads the RecordType <num> then calls CaseNum (this type) Warning : The methods CaseStep, StepType and Recognize, must be in phase (triplets CaseNum-StepType-Type of Object))#"  , py::arg("data"),  py::arg("num"))
        .def("CaseStep",
             (Standard_Integer (StepData_ReadWriteModule::*)( const TCollection_AsciiString & ) const) static_cast<Standard_Integer (StepData_ReadWriteModule::*)( const TCollection_AsciiString & ) const>(&StepData_ReadWriteModule::CaseStep),
             R"#(Defines Case Numbers corresponding to the recognized Types Called by CaseNum (data,num) above for a Simple Type Entity Warning : CaseStep must give the same Value as Protocol does for the Entity type which corresponds to this Type given as a String)#"  , py::arg("atype"))
        .def("CaseStep",
             (Standard_Integer (StepData_ReadWriteModule::*)(  const NCollection_Sequence<TCollection_AsciiString> & ) const) static_cast<Standard_Integer (StepData_ReadWriteModule::*)(  const NCollection_Sequence<TCollection_AsciiString> & ) const>(&StepData_ReadWriteModule::CaseStep),
             R"#(Same a above but for a Complex Type Entity ("Plex") The provided Default recognizes nothing)#"  , py::arg("types"))
        .def("IsComplex",
             (Standard_Boolean (StepData_ReadWriteModule::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (StepData_ReadWriteModule::*)( const Standard_Integer ) const>(&StepData_ReadWriteModule::IsComplex),
             R"#(Returns True if the Case Number corresponds to a Complex Type ("Plex"). Remember that all possible combinations must be aknowledged to be processed Default is False for all cases. For a Protocol which defines possible Plexes, this method must be redefined.)#"  , py::arg("CN"))
        .def("StepType",
             (const TCollection_AsciiString & (StepData_ReadWriteModule::*)( const Standard_Integer ) const) static_cast<const TCollection_AsciiString & (StepData_ReadWriteModule::*)( const Standard_Integer ) const>(&StepData_ReadWriteModule::StepType),
             R"#(Function specific to STEP, which delivers the StepType as it is recorded in and read from a File compliant with STEP. This method is symmetric to the method CaseStep. StepType can be different from Dynamic Type's name, but belongs to the same class of Object. Returns an empty String if <CN> is zero. Warning : For a Complex Type Entity, returns an Empty String (Complex Type must be managed by users))#"  , py::arg("CN"))
        .def("ShortType",
             (TCollection_AsciiString (StepData_ReadWriteModule::*)( const Standard_Integer ) const) static_cast<TCollection_AsciiString (StepData_ReadWriteModule::*)( const Standard_Integer ) const>(&StepData_ReadWriteModule::ShortType),
             R"#(Function specific to STEP. Some STEP Types have a short form This method can be redefined to fill it By default, returns an empty string, which is then interpreted to take normal form from StepType)#"  , py::arg("CN"))
        .def("ComplexType",
             (Standard_Boolean (StepData_ReadWriteModule::*)( const Standard_Integer , NCollection_Sequence<TCollection_AsciiString> & ) const) static_cast<Standard_Boolean (StepData_ReadWriteModule::*)( const Standard_Integer , NCollection_Sequence<TCollection_AsciiString> & ) const>(&StepData_ReadWriteModule::ComplexType),
             R"#(Function specific to STEP, which delivers the list of types which corresponds to a complex type. If <CN> is not for a complex type, this method returns False. Else it returns True and fills the list in alphabetic order. The default returns False. To be redefined as required.)#"  , py::arg("CN"),  py::arg("types"))
        .def("Read",
             (void (StepData_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<Standard_Transient> & ) const) static_cast<void (StepData_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<Interface_FileReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<Standard_Transient> & ) const>(&StepData_ReadWriteModule::Read),
             R"#(General Read Function, calls ReadStep)#"  , py::arg("CN"),  py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("ReadStep",
             (void (StepData_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<Standard_Transient> & ) const) static_cast<void (StepData_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<Standard_Transient> & ) const>(&StepData_ReadWriteModule::ReadStep),
             R"#(Specific Read Function. Works with StepReaderData)#"  , py::arg("CN"),  py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (StepData_ReadWriteModule::*)( const Standard_Integer , StepData_StepWriter & , const opencascade::handle<Standard_Transient> & ) const) static_cast<void (StepData_ReadWriteModule::*)( const Standard_Integer , StepData_StepWriter & , const opencascade::handle<Standard_Transient> & ) const>(&StepData_ReadWriteModule::WriteStep),
             R"#(Write Function, switched by CaseNum)#"  , py::arg("CN"),  py::arg("SW"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_ReadWriteModule::*)() const>(&StepData_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_ReadWriteModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_ReadWriteModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_SelectMember ,opencascade::handle<StepData_SelectMember> , Standard_Transient>>(m.attr("StepData_SelectMember"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepData_SelectMember::*)() const) static_cast<Standard_Boolean (StepData_SelectMember::*)() const>(&StepData_SelectMember::HasName),
             R"#(Tells if a SelectMember has a name. Default is False)#" )
        .def("Name",
             (Standard_CString (StepData_SelectMember::*)() const) static_cast<Standard_CString (StepData_SelectMember::*)() const>(&StepData_SelectMember::Name),
             R"#(Returns the name of a SelectMember. Default is empty)#" )
        .def("SetName",
             (Standard_Boolean (StepData_SelectMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepData_SelectMember::*)( const Standard_CString ) >(&StepData_SelectMember::SetName),
             R"#(Sets the name of a SelectMember, returns True if done, False if no name is allowed Default does nothing and returns False)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepData_SelectMember::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepData_SelectMember::*)( const Standard_CString ) const>(&StepData_SelectMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one By default, compares the strings, can be redefined (optimised))#"  , py::arg("name"))
        .def("Kind",
             (Standard_Integer (StepData_SelectMember::*)() const) static_cast<Standard_Integer (StepData_SelectMember::*)() const>(&StepData_SelectMember::Kind),
             R"#(None)#" )
        .def("SetKind",
             (void (StepData_SelectMember::*)( const Standard_Integer ) ) static_cast<void (StepData_SelectMember::*)( const Standard_Integer ) >(&StepData_SelectMember::SetKind),
             R"#(None)#"  , py::arg("kind"))
        .def("ParamType",
             (Interface_ParamType (StepData_SelectMember::*)() const) static_cast<Interface_ParamType (StepData_SelectMember::*)() const>(&StepData_SelectMember::ParamType),
             R"#(Returns the Kind of the SelectMember, under the form of an enum ParamType)#" )
        .def("Int",
             (Standard_Integer (StepData_SelectMember::*)() const) static_cast<Standard_Integer (StepData_SelectMember::*)() const>(&StepData_SelectMember::Int),
             R"#(This internal method gives access to a value implemented by an Integer (to read it))#" )
        .def("SetInt",
             (void (StepData_SelectMember::*)( const Standard_Integer ) ) static_cast<void (StepData_SelectMember::*)( const Standard_Integer ) >(&StepData_SelectMember::SetInt),
             R"#(This internal method gives access to a value implemented by an Integer (to set it))#"  , py::arg("val"))
        .def("Integer",
             (Standard_Integer (StepData_SelectMember::*)() const) static_cast<Standard_Integer (StepData_SelectMember::*)() const>(&StepData_SelectMember::Integer),
             R"#(Gets the value as an Integer)#" )
        .def("SetInteger",
             (void (StepData_SelectMember::*)( const Standard_Integer ) ) static_cast<void (StepData_SelectMember::*)( const Standard_Integer ) >(&StepData_SelectMember::SetInteger),
             R"#(None)#"  , py::arg("val"))
        .def("Boolean",
             (Standard_Boolean (StepData_SelectMember::*)() const) static_cast<Standard_Boolean (StepData_SelectMember::*)() const>(&StepData_SelectMember::Boolean),
             R"#(None)#" )
        .def("SetBoolean",
             (void (StepData_SelectMember::*)( const Standard_Boolean ) ) static_cast<void (StepData_SelectMember::*)( const Standard_Boolean ) >(&StepData_SelectMember::SetBoolean),
             R"#(None)#"  , py::arg("val"))
        .def("Logical",
             (StepData_Logical (StepData_SelectMember::*)() const) static_cast<StepData_Logical (StepData_SelectMember::*)() const>(&StepData_SelectMember::Logical),
             R"#(None)#" )
        .def("SetLogical",
             (void (StepData_SelectMember::*)( const StepData_Logical ) ) static_cast<void (StepData_SelectMember::*)( const StepData_Logical ) >(&StepData_SelectMember::SetLogical),
             R"#(None)#"  , py::arg("val"))
        .def("Real",
             (Standard_Real (StepData_SelectMember::*)() const) static_cast<Standard_Real (StepData_SelectMember::*)() const>(&StepData_SelectMember::Real),
             R"#(None)#" )
        .def("SetReal",
             (void (StepData_SelectMember::*)( const Standard_Real ) ) static_cast<void (StepData_SelectMember::*)( const Standard_Real ) >(&StepData_SelectMember::SetReal),
             R"#(None)#"  , py::arg("val"))
        .def("String",
             (Standard_CString (StepData_SelectMember::*)() const) static_cast<Standard_CString (StepData_SelectMember::*)() const>(&StepData_SelectMember::String),
             R"#(None)#" )
        .def("SetString",
             (void (StepData_SelectMember::*)( const Standard_CString ) ) static_cast<void (StepData_SelectMember::*)( const Standard_CString ) >(&StepData_SelectMember::SetString),
             R"#(None)#"  , py::arg("val"))
        .def("Enum",
             (Standard_Integer (StepData_SelectMember::*)() const) static_cast<Standard_Integer (StepData_SelectMember::*)() const>(&StepData_SelectMember::Enum),
             R"#(None)#" )
        .def("EnumText",
             (Standard_CString (StepData_SelectMember::*)() const) static_cast<Standard_CString (StepData_SelectMember::*)() const>(&StepData_SelectMember::EnumText),
             R"#(None)#" )
        .def("SetEnum",
             (void (StepData_SelectMember::*)( const Standard_Integer , const Standard_CString ) ) static_cast<void (StepData_SelectMember::*)( const Standard_Integer , const Standard_CString ) >(&StepData_SelectMember::SetEnum),
             R"#(None)#"  , py::arg("val"),  py::arg("text")=static_cast<const Standard_CString>(""))
        .def("SetEnumText",
             (void (StepData_SelectMember::*)( const Standard_Integer , const Standard_CString ) ) static_cast<void (StepData_SelectMember::*)( const Standard_Integer , const Standard_CString ) >(&StepData_SelectMember::SetEnumText),
             R"#(None)#"  , py::arg("val"),  py::arg("text"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_SelectMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_SelectMember::*)() const>(&StepData_SelectMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_SelectMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_SelectMember::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_SelectType , shared_ptr<StepData_SelectType>,Py_StepData_SelectType >>(m.attr("StepData_SelectType"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepData_SelectType::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepData_SelectType::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepData_SelectType::CaseNum),
             R"#(Recognizes the Type of an Entity. Returns a positive Number which identifies the Type in the definition List of the SelectType. Returns Zero if its Type in not in this List.)#"  , py::arg("ent"))
        .def("Matches",
             (Standard_Boolean (StepData_SelectType::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (StepData_SelectType::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepData_SelectType::Matches),
             R"#(Returns True if the Type of an Entity complies with the definition list of the SelectType. Also checks for a SelectMember Default Implementation looks for CaseNum or CaseMem positive)#"  , py::arg("ent"))
        .def("SetValue",
             (void (StepData_SelectType::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (StepData_SelectType::*)( const opencascade::handle<Standard_Transient> & ) >(&StepData_SelectType::SetValue),
             R"#(Stores an Entity. This allows to define a specific SelectType class with one read method per member Type, which returns the Value casted with the good Type.)#"  , py::arg("ent"))
        .def("Nullify",
             (void (StepData_SelectType::*)() ) static_cast<void (StepData_SelectType::*)() >(&StepData_SelectType::Nullify),
             R"#(Nullifies the Stored Entity)#" )
        .def("Value",
             (const opencascade::handle<Standard_Transient> & (StepData_SelectType::*)() const) static_cast<const opencascade::handle<Standard_Transient> & (StepData_SelectType::*)() const>(&StepData_SelectType::Value),
             R"#(Returns the Stored Entity. Can be used to define specific read methods (see above))#" )
        .def("IsNull",
             (Standard_Boolean (StepData_SelectType::*)() const) static_cast<Standard_Boolean (StepData_SelectType::*)() const>(&StepData_SelectType::IsNull),
             R"#(Returns True if there is no Stored Entity (i.e. it is Null))#" )
        .def("Type",
             (opencascade::handle<Standard_Type> (StepData_SelectType::*)() const) static_cast<opencascade::handle<Standard_Type> (StepData_SelectType::*)() const>(&StepData_SelectType::Type),
             R"#(Returns the Effective (Dynamic) Type of the Stored Entity If it is Null, returns TYPE(Transient))#" )
        .def("CaseNumber",
             (Standard_Integer (StepData_SelectType::*)() const) static_cast<Standard_Integer (StepData_SelectType::*)() const>(&StepData_SelectType::CaseNumber),
             R"#(Recognizes the Type of the stored Entity, or zero if it is Null or SelectMember. Calls the first method CaseNum on Value)#" )
        .def("Description",
             (opencascade::handle<StepData_PDescr> (StepData_SelectType::*)() const) static_cast<opencascade::handle<StepData_PDescr> (StepData_SelectType::*)() const>(&StepData_SelectType::Description),
             R"#(Returns the Description which corresponds to <me> Null if no specific description to give. This description is used to control reading an check validity. Default returns a Null Handle, i.e. undefined description It can suffice if CaseNum and CaseMem give enough control)#" )
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepData_SelectType::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepData_SelectType::*)() const>(&StepData_SelectType::NewMember),
             R"#(Returns a preferred SelectMember. Default returns a Null By default, a SelectMember can be set according to data type and Name : it is a SelectNamed if Name is defined)#" )
        .def("CaseMem",
             (Standard_Integer (StepData_SelectType::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepData_SelectType::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepData_SelectType::CaseMem),
             R"#(Recognize a SelectMember (kind, name). Returns a positive value which identifies the case in the List of immediate cases (distinct from the List of Entity Types). Zero if not recognizes Default returns 0, saying that no immediate value is allowed)#"  , py::arg("ent"))
        .def("CaseMember",
             (Standard_Integer (StepData_SelectType::*)() const) static_cast<Standard_Integer (StepData_SelectType::*)() const>(&StepData_SelectType::CaseMember),
             R"#(Returns the Type of the stored SelectMember, or zero if it is Null or Entity. Calls the method CaseMem on Value)#" )
        .def("Member",
             (opencascade::handle<StepData_SelectMember> (StepData_SelectType::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepData_SelectType::*)() const>(&StepData_SelectType::Member),
             R"#(Returns Value as a SelectMember. Null if not a SelectMember)#" )
        .def("SelectName",
             (Standard_CString (StepData_SelectType::*)() const) static_cast<Standard_CString (StepData_SelectType::*)() const>(&StepData_SelectType::SelectName),
             R"#(Returns the type name of SelectMember. If no SelectMember or with no type name, returns an empty string To change it, pass through the SelectMember itself)#" )
        .def("Int",
             (Standard_Integer (StepData_SelectType::*)() const) static_cast<Standard_Integer (StepData_SelectType::*)() const>(&StepData_SelectType::Int),
             R"#(This internal method gives access to a value implemented by an Integer (to read it))#" )
        .def("SetInt",
             (void (StepData_SelectType::*)( const Standard_Integer ) ) static_cast<void (StepData_SelectType::*)( const Standard_Integer ) >(&StepData_SelectType::SetInt),
             R"#(This internal method gives access to a value implemented by an Integer (to set it) : a SelectMember MUST ALREADY BE THERE !)#"  , py::arg("val"))
        .def("Integer",
             (Standard_Integer (StepData_SelectType::*)() const) static_cast<Standard_Integer (StepData_SelectType::*)() const>(&StepData_SelectType::Integer),
             R"#(Gets the value as an Integer)#" )
        .def("SetInteger",
             (void (StepData_SelectType::*)( const Standard_Integer , const Standard_CString ) ) static_cast<void (StepData_SelectType::*)( const Standard_Integer , const Standard_CString ) >(&StepData_SelectType::SetInteger),
             R"#(Sets a new Integer value, with an optional type name Warning : If a SelectMember is already set, works on it : value and name must then be accepted by this SelectMember)#"  , py::arg("val"),  py::arg("name")=static_cast<const Standard_CString>(""))
        .def("Boolean",
             (Standard_Boolean (StepData_SelectType::*)() const) static_cast<Standard_Boolean (StepData_SelectType::*)() const>(&StepData_SelectType::Boolean),
             R"#(None)#" )
        .def("SetBoolean",
             (void (StepData_SelectType::*)( const Standard_Boolean , const Standard_CString ) ) static_cast<void (StepData_SelectType::*)( const Standard_Boolean , const Standard_CString ) >(&StepData_SelectType::SetBoolean),
             R"#(None)#"  , py::arg("val"),  py::arg("name")=static_cast<const Standard_CString>(""))
        .def("Logical",
             (StepData_Logical (StepData_SelectType::*)() const) static_cast<StepData_Logical (StepData_SelectType::*)() const>(&StepData_SelectType::Logical),
             R"#(None)#" )
        .def("SetLogical",
             (void (StepData_SelectType::*)( const StepData_Logical , const Standard_CString ) ) static_cast<void (StepData_SelectType::*)( const StepData_Logical , const Standard_CString ) >(&StepData_SelectType::SetLogical),
             R"#(None)#"  , py::arg("val"),  py::arg("name")=static_cast<const Standard_CString>(""))
        .def("Real",
             (Standard_Real (StepData_SelectType::*)() const) static_cast<Standard_Real (StepData_SelectType::*)() const>(&StepData_SelectType::Real),
             R"#(None)#" )
        .def("SetReal",
             (void (StepData_SelectType::*)( const Standard_Real , const Standard_CString ) ) static_cast<void (StepData_SelectType::*)( const Standard_Real , const Standard_CString ) >(&StepData_SelectType::SetReal),
             R"#(None)#"  , py::arg("val"),  py::arg("name")=static_cast<const Standard_CString>(""))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_StepDumper , shared_ptr<StepData_StepDumper> >>(m.attr("StepData_StepDumper"))
    // constructors
        .def(py::init< const opencascade::handle<StepData_StepModel> &,const opencascade::handle<StepData_Protocol> &,const Standard_Integer >()  , py::arg("amodel"),  py::arg("protocol"),  py::arg("mode")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("StepWriter",
             (StepData_StepWriter & (StepData_StepDumper::*)() ) static_cast<StepData_StepWriter & (StepData_StepDumper::*)() >(&StepData_StepDumper::StepWriter),
             R"#(Gives an access to the tool which is used to work : this allow to acts on some parameters : Floating Format, Scopes ...)#" )
        .def("Dump",
             (Standard_Boolean (StepData_StepDumper::*)( const opencascade::handle<Message_Messenger> & , const opencascade::handle<Standard_Transient> & , const Standard_Integer ) ) static_cast<Standard_Boolean (StepData_StepDumper::*)( const opencascade::handle<Message_Messenger> & , const opencascade::handle<Standard_Transient> & , const Standard_Integer ) >(&StepData_StepDumper::Dump),
             R"#(Dumps a Entity on an Messenger. Returns True if sucess, False, if the entity to dump has not been recognized by the Protocol. <level> can have one of these values : - 0 : prints the TYPE only, as known in STEP Files (StepType) If <ent> has not been regognized by the Protocol, or if its type is Complex, the StepType is replaced by the display of the cdl type. Complex Type are well processed by level 1. - 1 : dumps the entity, completely (whatever it has simple or complex type) but alone. - 2 : dumps the entity completely, plus the item its refers to at first level (a header message designates the starting entity of the dump) <Lists Shared and Implied> - 3 : dumps the entity and its refered items at any levels)#"  , py::arg("S"),  py::arg("ent"),  py::arg("level"))
        .def("Dump",
             (Standard_Boolean (StepData_StepDumper::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (StepData_StepDumper::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer , const Standard_Integer ) >(&StepData_StepDumper::Dump),
             R"#(Works as Dump with a Transient, but directly takes the entity designated by its number in the Model Returns False, also if <num> is out of range)#"  , py::arg("S"),  py::arg("num"),  py::arg("level"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_StepModel ,opencascade::handle<StepData_StepModel> , Interface_InterfaceModel>>(m.attr("StepData_StepModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Entity",
             (opencascade::handle<Standard_Transient> (StepData_StepModel::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Standard_Transient> (StepData_StepModel::*)( const Standard_Integer ) const>(&StepData_StepModel::Entity),
             R"#(returns entity given its rank. Same as InterfaceEntity, but with a shorter name)#"  , py::arg("num"))
        .def("GetFromAnother",
             (void (StepData_StepModel::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (StepData_StepModel::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&StepData_StepModel::GetFromAnother),
             R"#(gets header from another Model (uses Header Protocol))#"  , py::arg("other"))
        .def("NewEmptyModel",
             (opencascade::handle<Interface_InterfaceModel> (StepData_StepModel::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (StepData_StepModel::*)() const>(&StepData_StepModel::NewEmptyModel),
             R"#(Returns a New Empty Model, same type as <me>, i.e. StepModel)#" )
        .def("Header",
             (Interface_EntityIterator (StepData_StepModel::*)() const) static_cast<Interface_EntityIterator (StepData_StepModel::*)() const>(&StepData_StepModel::Header),
             R"#(returns Header entities under the form of an iterator)#" )
        .def("HasHeaderEntity",
             (Standard_Boolean (StepData_StepModel::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Boolean (StepData_StepModel::*)( const opencascade::handle<Standard_Type> & ) const>(&StepData_StepModel::HasHeaderEntity),
             R"#(says if a Header entity has a specifed type)#"  , py::arg("atype"))
        .def("HeaderEntity",
             (opencascade::handle<Standard_Transient> (StepData_StepModel::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<opencascade::handle<Standard_Transient> (StepData_StepModel::*)( const opencascade::handle<Standard_Type> & ) const>(&StepData_StepModel::HeaderEntity),
             R"#(Returns Header entity with specified type, if there is)#"  , py::arg("atype"))
        .def("ClearHeader",
             (void (StepData_StepModel::*)() ) static_cast<void (StepData_StepModel::*)() >(&StepData_StepModel::ClearHeader),
             R"#(Clears the Header)#" )
        .def("AddHeaderEntity",
             (void (StepData_StepModel::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (StepData_StepModel::*)( const opencascade::handle<Standard_Transient> & ) >(&StepData_StepModel::AddHeaderEntity),
             R"#(Adds an Entity to the Header)#"  , py::arg("ent"))
        .def("VerifyCheck",
             (void (StepData_StepModel::*)( opencascade::handle<Interface_Check> & ) const) static_cast<void (StepData_StepModel::*)( opencascade::handle<Interface_Check> & ) const>(&StepData_StepModel::VerifyCheck),
             R"#(Specific Check, checks Header Items with HeaderProtocol)#"  , py::arg("ach"))
        .def("DumpHeader",
             (void (StepData_StepModel::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (StepData_StepModel::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&StepData_StepModel::DumpHeader),
             R"#(Dumps the Header, with the Header Protocol of StepData. If the Header Protocol is not defined, for each Header Entity, prints its Type. Else sends the Header under the form of HEADER Section of an Ascii Step File <level> is not used because Header is not so big)#"  , py::arg("S"),  py::arg("level")=static_cast<const Standard_Integer>(0))
        .def("ClearLabels",
             (void (StepData_StepModel::*)() ) static_cast<void (StepData_StepModel::*)() >(&StepData_StepModel::ClearLabels),
             R"#(erases specific labels, i.e. clears the map (entity-ident))#" )
        .def("SetIdentLabel",
             (void (StepData_StepModel::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer ) ) static_cast<void (StepData_StepModel::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer ) >(&StepData_StepModel::SetIdentLabel),
             R"#(Attaches an ident to an entity to produce a label (does nothing if <ent> is not in <me>))#"  , py::arg("ent"),  py::arg("ident"))
        .def("IdentLabel",
             (Standard_Integer (StepData_StepModel::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepData_StepModel::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepData_StepModel::IdentLabel),
             R"#(returns the label ident attached to an entity, 0 if not in me)#"  , py::arg("ent"))
        .def("PrintLabel",
             (void (StepData_StepModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (StepData_StepModel::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const>(&StepData_StepModel::PrintLabel),
             R"#(Prints label specific to STEP norm for a given entity, i.e. if a LabelIdent has been recorded, its value with '#', else the number in the model with '#' and between ())#"  , py::arg("ent"),  py::arg("S"))
        .def("StringLabel",
             (opencascade::handle<TCollection_HAsciiString> (StepData_StepModel::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepData_StepModel::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepData_StepModel::StringLabel),
             R"#(Returns a string with the label attached to a given entity, same form as for PrintLabel)#"  , py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_StepModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_StepModel::*)() const>(&StepData_StepModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_StepModel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_StepModel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_StepReaderData ,opencascade::handle<StepData_StepReaderData> , Interface_FileReaderData>>(m.attr("StepData_StepReaderData"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("nbheader"),  py::arg("nbtotal"),  py::arg("nbpar") )
    // custom constructors
    // methods
        .def("SetRecord",
             (void (StepData_StepReaderData::*)( const Standard_Integer , const Standard_CString , const Standard_CString , const Standard_Integer ) ) static_cast<void (StepData_StepReaderData::*)( const Standard_Integer , const Standard_CString , const Standard_CString , const Standard_Integer ) >(&StepData_StepReaderData::SetRecord),
             R"#(Fills the fields of a record)#"  , py::arg("num"),  py::arg("ident"),  py::arg("type"),  py::arg("nbpar"))
        .def("AddStepParam",
             (void (StepData_StepReaderData::*)( const Standard_Integer , const Standard_CString , const Interface_ParamType , const Standard_Integer ) ) static_cast<void (StepData_StepReaderData::*)( const Standard_Integer , const Standard_CString , const Interface_ParamType , const Standard_Integer ) >(&StepData_StepReaderData::AddStepParam),
             R"#(Fills the fields of a parameter of a record. This is a variant of AddParam, Adapted to STEP (optimized for specific values))#"  , py::arg("num"),  py::arg("aval"),  py::arg("atype"),  py::arg("nument")=static_cast<const Standard_Integer>(0))
        .def("RecordType",
             (const TCollection_AsciiString & (StepData_StepReaderData::*)( const Standard_Integer ) const) static_cast<const TCollection_AsciiString & (StepData_StepReaderData::*)( const Standard_Integer ) const>(&StepData_StepReaderData::RecordType),
             R"#(Returns Record Type)#"  , py::arg("num"))
        .def("CType",
             (Standard_CString (StepData_StepReaderData::*)( const Standard_Integer ) const) static_cast<Standard_CString (StepData_StepReaderData::*)( const Standard_Integer ) const>(&StepData_StepReaderData::CType),
             R"#(Returns Record Type as a CString was C++ : return const)#"  , py::arg("num"))
        .def("RecordIdent",
             (Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer ) const) static_cast<Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer ) const>(&StepData_StepReaderData::RecordIdent),
             R"#(Returns record identifier (Positive number) If returned ident is not positive : Sub-List or Scope mark)#"  , py::arg("num"))
        .def("SubListNumber",
             (Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_Boolean ) const) static_cast<Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_Boolean ) const>(&StepData_StepReaderData::SubListNumber),
             R"#(Returns SubList numero designated by a parameter (nump) in a record (num), or zero if the parameter does not exist or is not a SubList address. Zero too If aslast is True and nump is not for the last parameter)#"  , py::arg("num"),  py::arg("nump"),  py::arg("aslast"))
        .def("IsComplex",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer ) const>(&StepData_StepReaderData::IsComplex),
             R"#(Returns True if <num> corresponds to a Complex Type Entity (as can be defined by ANDOR Express clause))#"  , py::arg("num"))
        .def("ComplexType",
             (void (StepData_StepReaderData::*)( const Standard_Integer , NCollection_Sequence<TCollection_AsciiString> & ) const) static_cast<void (StepData_StepReaderData::*)( const Standard_Integer , NCollection_Sequence<TCollection_AsciiString> & ) const>(&StepData_StepReaderData::ComplexType),
             R"#(Returns the List of Types which correspond to a Complex Type Entity. If not Complex, there is just one Type in it For a SubList or a Scope mark, <types> remains empty)#"  , py::arg("num"),  py::arg("types"))
        .def("NextForComplex",
             (Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer ) const) static_cast<Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer ) const>(&StepData_StepReaderData::NextForComplex),
             R"#(Returns the Next "Componant" for a Complex Type Entity, of which <num> is already a Componant (the first one or a next one) Returns 0 for a Simple Type or for the last Componant)#"  , py::arg("num"))
        .def("NamedForComplex",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_CString , const Standard_Integer , Standard_Integer & , opencascade::handle<Interface_Check> & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_CString , const Standard_Integer , Standard_Integer & , opencascade::handle<Interface_Check> & ) const>(&StepData_StepReaderData::NamedForComplex),
             R"#(Determines the first component which brings a given name, for a Complex Type Entity <num0> is the very first record of this entity <num> is given the last NextNamedForComplex, starts at zero it is returned as the newly found number Hence, in the normal case, NextNamedForComplex starts by num0 if <num> is zero, else by NextForComplex(num) If the alphabetic order is not respected, it restarts from num0 and loops on NextForComplex until finding <name> In case of "non-alphabetic order", <ach> is filled with a Warning for this name In case of "not-found at all", <ach> is filled with a Fail, and <num> is returned as zero)#"  , py::arg("name"),  py::arg("num0"),  py::arg("num"),  py::arg("ach"))
        .def("NamedForComplex",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_CString , const Standard_CString , const Standard_Integer , Standard_Integer & , opencascade::handle<Interface_Check> & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_CString , const Standard_CString , const Standard_Integer , Standard_Integer & , opencascade::handle<Interface_Check> & ) const>(&StepData_StepReaderData::NamedForComplex),
             R"#(Determines the first component which brings a given name, or short name for a Complex Type Entity <num0> is the very first record of this entity <num> is given the last NextNamedForComplex, starts at zero it is returned as the newly found number Hence, in the normal case, NextNamedForComplex starts by num0 if <num> is zero, else by NextForComplex(num) If the alphabetic order is not respected, it restarts from num0 and loops on NextForComplex until finding <name> In case of "non-alphabetic order", <ach> is filled with a Warning for this name In case of "not-found at all", <ach> is filled with a Fail, and <num> is returned as zero)#"  , py::arg("theName"),  py::arg("theShortName"),  py::arg("num0"),  py::arg("num"),  py::arg("ach"))
        .def("CheckNbParams",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , opencascade::handle<Interface_Check> & , const Standard_CString ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , opencascade::handle<Interface_Check> & , const Standard_CString ) const>(&StepData_StepReaderData::CheckNbParams),
             R"#(Checks Count of Parameters of record <num> to equate <nbreq> If this Check is successful, returns True Else, fills <ach> with an Error Message then returns False <mess> is included in the Error message if given non empty)#"  , py::arg("num"),  py::arg("nbreq"),  py::arg("ach"),  py::arg("mess")=static_cast<const Standard_CString>(""))
        .def("ReadSubList",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Integer & , const Standard_Boolean , const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Integer & , const Standard_Boolean , const Standard_Integer , const Standard_Integer ) const>(&StepData_StepReaderData::ReadSubList),
             R"#(reads parameter <nump> of record <num> as a sub-list (may be typed, see ReadTypedParameter in this case) Returns True if OK. Else (not a LIST), returns false and feeds Check with appropriate check If <optional> is True and Param is not defined, returns True with <ach> not filled and <numsub> returned as 0 Works with SubListNumber with <aslast> false (no specific case for last parameter))#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("numsub"),  py::arg("optional")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("lenmin")=static_cast<const Standard_Integer>(0),  py::arg("lenmax")=static_cast<const Standard_Integer>(0))
        .def("ReadSub",
             (Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , const opencascade::handle<StepData_PDescr> & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , const opencascade::handle<StepData_PDescr> & , opencascade::handle<Standard_Transient> & ) const>(&StepData_StepReaderData::ReadSub),
             R"#(reads the content of a sub-list into a transient : SelectNamed, or HArray1 of Integer,Real,String,Transient ... recursive call if list of list ... If a sub-list has mixed types, an HArray1OfTransient is produced, it may contain SelectMember Intended to be called by ReadField The returned status is : negative if failed, 0 if empty. Else the kind to be recorded in the field)#"  , py::arg("numsub"),  py::arg("mess"),  py::arg("ach"),  py::arg("descr"),  py::arg("val"))
        .def("ReadMember",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , opencascade::handle<StepData_SelectMember> & ) const>(&StepData_StepReaderData::ReadMember),
             R"#(Reads parameter <nump> of record <num> into a SelectMember, self-sufficient (no Description needed) If <val> is already created, it will be filled, as possible And if reading does not match its own description, the result will be False If <val> is not it not yet created, it will be (SelectNamed) Usefull if a field is defined as a SelectMember, directly (SELECT with no Entity as member) But SelectType also manages SelectMember (for SELECT with some members as Entity, some other not))#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("val"))
        .def("ReadField",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , const opencascade::handle<StepData_PDescr> & , StepData_Field & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , const opencascade::handle<StepData_PDescr> & , StepData_Field & ) const>(&StepData_StepReaderData::ReadField),
             R"#(reads parameter <nump> of record <num> into a Field, controlled by a Parameter Descriptor (PDescr), which controls its allowed type(s) and value <ach> is filled if the read parameter does not match its description (but the field is read anyway) If the description is not defined, no control is done Returns True when done)#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("descr"),  py::arg("fild"))
        .def("ReadList",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepData_ESDescr> & , StepData_FieldList & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepData_ESDescr> & , StepData_FieldList & ) const>(&StepData_StepReaderData::ReadList),
             R"#(reads a list of fields controlled by an ESDescr)#"  , py::arg("num"),  py::arg("ach"),  py::arg("descr"),  py::arg("list"))
        .def("ReadAny",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , const opencascade::handle<StepData_PDescr> & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , const opencascade::handle<StepData_PDescr> & , opencascade::handle<Standard_Transient> & ) const>(&StepData_StepReaderData::ReadAny),
             R"#(Reads parameter <nump> of record <num> into a Transient Value according to the type of the parameter : Named for Integer,Boolean,Logical,Enum,Real : SelectNamed Immediate Integer,Boolean,Logical,Enum,Real : SelectInt/Real Text : HAsciiString Ident : the referenced Entity Sub-List not processed, see ReadSub This value is controlled by a Parameter Descriptor (PDescr), which controls its allowed type and value <ach> is filled if the read parameter does not match its description (the select is nevertheless created if possible))#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("descr"),  py::arg("val"))
        .def("ReadXY",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Real & , Standard_Real & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Real & , Standard_Real & ) const>(&StepData_StepReaderData::ReadXY),
             R"#(reads parameter <nump> of record <num> as a sub-list of two Reals X,Y. Returns True if OK. Else, returns false and feeds Check with appropriate Fails (parameter not a sub-list, not two Reals in the sub-list) composed with "mess" which gives the name of the parameter)#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("X"),  py::arg("Y"))
        .def("ReadXYZ",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Real & , Standard_Real & , Standard_Real & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Real & , Standard_Real & , Standard_Real & ) const>(&StepData_StepReaderData::ReadXYZ),
             R"#(reads parameter <nump> of record <num> as a sub-list of three Reals X,Y,Z. Return value and Check managed as by ReadXY (demands a sub-list of three Reals))#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("X"),  py::arg("Y"),  py::arg("Z"))
        .def("ReadReal",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Real & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Real & ) const>(&StepData_StepReaderData::ReadReal),
             R"#(reads parameter <nump> of record <num> as a single Real value. Return value and Check managed as by ReadXY (demands a Real))#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("val"))
        .def("ReadEntity",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , const opencascade::handle<Standard_Type> & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , const opencascade::handle<Standard_Type> & , opencascade::handle<Standard_Transient> & ) const>(&StepData_StepReaderData::ReadEntity),
             R"#(Reads parameter <nump> of record <num> as a single Entity. Return value and Check managed as by ReadReal (demands a reference to an Entity). In Addition, demands read Entity to be Kind of a required Type <atype>. Remark that returned status is False and <ent> is Null if parameter is not an Entity, <ent> remains Not Null is parameter is an Entity but is not Kind of required type)#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("atype"),  py::arg("ent"))
        .def("ReadEntity",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , StepData_SelectType & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , StepData_SelectType & ) const>(&StepData_StepReaderData::ReadEntity),
             R"#(Same as above, but a SelectType checks Type Matching, and records the read Entity (see method Value from SelectType))#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("sel"))
        .def("ReadInteger",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Integer & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Integer & ) const>(&StepData_StepReaderData::ReadInteger),
             R"#(reads parameter <nump> of record <num> as a single Integer. Return value & Check managed as by ReadXY (demands an Integer))#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("val"))
        .def("ReadBoolean",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Boolean & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Boolean & ) const>(&StepData_StepReaderData::ReadBoolean),
             R"#(reads parameter <nump> of record <num> as a Boolean Return value and Check managed as by ReadReal (demands a Boolean enum, i.e. text ".T." for True or ".F." for False))#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("flag"))
        .def("ReadLogical",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , StepData_Logical & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , StepData_Logical & ) const>(&StepData_StepReaderData::ReadLogical),
             R"#(reads parameter <nump> of record <num> as a Logical Return value and Check managed as by ReadBoolean (demands a Logical enum, i.e. text ".T.", ".F.", or ".U."))#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("flag"))
        .def("ReadString",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , opencascade::handle<TCollection_HAsciiString> & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , opencascade::handle<TCollection_HAsciiString> & ) const>(&StepData_StepReaderData::ReadString),
             R"#(reads parameter <nump> of record <num> as a String (text between quotes, quotes are removed by the Read operation) Return value and Check managed as by ReadXY (demands a String))#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("val"))
        .def("FailEnumValue",
             (void (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & ) const) static_cast<void (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & ) const>(&StepData_StepReaderData::FailEnumValue),
             R"#(Fills a check with a fail message if enumeration value does match parameter definition Just a help to centralize message definitions)#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"))
        .def("ReadEnum",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , const StepData_EnumTool & , Standard_Integer & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , const StepData_EnumTool & , Standard_Integer & ) const>(&StepData_StepReaderData::ReadEnum),
             R"#(Reads parameter <nump> of record <num> as an Enumeration (text between dots) and converts it to an integer value, by an EnumTool. Returns True if OK, false if : this parameter is not enumeration, or is not recognized by the EnumTool (with fail))#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("enumtool"),  py::arg("val"))
        .def("ReadTypedParam",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Integer & , Standard_Integer & , TCollection_AsciiString & ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_CString , opencascade::handle<Interface_Check> & , Standard_Integer & , Standard_Integer & , TCollection_AsciiString & ) const>(&StepData_StepReaderData::ReadTypedParam),
             R"#(Resolves a parameter which can be enclosed in a type def., as TYPE(val). The parameter must then be read normally according its type. Parameter to be resolved is <nump> of record <num> <mustbetyped> True demands a typed parameter <mustbetyped> False accepts a non-typed parameter as option mess and ach as usual <numr>,<numrp> are the resolved record and parameter numbers = num,nump if no type, else numrp=1 <typ> returns the recorded type, or empty string Remark : a non-typed list is considered as "non-typed")#"  , py::arg("num"),  py::arg("nump"),  py::arg("mustbetyped"),  py::arg("mess"),  py::arg("ach"),  py::arg("numr"),  py::arg("numrp"),  py::arg("typ"))
        .def("CheckDerived",
             (Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , const Standard_Boolean ) const) static_cast<Standard_Boolean (StepData_StepReaderData::*)( const Standard_Integer , const Standard_Integer , const Standard_CString , opencascade::handle<Interface_Check> & , const Standard_Boolean ) const>(&StepData_StepReaderData::CheckDerived),
             R"#(Checks if parameter <nump> of record <num> is given as Derived If this Check is successful (i.e. Param = "*"), returns True Else, fills <ach> with a Message which contains <mess> and returns False. According to <errstat>, this message is Warning if errstat is False (Default), Fail if errstat is True)#"  , py::arg("num"),  py::arg("nump"),  py::arg("mess"),  py::arg("ach"),  py::arg("errstat")=static_cast<const Standard_Boolean>(Standard_False))
        .def("NbEntities",
             (Standard_Integer (StepData_StepReaderData::*)() const) static_cast<Standard_Integer (StepData_StepReaderData::*)() const>(&StepData_StepReaderData::NbEntities),
             R"#(Returns total count of Entities (including Header))#" )
        .def("FindNextRecord",
             (Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer ) const) static_cast<Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer ) const>(&StepData_StepReaderData::FindNextRecord),
             R"#(determines the first suitable record following a given one that is, skips SCOPE,ENDSCOPE and SUBLIST records Note : skips Header records, which are accessed separately)#"  , py::arg("num"))
        .def("SetEntityNumbers",
             (void (StepData_StepReaderData::*)( const Standard_Boolean ) ) static_cast<void (StepData_StepReaderData::*)( const Standard_Boolean ) >(&StepData_StepReaderData::SetEntityNumbers),
             R"#(determines reference numbers in EntityNumber fields called by Prepare from StepReaderTool to prepare later using by a StepModel. This method is attached to StepReaderData because it needs a massive amount of data accesses to work)#"  , py::arg("withmap")=static_cast<const Standard_Boolean>(Standard_True))
        .def("FindNextHeaderRecord",
             (Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer ) const) static_cast<Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer ) const>(&StepData_StepReaderData::FindNextHeaderRecord),
             R"#(determine first suitable record of Header works as FindNextRecord, but treats only Header records)#"  , py::arg("num"))
        .def("PrepareHeader",
             (void (StepData_StepReaderData::*)() ) static_cast<void (StepData_StepReaderData::*)() >(&StepData_StepReaderData::PrepareHeader),
             R"#(Works as SetEntityNumbers but for Header : more simple because there are no Reference, only Sub-Lists)#" )
        .def("GlobalCheck",
             (const opencascade::handle<Interface_Check> (StepData_StepReaderData::*)() const) static_cast<const opencascade::handle<Interface_Check> (StepData_StepReaderData::*)() const>(&StepData_StepReaderData::GlobalCheck),
             R"#(Returns the Global Check. It can record Fail messages about Undefined References (detected by SetEntityNumbers))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_StepReaderData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_StepReaderData::*)() const>(&StepData_StepReaderData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_StepReaderData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_StepReaderData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_StepReaderTool , shared_ptr<StepData_StepReaderTool> , Interface_FileReaderTool>>(m.attr("StepData_StepReaderTool"))
    // constructors
        .def(py::init< const opencascade::handle<StepData_StepReaderData> &,const opencascade::handle<StepData_Protocol> & >()  , py::arg("reader"),  py::arg("protocol") )
    // custom constructors
    // methods
        .def("Prepare",
             (void (StepData_StepReaderTool::*)( const Standard_Boolean ) ) static_cast<void (StepData_StepReaderTool::*)( const Standard_Boolean ) >(&StepData_StepReaderTool::Prepare),
             R"#(Bounds empty entities to records, uses default Recognition provided by ReaderLib and ReaderModule. Also calls computation of references (SetEntityNumbers from StepReaderData) Works only on data entities (skips header) <optimize> given False allows to test some internal algorithms which are normally avoided (see also StepReaderData))#"  , py::arg("optimize")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Prepare",
             (void (StepData_StepReaderTool::*)( const opencascade::handle<StepData_FileRecognizer> & , const Standard_Boolean ) ) static_cast<void (StepData_StepReaderTool::*)( const opencascade::handle<StepData_FileRecognizer> & , const Standard_Boolean ) >(&StepData_StepReaderTool::Prepare),
             R"#(Bounds empty entities to records, works with a specific FileRecognizer, stored and later used in Recognize Works only on data entities (skips header) <optimize : same as above)#"  , py::arg("reco"),  py::arg("optimize")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Recognize",
             (Standard_Boolean (StepData_StepReaderTool::*)( const Standard_Integer , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (StepData_StepReaderTool::*)( const Standard_Integer , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) >(&StepData_StepReaderTool::Recognize),
             R"#(recognizes records, by asking either ReaderLib (default) or FileRecognizer (if defined) to do so. <ach> is to call RecognizeByLib)#"  , py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("PrepareHeader",
             (void (StepData_StepReaderTool::*)( const opencascade::handle<StepData_FileRecognizer> & ) ) static_cast<void (StepData_StepReaderTool::*)( const opencascade::handle<StepData_FileRecognizer> & ) >(&StepData_StepReaderTool::PrepareHeader),
             R"#(bounds empty entities and sub-lists to header records works like Prepare + SetEntityNumbers, but for header (N.B.: in Header, no Ident and no reference) FileRecognizer is to specify Entities which are allowed to be defined in the Header (not every type can be))#"  , py::arg("reco"))
        .def("BeginRead",
             (void (StepData_StepReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (StepData_StepReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&StepData_StepReaderTool::BeginRead),
             R"#(fills model's header; that is, gives to it Header entities and commands their loading. Also fills StepModel's Global Check from StepReaderData's GlobalCheck)#"  , py::arg("amodel"))
        .def("AnalyseRecord",
             (Standard_Boolean (StepData_StepReaderTool::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_Check> & ) ) static_cast<Standard_Boolean (StepData_StepReaderTool::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , opencascade::handle<Interface_Check> & ) >(&StepData_StepReaderTool::AnalyseRecord),
             R"#(fills an entity, given record no; works by using a ReaderLib to load each entity, which must be a Transient Actually, returned value is True if no fail, False else)#"  , py::arg("num"),  py::arg("anent"),  py::arg("acheck"))
        .def("EndRead",
             (void (StepData_StepReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (StepData_StepReaderTool::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&StepData_StepReaderTool::EndRead),
             R"#(Ends file reading after reading all the entities Here, it binds in the model, Idents to Entities (for checks))#"  , py::arg("amodel"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_StepWriter , shared_ptr<StepData_StepWriter> >>(m.attr("StepData_StepWriter"))
    // constructors
        .def(py::init< const opencascade::handle<StepData_StepModel> & >()  , py::arg("amodel") )
    // custom constructors
    // methods
        .def("LabelMode",
             (Standard_Integer & (StepData_StepWriter::*)() ) static_cast<Standard_Integer & (StepData_StepWriter::*)() >(&StepData_StepWriter::LabelMode),
             R"#(ModeLabel controls how to display entity ids : 0 (D) gives entity number in the model 1 gives the already recorded label (else, its number) Warning : conflicts are not controlled)#" )
        .def("TypeMode",
             (Standard_Integer & (StepData_StepWriter::*)() ) static_cast<Standard_Integer & (StepData_StepWriter::*)() >(&StepData_StepWriter::TypeMode),
             R"#(TypeMode controls the type form to use : 0 (D) for normal long form 1 for short form (if a type name has no short form, normal long form is then used))#" )
        .def("FloatWriter",
             (Interface_FloatWriter & (StepData_StepWriter::*)() ) static_cast<Interface_FloatWriter & (StepData_StepWriter::*)() >(&StepData_StepWriter::FloatWriter),
             R"#(Returns the embedded FloatWriter, which controls sending Reals Use this method to access FloatWriter in order to consult or change its options (MainFormat, FormatForRange,ZeroSuppress), because it is returned as the address of its field)#" )
        .def("SetScope",
             (void (StepData_StepWriter::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (StepData_StepWriter::*)( const Standard_Integer , const Standard_Integer ) >(&StepData_StepWriter::SetScope),
             R"#(Declares the Entity Number <numscope> to correspond to a Scope which contains the Entity Number <numin>. Several calls to the same <numscope> add Entities in this Scope, in this order. Error if <numin> is already declared in the Scope Warning : the declaration of the Scopes is assumed to be consistent, i.e. <numin> is not referenced from outside this Scope (not checked here))#"  , py::arg("numscope"),  py::arg("numin"))
        .def("IsInScope",
             (Standard_Boolean (StepData_StepWriter::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (StepData_StepWriter::*)( const Standard_Integer ) const>(&StepData_StepWriter::IsInScope),
             R"#(Returns True if an Entity identified by its Number is in a Scope)#"  , py::arg("num"))
        .def("SendModel",
             (void (StepData_StepWriter::*)( const opencascade::handle<StepData_Protocol> & , const Standard_Boolean ) ) static_cast<void (StepData_StepWriter::*)( const opencascade::handle<StepData_Protocol> & , const Standard_Boolean ) >(&StepData_StepWriter::SendModel),
             R"#(Sends the complete Model, included HEADER and DATA Sections Works with a WriterLib defined through a Protocol If <headeronly> is given True, only the HEADER Section is sent (used to Dump the Header of a StepModel))#"  , py::arg("protocol"),  py::arg("headeronly")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SendHeader",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::SendHeader),
             R"#(Begins model header)#" )
        .def("SendData",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::SendData),
             R"#(Begins data section; error if EndSec was not set)#" )
        .def("SendEntity",
             (void (StepData_StepWriter::*)( const Standard_Integer , const StepData_WriterLib & ) ) static_cast<void (StepData_StepWriter::*)( const Standard_Integer , const StepData_WriterLib & ) >(&StepData_StepWriter::SendEntity),
             R"#(Send an Entity of the Data Section. If it corresponds to a Scope, also Sends the Scope informations and contained Items)#"  , py::arg("nument"),  py::arg("lib"))
        .def("EndSec",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::EndSec),
             R"#(sets end of section; to be done before passing to next one)#" )
        .def("EndFile",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::EndFile),
             R"#(sets end of file; error is EndSec was not set)#" )
        .def("NewLine",
             (void (StepData_StepWriter::*)( const Standard_Boolean ) ) static_cast<void (StepData_StepWriter::*)( const Standard_Boolean ) >(&StepData_StepWriter::NewLine),
             R"#(flushes current line; if empty, flushes it (defines a new empty line) if evenempty is True; else, skips it)#"  , py::arg("evenempty"))
        .def("JoinLast",
             (void (StepData_StepWriter::*)( const Standard_Boolean ) ) static_cast<void (StepData_StepWriter::*)( const Standard_Boolean ) >(&StepData_StepWriter::JoinLast),
             R"#(joins current line to last one, only if new length is 72 max if newline is True, a new current line begins; else, current line is set to the last line (once joined) itself an can be completed)#"  , py::arg("newline"))
        .def("Indent",
             (void (StepData_StepWriter::*)( const Standard_Boolean ) ) static_cast<void (StepData_StepWriter::*)( const Standard_Boolean ) >(&StepData_StepWriter::Indent),
             R"#(asks that further indentations will begin at position of entity first opening bracket; else they begin at zero (def) for each sublist level, two more blancks are added at beginning (except for text continuation, which must begin at true zero))#"  , py::arg("onent"))
        .def("SendIdent",
             (void (StepData_StepWriter::*)( const Standard_Integer ) ) static_cast<void (StepData_StepWriter::*)( const Standard_Integer ) >(&StepData_StepWriter::SendIdent),
             R"#(begins an entity with an ident plus '=' (at beginning of line) entity ident is its Number given by the containing Model Warning : <ident> must be, either Number or Label, according LabelMode)#"  , py::arg("ident"))
        .def("SendScope",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::SendScope),
             R"#(sets a begin of Scope (ends this line))#" )
        .def("SendEndscope",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::SendEndscope),
             R"#(sets an end of Scope (on a separate line))#" )
        .def("Comment",
             (void (StepData_StepWriter::*)( const Standard_Boolean ) ) static_cast<void (StepData_StepWriter::*)( const Standard_Boolean ) >(&StepData_StepWriter::Comment),
             R"#(sets a comment mark : if mode is True, begins Comment zone, if mode is False, ends Comment zone (if one is begun))#"  , py::arg("mode"))
        .def("SendComment",
             (void (StepData_StepWriter::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepData_StepWriter::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepData_StepWriter::SendComment),
             R"#(sends a comment. Error if we are not inside a comment zone)#"  , py::arg("text"))
        .def("SendComment",
             (void (StepData_StepWriter::*)( const Standard_CString ) ) static_cast<void (StepData_StepWriter::*)( const Standard_CString ) >(&StepData_StepWriter::SendComment),
             R"#(same as above but accepts a CString (ex.: "..." directly))#"  , py::arg("text"))
        .def("StartEntity",
             (void (StepData_StepWriter::*)( const TCollection_AsciiString & ) ) static_cast<void (StepData_StepWriter::*)( const TCollection_AsciiString & ) >(&StepData_StepWriter::StartEntity),
             R"#(sets entity's StepType, opens brakets, starts param no to 0 params are separated by comma Remark : for a Multiple Type Entity (see Express ANDOR clause) StartComplex must be called before sending componants, then each "Componant" must be send separately (one call to StartEntity for each one) : the Type which preceeds is then automaticaly closed. Once all the componants have been sent, EndComplex must be called, then and only then EndEntity)#"  , py::arg("atype"))
        .def("StartComplex",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::StartComplex),
             R"#(sends the start of a complex entity, which is a simple open bracket (without increasing braket level) It must be called JUST AFTER SendEntity and BEFORE sending componants, each one begins by StartEntity)#" )
        .def("EndComplex",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::EndComplex),
             R"#(sends the end of a complex entity : a simple closed bracket It must be called AFTER sending all the componants and BEFORE the final call to EndEntity)#" )
        .def("SendField",
             (void (StepData_StepWriter::*)( const StepData_Field & , const opencascade::handle<StepData_PDescr> & ) ) static_cast<void (StepData_StepWriter::*)( const StepData_Field & , const opencascade::handle<StepData_PDescr> & ) >(&StepData_StepWriter::SendField),
             R"#(Sends the content of a field, controlled by its descriptor If the descriptor is not defined, follows the description detained by the field itself)#"  , py::arg("fild"),  py::arg("descr"))
        .def("SendSelect",
             (void (StepData_StepWriter::*)( const opencascade::handle<StepData_SelectMember> & , const opencascade::handle<StepData_PDescr> & ) ) static_cast<void (StepData_StepWriter::*)( const opencascade::handle<StepData_SelectMember> & , const opencascade::handle<StepData_PDescr> & ) >(&StepData_StepWriter::SendSelect),
             R"#(Sends a SelectMember, which cab be named or not)#"  , py::arg("sm"),  py::arg("descr"))
        .def("SendList",
             (void (StepData_StepWriter::*)( const StepData_FieldList & , const opencascade::handle<StepData_ESDescr> & ) ) static_cast<void (StepData_StepWriter::*)( const StepData_FieldList & , const opencascade::handle<StepData_ESDescr> & ) >(&StepData_StepWriter::SendList),
             R"#(Send the content of an entity as being a FieldList controlled by its descriptor. This includes start and end brackets but not the entity type)#"  , py::arg("list"),  py::arg("descr"))
        .def("OpenSub",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::OpenSub),
             R"#(open a sublist by a '(')#" )
        .def("OpenTypedSub",
             (void (StepData_StepWriter::*)( const Standard_CString ) ) static_cast<void (StepData_StepWriter::*)( const Standard_CString ) >(&StepData_StepWriter::OpenTypedSub),
             R"#(open a sublist with its type then a '(')#"  , py::arg("subtype"))
        .def("CloseSub",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::CloseSub),
             R"#(closes a sublist by a ')')#" )
        .def("AddParam",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::AddParam),
             R"#(prepares adding a parameter (that is, adds ',' except for first one); normally for internal use; can be used to send a totally empty parameter (with no litteral value))#" )
        .def("Send",
             (void (StepData_StepWriter::*)( const Standard_Integer ) ) static_cast<void (StepData_StepWriter::*)( const Standard_Integer ) >(&StepData_StepWriter::Send),
             R"#(sends an integer parameter)#"  , py::arg("val"))
        .def("Send",
             (void (StepData_StepWriter::*)( const Standard_Real ) ) static_cast<void (StepData_StepWriter::*)( const Standard_Real ) >(&StepData_StepWriter::Send),
             R"#(sends a real parameter (wroks with FloatWriter))#"  , py::arg("val"))
        .def("Send",
             (void (StepData_StepWriter::*)( const TCollection_AsciiString & ) ) static_cast<void (StepData_StepWriter::*)( const TCollection_AsciiString & ) >(&StepData_StepWriter::Send),
             R"#(sends a text given as string (it will be set between '...'))#"  , py::arg("val"))
        .def("Send",
             (void (StepData_StepWriter::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (StepData_StepWriter::*)( const opencascade::handle<Standard_Transient> & ) >(&StepData_StepWriter::Send),
             R"#(sends a reference to an entity (its identifier with '#') REMARK 1 : a Null <val> is interpreted as "Undefined" REMARK 2 : for an HAsciiString which is not recorded in the Model, it is send as its String Content, between quotes)#"  , py::arg("val"))
        .def("SendBoolean",
             (void (StepData_StepWriter::*)( const Standard_Boolean ) ) static_cast<void (StepData_StepWriter::*)( const Standard_Boolean ) >(&StepData_StepWriter::SendBoolean),
             R"#(sends a Boolean as .T. for True or .F. for False (it is an useful case of Enum, which is built-in))#"  , py::arg("val"))
        .def("SendLogical",
             (void (StepData_StepWriter::*)( const StepData_Logical ) ) static_cast<void (StepData_StepWriter::*)( const StepData_Logical ) >(&StepData_StepWriter::SendLogical),
             R"#(sends a Logical as .T. or .F. or .U. according its Value (it is a standard case of Enum for Step, and is built-in))#"  , py::arg("val"))
        .def("SendString",
             (void (StepData_StepWriter::*)( const TCollection_AsciiString & ) ) static_cast<void (StepData_StepWriter::*)( const TCollection_AsciiString & ) >(&StepData_StepWriter::SendString),
             R"#(sends a string exactly as it is given)#"  , py::arg("val"))
        .def("SendString",
             (void (StepData_StepWriter::*)( const Standard_CString ) ) static_cast<void (StepData_StepWriter::*)( const Standard_CString ) >(&StepData_StepWriter::SendString),
             R"#(sends a string exactly as it is given)#"  , py::arg("val"))
        .def("SendEnum",
             (void (StepData_StepWriter::*)( const TCollection_AsciiString & ) ) static_cast<void (StepData_StepWriter::*)( const TCollection_AsciiString & ) >(&StepData_StepWriter::SendEnum),
             R"#(sends an enum given by String (litteral expression) adds '.' around it if not done Remark : val can be computed by class EnumTool from StepData: StepWriter.SendEnum (myenum.Text(enumval));)#"  , py::arg("val"))
        .def("SendEnum",
             (void (StepData_StepWriter::*)( const Standard_CString ) ) static_cast<void (StepData_StepWriter::*)( const Standard_CString ) >(&StepData_StepWriter::SendEnum),
             R"#(sends an enum given by String (litteral expression) adds '.' around it if not done)#"  , py::arg("val"))
        .def("SendArrReal",
             (void (StepData_StepWriter::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepData_StepWriter::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepData_StepWriter::SendArrReal),
             R"#(sends an array of real)#"  , py::arg("anArr"))
        .def("SendUndef",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::SendUndef),
             R"#(sends an undefined (optionnal absent) parameter (by '$'))#" )
        .def("SendDerived",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::SendDerived),
             R"#(sends a "Derived" parameter (by '*'). A Derived Parameter has been inherited from a Super-Type then redefined as being computed by a function. Hence its value in file is senseless.)#" )
        .def("EndEntity",
             (void (StepData_StepWriter::*)() ) static_cast<void (StepData_StepWriter::*)() >(&StepData_StepWriter::EndEntity),
             R"#(sends end of entity (closing bracket plus ';') Error if count of opened-closed brackets is not null)#" )
        .def("CheckList",
             (Interface_CheckIterator (StepData_StepWriter::*)() const) static_cast<Interface_CheckIterator (StepData_StepWriter::*)() const>(&StepData_StepWriter::CheckList),
             R"#(Returns the check-list, which has received possible checks : for unknown entities, badly loaded ones, null or unknown references)#" )
        .def("NbLines",
             (Standard_Integer (StepData_StepWriter::*)() const) static_cast<Standard_Integer (StepData_StepWriter::*)() const>(&StepData_StepWriter::NbLines),
             R"#(Returns count of Lines)#" )
        .def("Line",
             (opencascade::handle<TCollection_HAsciiString> (StepData_StepWriter::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepData_StepWriter::*)( const Standard_Integer ) const>(&StepData_StepWriter::Line),
             R"#(Returns a Line given its rank in the File)#"  , py::arg("num"))
        .def("Print",
             (Standard_Boolean (StepData_StepWriter::*)( std::ostream & ) ) static_cast<Standard_Boolean (StepData_StepWriter::*)( std::ostream & ) >(&StepData_StepWriter::Print),
             R"#(writes result on an output defined as an OStream then clears it)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_UndefinedEntity ,opencascade::handle<StepData_UndefinedEntity> , Standard_Transient>>(m.attr("StepData_UndefinedEntity"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Boolean >()  , py::arg("issub") )
    // custom constructors
    // methods
        .def("UndefinedContent",
             (opencascade::handle<Interface_UndefinedContent> (StepData_UndefinedEntity::*)() const) static_cast<opencascade::handle<Interface_UndefinedContent> (StepData_UndefinedEntity::*)() const>(&StepData_UndefinedEntity::UndefinedContent),
             R"#(Returns the UndefinedContent which brings the Parameters)#" )
        .def("IsSub",
             (Standard_Boolean (StepData_UndefinedEntity::*)() const) static_cast<Standard_Boolean (StepData_UndefinedEntity::*)() const>(&StepData_UndefinedEntity::IsSub),
             R"#(Returns True if an Unndefined Entity is SubPart of another one)#" )
        .def("IsComplex",
             (Standard_Boolean (StepData_UndefinedEntity::*)() const) static_cast<Standard_Boolean (StepData_UndefinedEntity::*)() const>(&StepData_UndefinedEntity::IsComplex),
             R"#(Returns True if <me> defines a Multiple Type Entity (see ANDOR))#" )
        .def("Next",
             (opencascade::handle<StepData_UndefinedEntity> (StepData_UndefinedEntity::*)() const) static_cast<opencascade::handle<StepData_UndefinedEntity> (StepData_UndefinedEntity::*)() const>(&StepData_UndefinedEntity::Next),
             R"#(For a Multiple Type Entity, returns the Next "Componant" For more than two Types, iterative definition (Next->Next...) Returns a Null Handle for the end of the List)#" )
        .def("StepType",
             (Standard_CString (StepData_UndefinedEntity::*)() const) static_cast<Standard_CString (StepData_UndefinedEntity::*)() const>(&StepData_UndefinedEntity::StepType),
             R"#(gives entity type, read from file For a Complex Type Entity, gives the first Type read, each "Next" gives its "partial" type was C++ : return const)#" )
        .def("ReadRecord",
             (void (StepData_UndefinedEntity::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & ) ) static_cast<void (StepData_UndefinedEntity::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & ) >(&StepData_UndefinedEntity::ReadRecord),
             R"#(reads data from StepReaderData (i.e. from file), by filling StepType and parameters stored in the UndefinedContent)#"  , py::arg("SR"),  py::arg("num"),  py::arg("ach"))
        .def("WriteParams",
             (void (StepData_UndefinedEntity::*)( StepData_StepWriter & ) const) static_cast<void (StepData_UndefinedEntity::*)( StepData_StepWriter & ) const>(&StepData_UndefinedEntity::WriteParams),
             R"#(write data to StepWriter, taken from UndefinedContent)#"  , py::arg("SW"))
        .def("GetFromAnother",
             (void (StepData_UndefinedEntity::*)( const opencascade::handle<StepData_UndefinedEntity> & , Interface_CopyTool & ) ) static_cast<void (StepData_UndefinedEntity::*)( const opencascade::handle<StepData_UndefinedEntity> & , Interface_CopyTool & ) >(&StepData_UndefinedEntity::GetFromAnother),
             R"#(reads another UndefinedEntity from StepData)#"  , py::arg("other"),  py::arg("TC"))
        .def("FillShared",
             (void (StepData_UndefinedEntity::*)( Interface_EntityIterator & ) const) static_cast<void (StepData_UndefinedEntity::*)( Interface_EntityIterator & ) const>(&StepData_UndefinedEntity::FillShared),
             R"#(Fills the list of shared entities)#"  , py::arg("list"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_UndefinedEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_UndefinedEntity::*)() const>(&StepData_UndefinedEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_UndefinedEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_UndefinedEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_WriterLib , shared_ptr<StepData_WriterLib> >>(m.attr("StepData_WriterLib"))
    // constructors
        .def(py::init< const opencascade::handle<StepData_Protocol> & >()  , py::arg("aprotocol") )
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddProtocol",
             (void (StepData_WriterLib::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (StepData_WriterLib::*)( const opencascade::handle<Standard_Transient> & ) >(&StepData_WriterLib::AddProtocol),
             R"#(Adds a couple (Module-Protocol) to the Library, given the class of a Protocol. Takes Resources into account. (if <aprotocol> is not of type TheProtocol, it is not added))#"  , py::arg("aprotocol"))
        .def("Clear",
             (void (StepData_WriterLib::*)() ) static_cast<void (StepData_WriterLib::*)() >(&StepData_WriterLib::Clear),
             R"#(Clears the list of Modules of a library (can be used to redefine the order of Modules before action : Clear then refill the Library by calls to AddProtocol))#" )
        .def("SetComplete",
             (void (StepData_WriterLib::*)() ) static_cast<void (StepData_WriterLib::*)() >(&StepData_WriterLib::SetComplete),
             R"#(Sets a library to be defined with the complete Global list (all the couples Protocol/Modules recorded in it))#" )
        .def("Select",
             (Standard_Boolean (StepData_WriterLib::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<StepData_ReadWriteModule> & , Standard_Integer & ) const) static_cast<Standard_Boolean (StepData_WriterLib::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<StepData_ReadWriteModule> & , Standard_Integer & ) const>(&StepData_WriterLib::Select),
             R"#(Selects a Module from the Library, given an Object. Returns True if Select has succeeded, False else. Also Returns (as arguments) the selected Module and the Case Number determined by the associated Protocol. If Select has failed, <module> is Null Handle and CN is zero. (Select can work on any criterium, such as Object DynamicType))#"  , py::arg("obj"),  py::arg("module"),  py::arg("CN"))
        .def("Start",
             (void (StepData_WriterLib::*)() ) static_cast<void (StepData_WriterLib::*)() >(&StepData_WriterLib::Start),
             R"#(Starts Iteration on the Modules (sets it on the first one))#" )
        .def("More",
             (Standard_Boolean (StepData_WriterLib::*)() const) static_cast<Standard_Boolean (StepData_WriterLib::*)() const>(&StepData_WriterLib::More),
             R"#(Returns True if there are more Modules to iterate on)#" )
        .def("Next",
             (void (StepData_WriterLib::*)() ) static_cast<void (StepData_WriterLib::*)() >(&StepData_WriterLib::Next),
             R"#(Iterates by getting the next Module in the list If there is none, the exception will be raised by Value)#" )
        .def("Module",
             (const opencascade::handle<StepData_ReadWriteModule> & (StepData_WriterLib::*)() const) static_cast<const opencascade::handle<StepData_ReadWriteModule> & (StepData_WriterLib::*)() const>(&StepData_WriterLib::Module),
             R"#(Returns the current Module in the Iteration)#" )
        .def("Protocol",
             (const opencascade::handle<StepData_Protocol> & (StepData_WriterLib::*)() const) static_cast<const opencascade::handle<StepData_Protocol> & (StepData_WriterLib::*)() const>(&StepData_WriterLib::Protocol),
             R"#(Returns the current Protocol in the Iteration)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("SetGlobal_s",
                    (void (*)( const opencascade::handle<StepData_ReadWriteModule> & , const opencascade::handle<StepData_Protocol> & ) ) static_cast<void (*)( const opencascade::handle<StepData_ReadWriteModule> & , const opencascade::handle<StepData_Protocol> & ) >(&StepData_WriterLib::SetGlobal),
                    R"#(Adds a couple (Module-Protocol) into the global definition set for this class of Library.)#"  , py::arg("amodule"),  py::arg("aprotocol"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_DefaultGeneral ,opencascade::handle<StepData_DefaultGeneral> , StepData_GeneralModule>>(m.attr("StepData_DefaultGeneral"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("FillSharedCase",
             (void (StepData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const) static_cast<void (StepData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const>(&StepData_DefaultGeneral::FillSharedCase),
             R"#(Specific filling of the list of Entities shared by an Entity <ent>, which is an UnknownEntity from StepData.)#"  , py::arg("casenum"),  py::arg("ent"),  py::arg("iter"))
        .def("CheckCase",
             (void (StepData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (StepData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&StepData_DefaultGeneral::CheckCase),
             R"#(Specific Checking of an Entity <ent>)#"  , py::arg("casenum"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (StepData_DefaultGeneral::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (StepData_DefaultGeneral::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const>(&StepData_DefaultGeneral::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("CopyCase",
             (void (StepData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const) static_cast<void (StepData_DefaultGeneral::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const>(&StepData_DefaultGeneral::CopyCase),
             R"#(Specific Copy ("Deep") from <entfrom> to <entto> (same type) by using a CopyTool which provides its working Map. Use method Transferred from TransferControl to work)#"  , py::arg("casenum"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_DefaultGeneral::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_DefaultGeneral::*)() const>(&StepData_DefaultGeneral::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_DefaultGeneral::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_DefaultGeneral::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_ECDescr ,opencascade::handle<StepData_ECDescr> , StepData_EDescr>>(m.attr("StepData_ECDescr"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Add",
             (void (StepData_ECDescr::*)( const opencascade::handle<StepData_ESDescr> & ) ) static_cast<void (StepData_ECDescr::*)( const opencascade::handle<StepData_ESDescr> & ) >(&StepData_ECDescr::Add),
             R"#(Adds a member Warning : members are added in alphabetic order)#"  , py::arg("member"))
        .def("NbMembers",
             (Standard_Integer (StepData_ECDescr::*)() const) static_cast<Standard_Integer (StepData_ECDescr::*)() const>(&StepData_ECDescr::NbMembers),
             R"#(Returns the count of members)#" )
        .def("Member",
             (opencascade::handle<StepData_ESDescr> (StepData_ECDescr::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepData_ESDescr> (StepData_ECDescr::*)( const Standard_Integer ) const>(&StepData_ECDescr::Member),
             R"#(Returns a Member from its rank)#"  , py::arg("num"))
        .def("TypeList",
             (opencascade::handle<TColStd_HSequenceOfAsciiString> (StepData_ECDescr::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfAsciiString> (StepData_ECDescr::*)() const>(&StepData_ECDescr::TypeList),
             R"#(Returns the ordered list of types)#" )
        .def("Matches",
             (Standard_Boolean (StepData_ECDescr::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepData_ECDescr::*)( const Standard_CString ) const>(&StepData_ECDescr::Matches),
             R"#(Tells if a ESDescr matches a step type : exact or super type)#"  , py::arg("steptype"))
        .def("IsComplex",
             (Standard_Boolean (StepData_ECDescr::*)() const) static_cast<Standard_Boolean (StepData_ECDescr::*)() const>(&StepData_ECDescr::IsComplex),
             R"#(Returns True)#" )
        .def("NewEntity",
             (opencascade::handle<StepData_Described> (StepData_ECDescr::*)() const) static_cast<opencascade::handle<StepData_Described> (StepData_ECDescr::*)() const>(&StepData_ECDescr::NewEntity),
             R"#(Creates a described entity (i.e. a complex one, made of one simple entity per member))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_ECDescr::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_ECDescr::*)() const>(&StepData_ECDescr::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_ECDescr::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_ECDescr::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_ESDescr ,opencascade::handle<StepData_ESDescr> , StepData_EDescr>>(m.attr("StepData_ESDescr"))
    // constructors
        .def(py::init< const Standard_CString >()  , py::arg("name") )
    // custom constructors
    // methods
        .def("SetNbFields",
             (void (StepData_ESDescr::*)( const Standard_Integer ) ) static_cast<void (StepData_ESDescr::*)( const Standard_Integer ) >(&StepData_ESDescr::SetNbFields),
             R"#(Sets a new count of fields Each one is described by a PDescr)#"  , py::arg("nb"))
        .def("SetField",
             (void (StepData_ESDescr::*)( const Standard_Integer , const Standard_CString , const opencascade::handle<StepData_PDescr> & ) ) static_cast<void (StepData_ESDescr::*)( const Standard_Integer , const Standard_CString , const opencascade::handle<StepData_PDescr> & ) >(&StepData_ESDescr::SetField),
             R"#(Sets a PDescr to describe a field A Field is designated by its rank and name)#"  , py::arg("num"),  py::arg("name"),  py::arg("descr"))
        .def("SetBase",
             (void (StepData_ESDescr::*)( const opencascade::handle<StepData_ESDescr> & ) ) static_cast<void (StepData_ESDescr::*)( const opencascade::handle<StepData_ESDescr> & ) >(&StepData_ESDescr::SetBase),
             R"#(Sets an ESDescr as based on another one Hence, if there are inherited fields, the derived ESDescr cumulates all them, while the base just records its own ones)#"  , py::arg("base"))
        .def("SetSuper",
             (void (StepData_ESDescr::*)( const opencascade::handle<StepData_ESDescr> & ) ) static_cast<void (StepData_ESDescr::*)( const opencascade::handle<StepData_ESDescr> & ) >(&StepData_ESDescr::SetSuper),
             R"#(Sets an ESDescr as "super-type". Applies an a base (non derived) ESDescr)#"  , py::arg("super"))
        .def("TypeName",
             (Standard_CString (StepData_ESDescr::*)() const) static_cast<Standard_CString (StepData_ESDescr::*)() const>(&StepData_ESDescr::TypeName),
             R"#(Returns the type name given at creation time)#" )
        .def("StepType",
             (const TCollection_AsciiString & (StepData_ESDescr::*)() const) static_cast<const TCollection_AsciiString & (StepData_ESDescr::*)() const>(&StepData_ESDescr::StepType),
             R"#(Returns the type name as an AsciiString)#" )
        .def("Base",
             (opencascade::handle<StepData_ESDescr> (StepData_ESDescr::*)() const) static_cast<opencascade::handle<StepData_ESDescr> (StepData_ESDescr::*)() const>(&StepData_ESDescr::Base),
             R"#(Returns the basic ESDescr, null if <me> is not derived)#" )
        .def("Super",
             (opencascade::handle<StepData_ESDescr> (StepData_ESDescr::*)() const) static_cast<opencascade::handle<StepData_ESDescr> (StepData_ESDescr::*)() const>(&StepData_ESDescr::Super),
             R"#(Returns the super-type ESDescr, null if <me> is root)#" )
        .def("IsSub",
             (Standard_Boolean (StepData_ESDescr::*)( const opencascade::handle<StepData_ESDescr> & ) const) static_cast<Standard_Boolean (StepData_ESDescr::*)( const opencascade::handle<StepData_ESDescr> & ) const>(&StepData_ESDescr::IsSub),
             R"#(Tells if <me> is sub-type of (or equal to) another one)#"  , py::arg("other"))
        .def("NbFields",
             (Standard_Integer (StepData_ESDescr::*)() const) static_cast<Standard_Integer (StepData_ESDescr::*)() const>(&StepData_ESDescr::NbFields),
             R"#(Returns the count of fields)#" )
        .def("Rank",
             (Standard_Integer (StepData_ESDescr::*)( const Standard_CString ) const) static_cast<Standard_Integer (StepData_ESDescr::*)( const Standard_CString ) const>(&StepData_ESDescr::Rank),
             R"#(Returns the rank of a field from its name. 0 if unknown)#"  , py::arg("name"))
        .def("Name",
             (Standard_CString (StepData_ESDescr::*)( const Standard_Integer ) const) static_cast<Standard_CString (StepData_ESDescr::*)( const Standard_Integer ) const>(&StepData_ESDescr::Name),
             R"#(Returns the name of a field from its rank. empty if outofrange)#"  , py::arg("num"))
        .def("Field",
             (opencascade::handle<StepData_PDescr> (StepData_ESDescr::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepData_PDescr> (StepData_ESDescr::*)( const Standard_Integer ) const>(&StepData_ESDescr::Field),
             R"#(Returns the PDescr for the field <num> (or Null))#"  , py::arg("num"))
        .def("NamedField",
             (opencascade::handle<StepData_PDescr> (StepData_ESDescr::*)( const Standard_CString ) const) static_cast<opencascade::handle<StepData_PDescr> (StepData_ESDescr::*)( const Standard_CString ) const>(&StepData_ESDescr::NamedField),
             R"#(Returns the PDescr for the field named <name> (or Null))#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepData_ESDescr::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepData_ESDescr::*)( const Standard_CString ) const>(&StepData_ESDescr::Matches),
             R"#(Tells if a ESDescr matches a step type : exact or super type)#"  , py::arg("steptype"))
        .def("IsComplex",
             (Standard_Boolean (StepData_ESDescr::*)() const) static_cast<Standard_Boolean (StepData_ESDescr::*)() const>(&StepData_ESDescr::IsComplex),
             R"#(Returns False)#" )
        .def("NewEntity",
             (opencascade::handle<StepData_Described> (StepData_ESDescr::*)() const) static_cast<opencascade::handle<StepData_Described> (StepData_ESDescr::*)() const>(&StepData_ESDescr::NewEntity),
             R"#(Creates a described entity (i.e. a simple one))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_ESDescr::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_ESDescr::*)() const>(&StepData_ESDescr::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_ESDescr::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_ESDescr::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_FieldList1 , shared_ptr<StepData_FieldList1> , StepData_FieldList>>(m.attr("StepData_FieldList1"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("NbFields",
             (Standard_Integer (StepData_FieldList1::*)() const) static_cast<Standard_Integer (StepData_FieldList1::*)() const>(&StepData_FieldList1::NbFields),
             R"#(Returns the count of fields. Here, returns 1)#" )
        .def("Field",
             (const StepData_Field & (StepData_FieldList1::*)( const Standard_Integer ) const) static_cast<const StepData_Field & (StepData_FieldList1::*)( const Standard_Integer ) const>(&StepData_FieldList1::Field),
             R"#(Returns the field n0 <num> between 1 and NbFields (read only))#"  , py::arg("num"))
        .def("CField",
             (StepData_Field & (StepData_FieldList1::*)( const Standard_Integer ) ) static_cast<StepData_Field & (StepData_FieldList1::*)( const Standard_Integer ) >(&StepData_FieldList1::CField),
             R"#(Returns the field n0 <num> between 1 and NbFields, in order to modify its content)#"  , py::arg("num"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_FieldListD , shared_ptr<StepData_FieldListD> , StepData_FieldList>>(m.attr("StepData_FieldListD"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("nb") )
    // custom constructors
    // methods
        .def("SetNb",
             (void (StepData_FieldListD::*)( const Standard_Integer ) ) static_cast<void (StepData_FieldListD::*)( const Standard_Integer ) >(&StepData_FieldListD::SetNb),
             R"#(Sets a new count of Fields. Former contents are lost)#"  , py::arg("nb"))
        .def("NbFields",
             (Standard_Integer (StepData_FieldListD::*)() const) static_cast<Standard_Integer (StepData_FieldListD::*)() const>(&StepData_FieldListD::NbFields),
             R"#(Returns the count of fields. Here, returns starting <nb>)#" )
        .def("Field",
             (const StepData_Field & (StepData_FieldListD::*)( const Standard_Integer ) const) static_cast<const StepData_Field & (StepData_FieldListD::*)( const Standard_Integer ) const>(&StepData_FieldListD::Field),
             R"#(Returns the field n0 <num> between 1 and NbFields (read only))#"  , py::arg("num"))
        .def("CField",
             (StepData_Field & (StepData_FieldListD::*)( const Standard_Integer ) ) static_cast<StepData_Field & (StepData_FieldListD::*)( const Standard_Integer ) >(&StepData_FieldListD::CField),
             R"#(Returns the field n0 <num> between 1 and NbFields, in order to modify its content)#"  , py::arg("num"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_FieldListN , shared_ptr<StepData_FieldListN> , StepData_FieldList>>(m.attr("StepData_FieldListN"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("nb") )
    // custom constructors
    // methods
        .def("NbFields",
             (Standard_Integer (StepData_FieldListN::*)() const) static_cast<Standard_Integer (StepData_FieldListN::*)() const>(&StepData_FieldListN::NbFields),
             R"#(Returns the count of fields. Here, returns starting <nb>)#" )
        .def("Field",
             (const StepData_Field & (StepData_FieldListN::*)( const Standard_Integer ) const) static_cast<const StepData_Field & (StepData_FieldListN::*)( const Standard_Integer ) const>(&StepData_FieldListN::Field),
             R"#(Returns the field n0 <num> between 1 and NbFields (read only))#"  , py::arg("num"))
        .def("CField",
             (StepData_Field & (StepData_FieldListN::*)( const Standard_Integer ) ) static_cast<StepData_Field & (StepData_FieldListN::*)( const Standard_Integer ) >(&StepData_FieldListN::CField),
             R"#(Returns the field n0 <num> between 1 and NbFields, in order to modify its content)#"  , py::arg("num"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_FileProtocol ,opencascade::handle<StepData_FileProtocol> , StepData_Protocol>>(m.attr("StepData_FileProtocol"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Add",
             (void (StepData_FileProtocol::*)( const opencascade::handle<StepData_Protocol> & ) ) static_cast<void (StepData_FileProtocol::*)( const opencascade::handle<StepData_Protocol> & ) >(&StepData_FileProtocol::Add),
             R"#(Adds a Protocol to the definition list of the FileProtocol But ensures that each class of Protocol is present only once in this list)#"  , py::arg("protocol"))
        .def("NbResources",
             (Standard_Integer (StepData_FileProtocol::*)() const) static_cast<Standard_Integer (StepData_FileProtocol::*)() const>(&StepData_FileProtocol::NbResources),
             R"#(Gives the count of Protocols used as Resource (can be zero) i.e. the count of Protocol recorded by calling the method Add)#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (StepData_FileProtocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_Protocol> (StepData_FileProtocol::*)( const Standard_Integer ) const>(&StepData_FileProtocol::Resource),
             R"#(Returns a Resource, given a rank. Here, rank of calling Add)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (StepData_FileProtocol::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (StepData_FileProtocol::*)( const opencascade::handle<Standard_Type> & ) const>(&StepData_FileProtocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type Here, NO Type at all is recognized properly : all Types are recognized by the resources)#"  , py::arg("atype"))
        .def("GlobalCheck",
             (Standard_Boolean (StepData_FileProtocol::*)( const Interface_Graph & , opencascade::handle<Interface_Check> & ) const) static_cast<Standard_Boolean (StepData_FileProtocol::*)( const Interface_Graph & , opencascade::handle<Interface_Check> & ) const>(&StepData_FileProtocol::GlobalCheck),
             R"#(Calls GlobalCheck for each of its recorded ressources)#"  , py::arg("G"),  py::arg("ach"))
        .def("SchemaName",
             (Standard_CString (StepData_FileProtocol::*)() const) static_cast<Standard_CString (StepData_FileProtocol::*)() const>(&StepData_FileProtocol::SchemaName),
             R"#(Returns the Schema Name attached to each class of Protocol To be redefined by each sub-class Here, SchemaName returns "" (empty String) was C++ : return const)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_FileProtocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_FileProtocol::*)() const>(&StepData_FileProtocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_FileProtocol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_FileProtocol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_Plex ,opencascade::handle<StepData_Plex> , StepData_Described>>(m.attr("StepData_Plex"))
    // constructors
        .def(py::init< const opencascade::handle<StepData_ECDescr> & >()  , py::arg("descr") )
    // custom constructors
    // methods
        .def("Add",
             (void (StepData_Plex::*)( const opencascade::handle<StepData_Simple> & ) ) static_cast<void (StepData_Plex::*)( const opencascade::handle<StepData_Simple> & ) >(&StepData_Plex::Add),
             R"#(Adds a member to <me>)#"  , py::arg("member"))
        .def("ECDescr",
             (opencascade::handle<StepData_ECDescr> (StepData_Plex::*)() const) static_cast<opencascade::handle<StepData_ECDescr> (StepData_Plex::*)() const>(&StepData_Plex::ECDescr),
             R"#(Returns the Description as for a Plex)#" )
        .def("IsComplex",
             (Standard_Boolean (StepData_Plex::*)() const) static_cast<Standard_Boolean (StepData_Plex::*)() const>(&StepData_Plex::IsComplex),
             R"#(Returns False)#" )
        .def("Matches",
             (Standard_Boolean (StepData_Plex::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepData_Plex::*)( const Standard_CString ) const>(&StepData_Plex::Matches),
             R"#(Tells if a step type is matched by <me> For a Simple Entity : own type or super type For a Complex Entity : one of the members)#"  , py::arg("steptype"))
        .def("As",
             (opencascade::handle<StepData_Simple> (StepData_Plex::*)( const Standard_CString ) const) static_cast<opencascade::handle<StepData_Simple> (StepData_Plex::*)( const Standard_CString ) const>(&StepData_Plex::As),
             R"#(Returns a Simple Entity which matches with a Type in <me> : For a Simple Entity : me if it matches, else a null handle For a Complex Entity : the member which matches, else null)#"  , py::arg("steptype"))
        .def("HasField",
             (Standard_Boolean (StepData_Plex::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepData_Plex::*)( const Standard_CString ) const>(&StepData_Plex::HasField),
             R"#(Tells if a Field brings a given name)#"  , py::arg("name"))
        .def("Field",
             (const StepData_Field & (StepData_Plex::*)( const Standard_CString ) const) static_cast<const StepData_Field & (StepData_Plex::*)( const Standard_CString ) const>(&StepData_Plex::Field),
             R"#(Returns a Field from its name; read-only)#"  , py::arg("name"))
        .def("CField",
             (StepData_Field & (StepData_Plex::*)( const Standard_CString ) ) static_cast<StepData_Field & (StepData_Plex::*)( const Standard_CString ) >(&StepData_Plex::CField),
             R"#(Returns a Field from its name; read or write)#"  , py::arg("name"))
        .def("NbMembers",
             (Standard_Integer (StepData_Plex::*)() const) static_cast<Standard_Integer (StepData_Plex::*)() const>(&StepData_Plex::NbMembers),
             R"#(Returns the count of simple members)#" )
        .def("Member",
             (opencascade::handle<StepData_Simple> (StepData_Plex::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepData_Simple> (StepData_Plex::*)( const Standard_Integer ) const>(&StepData_Plex::Member),
             R"#(Returns a simple member from its rank)#"  , py::arg("num"))
        .def("TypeList",
             (opencascade::handle<TColStd_HSequenceOfAsciiString> (StepData_Plex::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfAsciiString> (StepData_Plex::*)() const>(&StepData_Plex::TypeList),
             R"#(Returns the actual list of members types)#" )
        .def("Check",
             (void (StepData_Plex::*)( opencascade::handle<Interface_Check> & ) const) static_cast<void (StepData_Plex::*)( opencascade::handle<Interface_Check> & ) const>(&StepData_Plex::Check),
             R"#(Fills a Check by using its Description)#"  , py::arg("ach"))
        .def("Shared",
             (void (StepData_Plex::*)( Interface_EntityIterator & ) const) static_cast<void (StepData_Plex::*)( Interface_EntityIterator & ) const>(&StepData_Plex::Shared),
             R"#(Fills an EntityIterator with entities shared by <me>)#"  , py::arg("list"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_Plex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_Plex::*)() const>(&StepData_Plex::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_Plex::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_Plex::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_SelectInt ,opencascade::handle<StepData_SelectInt> , StepData_SelectMember>>(m.attr("StepData_SelectInt"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Kind",
             (Standard_Integer (StepData_SelectInt::*)() const) static_cast<Standard_Integer (StepData_SelectInt::*)() const>(&StepData_SelectInt::Kind),
             R"#(None)#" )
        .def("SetKind",
             (void (StepData_SelectInt::*)( const Standard_Integer ) ) static_cast<void (StepData_SelectInt::*)( const Standard_Integer ) >(&StepData_SelectInt::SetKind),
             R"#(None)#"  , py::arg("kind"))
        .def("Int",
             (Standard_Integer (StepData_SelectInt::*)() const) static_cast<Standard_Integer (StepData_SelectInt::*)() const>(&StepData_SelectInt::Int),
             R"#(None)#" )
        .def("SetInt",
             (void (StepData_SelectInt::*)( const Standard_Integer ) ) static_cast<void (StepData_SelectInt::*)( const Standard_Integer ) >(&StepData_SelectInt::SetInt),
             R"#(None)#"  , py::arg("val"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_SelectInt::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_SelectInt::*)() const>(&StepData_SelectInt::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_SelectInt::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_SelectInt::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_SelectNamed ,opencascade::handle<StepData_SelectNamed> , StepData_SelectMember>>(m.attr("StepData_SelectNamed"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepData_SelectNamed::*)() const) static_cast<Standard_Boolean (StepData_SelectNamed::*)() const>(&StepData_SelectNamed::HasName),
             R"#(None)#" )
        .def("Name",
             (Standard_CString (StepData_SelectNamed::*)() const) static_cast<Standard_CString (StepData_SelectNamed::*)() const>(&StepData_SelectNamed::Name),
             R"#(None)#" )
        .def("SetName",
             (Standard_Boolean (StepData_SelectNamed::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepData_SelectNamed::*)( const Standard_CString ) >(&StepData_SelectNamed::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("Field",
             (const StepData_Field & (StepData_SelectNamed::*)() const) static_cast<const StepData_Field & (StepData_SelectNamed::*)() const>(&StepData_SelectNamed::Field),
             R"#(None)#" )
        .def("CField",
             (StepData_Field & (StepData_SelectNamed::*)() ) static_cast<StepData_Field & (StepData_SelectNamed::*)() >(&StepData_SelectNamed::CField),
             R"#(None)#" )
        .def("Kind",
             (Standard_Integer (StepData_SelectNamed::*)() const) static_cast<Standard_Integer (StepData_SelectNamed::*)() const>(&StepData_SelectNamed::Kind),
             R"#(None)#" )
        .def("SetKind",
             (void (StepData_SelectNamed::*)( const Standard_Integer ) ) static_cast<void (StepData_SelectNamed::*)( const Standard_Integer ) >(&StepData_SelectNamed::SetKind),
             R"#(None)#"  , py::arg("kind"))
        .def("Int",
             (Standard_Integer (StepData_SelectNamed::*)() const) static_cast<Standard_Integer (StepData_SelectNamed::*)() const>(&StepData_SelectNamed::Int),
             R"#(This internal method gives access to a value implemented by an Integer (to read it))#" )
        .def("SetInt",
             (void (StepData_SelectNamed::*)( const Standard_Integer ) ) static_cast<void (StepData_SelectNamed::*)( const Standard_Integer ) >(&StepData_SelectNamed::SetInt),
             R"#(This internal method gives access to a value implemented by an Integer (to set it))#"  , py::arg("val"))
        .def("Real",
             (Standard_Real (StepData_SelectNamed::*)() const) static_cast<Standard_Real (StepData_SelectNamed::*)() const>(&StepData_SelectNamed::Real),
             R"#(None)#" )
        .def("SetReal",
             (void (StepData_SelectNamed::*)( const Standard_Real ) ) static_cast<void (StepData_SelectNamed::*)( const Standard_Real ) >(&StepData_SelectNamed::SetReal),
             R"#(None)#"  , py::arg("val"))
        .def("String",
             (Standard_CString (StepData_SelectNamed::*)() const) static_cast<Standard_CString (StepData_SelectNamed::*)() const>(&StepData_SelectNamed::String),
             R"#(None)#" )
        .def("SetString",
             (void (StepData_SelectNamed::*)( const Standard_CString ) ) static_cast<void (StepData_SelectNamed::*)( const Standard_CString ) >(&StepData_SelectNamed::SetString),
             R"#(None)#"  , py::arg("val"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_SelectNamed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_SelectNamed::*)() const>(&StepData_SelectNamed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_SelectNamed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_SelectNamed::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_SelectReal ,opencascade::handle<StepData_SelectReal> , StepData_SelectMember>>(m.attr("StepData_SelectReal"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Kind",
             (Standard_Integer (StepData_SelectReal::*)() const) static_cast<Standard_Integer (StepData_SelectReal::*)() const>(&StepData_SelectReal::Kind),
             R"#(None)#" )
        .def("Real",
             (Standard_Real (StepData_SelectReal::*)() const) static_cast<Standard_Real (StepData_SelectReal::*)() const>(&StepData_SelectReal::Real),
             R"#(None)#" )
        .def("SetReal",
             (void (StepData_SelectReal::*)( const Standard_Real ) ) static_cast<void (StepData_SelectReal::*)( const Standard_Real ) >(&StepData_SelectReal::SetReal),
             R"#(None)#"  , py::arg("val"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_SelectReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_SelectReal::*)() const>(&StepData_SelectReal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_SelectReal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_SelectReal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_Simple ,opencascade::handle<StepData_Simple> , StepData_Described>>(m.attr("StepData_Simple"))
    // constructors
        .def(py::init< const opencascade::handle<StepData_ESDescr> & >()  , py::arg("descr") )
    // custom constructors
    // methods
        .def("ESDescr",
             (opencascade::handle<StepData_ESDescr> (StepData_Simple::*)() const) static_cast<opencascade::handle<StepData_ESDescr> (StepData_Simple::*)() const>(&StepData_Simple::ESDescr),
             R"#(Returns description, as for simple)#" )
        .def("StepType",
             (Standard_CString (StepData_Simple::*)() const) static_cast<Standard_CString (StepData_Simple::*)() const>(&StepData_Simple::StepType),
             R"#(Returns the recorded StepType (TypeName of its ESDescr))#" )
        .def("IsComplex",
             (Standard_Boolean (StepData_Simple::*)() const) static_cast<Standard_Boolean (StepData_Simple::*)() const>(&StepData_Simple::IsComplex),
             R"#(Returns False)#" )
        .def("Matches",
             (Standard_Boolean (StepData_Simple::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepData_Simple::*)( const Standard_CString ) const>(&StepData_Simple::Matches),
             R"#(Tells if a step type is matched by <me> For a Simple Entity : own type or super type For a Complex Entity : one of the members)#"  , py::arg("steptype"))
        .def("As",
             (opencascade::handle<StepData_Simple> (StepData_Simple::*)( const Standard_CString ) const) static_cast<opencascade::handle<StepData_Simple> (StepData_Simple::*)( const Standard_CString ) const>(&StepData_Simple::As),
             R"#(Returns a Simple Entity which matches with a Type in <me> : For a Simple Entity : me if it matches, else a null handle For a Complex Entity : the member which matches, else null)#"  , py::arg("steptype"))
        .def("HasField",
             (Standard_Boolean (StepData_Simple::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepData_Simple::*)( const Standard_CString ) const>(&StepData_Simple::HasField),
             R"#(Tells if a Field brings a given name)#"  , py::arg("name"))
        .def("Field",
             (const StepData_Field & (StepData_Simple::*)( const Standard_CString ) const) static_cast<const StepData_Field & (StepData_Simple::*)( const Standard_CString ) const>(&StepData_Simple::Field),
             R"#(Returns a Field from its name; read-only)#"  , py::arg("name"))
        .def("CField",
             (StepData_Field & (StepData_Simple::*)( const Standard_CString ) ) static_cast<StepData_Field & (StepData_Simple::*)( const Standard_CString ) >(&StepData_Simple::CField),
             R"#(Returns a Field from its name; read or write)#"  , py::arg("name"))
        .def("NbFields",
             (Standard_Integer (StepData_Simple::*)() const) static_cast<Standard_Integer (StepData_Simple::*)() const>(&StepData_Simple::NbFields),
             R"#(Returns the count of fields)#" )
        .def("FieldNum",
             (const StepData_Field & (StepData_Simple::*)( const Standard_Integer ) const) static_cast<const StepData_Field & (StepData_Simple::*)( const Standard_Integer ) const>(&StepData_Simple::FieldNum),
             R"#(Returns a field from its rank, for read-only use)#"  , py::arg("num"))
        .def("CFieldNum",
             (StepData_Field & (StepData_Simple::*)( const Standard_Integer ) ) static_cast<StepData_Field & (StepData_Simple::*)( const Standard_Integer ) >(&StepData_Simple::CFieldNum),
             R"#(Returns a field from its rank, in order to modify it)#"  , py::arg("num"))
        .def("Fields",
             (const StepData_FieldListN & (StepData_Simple::*)() const) static_cast<const StepData_FieldListN & (StepData_Simple::*)() const>(&StepData_Simple::Fields),
             R"#(Returns the entire field list, read-only)#" )
        .def("CFields",
             (StepData_FieldListN & (StepData_Simple::*)() ) static_cast<StepData_FieldListN & (StepData_Simple::*)() >(&StepData_Simple::CFields),
             R"#(Returns the entire field list, read or write)#" )
        .def("Check",
             (void (StepData_Simple::*)( opencascade::handle<Interface_Check> & ) const) static_cast<void (StepData_Simple::*)( opencascade::handle<Interface_Check> & ) const>(&StepData_Simple::Check),
             R"#(Fills a Check by using its Description)#"  , py::arg("ach"))
        .def("Shared",
             (void (StepData_Simple::*)( Interface_EntityIterator & ) const) static_cast<void (StepData_Simple::*)( Interface_EntityIterator & ) const>(&StepData_Simple::Shared),
             R"#(Fills an EntityIterator with entities shared by <me>)#"  , py::arg("list"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_Simple::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_Simple::*)() const>(&StepData_Simple::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_Simple::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_Simple::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_SelectArrReal ,opencascade::handle<StepData_SelectArrReal> , StepData_SelectNamed>>(m.attr("StepData_SelectArrReal"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Kind",
             (Standard_Integer (StepData_SelectArrReal::*)() const) static_cast<Standard_Integer (StepData_SelectArrReal::*)() const>(&StepData_SelectArrReal::Kind),
             R"#(None)#" )
        .def("ArrReal",
             (opencascade::handle<TColStd_HArray1OfReal> (StepData_SelectArrReal::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepData_SelectArrReal::*)() const>(&StepData_SelectArrReal::ArrReal),
             R"#(None)#" )
        .def("SetArrReal",
             (void (StepData_SelectArrReal::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepData_SelectArrReal::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepData_SelectArrReal::SetArrReal),
             R"#(None)#"  , py::arg("arr"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_SelectArrReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_SelectArrReal::*)() const>(&StepData_SelectArrReal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_SelectArrReal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepData_SelectArrReal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepData_FileRecognizer.hxx
// ./opencascade/StepData_Described.hxx
// ./opencascade/StepData_EnumTool.hxx
// ./opencascade/StepData_Protocol.hxx
// ./opencascade/StepData_SelectInt.hxx
// ./opencascade/StepData_FieldListD.hxx
// ./opencascade/StepData_StepReaderData.hxx
// ./opencascade/StepData_SelectArrReal.hxx
// ./opencascade/StepData_NodeOfWriterLib.hxx
// ./opencascade/StepData_FieldList1.hxx
// ./opencascade/StepData.hxx
// ./opencascade/StepData_Simple.hxx
// ./opencascade/StepData_ECDescr.hxx
// ./opencascade/StepData_HArray1OfField.hxx
// ./opencascade/StepData_Logical.hxx
// ./opencascade/StepData_UndefinedEntity.hxx
// ./opencascade/StepData_ReadWriteModule.hxx
// ./opencascade/StepData_PDescr.hxx
// ./opencascade/StepData_ESDescr.hxx
// ./opencascade/StepData_FieldListN.hxx
// ./opencascade/StepData_StepModel.hxx
// ./opencascade/StepData_Array1OfField.hxx
// ./opencascade/StepData_DefaultGeneral.hxx
// ./opencascade/StepData_SelectReal.hxx
// ./opencascade/StepData_FreeFormEntity.hxx
// ./opencascade/StepData_GlobalNodeOfWriterLib.hxx
// ./opencascade/StepData_StepWriter.hxx
// ./opencascade/StepData_StepReaderTool.hxx
// ./opencascade/StepData_FieldList.hxx
// ./opencascade/StepData_StepDumper.hxx
// ./opencascade/StepData_GeneralModule.hxx
// ./opencascade/StepData_WriterLib.hxx
// ./opencascade/StepData_SelectNamed.hxx
// ./opencascade/StepData_FileProtocol.hxx
// ./opencascade/StepData_Plex.hxx
// ./opencascade/StepData_SelectType.hxx
// ./opencascade/StepData_EDescr.hxx
// ./opencascade/StepData_Field.hxx
// ./opencascade/StepData_SelectMember.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<StepData_Field>(m,"StepData_Array1OfField");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_Described ,opencascade::handle<StepData_Described>,Py_StepData_Described , Standard_Transient>>(m.attr("StepData_Described"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_Field , shared_ptr<StepData_Field> >>(m.attr("StepData_Field"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_FieldList , shared_ptr<StepData_FieldList> >>(m.attr("StepData_FieldList"))
    // constructors
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
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_FreeFormEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_FreeFormEntity::*)() const>(&StepData_FreeFormEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_FreeFormEntity::get_type_name),
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_GlobalNodeOfWriterLib ,opencascade::handle<StepData_GlobalNodeOfWriterLib> , Standard_Transient>>(m.attr("StepData_GlobalNodeOfWriterLib"))
    // constructors
    // custom constructors
    // methods
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
    // custom constructors
    // methods
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
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_Protocol ,opencascade::handle<StepData_Protocol> , Interface_Protocol>>(m.attr("StepData_Protocol"))
    // constructors
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
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_Protocol::*)() const>(&StepData_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_Protocol::get_type_name),
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_SelectMember ,opencascade::handle<StepData_SelectMember> , Standard_Transient>>(m.attr("StepData_SelectMember"))
    // constructors
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
        .def("Int",
             (Standard_Integer (StepData_SelectMember::*)() const) static_cast<Standard_Integer (StepData_SelectMember::*)() const>(&StepData_SelectMember::Int),
             R"#(This internal method gives access to a value implemented by an Integer (to read it))#" )
        .def("SetInt",
             (void (StepData_SelectMember::*)( const Standard_Integer ) ) static_cast<void (StepData_SelectMember::*)( const Standard_Integer ) >(&StepData_SelectMember::SetInt),
             R"#(This internal method gives access to a value implemented by an Integer (to set it))#"  , py::arg("val"))
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
        .def("EnumText",
             (Standard_CString (StepData_SelectMember::*)() const) static_cast<Standard_CString (StepData_SelectMember::*)() const>(&StepData_SelectMember::EnumText),
             R"#(None)#" )
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
        .def("Description",
             (opencascade::handle<StepData_PDescr> (StepData_SelectType::*)() const) static_cast<opencascade::handle<StepData_PDescr> (StepData_SelectType::*)() const>(&StepData_SelectType::Description),
             R"#(Returns the Description which corresponds to <me> Null if no specific description to give. This description is used to control reading an check validity. Default returns a Null Handle, i.e. undefined description It can suffice if CaseNum and CaseMem give enough control)#" )
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepData_SelectType::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepData_SelectType::*)() const>(&StepData_SelectType::NewMember),
             R"#(Returns a preferred SelectMember. Default returns a Null By default, a SelectMember can be set according to data type and Name : it is a SelectNamed if Name is defined)#" )
        .def("CaseMem",
             (Standard_Integer (StepData_SelectType::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepData_SelectType::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepData_SelectType::CaseMem),
             R"#(Recognize a SelectMember (kind, name). Returns a positive value which identifies the case in the List of immediate cases (distinct from the List of Entity Types). Zero if not recognizes Default returns 0, saying that no immediate value is allowed)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_StepDumper , shared_ptr<StepData_StepDumper> >>(m.attr("StepData_StepDumper"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_StepModel ,opencascade::handle<StepData_StepModel> , Interface_InterfaceModel>>(m.attr("StepData_StepModel"))
    // constructors
    // custom constructors
    // methods
        .def("GetFromAnother",
             (void (StepData_StepModel::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (StepData_StepModel::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&StepData_StepModel::GetFromAnother),
             R"#(gets header from another Model (uses Header Protocol))#"  , py::arg("other"))
        .def("NewEmptyModel",
             (opencascade::handle<Interface_InterfaceModel> (StepData_StepModel::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (StepData_StepModel::*)() const>(&StepData_StepModel::NewEmptyModel),
             R"#(Returns a New Empty Model, same type as <me>, i.e. StepModel)#" )
        .def("ClearHeader",
             (void (StepData_StepModel::*)() ) static_cast<void (StepData_StepModel::*)() >(&StepData_StepModel::ClearHeader),
             R"#(Clears the Header)#" )
        .def("VerifyCheck",
             (void (StepData_StepModel::*)( opencascade::handle<Interface_Check> & ) const) static_cast<void (StepData_StepModel::*)( opencascade::handle<Interface_Check> & ) const>(&StepData_StepModel::VerifyCheck),
             R"#(Specific Check, checks Header Items with HeaderProtocol)#"  , py::arg("ach"))
        .def("DumpHeader",
             (void (StepData_StepModel::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (StepData_StepModel::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&StepData_StepModel::DumpHeader),
             R"#(Dumps the Header, with the Header Protocol of StepData. If the Header Protocol is not defined, for each Header Entity, prints its Type. Else sends the Header under the form of HEADER Section of an Ascii Step File <level> is not used because Header is not so big)#"  , py::arg("S"),  py::arg("level")=static_cast<const Standard_Integer>(0))
        .def("ClearLabels",
             (void (StepData_StepModel::*)() ) static_cast<void (StepData_StepModel::*)() >(&StepData_StepModel::ClearLabels),
             R"#(erases specific labels, i.e. clears the map (entity-ident))#" )
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_StepReaderData ,opencascade::handle<StepData_StepReaderData> , Interface_FileReaderData>>(m.attr("StepData_StepReaderData"))
    // constructors
    // custom constructors
    // methods
        .def("NbEntities",
             (Standard_Integer (StepData_StepReaderData::*)() const) static_cast<Standard_Integer (StepData_StepReaderData::*)() const>(&StepData_StepReaderData::NbEntities),
             R"#(Returns total count of Entities (including Header))#" )
        .def("FindNextRecord",
             (Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer ) const) static_cast<Standard_Integer (StepData_StepReaderData::*)( const Standard_Integer ) const>(&StepData_StepReaderData::FindNextRecord),
             R"#(determines the first suitable record following a given one that is, skips SCOPE,ENDSCOPE and SUBLIST records Note : skips Header records, which are accessed separately)#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_StepReaderData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_StepReaderData::*)() const>(&StepData_StepReaderData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_StepReaderData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_StepReaderTool , shared_ptr<StepData_StepReaderTool> , Interface_FileReaderTool>>(m.attr("StepData_StepReaderTool"))
    // constructors
    // custom constructors
    // methods
        .def("Recognize",
             (Standard_Boolean (StepData_StepReaderTool::*)( const Standard_Integer , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (StepData_StepReaderTool::*)( const Standard_Integer , opencascade::handle<Interface_Check> & , opencascade::handle<Standard_Transient> & ) >(&StepData_StepReaderTool::Recognize),
             R"#(recognizes records, by asking either ReaderLib (default) or FileRecognizer (if defined) to do so. <ach> is to call RecognizeByLib)#"  , py::arg("num"),  py::arg("ach"),  py::arg("ent"))
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_UndefinedEntity ,opencascade::handle<StepData_UndefinedEntity> , Standard_Transient>>(m.attr("StepData_UndefinedEntity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_UndefinedEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_UndefinedEntity::*)() const>(&StepData_UndefinedEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_UndefinedEntity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_WriterLib , shared_ptr<StepData_WriterLib> >>(m.attr("StepData_WriterLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_DefaultGeneral ,opencascade::handle<StepData_DefaultGeneral> , StepData_GeneralModule>>(m.attr("StepData_DefaultGeneral"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_ECDescr ,opencascade::handle<StepData_ECDescr> , StepData_EDescr>>(m.attr("StepData_ECDescr"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_ESDescr ,opencascade::handle<StepData_ESDescr> , StepData_EDescr>>(m.attr("StepData_ESDescr"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_FieldList1 , shared_ptr<StepData_FieldList1> , StepData_FieldList>>(m.attr("StepData_FieldList1"))
    // constructors
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
    // custom constructors
    // methods
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
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_Plex ,opencascade::handle<StepData_Plex> , StepData_Described>>(m.attr("StepData_Plex"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_SelectInt ,opencascade::handle<StepData_SelectInt> , StepData_SelectMember>>(m.attr("StepData_SelectInt"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_SelectNamed ,opencascade::handle<StepData_SelectNamed> , StepData_SelectMember>>(m.attr("StepData_SelectNamed"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_SelectReal ,opencascade::handle<StepData_SelectReal> , StepData_SelectMember>>(m.attr("StepData_SelectReal"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_Simple ,opencascade::handle<StepData_Simple> , StepData_Described>>(m.attr("StepData_Simple"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepData_SelectArrReal ,opencascade::handle<StepData_SelectArrReal> , StepData_SelectNamed>>(m.attr("StepData_SelectArrReal"))
    // constructors
    // custom constructors
    // methods
        .def("Kind",
             (Standard_Integer (StepData_SelectArrReal::*)() const) static_cast<Standard_Integer (StepData_SelectArrReal::*)() const>(&StepData_SelectArrReal::Kind),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepData_SelectArrReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepData_SelectArrReal::*)() const>(&StepData_SelectArrReal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepData_SelectArrReal::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepData_SelectReal.hxx
// ./opencascade/StepData_FileRecognizer.hxx
// ./opencascade/StepData_FieldListD.hxx
// ./opencascade/StepData_FieldList.hxx
// ./opencascade/StepData_SelectArrReal.hxx
// ./opencascade/StepData_EnumTool.hxx
// ./opencascade/StepData.hxx
// ./opencascade/StepData_Plex.hxx
// ./opencascade/StepData_DefaultGeneral.hxx
// ./opencascade/StepData_SelectNamed.hxx
// ./opencascade/StepData_WriterLib.hxx
// ./opencascade/StepData_Field.hxx
// ./opencascade/StepData_Logical.hxx
// ./opencascade/StepData_StepWriter.hxx
// ./opencascade/StepData_StepReaderData.hxx
// ./opencascade/StepData_SelectInt.hxx
// ./opencascade/StepData_FieldListN.hxx
// ./opencascade/StepData_ECDescr.hxx
// ./opencascade/StepData_HArray1OfField.hxx
// ./opencascade/StepData_SelectMember.hxx
// ./opencascade/StepData_Described.hxx
// ./opencascade/StepData_StepDumper.hxx
// ./opencascade/StepData_PDescr.hxx
// ./opencascade/StepData_NodeOfWriterLib.hxx
// ./opencascade/StepData_StepModel.hxx
// ./opencascade/StepData_StepReaderTool.hxx
// ./opencascade/StepData_GlobalNodeOfWriterLib.hxx
// ./opencascade/StepData_GeneralModule.hxx
// ./opencascade/StepData_Array1OfField.hxx
// ./opencascade/StepData_ReadWriteModule.hxx
// ./opencascade/StepData_SelectType.hxx
// ./opencascade/StepData_EDescr.hxx
// ./opencascade/StepData_Protocol.hxx
// ./opencascade/StepData_FileProtocol.hxx
// ./opencascade/StepData_Simple.hxx
// ./opencascade/StepData_UndefinedEntity.hxx
// ./opencascade/StepData_FieldList1.hxx
// ./opencascade/StepData_FreeFormEntity.hxx
// ./opencascade/StepData_ESDescr.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<StepData_Field>(m,"StepData_Array1OfField");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

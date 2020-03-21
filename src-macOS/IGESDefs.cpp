
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IGESDefs_Protocol.hxx>
#include <IGESDefs_AssociativityDef.hxx>
#include <IGESDefs_MacroDef.hxx>
#include <IGESDefs_UnitsData.hxx>
#include <IGESDefs_AttributeDef.hxx>
#include <IGESDefs_TabularData.hxx>
#include <IGESDefs_GenericData.hxx>
#include <IGESDefs_AttributeTable.hxx>
#include <IGESDefs_ToolAssociativityDef.hxx>
#include <IGESDefs_ToolMacroDef.hxx>
#include <IGESDefs_ToolUnitsData.hxx>
#include <IGESDefs_ToolAttributeDef.hxx>
#include <IGESDefs_ToolTabularData.hxx>
#include <IGESDefs_ToolGenericData.hxx>
#include <IGESDefs_ToolAttributeTable.hxx>
#include <IGESDefs_Protocol.hxx>
#include <IGESDefs_ReadWriteModule.hxx>
#include <IGESDefs_GeneralModule.hxx>
#include <IGESDefs_SpecificModule.hxx>
#include <IGESDefs_HArray1OfHArray1OfTextDisplayTemplate.hxx>
#include <Standard_NullObject.hxx>
#include <IGESDefs_AttributeDef.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESDefs_HArray1OfHArray1OfTextDisplayTemplate.hxx>
#include <Standard_NullObject.hxx>
#include <IGESGraph_TextDisplayTemplate.hxx>
#include <IGESBasic_HArray1OfHArray1OfReal.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDefs_AttributeDef.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDefs_AttributeTable.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDefs_TabularData.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDefs_AssociativityDef.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDefs_MacroDef.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDefs_UnitsData.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDefs_GenericData.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_NullObject.hxx>

// module includes
#include <IGESDefs.hxx>
#include <IGESDefs_Array1OfTabularData.hxx>
#include <IGESDefs_AssociativityDef.hxx>
#include <IGESDefs_AttributeDef.hxx>
#include <IGESDefs_AttributeTable.hxx>
#include <IGESDefs_GeneralModule.hxx>
#include <IGESDefs_GenericData.hxx>
#include <IGESDefs_HArray1OfHArray1OfTextDisplayTemplate.hxx>
#include <IGESDefs_HArray1OfTabularData.hxx>
#include <IGESDefs_MacroDef.hxx>
#include <IGESDefs_Protocol.hxx>
#include <IGESDefs_ReadWriteModule.hxx>
#include <IGESDefs_SpecificModule.hxx>
#include <IGESDefs_TabularData.hxx>
#include <IGESDefs_ToolAssociativityDef.hxx>
#include <IGESDefs_ToolAttributeDef.hxx>
#include <IGESDefs_ToolAttributeTable.hxx>
#include <IGESDefs_ToolGenericData.hxx>
#include <IGESDefs_ToolMacroDef.hxx>
#include <IGESDefs_ToolTabularData.hxx>
#include <IGESDefs_ToolUnitsData.hxx>
#include <IGESDefs_UnitsData.hxx>

// template related includes
// ./opencascade/IGESDefs_Array1OfTabularData.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESDefs(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESDefs"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<IGESDefs , shared_ptr<IGESDefs>>(m,"IGESDefs");

    static_cast<py::class_<IGESDefs , shared_ptr<IGESDefs> >>(m.attr("IGESDefs"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_AssociativityDef ,opencascade::handle<IGESDefs_AssociativityDef> , IGESData_IGESEntity>>(m.attr("IGESDefs_AssociativityDef"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_AssociativityDef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_AssociativityDef::*)() const>(&IGESDefs_AssociativityDef::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_AssociativityDef::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_AttributeDef ,opencascade::handle<IGESDefs_AttributeDef> , IGESData_IGESEntity>>(m.attr("IGESDefs_AttributeDef"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_AttributeDef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_AttributeDef::*)() const>(&IGESDefs_AttributeDef::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_AttributeDef::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_AttributeTable ,opencascade::handle<IGESDefs_AttributeTable> , IGESData_IGESEntity>>(m.attr("IGESDefs_AttributeTable"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_AttributeTable::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_AttributeTable::*)() const>(&IGESDefs_AttributeTable::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_AttributeTable::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_GeneralModule ,opencascade::handle<IGESDefs_GeneralModule> , IGESData_GeneralModule>>(m.attr("IGESDefs_GeneralModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnSharedCase",
             (void (IGESDefs_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const) static_cast<void (IGESDefs_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const>(&IGESDefs_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDefs_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<IGESData_DirChecker (IGESDefs_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESDefs_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESDefs_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESDefs_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESDefs_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESDefs_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IGESDefs_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const>(&IGESDefs_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESDefs_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const) static_cast<void (IGESDefs_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const>(&IGESDefs_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("CategoryNumber",
             (Standard_Integer (IGESDefs_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const) static_cast<Standard_Integer (IGESDefs_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const>(&IGESDefs_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity Auxiliary for all)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_GeneralModule::*)() const>(&IGESDefs_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_GeneralModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_GenericData ,opencascade::handle<IGESDefs_GenericData> , IGESData_IGESEntity>>(m.attr("IGESDefs_GenericData"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_GenericData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_GenericData::*)() const>(&IGESDefs_GenericData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_GenericData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_HArray1OfHArray1OfTextDisplayTemplate ,opencascade::handle<IGESDefs_HArray1OfHArray1OfTextDisplayTemplate> , Standard_Transient>>(m.attr("IGESDefs_HArray1OfHArray1OfTextDisplayTemplate"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)() const>(&IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_HArray1OfTabularData ,opencascade::handle<IGESDefs_HArray1OfTabularData> , IGESDefs_Array1OfTabularData, Standard_Transient>>(m.attr("IGESDefs_HArray1OfTabularData"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESDefs_TabularData> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESDefs_TabularData> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESDefs_Array1OfTabularData & (IGESDefs_HArray1OfTabularData::*)() const) static_cast<const IGESDefs_Array1OfTabularData & (IGESDefs_HArray1OfTabularData::*)() const>(&IGESDefs_HArray1OfTabularData::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESDefs_Array1OfTabularData & (IGESDefs_HArray1OfTabularData::*)() ) static_cast<IGESDefs_Array1OfTabularData & (IGESDefs_HArray1OfTabularData::*)() >(&IGESDefs_HArray1OfTabularData::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_HArray1OfTabularData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_HArray1OfTabularData::*)() const>(&IGESDefs_HArray1OfTabularData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_HArray1OfTabularData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_HArray1OfTabularData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_MacroDef ,opencascade::handle<IGESDefs_MacroDef> , IGESData_IGESEntity>>(m.attr("IGESDefs_MacroDef"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_MacroDef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_MacroDef::*)() const>(&IGESDefs_MacroDef::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_MacroDef::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_Protocol ,opencascade::handle<IGESDefs_Protocol> , IGESData_Protocol>>(m.attr("IGESDefs_Protocol"))
    // constructors
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (IGESDefs_Protocol::*)() const) static_cast<Standard_Integer (IGESDefs_Protocol::*)() const>(&IGESDefs_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, one (Protocol from IGESGraph))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESDefs_Protocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESDefs_Protocol::*)( const Standard_Integer ) const>(&IGESDefs_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESDefs_Protocol::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (IGESDefs_Protocol::*)( const opencascade::handle<Standard_Type> & ) const>(&IGESDefs_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_Protocol::*)() const>(&IGESDefs_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_Protocol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_ReadWriteModule ,opencascade::handle<IGESDefs_ReadWriteModule> , IGESData_ReadWriteModule>>(m.attr("IGESDefs_ReadWriteModule"))
    // constructors
    // custom constructors
    // methods
        .def("CaseIGES",
             (Standard_Integer (IGESDefs_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (IGESDefs_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESDefs_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESDefs)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESDefs_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESDefs_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESDefs_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESDefs)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDefs_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const) static_cast<void (IGESDefs_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const>(&IGESDefs_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_ReadWriteModule::*)() const>(&IGESDefs_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_ReadWriteModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_SpecificModule ,opencascade::handle<IGESDefs_SpecificModule> , IGESData_SpecificModule>>(m.attr("IGESDefs_SpecificModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnDump",
             (void (IGESDefs_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESDefs_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESDefs_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESDefs)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_SpecificModule::*)() const>(&IGESDefs_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_SpecificModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_TabularData ,opencascade::handle<IGESDefs_TabularData> , IGESData_IGESEntity>>(m.attr("IGESDefs_TabularData"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_TabularData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_TabularData::*)() const>(&IGESDefs_TabularData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_TabularData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_ToolAssociativityDef , shared_ptr<IGESDefs_ToolAssociativityDef> >>(m.attr("IGESDefs_ToolAssociativityDef"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_ToolAttributeDef , shared_ptr<IGESDefs_ToolAttributeDef> >>(m.attr("IGESDefs_ToolAttributeDef"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_ToolAttributeTable , shared_ptr<IGESDefs_ToolAttributeTable> >>(m.attr("IGESDefs_ToolAttributeTable"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_ToolGenericData , shared_ptr<IGESDefs_ToolGenericData> >>(m.attr("IGESDefs_ToolGenericData"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_ToolMacroDef , shared_ptr<IGESDefs_ToolMacroDef> >>(m.attr("IGESDefs_ToolMacroDef"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_ToolTabularData , shared_ptr<IGESDefs_ToolTabularData> >>(m.attr("IGESDefs_ToolTabularData"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_ToolUnitsData , shared_ptr<IGESDefs_ToolUnitsData> >>(m.attr("IGESDefs_ToolUnitsData"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDefs_UnitsData ,opencascade::handle<IGESDefs_UnitsData> , IGESData_IGESEntity>>(m.attr("IGESDefs_UnitsData"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_UnitsData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_UnitsData::*)() const>(&IGESDefs_UnitsData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_UnitsData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IGESDefs.hxx
// ./opencascade/IGESDefs_MacroDef.hxx
// ./opencascade/IGESDefs_AttributeTable.hxx
// ./opencascade/IGESDefs_Protocol.hxx
// ./opencascade/IGESDefs_AttributeDef.hxx
// ./opencascade/IGESDefs_TabularData.hxx
// ./opencascade/IGESDefs_ToolAttributeDef.hxx
// ./opencascade/IGESDefs_AssociativityDef.hxx
// ./opencascade/IGESDefs_ToolAttributeTable.hxx
// ./opencascade/IGESDefs_Array1OfTabularData.hxx
// ./opencascade/IGESDefs_SpecificModule.hxx
// ./opencascade/IGESDefs_UnitsData.hxx
// ./opencascade/IGESDefs_HArray1OfHArray1OfTextDisplayTemplate.hxx
// ./opencascade/IGESDefs_ToolTabularData.hxx
// ./opencascade/IGESDefs_ToolAssociativityDef.hxx
// ./opencascade/IGESDefs_HArray1OfTabularData.hxx
// ./opencascade/IGESDefs_ToolMacroDef.hxx
// ./opencascade/IGESDefs_ReadWriteModule.hxx
// ./opencascade/IGESDefs_GeneralModule.hxx
// ./opencascade/IGESDefs_ToolUnitsData.hxx
// ./opencascade/IGESDefs_ToolGenericData.hxx
// ./opencascade/IGESDefs_GenericData.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESDefs_TabularData> >(m,"IGESDefs_Array1OfTabularData");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

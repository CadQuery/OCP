
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
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGraph_LineFontDefTemplate.hxx>
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
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGraph_DrawingUnits.hxx>
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
#include <IGESGraph_DrawingSize.hxx>
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
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGraph_IntercharacterSpacing.hxx>
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
#include <IGESGraph_LineFontPredefined.hxx>
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
#include <IGESGraph_Protocol.hxx>
#include <IGESGraph_LineFontDefTemplate.hxx>
#include <IGESGraph_LineFontDefPattern.hxx>
#include <IGESGraph_TextFontDef.hxx>
#include <IGESGraph_TextDisplayTemplate.hxx>
#include <IGESGraph_Color.hxx>
#include <IGESGraph_DefinitionLevel.hxx>
#include <IGESGraph_NominalSize.hxx>
#include <IGESGraph_DrawingSize.hxx>
#include <IGESGraph_DrawingUnits.hxx>
#include <IGESGraph_IntercharacterSpacing.hxx>
#include <IGESGraph_LineFontPredefined.hxx>
#include <IGESGraph_HighLight.hxx>
#include <IGESGraph_Pick.hxx>
#include <IGESGraph_UniformRectGrid.hxx>
#include <IGESGraph_ToolLineFontDefTemplate.hxx>
#include <IGESGraph_ToolLineFontDefPattern.hxx>
#include <IGESGraph_ToolTextFontDef.hxx>
#include <IGESGraph_ToolTextDisplayTemplate.hxx>
#include <IGESGraph_ToolColor.hxx>
#include <IGESGraph_ToolDefinitionLevel.hxx>
#include <IGESGraph_ToolNominalSize.hxx>
#include <IGESGraph_ToolDrawingSize.hxx>
#include <IGESGraph_ToolDrawingUnits.hxx>
#include <IGESGraph_ToolIntercharacterSpacing.hxx>
#include <IGESGraph_ToolLineFontPredefined.hxx>
#include <IGESGraph_ToolHighLight.hxx>
#include <IGESGraph_ToolPick.hxx>
#include <IGESGraph_ToolUniformRectGrid.hxx>
#include <IGESGraph_Protocol.hxx>
#include <IGESGraph_ReadWriteModule.hxx>
#include <IGESGraph_GeneralModule.hxx>
#include <IGESGraph_SpecificModule.hxx>
#include <IGESBasic_SubfigureDef.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGraph_Pick.hxx>
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
#include <IGESGraph_Color.hxx>
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
#include <IGESGraph_DefinitionLevel.hxx>
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
#include <IGESGraph_TextFontDef.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGraph_NominalSize.hxx>
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
#include <IGESGraph_TextDisplayTemplate.hxx>
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
#include <IGESGraph_TextFontDef.hxx>
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
#include <IGESGraph_LineFontDefPattern.hxx>
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
#include <IGESGraph_UniformRectGrid.hxx>
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
#include <IGESGraph_HighLight.hxx>
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

// module includes
#include <IGESGraph.hxx>
#include <IGESGraph_Array1OfColor.hxx>
#include <IGESGraph_Array1OfTextDisplayTemplate.hxx>
#include <IGESGraph_Array1OfTextFontDef.hxx>
#include <IGESGraph_Color.hxx>
#include <IGESGraph_DefinitionLevel.hxx>
#include <IGESGraph_DrawingSize.hxx>
#include <IGESGraph_DrawingUnits.hxx>
#include <IGESGraph_GeneralModule.hxx>
#include <IGESGraph_HArray1OfColor.hxx>
#include <IGESGraph_HArray1OfTextDisplayTemplate.hxx>
#include <IGESGraph_HArray1OfTextFontDef.hxx>
#include <IGESGraph_HighLight.hxx>
#include <IGESGraph_IntercharacterSpacing.hxx>
#include <IGESGraph_LineFontDefPattern.hxx>
#include <IGESGraph_LineFontDefTemplate.hxx>
#include <IGESGraph_LineFontPredefined.hxx>
#include <IGESGraph_NominalSize.hxx>
#include <IGESGraph_Pick.hxx>
#include <IGESGraph_Protocol.hxx>
#include <IGESGraph_ReadWriteModule.hxx>
#include <IGESGraph_SpecificModule.hxx>
#include <IGESGraph_TextDisplayTemplate.hxx>
#include <IGESGraph_TextFontDef.hxx>
#include <IGESGraph_ToolColor.hxx>
#include <IGESGraph_ToolDefinitionLevel.hxx>
#include <IGESGraph_ToolDrawingSize.hxx>
#include <IGESGraph_ToolDrawingUnits.hxx>
#include <IGESGraph_ToolHighLight.hxx>
#include <IGESGraph_ToolIntercharacterSpacing.hxx>
#include <IGESGraph_ToolLineFontDefPattern.hxx>
#include <IGESGraph_ToolLineFontDefTemplate.hxx>
#include <IGESGraph_ToolLineFontPredefined.hxx>
#include <IGESGraph_ToolNominalSize.hxx>
#include <IGESGraph_ToolPick.hxx>
#include <IGESGraph_ToolTextDisplayTemplate.hxx>
#include <IGESGraph_ToolTextFontDef.hxx>
#include <IGESGraph_ToolUniformRectGrid.hxx>
#include <IGESGraph_UniformRectGrid.hxx>

// template related includes
// ./opencascade/IGESGraph_Array1OfTextDisplayTemplate.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESGraph_Array1OfTextFontDef.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESGraph_Array1OfColor.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESGraph(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESGraph"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<IGESGraph , shared_ptr<IGESGraph>>(m,"IGESGraph");

    static_cast<py::class_<IGESGraph , shared_ptr<IGESGraph> >>(m.attr("IGESGraph"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_Color ,opencascade::handle<IGESGraph_Color> , IGESData_ColorEntity>>(m.attr("IGESGraph_Color"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_Color::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_Color::*)() const>(&IGESGraph_Color::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_Color::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_DefinitionLevel ,opencascade::handle<IGESGraph_DefinitionLevel> , IGESData_LevelListEntity>>(m.attr("IGESGraph_DefinitionLevel"))
    // constructors
    // custom constructors
    // methods
        .def("NbLevelNumbers",
             (Standard_Integer (IGESGraph_DefinitionLevel::*)() const) static_cast<Standard_Integer (IGESGraph_DefinitionLevel::*)() const>(&IGESGraph_DefinitionLevel::NbLevelNumbers),
             R"#(Must return the count of levels (== NbPropertyValues))#" )
        .def("LevelNumber",
             (Standard_Integer (IGESGraph_DefinitionLevel::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IGESGraph_DefinitionLevel::*)( const Standard_Integer ) const>(&IGESGraph_DefinitionLevel::LevelNumber),
             R"#(returns the Level Number of <me> indicated by <LevelIndex> raises an exception if LevelIndex is <= 0 or LevelIndex > NbPropertyValues)#"  , py::arg("LevelIndex"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_DefinitionLevel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_DefinitionLevel::*)() const>(&IGESGraph_DefinitionLevel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_DefinitionLevel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_DrawingSize ,opencascade::handle<IGESGraph_DrawingSize> , IGESData_IGESEntity>>(m.attr("IGESGraph_DrawingSize"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_DrawingSize::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_DrawingSize::*)() const>(&IGESGraph_DrawingSize::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_DrawingSize::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_DrawingUnits ,opencascade::handle<IGESGraph_DrawingUnits> , IGESData_IGESEntity>>(m.attr("IGESGraph_DrawingUnits"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_DrawingUnits::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_DrawingUnits::*)() const>(&IGESGraph_DrawingUnits::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_DrawingUnits::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_GeneralModule ,opencascade::handle<IGESGraph_GeneralModule> , IGESData_GeneralModule>>(m.attr("IGESGraph_GeneralModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnSharedCase",
             (void (IGESGraph_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const>(&IGESGraph_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<IGESData_DirChecker (IGESGraph_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESGraph_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESGraph_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESGraph_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IGESGraph_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const>(&IGESGraph_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESGraph_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const>(&IGESGraph_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("CategoryNumber",
             (Standard_Integer (IGESGraph_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const) static_cast<Standard_Integer (IGESGraph_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const>(&IGESGraph_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity Drawing for all)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_GeneralModule::*)() const>(&IGESGraph_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_GeneralModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_HArray1OfColor ,opencascade::handle<IGESGraph_HArray1OfColor> , IGESGraph_Array1OfColor, Standard_Transient>>(m.attr("IGESGraph_HArray1OfColor"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESGraph_Color> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESGraph_Color> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESGraph_Array1OfColor & (IGESGraph_HArray1OfColor::*)() const) static_cast<const IGESGraph_Array1OfColor & (IGESGraph_HArray1OfColor::*)() const>(&IGESGraph_HArray1OfColor::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESGraph_Array1OfColor & (IGESGraph_HArray1OfColor::*)() ) static_cast<IGESGraph_Array1OfColor & (IGESGraph_HArray1OfColor::*)() >(&IGESGraph_HArray1OfColor::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_HArray1OfColor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_HArray1OfColor::*)() const>(&IGESGraph_HArray1OfColor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_HArray1OfColor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_HArray1OfColor::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_HArray1OfTextDisplayTemplate ,opencascade::handle<IGESGraph_HArray1OfTextDisplayTemplate> , IGESGraph_Array1OfTextDisplayTemplate, Standard_Transient>>(m.attr("IGESGraph_HArray1OfTextDisplayTemplate"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESGraph_TextDisplayTemplate> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESGraph_TextDisplayTemplate> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESGraph_Array1OfTextDisplayTemplate & (IGESGraph_HArray1OfTextDisplayTemplate::*)() const) static_cast<const IGESGraph_Array1OfTextDisplayTemplate & (IGESGraph_HArray1OfTextDisplayTemplate::*)() const>(&IGESGraph_HArray1OfTextDisplayTemplate::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESGraph_Array1OfTextDisplayTemplate & (IGESGraph_HArray1OfTextDisplayTemplate::*)() ) static_cast<IGESGraph_Array1OfTextDisplayTemplate & (IGESGraph_HArray1OfTextDisplayTemplate::*)() >(&IGESGraph_HArray1OfTextDisplayTemplate::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_HArray1OfTextDisplayTemplate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_HArray1OfTextDisplayTemplate::*)() const>(&IGESGraph_HArray1OfTextDisplayTemplate::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_HArray1OfTextDisplayTemplate::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_HArray1OfTextDisplayTemplate::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_HArray1OfTextFontDef ,opencascade::handle<IGESGraph_HArray1OfTextFontDef> , IGESGraph_Array1OfTextFontDef, Standard_Transient>>(m.attr("IGESGraph_HArray1OfTextFontDef"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESGraph_TextFontDef> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESGraph_TextFontDef> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESGraph_Array1OfTextFontDef & (IGESGraph_HArray1OfTextFontDef::*)() const) static_cast<const IGESGraph_Array1OfTextFontDef & (IGESGraph_HArray1OfTextFontDef::*)() const>(&IGESGraph_HArray1OfTextFontDef::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESGraph_Array1OfTextFontDef & (IGESGraph_HArray1OfTextFontDef::*)() ) static_cast<IGESGraph_Array1OfTextFontDef & (IGESGraph_HArray1OfTextFontDef::*)() >(&IGESGraph_HArray1OfTextFontDef::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_HArray1OfTextFontDef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_HArray1OfTextFontDef::*)() const>(&IGESGraph_HArray1OfTextFontDef::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_HArray1OfTextFontDef::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_HArray1OfTextFontDef::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_HighLight ,opencascade::handle<IGESGraph_HighLight> , IGESData_IGESEntity>>(m.attr("IGESGraph_HighLight"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_HighLight::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_HighLight::*)() const>(&IGESGraph_HighLight::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_HighLight::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_IntercharacterSpacing ,opencascade::handle<IGESGraph_IntercharacterSpacing> , IGESData_IGESEntity>>(m.attr("IGESGraph_IntercharacterSpacing"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_IntercharacterSpacing::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_IntercharacterSpacing::*)() const>(&IGESGraph_IntercharacterSpacing::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_IntercharacterSpacing::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_LineFontDefPattern ,opencascade::handle<IGESGraph_LineFontDefPattern> , IGESData_LineFontEntity>>(m.attr("IGESGraph_LineFontDefPattern"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_LineFontDefPattern::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_LineFontDefPattern::*)() const>(&IGESGraph_LineFontDefPattern::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_LineFontDefPattern::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_LineFontDefTemplate ,opencascade::handle<IGESGraph_LineFontDefTemplate> , IGESData_LineFontEntity>>(m.attr("IGESGraph_LineFontDefTemplate"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_LineFontDefTemplate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_LineFontDefTemplate::*)() const>(&IGESGraph_LineFontDefTemplate::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_LineFontDefTemplate::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_LineFontPredefined ,opencascade::handle<IGESGraph_LineFontPredefined> , IGESData_IGESEntity>>(m.attr("IGESGraph_LineFontPredefined"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_LineFontPredefined::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_LineFontPredefined::*)() const>(&IGESGraph_LineFontPredefined::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_LineFontPredefined::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_NominalSize ,opencascade::handle<IGESGraph_NominalSize> , IGESData_IGESEntity>>(m.attr("IGESGraph_NominalSize"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_NominalSize::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_NominalSize::*)() const>(&IGESGraph_NominalSize::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_NominalSize::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_Pick ,opencascade::handle<IGESGraph_Pick> , IGESData_IGESEntity>>(m.attr("IGESGraph_Pick"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_Pick::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_Pick::*)() const>(&IGESGraph_Pick::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_Pick::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_Protocol ,opencascade::handle<IGESGraph_Protocol> , IGESData_Protocol>>(m.attr("IGESGraph_Protocol"))
    // constructors
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (IGESGraph_Protocol::*)() const) static_cast<Standard_Integer (IGESGraph_Protocol::*)() const>(&IGESGraph_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, one (Protocol from IGESBasic))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESGraph_Protocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESGraph_Protocol::*)( const Standard_Integer ) const>(&IGESGraph_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESGraph_Protocol::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (IGESGraph_Protocol::*)( const opencascade::handle<Standard_Type> & ) const>(&IGESGraph_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_Protocol::*)() const>(&IGESGraph_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_Protocol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ReadWriteModule ,opencascade::handle<IGESGraph_ReadWriteModule> , IGESData_ReadWriteModule>>(m.attr("IGESGraph_ReadWriteModule"))
    // constructors
    // custom constructors
    // methods
        .def("CaseIGES",
             (Standard_Integer (IGESGraph_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (IGESGraph_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESGraph_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESGraph)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESGraph_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESGraph)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const>(&IGESGraph_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_ReadWriteModule::*)() const>(&IGESGraph_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_ReadWriteModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_SpecificModule ,opencascade::handle<IGESGraph_SpecificModule> , IGESData_SpecificModule>>(m.attr("IGESGraph_SpecificModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnDump",
             (void (IGESGraph_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESGraph)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGraph_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<Standard_Boolean (IGESGraph_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESGraph_SpecificModule::OwnCorrect),
             R"#(Performs non-ambiguous Corrections on Entities which support them (DrawingSize,DrawingUnits,HighLight,IntercharacterSpacing, LineFontPredefined,NominalSize,Pick,UniformRectGrid))#"  , py::arg("CN"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_SpecificModule::*)() const>(&IGESGraph_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_SpecificModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_TextDisplayTemplate ,opencascade::handle<IGESGraph_TextDisplayTemplate> , IGESData_IGESEntity>>(m.attr("IGESGraph_TextDisplayTemplate"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_TextDisplayTemplate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_TextDisplayTemplate::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_TextFontDef ,opencascade::handle<IGESGraph_TextFontDef> , IGESData_IGESEntity>>(m.attr("IGESGraph_TextFontDef"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_TextFontDef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_TextFontDef::*)() const>(&IGESGraph_TextFontDef::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_TextFontDef::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolColor , shared_ptr<IGESGraph_ToolColor> >>(m.attr("IGESGraph_ToolColor"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolDefinitionLevel , shared_ptr<IGESGraph_ToolDefinitionLevel> >>(m.attr("IGESGraph_ToolDefinitionLevel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolDrawingSize , shared_ptr<IGESGraph_ToolDrawingSize> >>(m.attr("IGESGraph_ToolDrawingSize"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolDrawingUnits , shared_ptr<IGESGraph_ToolDrawingUnits> >>(m.attr("IGESGraph_ToolDrawingUnits"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolHighLight , shared_ptr<IGESGraph_ToolHighLight> >>(m.attr("IGESGraph_ToolHighLight"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolIntercharacterSpacing , shared_ptr<IGESGraph_ToolIntercharacterSpacing> >>(m.attr("IGESGraph_ToolIntercharacterSpacing"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolLineFontDefPattern , shared_ptr<IGESGraph_ToolLineFontDefPattern> >>(m.attr("IGESGraph_ToolLineFontDefPattern"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolLineFontDefTemplate , shared_ptr<IGESGraph_ToolLineFontDefTemplate> >>(m.attr("IGESGraph_ToolLineFontDefTemplate"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolLineFontPredefined , shared_ptr<IGESGraph_ToolLineFontPredefined> >>(m.attr("IGESGraph_ToolLineFontPredefined"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolNominalSize , shared_ptr<IGESGraph_ToolNominalSize> >>(m.attr("IGESGraph_ToolNominalSize"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolPick , shared_ptr<IGESGraph_ToolPick> >>(m.attr("IGESGraph_ToolPick"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolTextDisplayTemplate , shared_ptr<IGESGraph_ToolTextDisplayTemplate> >>(m.attr("IGESGraph_ToolTextDisplayTemplate"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolTextFontDef , shared_ptr<IGESGraph_ToolTextFontDef> >>(m.attr("IGESGraph_ToolTextFontDef"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolUniformRectGrid , shared_ptr<IGESGraph_ToolUniformRectGrid> >>(m.attr("IGESGraph_ToolUniformRectGrid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_UniformRectGrid ,opencascade::handle<IGESGraph_UniformRectGrid> , IGESData_IGESEntity>>(m.attr("IGESGraph_UniformRectGrid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_UniformRectGrid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_UniformRectGrid::*)() const>(&IGESGraph_UniformRectGrid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_UniformRectGrid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IGESGraph_GeneralModule.hxx
// ./opencascade/IGESGraph_DrawingUnits.hxx
// ./opencascade/IGESGraph_ToolLineFontDefTemplate.hxx
// ./opencascade/IGESGraph_TextFontDef.hxx
// ./opencascade/IGESGraph_ToolDrawingUnits.hxx
// ./opencascade/IGESGraph_HArray1OfColor.hxx
// ./opencascade/IGESGraph_ToolDrawingSize.hxx
// ./opencascade/IGESGraph_Pick.hxx
// ./opencascade/IGESGraph_ReadWriteModule.hxx
// ./opencascade/IGESGraph_Array1OfTextDisplayTemplate.hxx
// ./opencascade/IGESGraph_LineFontDefPattern.hxx
// ./opencascade/IGESGraph_ToolIntercharacterSpacing.hxx
// ./opencascade/IGESGraph_HArray1OfTextDisplayTemplate.hxx
// ./opencascade/IGESGraph_ToolLineFontPredefined.hxx
// ./opencascade/IGESGraph_LineFontPredefined.hxx
// ./opencascade/IGESGraph_Color.hxx
// ./opencascade/IGESGraph.hxx
// ./opencascade/IGESGraph_LineFontDefTemplate.hxx
// ./opencascade/IGESGraph_HighLight.hxx
// ./opencascade/IGESGraph_UniformRectGrid.hxx
// ./opencascade/IGESGraph_NominalSize.hxx
// ./opencascade/IGESGraph_DrawingSize.hxx
// ./opencascade/IGESGraph_ToolPick.hxx
// ./opencascade/IGESGraph_ToolColor.hxx
// ./opencascade/IGESGraph_ToolDefinitionLevel.hxx
// ./opencascade/IGESGraph_Array1OfTextFontDef.hxx
// ./opencascade/IGESGraph_TextDisplayTemplate.hxx
// ./opencascade/IGESGraph_ToolNominalSize.hxx
// ./opencascade/IGESGraph_ToolTextDisplayTemplate.hxx
// ./opencascade/IGESGraph_SpecificModule.hxx
// ./opencascade/IGESGraph_Protocol.hxx
// ./opencascade/IGESGraph_ToolTextFontDef.hxx
// ./opencascade/IGESGraph_ToolLineFontDefPattern.hxx
// ./opencascade/IGESGraph_ToolUniformRectGrid.hxx
// ./opencascade/IGESGraph_HArray1OfTextFontDef.hxx
// ./opencascade/IGESGraph_ToolHighLight.hxx
// ./opencascade/IGESGraph_DefinitionLevel.hxx
// ./opencascade/IGESGraph_Array1OfColor.hxx
// ./opencascade/IGESGraph_IntercharacterSpacing.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESGraph_TextDisplayTemplate> >(m,"IGESGraph_Array1OfTextDisplayTemplate");
    register_template_NCollection_Array1<opencascade::handle<IGESGraph_TextFontDef> >(m,"IGESGraph_Array1OfTextFontDef");
    register_template_NCollection_Array1<opencascade::handle<IGESGraph_Color> >(m,"IGESGraph_Array1OfColor");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

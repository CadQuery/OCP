
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
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESGraph_TextFontDef.hxx>
#include <gp_Pnt.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
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
#include <IGESBasic_SubfigureDef.hxx>
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
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
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
#include <TCollection_HAsciiString.hxx>
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
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
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
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>

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
// ./opencascade/IGESGraph_Array1OfColor.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESGraph_Array1OfTextFontDef.hxx
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
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&IGESGraph::Init),
                    R"#(Prepares dynamic data (Protocol, Modules) for this package)#" )
        .def_static("Protocol_s",
                    (opencascade::handle<IGESGraph_Protocol> (*)() ) static_cast<opencascade::handle<IGESGraph_Protocol> (*)() >(&IGESGraph::Protocol),
                    R"#(Returns the Protocol for this Package)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_Color ,opencascade::handle<IGESGraph_Color> , IGESData_ColorEntity>>(m.attr("IGESGraph_Color"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_Color::*)( const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (IGESGraph_Color::*)( const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<TCollection_HAsciiString> & ) >(&IGESGraph_Color::Init),
             R"#(This method is used to set the fields of the class Color - red : Red color intensity (range 0.0 to 100.0) - green : Green color intensity (range 0.0 to 100.0) - blue : Blue color intensity (range 0.0 to 100.0) - aColorName : Name of the color (optional))#"  , py::arg("red"),  py::arg("green"),  py::arg("blue"),  py::arg("aColorName"))
        .def("HasColorName",
             (Standard_Boolean (IGESGraph_Color::*)() const) static_cast<Standard_Boolean (IGESGraph_Color::*)() const>(&IGESGraph_Color::HasColorName),
             R"#(returns True if optional character string is assigned, False otherwise.)#" )
        .def("ColorName",
             (opencascade::handle<TCollection_HAsciiString> (IGESGraph_Color::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESGraph_Color::*)() const>(&IGESGraph_Color::ColorName),
             R"#(if HasColorName() is True returns the Verbal description of the Color.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_Color::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_Color::*)() const>(&IGESGraph_Color::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("RGBIntensity",
             []( IGESGraph_Color &self   ){ Standard_Real  Red; Standard_Real  Green; Standard_Real  Blue; self.RGBIntensity(Red,Green,Blue); return std::make_tuple(Red,Green,Blue); },
             R"#(None)#" )
        .def("CMYIntensity",
             []( IGESGraph_Color &self   ){ Standard_Real  Cyan; Standard_Real  Magenta; Standard_Real  Yellow; self.CMYIntensity(Cyan,Magenta,Yellow); return std::make_tuple(Cyan,Magenta,Yellow); },
             R"#(None)#" )
        .def("HLSPercentage",
             []( IGESGraph_Color &self   ){ Standard_Real  Hue; Standard_Real  Lightness; Standard_Real  Saturation; self.HLSPercentage(Hue,Lightness,Saturation); return std::make_tuple(Hue,Lightness,Saturation); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_Color::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_Color::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_DefinitionLevel ,opencascade::handle<IGESGraph_DefinitionLevel> , IGESData_LevelListEntity>>(m.attr("IGESGraph_DefinitionLevel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_DefinitionLevel::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) ) static_cast<void (IGESGraph_DefinitionLevel::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) >(&IGESGraph_DefinitionLevel::Init),
             R"#(This method is used to set the fields of the class DefinitionLevel - allLevelNumbers : Values of Level Numbers)#"  , py::arg("allLevelNumbers"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESGraph_DefinitionLevel::*)() const) static_cast<Standard_Integer (IGESGraph_DefinitionLevel::*)() const>(&IGESGraph_DefinitionLevel::NbPropertyValues),
             R"#(returns the number of property values in <me>)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_DefinitionLevel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_DrawingSize ,opencascade::handle<IGESGraph_DrawingSize> , IGESData_IGESEntity>>(m.attr("IGESGraph_DrawingSize"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_DrawingSize::*)( const Standard_Integer , const Standard_Real , const Standard_Real ) ) static_cast<void (IGESGraph_DrawingSize::*)( const Standard_Integer , const Standard_Real , const Standard_Real ) >(&IGESGraph_DrawingSize::Init),
             R"#(This method is used to set the fields of the class DrawingSize - nbProps : Number of property values (NP = 2) - aXSize : Extent of Drawing along positive XD axis - aYSize : Extent of Drawing along positive YD axis)#"  , py::arg("nbProps"),  py::arg("aXSize"),  py::arg("aYSize"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESGraph_DrawingSize::*)() const) static_cast<Standard_Integer (IGESGraph_DrawingSize::*)() const>(&IGESGraph_DrawingSize::NbPropertyValues),
             R"#(returns the number of property values in <me> (NP = 2))#" )
        .def("XSize",
             (Standard_Real (IGESGraph_DrawingSize::*)() const) static_cast<Standard_Real (IGESGraph_DrawingSize::*)() const>(&IGESGraph_DrawingSize::XSize),
             R"#(returns the extent of Drawing along positive XD axis)#" )
        .def("YSize",
             (Standard_Real (IGESGraph_DrawingSize::*)() const) static_cast<Standard_Real (IGESGraph_DrawingSize::*)() const>(&IGESGraph_DrawingSize::YSize),
             R"#(returns the extent of Drawing along positive YD axis)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_DrawingSize::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_DrawingSize::*)() const>(&IGESGraph_DrawingSize::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_DrawingSize::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_DrawingSize::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_DrawingUnits ,opencascade::handle<IGESGraph_DrawingUnits> , IGESData_IGESEntity>>(m.attr("IGESGraph_DrawingUnits"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_DrawingUnits::*)( const Standard_Integer , const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (IGESGraph_DrawingUnits::*)( const Standard_Integer , const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & ) >(&IGESGraph_DrawingUnits::Init),
             R"#(This method is used to set the fields of the class DrawingUnits - nbProps : Number of property values (NP = 2) - aFlag : DrawingUnits Flag - aUnit : DrawingUnits Name)#"  , py::arg("nbProps"),  py::arg("aFlag"),  py::arg("aUnit"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESGraph_DrawingUnits::*)() const) static_cast<Standard_Integer (IGESGraph_DrawingUnits::*)() const>(&IGESGraph_DrawingUnits::NbPropertyValues),
             R"#(returns the number of property values in <me>)#" )
        .def("Flag",
             (Standard_Integer (IGESGraph_DrawingUnits::*)() const) static_cast<Standard_Integer (IGESGraph_DrawingUnits::*)() const>(&IGESGraph_DrawingUnits::Flag),
             R"#(returns the drawing space units of <me>)#" )
        .def("Unit",
             (opencascade::handle<TCollection_HAsciiString> (IGESGraph_DrawingUnits::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESGraph_DrawingUnits::*)() const>(&IGESGraph_DrawingUnits::Unit),
             R"#(returns the name of the drawing space units of <me>)#" )
        .def("UnitValue",
             (Standard_Real (IGESGraph_DrawingUnits::*)() const) static_cast<Standard_Real (IGESGraph_DrawingUnits::*)() const>(&IGESGraph_DrawingUnits::UnitValue),
             R"#(Computes the value of the unit, in meters, according Flag (same values as for GlobalSection from IGESData))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_DrawingUnits::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_DrawingUnits::*)() const>(&IGESGraph_DrawingUnits::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_DrawingUnits::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_DrawingUnits::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_GeneralModule ,opencascade::handle<IGESGraph_GeneralModule> , IGESData_GeneralModule>>(m.attr("IGESGraph_GeneralModule"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_GeneralModule::get_type_descriptor),
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_HighLight::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (IGESGraph_HighLight::*)( const Standard_Integer , const Standard_Integer ) >(&IGESGraph_HighLight::Init),
             R"#(This method is used to set the fields of the class HighLight - nbProps : Number of property values (NP = 1) - aHighLightStatus : HighLight Flag)#"  , py::arg("nbProps"),  py::arg("aHighLightStatus"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESGraph_HighLight::*)() const) static_cast<Standard_Integer (IGESGraph_HighLight::*)() const>(&IGESGraph_HighLight::NbPropertyValues),
             R"#(returns the number of property values in <me>)#" )
        .def("HighLightStatus",
             (Standard_Integer (IGESGraph_HighLight::*)() const) static_cast<Standard_Integer (IGESGraph_HighLight::*)() const>(&IGESGraph_HighLight::HighLightStatus),
             R"#(returns 0 if <me> is not highlighted(default), 1 if <me> is highlighted)#" )
        .def("IsHighLighted",
             (Standard_Boolean (IGESGraph_HighLight::*)() const) static_cast<Standard_Boolean (IGESGraph_HighLight::*)() const>(&IGESGraph_HighLight::IsHighLighted),
             R"#(returns True if entity is highlighted)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_HighLight::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_HighLight::*)() const>(&IGESGraph_HighLight::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_HighLight::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_HighLight::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_IntercharacterSpacing ,opencascade::handle<IGESGraph_IntercharacterSpacing> , IGESData_IGESEntity>>(m.attr("IGESGraph_IntercharacterSpacing"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_IntercharacterSpacing::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (IGESGraph_IntercharacterSpacing::*)( const Standard_Integer , const Standard_Real ) >(&IGESGraph_IntercharacterSpacing::Init),
             R"#(This method is used to set the fields of the class IntercharacterSpacing - nbProps : Number of property values (NP = 1) - anISpace : Intercharacter spacing percentage)#"  , py::arg("nbProps"),  py::arg("anISpace"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESGraph_IntercharacterSpacing::*)() const) static_cast<Standard_Integer (IGESGraph_IntercharacterSpacing::*)() const>(&IGESGraph_IntercharacterSpacing::NbPropertyValues),
             R"#(returns the number of property values in <me>)#" )
        .def("ISpace",
             (Standard_Real (IGESGraph_IntercharacterSpacing::*)() const) static_cast<Standard_Real (IGESGraph_IntercharacterSpacing::*)() const>(&IGESGraph_IntercharacterSpacing::ISpace),
             R"#(returns the Intercharacter Space of <me> in percentage of the text height (Range = 0..100))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_IntercharacterSpacing::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_IntercharacterSpacing::*)() const>(&IGESGraph_IntercharacterSpacing::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_IntercharacterSpacing::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_IntercharacterSpacing::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_LineFontDefPattern ,opencascade::handle<IGESGraph_LineFontDefPattern> , IGESData_LineFontEntity>>(m.attr("IGESGraph_LineFontDefPattern"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_LineFontDefPattern::*)( const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (IGESGraph_LineFontDefPattern::*)( const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TCollection_HAsciiString> & ) >(&IGESGraph_LineFontDefPattern::Init),
             R"#(This method is used to set the fields of the class LineFontDefPattern - allSegLength : Containing lengths of respective segments - aPattern : HAsciiString indicating visible-blank segments)#"  , py::arg("allSegLength"),  py::arg("aPattern"))
        .def("NbSegments",
             (Standard_Integer (IGESGraph_LineFontDefPattern::*)() const) static_cast<Standard_Integer (IGESGraph_LineFontDefPattern::*)() const>(&IGESGraph_LineFontDefPattern::NbSegments),
             R"#(returns the number of segments in the visible-blank pattern)#" )
        .def("Length",
             (Standard_Real (IGESGraph_LineFontDefPattern::*)( const Standard_Integer ) const) static_cast<Standard_Real (IGESGraph_LineFontDefPattern::*)( const Standard_Integer ) const>(&IGESGraph_LineFontDefPattern::Length),
             R"#(returns the Length of Index'th segment of the basic pattern raises exception if Index <= 0 or Index > NbSegments)#"  , py::arg("Index"))
        .def("DisplayPattern",
             (opencascade::handle<TCollection_HAsciiString> (IGESGraph_LineFontDefPattern::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESGraph_LineFontDefPattern::*)() const>(&IGESGraph_LineFontDefPattern::DisplayPattern),
             R"#(returns the string indicating which segments of the basic pattern are visible and which are blanked. e.g: theNbSegments = 5 and if Bit Pattern = 10110, which means that segments 2, 3 and 5 are visible, whereas segments 1 and 4 are blank. The method returns "2H16" as the HAsciiString. Note: The bits are right justified. (16h = 10110))#" )
        .def("IsVisible",
             (Standard_Boolean (IGESGraph_LineFontDefPattern::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (IGESGraph_LineFontDefPattern::*)( const Standard_Integer ) const>(&IGESGraph_LineFontDefPattern::IsVisible),
             R"#(The Display Pattern is decrypted to return True if the Index'th basic pattern is Visible, False otherwise. If Index > NbSegments or Index <= 0 then return value is False.)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_LineFontDefPattern::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_LineFontDefPattern::*)() const>(&IGESGraph_LineFontDefPattern::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_LineFontDefPattern::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_LineFontDefPattern::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_LineFontDefTemplate ,opencascade::handle<IGESGraph_LineFontDefTemplate> , IGESData_LineFontEntity>>(m.attr("IGESGraph_LineFontDefTemplate"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_LineFontDefTemplate::*)( const Standard_Integer , const opencascade::handle<IGESBasic_SubfigureDef> & , const Standard_Real , const Standard_Real ) ) static_cast<void (IGESGraph_LineFontDefTemplate::*)( const Standard_Integer , const opencascade::handle<IGESBasic_SubfigureDef> & , const Standard_Real , const Standard_Real ) >(&IGESGraph_LineFontDefTemplate::Init),
             R"#(This method is used to set the fields of the class LineFontDefTemplate - anOrientation : Orientation of Template figure on anchoring curve - aTemplate : SubfigureDef entity used as Template figure - aDistance : Distance between the neighbouring Template figures - aScale : Scale factor applied to the Template figure)#"  , py::arg("anOrientation"),  py::arg("aTemplate"),  py::arg("aDistance"),  py::arg("aScale"))
        .def("Orientation",
             (Standard_Integer (IGESGraph_LineFontDefTemplate::*)() const) static_cast<Standard_Integer (IGESGraph_LineFontDefTemplate::*)() const>(&IGESGraph_LineFontDefTemplate::Orientation),
             R"#(if return value = 0, Each Template display is oriented by aligning the axis of the SubfigureDef with the axis of the definition space of the anchoring curve. = 1, Each Template display is oriented by aligning X-axis of the SubfigureDef with the tangent vector of the anchoring curve at the point of incidence of the curve and the origin of subfigure. Similarly Z-axis is aligned.)#" )
        .def("TemplateEntity",
             (opencascade::handle<IGESBasic_SubfigureDef> (IGESGraph_LineFontDefTemplate::*)() const) static_cast<opencascade::handle<IGESBasic_SubfigureDef> (IGESGraph_LineFontDefTemplate::*)() const>(&IGESGraph_LineFontDefTemplate::TemplateEntity),
             R"#(returns SubfigureDef as the Entity used as Template figure.)#" )
        .def("Distance",
             (Standard_Real (IGESGraph_LineFontDefTemplate::*)() const) static_cast<Standard_Real (IGESGraph_LineFontDefTemplate::*)() const>(&IGESGraph_LineFontDefTemplate::Distance),
             R"#(returns the Distance between any two Template figures on the anchoring curve.)#" )
        .def("Scale",
             (Standard_Real (IGESGraph_LineFontDefTemplate::*)() const) static_cast<Standard_Real (IGESGraph_LineFontDefTemplate::*)() const>(&IGESGraph_LineFontDefTemplate::Scale),
             R"#(returns the Scaling factor applied to SubfigureDef to form Template figure.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_LineFontDefTemplate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_LineFontDefTemplate::*)() const>(&IGESGraph_LineFontDefTemplate::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_LineFontDefTemplate::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_LineFontDefTemplate::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_LineFontPredefined ,opencascade::handle<IGESGraph_LineFontPredefined> , IGESData_IGESEntity>>(m.attr("IGESGraph_LineFontPredefined"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_LineFontPredefined::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (IGESGraph_LineFontPredefined::*)( const Standard_Integer , const Standard_Integer ) >(&IGESGraph_LineFontPredefined::Init),
             R"#(This method is used to set the fields of the class LineFontPredefined - nbProps : Number of property values (NP = 1) - aLineFontPatternCode : Line Font Pattern Code)#"  , py::arg("nbProps"),  py::arg("aLineFontPatternCode"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESGraph_LineFontPredefined::*)() const) static_cast<Standard_Integer (IGESGraph_LineFontPredefined::*)() const>(&IGESGraph_LineFontPredefined::NbPropertyValues),
             R"#(returns the number of property values in <me>)#" )
        .def("LineFontPatternCode",
             (Standard_Integer (IGESGraph_LineFontPredefined::*)() const) static_cast<Standard_Integer (IGESGraph_LineFontPredefined::*)() const>(&IGESGraph_LineFontPredefined::LineFontPatternCode),
             R"#(returns the Line Font Pattern Code of <me>)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_LineFontPredefined::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_LineFontPredefined::*)() const>(&IGESGraph_LineFontPredefined::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_LineFontPredefined::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_LineFontPredefined::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_NominalSize ,opencascade::handle<IGESGraph_NominalSize> , IGESData_IGESEntity>>(m.attr("IGESGraph_NominalSize"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_NominalSize::*)( const Standard_Integer , const Standard_Real , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (IGESGraph_NominalSize::*)( const Standard_Integer , const Standard_Real , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & ) >(&IGESGraph_NominalSize::Init),
             R"#(This method is used to set the fields of the class NominalSize - nbProps : Number of property values (2 or 3) - aNominalSizeValue : NominalSize Value - aNominalSizeName : NominalSize Name - aStandardName : Name of relevant engineering standard)#"  , py::arg("nbProps"),  py::arg("aNominalSizeValue"),  py::arg("aNominalSizeName"),  py::arg("aStandardName"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESGraph_NominalSize::*)() const) static_cast<Standard_Integer (IGESGraph_NominalSize::*)() const>(&IGESGraph_NominalSize::NbPropertyValues),
             R"#(returns the number of property values in <me>)#" )
        .def("NominalSizeValue",
             (Standard_Real (IGESGraph_NominalSize::*)() const) static_cast<Standard_Real (IGESGraph_NominalSize::*)() const>(&IGESGraph_NominalSize::NominalSizeValue),
             R"#(returns the value of <me>)#" )
        .def("NominalSizeName",
             (opencascade::handle<TCollection_HAsciiString> (IGESGraph_NominalSize::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESGraph_NominalSize::*)() const>(&IGESGraph_NominalSize::NominalSizeName),
             R"#(returns the name of <me>)#" )
        .def("HasStandardName",
             (Standard_Boolean (IGESGraph_NominalSize::*)() const) static_cast<Standard_Boolean (IGESGraph_NominalSize::*)() const>(&IGESGraph_NominalSize::HasStandardName),
             R"#(returns True if an engineering Standard is defined for <me> else, returns False)#" )
        .def("StandardName",
             (opencascade::handle<TCollection_HAsciiString> (IGESGraph_NominalSize::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESGraph_NominalSize::*)() const>(&IGESGraph_NominalSize::StandardName),
             R"#(returns the name of the relevant engineering standard of <me>)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_NominalSize::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_NominalSize::*)() const>(&IGESGraph_NominalSize::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_NominalSize::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_NominalSize::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_Pick ,opencascade::handle<IGESGraph_Pick> , IGESData_IGESEntity>>(m.attr("IGESGraph_Pick"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_Pick::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (IGESGraph_Pick::*)( const Standard_Integer , const Standard_Integer ) >(&IGESGraph_Pick::Init),
             R"#(This method is used to set the fields of the class Pick - nbProps : Number of property values (NP = 1) - aPickStatus : Pick Flag)#"  , py::arg("nbProps"),  py::arg("aPickStatus"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESGraph_Pick::*)() const) static_cast<Standard_Integer (IGESGraph_Pick::*)() const>(&IGESGraph_Pick::NbPropertyValues),
             R"#(returns the number of property values in <me>.)#" )
        .def("PickFlag",
             (Standard_Integer (IGESGraph_Pick::*)() const) static_cast<Standard_Integer (IGESGraph_Pick::*)() const>(&IGESGraph_Pick::PickFlag),
             R"#(returns 0 if <me> is pickable(default), 1 if <me> is not pickable.)#" )
        .def("IsPickable",
             (Standard_Boolean (IGESGraph_Pick::*)() const) static_cast<Standard_Boolean (IGESGraph_Pick::*)() const>(&IGESGraph_Pick::IsPickable),
             R"#(returns True if thePick is 0.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_Pick::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_Pick::*)() const>(&IGESGraph_Pick::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_Pick::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_Pick::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_Protocol ,opencascade::handle<IGESGraph_Protocol> , IGESData_Protocol>>(m.attr("IGESGraph_Protocol"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_Protocol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ReadWriteModule ,opencascade::handle<IGESGraph_ReadWriteModule> , IGESData_ReadWriteModule>>(m.attr("IGESGraph_ReadWriteModule"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_ReadWriteModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_SpecificModule ,opencascade::handle<IGESGraph_SpecificModule> , IGESData_SpecificModule>>(m.attr("IGESGraph_SpecificModule"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_SpecificModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_TextDisplayTemplate ,opencascade::handle<IGESGraph_TextDisplayTemplate> , IGESData_IGESEntity>>(m.attr("IGESGraph_TextDisplayTemplate"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_TextDisplayTemplate::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const opencascade::handle<IGESGraph_TextFontDef> & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const gp_XYZ & ) ) static_cast<void (IGESGraph_TextDisplayTemplate::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const opencascade::handle<IGESGraph_TextFontDef> & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const gp_XYZ & ) >(&IGESGraph_TextDisplayTemplate::Init),
             R"#(This method is used to set the fields of the class TextDisplayTemplate - aWidth : Character box width - aHeight : Character box height - afontCode : Font code - aFontEntity : Text Font Definition Entity - aSlantAngle : Slant angle - aRotationAngle : Rotation angle - aMirrorFlag : Mirror Flag - aRotationFlag : Rotate internal text flag - aCorner : Lower left corner coordinates(Form No. 0), Increments from coordinates (Form No. 1))#"  , py::arg("aWidth"),  py::arg("aHeight"),  py::arg("aFontCode"),  py::arg("aFontEntity"),  py::arg("aSlantAngle"),  py::arg("aRotationAngle"),  py::arg("aMirrorFlag"),  py::arg("aRotationFlag"),  py::arg("aCorner"))
        .def("SetIncremental",
             (void (IGESGraph_TextDisplayTemplate::*)( const Standard_Boolean ) ) static_cast<void (IGESGraph_TextDisplayTemplate::*)( const Standard_Boolean ) >(&IGESGraph_TextDisplayTemplate::SetIncremental),
             R"#(Sets <me> to be Incremental (Form 1) if <mode> is True, or Basolute (Form 0) else)#"  , py::arg("mode"))
        .def("IsIncremental",
             (Standard_Boolean (IGESGraph_TextDisplayTemplate::*)() const) static_cast<Standard_Boolean (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::IsIncremental),
             R"#(returns True if entity is Incremental (Form 1). False if entity is Absolute (Form 0).)#" )
        .def("BoxWidth",
             (Standard_Real (IGESGraph_TextDisplayTemplate::*)() const) static_cast<Standard_Real (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::BoxWidth),
             R"#(returns Character Box Width.)#" )
        .def("BoxHeight",
             (Standard_Real (IGESGraph_TextDisplayTemplate::*)() const) static_cast<Standard_Real (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::BoxHeight),
             R"#(returns Character Box Height.)#" )
        .def("IsFontEntity",
             (Standard_Boolean (IGESGraph_TextDisplayTemplate::*)() const) static_cast<Standard_Boolean (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::IsFontEntity),
             R"#(returns False if theFontEntity is Null, True otherwise.)#" )
        .def("FontCode",
             (Standard_Integer (IGESGraph_TextDisplayTemplate::*)() const) static_cast<Standard_Integer (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::FontCode),
             R"#(returns the font code.)#" )
        .def("FontEntity",
             (opencascade::handle<IGESGraph_TextFontDef> (IGESGraph_TextDisplayTemplate::*)() const) static_cast<opencascade::handle<IGESGraph_TextFontDef> (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::FontEntity),
             R"#(returns Text Font Definition Entity used to define the font.)#" )
        .def("SlantAngle",
             (Standard_Real (IGESGraph_TextDisplayTemplate::*)() const) static_cast<Standard_Real (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::SlantAngle),
             R"#(returns slant angle of character in radians.)#" )
        .def("RotationAngle",
             (Standard_Real (IGESGraph_TextDisplayTemplate::*)() const) static_cast<Standard_Real (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::RotationAngle),
             R"#(returns Rotation angle of text block in radians.)#" )
        .def("MirrorFlag",
             (Standard_Integer (IGESGraph_TextDisplayTemplate::*)() const) static_cast<Standard_Integer (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::MirrorFlag),
             R"#(returns Mirror flag Mirror flag : 0 = no mirroring. 1 = mirror axis perpendicular to text base line. 2 = mirror axis is text base line.)#" )
        .def("RotateFlag",
             (Standard_Integer (IGESGraph_TextDisplayTemplate::*)() const) static_cast<Standard_Integer (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::RotateFlag),
             R"#(returns Rotate internal text flag. Rotate internal text flag : 0 = text horizontal. 1 = text vertical.)#" )
        .def("StartingCorner",
             (gp_Pnt (IGESGraph_TextDisplayTemplate::*)() const) static_cast<gp_Pnt (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::StartingCorner),
             R"#(If IsIncremental() returns False, gets coordinates of lower left corner of first character box. If IsIncremental() returns True, gets increments from X, Y, Z coordinates found in parent entity.)#" )
        .def("TransformedStartingCorner",
             (gp_Pnt (IGESGraph_TextDisplayTemplate::*)() const) static_cast<gp_Pnt (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::TransformedStartingCorner),
             R"#(If IsIncremental() returns False, gets coordinates of lower left corner of first character box. If IsIncremental() returns True, gets increments from X, Y, Z coordinates found in parent entity.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_TextDisplayTemplate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_TextDisplayTemplate::*)() const>(&IGESGraph_TextDisplayTemplate::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_TextDisplayTemplate::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_TextDisplayTemplate::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_TextFontDef ,opencascade::handle<IGESGraph_TextFontDef> , IGESData_IGESEntity>>(m.attr("IGESGraph_TextFontDef"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_TextFontDef::*)( const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<IGESGraph_TextFontDef> & , const Standard_Integer , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> & , const opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> & , const opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> & ) ) static_cast<void (IGESGraph_TextFontDef::*)( const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<IGESGraph_TextFontDef> & , const Standard_Integer , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> & , const opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> & , const opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> & ) >(&IGESGraph_TextFontDef::Init),
             R"#(This method is used to set the fields of the class TextFontDef - aFontCode : Font Code - aFontName : Font Name - aSupersededFont : Number of superseded font - aSupersededEntity : Text Definition Entity - aScale : No. of grid units = 1 text height unit - allASCIICodes : ASCII codes for characters - allNextCharX & Y : Grid locations of the next character's origin (Integer vals) - allPenMotions : No. of pen motions for the characters - allPenFlags : Pen up/down flags, 0 = Down (default), 1 = Up - allMovePenToX & Y : Grid locations the pen will move to This method initializes the fields of the class TextFontDef. An exception is raised if the lengths of allASCIICodes, allNextChars, allPenMotions, allPenFlags and allMovePenTo are not same.)#"  , py::arg("aFontCode"),  py::arg("aFontName"),  py::arg("aSupersededFont"),  py::arg("aSupersededEntity"),  py::arg("aScale"),  py::arg("allASCIICodes"),  py::arg("allNextCharX"),  py::arg("allNextCharY"),  py::arg("allPenMotions"),  py::arg("allPenFlags"),  py::arg("allMovePenToX"),  py::arg("allMovePenToY"))
        .def("FontCode",
             (Standard_Integer (IGESGraph_TextFontDef::*)() const) static_cast<Standard_Integer (IGESGraph_TextFontDef::*)() const>(&IGESGraph_TextFontDef::FontCode),
             R"#(returns the font code.)#" )
        .def("FontName",
             (opencascade::handle<TCollection_HAsciiString> (IGESGraph_TextFontDef::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESGraph_TextFontDef::*)() const>(&IGESGraph_TextFontDef::FontName),
             R"#(returns the font name.)#" )
        .def("IsSupersededFontEntity",
             (Standard_Boolean (IGESGraph_TextFontDef::*)() const) static_cast<Standard_Boolean (IGESGraph_TextFontDef::*)() const>(&IGESGraph_TextFontDef::IsSupersededFontEntity),
             R"#(True if this definition supersedes another TextFontDefinition Entity, False if it supersedes value.)#" )
        .def("SupersededFontCode",
             (Standard_Integer (IGESGraph_TextFontDef::*)() const) static_cast<Standard_Integer (IGESGraph_TextFontDef::*)() const>(&IGESGraph_TextFontDef::SupersededFontCode),
             R"#(returns the font number which this entity modifies.)#" )
        .def("SupersededFontEntity",
             (opencascade::handle<IGESGraph_TextFontDef> (IGESGraph_TextFontDef::*)() const) static_cast<opencascade::handle<IGESGraph_TextFontDef> (IGESGraph_TextFontDef::*)() const>(&IGESGraph_TextFontDef::SupersededFontEntity),
             R"#(returns the font entity which this entity modifies.)#" )
        .def("Scale",
             (Standard_Integer (IGESGraph_TextFontDef::*)() const) static_cast<Standard_Integer (IGESGraph_TextFontDef::*)() const>(&IGESGraph_TextFontDef::Scale),
             R"#(returns the number of grid units which equal one text height unit.)#" )
        .def("NbCharacters",
             (Standard_Integer (IGESGraph_TextFontDef::*)() const) static_cast<Standard_Integer (IGESGraph_TextFontDef::*)() const>(&IGESGraph_TextFontDef::NbCharacters),
             R"#(returns the number of characters in this definition.)#" )
        .def("ASCIICode",
             (Standard_Integer (IGESGraph_TextFontDef::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IGESGraph_TextFontDef::*)( const Standard_Integer ) const>(&IGESGraph_TextFontDef::ASCIICode),
             R"#(returns the ASCII code of Chnum'th character. Exception OutOfRange is raised if Chnum <= 0 or Chnum > NbCharacters)#"  , py::arg("Chnum"))
        .def("NbPenMotions",
             (Standard_Integer (IGESGraph_TextFontDef::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IGESGraph_TextFontDef::*)( const Standard_Integer ) const>(&IGESGraph_TextFontDef::NbPenMotions),
             R"#(returns number of pen motions for Chnum'th character. Exception OutOfRange is raised if Chnum <= 0 or Chnum > NbCharacters)#"  , py::arg("Chnum"))
        .def("IsPenUp",
             (Standard_Boolean (IGESGraph_TextFontDef::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Boolean (IGESGraph_TextFontDef::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESGraph_TextFontDef::IsPenUp),
             R"#(returns pen status(True if 1, False if 0) of Motionnum'th motion of Chnum'th character. Exception raised if Chnum <= 0 or Chnum > NbCharacters or Motionnum <= 0 or Motionnum > NbPenMotions)#"  , py::arg("Chnum"),  py::arg("Motionnum"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_TextFontDef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_TextFontDef::*)() const>(&IGESGraph_TextFontDef::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("NextCharOrigin",
             []( IGESGraph_TextFontDef &self , const Standard_Integer Chnum ){ Standard_Integer  NX; Standard_Integer  NY; self.NextCharOrigin(Chnum,NX,NY); return std::make_tuple(NX,NY); },
             R"#(returns grid location of origin of character next to Chnum'th char. Exception OutOfRange is raised if Chnum <= 0 or Chnum > NbCharacters)#"  , py::arg("Chnum"))
        .def("NextPenPosition",
             []( IGESGraph_TextFontDef &self , const Standard_Integer Chnum,const Standard_Integer Motionnum ){ Standard_Integer  IX; Standard_Integer  IY; self.NextPenPosition(Chnum,Motionnum,IX,IY); return std::make_tuple(IX,IY); },
             R"#(None)#"  , py::arg("Chnum"),  py::arg("Motionnum"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_TextFontDef::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_TextFontDef::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolColor , shared_ptr<IGESGraph_ToolColor> >>(m.attr("IGESGraph_ToolColor"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolColor::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolColor::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolColor::OwnShared),
             R"#(Lists the Entities shared by a Color <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & ) const>(&IGESGraph_ToolColor::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolColor::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & , const opencascade::handle<IGESGraph_Color> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & , const opencascade::handle<IGESGraph_Color> & , Interface_CopyTool & ) const>(&IGESGraph_ToolColor::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolColor::*)( const opencascade::handle<IGESGraph_Color> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolColor::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolDefinitionLevel , shared_ptr<IGESGraph_ToolDefinitionLevel> >>(m.attr("IGESGraph_ToolDefinitionLevel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolDefinitionLevel::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolDefinitionLevel::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolDefinitionLevel::OwnShared),
             R"#(Lists the Entities shared by a DefinitionLevel <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & ) const>(&IGESGraph_ToolDefinitionLevel::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolDefinitionLevel::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & , const opencascade::handle<IGESGraph_DefinitionLevel> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & , const opencascade::handle<IGESGraph_DefinitionLevel> & , Interface_CopyTool & ) const>(&IGESGraph_ToolDefinitionLevel::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolDefinitionLevel::*)( const opencascade::handle<IGESGraph_DefinitionLevel> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolDefinitionLevel::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolDrawingSize , shared_ptr<IGESGraph_ToolDrawingSize> >>(m.attr("IGESGraph_ToolDrawingSize"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolDrawingSize::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolDrawingSize::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolDrawingSize::OwnShared),
             R"#(Lists the Entities shared by a DrawingSize <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & ) const) static_cast<Standard_Boolean (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & ) const>(&IGESGraph_ToolDrawingSize::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a DrawingSize (NbPropertyValues forced to 2))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & ) const>(&IGESGraph_ToolDrawingSize::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolDrawingSize::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & , const opencascade::handle<IGESGraph_DrawingSize> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & , const opencascade::handle<IGESGraph_DrawingSize> & , Interface_CopyTool & ) const>(&IGESGraph_ToolDrawingSize::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolDrawingSize::*)( const opencascade::handle<IGESGraph_DrawingSize> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolDrawingSize::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolDrawingUnits , shared_ptr<IGESGraph_ToolDrawingUnits> >>(m.attr("IGESGraph_ToolDrawingUnits"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolDrawingUnits::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolDrawingUnits::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolDrawingUnits::OwnShared),
             R"#(Lists the Entities shared by a DrawingUnits <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & ) const) static_cast<Standard_Boolean (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & ) const>(&IGESGraph_ToolDrawingUnits::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a DrawingUnits (NbPropertyValues forced to 2))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & ) const>(&IGESGraph_ToolDrawingUnits::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolDrawingUnits::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & , const opencascade::handle<IGESGraph_DrawingUnits> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & , const opencascade::handle<IGESGraph_DrawingUnits> & , Interface_CopyTool & ) const>(&IGESGraph_ToolDrawingUnits::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolDrawingUnits::*)( const opencascade::handle<IGESGraph_DrawingUnits> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolDrawingUnits::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolHighLight , shared_ptr<IGESGraph_ToolHighLight> >>(m.attr("IGESGraph_ToolHighLight"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolHighLight::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolHighLight::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolHighLight::OwnShared),
             R"#(Lists the Entities shared by a HighLight <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & ) const) static_cast<Standard_Boolean (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & ) const>(&IGESGraph_ToolHighLight::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a HighLight (NbPropertyValues forced to 1))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & ) const>(&IGESGraph_ToolHighLight::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolHighLight::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & , const opencascade::handle<IGESGraph_HighLight> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & , const opencascade::handle<IGESGraph_HighLight> & , Interface_CopyTool & ) const>(&IGESGraph_ToolHighLight::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolHighLight::*)( const opencascade::handle<IGESGraph_HighLight> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolHighLight::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolIntercharacterSpacing , shared_ptr<IGESGraph_ToolIntercharacterSpacing> >>(m.attr("IGESGraph_ToolIntercharacterSpacing"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolIntercharacterSpacing::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolIntercharacterSpacing::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolIntercharacterSpacing::OwnShared),
             R"#(Lists the Entities shared by a IntercharacterSpacing <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & ) const) static_cast<Standard_Boolean (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & ) const>(&IGESGraph_ToolIntercharacterSpacing::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a IntercharacterSpacing (NbPropertyValues forced to 1))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & ) const>(&IGESGraph_ToolIntercharacterSpacing::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolIntercharacterSpacing::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & , const opencascade::handle<IGESGraph_IntercharacterSpacing> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & , const opencascade::handle<IGESGraph_IntercharacterSpacing> & , Interface_CopyTool & ) const>(&IGESGraph_ToolIntercharacterSpacing::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolIntercharacterSpacing::*)( const opencascade::handle<IGESGraph_IntercharacterSpacing> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolIntercharacterSpacing::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolLineFontDefPattern , shared_ptr<IGESGraph_ToolLineFontDefPattern> >>(m.attr("IGESGraph_ToolLineFontDefPattern"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolLineFontDefPattern::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolLineFontDefPattern::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolLineFontDefPattern::OwnShared),
             R"#(Lists the Entities shared by a LineFontDefPattern <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & ) const>(&IGESGraph_ToolLineFontDefPattern::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolLineFontDefPattern::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & , const opencascade::handle<IGESGraph_LineFontDefPattern> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & , const opencascade::handle<IGESGraph_LineFontDefPattern> & , Interface_CopyTool & ) const>(&IGESGraph_ToolLineFontDefPattern::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolLineFontDefPattern::*)( const opencascade::handle<IGESGraph_LineFontDefPattern> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolLineFontDefPattern::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolLineFontDefTemplate , shared_ptr<IGESGraph_ToolLineFontDefTemplate> >>(m.attr("IGESGraph_ToolLineFontDefTemplate"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolLineFontDefTemplate::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolLineFontDefTemplate::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolLineFontDefTemplate::OwnShared),
             R"#(Lists the Entities shared by a LineFontDefTemplate <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & ) const>(&IGESGraph_ToolLineFontDefTemplate::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolLineFontDefTemplate::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & , const opencascade::handle<IGESGraph_LineFontDefTemplate> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & , const opencascade::handle<IGESGraph_LineFontDefTemplate> & , Interface_CopyTool & ) const>(&IGESGraph_ToolLineFontDefTemplate::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolLineFontDefTemplate::*)( const opencascade::handle<IGESGraph_LineFontDefTemplate> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolLineFontDefTemplate::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolLineFontPredefined , shared_ptr<IGESGraph_ToolLineFontPredefined> >>(m.attr("IGESGraph_ToolLineFontPredefined"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolLineFontPredefined::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolLineFontPredefined::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolLineFontPredefined::OwnShared),
             R"#(Lists the Entities shared by a LineFontPredefined <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & ) const) static_cast<Standard_Boolean (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & ) const>(&IGESGraph_ToolLineFontPredefined::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a LineFontPredefined (NbPropertyValues forced to 1))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & ) const>(&IGESGraph_ToolLineFontPredefined::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolLineFontPredefined::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & , const opencascade::handle<IGESGraph_LineFontPredefined> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & , const opencascade::handle<IGESGraph_LineFontPredefined> & , Interface_CopyTool & ) const>(&IGESGraph_ToolLineFontPredefined::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolLineFontPredefined::*)( const opencascade::handle<IGESGraph_LineFontPredefined> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolLineFontPredefined::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolNominalSize , shared_ptr<IGESGraph_ToolNominalSize> >>(m.attr("IGESGraph_ToolNominalSize"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolNominalSize::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolNominalSize::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolNominalSize::OwnShared),
             R"#(Lists the Entities shared by a NominalSize <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & ) const) static_cast<Standard_Boolean (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & ) const>(&IGESGraph_ToolNominalSize::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a NominalSize (NbPropertyValues forced to 2 or 3 according HasStandardName))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & ) const>(&IGESGraph_ToolNominalSize::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolNominalSize::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & , const opencascade::handle<IGESGraph_NominalSize> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & , const opencascade::handle<IGESGraph_NominalSize> & , Interface_CopyTool & ) const>(&IGESGraph_ToolNominalSize::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolNominalSize::*)( const opencascade::handle<IGESGraph_NominalSize> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolNominalSize::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolPick , shared_ptr<IGESGraph_ToolPick> >>(m.attr("IGESGraph_ToolPick"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolPick::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolPick::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolPick::OwnShared),
             R"#(Lists the Entities shared by a Pick <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & ) const) static_cast<Standard_Boolean (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & ) const>(&IGESGraph_ToolPick::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a Pick (NbPropertyValues forced to 1))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & ) const>(&IGESGraph_ToolPick::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolPick::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & , const opencascade::handle<IGESGraph_Pick> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & , const opencascade::handle<IGESGraph_Pick> & , Interface_CopyTool & ) const>(&IGESGraph_ToolPick::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolPick::*)( const opencascade::handle<IGESGraph_Pick> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolPick::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolTextDisplayTemplate , shared_ptr<IGESGraph_ToolTextDisplayTemplate> >>(m.attr("IGESGraph_ToolTextDisplayTemplate"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolTextDisplayTemplate::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolTextDisplayTemplate::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolTextDisplayTemplate::OwnShared),
             R"#(Lists the Entities shared by a TextDisplayTemplate <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & ) const>(&IGESGraph_ToolTextDisplayTemplate::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolTextDisplayTemplate::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & , const opencascade::handle<IGESGraph_TextDisplayTemplate> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & , const opencascade::handle<IGESGraph_TextDisplayTemplate> & , Interface_CopyTool & ) const>(&IGESGraph_ToolTextDisplayTemplate::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolTextDisplayTemplate::*)( const opencascade::handle<IGESGraph_TextDisplayTemplate> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolTextDisplayTemplate::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolTextFontDef , shared_ptr<IGESGraph_ToolTextFontDef> >>(m.attr("IGESGraph_ToolTextFontDef"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolTextFontDef::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolTextFontDef::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolTextFontDef::OwnShared),
             R"#(Lists the Entities shared by a TextFontDef <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & ) const>(&IGESGraph_ToolTextFontDef::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolTextFontDef::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & , const opencascade::handle<IGESGraph_TextFontDef> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & , const opencascade::handle<IGESGraph_TextFontDef> & , Interface_CopyTool & ) const>(&IGESGraph_ToolTextFontDef::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolTextFontDef::*)( const opencascade::handle<IGESGraph_TextFontDef> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolTextFontDef::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_ToolUniformRectGrid , shared_ptr<IGESGraph_ToolUniformRectGrid> >>(m.attr("IGESGraph_ToolUniformRectGrid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGraph_ToolUniformRectGrid::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & , IGESData_IGESWriter & ) const>(&IGESGraph_ToolUniformRectGrid::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & , Interface_EntityIterator & ) const) static_cast<void (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & , Interface_EntityIterator & ) const>(&IGESGraph_ToolUniformRectGrid::OwnShared),
             R"#(Lists the Entities shared by a UniformRectGrid <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & ) const) static_cast<Standard_Boolean (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & ) const>(&IGESGraph_ToolUniformRectGrid::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a UniformRectGrid (NbPropertyValues forced to 9))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & ) const) static_cast<IGESData_DirChecker (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & ) const>(&IGESGraph_ToolUniformRectGrid::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGraph_ToolUniformRectGrid::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & , const opencascade::handle<IGESGraph_UniformRectGrid> & , Interface_CopyTool & ) const) static_cast<void (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & , const opencascade::handle<IGESGraph_UniformRectGrid> & , Interface_CopyTool & ) const>(&IGESGraph_ToolUniformRectGrid::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGraph_ToolUniformRectGrid::*)( const opencascade::handle<IGESGraph_UniformRectGrid> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGraph_ToolUniformRectGrid::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGraph_UniformRectGrid ,opencascade::handle<IGESGraph_UniformRectGrid> , IGESData_IGESEntity>>(m.attr("IGESGraph_UniformRectGrid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGraph_UniformRectGrid::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const gp_XY & , const gp_XY & , const Standard_Integer , const Standard_Integer ) ) static_cast<void (IGESGraph_UniformRectGrid::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const gp_XY & , const gp_XY & , const Standard_Integer , const Standard_Integer ) >(&IGESGraph_UniformRectGrid::Init),
             R"#(This method is used to set the fields of the class UniformRectGrid - nbProps : Number of property values (NP = 9) - finite : Finite/Infinite grid flag - line : Line/Point grid flag - weighted : Weighted/Unweighted grid flag - aGridPoint : Point on the grid - aGridSpacing : Grid spacing - pointsX : No. of points/lines in X Direction - pointsY : No. of points/lines in Y Direction)#"  , py::arg("nbProps"),  py::arg("finite"),  py::arg("line"),  py::arg("weighted"),  py::arg("aGridPoint"),  py::arg("aGridSpacing"),  py::arg("pointsX"),  py::arg("pointsY"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESGraph_UniformRectGrid::*)() const) static_cast<Standard_Integer (IGESGraph_UniformRectGrid::*)() const>(&IGESGraph_UniformRectGrid::NbPropertyValues),
             R"#(returns the number of property values in <me>.)#" )
        .def("IsFinite",
             (Standard_Boolean (IGESGraph_UniformRectGrid::*)() const) static_cast<Standard_Boolean (IGESGraph_UniformRectGrid::*)() const>(&IGESGraph_UniformRectGrid::IsFinite),
             R"#(returns False if <me> is an infinite grid, True if <me> is a finite grid.)#" )
        .def("IsLine",
             (Standard_Boolean (IGESGraph_UniformRectGrid::*)() const) static_cast<Standard_Boolean (IGESGraph_UniformRectGrid::*)() const>(&IGESGraph_UniformRectGrid::IsLine),
             R"#(returns False if <me> is a Point grid, True if <me> is a Line grid.)#" )
        .def("IsWeighted",
             (Standard_Boolean (IGESGraph_UniformRectGrid::*)() const) static_cast<Standard_Boolean (IGESGraph_UniformRectGrid::*)() const>(&IGESGraph_UniformRectGrid::IsWeighted),
             R"#(returns False if <me> is a Weighted grid, True if <me> is not a Weighted grid.)#" )
        .def("GridPoint",
             (gp_Pnt2d (IGESGraph_UniformRectGrid::*)() const) static_cast<gp_Pnt2d (IGESGraph_UniformRectGrid::*)() const>(&IGESGraph_UniformRectGrid::GridPoint),
             R"#(returns coordinates of lower left corner, if <me> is a finite grid, coordinates of an arbitrary point, if <me> is an infinite grid.)#" )
        .def("GridSpacing",
             (gp_Vec2d (IGESGraph_UniformRectGrid::*)() const) static_cast<gp_Vec2d (IGESGraph_UniformRectGrid::*)() const>(&IGESGraph_UniformRectGrid::GridSpacing),
             R"#(returns the grid-spacing in drawing coordinates.)#" )
        .def("NbPointsX",
             (Standard_Integer (IGESGraph_UniformRectGrid::*)() const) static_cast<Standard_Integer (IGESGraph_UniformRectGrid::*)() const>(&IGESGraph_UniformRectGrid::NbPointsX),
             R"#(returns the no. of points/lines in X direction (only applicable if IsFinite() = 1, i.e: a finite grid).)#" )
        .def("NbPointsY",
             (Standard_Integer (IGESGraph_UniformRectGrid::*)() const) static_cast<Standard_Integer (IGESGraph_UniformRectGrid::*)() const>(&IGESGraph_UniformRectGrid::NbPointsY),
             R"#(returns the no. of points/lines in Y direction (only applicable if IsFinite() = 1, i.e: a finite grid).)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGraph_UniformRectGrid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGraph_UniformRectGrid::*)() const>(&IGESGraph_UniformRectGrid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGraph_UniformRectGrid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGraph_UniformRectGrid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IGESGraph_Pick.hxx
// ./opencascade/IGESGraph_SpecificModule.hxx
// ./opencascade/IGESGraph_TextDisplayTemplate.hxx
// ./opencascade/IGESGraph_TextFontDef.hxx
// ./opencascade/IGESGraph_ToolNominalSize.hxx
// ./opencascade/IGESGraph_ToolDrawingSize.hxx
// ./opencascade/IGESGraph_ToolUniformRectGrid.hxx
// ./opencascade/IGESGraph_HArray1OfColor.hxx
// ./opencascade/IGESGraph_ToolDrawingUnits.hxx
// ./opencascade/IGESGraph_ToolIntercharacterSpacing.hxx
// ./opencascade/IGESGraph_ToolColor.hxx
// ./opencascade/IGESGraph_LineFontDefTemplate.hxx
// ./opencascade/IGESGraph.hxx
// ./opencascade/IGESGraph_GeneralModule.hxx
// ./opencascade/IGESGraph_Array1OfTextDisplayTemplate.hxx
// ./opencascade/IGESGraph_HArray1OfTextFontDef.hxx
// ./opencascade/IGESGraph_UniformRectGrid.hxx
// ./opencascade/IGESGraph_LineFontPredefined.hxx
// ./opencascade/IGESGraph_HArray1OfTextDisplayTemplate.hxx
// ./opencascade/IGESGraph_HighLight.hxx
// ./opencascade/IGESGraph_DefinitionLevel.hxx
// ./opencascade/IGESGraph_ToolTextFontDef.hxx
// ./opencascade/IGESGraph_Color.hxx
// ./opencascade/IGESGraph_DrawingUnits.hxx
// ./opencascade/IGESGraph_Protocol.hxx
// ./opencascade/IGESGraph_ToolLineFontDefTemplate.hxx
// ./opencascade/IGESGraph_Array1OfColor.hxx
// ./opencascade/IGESGraph_ToolPick.hxx
// ./opencascade/IGESGraph_ToolTextDisplayTemplate.hxx
// ./opencascade/IGESGraph_ToolLineFontDefPattern.hxx
// ./opencascade/IGESGraph_DrawingSize.hxx
// ./opencascade/IGESGraph_ToolLineFontPredefined.hxx
// ./opencascade/IGESGraph_Array1OfTextFontDef.hxx
// ./opencascade/IGESGraph_ToolHighLight.hxx
// ./opencascade/IGESGraph_ReadWriteModule.hxx
// ./opencascade/IGESGraph_ToolDefinitionLevel.hxx
// ./opencascade/IGESGraph_IntercharacterSpacing.hxx
// ./opencascade/IGESGraph_LineFontDefPattern.hxx
// ./opencascade/IGESGraph_NominalSize.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESGraph_TextDisplayTemplate> >(m,"IGESGraph_Array1OfTextDisplayTemplate");
    register_template_NCollection_Array1<opencascade::handle<IGESGraph_Color> >(m,"IGESGraph_Array1OfColor");
    register_template_NCollection_Array1<opencascade::handle<IGESGraph_TextFontDef> >(m,"IGESGraph_Array1OfTextFontDef");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

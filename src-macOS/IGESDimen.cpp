
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDimen_Section.hxx>
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
#include <IGESDimen_Protocol.hxx>
#include <IGESDimen_CenterLine.hxx>
#include <IGESDimen_Section.hxx>
#include <IGESDimen_WitnessLine.hxx>
#include <IGESDimen_AngularDimension.hxx>
#include <IGESDimen_CurveDimension.hxx>
#include <IGESDimen_DiameterDimension.hxx>
#include <IGESDimen_FlagNote.hxx>
#include <IGESDimen_GeneralLabel.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_NewGeneralNote.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <IGESDimen_LinearDimension.hxx>
#include <IGESDimen_OrdinateDimension.hxx>
#include <IGESDimen_PointDimension.hxx>
#include <IGESDimen_RadiusDimension.hxx>
#include <IGESDimen_GeneralSymbol.hxx>
#include <IGESDimen_SectionedArea.hxx>
#include <IGESDimen_DimensionedGeometry.hxx>
#include <IGESDimen_NewDimensionedGeometry.hxx>
#include <IGESDimen_DimensionUnits.hxx>
#include <IGESDimen_DimensionTolerance.hxx>
#include <IGESDimen_DimensionDisplayData.hxx>
#include <IGESDimen_BasicDimension.hxx>
#include <IGESDimen_ToolCenterLine.hxx>
#include <IGESDimen_ToolSection.hxx>
#include <IGESDimen_ToolWitnessLine.hxx>
#include <IGESDimen_ToolAngularDimension.hxx>
#include <IGESDimen_ToolCurveDimension.hxx>
#include <IGESDimen_ToolDiameterDimension.hxx>
#include <IGESDimen_ToolFlagNote.hxx>
#include <IGESDimen_ToolGeneralLabel.hxx>
#include <IGESDimen_ToolGeneralNote.hxx>
#include <IGESDimen_ToolNewGeneralNote.hxx>
#include <IGESDimen_ToolLeaderArrow.hxx>
#include <IGESDimen_ToolLinearDimension.hxx>
#include <IGESDimen_ToolOrdinateDimension.hxx>
#include <IGESDimen_ToolPointDimension.hxx>
#include <IGESDimen_ToolRadiusDimension.hxx>
#include <IGESDimen_ToolGeneralSymbol.hxx>
#include <IGESDimen_ToolSectionedArea.hxx>
#include <IGESDimen_ToolDimensionedGeometry.hxx>
#include <IGESDimen_ToolNewDimensionedGeometry.hxx>
#include <IGESDimen_ToolDimensionUnits.hxx>
#include <IGESDimen_ToolDimensionTolerance.hxx>
#include <IGESDimen_ToolDimensionDisplayData.hxx>
#include <IGESDimen_ToolBasicDimension.hxx>
#include <IGESDimen_Protocol.hxx>
#include <IGESDimen_ReadWriteModule.hxx>
#include <IGESDimen_GeneralModule.hxx>
#include <IGESDimen_SpecificModule.hxx>
#include <gp_Pnt.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDimen_LinearDimension.hxx>
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
#include <IGESDimen_DimensionUnits.hxx>
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
#include <IGESDimen_DimensionTolerance.hxx>
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
#include <IGESDimen_CenterLine.hxx>
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
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <IGESDimen_WitnessLine.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <IGESGeom_CircularArc.hxx>
#include <IGESGeom_CompositeCurve.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDimen_NewGeneralNote.hxx>
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
#include <IGESDimen_GeneralNote.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDimen_CurveDimension.hxx>
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
#include <IGESDimen_WitnessLine.hxx>
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
#include <Standard_DomainError.hxx>
#include <IGESDimen_PointDimension.hxx>
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
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_WitnessLine.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDimen_DiameterDimension.hxx>
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
#include <IGESDimen_FlagNote.hxx>
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
#include <IGESDimen_GeneralNote.hxx>
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
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDimen_OrdinateDimension.hxx>
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
#include <IGESDimen_GeneralNote.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDimen_NewDimensionedGeometry.hxx>
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
#include <IGESDimen_AngularDimension.hxx>
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
#include <IGESDimen_GeneralSymbol.hxx>
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
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDimen_BasicDimension.hxx>
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
#include <IGESDimen_SectionedArea.hxx>
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
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDimen_DimensionDisplayData.hxx>
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
#include <IGESDimen_LeaderArrow.hxx>
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
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <IGESDimen_WitnessLine.hxx>
#include <Standard_OutOfRange.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <gp_Pnt2d.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDimen_DimensionedGeometry.hxx>
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
#include <IGESDimen_GeneralLabel.hxx>
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
#include <gp_Pnt.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_WitnessLine.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDimen_RadiusDimension.hxx>
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
#include <IGESDimen.hxx>
#include <IGESDimen_AngularDimension.hxx>
#include <IGESDimen_Array1OfGeneralNote.hxx>
#include <IGESDimen_Array1OfLeaderArrow.hxx>
#include <IGESDimen_BasicDimension.hxx>
#include <IGESDimen_CenterLine.hxx>
#include <IGESDimen_CurveDimension.hxx>
#include <IGESDimen_DiameterDimension.hxx>
#include <IGESDimen_DimensionDisplayData.hxx>
#include <IGESDimen_DimensionedGeometry.hxx>
#include <IGESDimen_DimensionTolerance.hxx>
#include <IGESDimen_DimensionUnits.hxx>
#include <IGESDimen_FlagNote.hxx>
#include <IGESDimen_GeneralLabel.hxx>
#include <IGESDimen_GeneralModule.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_GeneralSymbol.hxx>
#include <IGESDimen_HArray1OfGeneralNote.hxx>
#include <IGESDimen_HArray1OfLeaderArrow.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <IGESDimen_LinearDimension.hxx>
#include <IGESDimen_NewDimensionedGeometry.hxx>
#include <IGESDimen_NewGeneralNote.hxx>
#include <IGESDimen_OrdinateDimension.hxx>
#include <IGESDimen_PointDimension.hxx>
#include <IGESDimen_Protocol.hxx>
#include <IGESDimen_RadiusDimension.hxx>
#include <IGESDimen_ReadWriteModule.hxx>
#include <IGESDimen_Section.hxx>
#include <IGESDimen_SectionedArea.hxx>
#include <IGESDimen_SpecificModule.hxx>
#include <IGESDimen_ToolAngularDimension.hxx>
#include <IGESDimen_ToolBasicDimension.hxx>
#include <IGESDimen_ToolCenterLine.hxx>
#include <IGESDimen_ToolCurveDimension.hxx>
#include <IGESDimen_ToolDiameterDimension.hxx>
#include <IGESDimen_ToolDimensionDisplayData.hxx>
#include <IGESDimen_ToolDimensionedGeometry.hxx>
#include <IGESDimen_ToolDimensionTolerance.hxx>
#include <IGESDimen_ToolDimensionUnits.hxx>
#include <IGESDimen_ToolFlagNote.hxx>
#include <IGESDimen_ToolGeneralLabel.hxx>
#include <IGESDimen_ToolGeneralNote.hxx>
#include <IGESDimen_ToolGeneralSymbol.hxx>
#include <IGESDimen_ToolLeaderArrow.hxx>
#include <IGESDimen_ToolLinearDimension.hxx>
#include <IGESDimen_ToolNewDimensionedGeometry.hxx>
#include <IGESDimen_ToolNewGeneralNote.hxx>
#include <IGESDimen_ToolOrdinateDimension.hxx>
#include <IGESDimen_ToolPointDimension.hxx>
#include <IGESDimen_ToolRadiusDimension.hxx>
#include <IGESDimen_ToolSection.hxx>
#include <IGESDimen_ToolSectionedArea.hxx>
#include <IGESDimen_ToolWitnessLine.hxx>
#include <IGESDimen_WitnessLine.hxx>

// template related includes
// ./opencascade/IGESDimen_Array1OfGeneralNote.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESDimen_Array1OfLeaderArrow.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESDimen(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESDimen"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<IGESDimen , shared_ptr<IGESDimen>>(m,"IGESDimen");

    static_cast<py::class_<IGESDimen , shared_ptr<IGESDimen> >>(m.attr("IGESDimen"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_AngularDimension ,opencascade::handle<IGESDimen_AngularDimension> , IGESData_IGESEntity>>(m.attr("IGESDimen_AngularDimension"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_AngularDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_AngularDimension::*)() const>(&IGESDimen_AngularDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_AngularDimension::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_BasicDimension ,opencascade::handle<IGESDimen_BasicDimension> , IGESData_IGESEntity>>(m.attr("IGESDimen_BasicDimension"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_BasicDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_BasicDimension::*)() const>(&IGESDimen_BasicDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_BasicDimension::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_CenterLine ,opencascade::handle<IGESDimen_CenterLine> , IGESData_IGESEntity>>(m.attr("IGESDimen_CenterLine"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_CenterLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_CenterLine::*)() const>(&IGESDimen_CenterLine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_CenterLine::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_CurveDimension ,opencascade::handle<IGESDimen_CurveDimension> , IGESData_IGESEntity>>(m.attr("IGESDimen_CurveDimension"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_CurveDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_CurveDimension::*)() const>(&IGESDimen_CurveDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_CurveDimension::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_DiameterDimension ,opencascade::handle<IGESDimen_DiameterDimension> , IGESData_IGESEntity>>(m.attr("IGESDimen_DiameterDimension"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_DiameterDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_DiameterDimension::*)() const>(&IGESDimen_DiameterDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_DiameterDimension::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_DimensionDisplayData ,opencascade::handle<IGESDimen_DimensionDisplayData> , IGESData_IGESEntity>>(m.attr("IGESDimen_DimensionDisplayData"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_DimensionDisplayData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_DimensionDisplayData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_DimensionTolerance ,opencascade::handle<IGESDimen_DimensionTolerance> , IGESData_IGESEntity>>(m.attr("IGESDimen_DimensionTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_DimensionTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_DimensionTolerance::*)() const>(&IGESDimen_DimensionTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_DimensionTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_DimensionUnits ,opencascade::handle<IGESDimen_DimensionUnits> , IGESData_IGESEntity>>(m.attr("IGESDimen_DimensionUnits"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_DimensionUnits::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_DimensionUnits::*)() const>(&IGESDimen_DimensionUnits::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_DimensionUnits::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_DimensionedGeometry ,opencascade::handle<IGESDimen_DimensionedGeometry> , IGESData_IGESEntity>>(m.attr("IGESDimen_DimensionedGeometry"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_DimensionedGeometry::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_DimensionedGeometry::*)() const>(&IGESDimen_DimensionedGeometry::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_DimensionedGeometry::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_FlagNote ,opencascade::handle<IGESDimen_FlagNote> , IGESData_IGESEntity>>(m.attr("IGESDimen_FlagNote"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_FlagNote::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_FlagNote::*)() const>(&IGESDimen_FlagNote::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_FlagNote::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_GeneralLabel ,opencascade::handle<IGESDimen_GeneralLabel> , IGESData_IGESEntity>>(m.attr("IGESDimen_GeneralLabel"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_GeneralLabel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_GeneralLabel::*)() const>(&IGESDimen_GeneralLabel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_GeneralLabel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_GeneralModule ,opencascade::handle<IGESDimen_GeneralModule> , IGESData_GeneralModule>>(m.attr("IGESDimen_GeneralModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnSharedCase",
             (void (IGESDimen_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const) static_cast<void (IGESDimen_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const>(&IGESDimen_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<IGESData_DirChecker (IGESDimen_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESDimen_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESDimen_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESDimen_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESDimen_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESDimen_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IGESDimen_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const>(&IGESDimen_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESDimen_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const) static_cast<void (IGESDimen_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const>(&IGESDimen_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("CategoryNumber",
             (Standard_Integer (IGESDimen_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const) static_cast<Standard_Integer (IGESDimen_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const>(&IGESDimen_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity Drawing for all)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_GeneralModule::*)() const>(&IGESDimen_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_GeneralModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_GeneralNote ,opencascade::handle<IGESDimen_GeneralNote> , IGESData_IGESEntity>>(m.attr("IGESDimen_GeneralNote"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_GeneralNote::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_GeneralNote::*)() const>(&IGESDimen_GeneralNote::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_GeneralNote::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_GeneralSymbol ,opencascade::handle<IGESDimen_GeneralSymbol> , IGESData_IGESEntity>>(m.attr("IGESDimen_GeneralSymbol"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_GeneralSymbol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_GeneralSymbol::*)() const>(&IGESDimen_GeneralSymbol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_GeneralSymbol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_HArray1OfGeneralNote ,opencascade::handle<IGESDimen_HArray1OfGeneralNote> , IGESDimen_Array1OfGeneralNote, Standard_Transient>>(m.attr("IGESDimen_HArray1OfGeneralNote"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESDimen_GeneralNote> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESDimen_GeneralNote> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESDimen_Array1OfGeneralNote & (IGESDimen_HArray1OfGeneralNote::*)() const) static_cast<const IGESDimen_Array1OfGeneralNote & (IGESDimen_HArray1OfGeneralNote::*)() const>(&IGESDimen_HArray1OfGeneralNote::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESDimen_Array1OfGeneralNote & (IGESDimen_HArray1OfGeneralNote::*)() ) static_cast<IGESDimen_Array1OfGeneralNote & (IGESDimen_HArray1OfGeneralNote::*)() >(&IGESDimen_HArray1OfGeneralNote::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_HArray1OfGeneralNote::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_HArray1OfGeneralNote::*)() const>(&IGESDimen_HArray1OfGeneralNote::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_HArray1OfGeneralNote::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_HArray1OfGeneralNote::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_HArray1OfLeaderArrow ,opencascade::handle<IGESDimen_HArray1OfLeaderArrow> , IGESDimen_Array1OfLeaderArrow, Standard_Transient>>(m.attr("IGESDimen_HArray1OfLeaderArrow"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESDimen_LeaderArrow> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESDimen_LeaderArrow> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESDimen_Array1OfLeaderArrow & (IGESDimen_HArray1OfLeaderArrow::*)() const) static_cast<const IGESDimen_Array1OfLeaderArrow & (IGESDimen_HArray1OfLeaderArrow::*)() const>(&IGESDimen_HArray1OfLeaderArrow::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESDimen_Array1OfLeaderArrow & (IGESDimen_HArray1OfLeaderArrow::*)() ) static_cast<IGESDimen_Array1OfLeaderArrow & (IGESDimen_HArray1OfLeaderArrow::*)() >(&IGESDimen_HArray1OfLeaderArrow::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_HArray1OfLeaderArrow::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_HArray1OfLeaderArrow::*)() const>(&IGESDimen_HArray1OfLeaderArrow::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_HArray1OfLeaderArrow::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_HArray1OfLeaderArrow::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_LeaderArrow ,opencascade::handle<IGESDimen_LeaderArrow> , IGESData_IGESEntity>>(m.attr("IGESDimen_LeaderArrow"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_LeaderArrow::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_LeaderArrow::*)() const>(&IGESDimen_LeaderArrow::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_LeaderArrow::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_LinearDimension ,opencascade::handle<IGESDimen_LinearDimension> , IGESData_IGESEntity>>(m.attr("IGESDimen_LinearDimension"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_LinearDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_LinearDimension::*)() const>(&IGESDimen_LinearDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_LinearDimension::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_NewDimensionedGeometry ,opencascade::handle<IGESDimen_NewDimensionedGeometry> , IGESData_IGESEntity>>(m.attr("IGESDimen_NewDimensionedGeometry"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_NewDimensionedGeometry::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_NewDimensionedGeometry::*)() const>(&IGESDimen_NewDimensionedGeometry::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_NewDimensionedGeometry::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_NewGeneralNote ,opencascade::handle<IGESDimen_NewGeneralNote> , IGESData_IGESEntity>>(m.attr("IGESDimen_NewGeneralNote"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_NewGeneralNote::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_NewGeneralNote::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_OrdinateDimension ,opencascade::handle<IGESDimen_OrdinateDimension> , IGESData_IGESEntity>>(m.attr("IGESDimen_OrdinateDimension"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_OrdinateDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_OrdinateDimension::*)() const>(&IGESDimen_OrdinateDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_OrdinateDimension::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_PointDimension ,opencascade::handle<IGESDimen_PointDimension> , IGESData_IGESEntity>>(m.attr("IGESDimen_PointDimension"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_PointDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_PointDimension::*)() const>(&IGESDimen_PointDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_PointDimension::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_Protocol ,opencascade::handle<IGESDimen_Protocol> , IGESData_Protocol>>(m.attr("IGESDimen_Protocol"))
    // constructors
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (IGESDimen_Protocol::*)() const) static_cast<Standard_Integer (IGESDimen_Protocol::*)() const>(&IGESDimen_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, two (Protocols from IGESGraph and IGESGeom))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESDimen_Protocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESDimen_Protocol::*)( const Standard_Integer ) const>(&IGESDimen_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESDimen_Protocol::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (IGESDimen_Protocol::*)( const opencascade::handle<Standard_Type> & ) const>(&IGESDimen_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_Protocol::*)() const>(&IGESDimen_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_Protocol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_RadiusDimension ,opencascade::handle<IGESDimen_RadiusDimension> , IGESData_IGESEntity>>(m.attr("IGESDimen_RadiusDimension"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_RadiusDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_RadiusDimension::*)() const>(&IGESDimen_RadiusDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_RadiusDimension::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ReadWriteModule ,opencascade::handle<IGESDimen_ReadWriteModule> , IGESData_ReadWriteModule>>(m.attr("IGESDimen_ReadWriteModule"))
    // constructors
    // custom constructors
    // methods
        .def("CaseIGES",
             (Standard_Integer (IGESDimen_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (IGESDimen_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESDimen_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESDimen)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESDimen_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESDimen_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESDimen_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESDimen)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const) static_cast<void (IGESDimen_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const>(&IGESDimen_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_ReadWriteModule::*)() const>(&IGESDimen_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_ReadWriteModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_Section ,opencascade::handle<IGESDimen_Section> , IGESData_IGESEntity>>(m.attr("IGESDimen_Section"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_Section::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_Section::*)() const>(&IGESDimen_Section::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_Section::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_SectionedArea ,opencascade::handle<IGESDimen_SectionedArea> , IGESData_IGESEntity>>(m.attr("IGESDimen_SectionedArea"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_SectionedArea::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_SectionedArea::*)() const>(&IGESDimen_SectionedArea::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_SectionedArea::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_SpecificModule ,opencascade::handle<IGESDimen_SpecificModule> , IGESData_SpecificModule>>(m.attr("IGESDimen_SpecificModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnDump",
             (void (IGESDimen_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESDimen_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESDimen_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESDimen)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDimen_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<Standard_Boolean (IGESDimen_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESDimen_SpecificModule::OwnCorrect),
             R"#(Performs non-ambiguous Corrections on Entities which support them (BasicDimension,CenterLine,DimensionDisplayData, DimensionTolerance,DimensionUnits,DimensionedGeometry, NewDimensionedGeometry,Section,WitnessLine))#"  , py::arg("CN"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_SpecificModule::*)() const>(&IGESDimen_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_SpecificModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolAngularDimension , shared_ptr<IGESDimen_ToolAngularDimension> >>(m.attr("IGESDimen_ToolAngularDimension"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolBasicDimension , shared_ptr<IGESDimen_ToolBasicDimension> >>(m.attr("IGESDimen_ToolBasicDimension"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolCenterLine , shared_ptr<IGESDimen_ToolCenterLine> >>(m.attr("IGESDimen_ToolCenterLine"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolCurveDimension , shared_ptr<IGESDimen_ToolCurveDimension> >>(m.attr("IGESDimen_ToolCurveDimension"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolDiameterDimension , shared_ptr<IGESDimen_ToolDiameterDimension> >>(m.attr("IGESDimen_ToolDiameterDimension"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolDimensionDisplayData , shared_ptr<IGESDimen_ToolDimensionDisplayData> >>(m.attr("IGESDimen_ToolDimensionDisplayData"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolDimensionTolerance , shared_ptr<IGESDimen_ToolDimensionTolerance> >>(m.attr("IGESDimen_ToolDimensionTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolDimensionUnits , shared_ptr<IGESDimen_ToolDimensionUnits> >>(m.attr("IGESDimen_ToolDimensionUnits"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolDimensionedGeometry , shared_ptr<IGESDimen_ToolDimensionedGeometry> >>(m.attr("IGESDimen_ToolDimensionedGeometry"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolFlagNote , shared_ptr<IGESDimen_ToolFlagNote> >>(m.attr("IGESDimen_ToolFlagNote"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolGeneralLabel , shared_ptr<IGESDimen_ToolGeneralLabel> >>(m.attr("IGESDimen_ToolGeneralLabel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolGeneralNote , shared_ptr<IGESDimen_ToolGeneralNote> >>(m.attr("IGESDimen_ToolGeneralNote"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolGeneralSymbol , shared_ptr<IGESDimen_ToolGeneralSymbol> >>(m.attr("IGESDimen_ToolGeneralSymbol"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolLeaderArrow , shared_ptr<IGESDimen_ToolLeaderArrow> >>(m.attr("IGESDimen_ToolLeaderArrow"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolLinearDimension , shared_ptr<IGESDimen_ToolLinearDimension> >>(m.attr("IGESDimen_ToolLinearDimension"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolNewDimensionedGeometry , shared_ptr<IGESDimen_ToolNewDimensionedGeometry> >>(m.attr("IGESDimen_ToolNewDimensionedGeometry"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolNewGeneralNote , shared_ptr<IGESDimen_ToolNewGeneralNote> >>(m.attr("IGESDimen_ToolNewGeneralNote"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolOrdinateDimension , shared_ptr<IGESDimen_ToolOrdinateDimension> >>(m.attr("IGESDimen_ToolOrdinateDimension"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolPointDimension , shared_ptr<IGESDimen_ToolPointDimension> >>(m.attr("IGESDimen_ToolPointDimension"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolRadiusDimension , shared_ptr<IGESDimen_ToolRadiusDimension> >>(m.attr("IGESDimen_ToolRadiusDimension"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolSection , shared_ptr<IGESDimen_ToolSection> >>(m.attr("IGESDimen_ToolSection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolSectionedArea , shared_ptr<IGESDimen_ToolSectionedArea> >>(m.attr("IGESDimen_ToolSectionedArea"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_ToolWitnessLine , shared_ptr<IGESDimen_ToolWitnessLine> >>(m.attr("IGESDimen_ToolWitnessLine"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDimen_WitnessLine ,opencascade::handle<IGESDimen_WitnessLine> , IGESData_IGESEntity>>(m.attr("IGESDimen_WitnessLine"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_WitnessLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_WitnessLine::*)() const>(&IGESDimen_WitnessLine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_WitnessLine::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IGESDimen_Array1OfGeneralNote.hxx
// ./opencascade/IGESDimen_DimensionUnits.hxx
// ./opencascade/IGESDimen_ToolSection.hxx
// ./opencascade/IGESDimen.hxx
// ./opencascade/IGESDimen_WitnessLine.hxx
// ./opencascade/IGESDimen_GeneralModule.hxx
// ./opencascade/IGESDimen_NewGeneralNote.hxx
// ./opencascade/IGESDimen_ToolLinearDimension.hxx
// ./opencascade/IGESDimen_ToolDimensionUnits.hxx
// ./opencascade/IGESDimen_Array1OfLeaderArrow.hxx
// ./opencascade/IGESDimen_ToolDimensionTolerance.hxx
// ./opencascade/IGESDimen_ToolCenterLine.hxx
// ./opencascade/IGESDimen_ReadWriteModule.hxx
// ./opencascade/IGESDimen_CurveDimension.hxx
// ./opencascade/IGESDimen_PointDimension.hxx
// ./opencascade/IGESDimen_ToolNewGeneralNote.hxx
// ./opencascade/IGESDimen_GeneralSymbol.hxx
// ./opencascade/IGESDimen_ToolCurveDimension.hxx
// ./opencascade/IGESDimen_ToolWitnessLine.hxx
// ./opencascade/IGESDimen_DimensionDisplayData.hxx
// ./opencascade/IGESDimen_ToolPointDimension.hxx
// ./opencascade/IGESDimen_RadiusDimension.hxx
// ./opencascade/IGESDimen_FlagNote.hxx
// ./opencascade/IGESDimen_GeneralNote.hxx
// ./opencascade/IGESDimen_AngularDimension.hxx
// ./opencascade/IGESDimen_SectionedArea.hxx
// ./opencascade/IGESDimen_ToolDiameterDimension.hxx
// ./opencascade/IGESDimen_ToolFlagNote.hxx
// ./opencascade/IGESDimen_ToolGeneralNote.hxx
// ./opencascade/IGESDimen_LeaderArrow.hxx
// ./opencascade/IGESDimen_ToolOrdinateDimension.hxx
// ./opencascade/IGESDimen_GeneralLabel.hxx
// ./opencascade/IGESDimen_ToolNewDimensionedGeometry.hxx
// ./opencascade/IGESDimen_ToolAngularDimension.hxx
// ./opencascade/IGESDimen_Protocol.hxx
// ./opencascade/IGESDimen_HArray1OfGeneralNote.hxx
// ./opencascade/IGESDimen_ToolGeneralSymbol.hxx
// ./opencascade/IGESDimen_CenterLine.hxx
// ./opencascade/IGESDimen_ToolBasicDimension.hxx
// ./opencascade/IGESDimen_ToolSectionedArea.hxx
// ./opencascade/IGESDimen_BasicDimension.hxx
// ./opencascade/IGESDimen_Section.hxx
// ./opencascade/IGESDimen_ToolDimensionDisplayData.hxx
// ./opencascade/IGESDimen_ToolLeaderArrow.hxx
// ./opencascade/IGESDimen_LinearDimension.hxx
// ./opencascade/IGESDimen_SpecificModule.hxx
// ./opencascade/IGESDimen_DiameterDimension.hxx
// ./opencascade/IGESDimen_ToolDimensionedGeometry.hxx
// ./opencascade/IGESDimen_ToolGeneralLabel.hxx
// ./opencascade/IGESDimen_NewDimensionedGeometry.hxx
// ./opencascade/IGESDimen_DimensionedGeometry.hxx
// ./opencascade/IGESDimen_HArray1OfLeaderArrow.hxx
// ./opencascade/IGESDimen_OrdinateDimension.hxx
// ./opencascade/IGESDimen_DimensionTolerance.hxx
// ./opencascade/IGESDimen_ToolRadiusDimension.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESDimen_GeneralNote> >(m,"IGESDimen_Array1OfGeneralNote");
    register_template_NCollection_Array1<opencascade::handle<IGESDimen_LeaderArrow> >(m,"IGESDimen_Array1OfLeaderArrow");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

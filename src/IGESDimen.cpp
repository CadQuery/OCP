
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
#include <IGESDimen_GeneralNote.hxx>
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
#include <IGESDimen_LeaderArrow.hxx>
#include <IGESDimen_WitnessLine.hxx>
#include <Standard_OutOfRange.hxx>
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
#include <IGESDimen_GeneralNote.hxx>
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
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
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
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <gp_Pnt.hxx>
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
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt.hxx>
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
#include <gp_Pnt.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_WitnessLine.hxx>
#include <IGESDimen_LeaderArrow.hxx>
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
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <IGESDimen_WitnessLine.hxx>
#include <gp_Pnt.hxx>
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
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <gp_Pnt2d.hxx>
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
#include <gp_Pnt.hxx>
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
#include <gp_Pnt.hxx>
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
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <IGESGeom_CircularArc.hxx>
#include <IGESGeom_CompositeCurve.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_WitnessLine.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pnt2d.hxx>
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
#include <gp_Pnt.hxx>
#include <gp_Pnt.hxx>
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
#include <gp_Pnt2d.hxx>
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
#include "NCollection.hxx"
// ./opencascade/IGESDimen_Array1OfLeaderArrow.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESDimen(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESDimen"));


//Python trampoline classes

// classes

    register_default_constructor<IGESDimen , shared_ptr<IGESDimen>>(m,"IGESDimen");

    static_cast<py::class_<IGESDimen , shared_ptr<IGESDimen>  >>(m.attr("IGESDimen"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&IGESDimen::Init),
                    R"#(Prepares dynamic data (Protocol, Modules) for this package)#" )
        .def_static("Protocol_s",
                    (opencascade::handle<IGESDimen_Protocol> (*)() ) static_cast<opencascade::handle<IGESDimen_Protocol> (*)() >(&IGESDimen::Protocol),
                    R"#(Returns the Protocol for this Package)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_AngularDimension ,opencascade::handle<IGESDimen_AngularDimension>  , IGESData_IGESEntity >>(m.attr("IGESDimen_AngularDimension"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_AngularDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_WitnessLine> & ,  const opencascade::handle<IGESDimen_WitnessLine> & ,  const gp_XY & ,  const Standard_Real ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_LeaderArrow> &  ) ) static_cast<void (IGESDimen_AngularDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_WitnessLine> & ,  const opencascade::handle<IGESDimen_WitnessLine> & ,  const gp_XY & ,  const Standard_Real ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_LeaderArrow> &  ) >(&IGESDimen_AngularDimension::Init),
             R"#(This method is used to set the fields of the class AngularDimension - aNote : General Note Entity - aLine : First Witness Line Entity or Null Handle - anotherLine : Second Witness Line Entity or Null Handle - aVertex : Coordinates of vertex point - aRadius : Radius of leader arcs - aLeader : First Leader Entity - anotherLeader : Second Leader Entity)#"  , py::arg("aNote"),  py::arg("aLine"),  py::arg("anotherLine"),  py::arg("aVertex"),  py::arg("aRadius"),  py::arg("aLeader"),  py::arg("anotherLeader"))
        .def("Note",
             (opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_AngularDimension::*)() const) static_cast<opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_AngularDimension::*)() const>(&IGESDimen_AngularDimension::Note),
             R"#(returns the General Note Entity of the Dimension.)#" )
        .def("HasFirstWitnessLine",
             (Standard_Boolean (IGESDimen_AngularDimension::*)() const) static_cast<Standard_Boolean (IGESDimen_AngularDimension::*)() const>(&IGESDimen_AngularDimension::HasFirstWitnessLine),
             R"#(returns False if theFirstWitnessLine is Null Handle.)#" )
        .def("FirstWitnessLine",
             (opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_AngularDimension::*)() const) static_cast<opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_AngularDimension::*)() const>(&IGESDimen_AngularDimension::FirstWitnessLine),
             R"#(returns the First Witness Line Entity or Null Handle.)#" )
        .def("HasSecondWitnessLine",
             (Standard_Boolean (IGESDimen_AngularDimension::*)() const) static_cast<Standard_Boolean (IGESDimen_AngularDimension::*)() const>(&IGESDimen_AngularDimension::HasSecondWitnessLine),
             R"#(returns False if theSecondWitnessLine is Null Handle.)#" )
        .def("SecondWitnessLine",
             (opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_AngularDimension::*)() const) static_cast<opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_AngularDimension::*)() const>(&IGESDimen_AngularDimension::SecondWitnessLine),
             R"#(returns the Second Witness Line Entity or Null Handle.)#" )
        .def("Vertex",
             (gp_Pnt2d (IGESDimen_AngularDimension::*)() const) static_cast<gp_Pnt2d (IGESDimen_AngularDimension::*)() const>(&IGESDimen_AngularDimension::Vertex),
             R"#(returns the co-ordinates of the Vertex point as Pnt2d from gp.)#" )
        .def("TransformedVertex",
             (gp_Pnt2d (IGESDimen_AngularDimension::*)() const) static_cast<gp_Pnt2d (IGESDimen_AngularDimension::*)() const>(&IGESDimen_AngularDimension::TransformedVertex),
             R"#(returns the co-ordinates of the Vertex point as Pnt2d from gp after Transformation. (Z = 0.0 for Transformation))#" )
        .def("Radius",
             (Standard_Real (IGESDimen_AngularDimension::*)() const) static_cast<Standard_Real (IGESDimen_AngularDimension::*)() const>(&IGESDimen_AngularDimension::Radius),
             R"#(returns the Radius of the Leader arcs.)#" )
        .def("FirstLeader",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_AngularDimension::*)() const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_AngularDimension::*)() const>(&IGESDimen_AngularDimension::FirstLeader),
             R"#(returns the First Leader Entity.)#" )
        .def("SecondLeader",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_AngularDimension::*)() const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_AngularDimension::*)() const>(&IGESDimen_AngularDimension::SecondLeader),
             R"#(returns the Second Leader Entity.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_AngularDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_AngularDimension::*)() const>(&IGESDimen_AngularDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_AngularDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_AngularDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_BasicDimension ,opencascade::handle<IGESDimen_BasicDimension>  , IGESData_IGESEntity >>(m.attr("IGESDimen_BasicDimension"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_BasicDimension::*)( const Standard_Integer ,  const gp_XY & ,  const gp_XY & ,  const gp_XY & ,  const gp_XY &  ) ) static_cast<void (IGESDimen_BasicDimension::*)( const Standard_Integer ,  const gp_XY & ,  const gp_XY & ,  const gp_XY & ,  const gp_XY &  ) >(&IGESDimen_BasicDimension::Init),
             R"#(None)#"  , py::arg("nbPropVal"),  py::arg("lowerLeft"),  py::arg("lowerRight"),  py::arg("upperRight"),  py::arg("upperLeft"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESDimen_BasicDimension::*)() const) static_cast<Standard_Integer (IGESDimen_BasicDimension::*)() const>(&IGESDimen_BasicDimension::NbPropertyValues),
             R"#(returns the number of properties = 8)#" )
        .def("LowerLeft",
             (gp_Pnt2d (IGESDimen_BasicDimension::*)() const) static_cast<gp_Pnt2d (IGESDimen_BasicDimension::*)() const>(&IGESDimen_BasicDimension::LowerLeft),
             R"#(returns coordinates of lower left corner)#" )
        .def("LowerRight",
             (gp_Pnt2d (IGESDimen_BasicDimension::*)() const) static_cast<gp_Pnt2d (IGESDimen_BasicDimension::*)() const>(&IGESDimen_BasicDimension::LowerRight),
             R"#(returns coordinates of lower right corner)#" )
        .def("UpperRight",
             (gp_Pnt2d (IGESDimen_BasicDimension::*)() const) static_cast<gp_Pnt2d (IGESDimen_BasicDimension::*)() const>(&IGESDimen_BasicDimension::UpperRight),
             R"#(returns coordinates of upper right corner)#" )
        .def("UpperLeft",
             (gp_Pnt2d (IGESDimen_BasicDimension::*)() const) static_cast<gp_Pnt2d (IGESDimen_BasicDimension::*)() const>(&IGESDimen_BasicDimension::UpperLeft),
             R"#(returns coordinates of upper left corner)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_BasicDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_BasicDimension::*)() const>(&IGESDimen_BasicDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_BasicDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_BasicDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_CenterLine ,opencascade::handle<IGESDimen_CenterLine>  , IGESData_IGESEntity >>(m.attr("IGESDimen_CenterLine"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_CenterLine::*)( const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<TColgp_HArray1OfXY> &  ) ) static_cast<void (IGESDimen_CenterLine::*)( const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<TColgp_HArray1OfXY> &  ) >(&IGESDimen_CenterLine::Init),
             R"#(This method is used to set the fields of the class CenterLine - aDataType : Interpretation Flag, always = 1 - aZDisplacement : Common z displacement - dataPnts : Data points (x and y))#"  , py::arg("aDataType"),  py::arg("aZdisp"),  py::arg("dataPnts"))
        .def("SetCrossHair",
             (void (IGESDimen_CenterLine::*)( const Standard_Boolean  ) ) static_cast<void (IGESDimen_CenterLine::*)( const Standard_Boolean  ) >(&IGESDimen_CenterLine::SetCrossHair),
             R"#(Sets FormNumber to 20 if <mode> is True, 21 else)#"  , py::arg("mode"))
        .def("Datatype",
             (Standard_Integer (IGESDimen_CenterLine::*)() const) static_cast<Standard_Integer (IGESDimen_CenterLine::*)() const>(&IGESDimen_CenterLine::Datatype),
             R"#(returns Interpretation Flag : IP = 1.)#" )
        .def("NbPoints",
             (Standard_Integer (IGESDimen_CenterLine::*)() const) static_cast<Standard_Integer (IGESDimen_CenterLine::*)() const>(&IGESDimen_CenterLine::NbPoints),
             R"#(returns Number of Data Points.)#" )
        .def("ZDisplacement",
             (Standard_Real (IGESDimen_CenterLine::*)() const) static_cast<Standard_Real (IGESDimen_CenterLine::*)() const>(&IGESDimen_CenterLine::ZDisplacement),
             R"#(returns Common Z displacement.)#" )
        .def("Point",
             (gp_Pnt (IGESDimen_CenterLine::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDimen_CenterLine::*)( const Standard_Integer  ) const>(&IGESDimen_CenterLine::Point),
             R"#(returns the data point as Pnt from gp. raises exception if Index <= 0 or Index > NbPoints())#"  , py::arg("Index"))
        .def("TransformedPoint",
             (gp_Pnt (IGESDimen_CenterLine::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDimen_CenterLine::*)( const Standard_Integer  ) const>(&IGESDimen_CenterLine::TransformedPoint),
             R"#(returns the data point as Pnt from gp after Transformation. raises exception if Index <= 0 or Index > NbPoints())#"  , py::arg("Index"))
        .def("IsCrossHair",
             (Standard_Boolean (IGESDimen_CenterLine::*)() const) static_cast<Standard_Boolean (IGESDimen_CenterLine::*)() const>(&IGESDimen_CenterLine::IsCrossHair),
             R"#(returns True if Form is 20.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_CenterLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_CenterLine::*)() const>(&IGESDimen_CenterLine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_CenterLine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_CenterLine::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_CurveDimension ,opencascade::handle<IGESDimen_CurveDimension>  , IGESData_IGESEntity >>(m.attr("IGESDimen_CurveDimension"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_CurveDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_WitnessLine> & ,  const opencascade::handle<IGESDimen_WitnessLine> &  ) ) static_cast<void (IGESDimen_CurveDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_WitnessLine> & ,  const opencascade::handle<IGESDimen_WitnessLine> &  ) >(&IGESDimen_CurveDimension::Init),
             R"#(This method is used to set the fields of the class CurveDimension - aNote : General Note Entity - aCurve : First Curve Entity - anotherCurve : Second Curve Entity or a Null Handle - aLeader : First Leader Entity - anotherLeader : Second Leader Entity - aLine : First Witness Line Entity or a Null Handle - anotherLine : Second Witness Line Entity or a Null Handle)#"  , py::arg("aNote"),  py::arg("aCurve"),  py::arg("anotherCurve"),  py::arg("aLeader"),  py::arg("anotherLeader"),  py::arg("aLine"),  py::arg("anotherLine"))
        .def("Note",
             (opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_CurveDimension::*)() const) static_cast<opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_CurveDimension::*)() const>(&IGESDimen_CurveDimension::Note),
             R"#(returns the General Note Entity)#" )
        .def("FirstCurve",
             (opencascade::handle<IGESData_IGESEntity> (IGESDimen_CurveDimension::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDimen_CurveDimension::*)() const>(&IGESDimen_CurveDimension::FirstCurve),
             R"#(returns the First curve Entity)#" )
        .def("HasSecondCurve",
             (Standard_Boolean (IGESDimen_CurveDimension::*)() const) static_cast<Standard_Boolean (IGESDimen_CurveDimension::*)() const>(&IGESDimen_CurveDimension::HasSecondCurve),
             R"#(returns False if theSecondCurve is a Null Handle.)#" )
        .def("SecondCurve",
             (opencascade::handle<IGESData_IGESEntity> (IGESDimen_CurveDimension::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDimen_CurveDimension::*)() const>(&IGESDimen_CurveDimension::SecondCurve),
             R"#(returns the Second curve Entity or a Null Handle.)#" )
        .def("FirstLeader",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_CurveDimension::*)() const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_CurveDimension::*)() const>(&IGESDimen_CurveDimension::FirstLeader),
             R"#(returns the First Leader Entity)#" )
        .def("SecondLeader",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_CurveDimension::*)() const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_CurveDimension::*)() const>(&IGESDimen_CurveDimension::SecondLeader),
             R"#(returns the Second Leader Entity)#" )
        .def("HasFirstWitnessLine",
             (Standard_Boolean (IGESDimen_CurveDimension::*)() const) static_cast<Standard_Boolean (IGESDimen_CurveDimension::*)() const>(&IGESDimen_CurveDimension::HasFirstWitnessLine),
             R"#(returns False if theFirstWitnessLine is a Null Handle.)#" )
        .def("FirstWitnessLine",
             (opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_CurveDimension::*)() const) static_cast<opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_CurveDimension::*)() const>(&IGESDimen_CurveDimension::FirstWitnessLine),
             R"#(returns the First Witness Line Entity or a Null Handle.)#" )
        .def("HasSecondWitnessLine",
             (Standard_Boolean (IGESDimen_CurveDimension::*)() const) static_cast<Standard_Boolean (IGESDimen_CurveDimension::*)() const>(&IGESDimen_CurveDimension::HasSecondWitnessLine),
             R"#(returns False if theSecondWitnessLine is a Null Handle.)#" )
        .def("SecondWitnessLine",
             (opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_CurveDimension::*)() const) static_cast<opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_CurveDimension::*)() const>(&IGESDimen_CurveDimension::SecondWitnessLine),
             R"#(returns the Second Witness Line Entity or a Null Handle.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_CurveDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_CurveDimension::*)() const>(&IGESDimen_CurveDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_CurveDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_CurveDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_DiameterDimension ,opencascade::handle<IGESDimen_DiameterDimension>  , IGESData_IGESEntity >>(m.attr("IGESDimen_DiameterDimension"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_DiameterDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const gp_XY &  ) ) static_cast<void (IGESDimen_DiameterDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const gp_XY &  ) >(&IGESDimen_DiameterDimension::Init),
             R"#(This method is used to set the fields of the class DiameterDimension - aNote : General Note Entity - aLeader : First Leader Entity - anotherLeader : Second Leader Entity or a Null Handle. - aCenter : Arc center coordinates)#"  , py::arg("aNote"),  py::arg("aLeader"),  py::arg("anotherLeader"),  py::arg("aCenter"))
        .def("Note",
             (opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_DiameterDimension::*)() const) static_cast<opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_DiameterDimension::*)() const>(&IGESDimen_DiameterDimension::Note),
             R"#(returns the General Note Entity)#" )
        .def("FirstLeader",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_DiameterDimension::*)() const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_DiameterDimension::*)() const>(&IGESDimen_DiameterDimension::FirstLeader),
             R"#(returns the First Leader Entity)#" )
        .def("HasSecondLeader",
             (Standard_Boolean (IGESDimen_DiameterDimension::*)() const) static_cast<Standard_Boolean (IGESDimen_DiameterDimension::*)() const>(&IGESDimen_DiameterDimension::HasSecondLeader),
             R"#(returns False if theSecondleader is a Null Handle.)#" )
        .def("SecondLeader",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_DiameterDimension::*)() const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_DiameterDimension::*)() const>(&IGESDimen_DiameterDimension::SecondLeader),
             R"#(returns the Second Leader Entity)#" )
        .def("Center",
             (gp_Pnt2d (IGESDimen_DiameterDimension::*)() const) static_cast<gp_Pnt2d (IGESDimen_DiameterDimension::*)() const>(&IGESDimen_DiameterDimension::Center),
             R"#(returns the Arc Center co-ordinates as Pnt2d from package gp)#" )
        .def("TransformedCenter",
             (gp_Pnt2d (IGESDimen_DiameterDimension::*)() const) static_cast<gp_Pnt2d (IGESDimen_DiameterDimension::*)() const>(&IGESDimen_DiameterDimension::TransformedCenter),
             R"#(returns the Arc Center co-ordinates as Pnt2d from package gp after Transformation. (Z = 0.0 for Transformation))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_DiameterDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_DiameterDimension::*)() const>(&IGESDimen_DiameterDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_DiameterDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_DiameterDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_DimensionDisplayData ,opencascade::handle<IGESDimen_DimensionDisplayData>  , IGESData_IGESEntity >>(m.attr("IGESDimen_DimensionDisplayData"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_DimensionDisplayData::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) ) static_cast<void (IGESDimen_DimensionDisplayData::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) >(&IGESDimen_DimensionDisplayData::Init),
             R"#(None)#"  , py::arg("numProps"),  py::arg("aDimType"),  py::arg("aLabelPos"),  py::arg("aCharSet"),  py::arg("aString"),  py::arg("aSymbol"),  py::arg("anAng"),  py::arg("anAlign"),  py::arg("aLevel"),  py::arg("aPlace"),  py::arg("anOrient"),  py::arg("initVal"),  py::arg("notes"),  py::arg("startInd"),  py::arg("endInd"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESDimen_DimensionDisplayData::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::NbPropertyValues),
             R"#(returns the number of property values (14))#" )
        .def("DimensionType",
             (Standard_Integer (IGESDimen_DimensionDisplayData::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::DimensionType),
             R"#(returns the dimension type)#" )
        .def("LabelPosition",
             (Standard_Integer (IGESDimen_DimensionDisplayData::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::LabelPosition),
             R"#(returns the preferred label position)#" )
        .def("CharacterSet",
             (Standard_Integer (IGESDimen_DimensionDisplayData::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::CharacterSet),
             R"#(returns the character set interpretation)#" )
        .def("LString",
             (opencascade::handle<TCollection_HAsciiString> (IGESDimen_DimensionDisplayData::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::LString),
             R"#(returns e.g., 8HDIAMETER)#" )
        .def("DecimalSymbol",
             (Standard_Integer (IGESDimen_DimensionDisplayData::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::DecimalSymbol),
             R"#(None)#" )
        .def("WitnessLineAngle",
             (Standard_Real (IGESDimen_DimensionDisplayData::*)() const) static_cast<Standard_Real (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::WitnessLineAngle),
             R"#(returns the witness line angle in radians)#" )
        .def("TextAlignment",
             (Standard_Integer (IGESDimen_DimensionDisplayData::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::TextAlignment),
             R"#(returns the text alignment)#" )
        .def("TextLevel",
             (Standard_Integer (IGESDimen_DimensionDisplayData::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::TextLevel),
             R"#(returns the text level)#" )
        .def("TextPlacement",
             (Standard_Integer (IGESDimen_DimensionDisplayData::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::TextPlacement),
             R"#(returns the preferred text placement)#" )
        .def("ArrowHeadOrientation",
             (Standard_Integer (IGESDimen_DimensionDisplayData::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::ArrowHeadOrientation),
             R"#(returns the arrowhead orientation)#" )
        .def("InitialValue",
             (Standard_Real (IGESDimen_DimensionDisplayData::*)() const) static_cast<Standard_Real (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::InitialValue),
             R"#(returns the primary dimension initial value)#" )
        .def("NbSupplementaryNotes",
             (Standard_Integer (IGESDimen_DimensionDisplayData::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::NbSupplementaryNotes),
             R"#(returns the number of supplementary notes or zero)#" )
        .def("SupplementaryNote",
             (Standard_Integer (IGESDimen_DimensionDisplayData::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_DimensionDisplayData::*)( const Standard_Integer  ) const>(&IGESDimen_DimensionDisplayData::SupplementaryNote),
             R"#(returns the Index'th supplementary note raises exception if Index <= 0 or Index > NbSupplementaryNotes())#"  , py::arg("Index"))
        .def("StartIndex",
             (Standard_Integer (IGESDimen_DimensionDisplayData::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_DimensionDisplayData::*)( const Standard_Integer  ) const>(&IGESDimen_DimensionDisplayData::StartIndex),
             R"#(returns the Index'th note start index raises exception if Index <= 0 or Index > NbSupplementaryNotes())#"  , py::arg("Index"))
        .def("EndIndex",
             (Standard_Integer (IGESDimen_DimensionDisplayData::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_DimensionDisplayData::*)( const Standard_Integer  ) const>(&IGESDimen_DimensionDisplayData::EndIndex),
             R"#(returns the Index'th note end index raises exception if Index <= 0 or Index > NbSupplemetaryNotes())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_DimensionDisplayData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_DimensionDisplayData::*)() const>(&IGESDimen_DimensionDisplayData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_DimensionDisplayData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_DimensionDisplayData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_DimensionTolerance ,opencascade::handle<IGESDimen_DimensionTolerance>  , IGESData_IGESEntity >>(m.attr("IGESDimen_DimensionTolerance"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_DimensionTolerance::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IGESDimen_DimensionTolerance::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Integer ,  const Standard_Integer  ) >(&IGESDimen_DimensionTolerance::Init),
             R"#(This method is used to set the fields of the class DimensionTolerance - nbPropVal : Number of property values, default = 8 - aSecTolFlag : Secondary Tolerance Flag 0 = Applies to primary dimension 1 = Applies to secondary dimension 2 = Display values as fractions - aTolType : Tolerance Type 1 = Bilateral 2 = Upper/Lower 3 = Unilateral Upper 4 = Unilateral Lower 5 = Range - min before max 6 = Range - min after max 7 = Range - min above max 8 = Range - min below max 9 = Nominal + Range - min above max 10 = Nominal + Range - min below max - aTolPlaceFlag : Tolerance Placement Flag 1 = Before nominal value 2 = After nominal value 3 = Above nominal value 4 = Below nominal value - anUpperTol : Upper Tolerance - aLowerTol : Lower Tolerance - aSignFlag : Sign Suppression Flag - aFracFlag : Fraction Flag 0 = Display values as decimal numbers 1 = Display values as mixed fractions 2 = Display values as fractions - aPrecision : Precision Value)#"  , py::arg("nbPropVal"),  py::arg("aSecTolFlag"),  py::arg("aTolType"),  py::arg("aTolPlaceFlag"),  py::arg("anUpperTol"),  py::arg("aLowerTol"),  py::arg("aSignFlag"),  py::arg("aFracFlag"),  py::arg("aPrecision"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESDimen_DimensionTolerance::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionTolerance::*)() const>(&IGESDimen_DimensionTolerance::NbPropertyValues),
             R"#(returns the number of property values, always = 8)#" )
        .def("SecondaryToleranceFlag",
             (Standard_Integer (IGESDimen_DimensionTolerance::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionTolerance::*)() const>(&IGESDimen_DimensionTolerance::SecondaryToleranceFlag),
             R"#(returns the Secondary Tolerance Flag)#" )
        .def("ToleranceType",
             (Standard_Integer (IGESDimen_DimensionTolerance::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionTolerance::*)() const>(&IGESDimen_DimensionTolerance::ToleranceType),
             R"#(returns the Tolerance Type)#" )
        .def("TolerancePlacementFlag",
             (Standard_Integer (IGESDimen_DimensionTolerance::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionTolerance::*)() const>(&IGESDimen_DimensionTolerance::TolerancePlacementFlag),
             R"#(returns the Tolerance Placement Flag, default = 2)#" )
        .def("UpperTolerance",
             (Standard_Real (IGESDimen_DimensionTolerance::*)() const) static_cast<Standard_Real (IGESDimen_DimensionTolerance::*)() const>(&IGESDimen_DimensionTolerance::UpperTolerance),
             R"#(returns the Upper or Bilateral Tolerance Value)#" )
        .def("LowerTolerance",
             (Standard_Real (IGESDimen_DimensionTolerance::*)() const) static_cast<Standard_Real (IGESDimen_DimensionTolerance::*)() const>(&IGESDimen_DimensionTolerance::LowerTolerance),
             R"#(returns the Lower Tolerance Value)#" )
        .def("SignSuppressionFlag",
             (Standard_Boolean (IGESDimen_DimensionTolerance::*)() const) static_cast<Standard_Boolean (IGESDimen_DimensionTolerance::*)() const>(&IGESDimen_DimensionTolerance::SignSuppressionFlag),
             R"#(returns the Sign Suppression Flag)#" )
        .def("FractionFlag",
             (Standard_Integer (IGESDimen_DimensionTolerance::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionTolerance::*)() const>(&IGESDimen_DimensionTolerance::FractionFlag),
             R"#(returns the Fraction Flag)#" )
        .def("Precision",
             (Standard_Integer (IGESDimen_DimensionTolerance::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionTolerance::*)() const>(&IGESDimen_DimensionTolerance::Precision),
             R"#(returns the Precision for Value Display)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_DimensionTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_DimensionTolerance::*)() const>(&IGESDimen_DimensionTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_DimensionTolerance::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_DimensionTolerance::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_DimensionUnits ,opencascade::handle<IGESDimen_DimensionUnits>  , IGESData_IGESEntity >>(m.attr("IGESDimen_DimensionUnits"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_DimensionUnits::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IGESDimen_DimensionUnits::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&IGESDimen_DimensionUnits::Init),
             R"#(This method is used to set the fields of the class DimensionUnits - nbPropVal : Number of property values, always = 6 - aSecondPos : Secondary Dimension Position 0 = This is the main text 1 = Before primary dimension 2 = After primary dimension 3 = Above primary dimension 4 = Below primary dimension - aUnitsInd : Units Indicator - aCharSet : Character Set used - aFormat : Format HAsciiString 1 = Standard ASCII 1001 = Symbol Font 1 1002 = Symbol Font 2 1003 = Drafting Font - aFracFlag : Fraction Flag 0 = Display values as decimal numbers 1 = Display values as fractions - aPrecision : Precision Value)#"  , py::arg("nbPropVal"),  py::arg("aSecondPos"),  py::arg("aUnitsInd"),  py::arg("aCharSet"),  py::arg("aFormat"),  py::arg("aFracFlag"),  py::arg("aPrecision"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESDimen_DimensionUnits::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionUnits::*)() const>(&IGESDimen_DimensionUnits::NbPropertyValues),
             R"#(returns the number of property values)#" )
        .def("SecondaryDimenPosition",
             (Standard_Integer (IGESDimen_DimensionUnits::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionUnits::*)() const>(&IGESDimen_DimensionUnits::SecondaryDimenPosition),
             R"#(returns position of secondary dimension w.r.t. primary dimension)#" )
        .def("UnitsIndicator",
             (Standard_Integer (IGESDimen_DimensionUnits::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionUnits::*)() const>(&IGESDimen_DimensionUnits::UnitsIndicator),
             R"#(returns the units indicator)#" )
        .def("CharacterSet",
             (Standard_Integer (IGESDimen_DimensionUnits::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionUnits::*)() const>(&IGESDimen_DimensionUnits::CharacterSet),
             R"#(returns the character set interpretation)#" )
        .def("FormatString",
             (opencascade::handle<TCollection_HAsciiString> (IGESDimen_DimensionUnits::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDimen_DimensionUnits::*)() const>(&IGESDimen_DimensionUnits::FormatString),
             R"#(returns the string used in formatting value)#" )
        .def("FractionFlag",
             (Standard_Integer (IGESDimen_DimensionUnits::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionUnits::*)() const>(&IGESDimen_DimensionUnits::FractionFlag),
             R"#(returns the fraction flag)#" )
        .def("PrecisionOrDenominator",
             (Standard_Integer (IGESDimen_DimensionUnits::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionUnits::*)() const>(&IGESDimen_DimensionUnits::PrecisionOrDenominator),
             R"#(returns the precision/denominator number of decimal places when FractionFlag() = 0 denominator of fraction when FractionFlag() = 1)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_DimensionUnits::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_DimensionUnits::*)() const>(&IGESDimen_DimensionUnits::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_DimensionUnits::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_DimensionUnits::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_DimensionedGeometry ,opencascade::handle<IGESDimen_DimensionedGeometry>  , IGESData_IGESEntity >>(m.attr("IGESDimen_DimensionedGeometry"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_DimensionedGeometry::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESDimen_DimensionedGeometry::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESDimen_DimensionedGeometry::Init),
             R"#(None)#"  , py::arg("nbDims"),  py::arg("aDimension"),  py::arg("entities"))
        .def("NbDimensions",
             (Standard_Integer (IGESDimen_DimensionedGeometry::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionedGeometry::*)() const>(&IGESDimen_DimensionedGeometry::NbDimensions),
             R"#(returns the number of dimensions)#" )
        .def("NbGeometryEntities",
             (Standard_Integer (IGESDimen_DimensionedGeometry::*)() const) static_cast<Standard_Integer (IGESDimen_DimensionedGeometry::*)() const>(&IGESDimen_DimensionedGeometry::NbGeometryEntities),
             R"#(returns the number of associated geometry entities)#" )
        .def("DimensionEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDimen_DimensionedGeometry::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDimen_DimensionedGeometry::*)() const>(&IGESDimen_DimensionedGeometry::DimensionEntity),
             R"#(returns the Dimension entity)#" )
        .def("GeometryEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDimen_DimensionedGeometry::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDimen_DimensionedGeometry::*)( const Standard_Integer  ) const>(&IGESDimen_DimensionedGeometry::GeometryEntity),
             R"#(returns the num'th Geometry entity raises exception if Index <= 0 or Index > NbGeometryEntities())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_DimensionedGeometry::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_DimensionedGeometry::*)() const>(&IGESDimen_DimensionedGeometry::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_DimensionedGeometry::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_DimensionedGeometry::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_FlagNote ,opencascade::handle<IGESDimen_FlagNote>  , IGESData_IGESEntity >>(m.attr("IGESDimen_FlagNote"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_FlagNote::*)( const gp_XYZ & ,  const Standard_Real ,  const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_HArray1OfLeaderArrow> &  ) ) static_cast<void (IGESDimen_FlagNote::*)( const gp_XYZ & ,  const Standard_Real ,  const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_HArray1OfLeaderArrow> &  ) >(&IGESDimen_FlagNote::Init),
             R"#(This method is used to set the fields of the class FlagNote - leftCorner : Lower left corner of the Flag - anAngle : Rotation angle in radians - aNote : General Note Entity - someLeaders : Leader Entities)#"  , py::arg("leftCorner"),  py::arg("anAngle"),  py::arg("aNote"),  py::arg("someLeaders"))
        .def("LowerLeftCorner",
             (gp_Pnt (IGESDimen_FlagNote::*)() const) static_cast<gp_Pnt (IGESDimen_FlagNote::*)() const>(&IGESDimen_FlagNote::LowerLeftCorner),
             R"#(returns Lower Left coordinate of Flag as Pnt from package gp)#" )
        .def("TransformedLowerLeftCorner",
             (gp_Pnt (IGESDimen_FlagNote::*)() const) static_cast<gp_Pnt (IGESDimen_FlagNote::*)() const>(&IGESDimen_FlagNote::TransformedLowerLeftCorner),
             R"#(returns Lower Left coordinate of Flag as Pnt from package gp after Transformation.)#" )
        .def("Angle",
             (Standard_Real (IGESDimen_FlagNote::*)() const) static_cast<Standard_Real (IGESDimen_FlagNote::*)() const>(&IGESDimen_FlagNote::Angle),
             R"#(returns Rotation angle in radians)#" )
        .def("Note",
             (opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_FlagNote::*)() const) static_cast<opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_FlagNote::*)() const>(&IGESDimen_FlagNote::Note),
             R"#(returns General Note Entity)#" )
        .def("NbLeaders",
             (Standard_Integer (IGESDimen_FlagNote::*)() const) static_cast<Standard_Integer (IGESDimen_FlagNote::*)() const>(&IGESDimen_FlagNote::NbLeaders),
             R"#(returns number of Arrows (Leaders) or zero)#" )
        .def("Leader",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_FlagNote::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_FlagNote::*)( const Standard_Integer  ) const>(&IGESDimen_FlagNote::Leader),
             R"#(returns Leader Entity raises exception if Index <= 0 or Index > NbLeaders())#"  , py::arg("Index"))
        .def("Height",
             (Standard_Real (IGESDimen_FlagNote::*)() const) static_cast<Standard_Real (IGESDimen_FlagNote::*)() const>(&IGESDimen_FlagNote::Height),
             R"#(returns Height computed by the formula : Height = 2 * CH where CH is from theNote)#" )
        .def("CharacterHeight",
             (Standard_Real (IGESDimen_FlagNote::*)() const) static_cast<Standard_Real (IGESDimen_FlagNote::*)() const>(&IGESDimen_FlagNote::CharacterHeight),
             R"#(returns the Character Height (from General Note))#" )
        .def("Length",
             (Standard_Real (IGESDimen_FlagNote::*)() const) static_cast<Standard_Real (IGESDimen_FlagNote::*)() const>(&IGESDimen_FlagNote::Length),
             R"#(returns Length computed by the formula : Length = TW + 0.4*CH where CH is from theNote and TW is from theNote)#" )
        .def("TextWidth",
             (Standard_Real (IGESDimen_FlagNote::*)() const) static_cast<Standard_Real (IGESDimen_FlagNote::*)() const>(&IGESDimen_FlagNote::TextWidth),
             R"#(returns the Text Width (from General Note))#" )
        .def("TipLength",
             (Standard_Real (IGESDimen_FlagNote::*)() const) static_cast<Standard_Real (IGESDimen_FlagNote::*)() const>(&IGESDimen_FlagNote::TipLength),
             R"#(returns TipLength computed by the formula : TipLength = 0.5 * H / tan 35(deg) where H is Height())#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_FlagNote::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_FlagNote::*)() const>(&IGESDimen_FlagNote::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_FlagNote::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_FlagNote::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_GeneralLabel ,opencascade::handle<IGESDimen_GeneralLabel>  , IGESData_IGESEntity >>(m.attr("IGESDimen_GeneralLabel"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_GeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_HArray1OfLeaderArrow> &  ) ) static_cast<void (IGESDimen_GeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_HArray1OfLeaderArrow> &  ) >(&IGESDimen_GeneralLabel::Init),
             R"#(This method is used to set the fields of the class GeneralLabel - aNote : General Note Entity - someLeaders : Associated Leader Entities)#"  , py::arg("aNote"),  py::arg("someLeaders"))
        .def("Note",
             (opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_GeneralLabel::*)() const) static_cast<opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_GeneralLabel::*)() const>(&IGESDimen_GeneralLabel::Note),
             R"#(returns General Note Entity)#" )
        .def("NbLeaders",
             (Standard_Integer (IGESDimen_GeneralLabel::*)() const) static_cast<Standard_Integer (IGESDimen_GeneralLabel::*)() const>(&IGESDimen_GeneralLabel::NbLeaders),
             R"#(returns Number of Leaders)#" )
        .def("Leader",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_GeneralLabel::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_GeneralLabel::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralLabel::Leader),
             R"#(returns Leader Entity raises exception if Index <= 0 or Index > NbLeaders())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_GeneralLabel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_GeneralLabel::*)() const>(&IGESDimen_GeneralLabel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_GeneralLabel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_GeneralLabel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_GeneralModule ,opencascade::handle<IGESDimen_GeneralModule>  , IGESData_GeneralModule >>(m.attr("IGESDimen_GeneralModule"))
        .def(py::init<  >()  )
    // methods
        .def("OwnSharedCase",
             (void (IGESDimen_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESDimen_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESDimen_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESDimen_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IGESDimen_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const>(&IGESDimen_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESDimen_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const>(&IGESDimen_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("CategoryNumber",
             (Standard_Integer (IGESDimen_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const) static_cast<Standard_Integer (IGESDimen_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const>(&IGESDimen_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity Drawing for all)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_GeneralModule::*)() const>(&IGESDimen_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_GeneralModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_GeneralModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_GeneralNote ,opencascade::handle<IGESDimen_GeneralNote>  , IGESData_IGESEntity >>(m.attr("IGESDimen_GeneralNote"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_GeneralNote::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESGraph_HArray1OfTextFontDef> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColgp_HArray1OfXYZ> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) ) static_cast<void (IGESDimen_GeneralNote::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESGraph_HArray1OfTextFontDef> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColgp_HArray1OfXYZ> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) >(&IGESDimen_GeneralNote::Init),
             R"#(This method is used to set the fields of the class GeneralNote - nNbChars : number of chars strings - widths : Box widths - heights : Box heights - fontCodes : Font codes, default = 1 - fonts : Text Font Definition Entities - slants : Slant angles in radians - rotations : Rotation angles in radians - mirrorFlags : Mirror flags - rotFlags : Rotation internal text flags - start : Text start points - texts : Text strings raises exception if there is mismatch between the various Array Lengths.)#"  , py::arg("nbChars"),  py::arg("widths"),  py::arg("heights"),  py::arg("fontCodes"),  py::arg("fonts"),  py::arg("slants"),  py::arg("rotations"),  py::arg("mirrorFlags"),  py::arg("rotFlags"),  py::arg("start"),  py::arg("texts"))
        .def("SetFormNumber",
             (void (IGESDimen_GeneralNote::*)( const Standard_Integer  ) ) static_cast<void (IGESDimen_GeneralNote::*)( const Standard_Integer  ) >(&IGESDimen_GeneralNote::SetFormNumber),
             R"#(Changes FormNumber (indicates Graphical Representation) Error if not in ranges [0-8] or [100-102] or 105)#"  , py::arg("form"))
        .def("NbStrings",
             (Standard_Integer (IGESDimen_GeneralNote::*)() const) static_cast<Standard_Integer (IGESDimen_GeneralNote::*)() const>(&IGESDimen_GeneralNote::NbStrings),
             R"#(returns number of text strings in General Note)#" )
        .def("NbCharacters",
             (Standard_Integer (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::NbCharacters),
             R"#(returns number of characters of string or zero raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("BoxWidth",
             (Standard_Real (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::BoxWidth),
             R"#(returns Box width of string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("BoxHeight",
             (Standard_Real (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::BoxHeight),
             R"#(returns Box height of string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("IsFontEntity",
             (Standard_Boolean (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::IsFontEntity),
             R"#(returns False if Value, True if Entity raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("FontCode",
             (Standard_Integer (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::FontCode),
             R"#(returns Font code (default = 1) of string returns 0 if IsFontEntity () is True raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("FontEntity",
             (opencascade::handle<IGESGraph_TextFontDef> (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESGraph_TextFontDef> (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::FontEntity),
             R"#(returns Text Font Definition Entity of string returns a Null Handle if IsFontEntity () returns False raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("SlantAngle",
             (Standard_Real (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::SlantAngle),
             R"#(returns Slant angle of string in radians default value = PI/2 raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("RotationAngle",
             (Standard_Real (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::RotationAngle),
             R"#(returns Rotation angle of string in radians raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("MirrorFlag",
             (Standard_Integer (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::MirrorFlag),
             R"#(returns Mirror Flag of string 0 = no mirroring 1 = mirror axis is perpendicular to the text base line 2 = mirror axis is text base line raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("RotateFlag",
             (Standard_Integer (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::RotateFlag),
             R"#(returns Rotate internal text Flag of string 0 = text horizontal 1 = text vertical raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("StartPoint",
             (gp_Pnt (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::StartPoint),
             R"#(returns text start point of Index'th string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("TransformedStartPoint",
             (gp_Pnt (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::TransformedStartPoint),
             R"#(returns text start point of Index'th string after Transformation raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("ZDepthStartPoint",
             (Standard_Real (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::ZDepthStartPoint),
             R"#(returns distance from Start Point plane of string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("Text",
             (opencascade::handle<TCollection_HAsciiString> (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDimen_GeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralNote::Text),
             R"#(returns text string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_GeneralNote::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_GeneralNote::*)() const>(&IGESDimen_GeneralNote::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_GeneralNote::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_GeneralNote::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_GeneralSymbol ,opencascade::handle<IGESDimen_GeneralSymbol>  , IGESData_IGESEntity >>(m.attr("IGESDimen_GeneralSymbol"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_GeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<IGESDimen_HArray1OfLeaderArrow> &  ) ) static_cast<void (IGESDimen_GeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<IGESDimen_HArray1OfLeaderArrow> &  ) >(&IGESDimen_GeneralSymbol::Init),
             R"#(This method is used to set the fields of the class GeneralSymbol - aNote : General Note, null for form 0 - allGeoms : Geometric Entities - allLeaders : Leader Arrows)#"  , py::arg("aNote"),  py::arg("allGeoms"),  py::arg("allLeaders"))
        .def("SetFormNumber",
             (void (IGESDimen_GeneralSymbol::*)( const Standard_Integer  ) ) static_cast<void (IGESDimen_GeneralSymbol::*)( const Standard_Integer  ) >(&IGESDimen_GeneralSymbol::SetFormNumber),
             R"#(Changes FormNumber (indicates the Nature of the Symbole) Error if not in ranges [0-3] or [> 5000])#"  , py::arg("form"))
        .def("HasNote",
             (Standard_Boolean (IGESDimen_GeneralSymbol::*)() const) static_cast<Standard_Boolean (IGESDimen_GeneralSymbol::*)() const>(&IGESDimen_GeneralSymbol::HasNote),
             R"#(returns True if there is associated General Note Entity)#" )
        .def("Note",
             (opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_GeneralSymbol::*)() const) static_cast<opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_GeneralSymbol::*)() const>(&IGESDimen_GeneralSymbol::Note),
             R"#(returns Null handle for form 0 only)#" )
        .def("NbGeomEntities",
             (Standard_Integer (IGESDimen_GeneralSymbol::*)() const) static_cast<Standard_Integer (IGESDimen_GeneralSymbol::*)() const>(&IGESDimen_GeneralSymbol::NbGeomEntities),
             R"#(returns number of Geometry Entities)#" )
        .def("GeomEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDimen_GeneralSymbol::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDimen_GeneralSymbol::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralSymbol::GeomEntity),
             R"#(returns the Index'th Geometry Entity raises exception if Index <= 0 or Index > NbGeomEntities())#"  , py::arg("Index"))
        .def("NbLeaders",
             (Standard_Integer (IGESDimen_GeneralSymbol::*)() const) static_cast<Standard_Integer (IGESDimen_GeneralSymbol::*)() const>(&IGESDimen_GeneralSymbol::NbLeaders),
             R"#(returns number of Leaders or zero if not specified)#" )
        .def("LeaderArrow",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_GeneralSymbol::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_GeneralSymbol::*)( const Standard_Integer  ) const>(&IGESDimen_GeneralSymbol::LeaderArrow),
             R"#(returns the Index'th Leader Arrow raises exception if Index <= 0 or Index > NbLeaders())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_GeneralSymbol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_GeneralSymbol::*)() const>(&IGESDimen_GeneralSymbol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_GeneralSymbol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_GeneralSymbol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_HArray1OfGeneralNote ,opencascade::handle<IGESDimen_HArray1OfGeneralNote>  , IGESDimen_Array1OfGeneralNote , Standard_Transient >>(m.attr("IGESDimen_HArray1OfGeneralNote"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESDimen_GeneralNote> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESDimen_GeneralNote> > & >()  , py::arg("theOther") )
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
    // Additional methods
;


    static_cast<py::class_<IGESDimen_HArray1OfLeaderArrow ,opencascade::handle<IGESDimen_HArray1OfLeaderArrow>  , IGESDimen_Array1OfLeaderArrow , Standard_Transient >>(m.attr("IGESDimen_HArray1OfLeaderArrow"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESDimen_LeaderArrow> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESDimen_LeaderArrow> > & >()  , py::arg("theOther") )
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
    // Additional methods
;


    static_cast<py::class_<IGESDimen_LeaderArrow ,opencascade::handle<IGESDimen_LeaderArrow>  , IGESData_IGESEntity >>(m.attr("IGESDimen_LeaderArrow"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_LeaderArrow::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_XY & ,  const opencascade::handle<TColgp_HArray1OfXY> &  ) ) static_cast<void (IGESDimen_LeaderArrow::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_XY & ,  const opencascade::handle<TColgp_HArray1OfXY> &  ) >(&IGESDimen_LeaderArrow::Init),
             R"#(This method is used to set the fields of the class LeaderArrow - height : ArrowHead height - width : ArrowHead width - depth : Z Depth - position : ArrowHead coordinates - segments : Segment tail coordinate pairs)#"  , py::arg("height"),  py::arg("width"),  py::arg("depth"),  py::arg("position"),  py::arg("segments"))
        .def("SetFormNumber",
             (void (IGESDimen_LeaderArrow::*)( const Standard_Integer  ) ) static_cast<void (IGESDimen_LeaderArrow::*)( const Standard_Integer  ) >(&IGESDimen_LeaderArrow::SetFormNumber),
             R"#(Changes FormNumber (indicates the Shape of the Arrow) Error if not in range [0-12])#"  , py::arg("form"))
        .def("NbSegments",
             (Standard_Integer (IGESDimen_LeaderArrow::*)() const) static_cast<Standard_Integer (IGESDimen_LeaderArrow::*)() const>(&IGESDimen_LeaderArrow::NbSegments),
             R"#(returns number of segments)#" )
        .def("ArrowHeadHeight",
             (Standard_Real (IGESDimen_LeaderArrow::*)() const) static_cast<Standard_Real (IGESDimen_LeaderArrow::*)() const>(&IGESDimen_LeaderArrow::ArrowHeadHeight),
             R"#(returns ArrowHead height)#" )
        .def("ArrowHeadWidth",
             (Standard_Real (IGESDimen_LeaderArrow::*)() const) static_cast<Standard_Real (IGESDimen_LeaderArrow::*)() const>(&IGESDimen_LeaderArrow::ArrowHeadWidth),
             R"#(returns ArrowHead width)#" )
        .def("ZDepth",
             (Standard_Real (IGESDimen_LeaderArrow::*)() const) static_cast<Standard_Real (IGESDimen_LeaderArrow::*)() const>(&IGESDimen_LeaderArrow::ZDepth),
             R"#(returns Z depth)#" )
        .def("ArrowHead",
             (gp_Pnt2d (IGESDimen_LeaderArrow::*)() const) static_cast<gp_Pnt2d (IGESDimen_LeaderArrow::*)() const>(&IGESDimen_LeaderArrow::ArrowHead),
             R"#(returns ArrowHead co-ordinates)#" )
        .def("TransformedArrowHead",
             (gp_Pnt (IGESDimen_LeaderArrow::*)() const) static_cast<gp_Pnt (IGESDimen_LeaderArrow::*)() const>(&IGESDimen_LeaderArrow::TransformedArrowHead),
             R"#(returns ArrowHead co-ordinates after Transformation)#" )
        .def("SegmentTail",
             (gp_Pnt2d (IGESDimen_LeaderArrow::*)( const Standard_Integer  ) const) static_cast<gp_Pnt2d (IGESDimen_LeaderArrow::*)( const Standard_Integer  ) const>(&IGESDimen_LeaderArrow::SegmentTail),
             R"#(returns segment tail co-ordinates. raises exception if Index <= 0 or Index > NbSegments)#"  , py::arg("Index"))
        .def("TransformedSegmentTail",
             (gp_Pnt (IGESDimen_LeaderArrow::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDimen_LeaderArrow::*)( const Standard_Integer  ) const>(&IGESDimen_LeaderArrow::TransformedSegmentTail),
             R"#(returns segment tail co-ordinates after Transformation. raises exception if Index <= 0 or Index > NbSegments)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_LeaderArrow::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_LeaderArrow::*)() const>(&IGESDimen_LeaderArrow::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_LeaderArrow::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_LeaderArrow::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_LinearDimension ,opencascade::handle<IGESDimen_LinearDimension>  , IGESData_IGESEntity >>(m.attr("IGESDimen_LinearDimension"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_LinearDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_WitnessLine> & ,  const opencascade::handle<IGESDimen_WitnessLine> &  ) ) static_cast<void (IGESDimen_LinearDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_WitnessLine> & ,  const opencascade::handle<IGESDimen_WitnessLine> &  ) >(&IGESDimen_LinearDimension::Init),
             R"#(This method is used to set the fields of the class LinearDimension - aNote : General Note Entity - aLeader : First Leader Entity - anotherLeader : Second Leader Entity - aWitness : First Witness Line Entity or a Null Handle - anotherWitness : Second Witness Line Entity or a Null Handle)#"  , py::arg("aNote"),  py::arg("aLeader"),  py::arg("anotherLeader"),  py::arg("aWitness"),  py::arg("anotherWitness"))
        .def("SetFormNumber",
             (void (IGESDimen_LinearDimension::*)( const Standard_Integer  ) ) static_cast<void (IGESDimen_LinearDimension::*)( const Standard_Integer  ) >(&IGESDimen_LinearDimension::SetFormNumber),
             R"#(Changes FormNumber (indicates the Nature of the Dimension Unspecified, Diameter or Radius) Error if not in range [0-2])#"  , py::arg("form"))
        .def("Note",
             (opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_LinearDimension::*)() const) static_cast<opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_LinearDimension::*)() const>(&IGESDimen_LinearDimension::Note),
             R"#(returns General Note Entity)#" )
        .def("FirstLeader",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_LinearDimension::*)() const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_LinearDimension::*)() const>(&IGESDimen_LinearDimension::FirstLeader),
             R"#(returns first Leader Entity)#" )
        .def("SecondLeader",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_LinearDimension::*)() const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_LinearDimension::*)() const>(&IGESDimen_LinearDimension::SecondLeader),
             R"#(returns second Leader Entity)#" )
        .def("HasFirstWitness",
             (Standard_Boolean (IGESDimen_LinearDimension::*)() const) static_cast<Standard_Boolean (IGESDimen_LinearDimension::*)() const>(&IGESDimen_LinearDimension::HasFirstWitness),
             R"#(returns False if no first witness line)#" )
        .def("FirstWitness",
             (opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_LinearDimension::*)() const) static_cast<opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_LinearDimension::*)() const>(&IGESDimen_LinearDimension::FirstWitness),
             R"#(returns first Witness Line Entity or a Null Handle)#" )
        .def("HasSecondWitness",
             (Standard_Boolean (IGESDimen_LinearDimension::*)() const) static_cast<Standard_Boolean (IGESDimen_LinearDimension::*)() const>(&IGESDimen_LinearDimension::HasSecondWitness),
             R"#(returns False if no second witness line)#" )
        .def("SecondWitness",
             (opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_LinearDimension::*)() const) static_cast<opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_LinearDimension::*)() const>(&IGESDimen_LinearDimension::SecondWitness),
             R"#(returns second Witness Line Entity or a Null Handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_LinearDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_LinearDimension::*)() const>(&IGESDimen_LinearDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_LinearDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_LinearDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_NewDimensionedGeometry ,opencascade::handle<IGESDimen_NewDimensionedGeometry>  , IGESData_IGESEntity >>(m.attr("IGESDimen_NewDimensionedGeometry"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_NewDimensionedGeometry::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColgp_HArray1OfXYZ> &  ) ) static_cast<void (IGESDimen_NewDimensionedGeometry::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColgp_HArray1OfXYZ> &  ) >(&IGESDimen_NewDimensionedGeometry::Init),
             R"#(This method is used to set the fields of the class NewDimensionedGeometry - nbDimen : Number of Dimensions, default = 1 - aDimen : Dimension Entity - anOrientation : Dimension Orientation Flag - anAngle : Angle Value - allEntities : Geometric Entities - allLocations : Dimension Location Flags - allPoints : Points on the Geometry Entities exception raised if lengths of entities, locations, points are not the same)#"  , py::arg("nbDimens"),  py::arg("aDimen"),  py::arg("anOrientation"),  py::arg("anAngle"),  py::arg("allEntities"),  py::arg("allLocations"),  py::arg("allPoints"))
        .def("NbDimensions",
             (Standard_Integer (IGESDimen_NewDimensionedGeometry::*)() const) static_cast<Standard_Integer (IGESDimen_NewDimensionedGeometry::*)() const>(&IGESDimen_NewDimensionedGeometry::NbDimensions),
             R"#(returns the number of dimensions)#" )
        .def("NbGeometries",
             (Standard_Integer (IGESDimen_NewDimensionedGeometry::*)() const) static_cast<Standard_Integer (IGESDimen_NewDimensionedGeometry::*)() const>(&IGESDimen_NewDimensionedGeometry::NbGeometries),
             R"#(returns the number of associated geometry entities)#" )
        .def("DimensionEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDimen_NewDimensionedGeometry::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDimen_NewDimensionedGeometry::*)() const>(&IGESDimen_NewDimensionedGeometry::DimensionEntity),
             R"#(returns the dimension entity)#" )
        .def("DimensionOrientationFlag",
             (Standard_Integer (IGESDimen_NewDimensionedGeometry::*)() const) static_cast<Standard_Integer (IGESDimen_NewDimensionedGeometry::*)() const>(&IGESDimen_NewDimensionedGeometry::DimensionOrientationFlag),
             R"#(returns the dimension orientation flag)#" )
        .def("AngleValue",
             (Standard_Real (IGESDimen_NewDimensionedGeometry::*)() const) static_cast<Standard_Real (IGESDimen_NewDimensionedGeometry::*)() const>(&IGESDimen_NewDimensionedGeometry::AngleValue),
             R"#(returns the angle value)#" )
        .def("GeometryEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDimen_NewDimensionedGeometry::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDimen_NewDimensionedGeometry::*)( const Standard_Integer  ) const>(&IGESDimen_NewDimensionedGeometry::GeometryEntity),
             R"#(returns the Index'th geometry entity raises exception if Index <= 0 or Index > NbGeometries())#"  , py::arg("Index"))
        .def("DimensionLocationFlag",
             (Standard_Integer (IGESDimen_NewDimensionedGeometry::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_NewDimensionedGeometry::*)( const Standard_Integer  ) const>(&IGESDimen_NewDimensionedGeometry::DimensionLocationFlag),
             R"#(returns the Index'th geometry entity's dimension location flag raises exception if Index <= 0 or Index > NbGeometries())#"  , py::arg("Index"))
        .def("Point",
             (gp_Pnt (IGESDimen_NewDimensionedGeometry::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDimen_NewDimensionedGeometry::*)( const Standard_Integer  ) const>(&IGESDimen_NewDimensionedGeometry::Point),
             R"#(coordinate of point on Index'th geometry entity raises exception if Index <= 0 or Index > NbGeometries())#"  , py::arg("Index"))
        .def("TransformedPoint",
             (gp_Pnt (IGESDimen_NewDimensionedGeometry::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDimen_NewDimensionedGeometry::*)( const Standard_Integer  ) const>(&IGESDimen_NewDimensionedGeometry::TransformedPoint),
             R"#(coordinate of point on Index'th geometry entity after Transformation raises exception if Index <= 0 or Index > NbGeometries())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_NewDimensionedGeometry::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_NewDimensionedGeometry::*)() const>(&IGESDimen_NewDimensionedGeometry::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_NewDimensionedGeometry::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_NewDimensionedGeometry::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_NewGeneralNote ,opencascade::handle<IGESDimen_NewGeneralNote>  , IGESData_IGESEntity >>(m.attr("IGESDimen_NewGeneralNote"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_NewGeneralNote::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const gp_XYZ & ,  const Standard_Real ,  const gp_XYZ & ,  const Standard_Real ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColgp_HArray1OfXYZ> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) ) static_cast<void (IGESDimen_NewGeneralNote::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const gp_XYZ & ,  const Standard_Real ,  const gp_XYZ & ,  const Standard_Real ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColgp_HArray1OfXYZ> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) >(&IGESDimen_NewGeneralNote::Init),
             R"#(This method is used to set the fields of the class NewGeneralNote - width : Width of text containment area - height : Height of text containment area - justifyCode : Justification code - areaLoc : Text containment area location - areaRotationAngle : Text containment area rotation - baseLinePos : Base line position - normalInterlineSpace : Normal interline spacing - charDisplays : Character display type - charWidths : Character width - charHeights : Character height - interCharSpc : Intercharacter spacing - interLineSpc : Interline spacing - fontStyles : Font style - charAngles : Character angle - controlCodeStrings : Control Code string - nbChars : Number of characters in string - boxWidths : Box width - boxHeights : Box height - charSetCodes : Character Set Interpretation - charSetEntities : Character Set Font - slAngles : Slant angle of text in radians - rotAngles : Rotation angle of text in radians - mirrorFlags : Type of mirroring - rotateFlags : Rotate internal text flag - startPoints : Text start point - texts : Text strings raises exception if there is mismatch between the various Array Lengths.)#"  , py::arg("width"),  py::arg("height"),  py::arg("justifyCode"),  py::arg("areaLoc"),  py::arg("areaRotationAngle"),  py::arg("baseLinePos"),  py::arg("normalInterlineSpace"),  py::arg("charDisplays"),  py::arg("charWidths"),  py::arg("charHeights"),  py::arg("interCharSpc"),  py::arg("interLineSpc"),  py::arg("fontStyles"),  py::arg("charAngles"),  py::arg("controlCodeStrings"),  py::arg("nbChars"),  py::arg("boxWidths"),  py::arg("boxHeights"),  py::arg("charSetCodes"),  py::arg("charSetEntities"),  py::arg("slAngles"),  py::arg("rotAngles"),  py::arg("mirrorFlags"),  py::arg("rotateFlags"),  py::arg("startPoints"),  py::arg("texts"))
        .def("TextWidth",
             (Standard_Real (IGESDimen_NewGeneralNote::*)() const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::TextWidth),
             R"#(returns width of text containment area of all strings in the note)#" )
        .def("TextHeight",
             (Standard_Real (IGESDimen_NewGeneralNote::*)() const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::TextHeight),
             R"#(returns height of text containment area of all strings in the note)#" )
        .def("JustifyCode",
             (Standard_Integer (IGESDimen_NewGeneralNote::*)() const) static_cast<Standard_Integer (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::JustifyCode),
             R"#(returns Justification code of all strings within the note 0 = no justification 1 = right justified 2 = center justified 3 = left justified)#" )
        .def("AreaLocation",
             (gp_Pnt (IGESDimen_NewGeneralNote::*)() const) static_cast<gp_Pnt (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::AreaLocation),
             R"#(returns Text containment area Location point)#" )
        .def("TransformedAreaLocation",
             (gp_Pnt (IGESDimen_NewGeneralNote::*)() const) static_cast<gp_Pnt (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::TransformedAreaLocation),
             R"#(returns Text containment area Location point after Transformation)#" )
        .def("ZDepthAreaLocation",
             (Standard_Real (IGESDimen_NewGeneralNote::*)() const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::ZDepthAreaLocation),
             R"#(returns distance from the containment area plane)#" )
        .def("AreaRotationAngle",
             (Standard_Real (IGESDimen_NewGeneralNote::*)() const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::AreaRotationAngle),
             R"#(returns rotation angle of text containment area in radians)#" )
        .def("BaseLinePosition",
             (gp_Pnt (IGESDimen_NewGeneralNote::*)() const) static_cast<gp_Pnt (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::BaseLinePosition),
             R"#(returns position of first base line)#" )
        .def("TransformedBaseLinePosition",
             (gp_Pnt (IGESDimen_NewGeneralNote::*)() const) static_cast<gp_Pnt (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::TransformedBaseLinePosition),
             R"#(returns position of first base line after Transformation)#" )
        .def("ZDepthBaseLinePosition",
             (Standard_Real (IGESDimen_NewGeneralNote::*)() const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::ZDepthBaseLinePosition),
             R"#(returns distance from the Base line position plane)#" )
        .def("NormalInterlineSpace",
             (Standard_Real (IGESDimen_NewGeneralNote::*)() const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::NormalInterlineSpace),
             R"#(returns Normal Interline Spacing)#" )
        .def("NbStrings",
             (Standard_Integer (IGESDimen_NewGeneralNote::*)() const) static_cast<Standard_Integer (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::NbStrings),
             R"#(returns number of text HAsciiStrings)#" )
        .def("CharacterDisplay",
             (Standard_Integer (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::CharacterDisplay),
             R"#(returns Fixed/Variable width character display of string 0 = Fixed 1 = Variable raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("IsVariable",
             (Standard_Boolean (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::IsVariable),
             R"#(returns False if Character display width is Fixed optional method, if required raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("CharacterWidth",
             (Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::CharacterWidth),
             R"#(returns Character Width of string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("CharacterHeight",
             (Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::CharacterHeight),
             R"#(returns Character Height of string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("InterCharacterSpace",
             (Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::InterCharacterSpace),
             R"#(returns Inter-character spacing of string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("InterlineSpace",
             (Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::InterlineSpace),
             R"#(returns Interline spacing of string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("FontStyle",
             (Standard_Integer (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::FontStyle),
             R"#(returns FontStyle of string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("CharacterAngle",
             (Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::CharacterAngle),
             R"#(returns CharacterAngle of string Angle returned will be between 0 and 2PI raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("ControlCodeString",
             (opencascade::handle<TCollection_HAsciiString> (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::ControlCodeString),
             R"#(returns ControlCodeString of string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("NbCharacters",
             (Standard_Integer (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::NbCharacters),
             R"#(returns number of characters in string or zero raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("BoxWidth",
             (Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::BoxWidth),
             R"#(returns Box width of string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("BoxHeight",
             (Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::BoxHeight),
             R"#(returns Box height of string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("IsCharSetEntity",
             (Standard_Boolean (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::IsCharSetEntity),
             R"#(returns False if Value, True if Pointer (Entity) raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("CharSetCode",
             (Standard_Integer (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::CharSetCode),
             R"#(returns Character Set Interpretation (default = 1) of string returns 0 if IsCharSetEntity () is True 1 = Standard ASCII 1001 = Symbol Font1 1002 = Symbol Font2 1003 = Symbol Font3 raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("CharSetEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::CharSetEntity),
             R"#(returns Character Set Interpretation of string returns a Null Handle if IsCharSetEntity () is False raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("SlantAngle",
             (Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::SlantAngle),
             R"#(returns Slant angle of string in radians default value = PI/2 raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("RotationAngle",
             (Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::RotationAngle),
             R"#(returns Rotation angle of string in radians raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("MirrorFlag",
             (Standard_Integer (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::MirrorFlag),
             R"#(returns Mirror Flag of string 0 = no mirroring 1 = mirror axis is perpendicular to the text base line 2 = mirror axis is text base line raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("IsMirrored",
             (Standard_Boolean (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::IsMirrored),
             R"#(returns False if MirrorFlag = 0. ie. no mirroring else returns True raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("RotateFlag",
             (Standard_Integer (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::RotateFlag),
             R"#(returns Rotate internal text Flag of string 0 = text horizontal 1 = text vertical raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("StartPoint",
             (gp_Pnt (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::StartPoint),
             R"#(returns text start point of string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("TransformedStartPoint",
             (gp_Pnt (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::TransformedStartPoint),
             R"#(returns text start point of string after Transformation raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("ZDepthStartPoint",
             (Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::ZDepthStartPoint),
             R"#(returns distance from the start point plane raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("Text",
             (opencascade::handle<TCollection_HAsciiString> (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDimen_NewGeneralNote::*)( const Standard_Integer  ) const>(&IGESDimen_NewGeneralNote::Text),
             R"#(returns text string raises exception if Index <= 0 or Index > NbStrings())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_NewGeneralNote::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_NewGeneralNote::*)() const>(&IGESDimen_NewGeneralNote::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_NewGeneralNote::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_NewGeneralNote::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_OrdinateDimension ,opencascade::handle<IGESDimen_OrdinateDimension>  , IGESData_IGESEntity >>(m.attr("IGESDimen_OrdinateDimension"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_OrdinateDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const Standard_Boolean ,  const opencascade::handle<IGESDimen_WitnessLine> & ,  const opencascade::handle<IGESDimen_LeaderArrow> &  ) ) static_cast<void (IGESDimen_OrdinateDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const Standard_Boolean ,  const opencascade::handle<IGESDimen_WitnessLine> & ,  const opencascade::handle<IGESDimen_LeaderArrow> &  ) >(&IGESDimen_OrdinateDimension::Init),
             R"#(None)#"  , py::arg("aNote"),  py::arg("aType"),  py::arg("aLine"),  py::arg("anArrow"))
        .def("IsLine",
             (Standard_Boolean (IGESDimen_OrdinateDimension::*)() const) static_cast<Standard_Boolean (IGESDimen_OrdinateDimension::*)() const>(&IGESDimen_OrdinateDimension::IsLine),
             R"#(returns True if Witness Line and False if Leader (only for Form 0))#" )
        .def("IsLeader",
             (Standard_Boolean (IGESDimen_OrdinateDimension::*)() const) static_cast<Standard_Boolean (IGESDimen_OrdinateDimension::*)() const>(&IGESDimen_OrdinateDimension::IsLeader),
             R"#(returns True if Leader and False if Witness Line (only for Form 0))#" )
        .def("Note",
             (opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_OrdinateDimension::*)() const) static_cast<opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_OrdinateDimension::*)() const>(&IGESDimen_OrdinateDimension::Note),
             R"#(returns the General Note entity associated.)#" )
        .def("WitnessLine",
             (opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_OrdinateDimension::*)() const) static_cast<opencascade::handle<IGESDimen_WitnessLine> (IGESDimen_OrdinateDimension::*)() const>(&IGESDimen_OrdinateDimension::WitnessLine),
             R"#(returns the Witness Line associated or Null handle)#" )
        .def("Leader",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_OrdinateDimension::*)() const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_OrdinateDimension::*)() const>(&IGESDimen_OrdinateDimension::Leader),
             R"#(returns the Leader associated or Null handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_OrdinateDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_OrdinateDimension::*)() const>(&IGESDimen_OrdinateDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_OrdinateDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_OrdinateDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_PointDimension ,opencascade::handle<IGESDimen_PointDimension>  , IGESData_IGESEntity >>(m.attr("IGESDimen_PointDimension"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_PointDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESDimen_PointDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESDimen_PointDimension::Init),
             R"#(None)#"  , py::arg("aNote"),  py::arg("anArrow"),  py::arg("aGeom"))
        .def("Note",
             (opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_PointDimension::*)() const) static_cast<opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_PointDimension::*)() const>(&IGESDimen_PointDimension::Note),
             R"#(None)#" )
        .def("LeaderArrow",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_PointDimension::*)() const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_PointDimension::*)() const>(&IGESDimen_PointDimension::LeaderArrow),
             R"#(None)#" )
        .def("GeomCase",
             (Standard_Integer (IGESDimen_PointDimension::*)() const) static_cast<Standard_Integer (IGESDimen_PointDimension::*)() const>(&IGESDimen_PointDimension::GeomCase),
             R"#(returns the type of geometric entity. 0 if no hexagon or circle encloses the text 1 if CircularArc 2 if CompositeCurve 3 otherwise)#" )
        .def("Geom",
             (opencascade::handle<IGESData_IGESEntity> (IGESDimen_PointDimension::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDimen_PointDimension::*)() const>(&IGESDimen_PointDimension::Geom),
             R"#(returns the Geometry Entity, Null handle if GeomCase(me) .eq. 0)#" )
        .def("CircularArc",
             (opencascade::handle<IGESGeom_CircularArc> (IGESDimen_PointDimension::*)() const) static_cast<opencascade::handle<IGESGeom_CircularArc> (IGESDimen_PointDimension::*)() const>(&IGESDimen_PointDimension::CircularArc),
             R"#(returns Null handle if GeomCase(me) .ne. 1)#" )
        .def("CompositeCurve",
             (opencascade::handle<IGESGeom_CompositeCurve> (IGESDimen_PointDimension::*)() const) static_cast<opencascade::handle<IGESGeom_CompositeCurve> (IGESDimen_PointDimension::*)() const>(&IGESDimen_PointDimension::CompositeCurve),
             R"#(returns Null handle if GeomCase(me) .ne. 2)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_PointDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_PointDimension::*)() const>(&IGESDimen_PointDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_PointDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_PointDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_Protocol ,opencascade::handle<IGESDimen_Protocol>  , IGESData_Protocol >>(m.attr("IGESDimen_Protocol"))
        .def(py::init<  >()  )
    // methods
        .def("NbResources",
             (Standard_Integer (IGESDimen_Protocol::*)() const) static_cast<Standard_Integer (IGESDimen_Protocol::*)() const>(&IGESDimen_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, two (Protocols from IGESGraph and IGESGeom))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESDimen_Protocol::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESDimen_Protocol::*)( const Standard_Integer  ) const>(&IGESDimen_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESDimen_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const) static_cast<Standard_Integer (IGESDimen_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const>(&IGESDimen_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_Protocol::*)() const>(&IGESDimen_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_Protocol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_Protocol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_RadiusDimension ,opencascade::handle<IGESDimen_RadiusDimension>  , IGESData_IGESEntity >>(m.attr("IGESDimen_RadiusDimension"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_RadiusDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const gp_XY & ,  const opencascade::handle<IGESDimen_LeaderArrow> &  ) ) static_cast<void (IGESDimen_RadiusDimension::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  const gp_XY & ,  const opencascade::handle<IGESDimen_LeaderArrow> &  ) >(&IGESDimen_RadiusDimension::Init),
             R"#(None)#"  , py::arg("aNote"),  py::arg("anArrow"),  py::arg("arcCenter"),  py::arg("anotherArrow"))
        .def("InitForm",
             (void (IGESDimen_RadiusDimension::*)( const Standard_Integer  ) ) static_cast<void (IGESDimen_RadiusDimension::*)( const Standard_Integer  ) >(&IGESDimen_RadiusDimension::InitForm),
             R"#(Allows to change Form Number (1 admits null arrow))#"  , py::arg("form"))
        .def("Note",
             (opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_RadiusDimension::*)() const) static_cast<opencascade::handle<IGESDimen_GeneralNote> (IGESDimen_RadiusDimension::*)() const>(&IGESDimen_RadiusDimension::Note),
             R"#(returns the General Note entity)#" )
        .def("Leader",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_RadiusDimension::*)() const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_RadiusDimension::*)() const>(&IGESDimen_RadiusDimension::Leader),
             R"#(returns the Leader Arrow entity)#" )
        .def("Center",
             (gp_Pnt2d (IGESDimen_RadiusDimension::*)() const) static_cast<gp_Pnt2d (IGESDimen_RadiusDimension::*)() const>(&IGESDimen_RadiusDimension::Center),
             R"#(returns the coordinates of the Arc Center)#" )
        .def("TransformedCenter",
             (gp_Pnt (IGESDimen_RadiusDimension::*)() const) static_cast<gp_Pnt (IGESDimen_RadiusDimension::*)() const>(&IGESDimen_RadiusDimension::TransformedCenter),
             R"#(returns the coordinates of the Arc Center after Transformation (Z coord taken from ZDepth of Leader Entity))#" )
        .def("HasLeader2",
             (Standard_Boolean (IGESDimen_RadiusDimension::*)() const) static_cast<Standard_Boolean (IGESDimen_RadiusDimension::*)() const>(&IGESDimen_RadiusDimension::HasLeader2),
             R"#(returns True if form is 1, False if 0)#" )
        .def("Leader2",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_RadiusDimension::*)() const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDimen_RadiusDimension::*)() const>(&IGESDimen_RadiusDimension::Leader2),
             R"#(returns Null handle if Form is 0)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_RadiusDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_RadiusDimension::*)() const>(&IGESDimen_RadiusDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_RadiusDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_RadiusDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ReadWriteModule ,opencascade::handle<IGESDimen_ReadWriteModule>  , IGESData_ReadWriteModule >>(m.attr("IGESDimen_ReadWriteModule"))
        .def(py::init<  >()  )
    // methods
        .def("CaseIGES",
             (Standard_Integer (IGESDimen_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDimen_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDimen_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESDimen)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESDimen_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESDimen)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_ReadWriteModule::*)() const>(&IGESDimen_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_ReadWriteModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_ReadWriteModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_Section ,opencascade::handle<IGESDimen_Section>  , IGESData_IGESEntity >>(m.attr("IGESDimen_Section"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_Section::*)( const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<TColgp_HArray1OfXY> &  ) ) static_cast<void (IGESDimen_Section::*)( const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<TColgp_HArray1OfXY> &  ) >(&IGESDimen_Section::Init),
             R"#(This method is used to set the fields of the class Section - dataType : Interpretation Flag, always = 1 - aDisp : Common z displacement - dataPoints : Data points)#"  , py::arg("dataType"),  py::arg("aDisp"),  py::arg("dataPoints"))
        .def("SetFormNumber",
             (void (IGESDimen_Section::*)( const Standard_Integer  ) ) static_cast<void (IGESDimen_Section::*)( const Standard_Integer  ) >(&IGESDimen_Section::SetFormNumber),
             R"#(Changes FormNumber (indicates the Type of the Hatches) Error if not in range [31-38])#"  , py::arg("form"))
        .def("Datatype",
             (Standard_Integer (IGESDimen_Section::*)() const) static_cast<Standard_Integer (IGESDimen_Section::*)() const>(&IGESDimen_Section::Datatype),
             R"#(returns Interpretation Flag, always = 1)#" )
        .def("NbPoints",
             (Standard_Integer (IGESDimen_Section::*)() const) static_cast<Standard_Integer (IGESDimen_Section::*)() const>(&IGESDimen_Section::NbPoints),
             R"#(returns number of Data Points)#" )
        .def("ZDisplacement",
             (Standard_Real (IGESDimen_Section::*)() const) static_cast<Standard_Real (IGESDimen_Section::*)() const>(&IGESDimen_Section::ZDisplacement),
             R"#(returns common Z displacement)#" )
        .def("Point",
             (gp_Pnt (IGESDimen_Section::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDimen_Section::*)( const Standard_Integer  ) const>(&IGESDimen_Section::Point),
             R"#(returns Index'th data point raises exception if Index <= 0 or Index > NbPoints())#"  , py::arg("Index"))
        .def("TransformedPoint",
             (gp_Pnt (IGESDimen_Section::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDimen_Section::*)( const Standard_Integer  ) const>(&IGESDimen_Section::TransformedPoint),
             R"#(returns Index'th data point after Transformation raises exception if Index <= 0 or Index > NbPoints())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_Section::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_Section::*)() const>(&IGESDimen_Section::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_Section::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_Section::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_SectionedArea ,opencascade::handle<IGESDimen_SectionedArea>  , IGESData_IGESEntity >>(m.attr("IGESDimen_SectionedArea"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_SectionedArea::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Integer ,  const gp_XYZ & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESDimen_SectionedArea::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Integer ,  const gp_XYZ & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESDimen_SectionedArea::Init),
             R"#(None)#"  , py::arg("aCurve"),  py::arg("aPattern"),  py::arg("aPoint"),  py::arg("aDistance"),  py::arg("anAngle"),  py::arg("someIslands"))
        .def("SetInverted",
             (void (IGESDimen_SectionedArea::*)( const Standard_Boolean  ) ) static_cast<void (IGESDimen_SectionedArea::*)( const Standard_Boolean  ) >(&IGESDimen_SectionedArea::SetInverted),
             R"#(Sets the cross hatches to be inverted or not, according value of <mode> (corresponds to FormNumber))#"  , py::arg("mode"))
        .def("IsInverted",
             (Standard_Boolean (IGESDimen_SectionedArea::*)() const) static_cast<Standard_Boolean (IGESDimen_SectionedArea::*)() const>(&IGESDimen_SectionedArea::IsInverted),
             R"#(Returns True if cross hatches as Inverted, else they are Standard (Inverted : Form=1, Standard : Form=0))#" )
        .def("ExteriorCurve",
             (opencascade::handle<IGESData_IGESEntity> (IGESDimen_SectionedArea::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDimen_SectionedArea::*)() const>(&IGESDimen_SectionedArea::ExteriorCurve),
             R"#(returns the exterior definition curve)#" )
        .def("Pattern",
             (Standard_Integer (IGESDimen_SectionedArea::*)() const) static_cast<Standard_Integer (IGESDimen_SectionedArea::*)() const>(&IGESDimen_SectionedArea::Pattern),
             R"#(returns fill pattern code)#" )
        .def("PassingPoint",
             (gp_Pnt (IGESDimen_SectionedArea::*)() const) static_cast<gp_Pnt (IGESDimen_SectionedArea::*)() const>(&IGESDimen_SectionedArea::PassingPoint),
             R"#(returns point thru which line should pass)#" )
        .def("TransformedPassingPoint",
             (gp_Pnt (IGESDimen_SectionedArea::*)() const) static_cast<gp_Pnt (IGESDimen_SectionedArea::*)() const>(&IGESDimen_SectionedArea::TransformedPassingPoint),
             R"#(returns point thru which line should pass after Transformation)#" )
        .def("ZDepth",
             (Standard_Real (IGESDimen_SectionedArea::*)() const) static_cast<Standard_Real (IGESDimen_SectionedArea::*)() const>(&IGESDimen_SectionedArea::ZDepth),
             R"#(returns the Z depth)#" )
        .def("Distance",
             (Standard_Real (IGESDimen_SectionedArea::*)() const) static_cast<Standard_Real (IGESDimen_SectionedArea::*)() const>(&IGESDimen_SectionedArea::Distance),
             R"#(returns the normal distance between lines)#" )
        .def("Angle",
             (Standard_Real (IGESDimen_SectionedArea::*)() const) static_cast<Standard_Real (IGESDimen_SectionedArea::*)() const>(&IGESDimen_SectionedArea::Angle),
             R"#(returns the angle of lines with XT axis)#" )
        .def("NbIslands",
             (Standard_Integer (IGESDimen_SectionedArea::*)() const) static_cast<Standard_Integer (IGESDimen_SectionedArea::*)() const>(&IGESDimen_SectionedArea::NbIslands),
             R"#(returns the number of island curves)#" )
        .def("IslandCurve",
             (opencascade::handle<IGESData_IGESEntity> (IGESDimen_SectionedArea::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDimen_SectionedArea::*)( const Standard_Integer  ) const>(&IGESDimen_SectionedArea::IslandCurve),
             R"#(returns the interior definition curves, returns Null Handle exception raised if Index <= 0 or Index > NbIslands())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_SectionedArea::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_SectionedArea::*)() const>(&IGESDimen_SectionedArea::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_SectionedArea::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_SectionedArea::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_SpecificModule ,opencascade::handle<IGESDimen_SpecificModule>  , IGESData_SpecificModule >>(m.attr("IGESDimen_SpecificModule"))
        .def(py::init<  >()  )
    // methods
        .def("OwnDump",
             (void (IGESDimen_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESDimen)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDimen_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<Standard_Boolean (IGESDimen_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESDimen_SpecificModule::OwnCorrect),
             R"#(Performs non-ambiguous Corrections on Entities which support them (BasicDimension,CenterLine,DimensionDisplayData, DimensionTolerance,DimensionUnits,DimensionedGeometry, NewDimensionedGeometry,Section,WitnessLine))#"  , py::arg("CN"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_SpecificModule::*)() const>(&IGESDimen_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_SpecificModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_SpecificModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolAngularDimension , shared_ptr<IGESDimen_ToolAngularDimension>  >>(m.attr("IGESDimen_ToolAngularDimension"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolAngularDimension::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolAngularDimension::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolAngularDimension::OwnShared),
             R"#(Lists the Entities shared by a AngularDimension <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> &  ) const>(&IGESDimen_ToolAngularDimension::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolAngularDimension::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> & ,  const opencascade::handle<IGESDimen_AngularDimension> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> & ,  const opencascade::handle<IGESDimen_AngularDimension> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolAngularDimension::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolAngularDimension::*)( const opencascade::handle<IGESDimen_AngularDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolAngularDimension::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolBasicDimension , shared_ptr<IGESDimen_ToolBasicDimension>  >>(m.attr("IGESDimen_ToolBasicDimension"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolBasicDimension::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolBasicDimension::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolBasicDimension::OwnShared),
             R"#(Lists the Entities shared by a BasicDimension <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> &  ) const) static_cast<Standard_Boolean (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> &  ) const>(&IGESDimen_ToolBasicDimension::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a BasicDimension (NbPropertyValues forced to 8))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> &  ) const>(&IGESDimen_ToolBasicDimension::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolBasicDimension::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> & ,  const opencascade::handle<IGESDimen_BasicDimension> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> & ,  const opencascade::handle<IGESDimen_BasicDimension> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolBasicDimension::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolBasicDimension::*)( const opencascade::handle<IGESDimen_BasicDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolBasicDimension::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolCenterLine , shared_ptr<IGESDimen_ToolCenterLine>  >>(m.attr("IGESDimen_ToolCenterLine"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolCenterLine::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolCenterLine::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolCenterLine::OwnShared),
             R"#(Lists the Entities shared by a CenterLine <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> &  ) const) static_cast<Standard_Boolean (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> &  ) const>(&IGESDimen_ToolCenterLine::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a CenterLine (LineFont forced to Rank = 1, DataType forced to 1))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> &  ) const>(&IGESDimen_ToolCenterLine::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolCenterLine::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> & ,  const opencascade::handle<IGESDimen_CenterLine> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> & ,  const opencascade::handle<IGESDimen_CenterLine> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolCenterLine::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolCenterLine::*)( const opencascade::handle<IGESDimen_CenterLine> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolCenterLine::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolCurveDimension , shared_ptr<IGESDimen_ToolCurveDimension>  >>(m.attr("IGESDimen_ToolCurveDimension"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolCurveDimension::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolCurveDimension::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolCurveDimension::OwnShared),
             R"#(Lists the Entities shared by a CurveDimension <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> &  ) const>(&IGESDimen_ToolCurveDimension::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolCurveDimension::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> & ,  const opencascade::handle<IGESDimen_CurveDimension> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> & ,  const opencascade::handle<IGESDimen_CurveDimension> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolCurveDimension::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolCurveDimension::*)( const opencascade::handle<IGESDimen_CurveDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolCurveDimension::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolDiameterDimension , shared_ptr<IGESDimen_ToolDiameterDimension>  >>(m.attr("IGESDimen_ToolDiameterDimension"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolDiameterDimension::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolDiameterDimension::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolDiameterDimension::OwnShared),
             R"#(Lists the Entities shared by a DiameterDimension <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> &  ) const>(&IGESDimen_ToolDiameterDimension::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolDiameterDimension::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> & ,  const opencascade::handle<IGESDimen_DiameterDimension> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> & ,  const opencascade::handle<IGESDimen_DiameterDimension> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolDiameterDimension::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolDiameterDimension::*)( const opencascade::handle<IGESDimen_DiameterDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolDiameterDimension::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolDimensionDisplayData , shared_ptr<IGESDimen_ToolDimensionDisplayData>  >>(m.attr("IGESDimen_ToolDimensionDisplayData"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolDimensionDisplayData::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolDimensionDisplayData::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolDimensionDisplayData::OwnShared),
             R"#(Lists the Entities shared by a DimensionDisplayData <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> &  ) const) static_cast<Standard_Boolean (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> &  ) const>(&IGESDimen_ToolDimensionDisplayData::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a DimensionDisplayData (NbPropertyValues forced to 14))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> &  ) const>(&IGESDimen_ToolDimensionDisplayData::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolDimensionDisplayData::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolDimensionDisplayData::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolDimensionDisplayData::*)( const opencascade::handle<IGESDimen_DimensionDisplayData> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolDimensionDisplayData::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolDimensionTolerance , shared_ptr<IGESDimen_ToolDimensionTolerance>  >>(m.attr("IGESDimen_ToolDimensionTolerance"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolDimensionTolerance::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolDimensionTolerance::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolDimensionTolerance::OwnShared),
             R"#(Lists the Entities shared by a DimensionTolerance <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> &  ) const) static_cast<Standard_Boolean (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> &  ) const>(&IGESDimen_ToolDimensionTolerance::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a DimensionTolerance (NbPropertyValues forced to 8))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> &  ) const>(&IGESDimen_ToolDimensionTolerance::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolDimensionTolerance::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> & ,  const opencascade::handle<IGESDimen_DimensionTolerance> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> & ,  const opencascade::handle<IGESDimen_DimensionTolerance> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolDimensionTolerance::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolDimensionTolerance::*)( const opencascade::handle<IGESDimen_DimensionTolerance> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolDimensionTolerance::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolDimensionUnits , shared_ptr<IGESDimen_ToolDimensionUnits>  >>(m.attr("IGESDimen_ToolDimensionUnits"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolDimensionUnits::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolDimensionUnits::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolDimensionUnits::OwnShared),
             R"#(Lists the Entities shared by a DimensionUnits <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> &  ) const) static_cast<Standard_Boolean (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> &  ) const>(&IGESDimen_ToolDimensionUnits::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a DimensionUnits (NbPropertyValues forced to 6))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> &  ) const>(&IGESDimen_ToolDimensionUnits::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolDimensionUnits::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> & ,  const opencascade::handle<IGESDimen_DimensionUnits> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> & ,  const opencascade::handle<IGESDimen_DimensionUnits> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolDimensionUnits::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolDimensionUnits::*)( const opencascade::handle<IGESDimen_DimensionUnits> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolDimensionUnits::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolDimensionedGeometry , shared_ptr<IGESDimen_ToolDimensionedGeometry>  >>(m.attr("IGESDimen_ToolDimensionedGeometry"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolDimensionedGeometry::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolDimensionedGeometry::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolDimensionedGeometry::OwnShared),
             R"#(Lists the Entities shared by a DimensionedGeometry <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> &  ) const) static_cast<Standard_Boolean (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> &  ) const>(&IGESDimen_ToolDimensionedGeometry::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a DimensionedGeometry (NbDimensions forced to 1))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> &  ) const>(&IGESDimen_ToolDimensionedGeometry::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolDimensionedGeometry::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolDimensionedGeometry::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolDimensionedGeometry::*)( const opencascade::handle<IGESDimen_DimensionedGeometry> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolDimensionedGeometry::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolFlagNote , shared_ptr<IGESDimen_ToolFlagNote>  >>(m.attr("IGESDimen_ToolFlagNote"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolFlagNote::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolFlagNote::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolFlagNote::OwnShared),
             R"#(Lists the Entities shared by a FlagNote <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> &  ) const>(&IGESDimen_ToolFlagNote::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolFlagNote::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> & ,  const opencascade::handle<IGESDimen_FlagNote> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> & ,  const opencascade::handle<IGESDimen_FlagNote> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolFlagNote::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolFlagNote::*)( const opencascade::handle<IGESDimen_FlagNote> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolFlagNote::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolGeneralLabel , shared_ptr<IGESDimen_ToolGeneralLabel>  >>(m.attr("IGESDimen_ToolGeneralLabel"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolGeneralLabel::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolGeneralLabel::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolGeneralLabel::OwnShared),
             R"#(Lists the Entities shared by a GeneralLabel <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> &  ) const>(&IGESDimen_ToolGeneralLabel::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolGeneralLabel::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> & ,  const opencascade::handle<IGESDimen_GeneralLabel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> & ,  const opencascade::handle<IGESDimen_GeneralLabel> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolGeneralLabel::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolGeneralLabel::*)( const opencascade::handle<IGESDimen_GeneralLabel> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolGeneralLabel::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolGeneralNote , shared_ptr<IGESDimen_ToolGeneralNote>  >>(m.attr("IGESDimen_ToolGeneralNote"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolGeneralNote::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolGeneralNote::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolGeneralNote::OwnShared),
             R"#(Lists the Entities shared by a GeneralNote <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> &  ) const>(&IGESDimen_ToolGeneralNote::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolGeneralNote::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_GeneralNote> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const opencascade::handle<IGESDimen_GeneralNote> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolGeneralNote::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolGeneralNote::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolGeneralNote::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolGeneralSymbol , shared_ptr<IGESDimen_ToolGeneralSymbol>  >>(m.attr("IGESDimen_ToolGeneralSymbol"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolGeneralSymbol::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolGeneralSymbol::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolGeneralSymbol::OwnShared),
             R"#(Lists the Entities shared by a GeneralSymbol <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> &  ) const>(&IGESDimen_ToolGeneralSymbol::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolGeneralSymbol::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> & ,  const opencascade::handle<IGESDimen_GeneralSymbol> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> & ,  const opencascade::handle<IGESDimen_GeneralSymbol> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolGeneralSymbol::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolGeneralSymbol::*)( const opencascade::handle<IGESDimen_GeneralSymbol> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolGeneralSymbol::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolLeaderArrow , shared_ptr<IGESDimen_ToolLeaderArrow>  >>(m.attr("IGESDimen_ToolLeaderArrow"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolLeaderArrow::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolLeaderArrow::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolLeaderArrow::OwnShared),
             R"#(Lists the Entities shared by a LeaderArrow <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> &  ) const>(&IGESDimen_ToolLeaderArrow::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolLeaderArrow::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> & ,  const opencascade::handle<IGESDimen_LeaderArrow> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolLeaderArrow::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolLeaderArrow::*)( const opencascade::handle<IGESDimen_LeaderArrow> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolLeaderArrow::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolLinearDimension , shared_ptr<IGESDimen_ToolLinearDimension>  >>(m.attr("IGESDimen_ToolLinearDimension"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolLinearDimension::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolLinearDimension::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolLinearDimension::OwnShared),
             R"#(Lists the Entities shared by a LinearDimension <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> &  ) const>(&IGESDimen_ToolLinearDimension::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolLinearDimension::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> & ,  const opencascade::handle<IGESDimen_LinearDimension> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> & ,  const opencascade::handle<IGESDimen_LinearDimension> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolLinearDimension::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolLinearDimension::*)( const opencascade::handle<IGESDimen_LinearDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolLinearDimension::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolNewDimensionedGeometry , shared_ptr<IGESDimen_ToolNewDimensionedGeometry>  >>(m.attr("IGESDimen_ToolNewDimensionedGeometry"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolNewDimensionedGeometry::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolNewDimensionedGeometry::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolNewDimensionedGeometry::OwnShared),
             R"#(Lists the Entities shared by a NewDimensionedGeometry <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> &  ) const) static_cast<Standard_Boolean (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> &  ) const>(&IGESDimen_ToolNewDimensionedGeometry::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a NewDimensionedGeometry (NbDimensions forced to 1, Transf Nullified in D.E.))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> &  ) const>(&IGESDimen_ToolNewDimensionedGeometry::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolNewDimensionedGeometry::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolNewDimensionedGeometry::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolNewDimensionedGeometry::*)( const opencascade::handle<IGESDimen_NewDimensionedGeometry> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolNewDimensionedGeometry::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolNewGeneralNote , shared_ptr<IGESDimen_ToolNewGeneralNote>  >>(m.attr("IGESDimen_ToolNewGeneralNote"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolNewGeneralNote::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolNewGeneralNote::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolNewGeneralNote::OwnShared),
             R"#(Lists the Entities shared by a NewGeneralNote <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> &  ) const>(&IGESDimen_ToolNewGeneralNote::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolNewGeneralNote::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> & ,  const opencascade::handle<IGESDimen_NewGeneralNote> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> & ,  const opencascade::handle<IGESDimen_NewGeneralNote> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolNewGeneralNote::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolNewGeneralNote::*)( const opencascade::handle<IGESDimen_NewGeneralNote> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolNewGeneralNote::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolOrdinateDimension , shared_ptr<IGESDimen_ToolOrdinateDimension>  >>(m.attr("IGESDimen_ToolOrdinateDimension"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolOrdinateDimension::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolOrdinateDimension::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolOrdinateDimension::OwnShared),
             R"#(Lists the Entities shared by a OrdinateDimension <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> &  ) const>(&IGESDimen_ToolOrdinateDimension::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolOrdinateDimension::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> & ,  const opencascade::handle<IGESDimen_OrdinateDimension> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> & ,  const opencascade::handle<IGESDimen_OrdinateDimension> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolOrdinateDimension::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolOrdinateDimension::*)( const opencascade::handle<IGESDimen_OrdinateDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolOrdinateDimension::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolPointDimension , shared_ptr<IGESDimen_ToolPointDimension>  >>(m.attr("IGESDimen_ToolPointDimension"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolPointDimension::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolPointDimension::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolPointDimension::OwnShared),
             R"#(Lists the Entities shared by a PointDimension <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> &  ) const>(&IGESDimen_ToolPointDimension::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolPointDimension::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> & ,  const opencascade::handle<IGESDimen_PointDimension> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> & ,  const opencascade::handle<IGESDimen_PointDimension> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolPointDimension::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolPointDimension::*)( const opencascade::handle<IGESDimen_PointDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolPointDimension::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolRadiusDimension , shared_ptr<IGESDimen_ToolRadiusDimension>  >>(m.attr("IGESDimen_ToolRadiusDimension"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolRadiusDimension::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolRadiusDimension::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolRadiusDimension::OwnShared),
             R"#(Lists the Entities shared by a RadiusDimension <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> &  ) const>(&IGESDimen_ToolRadiusDimension::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolRadiusDimension::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> & ,  const opencascade::handle<IGESDimen_RadiusDimension> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> & ,  const opencascade::handle<IGESDimen_RadiusDimension> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolRadiusDimension::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolRadiusDimension::*)( const opencascade::handle<IGESDimen_RadiusDimension> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolRadiusDimension::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolSection , shared_ptr<IGESDimen_ToolSection>  >>(m.attr("IGESDimen_ToolSection"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolSection::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolSection::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolSection::OwnShared),
             R"#(Lists the Entities shared by a Section <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> &  ) const) static_cast<Standard_Boolean (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> &  ) const>(&IGESDimen_ToolSection::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a Section (LineFont forced to Rank = 1, DataType forced to 1))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> &  ) const>(&IGESDimen_ToolSection::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolSection::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> & ,  const opencascade::handle<IGESDimen_Section> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> & ,  const opencascade::handle<IGESDimen_Section> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolSection::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolSection::*)( const opencascade::handle<IGESDimen_Section> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolSection::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolSectionedArea , shared_ptr<IGESDimen_ToolSectionedArea>  >>(m.attr("IGESDimen_ToolSectionedArea"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolSectionedArea::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolSectionedArea::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolSectionedArea::OwnShared),
             R"#(Lists the Entities shared by a SectionedArea <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> &  ) const>(&IGESDimen_ToolSectionedArea::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolSectionedArea::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> & ,  const opencascade::handle<IGESDimen_SectionedArea> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> & ,  const opencascade::handle<IGESDimen_SectionedArea> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolSectionedArea::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolSectionedArea::*)( const opencascade::handle<IGESDimen_SectionedArea> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolSectionedArea::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_ToolWitnessLine , shared_ptr<IGESDimen_ToolWitnessLine>  >>(m.attr("IGESDimen_ToolWitnessLine"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDimen_ToolWitnessLine::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> & ,  IGESData_IGESWriter &  ) const>(&IGESDimen_ToolWitnessLine::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> & ,  Interface_EntityIterator &  ) const>(&IGESDimen_ToolWitnessLine::OwnShared),
             R"#(Lists the Entities shared by a WitnessLine <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> &  ) const) static_cast<Standard_Boolean (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> &  ) const>(&IGESDimen_ToolWitnessLine::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a WitnessLine (LineFont forced to Rank = 1, DataType forced to 1))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> &  ) const) static_cast<IGESData_DirChecker (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> &  ) const>(&IGESDimen_ToolWitnessLine::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDimen_ToolWitnessLine::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> & ,  const opencascade::handle<IGESDimen_WitnessLine> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> & ,  const opencascade::handle<IGESDimen_WitnessLine> & ,  Interface_CopyTool &  ) const>(&IGESDimen_ToolWitnessLine::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDimen_ToolWitnessLine::*)( const opencascade::handle<IGESDimen_WitnessLine> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDimen_ToolWitnessLine::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDimen_WitnessLine ,opencascade::handle<IGESDimen_WitnessLine>  , IGESData_IGESEntity >>(m.attr("IGESDimen_WitnessLine"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDimen_WitnessLine::*)( const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<TColgp_HArray1OfXY> &  ) ) static_cast<void (IGESDimen_WitnessLine::*)( const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<TColgp_HArray1OfXY> &  ) >(&IGESDimen_WitnessLine::Init),
             R"#(This method is used to set the fields of the class WitnessLine - dataType : Interpretation Flag, always = 1 - aDispl : Common z displacement - dataPoints : Data points)#"  , py::arg("dataType"),  py::arg("aDisp"),  py::arg("dataPoints"))
        .def("Datatype",
             (Standard_Integer (IGESDimen_WitnessLine::*)() const) static_cast<Standard_Integer (IGESDimen_WitnessLine::*)() const>(&IGESDimen_WitnessLine::Datatype),
             R"#(returns Interpretation Flag, always = 1)#" )
        .def("NbPoints",
             (Standard_Integer (IGESDimen_WitnessLine::*)() const) static_cast<Standard_Integer (IGESDimen_WitnessLine::*)() const>(&IGESDimen_WitnessLine::NbPoints),
             R"#(returns number of Data Points)#" )
        .def("ZDisplacement",
             (Standard_Real (IGESDimen_WitnessLine::*)() const) static_cast<Standard_Real (IGESDimen_WitnessLine::*)() const>(&IGESDimen_WitnessLine::ZDisplacement),
             R"#(returns common Z displacement)#" )
        .def("Point",
             (gp_Pnt (IGESDimen_WitnessLine::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDimen_WitnessLine::*)( const Standard_Integer  ) const>(&IGESDimen_WitnessLine::Point),
             R"#(returns Index'th. data point raises exception if Index <= 0 or Index > NbPoints)#"  , py::arg("Index"))
        .def("TransformedPoint",
             (gp_Pnt (IGESDimen_WitnessLine::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDimen_WitnessLine::*)( const Standard_Integer  ) const>(&IGESDimen_WitnessLine::TransformedPoint),
             R"#(returns data point after Transformation. raises exception if Index <= 0 or Index > NbPoints)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDimen_WitnessLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDimen_WitnessLine::*)() const>(&IGESDimen_WitnessLine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDimen_WitnessLine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDimen_WitnessLine::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/IGESDimen_GeneralModule.hxx
// ./opencascade/IGESDimen_GeneralLabel.hxx
// ./opencascade/IGESDimen_ToolGeneralLabel.hxx
// ./opencascade/IGESDimen_ToolFlagNote.hxx
// ./opencascade/IGESDimen_ToolLeaderArrow.hxx
// ./opencascade/IGESDimen_ToolNewGeneralNote.hxx
// ./opencascade/IGESDimen_LinearDimension.hxx
// ./opencascade/IGESDimen_ToolDimensionUnits.hxx
// ./opencascade/IGESDimen_ToolDimensionedGeometry.hxx
// ./opencascade/IGESDimen_ToolCenterLine.hxx
// ./opencascade/IGESDimen_Array1OfGeneralNote.hxx
// ./opencascade/IGESDimen_ToolDimensionTolerance.hxx
// ./opencascade/IGESDimen_GeneralSymbol.hxx
// ./opencascade/IGESDimen_ToolDiameterDimension.hxx
// ./opencascade/IGESDimen_Array1OfLeaderArrow.hxx
// ./opencascade/IGESDimen_HArray1OfLeaderArrow.hxx
// ./opencascade/IGESDimen_RadiusDimension.hxx
// ./opencascade/IGESDimen_DimensionedGeometry.hxx
// ./opencascade/IGESDimen_ToolSectionedArea.hxx
// ./opencascade/IGESDimen_ReadWriteModule.hxx
// ./opencascade/IGESDimen_Protocol.hxx
// ./opencascade/IGESDimen_NewGeneralNote.hxx
// ./opencascade/IGESDimen_HArray1OfGeneralNote.hxx
// ./opencascade/IGESDimen_ToolAngularDimension.hxx
// ./opencascade/IGESDimen_SpecificModule.hxx
// ./opencascade/IGESDimen_CenterLine.hxx
// ./opencascade/IGESDimen_DimensionDisplayData.hxx
// ./opencascade/IGESDimen_ToolSection.hxx
// ./opencascade/IGESDimen_ToolPointDimension.hxx
// ./opencascade/IGESDimen_FlagNote.hxx
// ./opencascade/IGESDimen_OrdinateDimension.hxx
// ./opencascade/IGESDimen_ToolBasicDimension.hxx
// ./opencascade/IGESDimen_CurveDimension.hxx
// ./opencascade/IGESDimen_SectionedArea.hxx
// ./opencascade/IGESDimen_ToolGeneralSymbol.hxx
// ./opencascade/IGESDimen_DiameterDimension.hxx
// ./opencascade/IGESDimen_ToolDimensionDisplayData.hxx
// ./opencascade/IGESDimen_NewDimensionedGeometry.hxx
// ./opencascade/IGESDimen_ToolGeneralNote.hxx
// ./opencascade/IGESDimen_ToolWitnessLine.hxx
// ./opencascade/IGESDimen_DimensionUnits.hxx
// ./opencascade/IGESDimen_Section.hxx
// ./opencascade/IGESDimen_ToolCurveDimension.hxx
// ./opencascade/IGESDimen_PointDimension.hxx
// ./opencascade/IGESDimen_AngularDimension.hxx
// ./opencascade/IGESDimen_LeaderArrow.hxx
// ./opencascade/IGESDimen_ToolLinearDimension.hxx
// ./opencascade/IGESDimen_ToolOrdinateDimension.hxx
// ./opencascade/IGESDimen_DimensionTolerance.hxx
// ./opencascade/IGESDimen_ToolRadiusDimension.hxx
// ./opencascade/IGESDimen_GeneralNote.hxx
// ./opencascade/IGESDimen_WitnessLine.hxx
// ./opencascade/IGESDimen.hxx
// ./opencascade/IGESDimen_BasicDimension.hxx
// ./opencascade/IGESDimen_ToolNewDimensionedGeometry.hxx

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESDimen_GeneralNote> >(m,"IGESDimen_Array1OfGeneralNote");  
    register_template_NCollection_Array1<opencascade::handle<IGESDimen_LeaderArrow> >(m,"IGESDimen_Array1OfLeaderArrow");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

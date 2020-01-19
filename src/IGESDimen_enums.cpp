
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_IGESDimen_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IGESDimen", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<IGESDimen_GeneralNote> >(m,"IGESDimen_Array1OfGeneralNote");  
    preregister_template_NCollection_Array1<opencascade::handle<IGESDimen_LeaderArrow> >(m,"IGESDimen_Array1OfLeaderArrow");  

// classes forward declarations only
    py::class_<IGESDimen , shared_ptr<IGESDimen>  >(m,"IGESDimen",R"#(This package represents Entities applied to Dimensions ie. Annotation Entities and attached Properties and Associativities.)#");
    py::class_<IGESDimen_AngularDimension ,opencascade::handle<IGESDimen_AngularDimension>  , IGESData_IGESEntity >(m,"IGESDimen_AngularDimension",R"#(defines AngularDimension, Type <202> Form <0> in package IGESDimen Used to dimension anglesdefines AngularDimension, Type <202> Form <0> in package IGESDimen Used to dimension anglesdefines AngularDimension, Type <202> Form <0> in package IGESDimen Used to dimension angles)#");
    py::class_<IGESDimen_BasicDimension ,opencascade::handle<IGESDimen_BasicDimension>  , IGESData_IGESEntity >(m,"IGESDimen_BasicDimension",R"#(Defines IGES Basic Dimension, Type 406, Form 31, in package IGESDimen The basic Dimension Property indicates that the referencing dimension entity is to be displayed with a box around text.Defines IGES Basic Dimension, Type 406, Form 31, in package IGESDimen The basic Dimension Property indicates that the referencing dimension entity is to be displayed with a box around text.Defines IGES Basic Dimension, Type 406, Form 31, in package IGESDimen The basic Dimension Property indicates that the referencing dimension entity is to be displayed with a box around text.)#");
    py::class_<IGESDimen_CenterLine ,opencascade::handle<IGESDimen_CenterLine>  , IGESData_IGESEntity >(m,"IGESDimen_CenterLine",R"#(defines CenterLine, Type <106> Form <20-21> in package IGESDimen Is an entity appearing as crosshairs or as a construction between 2 positionsdefines CenterLine, Type <106> Form <20-21> in package IGESDimen Is an entity appearing as crosshairs or as a construction between 2 positionsdefines CenterLine, Type <106> Form <20-21> in package IGESDimen Is an entity appearing as crosshairs or as a construction between 2 positions)#");
    py::class_<IGESDimen_CurveDimension ,opencascade::handle<IGESDimen_CurveDimension>  , IGESData_IGESEntity >(m,"IGESDimen_CurveDimension",R"#(defines CurveDimension, Type <204> Form <0> in package IGESDimen Used to dimension curves Consists of one tail segment of nonzero length beginning with an arrowhead and which serves to define the orientationdefines CurveDimension, Type <204> Form <0> in package IGESDimen Used to dimension curves Consists of one tail segment of nonzero length beginning with an arrowhead and which serves to define the orientationdefines CurveDimension, Type <204> Form <0> in package IGESDimen Used to dimension curves Consists of one tail segment of nonzero length beginning with an arrowhead and which serves to define the orientation)#");
    py::class_<IGESDimen_DiameterDimension ,opencascade::handle<IGESDimen_DiameterDimension>  , IGESData_IGESEntity >(m,"IGESDimen_DiameterDimension",R"#(defines DiameterDimension, Type <206> Form <0> in package IGESDimen Used for dimensioning diametersdefines DiameterDimension, Type <206> Form <0> in package IGESDimen Used for dimensioning diametersdefines DiameterDimension, Type <206> Form <0> in package IGESDimen Used for dimensioning diameters)#");
    py::class_<IGESDimen_DimensionDisplayData ,opencascade::handle<IGESDimen_DimensionDisplayData>  , IGESData_IGESEntity >(m,"IGESDimen_DimensionDisplayData",R"#(Defines IGES Dimension Display Data, Type <406> Form <30>, in package IGESDimen The Dimensional Display Data Property is optional but when present must be referenced by a dimension entity. The information it contains could be extracted from the text, leader and witness line data with difficulty.Defines IGES Dimension Display Data, Type <406> Form <30>, in package IGESDimen The Dimensional Display Data Property is optional but when present must be referenced by a dimension entity. The information it contains could be extracted from the text, leader and witness line data with difficulty.Defines IGES Dimension Display Data, Type <406> Form <30>, in package IGESDimen The Dimensional Display Data Property is optional but when present must be referenced by a dimension entity. The information it contains could be extracted from the text, leader and witness line data with difficulty.)#");
    py::class_<IGESDimen_DimensionTolerance ,opencascade::handle<IGESDimen_DimensionTolerance>  , IGESData_IGESEntity >(m,"IGESDimen_DimensionTolerance",R"#(defines Dimension Tolerance, Type <406>, Form <29> in package IGESDimen Provides tolerance information for a dimension which can be used by the receiving system to regenerate the dimension.defines Dimension Tolerance, Type <406>, Form <29> in package IGESDimen Provides tolerance information for a dimension which can be used by the receiving system to regenerate the dimension.defines Dimension Tolerance, Type <406>, Form <29> in package IGESDimen Provides tolerance information for a dimension which can be used by the receiving system to regenerate the dimension.)#");
    py::class_<IGESDimen_DimensionUnits ,opencascade::handle<IGESDimen_DimensionUnits>  , IGESData_IGESEntity >(m,"IGESDimen_DimensionUnits",R"#(defines Dimension Units, Type <406>, Form <28> in package IGESDimen Describes the units and formatting details of the nominal value of a dimension.defines Dimension Units, Type <406>, Form <28> in package IGESDimen Describes the units and formatting details of the nominal value of a dimension.defines Dimension Units, Type <406>, Form <28> in package IGESDimen Describes the units and formatting details of the nominal value of a dimension.)#");
    py::class_<IGESDimen_DimensionedGeometry ,opencascade::handle<IGESDimen_DimensionedGeometry>  , IGESData_IGESEntity >(m,"IGESDimen_DimensionedGeometry",R"#(Defines IGES Dimensioned Geometry, Type <402> Form <13>, in package IGESDimen This entity has been replaced by the new form of Dimensioned Geometry Associativity Entity (Type 402, Form 21) and should no longer be used by preprocessors.Defines IGES Dimensioned Geometry, Type <402> Form <13>, in package IGESDimen This entity has been replaced by the new form of Dimensioned Geometry Associativity Entity (Type 402, Form 21) and should no longer be used by preprocessors.Defines IGES Dimensioned Geometry, Type <402> Form <13>, in package IGESDimen This entity has been replaced by the new form of Dimensioned Geometry Associativity Entity (Type 402, Form 21) and should no longer be used by preprocessors.)#");
    py::class_<IGESDimen_FlagNote ,opencascade::handle<IGESDimen_FlagNote>  , IGESData_IGESEntity >(m,"IGESDimen_FlagNote",R"#(defines FlagNote, Type <208> Form <0> in package IGESDimen Is label information formatted in different waysdefines FlagNote, Type <208> Form <0> in package IGESDimen Is label information formatted in different waysdefines FlagNote, Type <208> Form <0> in package IGESDimen Is label information formatted in different ways)#");
    py::class_<IGESDimen_GeneralLabel ,opencascade::handle<IGESDimen_GeneralLabel>  , IGESData_IGESEntity >(m,"IGESDimen_GeneralLabel",R"#(defines GeneralLabel, Type <210> Form <0> in package IGESDimen Used for general labeling with leadersdefines GeneralLabel, Type <210> Form <0> in package IGESDimen Used for general labeling with leadersdefines GeneralLabel, Type <210> Form <0> in package IGESDimen Used for general labeling with leaders)#");
    py::class_<IGESDimen_GeneralModule ,opencascade::handle<IGESDimen_GeneralModule>  , IGESData_GeneralModule >(m,"IGESDimen_GeneralModule",R"#(Definition of General Services for IGESDimen (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESDimen (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESDimen (specific part) This Services comprise : Shared & Implied Lists, Copy, Check)#");
    py::class_<IGESDimen_GeneralNote ,opencascade::handle<IGESDimen_GeneralNote>  , IGESData_IGESEntity >(m,"IGESDimen_GeneralNote",R"#(defines GeneralNote, Type <212> Form <0-8, 100-200, 105> in package IGESDimen Used for formatting boxed text in different waysdefines GeneralNote, Type <212> Form <0-8, 100-200, 105> in package IGESDimen Used for formatting boxed text in different waysdefines GeneralNote, Type <212> Form <0-8, 100-200, 105> in package IGESDimen Used for formatting boxed text in different ways)#");
    py::class_<IGESDimen_GeneralSymbol ,opencascade::handle<IGESDimen_GeneralSymbol>  , IGESData_IGESEntity >(m,"IGESDimen_GeneralSymbol",R"#(defines General Symbol, Type <228>, Form <0-3,5001-9999> in package IGESDimen Consists of zero or one (Form 0) or one (all other forms), one or more geometry entities which define a symbol, and zero, one or more associated leaders.defines General Symbol, Type <228>, Form <0-3,5001-9999> in package IGESDimen Consists of zero or one (Form 0) or one (all other forms), one or more geometry entities which define a symbol, and zero, one or more associated leaders.defines General Symbol, Type <228>, Form <0-3,5001-9999> in package IGESDimen Consists of zero or one (Form 0) or one (all other forms), one or more geometry entities which define a symbol, and zero, one or more associated leaders.)#");
    py::class_<IGESDimen_HArray1OfGeneralNote ,opencascade::handle<IGESDimen_HArray1OfGeneralNote>  , IGESDimen_Array1OfGeneralNote , Standard_Transient >(m,"IGESDimen_HArray1OfGeneralNote",R"#()#");
    py::class_<IGESDimen_HArray1OfLeaderArrow ,opencascade::handle<IGESDimen_HArray1OfLeaderArrow>  , IGESDimen_Array1OfLeaderArrow , Standard_Transient >(m,"IGESDimen_HArray1OfLeaderArrow",R"#()#");
    py::class_<IGESDimen_LeaderArrow ,opencascade::handle<IGESDimen_LeaderArrow>  , IGESData_IGESEntity >(m,"IGESDimen_LeaderArrow",R"#(defines LeaderArrow, Type <214> Form <1-12> in package IGESDimen Consists of one or more line segments except when leader is part of an angular dimension, with links to presumed text itemdefines LeaderArrow, Type <214> Form <1-12> in package IGESDimen Consists of one or more line segments except when leader is part of an angular dimension, with links to presumed text itemdefines LeaderArrow, Type <214> Form <1-12> in package IGESDimen Consists of one or more line segments except when leader is part of an angular dimension, with links to presumed text item)#");
    py::class_<IGESDimen_LinearDimension ,opencascade::handle<IGESDimen_LinearDimension>  , IGESData_IGESEntity >(m,"IGESDimen_LinearDimension",R"#(defines LinearDimension, Type <216> Form <0> in package IGESDimen Used for linear dimensioningdefines LinearDimension, Type <216> Form <0> in package IGESDimen Used for linear dimensioningdefines LinearDimension, Type <216> Form <0> in package IGESDimen Used for linear dimensioning)#");
    py::class_<IGESDimen_NewDimensionedGeometry ,opencascade::handle<IGESDimen_NewDimensionedGeometry>  , IGESData_IGESEntity >(m,"IGESDimen_NewDimensionedGeometry",R"#(defines New Dimensioned Geometry, Type <402>, Form <21> in package IGESDimen Links a dimension entity with the geometry entities it is dimensioning, so that later, in the receiving database, the dimension can be automatically recalculated and redrawn should the geometry be changed.defines New Dimensioned Geometry, Type <402>, Form <21> in package IGESDimen Links a dimension entity with the geometry entities it is dimensioning, so that later, in the receiving database, the dimension can be automatically recalculated and redrawn should the geometry be changed.defines New Dimensioned Geometry, Type <402>, Form <21> in package IGESDimen Links a dimension entity with the geometry entities it is dimensioning, so that later, in the receiving database, the dimension can be automatically recalculated and redrawn should the geometry be changed.)#");
    py::class_<IGESDimen_NewGeneralNote ,opencascade::handle<IGESDimen_NewGeneralNote>  , IGESData_IGESEntity >(m,"IGESDimen_NewGeneralNote",R"#(defines NewGeneralNote, Type <213> Form <0> in package IGESDimen Further attributes for formatting text stringsdefines NewGeneralNote, Type <213> Form <0> in package IGESDimen Further attributes for formatting text stringsdefines NewGeneralNote, Type <213> Form <0> in package IGESDimen Further attributes for formatting text strings)#");
    py::class_<IGESDimen_OrdinateDimension ,opencascade::handle<IGESDimen_OrdinateDimension>  , IGESData_IGESEntity >(m,"IGESDimen_OrdinateDimension",R"#(defines IGES Ordinate Dimension, Type <218> Form <0, 1>, in package IGESDimen Note : The ordinate dimension entity is used to indicate dimensions from a common base line. Dimensioning is only permitted along the XT or YT axis.defines IGES Ordinate Dimension, Type <218> Form <0, 1>, in package IGESDimen Note : The ordinate dimension entity is used to indicate dimensions from a common base line. Dimensioning is only permitted along the XT or YT axis.defines IGES Ordinate Dimension, Type <218> Form <0, 1>, in package IGESDimen Note : The ordinate dimension entity is used to indicate dimensions from a common base line. Dimensioning is only permitted along the XT or YT axis.)#");
    py::class_<IGESDimen_PointDimension ,opencascade::handle<IGESDimen_PointDimension>  , IGESData_IGESEntity >(m,"IGESDimen_PointDimension",R"#(defines IGES Point Dimension, Type <220> Form <0>, in package IGESDimen A Point Dimension Entity consists of a leader, text, and an optional circle or hexagon enclosing the text IGES specs for this entity mention SimpleClosedPlanarCurve Entity(106/63)which is not listed in LIST.Text In the sequel we have ignored this & considered only the other two entity for representing the hexagon or circle enclosing the text.defines IGES Point Dimension, Type <220> Form <0>, in package IGESDimen A Point Dimension Entity consists of a leader, text, and an optional circle or hexagon enclosing the text IGES specs for this entity mention SimpleClosedPlanarCurve Entity(106/63)which is not listed in LIST.Text In the sequel we have ignored this & considered only the other two entity for representing the hexagon or circle enclosing the text.defines IGES Point Dimension, Type <220> Form <0>, in package IGESDimen A Point Dimension Entity consists of a leader, text, and an optional circle or hexagon enclosing the text IGES specs for this entity mention SimpleClosedPlanarCurve Entity(106/63)which is not listed in LIST.Text In the sequel we have ignored this & considered only the other two entity for representing the hexagon or circle enclosing the text.)#");
    py::class_<IGESDimen_Protocol ,opencascade::handle<IGESDimen_Protocol>  , IGESData_Protocol >(m,"IGESDimen_Protocol",R"#(Description of Protocol for IGESDimenDescription of Protocol for IGESDimenDescription of Protocol for IGESDimen)#");
    py::class_<IGESDimen_RadiusDimension ,opencascade::handle<IGESDimen_RadiusDimension>  , IGESData_IGESEntity >(m,"IGESDimen_RadiusDimension",R"#(Defines IGES Radius Dimension, type <222> Form <0, 1>, in package IGESDimen. A Radius Dimension Entity consists of a General Note, a leader, and an arc center point. A second form of this entity accounts for the occasional need to have two leader entities referenced.Defines IGES Radius Dimension, type <222> Form <0, 1>, in package IGESDimen. A Radius Dimension Entity consists of a General Note, a leader, and an arc center point. A second form of this entity accounts for the occasional need to have two leader entities referenced.Defines IGES Radius Dimension, type <222> Form <0, 1>, in package IGESDimen. A Radius Dimension Entity consists of a General Note, a leader, and an arc center point. A second form of this entity accounts for the occasional need to have two leader entities referenced.)#");
    py::class_<IGESDimen_ReadWriteModule ,opencascade::handle<IGESDimen_ReadWriteModule>  , IGESData_ReadWriteModule >(m,"IGESDimen_ReadWriteModule",R"#(Defines Dimen File Access Module for IGESDimen (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntityDefines Dimen File Access Module for IGESDimen (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntityDefines Dimen File Access Module for IGESDimen (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity)#");
    py::class_<IGESDimen_Section ,opencascade::handle<IGESDimen_Section>  , IGESData_IGESEntity >(m,"IGESDimen_Section",R"#(defines Section, Type <106> Form <31-38> in package IGESDimen Contains information to display sectioned sidesdefines Section, Type <106> Form <31-38> in package IGESDimen Contains information to display sectioned sidesdefines Section, Type <106> Form <31-38> in package IGESDimen Contains information to display sectioned sides)#");
    py::class_<IGESDimen_SectionedArea ,opencascade::handle<IGESDimen_SectionedArea>  , IGESData_IGESEntity >(m,"IGESDimen_SectionedArea",R"#(defines IGES Sectioned Area, Type <230> Form <0>, in package IGESDimen A sectioned area is a portion of a design which is to be filled with a pattern of lines. Ordinarily, this entity is used to reveal or expose shape or material characteri- stics defined by other entities. It consists of a pointer to an exterior definition curve, a specification of the pattern of lines, the coordinates of a point on a pattern line, the distance between the pattern lines, the angle between the pattern lines and the X-axis of definition space, and the specification of any enclosed definition curves (commonly known as islands).defines IGES Sectioned Area, Type <230> Form <0>, in package IGESDimen A sectioned area is a portion of a design which is to be filled with a pattern of lines. Ordinarily, this entity is used to reveal or expose shape or material characteri- stics defined by other entities. It consists of a pointer to an exterior definition curve, a specification of the pattern of lines, the coordinates of a point on a pattern line, the distance between the pattern lines, the angle between the pattern lines and the X-axis of definition space, and the specification of any enclosed definition curves (commonly known as islands).defines IGES Sectioned Area, Type <230> Form <0>, in package IGESDimen A sectioned area is a portion of a design which is to be filled with a pattern of lines. Ordinarily, this entity is used to reveal or expose shape or material characteri- stics defined by other entities. It consists of a pointer to an exterior definition curve, a specification of the pattern of lines, the coordinates of a point on a pattern line, the distance between the pattern lines, the angle between the pattern lines and the X-axis of definition space, and the specification of any enclosed definition curves (commonly known as islands).)#");
    py::class_<IGESDimen_SpecificModule ,opencascade::handle<IGESDimen_SpecificModule>  , IGESData_SpecificModule >(m,"IGESDimen_SpecificModule",R"#(Defines Services attached to IGES Entities : Dump & OwnCorrect, for IGESDimenDefines Services attached to IGES Entities : Dump & OwnCorrect, for IGESDimenDefines Services attached to IGES Entities : Dump & OwnCorrect, for IGESDimen)#");
    py::class_<IGESDimen_ToolAngularDimension , shared_ptr<IGESDimen_ToolAngularDimension>  >(m,"IGESDimen_ToolAngularDimension",R"#(Tool to work on a AngularDimension. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolBasicDimension , shared_ptr<IGESDimen_ToolBasicDimension>  >(m,"IGESDimen_ToolBasicDimension",R"#(Tool to work on a BasicDimension. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolCenterLine , shared_ptr<IGESDimen_ToolCenterLine>  >(m,"IGESDimen_ToolCenterLine",R"#(Tool to work on a CenterLine. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolCurveDimension , shared_ptr<IGESDimen_ToolCurveDimension>  >(m,"IGESDimen_ToolCurveDimension",R"#(Tool to work on a CurveDimension. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolDiameterDimension , shared_ptr<IGESDimen_ToolDiameterDimension>  >(m,"IGESDimen_ToolDiameterDimension",R"#(Tool to work on a DiameterDimension. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolDimensionDisplayData , shared_ptr<IGESDimen_ToolDimensionDisplayData>  >(m,"IGESDimen_ToolDimensionDisplayData",R"#(Tool to work on a DimensionDisplayData. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolDimensionTolerance , shared_ptr<IGESDimen_ToolDimensionTolerance>  >(m,"IGESDimen_ToolDimensionTolerance",R"#(Tool to work on a DimensionTolerance. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolDimensionUnits , shared_ptr<IGESDimen_ToolDimensionUnits>  >(m,"IGESDimen_ToolDimensionUnits",R"#(Tool to work on a DimensionUnits. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolDimensionedGeometry , shared_ptr<IGESDimen_ToolDimensionedGeometry>  >(m,"IGESDimen_ToolDimensionedGeometry",R"#(Tool to work on a DimensionedGeometry. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolFlagNote , shared_ptr<IGESDimen_ToolFlagNote>  >(m,"IGESDimen_ToolFlagNote",R"#(Tool to work on a FlagNote. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolGeneralLabel , shared_ptr<IGESDimen_ToolGeneralLabel>  >(m,"IGESDimen_ToolGeneralLabel",R"#(Tool to work on a GeneralLabel. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolGeneralNote , shared_ptr<IGESDimen_ToolGeneralNote>  >(m,"IGESDimen_ToolGeneralNote",R"#(Tool to work on a GeneralNote. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolGeneralSymbol , shared_ptr<IGESDimen_ToolGeneralSymbol>  >(m,"IGESDimen_ToolGeneralSymbol",R"#(Tool to work on a GeneralSymbol. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolLeaderArrow , shared_ptr<IGESDimen_ToolLeaderArrow>  >(m,"IGESDimen_ToolLeaderArrow",R"#(Tool to work on a LeaderArrow. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolLinearDimension , shared_ptr<IGESDimen_ToolLinearDimension>  >(m,"IGESDimen_ToolLinearDimension",R"#(Tool to work on a LinearDimension. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolNewDimensionedGeometry , shared_ptr<IGESDimen_ToolNewDimensionedGeometry>  >(m,"IGESDimen_ToolNewDimensionedGeometry",R"#(Tool to work on a NewDimensionedGeometry. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolNewGeneralNote , shared_ptr<IGESDimen_ToolNewGeneralNote>  >(m,"IGESDimen_ToolNewGeneralNote",R"#(Tool to work on a NewGeneralNote. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolOrdinateDimension , shared_ptr<IGESDimen_ToolOrdinateDimension>  >(m,"IGESDimen_ToolOrdinateDimension",R"#(Tool to work on a OrdinateDimension. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolPointDimension , shared_ptr<IGESDimen_ToolPointDimension>  >(m,"IGESDimen_ToolPointDimension",R"#(Tool to work on a PointDimension. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolRadiusDimension , shared_ptr<IGESDimen_ToolRadiusDimension>  >(m,"IGESDimen_ToolRadiusDimension",R"#(Tool to work on a RadiusDimension. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolSection , shared_ptr<IGESDimen_ToolSection>  >(m,"IGESDimen_ToolSection",R"#(Tool to work on a Section. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolSectionedArea , shared_ptr<IGESDimen_ToolSectionedArea>  >(m,"IGESDimen_ToolSectionedArea",R"#(Tool to work on a SectionedArea. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_ToolWitnessLine , shared_ptr<IGESDimen_ToolWitnessLine>  >(m,"IGESDimen_ToolWitnessLine",R"#(Tool to work on a WitnessLine. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDimen_WitnessLine ,opencascade::handle<IGESDimen_WitnessLine>  , IGESData_IGESEntity >(m,"IGESDimen_WitnessLine",R"#(defines WitnessLine, Type <106> Form <40> in package IGESDimen Contains one or more straight line segments associated with drafting entities of various typesdefines WitnessLine, Type <106> Form <40> in package IGESDimen Contains one or more straight line segments associated with drafting entities of various typesdefines WitnessLine, Type <106> Form <40> in package IGESDimen Contains one or more straight line segments associated with drafting entities of various types)#");

};

// user-defined post-inclusion per module

// user-defined post

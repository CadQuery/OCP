
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_DomainError.hxx>
#include <IGESDraw_NetworkSubfigureDef.hxx>
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
#include <gp_XYZ.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_XYZ.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDraw_RectArraySubfigure.hxx>
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
#include <IGESDraw_View.hxx>
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
#include <gp_Vec.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <IGESData_TransfEntity.hxx>
#include <IGESGeom_Plane.hxx>
#include <Standard_OutOfRange.hxx>
#include <IGESData_TransfEntity.hxx>
#include <gp_XYZ.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDraw_NetworkSubfigure.hxx>
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
#include <IGESGeom_TransformationMatrix.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESGraph_TextDisplayTemplate.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDraw_ViewsVisible.hxx>
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
#include <IGESDraw_ConnectPoint.hxx>
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
#include <IGESDraw_NetworkSubfigureDef.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESGraph_TextDisplayTemplate.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDraw_SegmentedViewsVisible.hxx>
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
#include <IGESDraw_DrawingWithRotation.hxx>
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
#include <IGESDraw_CircArraySubfigure.hxx>
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
#include <IGESDraw_ViewsVisibleWithAttr.hxx>
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
#include <IGESGraph_TextDisplayTemplate.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDraw_Planar.hxx>
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
#include <Standard_DomainError.hxx>
#include <IGESDraw_PerspectiveView.hxx>
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
#include <IGESDraw_Drawing.hxx>
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
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESDraw_Protocol.hxx>
#include <IGESDraw_ConnectPoint.hxx>
#include <IGESDraw_NetworkSubfigureDef.hxx>
#include <IGESDraw_ViewsVisible.hxx>
#include <IGESDraw_ViewsVisibleWithAttr.hxx>
#include <IGESDraw_LabelDisplay.hxx>
#include <IGESDraw_Planar.hxx>
#include <IGESDraw_SegmentedViewsVisible.hxx>
#include <IGESDraw_Drawing.hxx>
#include <IGESDraw_DrawingWithRotation.hxx>
#include <IGESDraw_View.hxx>
#include <IGESDraw_RectArraySubfigure.hxx>
#include <IGESDraw_CircArraySubfigure.hxx>
#include <IGESDraw_NetworkSubfigure.hxx>
#include <IGESDraw_PerspectiveView.hxx>
#include <IGESDraw_ToolConnectPoint.hxx>
#include <IGESDraw_ToolNetworkSubfigureDef.hxx>
#include <IGESDraw_ToolViewsVisible.hxx>
#include <IGESDraw_ToolViewsVisibleWithAttr.hxx>
#include <IGESDraw_ToolLabelDisplay.hxx>
#include <IGESDraw_ToolPlanar.hxx>
#include <IGESDraw_ToolSegmentedViewsVisible.hxx>
#include <IGESDraw_ToolDrawing.hxx>
#include <IGESDraw_ToolDrawingWithRotation.hxx>
#include <IGESDraw_ToolView.hxx>
#include <IGESDraw_ToolRectArraySubfigure.hxx>
#include <IGESDraw_ToolCircArraySubfigure.hxx>
#include <IGESDraw_ToolNetworkSubfigure.hxx>
#include <IGESDraw_ToolPerspectiveView.hxx>
#include <IGESDraw_Protocol.hxx>
#include <IGESDraw_ReadWriteModule.hxx>
#include <IGESDraw_GeneralModule.hxx>
#include <IGESDraw_SpecificModule.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDraw_LabelDisplay.hxx>
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
#include <IGESDraw.hxx>
#include <IGESDraw_Array1OfConnectPoint.hxx>
#include <IGESDraw_Array1OfViewKindEntity.hxx>
#include <IGESDraw_CircArraySubfigure.hxx>
#include <IGESDraw_ConnectPoint.hxx>
#include <IGESDraw_Drawing.hxx>
#include <IGESDraw_DrawingWithRotation.hxx>
#include <IGESDraw_GeneralModule.hxx>
#include <IGESDraw_HArray1OfConnectPoint.hxx>
#include <IGESDraw_HArray1OfViewKindEntity.hxx>
#include <IGESDraw_LabelDisplay.hxx>
#include <IGESDraw_NetworkSubfigure.hxx>
#include <IGESDraw_NetworkSubfigureDef.hxx>
#include <IGESDraw_PerspectiveView.hxx>
#include <IGESDraw_Planar.hxx>
#include <IGESDraw_Protocol.hxx>
#include <IGESDraw_ReadWriteModule.hxx>
#include <IGESDraw_RectArraySubfigure.hxx>
#include <IGESDraw_SegmentedViewsVisible.hxx>
#include <IGESDraw_SpecificModule.hxx>
#include <IGESDraw_ToolCircArraySubfigure.hxx>
#include <IGESDraw_ToolConnectPoint.hxx>
#include <IGESDraw_ToolDrawing.hxx>
#include <IGESDraw_ToolDrawingWithRotation.hxx>
#include <IGESDraw_ToolLabelDisplay.hxx>
#include <IGESDraw_ToolNetworkSubfigure.hxx>
#include <IGESDraw_ToolNetworkSubfigureDef.hxx>
#include <IGESDraw_ToolPerspectiveView.hxx>
#include <IGESDraw_ToolPlanar.hxx>
#include <IGESDraw_ToolRectArraySubfigure.hxx>
#include <IGESDraw_ToolSegmentedViewsVisible.hxx>
#include <IGESDraw_ToolView.hxx>
#include <IGESDraw_ToolViewsVisible.hxx>
#include <IGESDraw_ToolViewsVisibleWithAttr.hxx>
#include <IGESDraw_View.hxx>
#include <IGESDraw_ViewsVisible.hxx>
#include <IGESDraw_ViewsVisibleWithAttr.hxx>

// template related includes
// ./opencascade/IGESDraw_Array1OfViewKindEntity.hxx
#include "NCollection.hxx"
// ./opencascade/IGESDraw_Array1OfConnectPoint.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESDraw_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IGESDraw", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<IGESDraw_HArray1OfConnectPoint ,std::unique_ptr<IGESDraw_HArray1OfConnectPoint>  >(m,"IGESDraw_HArray1OfConnectPoint",R"#()#");
    py::class_<IGESDraw_HArray1OfViewKindEntity ,std::unique_ptr<IGESDraw_HArray1OfViewKindEntity>  >(m,"IGESDraw_HArray1OfViewKindEntity",R"#()#");
    py::class_<IGESDraw_ViewsVisible ,opencascade::handle<IGESDraw_ViewsVisible>  , IGESData_ViewKindEntity >(m,"IGESDraw_ViewsVisible",R"#(Defines IGESViewsVisible, Type <402>, Form <3> in package IGESDrawDefines IGESViewsVisible, Type <402>, Form <3> in package IGESDrawDefines IGESViewsVisible, Type <402>, Form <3> in package IGESDraw)#");
    py::class_<IGESDraw_ViewsVisibleWithAttr ,opencascade::handle<IGESDraw_ViewsVisibleWithAttr>  , IGESData_ViewKindEntity >(m,"IGESDraw_ViewsVisibleWithAttr",R"#(defines IGESViewsVisibleWithAttr, Type <402>, Form <4> in package IGESDrawdefines IGESViewsVisibleWithAttr, Type <402>, Form <4> in package IGESDrawdefines IGESViewsVisibleWithAttr, Type <402>, Form <4> in package IGESDraw)#");
    py::class_<IGESDraw_ToolView ,std::unique_ptr<IGESDraw_ToolView>  >(m,"IGESDraw_ToolView",R"#(Tool to work on a View. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDraw_View ,opencascade::handle<IGESDraw_View>  , IGESData_ViewKindEntity >(m,"IGESDraw_View",R"#(defines IGES View Entity, Type <410> Form <0> in package IGESDrawdefines IGES View Entity, Type <410> Form <0> in package IGESDrawdefines IGES View Entity, Type <410> Form <0> in package IGESDraw)#");
    py::class_<IGESDraw_ToolNetworkSubfigure ,std::unique_ptr<IGESDraw_ToolNetworkSubfigure>  >(m,"IGESDraw_ToolNetworkSubfigure",R"#(Tool to work on a NetworkSubfigure. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDraw_NetworkSubfigureDef ,opencascade::handle<IGESDraw_NetworkSubfigureDef>  , IGESData_IGESEntity >(m,"IGESDraw_NetworkSubfigureDef",R"#(defines IGESNetworkSubfigureDef, Type <320> Form Number <0> in package IGESDrawdefines IGESNetworkSubfigureDef, Type <320> Form Number <0> in package IGESDrawdefines IGESNetworkSubfigureDef, Type <320> Form Number <0> in package IGESDraw)#");
    py::class_<IGESDraw_ToolViewsVisible ,std::unique_ptr<IGESDraw_ToolViewsVisible>  >(m,"IGESDraw_ToolViewsVisible",R"#(Tool to work on a ViewsVisible. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDraw_SegmentedViewsVisible ,opencascade::handle<IGESDraw_SegmentedViewsVisible>  , IGESData_ViewKindEntity >(m,"IGESDraw_SegmentedViewsVisible",R"#(defines IGESSegmentedViewsVisible, Type <402> Form <19> in package IGESDrawdefines IGESSegmentedViewsVisible, Type <402> Form <19> in package IGESDrawdefines IGESSegmentedViewsVisible, Type <402> Form <19> in package IGESDraw)#");
    py::class_<IGESDraw_ToolSegmentedViewsVisible ,std::unique_ptr<IGESDraw_ToolSegmentedViewsVisible>  >(m,"IGESDraw_ToolSegmentedViewsVisible",R"#(Tool to work on a SegmentedViewsVisible. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDraw_ToolCircArraySubfigure ,std::unique_ptr<IGESDraw_ToolCircArraySubfigure>  >(m,"IGESDraw_ToolCircArraySubfigure",R"#(Tool to work on a CircArraySubfigure. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDraw_RectArraySubfigure ,opencascade::handle<IGESDraw_RectArraySubfigure>  , IGESData_IGESEntity >(m,"IGESDraw_RectArraySubfigure",R"#(Defines IGES Rectangular Array Subfigure Instance Entity, Type <412> Form Number <0> in package IGESDraw Used to produce copies of object called the base entity, arranging them in equally spaced rows and columnsDefines IGES Rectangular Array Subfigure Instance Entity, Type <412> Form Number <0> in package IGESDraw Used to produce copies of object called the base entity, arranging them in equally spaced rows and columnsDefines IGES Rectangular Array Subfigure Instance Entity, Type <412> Form Number <0> in package IGESDraw Used to produce copies of object called the base entity, arranging them in equally spaced rows and columns)#");
    py::class_<IGESDraw_ConnectPoint ,opencascade::handle<IGESDraw_ConnectPoint>  , IGESData_IGESEntity >(m,"IGESDraw_ConnectPoint",R"#(defines IGESConnectPoint, Type <132> Form Number <0> in package IGESDrawdefines IGESConnectPoint, Type <132> Form Number <0> in package IGESDrawdefines IGESConnectPoint, Type <132> Form Number <0> in package IGESDraw)#");
    py::class_<IGESDraw_SpecificModule ,opencascade::handle<IGESDraw_SpecificModule>  , IGESData_SpecificModule >(m,"IGESDraw_SpecificModule",R"#(Defines Services attached to IGES Entities : Dump & OwnCorrect, for IGESDrawDefines Services attached to IGES Entities : Dump & OwnCorrect, for IGESDrawDefines Services attached to IGES Entities : Dump & OwnCorrect, for IGESDraw)#");
    py::class_<IGESDraw_ToolPerspectiveView ,std::unique_ptr<IGESDraw_ToolPerspectiveView>  >(m,"IGESDraw_ToolPerspectiveView",R"#(Tool to work on a PerspectiveView. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDraw_GeneralModule ,opencascade::handle<IGESDraw_GeneralModule>  , IGESData_GeneralModule >(m,"IGESDraw_GeneralModule",R"#(Definition of General Services for IGESDraw (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESDraw (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESDraw (specific part) This Services comprise : Shared & Implied Lists, Copy, Check)#");
    py::class_<IGESDraw_ToolLabelDisplay ,std::unique_ptr<IGESDraw_ToolLabelDisplay>  >(m,"IGESDraw_ToolLabelDisplay",R"#(Tool to work on a LabelDisplay. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDraw_ToolNetworkSubfigureDef ,std::unique_ptr<IGESDraw_ToolNetworkSubfigureDef>  >(m,"IGESDraw_ToolNetworkSubfigureDef",R"#(Tool to work on a NetworkSubfigureDef. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDraw_Drawing ,opencascade::handle<IGESDraw_Drawing>  , IGESData_IGESEntity >(m,"IGESDraw_Drawing",R"#(defines IGESDrawing, Type <404> Form <0> in package IGESDrawdefines IGESDrawing, Type <404> Form <0> in package IGESDrawdefines IGESDrawing, Type <404> Form <0> in package IGESDraw)#");
    py::class_<IGESDraw_PerspectiveView ,opencascade::handle<IGESDraw_PerspectiveView>  , IGESData_ViewKindEntity >(m,"IGESDraw_PerspectiveView",R"#(defines IGESPerspectiveView, Type <410> Form <1> in package IGESDrawdefines IGESPerspectiveView, Type <410> Form <1> in package IGESDrawdefines IGESPerspectiveView, Type <410> Form <1> in package IGESDraw)#");
    py::class_<IGESDraw_Planar ,opencascade::handle<IGESDraw_Planar>  , IGESData_IGESEntity >(m,"IGESDraw_Planar",R"#(defines IGESPlanar, Type <402> Form <16> in package IGESDrawdefines IGESPlanar, Type <402> Form <16> in package IGESDrawdefines IGESPlanar, Type <402> Form <16> in package IGESDraw)#");
    py::class_<IGESDraw_ToolConnectPoint ,std::unique_ptr<IGESDraw_ToolConnectPoint>  >(m,"IGESDraw_ToolConnectPoint",R"#(Tool to work on a ConnectPoint. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDraw_ToolDrawingWithRotation ,std::unique_ptr<IGESDraw_ToolDrawingWithRotation>  >(m,"IGESDraw_ToolDrawingWithRotation",R"#(Tool to work on a DrawingWithRotation. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDraw_ToolViewsVisibleWithAttr ,std::unique_ptr<IGESDraw_ToolViewsVisibleWithAttr>  >(m,"IGESDraw_ToolViewsVisibleWithAttr",R"#(Tool to work on a ViewsVisibleWithAttr. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDraw_LabelDisplay ,opencascade::handle<IGESDraw_LabelDisplay>  , IGESData_LabelDisplayEntity >(m,"IGESDraw_LabelDisplay",R"#(defines IGESLabelDisplay, Type <402> Form <5> in package IGESDrawdefines IGESLabelDisplay, Type <402> Form <5> in package IGESDrawdefines IGESLabelDisplay, Type <402> Form <5> in package IGESDraw)#");
    py::class_<IGESDraw ,std::unique_ptr<IGESDraw>  >(m,"IGESDraw",R"#(This package contains the group of classes necessary for Structure Entities implied in Drawings and Structured Graphics (Sets for drawing, Drawings and Views).)#");
    py::class_<IGESDraw_DrawingWithRotation ,opencascade::handle<IGESDraw_DrawingWithRotation>  , IGESData_IGESEntity >(m,"IGESDraw_DrawingWithRotation",R"#(defines IGESDrawingWithRotation, Type <404> Form <1> in package IGESDrawdefines IGESDrawingWithRotation, Type <404> Form <1> in package IGESDrawdefines IGESDrawingWithRotation, Type <404> Form <1> in package IGESDraw)#");
    py::class_<IGESDraw_CircArraySubfigure ,opencascade::handle<IGESDraw_CircArraySubfigure>  , IGESData_IGESEntity >(m,"IGESDraw_CircArraySubfigure",R"#(Defines IGES Circular Array Subfigure Instance Entity, Type <414> Form Number <0> in package IGESDrawDefines IGES Circular Array Subfigure Instance Entity, Type <414> Form Number <0> in package IGESDrawDefines IGES Circular Array Subfigure Instance Entity, Type <414> Form Number <0> in package IGESDraw)#");
    py::class_<IGESDraw_NetworkSubfigure ,opencascade::handle<IGESDraw_NetworkSubfigure>  , IGESData_IGESEntity >(m,"IGESDraw_NetworkSubfigure",R"#(defines IGES Network Subfigure Instance Entity, Type <420> Form Number <0> in package IGESDrawdefines IGES Network Subfigure Instance Entity, Type <420> Form Number <0> in package IGESDrawdefines IGES Network Subfigure Instance Entity, Type <420> Form Number <0> in package IGESDraw)#");
    py::class_<IGESDraw_ToolPlanar ,std::unique_ptr<IGESDraw_ToolPlanar>  >(m,"IGESDraw_ToolPlanar",R"#(Tool to work on a Planar. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDraw_ToolRectArraySubfigure ,std::unique_ptr<IGESDraw_ToolRectArraySubfigure>  >(m,"IGESDraw_ToolRectArraySubfigure",R"#(Tool to work on a RectArraySubfigure. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDraw_ReadWriteModule ,opencascade::handle<IGESDraw_ReadWriteModule>  , IGESData_ReadWriteModule >(m,"IGESDraw_ReadWriteModule",R"#(Defines Draw File Access Module for IGESDraw (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines Draw File Access Module for IGESDraw (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines Draw File Access Module for IGESDraw (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.)#");
    py::class_<IGESDraw_Protocol ,opencascade::handle<IGESDraw_Protocol>  , IGESData_Protocol >(m,"IGESDraw_Protocol",R"#(Description of Protocol for IGESDrawDescription of Protocol for IGESDrawDescription of Protocol for IGESDraw)#");
    py::class_<IGESDraw_ToolDrawing ,std::unique_ptr<IGESDraw_ToolDrawing>  >(m,"IGESDraw_ToolDrawing",R"#(Tool to work on a Drawing. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");

// pre-register typdefs
// ./opencascade/IGESDraw_HArray1OfConnectPoint.hxx
// ./opencascade/IGESDraw_ToolNetworkSubfigureDef.hxx
// ./opencascade/IGESDraw_HArray1OfViewKindEntity.hxx
// ./opencascade/IGESDraw_DrawingWithRotation.hxx
// ./opencascade/IGESDraw_ViewsVisible.hxx
// ./opencascade/IGESDraw_Drawing.hxx
// ./opencascade/IGESDraw_ViewsVisibleWithAttr.hxx
// ./opencascade/IGESDraw_ToolRectArraySubfigure.hxx
// ./opencascade/IGESDraw_ToolView.hxx
// ./opencascade/IGESDraw_Array1OfViewKindEntity.hxx
    preregister_template_NCollection_Array1<opencascade::handle<IGESData_ViewKindEntity> >(m,"IGESDraw_Array1OfViewKindEntity");  
// ./opencascade/IGESDraw_PerspectiveView.hxx
// ./opencascade/IGESDraw_View.hxx
// ./opencascade/IGESDraw_CircArraySubfigure.hxx
// ./opencascade/IGESDraw_ToolNetworkSubfigure.hxx
// ./opencascade/IGESDraw_Planar.hxx
// ./opencascade/IGESDraw_NetworkSubfigureDef.hxx
// ./opencascade/IGESDraw_Protocol.hxx
// ./opencascade/IGESDraw_ToolViewsVisible.hxx
// ./opencascade/IGESDraw_ToolConnectPoint.hxx
// ./opencascade/IGESDraw_SegmentedViewsVisible.hxx
// ./opencascade/IGESDraw_NetworkSubfigure.hxx
// ./opencascade/IGESDraw_Array1OfConnectPoint.hxx
    preregister_template_NCollection_Array1<opencascade::handle<IGESDraw_ConnectPoint> >(m,"IGESDraw_Array1OfConnectPoint");  
// ./opencascade/IGESDraw_ToolSegmentedViewsVisible.hxx
// ./opencascade/IGESDraw_ToolDrawingWithRotation.hxx
// ./opencascade/IGESDraw_ToolCircArraySubfigure.hxx
// ./opencascade/IGESDraw_ReadWriteModule.hxx
// ./opencascade/IGESDraw_RectArraySubfigure.hxx
// ./opencascade/IGESDraw_ToolViewsVisibleWithAttr.hxx
// ./opencascade/IGESDraw_ConnectPoint.hxx
// ./opencascade/IGESDraw_ToolPlanar.hxx
// ./opencascade/IGESDraw_SpecificModule.hxx
// ./opencascade/IGESDraw_LabelDisplay.hxx
// ./opencascade/IGESDraw_ToolPerspectiveView.hxx
// ./opencascade/IGESDraw_ToolDrawing.hxx
// ./opencascade/IGESDraw_GeneralModule.hxx
// ./opencascade/IGESDraw.hxx
// ./opencascade/IGESDraw_ToolLabelDisplay.hxx

};

// user-defined post-inclusion per module

// user-defined post

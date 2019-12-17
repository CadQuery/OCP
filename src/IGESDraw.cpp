
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


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
void register_IGESDraw(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESDraw"));


//Python trampoline classes

// classes


    static_cast<py::class_<IGESDraw_HArray1OfConnectPoint ,std::unique_ptr<IGESDraw_HArray1OfConnectPoint>  >>(m.attr("IGESDraw_HArray1OfConnectPoint"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESDraw_ConnectPoint> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESDraw_ConnectPoint> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const IGESDraw_Array1OfConnectPoint & (IGESDraw_HArray1OfConnectPoint::*)() const) static_cast<const IGESDraw_Array1OfConnectPoint & (IGESDraw_HArray1OfConnectPoint::*)() const>(&IGESDraw_HArray1OfConnectPoint::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESDraw_Array1OfConnectPoint & (IGESDraw_HArray1OfConnectPoint::*)() ) static_cast<IGESDraw_Array1OfConnectPoint & (IGESDraw_HArray1OfConnectPoint::*)() >(&IGESDraw_HArray1OfConnectPoint::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_HArray1OfConnectPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_HArray1OfConnectPoint::*)() const>(&IGESDraw_HArray1OfConnectPoint::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_HArray1OfConnectPoint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_HArray1OfConnectPoint::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_HArray1OfViewKindEntity ,std::unique_ptr<IGESDraw_HArray1OfViewKindEntity>  >>(m.attr("IGESDraw_HArray1OfViewKindEntity"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESData_ViewKindEntity> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESData_ViewKindEntity> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const IGESDraw_Array1OfViewKindEntity & (IGESDraw_HArray1OfViewKindEntity::*)() const) static_cast<const IGESDraw_Array1OfViewKindEntity & (IGESDraw_HArray1OfViewKindEntity::*)() const>(&IGESDraw_HArray1OfViewKindEntity::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESDraw_Array1OfViewKindEntity & (IGESDraw_HArray1OfViewKindEntity::*)() ) static_cast<IGESDraw_Array1OfViewKindEntity & (IGESDraw_HArray1OfViewKindEntity::*)() >(&IGESDraw_HArray1OfViewKindEntity::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_HArray1OfViewKindEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_HArray1OfViewKindEntity::*)() const>(&IGESDraw_HArray1OfViewKindEntity::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_HArray1OfViewKindEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_HArray1OfViewKindEntity::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_ViewsVisible ,opencascade::handle<IGESDraw_ViewsVisible>  , IGESData_ViewKindEntity >>(m.attr("IGESDraw_ViewsVisible"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_ViewsVisible::*)( const opencascade::handle<IGESDraw_HArray1OfViewKindEntity> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESDraw_ViewsVisible::*)( const opencascade::handle<IGESDraw_HArray1OfViewKindEntity> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESDraw_ViewsVisible::Init),
             R"#(This method is used to set the fields of the class ViewsVisible - allViewEntities : All View kind entities - allDisplayEntity : All entities whose display is specified)#"  , py::arg("allViewEntities"),  py::arg("allDisplayEntity"))
        .def("InitImplied",
             (void (IGESDraw_ViewsVisible::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESDraw_ViewsVisible::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESDraw_ViewsVisible::InitImplied),
             R"#(Changes only the list of Displayed Entities (Null allowed))#"  , py::arg("allDisplayEntity"))
        .def("IsSingle",
             (Standard_Boolean (IGESDraw_ViewsVisible::*)() const) static_cast<Standard_Boolean (IGESDraw_ViewsVisible::*)() const>(&IGESDraw_ViewsVisible::IsSingle),
             R"#(Returns False (for a complex view))#" )
        .def("NbViews",
             (Standard_Integer (IGESDraw_ViewsVisible::*)() const) static_cast<Standard_Integer (IGESDraw_ViewsVisible::*)() const>(&IGESDraw_ViewsVisible::NbViews),
             R"#(returns the Number of views visible)#" )
        .def("NbDisplayedEntities",
             (Standard_Integer (IGESDraw_ViewsVisible::*)() const) static_cast<Standard_Integer (IGESDraw_ViewsVisible::*)() const>(&IGESDraw_ViewsVisible::NbDisplayedEntities),
             R"#(returns the number of entities displayed in the Views or zero if no Entities specified in these Views)#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_ViewsVisible::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_ViewsVisible::*)( const Standard_Integer  ) const>(&IGESDraw_ViewsVisible::ViewItem),
             R"#(returns the Index'th ViewKindEntity Entity raises exception if Index <= 0 or Index > NbViewsVisible())#"  , py::arg("Index"))
        .def("DisplayedEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDraw_ViewsVisible::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDraw_ViewsVisible::*)( const Standard_Integer  ) const>(&IGESDraw_ViewsVisible::DisplayedEntity),
             R"#(returns the Index'th entity whose display is being specified by this associativity instance raises exception if Index <= 0 or Index > NbEntityDisplayed())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_ViewsVisible::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_ViewsVisible::*)() const>(&IGESDraw_ViewsVisible::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_ViewsVisible::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_ViewsVisible::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_ViewsVisibleWithAttr ,opencascade::handle<IGESDraw_ViewsVisibleWithAttr>  , IGESData_ViewKindEntity >>(m.attr("IGESDraw_ViewsVisibleWithAttr"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_ViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_HArray1OfViewKindEntity> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfLineFontEntity> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESGraph_HArray1OfColor> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESDraw_ViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_HArray1OfViewKindEntity> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfLineFontEntity> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESGraph_HArray1OfColor> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESDraw_ViewsVisibleWithAttr::Init),
             R"#(This method is used to set fields of the class ViewsVisibleWithAttr - allViewEntities : All View kind entities - allLineFonts : All Line Font values or zero(0) - allLineDefinitions : Line Font Definition (if Line Font value = 0) - allColorValues : All Color values - allColorDefinitions : All Color Definition Entities - allLineWeights : All Line Weight values - allDisplayEntities : Entities which are member of this associativity raises exception if Lengths of allViewEntities, allLineFonts, allColorValues,allColorDefinitions, allLineWeights are not same)#"  , py::arg("allViewEntities"),  py::arg("allLineFonts"),  py::arg("allLineDefinitions"),  py::arg("allColorValues"),  py::arg("allColorDefinitions"),  py::arg("allLineWeights"),  py::arg("allDisplayEntities"))
        .def("InitImplied",
             (void (IGESDraw_ViewsVisibleWithAttr::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESDraw_ViewsVisibleWithAttr::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESDraw_ViewsVisibleWithAttr::InitImplied),
             R"#(Changes only the list of Displayed Entities (Null allowed))#"  , py::arg("allDisplayEntity"))
        .def("IsSingle",
             (Standard_Boolean (IGESDraw_ViewsVisibleWithAttr::*)() const) static_cast<Standard_Boolean (IGESDraw_ViewsVisibleWithAttr::*)() const>(&IGESDraw_ViewsVisibleWithAttr::IsSingle),
             R"#(Returns False (for a complex view))#" )
        .def("NbViews",
             (Standard_Integer (IGESDraw_ViewsVisibleWithAttr::*)() const) static_cast<Standard_Integer (IGESDraw_ViewsVisibleWithAttr::*)() const>(&IGESDraw_ViewsVisibleWithAttr::NbViews),
             R"#(returns the number of Views containing the view visible, line font, color number, and line weight information)#" )
        .def("NbDisplayedEntities",
             (Standard_Integer (IGESDraw_ViewsVisibleWithAttr::*)() const) static_cast<Standard_Integer (IGESDraw_ViewsVisibleWithAttr::*)() const>(&IGESDraw_ViewsVisibleWithAttr::NbDisplayedEntities),
             R"#(returns the number of entities which have this particular set of display characteristic, or zero if no Entities specified)#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const>(&IGESDraw_ViewsVisibleWithAttr::ViewItem),
             R"#(returns the Index'th ViewKindEntity entity raises exception if Index <= 0 or Index > NbViews())#"  , py::arg("Index"))
        .def("LineFontValue",
             (Standard_Integer (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const>(&IGESDraw_ViewsVisibleWithAttr::LineFontValue),
             R"#(returns the Index'th Line font value or zero raises exception if Index <= 0 or Index > NbViews())#"  , py::arg("Index"))
        .def("IsFontDefinition",
             (Standard_Boolean (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const>(&IGESDraw_ViewsVisibleWithAttr::IsFontDefinition),
             R"#(returns True if the Index'th Line Font Definition is specified else returns False raises exception if Index <= 0 or Index > NbViews())#"  , py::arg("Index"))
        .def("FontDefinition",
             (opencascade::handle<IGESData_LineFontEntity> (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_LineFontEntity> (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const>(&IGESDraw_ViewsVisibleWithAttr::FontDefinition),
             R"#(returns the Index'th Line Font Definition Entity or NULL(0) raises exception if Index <= 0 or Index > NbViews())#"  , py::arg("Index"))
        .def("ColorValue",
             (Standard_Integer (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const>(&IGESDraw_ViewsVisibleWithAttr::ColorValue),
             R"#(returns the Index'th Color number value raises exception if Index <= 0 or Index > NbViews())#"  , py::arg("Index"))
        .def("IsColorDefinition",
             (Standard_Boolean (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const>(&IGESDraw_ViewsVisibleWithAttr::IsColorDefinition),
             R"#(returns True if Index'th Color Definition is specified else returns False raises exception if Index <= 0 or Index > NbViews())#"  , py::arg("Index"))
        .def("ColorDefinition",
             (opencascade::handle<IGESGraph_Color> (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESGraph_Color> (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const>(&IGESDraw_ViewsVisibleWithAttr::ColorDefinition),
             R"#(returns the Index'th Color Definition Entity raises exception if Index <= 0 or Index > NbViews())#"  , py::arg("Index"))
        .def("LineWeightItem",
             (Standard_Integer (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const>(&IGESDraw_ViewsVisibleWithAttr::LineWeightItem),
             R"#(returns the Index'th Color Line Weight raises exception if Index <= 0 or Index > NbViews())#"  , py::arg("Index"))
        .def("DisplayedEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer  ) const>(&IGESDraw_ViewsVisibleWithAttr::DisplayedEntity),
             R"#(returns Index'th Display entity with this particular characteristics raises exception if Index <= 0 or Index > NbEntities())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_ViewsVisibleWithAttr::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_ViewsVisibleWithAttr::*)() const>(&IGESDraw_ViewsVisibleWithAttr::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_ViewsVisibleWithAttr::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_ViewsVisibleWithAttr::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_ToolView ,std::unique_ptr<IGESDraw_ToolView>  >>(m.attr("IGESDraw_ToolView"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolView::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolView::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolView::OwnShared),
             R"#(Lists the Entities shared by a View <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> &  ) const>(&IGESDraw_ToolView::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolView::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> & ,  const opencascade::handle<IGESDraw_View> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> & ,  const opencascade::handle<IGESDraw_View> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolView::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolView::*)( const opencascade::handle<IGESDraw_View> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolView::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
;


    static_cast<py::class_<IGESDraw_View ,opencascade::handle<IGESDraw_View>  , IGESData_ViewKindEntity >>(m.attr("IGESDraw_View"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_View::*)( const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<IGESGeom_Plane> & ,  const opencascade::handle<IGESGeom_Plane> & ,  const opencascade::handle<IGESGeom_Plane> & ,  const opencascade::handle<IGESGeom_Plane> & ,  const opencascade::handle<IGESGeom_Plane> & ,  const opencascade::handle<IGESGeom_Plane> &  ) ) static_cast<void (IGESDraw_View::*)( const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<IGESGeom_Plane> & ,  const opencascade::handle<IGESGeom_Plane> & ,  const opencascade::handle<IGESGeom_Plane> & ,  const opencascade::handle<IGESGeom_Plane> & ,  const opencascade::handle<IGESGeom_Plane> & ,  const opencascade::handle<IGESGeom_Plane> &  ) >(&IGESDraw_View::Init),
             R"#(This method is used to set fields of the class View - aViewNum : View number - aScale : Scale factor - aLeftPlane : Left plane of view volume - aTopPlane : Top plane of view volume - aRightPlane : Right plane of view volume - aBottomPlane : Bottom plane of view volume - aBackPlane : Back plane of view volume - aFrontPlane : Front plane of view volume)#"  , py::arg("aViewNum"),  py::arg("aScale"),  py::arg("aLeftPlane"),  py::arg("aTopPlane"),  py::arg("aRightPlane"),  py::arg("aBottomPlane"),  py::arg("aBackPlane"),  py::arg("aFrontPlane"))
        .def("IsSingle",
             (Standard_Boolean (IGESDraw_View::*)() const) static_cast<Standard_Boolean (IGESDraw_View::*)() const>(&IGESDraw_View::IsSingle),
             R"#(Returns True (for a single view))#" )
        .def("NbViews",
             (Standard_Integer (IGESDraw_View::*)() const) static_cast<Standard_Integer (IGESDraw_View::*)() const>(&IGESDraw_View::NbViews),
             R"#(Returns 1 (single view))#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_View::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_View::*)( const Standard_Integer  ) const>(&IGESDraw_View::ViewItem),
             R"#(For a single view, returns <me> whatever <num>)#"  , py::arg("num"))
        .def("ViewNumber",
             (Standard_Integer (IGESDraw_View::*)() const) static_cast<Standard_Integer (IGESDraw_View::*)() const>(&IGESDraw_View::ViewNumber),
             R"#(returns integer number identifying view orientation)#" )
        .def("ScaleFactor",
             (Standard_Real (IGESDraw_View::*)() const) static_cast<Standard_Real (IGESDraw_View::*)() const>(&IGESDraw_View::ScaleFactor),
             R"#(returns the scale factor(Default = 1.0))#" )
        .def("HasLeftPlane",
             (Standard_Boolean (IGESDraw_View::*)() const) static_cast<Standard_Boolean (IGESDraw_View::*)() const>(&IGESDraw_View::HasLeftPlane),
             R"#(returns False if left side of view volume is not present)#" )
        .def("LeftPlane",
             (opencascade::handle<IGESGeom_Plane> (IGESDraw_View::*)() const) static_cast<opencascade::handle<IGESGeom_Plane> (IGESDraw_View::*)() const>(&IGESDraw_View::LeftPlane),
             R"#(returns the left side of view volume, or null handle)#" )
        .def("HasTopPlane",
             (Standard_Boolean (IGESDraw_View::*)() const) static_cast<Standard_Boolean (IGESDraw_View::*)() const>(&IGESDraw_View::HasTopPlane),
             R"#(returns False if top of view volume is not present)#" )
        .def("TopPlane",
             (opencascade::handle<IGESGeom_Plane> (IGESDraw_View::*)() const) static_cast<opencascade::handle<IGESGeom_Plane> (IGESDraw_View::*)() const>(&IGESDraw_View::TopPlane),
             R"#(returns the top of view volume, or null handle)#" )
        .def("HasRightPlane",
             (Standard_Boolean (IGESDraw_View::*)() const) static_cast<Standard_Boolean (IGESDraw_View::*)() const>(&IGESDraw_View::HasRightPlane),
             R"#(returns False if right side of view volume is not present)#" )
        .def("RightPlane",
             (opencascade::handle<IGESGeom_Plane> (IGESDraw_View::*)() const) static_cast<opencascade::handle<IGESGeom_Plane> (IGESDraw_View::*)() const>(&IGESDraw_View::RightPlane),
             R"#(returns the right side of view volume, or null handle)#" )
        .def("HasBottomPlane",
             (Standard_Boolean (IGESDraw_View::*)() const) static_cast<Standard_Boolean (IGESDraw_View::*)() const>(&IGESDraw_View::HasBottomPlane),
             R"#(returns False if bottom of view volume is not present)#" )
        .def("BottomPlane",
             (opencascade::handle<IGESGeom_Plane> (IGESDraw_View::*)() const) static_cast<opencascade::handle<IGESGeom_Plane> (IGESDraw_View::*)() const>(&IGESDraw_View::BottomPlane),
             R"#(returns the bottom of view volume, or null handle)#" )
        .def("HasBackPlane",
             (Standard_Boolean (IGESDraw_View::*)() const) static_cast<Standard_Boolean (IGESDraw_View::*)() const>(&IGESDraw_View::HasBackPlane),
             R"#(returns False if back of view volume is not present)#" )
        .def("BackPlane",
             (opencascade::handle<IGESGeom_Plane> (IGESDraw_View::*)() const) static_cast<opencascade::handle<IGESGeom_Plane> (IGESDraw_View::*)() const>(&IGESDraw_View::BackPlane),
             R"#(returns the back of view volume, or null handle)#" )
        .def("HasFrontPlane",
             (Standard_Boolean (IGESDraw_View::*)() const) static_cast<Standard_Boolean (IGESDraw_View::*)() const>(&IGESDraw_View::HasFrontPlane),
             R"#(returns False if front of view volume is not present)#" )
        .def("FrontPlane",
             (opencascade::handle<IGESGeom_Plane> (IGESDraw_View::*)() const) static_cast<opencascade::handle<IGESGeom_Plane> (IGESDraw_View::*)() const>(&IGESDraw_View::FrontPlane),
             R"#(returns the front of view volume, or null handle)#" )
        .def("ViewMatrix",
             (opencascade::handle<IGESData_TransfEntity> (IGESDraw_View::*)() const) static_cast<opencascade::handle<IGESData_TransfEntity> (IGESDraw_View::*)() const>(&IGESDraw_View::ViewMatrix),
             R"#(returns the Transformation Matrix)#" )
        .def("ModelToView",
             (gp_XYZ (IGESDraw_View::*)( const gp_XYZ &  ) const) static_cast<gp_XYZ (IGESDraw_View::*)( const gp_XYZ &  ) const>(&IGESDraw_View::ModelToView),
             R"#(returns XYZ from the Model space to the View space by applying the View Matrix)#"  , py::arg("coords"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_View::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_View::*)() const>(&IGESDraw_View::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_View::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_View::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_ToolNetworkSubfigure ,std::unique_ptr<IGESDraw_ToolNetworkSubfigure>  >>(m.attr("IGESDraw_ToolNetworkSubfigure"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolNetworkSubfigure::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolNetworkSubfigure::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolNetworkSubfigure::OwnShared),
             R"#(Lists the Entities shared by a NetworkSubfigure <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> &  ) const>(&IGESDraw_ToolNetworkSubfigure::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolNetworkSubfigure::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolNetworkSubfigure::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolNetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigure> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolNetworkSubfigure::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
;


    static_cast<py::class_<IGESDraw_NetworkSubfigureDef ,opencascade::handle<IGESDraw_NetworkSubfigureDef>  , IGESData_IGESEntity >>(m.attr("IGESDraw_NetworkSubfigureDef"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_NetworkSubfigureDef::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<IGESGraph_TextDisplayTemplate> & ,  const opencascade::handle<IGESDraw_HArray1OfConnectPoint> &  ) ) static_cast<void (IGESDraw_NetworkSubfigureDef::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<IGESGraph_TextDisplayTemplate> & ,  const opencascade::handle<IGESDraw_HArray1OfConnectPoint> &  ) >(&IGESDraw_NetworkSubfigureDef::Init),
             R"#(This method is used to set fields of the class NetworkSubfigureDef - aDepth : Depth of Subfigure (indicating the amount of nesting) - aName : Subfigure Name - allEntities : Associated subfigures Entities exclusive of primary reference designator and Control Points. - aTypeFlag : Type flag determines which Entity belongs in which design (Logical design or Physical design) - aDesignator : Designator HAsciiString and its Template - allPointEntities : Associated Connect Point Entities)#"  , py::arg("aDepth"),  py::arg("aName"),  py::arg("allEntities"),  py::arg("aTypeFlag"),  py::arg("aDesignator"),  py::arg("aTemplate"),  py::arg("allPointEntities"))
        .def("Depth",
             (Standard_Integer (IGESDraw_NetworkSubfigureDef::*)() const) static_cast<Standard_Integer (IGESDraw_NetworkSubfigureDef::*)() const>(&IGESDraw_NetworkSubfigureDef::Depth),
             R"#(returns Depth of Subfigure(indication the amount of nesting) Note : The Depth is inclusive of both Network Subfigure Definition Entity and the Ordinary Subfigure Definition Entity. Thus, the two may be nested.)#" )
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (IGESDraw_NetworkSubfigureDef::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDraw_NetworkSubfigureDef::*)() const>(&IGESDraw_NetworkSubfigureDef::Name),
             R"#(returns the Subfigure Name)#" )
        .def("NbEntities",
             (Standard_Integer (IGESDraw_NetworkSubfigureDef::*)() const) static_cast<Standard_Integer (IGESDraw_NetworkSubfigureDef::*)() const>(&IGESDraw_NetworkSubfigureDef::NbEntities),
             R"#(returns Number of Associated(child) entries in subfigure exclusive of primary reference designator and Control Points)#" )
        .def("Entity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDraw_NetworkSubfigureDef::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDraw_NetworkSubfigureDef::*)( const Standard_Integer  ) const>(&IGESDraw_NetworkSubfigureDef::Entity),
             R"#(returns the Index'th IGESEntity in subfigure exclusive of primary reference designator and Control Points raises exception if Index <=0 or Index > NbEntities())#"  , py::arg("Index"))
        .def("TypeFlag",
             (Standard_Integer (IGESDraw_NetworkSubfigureDef::*)() const) static_cast<Standard_Integer (IGESDraw_NetworkSubfigureDef::*)() const>(&IGESDraw_NetworkSubfigureDef::TypeFlag),
             R"#(return value = 0 : Not Specified = 1 : Logical design = 2 : Physical design)#" )
        .def("Designator",
             (opencascade::handle<TCollection_HAsciiString> (IGESDraw_NetworkSubfigureDef::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDraw_NetworkSubfigureDef::*)() const>(&IGESDraw_NetworkSubfigureDef::Designator),
             R"#(returns Primary Reference Designator)#" )
        .def("HasDesignatorTemplate",
             (Standard_Boolean (IGESDraw_NetworkSubfigureDef::*)() const) static_cast<Standard_Boolean (IGESDraw_NetworkSubfigureDef::*)() const>(&IGESDraw_NetworkSubfigureDef::HasDesignatorTemplate),
             R"#(returns True if Text Display Template is specified for primary designator else returns False)#" )
        .def("DesignatorTemplate",
             (opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESDraw_NetworkSubfigureDef::*)() const) static_cast<opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESDraw_NetworkSubfigureDef::*)() const>(&IGESDraw_NetworkSubfigureDef::DesignatorTemplate),
             R"#(if Text Display Template specified then return TextDisplayTemplate else return NULL Handle)#" )
        .def("NbPointEntities",
             (Standard_Integer (IGESDraw_NetworkSubfigureDef::*)() const) static_cast<Standard_Integer (IGESDraw_NetworkSubfigureDef::*)() const>(&IGESDraw_NetworkSubfigureDef::NbPointEntities),
             R"#(returns the Number Of Associated(child) Connect Point Entities)#" )
        .def("HasPointEntity",
             (Standard_Boolean (IGESDraw_NetworkSubfigureDef::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDraw_NetworkSubfigureDef::*)( const Standard_Integer  ) const>(&IGESDraw_NetworkSubfigureDef::HasPointEntity),
             R"#(returns True is Index'th Associated Connect Point Entity is present else returns False raises exception if Index is out of bound)#"  , py::arg("Index"))
        .def("PointEntity",
             (opencascade::handle<IGESDraw_ConnectPoint> (IGESDraw_NetworkSubfigureDef::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESDraw_ConnectPoint> (IGESDraw_NetworkSubfigureDef::*)( const Standard_Integer  ) const>(&IGESDraw_NetworkSubfigureDef::PointEntity),
             R"#(returns the Index'th Associated Connect Point Entity raises exception if Index <= 0 or Index > NbPointEntities())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_NetworkSubfigureDef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_NetworkSubfigureDef::*)() const>(&IGESDraw_NetworkSubfigureDef::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_NetworkSubfigureDef::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_NetworkSubfigureDef::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_ToolViewsVisible ,std::unique_ptr<IGESDraw_ToolViewsVisible>  >>(m.attr("IGESDraw_ToolViewsVisible"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolViewsVisible::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolViewsVisible::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolViewsVisible::OwnShared),
             R"#(Lists the Entities shared by a ViewsVisible <ent>, from its specific (own) parameters shared not implied (the Views))#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnImplied",
             (void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolViewsVisible::OwnImplied),
             R"#(Lists the Entities shared by a ViewsVisible <ent>, from its specific (own) implied parameters : the Displayed Entities)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> &  ) const>(&IGESDraw_ToolViewsVisible::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolViewsVisible::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  const opencascade::handle<IGESDraw_ViewsVisible> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  const opencascade::handle<IGESDraw_ViewsVisible> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolViewsVisible::OwnCopy),
             R"#(Copies Specific Parameters shared not implied, i.e. all but the Displayed Entities)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnRenew",
             (void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  const opencascade::handle<IGESDraw_ViewsVisible> & ,  const Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  const opencascade::handle<IGESDraw_ViewsVisible> & ,  const Interface_CopyTool &  ) const>(&IGESDraw_ToolViewsVisible::OwnRenew),
             R"#(Copies Specific implied Parameters : the Displayed Entities which have already been copied)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnWhenDelete",
             (void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> &  ) const) static_cast<void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> &  ) const>(&IGESDraw_ToolViewsVisible::OwnWhenDelete),
             R"#(Clears specific implied parameters, which cause looping structures; required for deletion)#"  , py::arg("ent"))
        .def("OwnDump",
             (void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolViewsVisible::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> &  ) const) static_cast<Standard_Boolean (IGESDraw_ToolViewsVisible::*)( const opencascade::handle<IGESDraw_ViewsVisible> &  ) const>(&IGESDraw_ToolViewsVisible::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a ViewsVisible (all displayed entities must refer to <ent> in directory part, else the list is cleared))#"  , py::arg("ent"))
;


    static_cast<py::class_<IGESDraw_SegmentedViewsVisible ,opencascade::handle<IGESDraw_SegmentedViewsVisible>  , IGESData_ViewKindEntity >>(m.attr("IGESDraw_SegmentedViewsVisible"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_SegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_HArray1OfViewKindEntity> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESGraph_HArray1OfColor> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfLineFontEntity> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) ) static_cast<void (IGESDraw_SegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_HArray1OfViewKindEntity> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESGraph_HArray1OfColor> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfLineFontEntity> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) >(&IGESDraw_SegmentedViewsVisible::Init),
             R"#(This method is used to set the fields of the class SegmentedViewsVisible - allViews : Pointers to View Entities - allBreakpointParameters : Parameters of breakpoints - allDisplayFlags : Display flags - allColorValues : Color Values - allColorDefinitions : Color Definitions - allLineFontValues : LineFont values - allLineFontDefinitions : LineFont Definitions - allLineWeights : Line weights raises exception if Lengths of allViews, allBreakpointParameters, allDisplayFlags, allColorValues, allColorDefinitions, allLineFontValues, allLineFontDefinitions and allLineWeights are not same.)#"  , py::arg("allViews"),  py::arg("allBreakpointParameters"),  py::arg("allDisplayFlags"),  py::arg("allColorValues"),  py::arg("allColorDefinitions"),  py::arg("allLineFontValues"),  py::arg("allLineFontDefinitions"),  py::arg("allLineWeights"))
        .def("IsSingle",
             (Standard_Boolean (IGESDraw_SegmentedViewsVisible::*)() const) static_cast<Standard_Boolean (IGESDraw_SegmentedViewsVisible::*)() const>(&IGESDraw_SegmentedViewsVisible::IsSingle),
             R"#(Returns False (for a complex view))#" )
        .def("NbViews",
             (Standard_Integer (IGESDraw_SegmentedViewsVisible::*)() const) static_cast<Standard_Integer (IGESDraw_SegmentedViewsVisible::*)() const>(&IGESDraw_SegmentedViewsVisible::NbViews),
             R"#(Returns the count of Views referenced by <me> (inherited))#" )
        .def("NbSegmentBlocks",
             (Standard_Integer (IGESDraw_SegmentedViewsVisible::*)() const) static_cast<Standard_Integer (IGESDraw_SegmentedViewsVisible::*)() const>(&IGESDraw_SegmentedViewsVisible::NbSegmentBlocks),
             R"#(returns the number of view/segment blocks in <me> Similar to NbViews but has a more general significance)#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const>(&IGESDraw_SegmentedViewsVisible::ViewItem),
             R"#(returns the View entity indicated by ViewIndex raises an exception if ViewIndex <= 0 or ViewIndex > NbSegmentBlocks())#"  , py::arg("ViewIndex"))
        .def("BreakpointParameter",
             (Standard_Real (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const>(&IGESDraw_SegmentedViewsVisible::BreakpointParameter),
             R"#(returns the parameter of the breakpoint indicated by BreakpointIndex raises an exception if BreakpointIndex <= 0 or BreakpointIndex > NbSegmentBlocks().)#"  , py::arg("BreakpointIndex"))
        .def("DisplayFlag",
             (Standard_Integer (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const>(&IGESDraw_SegmentedViewsVisible::DisplayFlag),
             R"#(returns the Display flag indicated by FlagIndex raises an exception if FlagIndex <= 0 or FlagIndex > NbSegmentBlocks().)#"  , py::arg("FlagIndex"))
        .def("IsColorDefinition",
             (Standard_Boolean (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const>(&IGESDraw_SegmentedViewsVisible::IsColorDefinition),
             R"#(returns True if the ColorIndex'th value of the "theColorDefinitions" field of <me> is a pointer raises an exception if ColorIndex <= 0 or ColorIndex > NbSegmentBlocks().)#"  , py::arg("ColorIndex"))
        .def("ColorValue",
             (Standard_Integer (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const>(&IGESDraw_SegmentedViewsVisible::ColorValue),
             R"#(returns the Color value indicated by ColorIndex raises an exception if ColorIndex <= 0 or ColorIndex > NbSegmentBlocks().)#"  , py::arg("ColorIndex"))
        .def("ColorDefinition",
             (opencascade::handle<IGESGraph_Color> (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESGraph_Color> (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const>(&IGESDraw_SegmentedViewsVisible::ColorDefinition),
             R"#(returns the Color definition entity indicated by ColorIndex raises an exception if ColorIndex <= 0 or ColorIndex > NbSegmentBlocks().)#"  , py::arg("ColorIndex"))
        .def("IsFontDefinition",
             (Standard_Boolean (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const>(&IGESDraw_SegmentedViewsVisible::IsFontDefinition),
             R"#(returns True if the FontIndex'th value of the "theLineFontDefinitions" field of <me> is a pointer raises an exception if FontIndex <= 0 or FontIndex > NbSegmentBlocks().)#"  , py::arg("FontIndex"))
        .def("LineFontValue",
             (Standard_Integer (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const>(&IGESDraw_SegmentedViewsVisible::LineFontValue),
             R"#(returns the LineFont value indicated by FontIndex raises an exception if FontIndex <= 0 or FontIndex > NbSegmentBlocks().)#"  , py::arg("FontIndex"))
        .def("LineFontDefinition",
             (opencascade::handle<IGESData_LineFontEntity> (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_LineFontEntity> (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const>(&IGESDraw_SegmentedViewsVisible::LineFontDefinition),
             R"#(returns the LineFont definition entity indicated by FontIndex raises an exception if FontIndex <= 0 or FontIndex > NbSegmentBlocks().)#"  , py::arg("FontIndex"))
        .def("LineWeightItem",
             (Standard_Integer (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer  ) const>(&IGESDraw_SegmentedViewsVisible::LineWeightItem),
             R"#(returns the LineWeight value indicated by WeightIndex raises an exception if WeightIndex <= 0 or WeightIndex > NbSegmentBlocks().)#"  , py::arg("WeightIndex"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_SegmentedViewsVisible::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_SegmentedViewsVisible::*)() const>(&IGESDraw_SegmentedViewsVisible::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_SegmentedViewsVisible::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_SegmentedViewsVisible::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_ToolSegmentedViewsVisible ,std::unique_ptr<IGESDraw_ToolSegmentedViewsVisible>  >>(m.attr("IGESDraw_ToolSegmentedViewsVisible"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolSegmentedViewsVisible::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolSegmentedViewsVisible::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolSegmentedViewsVisible::OwnShared),
             R"#(Lists the Entities shared by a SegmentedViewsVisible <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> &  ) const>(&IGESDraw_ToolSegmentedViewsVisible::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolSegmentedViewsVisible::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolSegmentedViewsVisible::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolSegmentedViewsVisible::*)( const opencascade::handle<IGESDraw_SegmentedViewsVisible> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolSegmentedViewsVisible::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
;


    static_cast<py::class_<IGESDraw_ToolCircArraySubfigure ,std::unique_ptr<IGESDraw_ToolCircArraySubfigure>  >>(m.attr("IGESDraw_ToolCircArraySubfigure"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolCircArraySubfigure::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolCircArraySubfigure::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolCircArraySubfigure::OwnShared),
             R"#(Lists the Entities shared by a CircArraySubfigure <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> &  ) const>(&IGESDraw_ToolCircArraySubfigure::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolCircArraySubfigure::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolCircArraySubfigure::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolCircArraySubfigure::*)( const opencascade::handle<IGESDraw_CircArraySubfigure> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolCircArraySubfigure::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
;


    static_cast<py::class_<IGESDraw_RectArraySubfigure ,opencascade::handle<IGESDraw_RectArraySubfigure>  , IGESData_IGESEntity >>(m.attr("IGESDraw_RectArraySubfigure"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_RectArraySubfigure::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Real ,  const gp_XYZ & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) ) static_cast<void (IGESDraw_RectArraySubfigure::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Real ,  const gp_XYZ & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) >(&IGESDraw_RectArraySubfigure::Init),
             R"#(This method is used to set the fields of the class RectArraySubfigure - aBase : a base entity which is replicated - aScale : Scale Factor - aCorner : lower left hand corner for the entire array - nbCols : Number of columns of the array - nbRows : Number of rows of the array - hDisp : Column separations - vtDisp : Row separation - rotationAngle : Rotation angle specified in radians - allDont : DO-DON'T flag to control which portion to display - allNumPos : List of positions to be or not to be displayed)#"  , py::arg("aBase"),  py::arg("aScale"),  py::arg("aCorner"),  py::arg("nbCols"),  py::arg("nbRows"),  py::arg("hDisp"),  py::arg("vtDisp"),  py::arg("rotationAngle"),  py::arg("doDont"),  py::arg("allNumPos"))
        .def("BaseEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDraw_RectArraySubfigure::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::BaseEntity),
             R"#(returns the base entity, copies of which are produced)#" )
        .def("ScaleFactor",
             (Standard_Real (IGESDraw_RectArraySubfigure::*)() const) static_cast<Standard_Real (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::ScaleFactor),
             R"#(returns the scale factor)#" )
        .def("LowerLeftCorner",
             (gp_Pnt (IGESDraw_RectArraySubfigure::*)() const) static_cast<gp_Pnt (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::LowerLeftCorner),
             R"#(returns coordinates of lower left hand corner for the entire array)#" )
        .def("TransformedLowerLeftCorner",
             (gp_Pnt (IGESDraw_RectArraySubfigure::*)() const) static_cast<gp_Pnt (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::TransformedLowerLeftCorner),
             R"#(returns Transformed coordinates of lower left corner for the array)#" )
        .def("NbColumns",
             (Standard_Integer (IGESDraw_RectArraySubfigure::*)() const) static_cast<Standard_Integer (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::NbColumns),
             R"#(returns number of columns in the array)#" )
        .def("NbRows",
             (Standard_Integer (IGESDraw_RectArraySubfigure::*)() const) static_cast<Standard_Integer (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::NbRows),
             R"#(returns number of rows in the array)#" )
        .def("ColumnSeparation",
             (Standard_Real (IGESDraw_RectArraySubfigure::*)() const) static_cast<Standard_Real (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::ColumnSeparation),
             R"#(returns horizontal distance between columns)#" )
        .def("RowSeparation",
             (Standard_Real (IGESDraw_RectArraySubfigure::*)() const) static_cast<Standard_Real (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::RowSeparation),
             R"#(returns vertical distance between rows)#" )
        .def("RotationAngle",
             (Standard_Real (IGESDraw_RectArraySubfigure::*)() const) static_cast<Standard_Real (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::RotationAngle),
             R"#(returns rotation angle in radians)#" )
        .def("DisplayFlag",
             (Standard_Boolean (IGESDraw_RectArraySubfigure::*)() const) static_cast<Standard_Boolean (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::DisplayFlag),
             R"#(returns True if (ListCount = 0) i.e., all elements to be displayed)#" )
        .def("ListCount",
             (Standard_Integer (IGESDraw_RectArraySubfigure::*)() const) static_cast<Standard_Integer (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::ListCount),
             R"#(returns 0 if all replicated entities to be displayed)#" )
        .def("DoDontFlag",
             (Standard_Boolean (IGESDraw_RectArraySubfigure::*)() const) static_cast<Standard_Boolean (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::DoDontFlag),
             R"#(returns 0 if half or fewer of the elements of the array are defined 1 if half or more of the elements are defined)#" )
        .def("PositionNum",
             (Standard_Boolean (IGESDraw_RectArraySubfigure::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDraw_RectArraySubfigure::*)( const Standard_Integer  ) const>(&IGESDraw_RectArraySubfigure::PositionNum),
             R"#(returns whether Index is to be processed (DO) or not to be processed(DON'T) if (ListCount = 0) return theDoDontFlag)#"  , py::arg("Index"))
        .def("ListPosition",
             (Standard_Integer (IGESDraw_RectArraySubfigure::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDraw_RectArraySubfigure::*)( const Standard_Integer  ) const>(&IGESDraw_RectArraySubfigure::ListPosition),
             R"#(returns the Index'th value position raises exception if Index <= 0 or Index > ListCount())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_RectArraySubfigure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_RectArraySubfigure::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_RectArraySubfigure::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_ConnectPoint ,opencascade::handle<IGESDraw_ConnectPoint>  , IGESData_IGESEntity >>(m.attr("IGESDraw_ConnectPoint"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_ConnectPoint::*)( const gp_XYZ & ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<IGESGraph_TextDisplayTemplate> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<IGESGraph_TextDisplayTemplate> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESDraw_ConnectPoint::*)( const gp_XYZ & ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<IGESGraph_TextDisplayTemplate> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<IGESGraph_TextDisplayTemplate> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESDraw_ConnectPoint::Init),
             R"#(This method is used to set the fields of the class ConnectPoint - aPoint : A Coordinate point - aDisplaySymbol : Display symbol Geometry - aTypeFlag : Type of the connection - aFunctionFlag : Function flag for the connection - aFunctionIdentifier : Connection Point Function Identifier - anIdentifierTemplate : Connection Point Function Template - aFunctionName : Connection Point Function Name - aFunctionTemplate : Connection Point Function Template - aPointIdentifier : Unique Connect Point Identifier - aFunctionCode : Connect Point Function Code - aSwapFlag : Connect Point Swap Flag - anOwnerSubfigure : Pointer to the "Owner" Entity)#"  , py::arg("aPoint"),  py::arg("aDisplaySymbol"),  py::arg("aTypeFlag"),  py::arg("aFunctionFlag"),  py::arg("aFunctionIdentifier"),  py::arg("anIdentifierTemplate"),  py::arg("aFunctionName"),  py::arg("aFunctionTemplate"),  py::arg("aPointIdentifier"),  py::arg("aFunctionCode"),  py::arg("aSwapFlag"),  py::arg("anOwnerSubfigure"))
        .def("Point",
             (gp_Pnt (IGESDraw_ConnectPoint::*)() const) static_cast<gp_Pnt (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::Point),
             R"#(returns the coordinate of the connection point)#" )
        .def("TransformedPoint",
             (gp_Pnt (IGESDraw_ConnectPoint::*)() const) static_cast<gp_Pnt (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::TransformedPoint),
             R"#(returns the Transformed coordinate of the connection point)#" )
        .def("HasDisplaySymbol",
             (Standard_Boolean (IGESDraw_ConnectPoint::*)() const) static_cast<Standard_Boolean (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::HasDisplaySymbol),
             R"#(returns True if Display symbol is specified else returns False)#" )
        .def("DisplaySymbol",
             (opencascade::handle<IGESData_IGESEntity> (IGESDraw_ConnectPoint::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::DisplaySymbol),
             R"#(if display symbol specified returns display symbol geometric entity else returns NULL Handle)#" )
        .def("TypeFlag",
             (Standard_Integer (IGESDraw_ConnectPoint::*)() const) static_cast<Standard_Integer (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::TypeFlag),
             R"#(return value specifies a particular type of connection : Type Flag = 0 : Not Specified(default) 1 : Nonspecific logical point of connection 2 : Nonspecific physical point of connection 101 : Logical component pin 102 : Logical part connector 103 : Logical offpage connector 104 : Logical global signal connector 201 : Physical PWA surface mount pin 202 : Physical PWA blind pin 203 : Physical PWA thru-pin 5001-9999 : Implementor defined.)#" )
        .def("FunctionFlag",
             (Standard_Integer (IGESDraw_ConnectPoint::*)() const) static_cast<Standard_Integer (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::FunctionFlag),
             R"#(returns Function Code that specifies a particular function for the ECO576 connection : e.g., Function Flag = 0 : Unspecified(default) = 1 : Electrical Signal = 2 : Fluid flow Signal)#" )
        .def("FunctionIdentifier",
             (opencascade::handle<TCollection_HAsciiString> (IGESDraw_ConnectPoint::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::FunctionIdentifier),
             R"#(return HAsciiString identifying Pin Number or Nozzle Label etc.)#" )
        .def("HasIdentifierTemplate",
             (Standard_Boolean (IGESDraw_ConnectPoint::*)() const) static_cast<Standard_Boolean (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::HasIdentifierTemplate),
             R"#(returns True if Text Display Template is specified for Identifier else returns False)#" )
        .def("IdentifierTemplate",
             (opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESDraw_ConnectPoint::*)() const) static_cast<opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::IdentifierTemplate),
             R"#(if Text Display Template for the Function Identifier is defined, returns TestDisplayTemplate else returns NULL Handle)#" )
        .def("FunctionName",
             (opencascade::handle<TCollection_HAsciiString> (IGESDraw_ConnectPoint::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::FunctionName),
             R"#(returns Connection Point Function Name)#" )
        .def("HasFunctionTemplate",
             (Standard_Boolean (IGESDraw_ConnectPoint::*)() const) static_cast<Standard_Boolean (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::HasFunctionTemplate),
             R"#(returns True if Text Display Template is specified for Function Name else returns False)#" )
        .def("FunctionTemplate",
             (opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESDraw_ConnectPoint::*)() const) static_cast<opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::FunctionTemplate),
             R"#(if Text Display Template for the Function Name is defined, returns TestDisplayTemplate else returns NULL Handle)#" )
        .def("PointIdentifier",
             (Standard_Integer (IGESDraw_ConnectPoint::*)() const) static_cast<Standard_Integer (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::PointIdentifier),
             R"#(returns the Unique Connect Point Identifier)#" )
        .def("FunctionCode",
             (Standard_Integer (IGESDraw_ConnectPoint::*)() const) static_cast<Standard_Integer (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::FunctionCode),
             R"#(returns the Connect Point Function Code)#" )
        .def("SwapFlag",
             (Standard_Boolean (IGESDraw_ConnectPoint::*)() const) static_cast<Standard_Boolean (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::SwapFlag),
             R"#(return value = 0 : Connect point may be swapped(default) = 1 : Connect point may not be swapped)#" )
        .def("HasOwnerSubfigure",
             (Standard_Boolean (IGESDraw_ConnectPoint::*)() const) static_cast<Standard_Boolean (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::HasOwnerSubfigure),
             R"#(returns True if Network Subfigure Instance/Definition Entity is specified else returns False)#" )
        .def("OwnerSubfigure",
             (opencascade::handle<IGESData_IGESEntity> (IGESDraw_ConnectPoint::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::OwnerSubfigure),
             R"#(returns "owner" Network Subfigure Instance Entity, or Network Subfigure Definition Entity, or NULL Handle.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_ConnectPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_ConnectPoint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_ConnectPoint::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_SpecificModule ,opencascade::handle<IGESDraw_SpecificModule>  , IGESData_SpecificModule >>(m.attr("IGESDraw_SpecificModule"))
        .def(py::init<  >()  )
        .def("OwnDump",
             (void (IGESDraw_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESDraw)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDraw_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<Standard_Boolean (IGESDraw_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESDraw_SpecificModule::OwnCorrect),
             R"#(Performs non-ambiguous Corrections on Entities which support them (Planar))#"  , py::arg("CN"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_SpecificModule::*)() const>(&IGESDraw_SpecificModule::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_SpecificModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_SpecificModule::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_ToolPerspectiveView ,std::unique_ptr<IGESDraw_ToolPerspectiveView>  >>(m.attr("IGESDraw_ToolPerspectiveView"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolPerspectiveView::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolPerspectiveView::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolPerspectiveView::OwnShared),
             R"#(Lists the Entities shared by a PerspectiveView <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> &  ) const>(&IGESDraw_ToolPerspectiveView::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolPerspectiveView::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> & ,  const opencascade::handle<IGESDraw_PerspectiveView> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> & ,  const opencascade::handle<IGESDraw_PerspectiveView> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolPerspectiveView::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolPerspectiveView::*)( const opencascade::handle<IGESDraw_PerspectiveView> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolPerspectiveView::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
;


    static_cast<py::class_<IGESDraw_GeneralModule ,opencascade::handle<IGESDraw_GeneralModule>  , IGESData_GeneralModule >>(m.attr("IGESDraw_GeneralModule"))
        .def(py::init<  >()  )
        .def("OwnSharedCase",
             (void (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("OwnImpliedCase",
             (void (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_GeneralModule::OwnImpliedCase),
             R"#(Specific list of Entities implied by an IGESEntity <ent> (in addition to Associativities). Redefined for ViewsVisible ...)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESDraw_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESDraw_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IGESDraw_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const>(&IGESDraw_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const>(&IGESDraw_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnRenewCase",
             (void (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_CopyTool &  ) const) static_cast<void (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_CopyTool &  ) const>(&IGESDraw_GeneralModule::OwnRenewCase),
             R"#(Renews parameters which are specific of each Type of Entity : redefined for ViewsVisible ... (takes only the implied ref.s which have also been copied))#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDeleteCase",
             (void (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<void (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESDraw_GeneralModule::OwnDeleteCase),
             R"#(Clears parameters with can cause looping structures : redefined for ViewsVisible ... (clears the implied ref.s))#"  , py::arg("CN"),  py::arg("ent"))
        .def("CategoryNumber",
             (Standard_Integer (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const) static_cast<Standard_Integer (IGESDraw_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const>(&IGESDraw_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity Planar : Auxiliary Subfigures and ConnectPoint : Structure others : Drawing)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_GeneralModule::*)() const>(&IGESDraw_GeneralModule::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_GeneralModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_GeneralModule::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_ToolLabelDisplay ,std::unique_ptr<IGESDraw_ToolLabelDisplay>  >>(m.attr("IGESDraw_ToolLabelDisplay"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolLabelDisplay::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolLabelDisplay::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolLabelDisplay::OwnShared),
             R"#(Lists the Entities shared by a LabelDisplay <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> &  ) const>(&IGESDraw_ToolLabelDisplay::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolLabelDisplay::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> & ,  const opencascade::handle<IGESDraw_LabelDisplay> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> & ,  const opencascade::handle<IGESDraw_LabelDisplay> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolLabelDisplay::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolLabelDisplay::*)( const opencascade::handle<IGESDraw_LabelDisplay> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolLabelDisplay::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
;


    static_cast<py::class_<IGESDraw_ToolNetworkSubfigureDef ,std::unique_ptr<IGESDraw_ToolNetworkSubfigureDef>  >>(m.attr("IGESDraw_ToolNetworkSubfigureDef"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolNetworkSubfigureDef::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolNetworkSubfigureDef::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolNetworkSubfigureDef::OwnShared),
             R"#(Lists the Entities shared by a NetworkSubfigureDef <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> &  ) const>(&IGESDraw_ToolNetworkSubfigureDef::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolNetworkSubfigureDef::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolNetworkSubfigureDef::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolNetworkSubfigureDef::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolNetworkSubfigureDef::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
;


    static_cast<py::class_<IGESDraw_Drawing ,opencascade::handle<IGESDraw_Drawing>  , IGESData_IGESEntity >>(m.attr("IGESDraw_Drawing"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_Drawing::*)( const opencascade::handle<IGESDraw_HArray1OfViewKindEntity> & ,  const opencascade::handle<TColgp_HArray1OfXY> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESDraw_Drawing::*)( const opencascade::handle<IGESDraw_HArray1OfViewKindEntity> & ,  const opencascade::handle<TColgp_HArray1OfXY> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESDraw_Drawing::Init),
             R"#(This method is used to set the fields of the class Drawing - allViews : Pointers to DEs of View entities - allViewOrigins : Origin coordinates of transformed Views - allAnnotations : Pointers to DEs of Annotation entities raises exception if Lengths of allViews and allViewOrigins are not same.)#"  , py::arg("allViews"),  py::arg("allViewOrigins"),  py::arg("allAnnotations"))
        .def("NbViews",
             (Standard_Integer (IGESDraw_Drawing::*)() const) static_cast<Standard_Integer (IGESDraw_Drawing::*)() const>(&IGESDraw_Drawing::NbViews),
             R"#(returns the number of view pointers in <me>)#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_Drawing::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_Drawing::*)( const Standard_Integer  ) const>(&IGESDraw_Drawing::ViewItem),
             R"#(returns the ViewKindEntity indicated by ViewIndex raises an exception if ViewIndex <= 0 or ViewIndex > NbViews().)#"  , py::arg("ViewIndex"))
        .def("ViewOrigin",
             (gp_Pnt2d (IGESDraw_Drawing::*)( const Standard_Integer  ) const) static_cast<gp_Pnt2d (IGESDraw_Drawing::*)( const Standard_Integer  ) const>(&IGESDraw_Drawing::ViewOrigin),
             R"#(returns the Drawing space coordinates of the origin of the Transformed view indicated by TViewIndex raises an exception if TViewIndex <= 0 or TViewIndex > NbViews().)#"  , py::arg("TViewIndex"))
        .def("NbAnnotations",
             (Standard_Integer (IGESDraw_Drawing::*)() const) static_cast<Standard_Integer (IGESDraw_Drawing::*)() const>(&IGESDraw_Drawing::NbAnnotations),
             R"#(returns the number of Annotation entities in <me>)#" )
        .def("Annotation",
             (opencascade::handle<IGESData_IGESEntity> (IGESDraw_Drawing::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDraw_Drawing::*)( const Standard_Integer  ) const>(&IGESDraw_Drawing::Annotation),
             R"#(returns the Annotation entity in this Drawing, indicated by the AnnotationIndex raises an exception if AnnotationIndex <= 0 or AnnotationIndex > NbAnnotations().)#"  , py::arg("AnnotationIndex"))
        .def("ViewToDrawing",
             (gp_XY (IGESDraw_Drawing::*)( const Standard_Integer ,  const gp_XYZ &  ) const) static_cast<gp_XY (IGESDraw_Drawing::*)( const Standard_Integer ,  const gp_XYZ &  ) const>(&IGESDraw_Drawing::ViewToDrawing),
             R"#(None)#"  , py::arg("NumView"),  py::arg("ViewCoords"))
        .def("DrawingUnit",
             (Standard_Boolean (IGESDraw_Drawing::*)( Standard_Real &  ) const) static_cast<Standard_Boolean (IGESDraw_Drawing::*)( Standard_Real &  ) const>(&IGESDraw_Drawing::DrawingUnit),
             R"#(Returns the Drawing Unit Value if it is specified (by a specific property entity) If not specified, returns False, and val as zero : unit to consider is then the model unit in GlobalSection)#"  , py::arg("value"))
        .def("DrawingSize",
             (Standard_Boolean (IGESDraw_Drawing::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<Standard_Boolean (IGESDraw_Drawing::*)( Standard_Real & ,  Standard_Real &  ) const>(&IGESDraw_Drawing::DrawingSize),
             R"#(Returns the Drawing Size if it is specified (by a specific property entity) If not specified, returns False, and X,Y as zero : unit to consider is then the model unit in GlobalSection)#"  , py::arg("X"),  py::arg("Y"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_Drawing::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_Drawing::*)() const>(&IGESDraw_Drawing::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_Drawing::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_Drawing::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_PerspectiveView ,opencascade::handle<IGESDraw_PerspectiveView>  , IGESData_ViewKindEntity >>(m.attr("IGESDraw_PerspectiveView"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_PerspectiveView::*)( const Standard_Integer ,  const Standard_Real ,  const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ & ,  const Standard_Real ,  const gp_XY & ,  const gp_XY & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IGESDraw_PerspectiveView::*)( const Standard_Integer ,  const Standard_Real ,  const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ & ,  const Standard_Real ,  const gp_XY & ,  const gp_XY & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) >(&IGESDraw_PerspectiveView::Init),
             R"#(This method is used to set the fields of the class PerspectiveView - aViewNumber : The desired view - aScaleFactor : Scale factor - aViewNormalVector : View plane normal vector (model space) - aViewReferencePoint : View reference point (model space) - aCenterOfProjection : Center Of Projection (model space) - aViewUpVector : View up vector (model space) - aViewPlaneDistance : View plane distance (model space) - aTopLeft : Top-left point of clipping window - aBottomRight : Bottom-right point of clipping window - aDepthClip : Depth clipping indicator - aBackPlaneDistance : Distance of back clipping plane - aFrontPlaneDistance : Distance of front clipping plane)#"  , py::arg("aViewNumber"),  py::arg("aScaleFactor"),  py::arg("aViewNormalVector"),  py::arg("aViewReferencePoint"),  py::arg("aCenterOfProjection"),  py::arg("aViewUpVector"),  py::arg("aViewPlaneDistance"),  py::arg("aTopLeft"),  py::arg("aBottomRight"),  py::arg("aDepthClip"),  py::arg("aBackPlaneDistance"),  py::arg("aFrontPlaneDistance"))
        .def("IsSingle",
             (Standard_Boolean (IGESDraw_PerspectiveView::*)() const) static_cast<Standard_Boolean (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::IsSingle),
             R"#(Returns True (for a single view))#" )
        .def("NbViews",
             (Standard_Integer (IGESDraw_PerspectiveView::*)() const) static_cast<Standard_Integer (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::NbViews),
             R"#(Returns 1 (single view))#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_PerspectiveView::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_PerspectiveView::*)( const Standard_Integer  ) const>(&IGESDraw_PerspectiveView::ViewItem),
             R"#(For a single view, returns <me> whatever <num>)#"  , py::arg("num"))
        .def("ViewNumber",
             (Standard_Integer (IGESDraw_PerspectiveView::*)() const) static_cast<Standard_Integer (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::ViewNumber),
             R"#(returns the view number associated with <me>)#" )
        .def("ScaleFactor",
             (Standard_Real (IGESDraw_PerspectiveView::*)() const) static_cast<Standard_Real (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::ScaleFactor),
             R"#(returns the scale factor associated with <me>)#" )
        .def("ViewNormalVector",
             (gp_Vec (IGESDraw_PerspectiveView::*)() const) static_cast<gp_Vec (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::ViewNormalVector),
             R"#(returns the View plane normal vector (model space))#" )
        .def("ViewReferencePoint",
             (gp_Pnt (IGESDraw_PerspectiveView::*)() const) static_cast<gp_Pnt (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::ViewReferencePoint),
             R"#(returns the View reference point (model space))#" )
        .def("CenterOfProjection",
             (gp_Pnt (IGESDraw_PerspectiveView::*)() const) static_cast<gp_Pnt (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::CenterOfProjection),
             R"#(returns the Center Of Projection (model space))#" )
        .def("ViewUpVector",
             (gp_Vec (IGESDraw_PerspectiveView::*)() const) static_cast<gp_Vec (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::ViewUpVector),
             R"#(returns the View up vector (model space))#" )
        .def("ViewPlaneDistance",
             (Standard_Real (IGESDraw_PerspectiveView::*)() const) static_cast<Standard_Real (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::ViewPlaneDistance),
             R"#(returns the View plane distance (model space))#" )
        .def("TopLeft",
             (gp_Pnt2d (IGESDraw_PerspectiveView::*)() const) static_cast<gp_Pnt2d (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::TopLeft),
             R"#(returns the top left point of the clipping window)#" )
        .def("BottomRight",
             (gp_Pnt2d (IGESDraw_PerspectiveView::*)() const) static_cast<gp_Pnt2d (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::BottomRight),
             R"#(returns the bottom right point of the clipping window)#" )
        .def("DepthClip",
             (Standard_Integer (IGESDraw_PerspectiveView::*)() const) static_cast<Standard_Integer (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::DepthClip),
             R"#(returns the Depth clipping indicator 0 = No depth clipping 1 = Back clipping plane ON 2 = Front clipping plane ON 3 = Back and front clipping planes ON)#" )
        .def("BackPlaneDistance",
             (Standard_Real (IGESDraw_PerspectiveView::*)() const) static_cast<Standard_Real (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::BackPlaneDistance),
             R"#(returns the View coordinate denoting the location of the back clipping plane)#" )
        .def("FrontPlaneDistance",
             (Standard_Real (IGESDraw_PerspectiveView::*)() const) static_cast<Standard_Real (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::FrontPlaneDistance),
             R"#(returns the View coordinate denoting the location of the front clipping plane)#" )
        .def("ViewMatrix",
             (opencascade::handle<IGESData_TransfEntity> (IGESDraw_PerspectiveView::*)() const) static_cast<opencascade::handle<IGESData_TransfEntity> (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::ViewMatrix),
             R"#(returns the Transformation Matrix)#" )
        .def("ModelToView",
             (gp_XYZ (IGESDraw_PerspectiveView::*)( const gp_XYZ &  ) const) static_cast<gp_XYZ (IGESDraw_PerspectiveView::*)( const gp_XYZ &  ) const>(&IGESDraw_PerspectiveView::ModelToView),
             R"#(returns XYX from the Model space to the View space by applying the View Matrix)#"  , py::arg("coords"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_PerspectiveView::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_PerspectiveView::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_PerspectiveView::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_Planar ,opencascade::handle<IGESDraw_Planar>  , IGESData_IGESEntity >>(m.attr("IGESDraw_Planar"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_Planar::*)( const Standard_Integer ,  const opencascade::handle<IGESGeom_TransformationMatrix> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESDraw_Planar::*)( const Standard_Integer ,  const opencascade::handle<IGESGeom_TransformationMatrix> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESDraw_Planar::Init),
             R"#(This method is used to set the fields of the class Planar - nbMats : Number of Transformation matrices - aTransformationMatrix : Pointer to the Transformation matrix - allEntities : Pointers to the entities specified)#"  , py::arg("nbMats"),  py::arg("aTransformationMatrix"),  py::arg("allEntities"))
        .def("NbMatrices",
             (Standard_Integer (IGESDraw_Planar::*)() const) static_cast<Standard_Integer (IGESDraw_Planar::*)() const>(&IGESDraw_Planar::NbMatrices),
             R"#(returns the number of Transformation matrices in <me>)#" )
        .def("NbEntities",
             (Standard_Integer (IGESDraw_Planar::*)() const) static_cast<Standard_Integer (IGESDraw_Planar::*)() const>(&IGESDraw_Planar::NbEntities),
             R"#(returns the number of Entities in the plane pointed to by this associativity)#" )
        .def("IsIdentityMatrix",
             (Standard_Boolean (IGESDraw_Planar::*)() const) static_cast<Standard_Boolean (IGESDraw_Planar::*)() const>(&IGESDraw_Planar::IsIdentityMatrix),
             R"#(returns True if TransformationMatrix is Identity Matrix, i.e:- No Matrix defined.)#" )
        .def("TransformMatrix",
             (opencascade::handle<IGESGeom_TransformationMatrix> (IGESDraw_Planar::*)() const) static_cast<opencascade::handle<IGESGeom_TransformationMatrix> (IGESDraw_Planar::*)() const>(&IGESDraw_Planar::TransformMatrix),
             R"#(returns the Transformation matrix moving data from the XY plane into space or zero)#" )
        .def("Entity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDraw_Planar::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDraw_Planar::*)( const Standard_Integer  ) const>(&IGESDraw_Planar::Entity),
             R"#(returns the Entity on the specified plane, indicated by EntityIndex raises an exception if EntityIndex <= 0 or EntityIndex > NbEntities())#"  , py::arg("EntityIndex"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_Planar::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_Planar::*)() const>(&IGESDraw_Planar::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_Planar::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_Planar::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_ToolConnectPoint ,std::unique_ptr<IGESDraw_ToolConnectPoint>  >>(m.attr("IGESDraw_ToolConnectPoint"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolConnectPoint::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolConnectPoint::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolConnectPoint::OwnShared),
             R"#(Lists the Entities shared by a ConnectPoint <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> &  ) const>(&IGESDraw_ToolConnectPoint::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolConnectPoint::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> & ,  const opencascade::handle<IGESDraw_ConnectPoint> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> & ,  const opencascade::handle<IGESDraw_ConnectPoint> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolConnectPoint::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolConnectPoint::*)( const opencascade::handle<IGESDraw_ConnectPoint> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolConnectPoint::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
;


    static_cast<py::class_<IGESDraw_ToolDrawingWithRotation ,std::unique_ptr<IGESDraw_ToolDrawingWithRotation>  >>(m.attr("IGESDraw_ToolDrawingWithRotation"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolDrawingWithRotation::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolDrawingWithRotation::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolDrawingWithRotation::OwnShared),
             R"#(Lists the Entities shared by a DrawingWithRotation <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> &  ) const) static_cast<Standard_Boolean (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> &  ) const>(&IGESDraw_ToolDrawingWithRotation::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a DrawingWithRotation (Null Views are removed from list))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> &  ) const>(&IGESDraw_ToolDrawingWithRotation::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolDrawingWithRotation::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolDrawingWithRotation::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolDrawingWithRotation::*)( const opencascade::handle<IGESDraw_DrawingWithRotation> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolDrawingWithRotation::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
;


    static_cast<py::class_<IGESDraw_ToolViewsVisibleWithAttr ,std::unique_ptr<IGESDraw_ToolViewsVisibleWithAttr>  >>(m.attr("IGESDraw_ToolViewsVisibleWithAttr"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolViewsVisibleWithAttr::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolViewsVisibleWithAttr::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolViewsVisibleWithAttr::OwnShared),
             R"#(Lists the Entities shared by a ViewsVisibleWithAttr <ent>, from its specific (own) parameters shared not implied, i.e. all but the Displayed Entities)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnImplied",
             (void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolViewsVisibleWithAttr::OwnImplied),
             R"#(Lists the Entities shared by a ViewsVisible <ent>, from its specific (own) implied parameters : the Displayed Entities)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> &  ) const>(&IGESDraw_ToolViewsVisibleWithAttr::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolViewsVisibleWithAttr::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolViewsVisibleWithAttr::OwnCopy),
             R"#(Copies Specific Parameters shared not implied, i.e. all but the Displayed Entities)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnRenew",
             (void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  const Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  const Interface_CopyTool &  ) const>(&IGESDraw_ToolViewsVisibleWithAttr::OwnRenew),
             R"#(Copies Specific implied Parameters : the Displayed Entities which have already been copied)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnWhenDelete",
             (void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> &  ) const) static_cast<void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> &  ) const>(&IGESDraw_ToolViewsVisibleWithAttr::OwnWhenDelete),
             R"#(Clears specific implied parameters, which cause looping structures; required for deletion)#"  , py::arg("ent"))
        .def("OwnDump",
             (void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolViewsVisibleWithAttr::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> &  ) const) static_cast<Standard_Boolean (IGESDraw_ToolViewsVisibleWithAttr::*)( const opencascade::handle<IGESDraw_ViewsVisibleWithAttr> &  ) const>(&IGESDraw_ToolViewsVisibleWithAttr::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a ViewsVisibleWithAttr (all displayed entities must refer to <ent> in directory part, else the list is cleared))#"  , py::arg("ent"))
;


    static_cast<py::class_<IGESDraw_LabelDisplay ,opencascade::handle<IGESDraw_LabelDisplay>  , IGESData_LabelDisplayEntity >>(m.attr("IGESDraw_LabelDisplay"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_LabelDisplay::*)( const opencascade::handle<IGESDraw_HArray1OfViewKindEntity> & ,  const opencascade::handle<TColgp_HArray1OfXYZ> & ,  const opencascade::handle<IGESDimen_HArray1OfLeaderArrow> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESDraw_LabelDisplay::*)( const opencascade::handle<IGESDraw_HArray1OfViewKindEntity> & ,  const opencascade::handle<TColgp_HArray1OfXYZ> & ,  const opencascade::handle<IGESDimen_HArray1OfLeaderArrow> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESDraw_LabelDisplay::Init),
             R"#(This method is used to set the fields of the class LabelDisplay - allViews : Pointers to View Entities - allTextLocations : Coordinates of text locations in the views - allLeaderEntities : Pointers to Leader Entities in the views - allLabelLevels : Entity label level numbers in the views - allDisplayedEntities : Pointers to the entities being displayed raises exception if Lengths of allViews, allTextLocations, allLeaderEntities, allLabelLevels and allDisplayedEntities are not same.)#"  , py::arg("allViews"),  py::arg("allTextLocations"),  py::arg("allLeaderEntities"),  py::arg("allLabelLevels"),  py::arg("allDisplayedEntities"))
        .def("NbLabels",
             (Standard_Integer (IGESDraw_LabelDisplay::*)() const) static_cast<Standard_Integer (IGESDraw_LabelDisplay::*)() const>(&IGESDraw_LabelDisplay::NbLabels),
             R"#(returns the number of label placements in <me>)#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_LabelDisplay::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_LabelDisplay::*)( const Standard_Integer  ) const>(&IGESDraw_LabelDisplay::ViewItem),
             R"#(returns the View entity indicated by ViewIndex raises an exception if ViewIndex <= 0 or ViewIndex > NbLabels().)#"  , py::arg("ViewIndex"))
        .def("TextLocation",
             (gp_Pnt (IGESDraw_LabelDisplay::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDraw_LabelDisplay::*)( const Standard_Integer  ) const>(&IGESDraw_LabelDisplay::TextLocation),
             R"#(returns the 3d-Point coordinates of the text location, in the view indicated by ViewIndex raises an exception if ViewIndex <= 0 or ViewIndex > NbLabels().)#"  , py::arg("ViewIndex"))
        .def("LeaderEntity",
             (opencascade::handle<IGESDimen_LeaderArrow> (IGESDraw_LabelDisplay::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESDimen_LeaderArrow> (IGESDraw_LabelDisplay::*)( const Standard_Integer  ) const>(&IGESDraw_LabelDisplay::LeaderEntity),
             R"#(returns the Leader entity in the view indicated by ViewIndex raises an exception if ViewIndex <= 0 or ViewIndex > NbLabels().)#"  , py::arg("ViewIndex"))
        .def("LabelLevel",
             (Standard_Integer (IGESDraw_LabelDisplay::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDraw_LabelDisplay::*)( const Standard_Integer  ) const>(&IGESDraw_LabelDisplay::LabelLevel),
             R"#(returns the Entity label level number in the view indicated by ViewIndex raises an exception if ViewIndex <= 0 or ViewIndex > NbLabels().)#"  , py::arg("ViewIndex"))
        .def("DisplayedEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDraw_LabelDisplay::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDraw_LabelDisplay::*)( const Standard_Integer  ) const>(&IGESDraw_LabelDisplay::DisplayedEntity),
             R"#(returns the entity indicated by EntityIndex raises an exception if EntityIndex <= 0 or EntityIndex > NbLabels().)#"  , py::arg("EntityIndex"))
        .def("TransformedTextLocation",
             (gp_Pnt (IGESDraw_LabelDisplay::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESDraw_LabelDisplay::*)( const Standard_Integer  ) const>(&IGESDraw_LabelDisplay::TransformedTextLocation),
             R"#(returns the transformed 3d-Point coordinates of the text location, in the view indicated by ViewIndex raises an exception if ViewIndex <= 0 or ViewIndex > NbLabels().)#"  , py::arg("ViewIndex"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_LabelDisplay::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_LabelDisplay::*)() const>(&IGESDraw_LabelDisplay::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_LabelDisplay::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_LabelDisplay::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<IGESDraw ,std::unique_ptr<IGESDraw>>(m,"IGESDraw");

    static_cast<py::class_<IGESDraw ,std::unique_ptr<IGESDraw>  >>(m.attr("IGESDraw"))
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&IGESDraw::Init),
                    R"#(Prepares dynamic data (Protocol, Modules) for this package)#" )
        .def_static("Protocol_s",
                    (opencascade::handle<IGESDraw_Protocol> (*)() ) static_cast<opencascade::handle<IGESDraw_Protocol> (*)() >(&IGESDraw::Protocol),
                    R"#(Returns the Protocol for this Package)#" )
;


    static_cast<py::class_<IGESDraw_DrawingWithRotation ,opencascade::handle<IGESDraw_DrawingWithRotation>  , IGESData_IGESEntity >>(m.attr("IGESDraw_DrawingWithRotation"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_DrawingWithRotation::*)( const opencascade::handle<IGESDraw_HArray1OfViewKindEntity> & ,  const opencascade::handle<TColgp_HArray1OfXY> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESDraw_DrawingWithRotation::*)( const opencascade::handle<IGESDraw_HArray1OfViewKindEntity> & ,  const opencascade::handle<TColgp_HArray1OfXY> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESDraw_DrawingWithRotation::Init),
             R"#(This method is used to set the fields of the class DrawingWithRotation - allViews : Pointers to View entities - allViewOrigins : Origin coords of transformed views - allOrientationAngles : Orientation angles of transformed views - allAnnotations : Pointers to Annotation entities raises exception if Lengths of allViews, allViewOrigins and allOrientationAngles are not same.)#"  , py::arg("allViews"),  py::arg("allViewOrigins"),  py::arg("allOrientationAngles"),  py::arg("allAnnotations"))
        .def("NbViews",
             (Standard_Integer (IGESDraw_DrawingWithRotation::*)() const) static_cast<Standard_Integer (IGESDraw_DrawingWithRotation::*)() const>(&IGESDraw_DrawingWithRotation::NbViews),
             R"#(returns the number of view pointers in <me>)#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_DrawingWithRotation::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_DrawingWithRotation::*)( const Standard_Integer  ) const>(&IGESDraw_DrawingWithRotation::ViewItem),
             R"#(returns the View entity indicated by Index raises an exception if Index <= 0 or Index > NbViews().)#"  , py::arg("Index"))
        .def("ViewOrigin",
             (gp_Pnt2d (IGESDraw_DrawingWithRotation::*)( const Standard_Integer  ) const) static_cast<gp_Pnt2d (IGESDraw_DrawingWithRotation::*)( const Standard_Integer  ) const>(&IGESDraw_DrawingWithRotation::ViewOrigin),
             R"#(returns the Drawing space coordinates of the origin of the Transformed view indicated by Index raises an exception if Index <= 0 or Index > NbViews().)#"  , py::arg("Index"))
        .def("OrientationAngle",
             (Standard_Real (IGESDraw_DrawingWithRotation::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDraw_DrawingWithRotation::*)( const Standard_Integer  ) const>(&IGESDraw_DrawingWithRotation::OrientationAngle),
             R"#(returns the Orientation angle for the Transformed view indicated by Index raises an exception if Index <= 0 or Index > NbViews().)#"  , py::arg("Index"))
        .def("NbAnnotations",
             (Standard_Integer (IGESDraw_DrawingWithRotation::*)() const) static_cast<Standard_Integer (IGESDraw_DrawingWithRotation::*)() const>(&IGESDraw_DrawingWithRotation::NbAnnotations),
             R"#(returns the number of Annotation entities in <me>)#" )
        .def("Annotation",
             (opencascade::handle<IGESData_IGESEntity> (IGESDraw_DrawingWithRotation::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDraw_DrawingWithRotation::*)( const Standard_Integer  ) const>(&IGESDraw_DrawingWithRotation::Annotation),
             R"#(returns the Annotation entity in this Drawing, indicated by Index raises an exception if Index <= 0 or Index > NbAnnotations().)#"  , py::arg("Index"))
        .def("ViewToDrawing",
             (gp_XY (IGESDraw_DrawingWithRotation::*)( const Standard_Integer ,  const gp_XYZ &  ) const) static_cast<gp_XY (IGESDraw_DrawingWithRotation::*)( const Standard_Integer ,  const gp_XYZ &  ) const>(&IGESDraw_DrawingWithRotation::ViewToDrawing),
             R"#(None)#"  , py::arg("NumView"),  py::arg("ViewCoords"))
        .def("DrawingUnit",
             (Standard_Boolean (IGESDraw_DrawingWithRotation::*)( Standard_Real &  ) const) static_cast<Standard_Boolean (IGESDraw_DrawingWithRotation::*)( Standard_Real &  ) const>(&IGESDraw_DrawingWithRotation::DrawingUnit),
             R"#(Returns the Drawing Unit Value if it is specified (by a specific property entity) If not specified, returns False, and val as zero : unit to consider is then the model unit in GlobalSection)#"  , py::arg("value"))
        .def("DrawingSize",
             (Standard_Boolean (IGESDraw_DrawingWithRotation::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<Standard_Boolean (IGESDraw_DrawingWithRotation::*)( Standard_Real & ,  Standard_Real &  ) const>(&IGESDraw_DrawingWithRotation::DrawingSize),
             R"#(Returns the Drawing Size if it is specified (by a specific property entity) If not specified, returns False, and X,Y as zero : unit to consider is then the model unit in GlobalSection)#"  , py::arg("X"),  py::arg("Y"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_DrawingWithRotation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_DrawingWithRotation::*)() const>(&IGESDraw_DrawingWithRotation::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_DrawingWithRotation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_DrawingWithRotation::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_CircArraySubfigure ,opencascade::handle<IGESDraw_CircArraySubfigure>  , IGESData_IGESEntity >>(m.attr("IGESDraw_CircArraySubfigure"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_CircArraySubfigure::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Integer ,  const gp_XYZ & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) ) static_cast<void (IGESDraw_CircArraySubfigure::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Integer ,  const gp_XYZ & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) >(&IGESDraw_CircArraySubfigure::Init),
             R"#(This method is used to set the fields of the class CircArraySubfigure - aBase : Base entity - aNumLocs : Total number of possible instance locations - aCenter : Coordinates of Center of imaginary circle - aRadius : Radius of imaginary circle - aStAngle : Start angle in radians - aDelAngle : Delta angle in radians - aFlag : DO-DON'T flag to control which portion to display - allNumPos : All position to be or not to be processed)#"  , py::arg("aBase"),  py::arg("aNumLocs"),  py::arg("aCenter"),  py::arg("aRadius"),  py::arg("aStAngle"),  py::arg("aDelAngle"),  py::arg("aFlag"),  py::arg("allNumPos"))
        .def("BaseEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDraw_CircArraySubfigure::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDraw_CircArraySubfigure::*)() const>(&IGESDraw_CircArraySubfigure::BaseEntity),
             R"#(returns the base entity, copies of which are produced)#" )
        .def("NbLocations",
             (Standard_Integer (IGESDraw_CircArraySubfigure::*)() const) static_cast<Standard_Integer (IGESDraw_CircArraySubfigure::*)() const>(&IGESDraw_CircArraySubfigure::NbLocations),
             R"#(returns total number of possible instance locations)#" )
        .def("CenterPoint",
             (gp_Pnt (IGESDraw_CircArraySubfigure::*)() const) static_cast<gp_Pnt (IGESDraw_CircArraySubfigure::*)() const>(&IGESDraw_CircArraySubfigure::CenterPoint),
             R"#(returns the center of the imaginary circle)#" )
        .def("TransformedCenterPoint",
             (gp_Pnt (IGESDraw_CircArraySubfigure::*)() const) static_cast<gp_Pnt (IGESDraw_CircArraySubfigure::*)() const>(&IGESDraw_CircArraySubfigure::TransformedCenterPoint),
             R"#(returns the Transformed center of the imaginary circle)#" )
        .def("CircleRadius",
             (Standard_Real (IGESDraw_CircArraySubfigure::*)() const) static_cast<Standard_Real (IGESDraw_CircArraySubfigure::*)() const>(&IGESDraw_CircArraySubfigure::CircleRadius),
             R"#(returns the radius of the imaginary circle)#" )
        .def("StartAngle",
             (Standard_Real (IGESDraw_CircArraySubfigure::*)() const) static_cast<Standard_Real (IGESDraw_CircArraySubfigure::*)() const>(&IGESDraw_CircArraySubfigure::StartAngle),
             R"#(returns the start angle in radians)#" )
        .def("DeltaAngle",
             (Standard_Real (IGESDraw_CircArraySubfigure::*)() const) static_cast<Standard_Real (IGESDraw_CircArraySubfigure::*)() const>(&IGESDraw_CircArraySubfigure::DeltaAngle),
             R"#(returns the delta angle in radians)#" )
        .def("ListCount",
             (Standard_Integer (IGESDraw_CircArraySubfigure::*)() const) static_cast<Standard_Integer (IGESDraw_CircArraySubfigure::*)() const>(&IGESDraw_CircArraySubfigure::ListCount),
             R"#(returns 0 if all elements to be displayed)#" )
        .def("DisplayFlag",
             (Standard_Boolean (IGESDraw_CircArraySubfigure::*)() const) static_cast<Standard_Boolean (IGESDraw_CircArraySubfigure::*)() const>(&IGESDraw_CircArraySubfigure::DisplayFlag),
             R"#(returns True if (ListCount = 0) all elements are to be displayed)#" )
        .def("DoDontFlag",
             (Standard_Boolean (IGESDraw_CircArraySubfigure::*)() const) static_cast<Standard_Boolean (IGESDraw_CircArraySubfigure::*)() const>(&IGESDraw_CircArraySubfigure::DoDontFlag),
             R"#(returns 0 if half or fewer of the elements of the array are defined 1 if half or more of the elements are defined)#" )
        .def("PositionNum",
             (Standard_Boolean (IGESDraw_CircArraySubfigure::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDraw_CircArraySubfigure::*)( const Standard_Integer  ) const>(&IGESDraw_CircArraySubfigure::PositionNum),
             R"#(returns whether Index is to be processed (DO) or not to be processed(DON'T) if (ListCount = 0) return theDoDontFlag raises exception if Index <= 0 or Index > ListCount().)#"  , py::arg("Index"))
        .def("ListPosition",
             (Standard_Integer (IGESDraw_CircArraySubfigure::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDraw_CircArraySubfigure::*)( const Standard_Integer  ) const>(&IGESDraw_CircArraySubfigure::ListPosition),
             R"#(returns the Index'th value position raises exception if Index <= 0 or Index > ListCount().)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_CircArraySubfigure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_CircArraySubfigure::*)() const>(&IGESDraw_CircArraySubfigure::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_CircArraySubfigure::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_CircArraySubfigure::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_NetworkSubfigure ,opencascade::handle<IGESDraw_NetworkSubfigure>  , IGESData_IGESEntity >>(m.attr("IGESDraw_NetworkSubfigure"))
        .def(py::init<  >()  )
        .def("Init",
             (void (IGESDraw_NetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  const gp_XYZ & ,  const gp_XYZ & ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<IGESGraph_TextDisplayTemplate> & ,  const opencascade::handle<IGESDraw_HArray1OfConnectPoint> &  ) ) static_cast<void (IGESDraw_NetworkSubfigure::*)( const opencascade::handle<IGESDraw_NetworkSubfigureDef> & ,  const gp_XYZ & ,  const gp_XYZ & ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<IGESGraph_TextDisplayTemplate> & ,  const opencascade::handle<IGESDraw_HArray1OfConnectPoint> &  ) >(&IGESDraw_NetworkSubfigure::Init),
             R"#(This method is used to set the fields of the class NetworkSubfigure - aDefinition : Network Subfigure Definition Entity - aTranslation : Translation data relative to the model space or the definition space - aScaleFactor : Scale factors in the definition space - aTypeFlag : Type flag - aDesignator : Primary reference designator - aTemplate : Primary reference designator Text display Template Entity - allConnectPoints : Associated Connect Point Entities)#"  , py::arg("aDefinition"),  py::arg("aTranslation"),  py::arg("aScaleFactor"),  py::arg("aTypeFlag"),  py::arg("aDesignator"),  py::arg("aTemplate"),  py::arg("allConnectPoints"))
        .def("SubfigureDefinition",
             (opencascade::handle<IGESDraw_NetworkSubfigureDef> (IGESDraw_NetworkSubfigure::*)() const) static_cast<opencascade::handle<IGESDraw_NetworkSubfigureDef> (IGESDraw_NetworkSubfigure::*)() const>(&IGESDraw_NetworkSubfigure::SubfigureDefinition),
             R"#(returns Network Subfigure Definition Entity specified by this entity)#" )
        .def("Translation",
             (gp_XYZ (IGESDraw_NetworkSubfigure::*)() const) static_cast<gp_XYZ (IGESDraw_NetworkSubfigure::*)() const>(&IGESDraw_NetworkSubfigure::Translation),
             R"#(returns Translation Data relative to either model space or to the definition space of a referring entity)#" )
        .def("TransformedTranslation",
             (gp_XYZ (IGESDraw_NetworkSubfigure::*)() const) static_cast<gp_XYZ (IGESDraw_NetworkSubfigure::*)() const>(&IGESDraw_NetworkSubfigure::TransformedTranslation),
             R"#(returns the Transformed Translation Data relative to either model space or to the definition space of a referring entity)#" )
        .def("ScaleFactors",
             (gp_XYZ (IGESDraw_NetworkSubfigure::*)() const) static_cast<gp_XYZ (IGESDraw_NetworkSubfigure::*)() const>(&IGESDraw_NetworkSubfigure::ScaleFactors),
             R"#(returns Scale factor in definition space(x, y, z axes))#" )
        .def("TypeFlag",
             (Standard_Integer (IGESDraw_NetworkSubfigure::*)() const) static_cast<Standard_Integer (IGESDraw_NetworkSubfigure::*)() const>(&IGESDraw_NetworkSubfigure::TypeFlag),
             R"#(returns Type Flag which implements the distinction between Logical design and Physical design data,and is required if both are present. Type Flag = 0 : Not specified (default) = 1 : Logical = 2 : Physical)#" )
        .def("ReferenceDesignator",
             (opencascade::handle<TCollection_HAsciiString> (IGESDraw_NetworkSubfigure::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDraw_NetworkSubfigure::*)() const>(&IGESDraw_NetworkSubfigure::ReferenceDesignator),
             R"#(returns the primary reference designator)#" )
        .def("HasDesignatorTemplate",
             (Standard_Boolean (IGESDraw_NetworkSubfigure::*)() const) static_cast<Standard_Boolean (IGESDraw_NetworkSubfigure::*)() const>(&IGESDraw_NetworkSubfigure::HasDesignatorTemplate),
             R"#(returns True if Text Display Template Entity is specified, else False)#" )
        .def("DesignatorTemplate",
             (opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESDraw_NetworkSubfigure::*)() const) static_cast<opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESDraw_NetworkSubfigure::*)() const>(&IGESDraw_NetworkSubfigure::DesignatorTemplate),
             R"#(returns primary reference designator Text Display Template Entity, or null. If null, no Text Display Template Entity specified)#" )
        .def("NbConnectPoints",
             (Standard_Integer (IGESDraw_NetworkSubfigure::*)() const) static_cast<Standard_Integer (IGESDraw_NetworkSubfigure::*)() const>(&IGESDraw_NetworkSubfigure::NbConnectPoints),
             R"#(returns the number of associated Connect Point Entities)#" )
        .def("ConnectPoint",
             (opencascade::handle<IGESDraw_ConnectPoint> (IGESDraw_NetworkSubfigure::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESDraw_ConnectPoint> (IGESDraw_NetworkSubfigure::*)( const Standard_Integer  ) const>(&IGESDraw_NetworkSubfigure::ConnectPoint),
             R"#(returns the Index'th associated Connect point Entity raises exception if Index <= 0 or Index > NbConnectPoints())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_NetworkSubfigure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_NetworkSubfigure::*)() const>(&IGESDraw_NetworkSubfigure::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_NetworkSubfigure::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_NetworkSubfigure::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_ToolPlanar ,std::unique_ptr<IGESDraw_ToolPlanar>  >>(m.attr("IGESDraw_ToolPlanar"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolPlanar::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolPlanar::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolPlanar::OwnShared),
             R"#(Lists the Entities shared by a Planar <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> &  ) const) static_cast<Standard_Boolean (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> &  ) const>(&IGESDraw_ToolPlanar::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a Planar (NbMatrices forced to 1))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> &  ) const>(&IGESDraw_ToolPlanar::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolPlanar::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> & ,  const opencascade::handle<IGESDraw_Planar> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> & ,  const opencascade::handle<IGESDraw_Planar> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolPlanar::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolPlanar::*)( const opencascade::handle<IGESDraw_Planar> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolPlanar::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
;


    static_cast<py::class_<IGESDraw_ToolRectArraySubfigure ,std::unique_ptr<IGESDraw_ToolRectArraySubfigure>  >>(m.attr("IGESDraw_ToolRectArraySubfigure"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolRectArraySubfigure::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolRectArraySubfigure::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolRectArraySubfigure::OwnShared),
             R"#(Lists the Entities shared by a RectArraySubfigure <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> &  ) const>(&IGESDraw_ToolRectArraySubfigure::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolRectArraySubfigure::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolRectArraySubfigure::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolRectArraySubfigure::*)( const opencascade::handle<IGESDraw_RectArraySubfigure> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolRectArraySubfigure::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
;


    static_cast<py::class_<IGESDraw_ReadWriteModule ,opencascade::handle<IGESDraw_ReadWriteModule>  , IGESData_ReadWriteModule >>(m.attr("IGESDraw_ReadWriteModule"))
        .def(py::init<  >()  )
        .def("CaseIGES",
             (Standard_Integer (IGESDraw_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDraw_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDraw_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESDraw)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESDraw_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESDraw)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_ReadWriteModule::*)() const>(&IGESDraw_ReadWriteModule::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_ReadWriteModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_ReadWriteModule::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_Protocol ,opencascade::handle<IGESDraw_Protocol>  , IGESData_Protocol >>(m.attr("IGESDraw_Protocol"))
        .def(py::init<  >()  )
        .def("NbResources",
             (Standard_Integer (IGESDraw_Protocol::*)() const) static_cast<Standard_Integer (IGESDraw_Protocol::*)() const>(&IGESDraw_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, one (Protocol from IGESDimen))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESDraw_Protocol::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESDraw_Protocol::*)( const Standard_Integer  ) const>(&IGESDraw_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESDraw_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const) static_cast<Standard_Integer (IGESDraw_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const>(&IGESDraw_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_Protocol::*)() const>(&IGESDraw_Protocol::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_Protocol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_Protocol::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IGESDraw_ToolDrawing ,std::unique_ptr<IGESDraw_ToolDrawing>  >>(m.attr("IGESDraw_ToolDrawing"))
        .def(py::init<  >()  )
        .def("ReadOwnParams",
             (void (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDraw_ToolDrawing::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> & ,  IGESData_IGESWriter &  ) const>(&IGESDraw_ToolDrawing::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> & ,  Interface_EntityIterator &  ) const>(&IGESDraw_ToolDrawing::OwnShared),
             R"#(Lists the Entities shared by a Drawing <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> &  ) const) static_cast<Standard_Boolean (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> &  ) const>(&IGESDraw_ToolDrawing::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a Drawing (Null Views are removed from list))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> &  ) const) static_cast<IGESData_DirChecker (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> &  ) const>(&IGESDraw_ToolDrawing::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDraw_ToolDrawing::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> & ,  const opencascade::handle<IGESDraw_Drawing> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> & ,  const opencascade::handle<IGESDraw_Drawing> & ,  Interface_CopyTool &  ) const>(&IGESDraw_ToolDrawing::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDraw_ToolDrawing::*)( const opencascade::handle<IGESDraw_Drawing> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDraw_ToolDrawing::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
;

// functions
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

// operators

// register typdefs
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
    register_template_NCollection_Array1<opencascade::handle<IGESData_ViewKindEntity> >(m,"IGESDraw_Array1OfViewKindEntity");  
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
    register_template_NCollection_Array1<opencascade::handle<IGESDraw_ConnectPoint> >(m,"IGESDraw_Array1OfConnectPoint");  
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


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

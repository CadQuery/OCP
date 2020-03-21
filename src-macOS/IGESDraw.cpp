
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Pnt.hxx>
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
#include <gp_Pnt.hxx>
#include <IGESGeom_Plane.hxx>
#include <Standard_OutOfRange.hxx>
#include <IGESData_TransfEntity.hxx>
#include <gp_XYZ.hxx>
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
#include <gp_Pnt2d.hxx>
#include <gp_XYZ.hxx>
#include <gp_Vec.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <IGESData_TransfEntity.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
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
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESGraph_TextDisplayTemplate.hxx>
#include <gp_Pnt.hxx>
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
#include <IGESDraw_NetworkSubfigureDef.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESGraph_TextDisplayTemplate.hxx>
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
#include <TCollection_HAsciiString.hxx>
#include <IGESGraph_TextDisplayTemplate.hxx>
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
#include <IGESGeom_TransformationMatrix.hxx>
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
#include <gp_Pnt2d.hxx>
#include <gp_XYZ.hxx>

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
// ./opencascade/IGESDraw_Array1OfConnectPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESDraw_Array1OfViewKindEntity.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESDraw(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESDraw"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<IGESDraw , shared_ptr<IGESDraw>>(m,"IGESDraw");

    static_cast<py::class_<IGESDraw , shared_ptr<IGESDraw> >>(m.attr("IGESDraw"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_CircArraySubfigure ,opencascade::handle<IGESDraw_CircArraySubfigure> , IGESData_IGESEntity>>(m.attr("IGESDraw_CircArraySubfigure"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_CircArraySubfigure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_CircArraySubfigure::*)() const>(&IGESDraw_CircArraySubfigure::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_CircArraySubfigure::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ConnectPoint ,opencascade::handle<IGESDraw_ConnectPoint> , IGESData_IGESEntity>>(m.attr("IGESDraw_ConnectPoint"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_ConnectPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_ConnectPoint::*)() const>(&IGESDraw_ConnectPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_ConnectPoint::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_Drawing ,opencascade::handle<IGESDraw_Drawing> , IGESData_IGESEntity>>(m.attr("IGESDraw_Drawing"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_Drawing::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_Drawing::*)() const>(&IGESDraw_Drawing::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_Drawing::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_DrawingWithRotation ,opencascade::handle<IGESDraw_DrawingWithRotation> , IGESData_IGESEntity>>(m.attr("IGESDraw_DrawingWithRotation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_DrawingWithRotation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_DrawingWithRotation::*)() const>(&IGESDraw_DrawingWithRotation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_DrawingWithRotation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_GeneralModule ,opencascade::handle<IGESDraw_GeneralModule> , IGESData_GeneralModule>>(m.attr("IGESDraw_GeneralModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnSharedCase",
             (void (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const) static_cast<void (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const>(&IGESDraw_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("OwnImpliedCase",
             (void (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const) static_cast<void (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const>(&IGESDraw_GeneralModule::OwnImpliedCase),
             R"#(Specific list of Entities implied by an IGESEntity <ent> (in addition to Associativities). Redefined for ViewsVisible ...)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<IGESData_DirChecker (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESDraw_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESDraw_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESDraw_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IGESDraw_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const>(&IGESDraw_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const) static_cast<void (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const>(&IGESDraw_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnRenewCase",
             (void (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , const Interface_CopyTool & ) const) static_cast<void (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , const Interface_CopyTool & ) const>(&IGESDraw_GeneralModule::OwnRenewCase),
             R"#(Renews parameters which are specific of each Type of Entity : redefined for ViewsVisible ... (takes only the implied ref.s which have also been copied))#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDeleteCase",
             (void (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<void (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESDraw_GeneralModule::OwnDeleteCase),
             R"#(Clears parameters with can cause looping structures : redefined for ViewsVisible ... (clears the implied ref.s))#"  , py::arg("CN"),  py::arg("ent"))
        .def("CategoryNumber",
             (Standard_Integer (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const) static_cast<Standard_Integer (IGESDraw_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const>(&IGESDraw_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity Planar : Auxiliary Subfigures and ConnectPoint : Structure others : Drawing)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_GeneralModule::*)() const>(&IGESDraw_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_GeneralModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_HArray1OfConnectPoint ,opencascade::handle<IGESDraw_HArray1OfConnectPoint> , IGESDraw_Array1OfConnectPoint, Standard_Transient>>(m.attr("IGESDraw_HArray1OfConnectPoint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESDraw_ConnectPoint> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESDraw_ConnectPoint> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESDraw_Array1OfConnectPoint & (IGESDraw_HArray1OfConnectPoint::*)() const) static_cast<const IGESDraw_Array1OfConnectPoint & (IGESDraw_HArray1OfConnectPoint::*)() const>(&IGESDraw_HArray1OfConnectPoint::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESDraw_Array1OfConnectPoint & (IGESDraw_HArray1OfConnectPoint::*)() ) static_cast<IGESDraw_Array1OfConnectPoint & (IGESDraw_HArray1OfConnectPoint::*)() >(&IGESDraw_HArray1OfConnectPoint::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_HArray1OfConnectPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_HArray1OfConnectPoint::*)() const>(&IGESDraw_HArray1OfConnectPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_HArray1OfConnectPoint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_HArray1OfConnectPoint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_HArray1OfViewKindEntity ,opencascade::handle<IGESDraw_HArray1OfViewKindEntity> , IGESDraw_Array1OfViewKindEntity, Standard_Transient>>(m.attr("IGESDraw_HArray1OfViewKindEntity"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESData_ViewKindEntity> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESData_ViewKindEntity> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESDraw_Array1OfViewKindEntity & (IGESDraw_HArray1OfViewKindEntity::*)() const) static_cast<const IGESDraw_Array1OfViewKindEntity & (IGESDraw_HArray1OfViewKindEntity::*)() const>(&IGESDraw_HArray1OfViewKindEntity::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESDraw_Array1OfViewKindEntity & (IGESDraw_HArray1OfViewKindEntity::*)() ) static_cast<IGESDraw_Array1OfViewKindEntity & (IGESDraw_HArray1OfViewKindEntity::*)() >(&IGESDraw_HArray1OfViewKindEntity::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_HArray1OfViewKindEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_HArray1OfViewKindEntity::*)() const>(&IGESDraw_HArray1OfViewKindEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_HArray1OfViewKindEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDraw_HArray1OfViewKindEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_LabelDisplay ,opencascade::handle<IGESDraw_LabelDisplay> , IGESData_LabelDisplayEntity>>(m.attr("IGESDraw_LabelDisplay"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_LabelDisplay::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_LabelDisplay::*)() const>(&IGESDraw_LabelDisplay::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_LabelDisplay::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_NetworkSubfigure ,opencascade::handle<IGESDraw_NetworkSubfigure> , IGESData_IGESEntity>>(m.attr("IGESDraw_NetworkSubfigure"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_NetworkSubfigure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_NetworkSubfigure::*)() const>(&IGESDraw_NetworkSubfigure::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_NetworkSubfigure::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_NetworkSubfigureDef ,opencascade::handle<IGESDraw_NetworkSubfigureDef> , IGESData_IGESEntity>>(m.attr("IGESDraw_NetworkSubfigureDef"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_NetworkSubfigureDef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_NetworkSubfigureDef::*)() const>(&IGESDraw_NetworkSubfigureDef::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_NetworkSubfigureDef::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_PerspectiveView ,opencascade::handle<IGESDraw_PerspectiveView> , IGESData_ViewKindEntity>>(m.attr("IGESDraw_PerspectiveView"))
    // constructors
    // custom constructors
    // methods
        .def("IsSingle",
             (Standard_Boolean (IGESDraw_PerspectiveView::*)() const) static_cast<Standard_Boolean (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::IsSingle),
             R"#(Returns True (for a single view))#" )
        .def("NbViews",
             (Standard_Integer (IGESDraw_PerspectiveView::*)() const) static_cast<Standard_Integer (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::NbViews),
             R"#(Returns 1 (single view))#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_PerspectiveView::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_PerspectiveView::*)( const Standard_Integer ) const>(&IGESDraw_PerspectiveView::ViewItem),
             R"#(For a single view, returns <me> whatever <num>)#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_PerspectiveView::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_PerspectiveView::*)() const>(&IGESDraw_PerspectiveView::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_PerspectiveView::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_Planar ,opencascade::handle<IGESDraw_Planar> , IGESData_IGESEntity>>(m.attr("IGESDraw_Planar"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_Planar::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_Planar::*)() const>(&IGESDraw_Planar::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_Planar::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_Protocol ,opencascade::handle<IGESDraw_Protocol> , IGESData_Protocol>>(m.attr("IGESDraw_Protocol"))
    // constructors
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (IGESDraw_Protocol::*)() const) static_cast<Standard_Integer (IGESDraw_Protocol::*)() const>(&IGESDraw_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, one (Protocol from IGESDimen))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESDraw_Protocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESDraw_Protocol::*)( const Standard_Integer ) const>(&IGESDraw_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESDraw_Protocol::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (IGESDraw_Protocol::*)( const opencascade::handle<Standard_Type> & ) const>(&IGESDraw_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_Protocol::*)() const>(&IGESDraw_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_Protocol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ReadWriteModule ,opencascade::handle<IGESDraw_ReadWriteModule> , IGESData_ReadWriteModule>>(m.attr("IGESDraw_ReadWriteModule"))
    // constructors
    // custom constructors
    // methods
        .def("CaseIGES",
             (Standard_Integer (IGESDraw_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (IGESDraw_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESDraw_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESDraw)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESDraw_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESDraw_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESDraw_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESDraw)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDraw_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const) static_cast<void (IGESDraw_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const>(&IGESDraw_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_ReadWriteModule::*)() const>(&IGESDraw_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_ReadWriteModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_RectArraySubfigure ,opencascade::handle<IGESDraw_RectArraySubfigure> , IGESData_IGESEntity>>(m.attr("IGESDraw_RectArraySubfigure"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_RectArraySubfigure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_RectArraySubfigure::*)() const>(&IGESDraw_RectArraySubfigure::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_RectArraySubfigure::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_SegmentedViewsVisible ,opencascade::handle<IGESDraw_SegmentedViewsVisible> , IGESData_ViewKindEntity>>(m.attr("IGESDraw_SegmentedViewsVisible"))
    // constructors
    // custom constructors
    // methods
        .def("IsSingle",
             (Standard_Boolean (IGESDraw_SegmentedViewsVisible::*)() const) static_cast<Standard_Boolean (IGESDraw_SegmentedViewsVisible::*)() const>(&IGESDraw_SegmentedViewsVisible::IsSingle),
             R"#(Returns False (for a complex view))#" )
        .def("NbViews",
             (Standard_Integer (IGESDraw_SegmentedViewsVisible::*)() const) static_cast<Standard_Integer (IGESDraw_SegmentedViewsVisible::*)() const>(&IGESDraw_SegmentedViewsVisible::NbViews),
             R"#(Returns the count of Views referenced by <me> (inherited))#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_SegmentedViewsVisible::*)( const Standard_Integer ) const>(&IGESDraw_SegmentedViewsVisible::ViewItem),
             R"#(returns the View entity indicated by ViewIndex raises an exception if ViewIndex <= 0 or ViewIndex > NbSegmentBlocks())#"  , py::arg("ViewIndex"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_SegmentedViewsVisible::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_SegmentedViewsVisible::*)() const>(&IGESDraw_SegmentedViewsVisible::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_SegmentedViewsVisible::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_SpecificModule ,opencascade::handle<IGESDraw_SpecificModule> , IGESData_SpecificModule>>(m.attr("IGESDraw_SpecificModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnDump",
             (void (IGESDraw_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESDraw_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESDraw_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESDraw)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESDraw_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<Standard_Boolean (IGESDraw_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESDraw_SpecificModule::OwnCorrect),
             R"#(Performs non-ambiguous Corrections on Entities which support them (Planar))#"  , py::arg("CN"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_SpecificModule::*)() const>(&IGESDraw_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_SpecificModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolCircArraySubfigure , shared_ptr<IGESDraw_ToolCircArraySubfigure> >>(m.attr("IGESDraw_ToolCircArraySubfigure"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolConnectPoint , shared_ptr<IGESDraw_ToolConnectPoint> >>(m.attr("IGESDraw_ToolConnectPoint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolDrawing , shared_ptr<IGESDraw_ToolDrawing> >>(m.attr("IGESDraw_ToolDrawing"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolDrawingWithRotation , shared_ptr<IGESDraw_ToolDrawingWithRotation> >>(m.attr("IGESDraw_ToolDrawingWithRotation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolLabelDisplay , shared_ptr<IGESDraw_ToolLabelDisplay> >>(m.attr("IGESDraw_ToolLabelDisplay"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolNetworkSubfigure , shared_ptr<IGESDraw_ToolNetworkSubfigure> >>(m.attr("IGESDraw_ToolNetworkSubfigure"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolNetworkSubfigureDef , shared_ptr<IGESDraw_ToolNetworkSubfigureDef> >>(m.attr("IGESDraw_ToolNetworkSubfigureDef"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolPerspectiveView , shared_ptr<IGESDraw_ToolPerspectiveView> >>(m.attr("IGESDraw_ToolPerspectiveView"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolPlanar , shared_ptr<IGESDraw_ToolPlanar> >>(m.attr("IGESDraw_ToolPlanar"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolRectArraySubfigure , shared_ptr<IGESDraw_ToolRectArraySubfigure> >>(m.attr("IGESDraw_ToolRectArraySubfigure"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolSegmentedViewsVisible , shared_ptr<IGESDraw_ToolSegmentedViewsVisible> >>(m.attr("IGESDraw_ToolSegmentedViewsVisible"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolView , shared_ptr<IGESDraw_ToolView> >>(m.attr("IGESDraw_ToolView"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolViewsVisible , shared_ptr<IGESDraw_ToolViewsVisible> >>(m.attr("IGESDraw_ToolViewsVisible"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ToolViewsVisibleWithAttr , shared_ptr<IGESDraw_ToolViewsVisibleWithAttr> >>(m.attr("IGESDraw_ToolViewsVisibleWithAttr"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_View ,opencascade::handle<IGESDraw_View> , IGESData_ViewKindEntity>>(m.attr("IGESDraw_View"))
    // constructors
    // custom constructors
    // methods
        .def("IsSingle",
             (Standard_Boolean (IGESDraw_View::*)() const) static_cast<Standard_Boolean (IGESDraw_View::*)() const>(&IGESDraw_View::IsSingle),
             R"#(Returns True (for a single view))#" )
        .def("NbViews",
             (Standard_Integer (IGESDraw_View::*)() const) static_cast<Standard_Integer (IGESDraw_View::*)() const>(&IGESDraw_View::NbViews),
             R"#(Returns 1 (single view))#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_View::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_View::*)( const Standard_Integer ) const>(&IGESDraw_View::ViewItem),
             R"#(For a single view, returns <me> whatever <num>)#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_View::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_View::*)() const>(&IGESDraw_View::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_View::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ViewsVisible ,opencascade::handle<IGESDraw_ViewsVisible> , IGESData_ViewKindEntity>>(m.attr("IGESDraw_ViewsVisible"))
    // constructors
    // custom constructors
    // methods
        .def("IsSingle",
             (Standard_Boolean (IGESDraw_ViewsVisible::*)() const) static_cast<Standard_Boolean (IGESDraw_ViewsVisible::*)() const>(&IGESDraw_ViewsVisible::IsSingle),
             R"#(Returns False (for a complex view))#" )
        .def("NbViews",
             (Standard_Integer (IGESDraw_ViewsVisible::*)() const) static_cast<Standard_Integer (IGESDraw_ViewsVisible::*)() const>(&IGESDraw_ViewsVisible::NbViews),
             R"#(returns the Number of views visible)#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_ViewsVisible::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_ViewsVisible::*)( const Standard_Integer ) const>(&IGESDraw_ViewsVisible::ViewItem),
             R"#(returns the Index'th ViewKindEntity Entity raises exception if Index <= 0 or Index > NbViewsVisible())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_ViewsVisible::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_ViewsVisible::*)() const>(&IGESDraw_ViewsVisible::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_ViewsVisible::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESDraw_ViewsVisibleWithAttr ,opencascade::handle<IGESDraw_ViewsVisibleWithAttr> , IGESData_ViewKindEntity>>(m.attr("IGESDraw_ViewsVisibleWithAttr"))
    // constructors
    // custom constructors
    // methods
        .def("IsSingle",
             (Standard_Boolean (IGESDraw_ViewsVisibleWithAttr::*)() const) static_cast<Standard_Boolean (IGESDraw_ViewsVisibleWithAttr::*)() const>(&IGESDraw_ViewsVisibleWithAttr::IsSingle),
             R"#(Returns False (for a complex view))#" )
        .def("NbViews",
             (Standard_Integer (IGESDraw_ViewsVisibleWithAttr::*)() const) static_cast<Standard_Integer (IGESDraw_ViewsVisibleWithAttr::*)() const>(&IGESDraw_ViewsVisibleWithAttr::NbViews),
             R"#(returns the number of Views containing the view visible, line font, color number, and line weight information)#" )
        .def("ViewItem",
             (opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IGESData_ViewKindEntity> (IGESDraw_ViewsVisibleWithAttr::*)( const Standard_Integer ) const>(&IGESDraw_ViewsVisibleWithAttr::ViewItem),
             R"#(returns the Index'th ViewKindEntity entity raises exception if Index <= 0 or Index > NbViews())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDraw_ViewsVisibleWithAttr::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDraw_ViewsVisibleWithAttr::*)() const>(&IGESDraw_ViewsVisibleWithAttr::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDraw_ViewsVisibleWithAttr::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IGESDraw_CircArraySubfigure.hxx
// ./opencascade/IGESDraw_Protocol.hxx
// ./opencascade/IGESDraw.hxx
// ./opencascade/IGESDraw_LabelDisplay.hxx
// ./opencascade/IGESDraw_ViewsVisibleWithAttr.hxx
// ./opencascade/IGESDraw_View.hxx
// ./opencascade/IGESDraw_ToolViewsVisible.hxx
// ./opencascade/IGESDraw_ToolDrawing.hxx
// ./opencascade/IGESDraw_DrawingWithRotation.hxx
// ./opencascade/IGESDraw_PerspectiveView.hxx
// ./opencascade/IGESDraw_GeneralModule.hxx
// ./opencascade/IGESDraw_SpecificModule.hxx
// ./opencascade/IGESDraw_ToolNetworkSubfigure.hxx
// ./opencascade/IGESDraw_ToolNetworkSubfigureDef.hxx
// ./opencascade/IGESDraw_Array1OfConnectPoint.hxx
// ./opencascade/IGESDraw_HArray1OfConnectPoint.hxx
// ./opencascade/IGESDraw_ToolDrawingWithRotation.hxx
// ./opencascade/IGESDraw_SegmentedViewsVisible.hxx
// ./opencascade/IGESDraw_ToolSegmentedViewsVisible.hxx
// ./opencascade/IGESDraw_ToolConnectPoint.hxx
// ./opencascade/IGESDraw_ReadWriteModule.hxx
// ./opencascade/IGESDraw_ConnectPoint.hxx
// ./opencascade/IGESDraw_ToolCircArraySubfigure.hxx
// ./opencascade/IGESDraw_HArray1OfViewKindEntity.hxx
// ./opencascade/IGESDraw_ToolView.hxx
// ./opencascade/IGESDraw_Array1OfViewKindEntity.hxx
// ./opencascade/IGESDraw_ToolRectArraySubfigure.hxx
// ./opencascade/IGESDraw_ToolPerspectiveView.hxx
// ./opencascade/IGESDraw_NetworkSubfigure.hxx
// ./opencascade/IGESDraw_ToolPlanar.hxx
// ./opencascade/IGESDraw_NetworkSubfigureDef.hxx
// ./opencascade/IGESDraw_ToolLabelDisplay.hxx
// ./opencascade/IGESDraw_Planar.hxx
// ./opencascade/IGESDraw_RectArraySubfigure.hxx
// ./opencascade/IGESDraw_ToolViewsVisibleWithAttr.hxx
// ./opencascade/IGESDraw_Drawing.hxx
// ./opencascade/IGESDraw_ViewsVisible.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESDraw_ConnectPoint> >(m,"IGESDraw_Array1OfConnectPoint");
    register_template_NCollection_Array1<opencascade::handle<IGESData_ViewKindEntity> >(m,"IGESDraw_Array1OfViewKindEntity");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

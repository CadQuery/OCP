
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <XSControl_WorkSession.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TopoDS_Shape.hxx>
#include <XSControl_WorkSession.hxx>
#include <IFSelect_SessionPilot.hxx>
#include <XSControl_Vars.hxx>
#include <XSControl_Controller.hxx>
#include <XSControl_TransferReader.hxx>
#include <XSControl_TransferWriter.hxx>
#include <XSControl_WorkSession.hxx>
#include <XSControl_SelectForTransfer.hxx>
#include <XSControl_SignTransferStatus.hxx>
#include <XSControl_ConnectedShapes.hxx>
#include <XSControl_Reader.hxx>
#include <XSControl_Writer.hxx>
#include <XSControl_Functions.hxx>
#include <XSControl_FuncShape.hxx>
#include <XSControl_Utils.hxx>
#include <XSControl_Vars.hxx>
#include <XSControl_WorkSession.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Geom_Geometry.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Shape.hxx>
#include <XSControl_WorkSession.hxx>
#include <TCollection_AsciiString.hxx>
#include <XSControl_TransferReader.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <XSControl_TransferReader.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_WorkLibrary.hxx>
#include <Interface_Protocol.hxx>
#include <IFSelect_Signature.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <Transfer_ActorOfFinderProcess.hxx>
#include <XSControl_WorkSession.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Shape.hxx>
#include <Interface_CheckIterator.hxx>
#include <XSControl_Controller.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_HGraph.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Transfer_ResultFromModel.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_Graph.hxx>
#include <XSControl_Controller.hxx>
#include <TopoDS_Shape.hxx>
#include <Interface_CheckIterator.hxx>
#include <XSControl_TransferReader.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Standard_TypeMismatch.hxx>
#include <XSControl_Controller.hxx>
#include <XSControl_TransferReader.hxx>
#include <XSControl_Vars.hxx>
#include <Message_Messenger.hxx>
#include <Transfer_TransientProcess.hxx>
#include <TopoDS_Shape.hxx>

// module includes
#include <XSControl.hxx>
#include <XSControl_ConnectedShapes.hxx>
#include <XSControl_Controller.hxx>
#include <XSControl_FuncShape.hxx>
#include <XSControl_Functions.hxx>
#include <XSControl_Reader.hxx>
#include <XSControl_SelectForTransfer.hxx>
#include <XSControl_SignTransferStatus.hxx>
#include <XSControl_TransferReader.hxx>
#include <XSControl_TransferWriter.hxx>
#include <XSControl_Utils.hxx>
#include <XSControl_Vars.hxx>
#include <XSControl_WorkSession.hxx>
#include <XSControl_Writer.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XSControl(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("XSControl"));


//Python trampoline classes
    class Py_XSControl_Controller : public XSControl_Controller{
    public:
        using XSControl_Controller::XSControl_Controller;
        
        // public pure virtual
        opencascade::handle<Interface_InterfaceModel> NewModel() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Interface_InterfaceModel>,XSControl_Controller,NewModel,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<XSControl_Writer ,std::unique_ptr<XSControl_Writer>  >>(m.attr("XSControl_Writer"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_CString >()  , py::arg("norm") )
        .def(py::init< const opencascade::handle<XSControl_WorkSession> &,const Standard_Boolean >()  , py::arg("WS"),  py::arg("scratch")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("SetNorm",
             (Standard_Boolean (XSControl_Writer::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (XSControl_Writer::*)( const Standard_CString  ) >(&XSControl_Writer::SetNorm),
             R"#(Sets a specific norm to <me> Returns True if done, False if <norm> is not available)#"  , py::arg("norm"))
        .def("SetWS",
             (void (XSControl_Writer::*)( const opencascade::handle<XSControl_WorkSession> & ,  const Standard_Boolean  ) ) static_cast<void (XSControl_Writer::*)( const opencascade::handle<XSControl_WorkSession> & ,  const Standard_Boolean  ) >(&XSControl_Writer::SetWS),
             R"#(Sets a specific session to <me>)#"  , py::arg("WS"),  py::arg("scratch")=static_cast<const Standard_Boolean>(Standard_True))
        .def("WS",
             (opencascade::handle<XSControl_WorkSession> (XSControl_Writer::*)() const) static_cast<opencascade::handle<XSControl_WorkSession> (XSControl_Writer::*)() const>(&XSControl_Writer::WS),
             R"#(Returns the session used in <me>)#" )
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (XSControl_Writer::*)( const Standard_Boolean  ) ) static_cast<opencascade::handle<Interface_InterfaceModel> (XSControl_Writer::*)( const Standard_Boolean  ) >(&XSControl_Writer::Model),
             R"#(Returns the produced model. Produces a new one if not yet done or if <newone> is True This method allows for instance to edit product or header data before writing)#"  , py::arg("newone")=static_cast<const Standard_Boolean>(Standard_False))
        .def("TransferShape",
             (IFSelect_ReturnStatus (XSControl_Writer::*)( const TopoDS_Shape & ,  const Standard_Integer  ) ) static_cast<IFSelect_ReturnStatus (XSControl_Writer::*)( const TopoDS_Shape & ,  const Standard_Integer  ) >(&XSControl_Writer::TransferShape),
             R"#(Transfers a Shape according to the mode)#"  , py::arg("sh"),  py::arg("mode")=static_cast<const Standard_Integer>(0))
        .def("WriteFile",
             (IFSelect_ReturnStatus (XSControl_Writer::*)( const Standard_CString  ) ) static_cast<IFSelect_ReturnStatus (XSControl_Writer::*)( const Standard_CString  ) >(&XSControl_Writer::WriteFile),
             R"#(Writes the produced model)#"  , py::arg("filename"))
        .def("PrintStatsTransfer",
             (void (XSControl_Writer::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (XSControl_Writer::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&XSControl_Writer::PrintStatsTransfer),
             R"#(Prints Statistics about Transfer)#"  , py::arg("what"),  py::arg("mode")=static_cast<const Standard_Integer>(0))
;


    static_cast<py::class_<XSControl_Reader ,std::unique_ptr<XSControl_Reader>  >>(m.attr("XSControl_Reader"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_CString >()  , py::arg("norm") )
        .def(py::init< const opencascade::handle<XSControl_WorkSession> &,const Standard_Boolean >()  , py::arg("WS"),  py::arg("scratch")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("SetNorm",
             (Standard_Boolean (XSControl_Reader::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (XSControl_Reader::*)( const Standard_CString  ) >(&XSControl_Reader::SetNorm),
             R"#(Sets a specific norm to <me> Returns True if done, False if <norm> is not available)#"  , py::arg("norm"))
        .def("SetWS",
             (void (XSControl_Reader::*)( const opencascade::handle<XSControl_WorkSession> & ,  const Standard_Boolean  ) ) static_cast<void (XSControl_Reader::*)( const opencascade::handle<XSControl_WorkSession> & ,  const Standard_Boolean  ) >(&XSControl_Reader::SetWS),
             R"#(Sets a specific session to <me>)#"  , py::arg("WS"),  py::arg("scratch")=static_cast<const Standard_Boolean>(Standard_True))
        .def("WS",
             (opencascade::handle<XSControl_WorkSession> (XSControl_Reader::*)() const) static_cast<opencascade::handle<XSControl_WorkSession> (XSControl_Reader::*)() const>(&XSControl_Reader::WS),
             R"#(Returns the session used in <me>)#" )
        .def("ReadFile",
             (IFSelect_ReturnStatus (XSControl_Reader::*)( const Standard_CString  ) ) static_cast<IFSelect_ReturnStatus (XSControl_Reader::*)( const Standard_CString  ) >(&XSControl_Reader::ReadFile),
             R"#(Loads a file and returns the read status Zero for a Model which compies with the Controller)#"  , py::arg("filename"))
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (XSControl_Reader::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (XSControl_Reader::*)() const>(&XSControl_Reader::Model),
             R"#(Returns the model. It can then be consulted (header, product))#" )
        .def("GiveList",
             (opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_Reader::*)( const Standard_CString ,  const Standard_CString  ) ) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_Reader::*)( const Standard_CString ,  const Standard_CString  ) >(&XSControl_Reader::GiveList),
             R"#(Returns a list of entities from the IGES or STEP file according to the following rules: - if first and second are empty strings, the whole file is selected. - if first is an entity number or label, the entity referred to is selected. - if first is a list of entity numbers/labels separated by commas, the entities referred to are selected, - if first is the name of a selection in the worksession and second is not defined, the list contains the standard output for that selection. - if first is the name of a selection and second is defined, the criterion defined by second is applied to the result of the first selection. A selection is an operator which computes a list of entities from a list given in input according to its type. If no list is specified, the selection computes its list of entities from the whole model. A selection can be: - A predefined selection (xst-transferrable-mode) - A filter based on a signature A Signature is an operator which returns a string from an entity according to its type. For example: - "xst-type" (CDL) - "iges-level" - "step-type". For example, if you wanted to select only the advanced_faces in a STEP file you would use the following code: Example Reader.GiveList("xst-transferrable-roots","step-type(ADVANCED_FACE)"); Warning If the value given to second is incorrect, it will simply be ignored.)#"  , py::arg("first")=static_cast<const Standard_CString>(""),  py::arg("second")=static_cast<const Standard_CString>(""))
        .def("GiveList",
             (opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_Reader::*)( const Standard_CString ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_Reader::*)( const Standard_CString ,  const opencascade::handle<Standard_Transient> &  ) >(&XSControl_Reader::GiveList),
             R"#(Computes a List of entities from the model as follows <first> beeing a Selection, <ent> beeing an entity or a list of entities (as a HSequenceOfTransient) : the standard result of this selection applied to this list if <first> is erroneous, a null handle is returned)#"  , py::arg("first"),  py::arg("ent"))
        .def("NbRootsForTransfer",
             (Standard_Integer (XSControl_Reader::*)() ) static_cast<Standard_Integer (XSControl_Reader::*)() >(&XSControl_Reader::NbRootsForTransfer),
             R"#(Determines the list of root entities which are candidate for a transfer to a Shape, and returns the number of entities in the list)#" )
        .def("RootForTransfer",
             (opencascade::handle<Standard_Transient> (XSControl_Reader::*)( const Standard_Integer  ) ) static_cast<opencascade::handle<Standard_Transient> (XSControl_Reader::*)( const Standard_Integer  ) >(&XSControl_Reader::RootForTransfer),
             R"#(Returns an IGES or STEP root entity for translation. The entity is identified by its rank in a list.)#"  , py::arg("num")=static_cast<const Standard_Integer>(1))
        .def("TransferOneRoot",
             (Standard_Boolean (XSControl_Reader::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (XSControl_Reader::*)( const Standard_Integer  ) >(&XSControl_Reader::TransferOneRoot),
             R"#(Translates a root identified by the rank num in the model. false is returned if no shape is produced.)#"  , py::arg("num")=static_cast<const Standard_Integer>(1))
        .def("TransferOne",
             (Standard_Boolean (XSControl_Reader::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (XSControl_Reader::*)( const Standard_Integer  ) >(&XSControl_Reader::TransferOne),
             R"#(Translates an IGES or STEP entity identified by the rank num in the model. false is returned if no shape is produced.)#"  , py::arg("num"))
        .def("TransferEntity",
             (Standard_Boolean (XSControl_Reader::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Boolean (XSControl_Reader::*)( const opencascade::handle<Standard_Transient> &  ) >(&XSControl_Reader::TransferEntity),
             R"#(Translates an IGES or STEP entity in the model. true is returned if a shape is produced; otherwise, false is returned.)#"  , py::arg("start"))
        .def("TransferList",
             (Standard_Integer (XSControl_Reader::*)( const opencascade::handle<TColStd_HSequenceOfTransient> &  ) ) static_cast<Standard_Integer (XSControl_Reader::*)( const opencascade::handle<TColStd_HSequenceOfTransient> &  ) >(&XSControl_Reader::TransferList),
             R"#(Translates a list of entities. Returns the number of IGES or STEP entities that were successfully translated. The list can be produced with GiveList. Warning - This function does not clear the existing output shapes.)#"  , py::arg("list"))
        .def("TransferRoots",
             (Standard_Integer (XSControl_Reader::*)() ) static_cast<Standard_Integer (XSControl_Reader::*)() >(&XSControl_Reader::TransferRoots),
             R"#(Translates all translatable roots and returns the number of successful translations. Warning - This function clears existing output shapes first.)#" )
        .def("ClearShapes",
             (void (XSControl_Reader::*)() ) static_cast<void (XSControl_Reader::*)() >(&XSControl_Reader::ClearShapes),
             R"#(Clears the list of shapes that may have accumulated in calls to TransferOne or TransferRoot.C)#" )
        .def("NbShapes",
             (Standard_Integer (XSControl_Reader::*)() const) static_cast<Standard_Integer (XSControl_Reader::*)() const>(&XSControl_Reader::NbShapes),
             R"#(Returns the number of shapes produced by translation.)#" )
        .def("Shape",
             (TopoDS_Shape (XSControl_Reader::*)( const Standard_Integer  ) const) static_cast<TopoDS_Shape (XSControl_Reader::*)( const Standard_Integer  ) const>(&XSControl_Reader::Shape),
             R"#(Returns the shape resulting from a translation and identified by the rank num. num equals 1 by default. In other words, the first shape resulting from the translation is returned.)#"  , py::arg("num")=static_cast<const Standard_Integer>(1))
        .def("OneShape",
             (TopoDS_Shape (XSControl_Reader::*)() const) static_cast<TopoDS_Shape (XSControl_Reader::*)() const>(&XSControl_Reader::OneShape),
             R"#(Returns all of the results in a single shape which is: - a null shape if there are no results, - a shape if there is one result, - a compound containing the resulting shapes if there are more than one.)#" )
        .def("PrintCheckLoad",
             (void (XSControl_Reader::*)( const Standard_Boolean ,  const IFSelect_PrintCount  ) const) static_cast<void (XSControl_Reader::*)( const Standard_Boolean ,  const IFSelect_PrintCount  ) const>(&XSControl_Reader::PrintCheckLoad),
             R"#(Prints the check list attached to loaded data, on the Standard Trace File (starts at cout) All messages or fails only, according to <failsonly> mode = 0 : per entity, prints messages mode = 1 : per message, just gives count of entities per check mode = 2 : also gives entity numbers)#"  , py::arg("failsonly"),  py::arg("mode"))
        .def("PrintCheckTransfer",
             (void (XSControl_Reader::*)( const Standard_Boolean ,  const IFSelect_PrintCount  ) const) static_cast<void (XSControl_Reader::*)( const Standard_Boolean ,  const IFSelect_PrintCount  ) const>(&XSControl_Reader::PrintCheckTransfer),
             R"#(Displays check results for the last translation of IGES or STEP entities to Open CASCADE entities. Only fail messages are displayed if failsonly is true. All messages are displayed if failsonly is false. mode determines the contents and the order of the messages according to the terms of the IFSelect_PrintCount enumeration.)#"  , py::arg("failsonly"),  py::arg("mode"))
        .def("PrintStatsTransfer",
             (void (XSControl_Reader::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (XSControl_Reader::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&XSControl_Reader::PrintStatsTransfer),
             R"#(Displays the statistics for the last translation. what defines the kind of statistics that are displayed as follows: - 0 gives general statistics (number of translated roots, number of warnings, number of fail messages), - 1 gives root results, - 2 gives statistics for all checked entities, - 3 gives the list of translated entities, - 4 gives warning and fail messages, - 5 gives fail messages only. The use of mode depends on the value of what. If what is 0, mode is ignored. If what is 1, 2 or 3, mode defines the following: - 0 lists the numbers of IGES or STEP entities in the respective model - 1 gives the number, identifier, type and result type for each IGES or STEP entity and/or its status (fail, warning, etc.) - 2 gives maximum information for each IGES or STEP entity (i.e. checks) - 3 gives the number of entities per type of IGES or STEP entity - 4 gives the number of IGES or STEP entities per result type and/or status - 5 gives the number of pairs (IGES or STEP or result type and status) - 6 gives the number of pairs (IGES or STEP or result type and status) AND the list of entity numbers in the IGES or STEP model. If what is 4 or 5, mode defines the warning and fail messages as follows: - if mode is 0 all warnings and checks per entity are returned - if mode is 2 the list of entities per warning is returned. If mode is not set, only the list of all entities per warning is given.)#"  , py::arg("what"),  py::arg("mode")=static_cast<const Standard_Integer>(0))
        .def("GetStatsTransfer",
             (void (XSControl_Reader::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (XSControl_Reader::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&XSControl_Reader::GetStatsTransfer),
             R"#(Gives statistics about Transfer)#"  , py::arg("list"),  py::arg("nbMapped"),  py::arg("nbWithResult"),  py::arg("nbWithFail"))
;

    register_default_constructor<XSControl_FuncShape ,std::unique_ptr<XSControl_FuncShape>>(m,"XSControl_FuncShape");

    static_cast<py::class_<XSControl_FuncShape ,std::unique_ptr<XSControl_FuncShape>  >>(m.attr("XSControl_FuncShape"))
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&XSControl_FuncShape::Init),
                    R"#(Defines and loads all functions which work on shapes for XSControl (as ActFunc))#" )
        .def_static("MoreShapes_s",
                    (Standard_Integer (*)( const opencascade::handle<XSControl_WorkSession> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_CString  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<XSControl_WorkSession> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_CString  ) >(&XSControl_FuncShape::MoreShapes),
                    R"#(Analyses a name as designating Shapes from a Vars or from XSTEP transfer (last Transfer on Reading). <name> can be : "*" : all the root shapes produced by last Transfer (Read) i.e. considers roots of the TransientProcess a name : a name of a variable DRAW)#"  , py::arg("session"),  py::arg("list"),  py::arg("name"))
        .def_static("FileAndVar_s",
                    (Standard_Boolean (*)( const opencascade::handle<XSControl_WorkSession> & ,  const Standard_CString ,  const Standard_CString ,  const Standard_CString ,  TCollection_AsciiString & ,  TCollection_AsciiString &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<XSControl_WorkSession> & ,  const Standard_CString ,  const Standard_CString ,  const Standard_CString ,  TCollection_AsciiString & ,  TCollection_AsciiString &  ) >(&XSControl_FuncShape::FileAndVar),
                    R"#(Analyses given file name and variable name, with a default name for variables. Returns resulting file name and variable name plus status "file to read"(True) or "already read"(False) In the latter case, empty resfile means no file available)#"  , py::arg("session"),  py::arg("file"),  py::arg("var"),  py::arg("def"),  py::arg("resfile"),  py::arg("resvar"))
;


    static_cast<py::class_<XSControl_SignTransferStatus ,opencascade::handle<XSControl_SignTransferStatus>  , IFSelect_Signature >>(m.attr("XSControl_SignTransferStatus"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<XSControl_TransferReader> & >()  , py::arg("TR") )
        .def("SetReader",
             (void (XSControl_SignTransferStatus::*)( const opencascade::handle<XSControl_TransferReader> &  ) ) static_cast<void (XSControl_SignTransferStatus::*)( const opencascade::handle<XSControl_TransferReader> &  ) >(&XSControl_SignTransferStatus::SetReader),
             R"#(Sets a TransferReader to work)#"  , py::arg("TR"))
        .def("SetMap",
             (void (XSControl_SignTransferStatus::*)( const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<void (XSControl_SignTransferStatus::*)( const opencascade::handle<Transfer_TransientProcess> &  ) >(&XSControl_SignTransferStatus::SetMap),
             R"#(Sets a precise map to sign entities This definition oversedes the creation with a TransferReader)#"  , py::arg("TP"))
        .def("Map",
             (opencascade::handle<Transfer_TransientProcess> (XSControl_SignTransferStatus::*)() const) static_cast<opencascade::handle<Transfer_TransientProcess> (XSControl_SignTransferStatus::*)() const>(&XSControl_SignTransferStatus::Map),
             R"#(Returns the TransientProcess used as precised one Returns a Null Handle for a creation from a TransferReader without any further setting)#" )
        .def("Reader",
             (opencascade::handle<XSControl_TransferReader> (XSControl_SignTransferStatus::*)() const) static_cast<opencascade::handle<XSControl_TransferReader> (XSControl_SignTransferStatus::*)() const>(&XSControl_SignTransferStatus::Reader),
             R"#(Returns the Reader (if created with a Reader) Returns a Null Handle if not created with a Reader)#" )
        .def("Value",
             (Standard_CString (XSControl_SignTransferStatus::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_CString (XSControl_SignTransferStatus::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&XSControl_SignTransferStatus::Value),
             R"#(Returns the Signature for a Transient object, as its transfer status)#"  , py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_SignTransferStatus::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_SignTransferStatus::*)() const>(&XSControl_SignTransferStatus::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_SignTransferStatus::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XSControl_SignTransferStatus::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<XSControl_Controller ,opencascade::handle<XSControl_Controller> ,Py_XSControl_Controller , Standard_Transient >>(m.attr("XSControl_Controller"))
        .def("SetNames",
             (void (XSControl_Controller::*)( const Standard_CString ,  const Standard_CString  ) ) static_cast<void (XSControl_Controller::*)( const Standard_CString ,  const Standard_CString  ) >(&XSControl_Controller::SetNames),
             R"#(Changes names if a name is empty, the formerly set one remains Remark : Does not call Record or AutoRecord)#"  , py::arg("theLongName"),  py::arg("theShortName"))
        .def("AutoRecord",
             (void (XSControl_Controller::*)() const) static_cast<void (XSControl_Controller::*)() const>(&XSControl_Controller::AutoRecord),
             R"#(Records <me> is a general dictionary under Short and Long Names (see method Name))#" )
        .def("Record",
             (void (XSControl_Controller::*)( const Standard_CString  ) const) static_cast<void (XSControl_Controller::*)( const Standard_CString  ) const>(&XSControl_Controller::Record),
             R"#(Records <me> in a general dictionary under a name Error if <name> already used for another one)#"  , py::arg("name"))
        .def("Name",
             (Standard_CString (XSControl_Controller::*)( const Standard_Boolean  ) const) static_cast<Standard_CString (XSControl_Controller::*)( const Standard_Boolean  ) const>(&XSControl_Controller::Name),
             R"#(Returns a name, as given when initializing : rsc = False (D) : True Name attached to the Norm (long name) rsc = True : Name of the ressource set (i.e. short name))#"  , py::arg("rsc")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Protocol",
             (const opencascade::handle<Interface_Protocol> & (XSControl_Controller::*)() const) static_cast<const opencascade::handle<Interface_Protocol> & (XSControl_Controller::*)() const>(&XSControl_Controller::Protocol),
             R"#(Returns the Protocol attached to the Norm (from field))#" )
        .def("WorkLibrary",
             (const opencascade::handle<IFSelect_WorkLibrary> & (XSControl_Controller::*)() const) static_cast<const opencascade::handle<IFSelect_WorkLibrary> & (XSControl_Controller::*)() const>(&XSControl_Controller::WorkLibrary),
             R"#(Returns the WorkLibrary attached to the Norm. Remark that it has to be in phase with the Protocol (read from field))#" )
        .def("NewModel",
             (opencascade::handle<Interface_InterfaceModel> (XSControl_Controller::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (XSControl_Controller::*)() const>(&XSControl_Controller::NewModel),
             R"#(Creates a new empty Model ready to receive data of the Norm Used to write data from Imagine to an interface file)#" )
        .def("ActorRead",
             (opencascade::handle<Transfer_ActorOfTransientProcess> (XSControl_Controller::*)( const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<opencascade::handle<Transfer_ActorOfTransientProcess> (XSControl_Controller::*)( const opencascade::handle<Interface_InterfaceModel> &  ) const>(&XSControl_Controller::ActorRead),
             R"#(Returns the Actor for Read attached to the pair (norm,appli) It can be adapted for data of the input Model, as required Can be read from field then adapted with Model as required)#"  , py::arg("model"))
        .def("ActorWrite",
             (opencascade::handle<Transfer_ActorOfFinderProcess> (XSControl_Controller::*)() const) static_cast<opencascade::handle<Transfer_ActorOfFinderProcess> (XSControl_Controller::*)() const>(&XSControl_Controller::ActorWrite),
             R"#(Returns the Actor for Write attached to the pair (norm,appli) Read from field. Can be redefined)#" )
        .def("SetModeWrite",
             (void (XSControl_Controller::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (XSControl_Controller::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) >(&XSControl_Controller::SetModeWrite),
             R"#(Sets mininum and maximum values for modetrans (write) Erases formerly recorded bounds and values Actually only for shape Then, for each value a little help can be attached)#"  , py::arg("modemin"),  py::arg("modemax"),  py::arg("shape")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetModeWriteHelp",
             (void (XSControl_Controller::*)( const Standard_Integer ,  const Standard_CString ,  const Standard_Boolean  ) ) static_cast<void (XSControl_Controller::*)( const Standard_Integer ,  const Standard_CString ,  const Standard_Boolean  ) >(&XSControl_Controller::SetModeWriteHelp),
             R"#(Attaches a short line of help to a value of modetrans (write))#"  , py::arg("modetrans"),  py::arg("help"),  py::arg("shape")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ModeWriteBounds",
             (Standard_Boolean (XSControl_Controller::*)( Standard_Integer & ,  Standard_Integer & ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (XSControl_Controller::*)( Standard_Integer & ,  Standard_Integer & ,  const Standard_Boolean  ) const>(&XSControl_Controller::ModeWriteBounds),
             R"#(Returns recorded min and max values for modetrans (write) Actually only for shapes Returns True if bounds are set, False else (then, free value))#"  , py::arg("modemin"),  py::arg("modemax"),  py::arg("shape")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsModeWrite",
             (Standard_Boolean (XSControl_Controller::*)( const Standard_Integer ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (XSControl_Controller::*)( const Standard_Integer ,  const Standard_Boolean  ) const>(&XSControl_Controller::IsModeWrite),
             R"#(Tells if a value of <modetrans> is a good value(within bounds) Actually only for shapes)#"  , py::arg("modetrans"),  py::arg("shape")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ModeWriteHelp",
             (Standard_CString (XSControl_Controller::*)( const Standard_Integer ,  const Standard_Boolean  ) const) static_cast<Standard_CString (XSControl_Controller::*)( const Standard_Integer ,  const Standard_Boolean  ) const>(&XSControl_Controller::ModeWriteHelp),
             R"#(Returns the help line recorded for a value of modetrans empty if help not defined or not within bounds or if values are free)#"  , py::arg("modetrans"),  py::arg("shape")=static_cast<const Standard_Boolean>(Standard_True))
        .def("RecognizeWriteTransient",
             (Standard_Boolean (XSControl_Controller::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (XSControl_Controller::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const>(&XSControl_Controller::RecognizeWriteTransient),
             R"#(Tells if <obj> (an application object) is a valid candidate for a transfer to a Model. By default, asks the ActorWrite if known (through a TransientMapper). Can be redefined)#"  , py::arg("obj"),  py::arg("modetrans")=static_cast<const Standard_Integer>(0))
        .def("TransferWriteTransient",
             (IFSelect_ReturnStatus (XSControl_Controller::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const Standard_Integer  ) const) static_cast<IFSelect_ReturnStatus (XSControl_Controller::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const Standard_Integer  ) const>(&XSControl_Controller::TransferWriteTransient),
             R"#(Takes one Transient Object and transfers it to an InterfaceModel (already created, e.g. by NewModel) (result is recorded in the model by AddWithRefs) FP records produced results and checks)#"  , py::arg("obj"),  py::arg("FP"),  py::arg("model"),  py::arg("modetrans")=static_cast<const Standard_Integer>(0))
        .def("RecognizeWriteShape",
             (Standard_Boolean (XSControl_Controller::*)( const TopoDS_Shape & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (XSControl_Controller::*)( const TopoDS_Shape & ,  const Standard_Integer  ) const>(&XSControl_Controller::RecognizeWriteShape),
             R"#(Tells if a shape is valid for a transfer to a model Asks the ActorWrite (through a ShapeMapper))#"  , py::arg("shape"),  py::arg("modetrans")=static_cast<const Standard_Integer>(0))
        .def("TransferWriteShape",
             (IFSelect_ReturnStatus (XSControl_Controller::*)( const TopoDS_Shape & ,  const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const Standard_Integer  ) const) static_cast<IFSelect_ReturnStatus (XSControl_Controller::*)( const TopoDS_Shape & ,  const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const Standard_Integer  ) const>(&XSControl_Controller::TransferWriteShape),
             R"#(Takes one Shape and transfers it to an InterfaceModel (already created, e.g. by NewModel) Default uses ActorWrite; can be redefined as necessary Returned value is a status, as follows : Done OK , Void : No Result , Fail : Fail (e.g. exception) Error : bad conditions , bad model or null model)#"  , py::arg("shape"),  py::arg("FP"),  py::arg("model"),  py::arg("modetrans")=static_cast<const Standard_Integer>(0))
        .def("AddSessionItem",
             (void (XSControl_Controller::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString ,  const Standard_Boolean  ) ) static_cast<void (XSControl_Controller::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString ,  const Standard_Boolean  ) >(&XSControl_Controller::AddSessionItem),
             R"#(Records a Session Item, to be added for customisation of the Work Session. It must have a specific name. <setapplied> is used if <item> is a GeneralModifier, to decide If set to true, <item> will be applied to the hook list "send". Else, it is not applied to any hook list. Remark : this method is to be called at Create time, the recorded items will be used by Customise Warning : if <name> conflicts, the last recorded item is kept)#"  , py::arg("theItem"),  py::arg("theName"),  py::arg("toApply")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SessionItem",
             (opencascade::handle<Standard_Transient> (XSControl_Controller::*)( const Standard_CString  ) const) static_cast<opencascade::handle<Standard_Transient> (XSControl_Controller::*)( const Standard_CString  ) const>(&XSControl_Controller::SessionItem),
             R"#(Returns an item given its name to record in a Session If <name> is unknown, returns a Null Handle)#"  , py::arg("theName"))
        .def("Customise",
             (void (XSControl_Controller::*)( opencascade::handle<XSControl_WorkSession> &  ) ) static_cast<void (XSControl_Controller::*)( opencascade::handle<XSControl_WorkSession> &  ) >(&XSControl_Controller::Customise),
             R"#(Customises a WorkSession, by adding to it the recorded items (by AddSessionItem))#"  , py::arg("WS"))
        .def("AdaptorSession",
             (const NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (XSControl_Controller::*)() const) static_cast<const NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (XSControl_Controller::*)() const>(&XSControl_Controller::AdaptorSession),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_Controller::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_Controller::*)() const>(&XSControl_Controller::DynamicType),
             R"#(None)#" )
        .def_static("Recorded_s",
                    (opencascade::handle<XSControl_Controller> (*)( const Standard_CString  ) ) static_cast<opencascade::handle<XSControl_Controller> (*)( const Standard_CString  ) >(&XSControl_Controller::Recorded),
                    R"#(Returns the Controller attached to a given name Returns a Null Handle if <name> is unknown)#"  , py::arg("name"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_Controller::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XSControl_Controller::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<XSControl_TransferWriter ,opencascade::handle<XSControl_TransferWriter>  , Standard_Transient >>(m.attr("XSControl_TransferWriter"))
        .def(py::init<  >()  )
        .def("FinderProcess",
             (const opencascade::handle<Transfer_FinderProcess> & (XSControl_TransferWriter::*)() const) static_cast<const opencascade::handle<Transfer_FinderProcess> & (XSControl_TransferWriter::*)() const>(&XSControl_TransferWriter::FinderProcess),
             R"#(Returns the FinderProcess itself)#" )
        .def("SetFinderProcess",
             (void (XSControl_TransferWriter::*)( const opencascade::handle<Transfer_FinderProcess> &  ) ) static_cast<void (XSControl_TransferWriter::*)( const opencascade::handle<Transfer_FinderProcess> &  ) >(&XSControl_TransferWriter::SetFinderProcess),
             R"#(Sets a new FinderProcess and forgets the former one)#"  , py::arg("theFP"))
        .def("Controller",
             (const opencascade::handle<XSControl_Controller> & (XSControl_TransferWriter::*)() const) static_cast<const opencascade::handle<XSControl_Controller> & (XSControl_TransferWriter::*)() const>(&XSControl_TransferWriter::Controller),
             R"#(Returns the currently used Controller)#" )
        .def("SetController",
             (void (XSControl_TransferWriter::*)( const opencascade::handle<XSControl_Controller> &  ) ) static_cast<void (XSControl_TransferWriter::*)( const opencascade::handle<XSControl_Controller> &  ) >(&XSControl_TransferWriter::SetController),
             R"#(Sets a new Controller, also sets a new FinderProcess)#"  , py::arg("theCtl"))
        .def("Clear",
             (void (XSControl_TransferWriter::*)( const Standard_Integer  ) ) static_cast<void (XSControl_TransferWriter::*)( const Standard_Integer  ) >(&XSControl_TransferWriter::Clear),
             R"#(Clears recorded data according a mode 0 clears FinderProcess (results, checks) -1 create a new FinderProcess)#"  , py::arg("theMode"))
        .def("TransferMode",
             (Standard_Integer (XSControl_TransferWriter::*)() const) static_cast<Standard_Integer (XSControl_TransferWriter::*)() const>(&XSControl_TransferWriter::TransferMode),
             R"#(Returns the current Transfer Mode (an Integer) It will be interpreted by the Controller to run Transfers This call form could be later replaced by more specific ones (parameters suited for each norm / transfer case))#" )
        .def("SetTransferMode",
             (void (XSControl_TransferWriter::*)( const Standard_Integer  ) ) static_cast<void (XSControl_TransferWriter::*)( const Standard_Integer  ) >(&XSControl_TransferWriter::SetTransferMode),
             R"#(Changes the Transfer Mode)#"  , py::arg("theMode"))
        .def("PrintStats",
             (void (XSControl_TransferWriter::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (XSControl_TransferWriter::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&XSControl_TransferWriter::PrintStats),
             R"#(Prints statistics on current Trace File, according what,mode See PrintStatsProcess for details)#"  , py::arg("theWhat"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("RecognizeTransient",
             (Standard_Boolean (XSControl_TransferWriter::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Boolean (XSControl_TransferWriter::*)( const opencascade::handle<Standard_Transient> &  ) >(&XSControl_TransferWriter::RecognizeTransient),
             R"#(Tells if a transient object (from an application) is a valid candidate for a transfer to a model Asks the Controller (RecognizeWriteTransient) If <obj> is a HShape, calls RecognizeShape)#"  , py::arg("theObj"))
        .def("TransferWriteTransient",
             (IFSelect_ReturnStatus (XSControl_TransferWriter::*)( const opencascade::handle<Interface_InterfaceModel> & ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<IFSelect_ReturnStatus (XSControl_TransferWriter::*)( const opencascade::handle<Interface_InterfaceModel> & ,  const opencascade::handle<Standard_Transient> &  ) >(&XSControl_TransferWriter::TransferWriteTransient),
             R"#(Transfers a Transient object (from an application) to a model of current norm, according to the last call to SetTransferMode Works by calling the Controller Returns status : =0 if OK, >0 if error during transfer, <0 if transfer badly initialised)#"  , py::arg("theModel"),  py::arg("theObj"))
        .def("RecognizeShape",
             (Standard_Boolean (XSControl_TransferWriter::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (XSControl_TransferWriter::*)( const TopoDS_Shape &  ) >(&XSControl_TransferWriter::RecognizeShape),
             R"#(Tells if a Shape is valid for a transfer to a model Asks the Controller (RecognizeWriteShape))#"  , py::arg("theShape"))
        .def("TransferWriteShape",
             (IFSelect_ReturnStatus (XSControl_TransferWriter::*)( const opencascade::handle<Interface_InterfaceModel> & ,  const TopoDS_Shape &  ) ) static_cast<IFSelect_ReturnStatus (XSControl_TransferWriter::*)( const opencascade::handle<Interface_InterfaceModel> & ,  const TopoDS_Shape &  ) >(&XSControl_TransferWriter::TransferWriteShape),
             R"#(Transfers a Shape from CasCade to a model of current norm, according to the last call to SetTransferMode Works by calling the Controller Returns status : =0 if OK, >0 if error during transfer, <0 if transfer badly initialised)#"  , py::arg("theModel"),  py::arg("theShape"))
        .def("CheckList",
             (Interface_CheckIterator (XSControl_TransferWriter::*)() const) static_cast<Interface_CheckIterator (XSControl_TransferWriter::*)() const>(&XSControl_TransferWriter::CheckList),
             R"#(Returns the check-list of last transfer (write), i.e. the check-list currently recorded in the FinderProcess)#" )
        .def("ResultCheckList",
             (Interface_CheckIterator (XSControl_TransferWriter::*)( const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Interface_CheckIterator (XSControl_TransferWriter::*)( const opencascade::handle<Interface_InterfaceModel> &  ) const>(&XSControl_TransferWriter::ResultCheckList),
             R"#(Returns the check-list of last transfer (write), but tries to bind to each check, the resulting entity in the model instead of keeping the original Mapper, whenever known)#"  , py::arg("theModel"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_TransferWriter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_TransferWriter::*)() const>(&XSControl_TransferWriter::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_TransferWriter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XSControl_TransferWriter::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<XSControl_Utils ,std::unique_ptr<XSControl_Utils>  >>(m.attr("XSControl_Utils"))
        .def(py::init<  >()  )
        .def("TraceLine",
             (void (XSControl_Utils::*)( const Standard_CString  ) const) static_cast<void (XSControl_Utils::*)( const Standard_CString  ) const>(&XSControl_Utils::TraceLine),
             R"#(Just prints a line into the current Trace File. This allows to better characterise the various trace outputs, as desired.)#"  , py::arg("line"))
        .def("TraceLines",
             (void (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<void (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_Utils::TraceLines),
             R"#(Just prints a line or a set of lines into the current Trace File. <lines> can be a HAscii/ExtendedString (produces a print without ending line) or a HSequence or HArray1 Of .. (one new line per item))#"  , py::arg("lines"))
        .def("IsKind",
             (Standard_Boolean (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Type> &  ) const) static_cast<Standard_Boolean (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Type> &  ) const>(&XSControl_Utils::IsKind),
             R"#(None)#"  , py::arg("item"),  py::arg("what"))
        .def("TypeName",
             (Standard_CString (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Boolean  ) const) static_cast<Standard_CString (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Boolean  ) const>(&XSControl_Utils::TypeName),
             R"#(Returns the name of the dynamic type of an object, i.e. : If it is a Type, its Name If it is a object not a type, the Name of its DynamicType If it is Null, an empty string If <nopk> is False (D), gives complete name If <nopk> is True, returns class name without package)#"  , py::arg("item"),  py::arg("nopk")=static_cast<const Standard_Boolean>(Standard_False))
        .def("TraValue",
             (opencascade::handle<Standard_Transient> (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const) static_cast<opencascade::handle<Standard_Transient> (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const>(&XSControl_Utils::TraValue),
             R"#(None)#"  , py::arg("list"),  py::arg("num"))
        .def("NewSeqTra",
             (opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_Utils::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_Utils::*)() const>(&XSControl_Utils::NewSeqTra),
             R"#(None)#" )
        .def("AppendTra",
             (void (XSControl_Utils::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ,  const opencascade::handle<Standard_Transient> &  ) const) static_cast<void (XSControl_Utils::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ,  const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_Utils::AppendTra),
             R"#(None)#"  , py::arg("seqval"),  py::arg("traval"))
        .def("DateString",
             (Standard_CString (XSControl_Utils::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_CString (XSControl_Utils::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&XSControl_Utils::DateString),
             R"#(None)#"  , py::arg("yy"),  py::arg("mm"),  py::arg("dd"),  py::arg("hh"),  py::arg("mn"),  py::arg("ss"))
        .def("DateValues",
             (void (XSControl_Utils::*)( const Standard_CString ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (XSControl_Utils::*)( const Standard_CString ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&XSControl_Utils::DateValues),
             R"#(None)#"  , py::arg("text"),  py::arg("yy"),  py::arg("mm"),  py::arg("dd"),  py::arg("hh"),  py::arg("mn"),  py::arg("ss"))
        .def("ToCString",
             (Standard_CString (XSControl_Utils::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const) static_cast<Standard_CString (XSControl_Utils::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const>(&XSControl_Utils::ToCString),
             R"#(None)#"  , py::arg("strval"))
        .def("ToCString",
             (Standard_CString (XSControl_Utils::*)( const TCollection_AsciiString &  ) const) static_cast<Standard_CString (XSControl_Utils::*)( const TCollection_AsciiString &  ) const>(&XSControl_Utils::ToCString),
             R"#(None)#"  , py::arg("strval"))
        .def("ToHString",
             (opencascade::handle<TCollection_HAsciiString> (XSControl_Utils::*)( const Standard_CString  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (XSControl_Utils::*)( const Standard_CString  ) const>(&XSControl_Utils::ToHString),
             R"#(None)#"  , py::arg("strcon"))
        .def("ToAString",
             (TCollection_AsciiString (XSControl_Utils::*)( const Standard_CString  ) const) static_cast<TCollection_AsciiString (XSControl_Utils::*)( const Standard_CString  ) const>(&XSControl_Utils::ToAString),
             R"#(None)#"  , py::arg("strcon"))
        .def("ToEString",
             (Standard_ExtString (XSControl_Utils::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const) static_cast<Standard_ExtString (XSControl_Utils::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const>(&XSControl_Utils::ToEString),
             R"#(None)#"  , py::arg("strval"))
        .def("ToEString",
             (Standard_ExtString (XSControl_Utils::*)( const TCollection_ExtendedString &  ) const) static_cast<Standard_ExtString (XSControl_Utils::*)( const TCollection_ExtendedString &  ) const>(&XSControl_Utils::ToEString),
             R"#(None)#"  , py::arg("strval"))
        .def("ToHString",
             (opencascade::handle<TCollection_HExtendedString> (XSControl_Utils::*)( const Standard_ExtString  ) const) static_cast<opencascade::handle<TCollection_HExtendedString> (XSControl_Utils::*)( const Standard_ExtString  ) const>(&XSControl_Utils::ToHString),
             R"#(None)#"  , py::arg("strcon"))
        .def("ToXString",
             (TCollection_ExtendedString (XSControl_Utils::*)( const Standard_ExtString  ) const) static_cast<TCollection_ExtendedString (XSControl_Utils::*)( const Standard_ExtString  ) const>(&XSControl_Utils::ToXString),
             R"#(None)#"  , py::arg("strcon"))
        .def("AsciiToExtended",
             (Standard_ExtString (XSControl_Utils::*)( const Standard_CString  ) const) static_cast<Standard_ExtString (XSControl_Utils::*)( const Standard_CString  ) const>(&XSControl_Utils::AsciiToExtended),
             R"#(None)#"  , py::arg("str"))
        .def("IsAscii",
             (Standard_Boolean (XSControl_Utils::*)( const Standard_ExtString  ) const) static_cast<Standard_Boolean (XSControl_Utils::*)( const Standard_ExtString  ) const>(&XSControl_Utils::IsAscii),
             R"#(None)#"  , py::arg("str"))
        .def("ExtendedToAscii",
             (Standard_CString (XSControl_Utils::*)( const Standard_ExtString  ) const) static_cast<Standard_CString (XSControl_Utils::*)( const Standard_ExtString  ) const>(&XSControl_Utils::ExtendedToAscii),
             R"#(None)#"  , py::arg("str"))
        .def("CStrValue",
             (Standard_CString (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const) static_cast<Standard_CString (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const>(&XSControl_Utils::CStrValue),
             R"#(None)#"  , py::arg("list"),  py::arg("num"))
        .def("EStrValue",
             (Standard_ExtString (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const) static_cast<Standard_ExtString (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const>(&XSControl_Utils::EStrValue),
             R"#(None)#"  , py::arg("list"),  py::arg("num"))
        .def("NewSeqCStr",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (XSControl_Utils::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (XSControl_Utils::*)() const>(&XSControl_Utils::NewSeqCStr),
             R"#(None)#" )
        .def("AppendCStr",
             (void (XSControl_Utils::*)( const opencascade::handle<TColStd_HSequenceOfHAsciiString> & ,  const Standard_CString  ) const) static_cast<void (XSControl_Utils::*)( const opencascade::handle<TColStd_HSequenceOfHAsciiString> & ,  const Standard_CString  ) const>(&XSControl_Utils::AppendCStr),
             R"#(None)#"  , py::arg("seqval"),  py::arg("strval"))
        .def("NewSeqEStr",
             (opencascade::handle<TColStd_HSequenceOfHExtendedString> (XSControl_Utils::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfHExtendedString> (XSControl_Utils::*)() const>(&XSControl_Utils::NewSeqEStr),
             R"#(None)#" )
        .def("AppendEStr",
             (void (XSControl_Utils::*)( const opencascade::handle<TColStd_HSequenceOfHExtendedString> & ,  const Standard_ExtString  ) const) static_cast<void (XSControl_Utils::*)( const opencascade::handle<TColStd_HSequenceOfHExtendedString> & ,  const Standard_ExtString  ) const>(&XSControl_Utils::AppendEStr),
             R"#(None)#"  , py::arg("seqval"),  py::arg("strval"))
        .def("CompoundFromSeq",
             (TopoDS_Shape (XSControl_Utils::*)( const opencascade::handle<TopTools_HSequenceOfShape> &  ) const) static_cast<TopoDS_Shape (XSControl_Utils::*)( const opencascade::handle<TopTools_HSequenceOfShape> &  ) const>(&XSControl_Utils::CompoundFromSeq),
             R"#(Converts a list of Shapes to a Compound (a kind of Shape))#"  , py::arg("seqval"))
        .def("ShapeType",
             (TopAbs_ShapeEnum (XSControl_Utils::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) const) static_cast<TopAbs_ShapeEnum (XSControl_Utils::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) const>(&XSControl_Utils::ShapeType),
             R"#(Returns the type of a Shape : true type if <compound> is False If <compound> is True and <shape> is a Compound, iterates on its items. If all are of the same type, returns this type. Else, returns COMPOUND. If it is empty, returns SHAPE For a Null Shape, returns SHAPE)#"  , py::arg("shape"),  py::arg("compound"))
        .def("SortedCompound",
             (TopoDS_Shape (XSControl_Utils::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const Standard_Boolean ,  const Standard_Boolean  ) const) static_cast<TopoDS_Shape (XSControl_Utils::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const Standard_Boolean ,  const Standard_Boolean  ) const>(&XSControl_Utils::SortedCompound),
             R"#(From a Shape, builds a Compound as follows : explores it level by level If <explore> is False, only COMPOUND items. Else, all items Adds to the result, shapes which comply to <type> + if <type> is WIRE, considers free edges (and makes wires) + if <type> is SHELL, considers free faces (and makes shells) If <compound> is True, gathers items in compounds which correspond to starting COMPOUND,SOLID or SHELL containers, or items directly contained in a Compound)#"  , py::arg("shape"),  py::arg("type"),  py::arg("explore"),  py::arg("compound"))
        .def("ShapeValue",
             (TopoDS_Shape (XSControl_Utils::*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Integer  ) const) static_cast<TopoDS_Shape (XSControl_Utils::*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Integer  ) const>(&XSControl_Utils::ShapeValue),
             R"#(None)#"  , py::arg("seqv"),  py::arg("num"))
        .def("NewSeqShape",
             (opencascade::handle<TopTools_HSequenceOfShape> (XSControl_Utils::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (XSControl_Utils::*)() const>(&XSControl_Utils::NewSeqShape),
             R"#(None)#" )
        .def("AppendShape",
             (void (XSControl_Utils::*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  const TopoDS_Shape &  ) const) static_cast<void (XSControl_Utils::*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  const TopoDS_Shape &  ) const>(&XSControl_Utils::AppendShape),
             R"#(None)#"  , py::arg("seqv"),  py::arg("shape"))
        .def("ShapeBinder",
             (opencascade::handle<Standard_Transient> (XSControl_Utils::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) const) static_cast<opencascade::handle<Standard_Transient> (XSControl_Utils::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) const>(&XSControl_Utils::ShapeBinder),
             R"#(Creates a Transient Object from a Shape : it is either a Binder (used by functions which require a Transient but can process a Shape, such as viewing functions) or a HShape (according to hs) Default is a HShape)#"  , py::arg("shape"),  py::arg("hs")=static_cast<const Standard_Boolean>(Standard_True))
        .def("BinderShape",
             (TopoDS_Shape (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<TopoDS_Shape (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_Utils::BinderShape),
             R"#(From a Transient, returns a Shape. In fact, recognizes ShapeBinder ShapeMapper and HShape)#"  , py::arg("tr"))
        .def("SeqLength",
             (Standard_Integer (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_Utils::SeqLength),
             R"#(None)#"  , py::arg("list"))
        .def("SeqToArr",
             (opencascade::handle<Standard_Transient> (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const) static_cast<opencascade::handle<Standard_Transient> (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const>(&XSControl_Utils::SeqToArr),
             R"#(None)#"  , py::arg("seq"),  py::arg("first")=static_cast<const Standard_Integer>(1))
        .def("ArrToSeq",
             (opencascade::handle<Standard_Transient> (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<opencascade::handle<Standard_Transient> (XSControl_Utils::*)( const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_Utils::ArrToSeq),
             R"#(None)#"  , py::arg("arr"))
        .def("SeqIntValue",
             (Standard_Integer (XSControl_Utils::*)( const opencascade::handle<TColStd_HSequenceOfInteger> & ,  const Standard_Integer  ) const) static_cast<Standard_Integer (XSControl_Utils::*)( const opencascade::handle<TColStd_HSequenceOfInteger> & ,  const Standard_Integer  ) const>(&XSControl_Utils::SeqIntValue),
             R"#(None)#"  , py::arg("list"),  py::arg("num"))
;

    register_default_constructor<XSControl ,std::unique_ptr<XSControl>>(m,"XSControl");

    static_cast<py::class_<XSControl ,std::unique_ptr<XSControl>  >>(m.attr("XSControl"))
        .def_static("Session_s",
                    (opencascade::handle<XSControl_WorkSession> (*)( const opencascade::handle<IFSelect_SessionPilot> &  ) ) static_cast<opencascade::handle<XSControl_WorkSession> (*)( const opencascade::handle<IFSelect_SessionPilot> &  ) >(&XSControl::Session),
                    R"#(Returns the WorkSession of a SessionPilot, but casts it as from XSControl : it then gives access to Control & Transfers)#"  , py::arg("pilot"))
        .def_static("Vars_s",
                    (opencascade::handle<XSControl_Vars> (*)( const opencascade::handle<IFSelect_SessionPilot> &  ) ) static_cast<opencascade::handle<XSControl_Vars> (*)( const opencascade::handle<IFSelect_SessionPilot> &  ) >(&XSControl::Vars),
                    R"#(Returns the Vars of a SessionPilot, it is brought by Session it provides access to external variables)#"  , py::arg("pilot"))
;


    static_cast<py::class_<XSControl_TransferReader ,opencascade::handle<XSControl_TransferReader>  , Standard_Transient >>(m.attr("XSControl_TransferReader"))
        .def(py::init<  >()  )
        .def("SetController",
             (void (XSControl_TransferReader::*)( const opencascade::handle<XSControl_Controller> &  ) ) static_cast<void (XSControl_TransferReader::*)( const opencascade::handle<XSControl_Controller> &  ) >(&XSControl_TransferReader::SetController),
             R"#(Sets a Controller. It is required to generate the Actor. Elsewhere, the Actor must be provided directly)#"  , py::arg("theControl"))
        .def("SetActor",
             (void (XSControl_TransferReader::*)( const opencascade::handle<Transfer_ActorOfTransientProcess> &  ) ) static_cast<void (XSControl_TransferReader::*)( const opencascade::handle<Transfer_ActorOfTransientProcess> &  ) >(&XSControl_TransferReader::SetActor),
             R"#(Sets the Actor directly : this value will be used if the Controller is not set)#"  , py::arg("theActor"))
        .def("Actor",
             (opencascade::handle<Transfer_ActorOfTransientProcess> (XSControl_TransferReader::*)() ) static_cast<opencascade::handle<Transfer_ActorOfTransientProcess> (XSControl_TransferReader::*)() >(&XSControl_TransferReader::Actor),
             R"#(Returns the Actor, determined by the Controller, or if this one is unknown, directly set. Once it has been defined, it can then be edited.)#" )
        .def("SetModel",
             (void (XSControl_TransferReader::*)( const opencascade::handle<Interface_InterfaceModel> &  ) ) static_cast<void (XSControl_TransferReader::*)( const opencascade::handle<Interface_InterfaceModel> &  ) >(&XSControl_TransferReader::SetModel),
             R"#(Sets an InterfaceModel. This causes former results, computed from another one, to be lost (see also Clear))#"  , py::arg("theModel"))
        .def("SetGraph",
             (void (XSControl_TransferReader::*)( const opencascade::handle<Interface_HGraph> &  ) ) static_cast<void (XSControl_TransferReader::*)( const opencascade::handle<Interface_HGraph> &  ) >(&XSControl_TransferReader::SetGraph),
             R"#(Sets a Graph and its InterfaceModel (calls SetModel))#"  , py::arg("theGraph"))
        .def("Model",
             (const opencascade::handle<Interface_InterfaceModel> & (XSControl_TransferReader::*)() const) static_cast<const opencascade::handle<Interface_InterfaceModel> & (XSControl_TransferReader::*)() const>(&XSControl_TransferReader::Model),
             R"#(Returns the currently set InterfaceModel)#" )
        .def("SetContext",
             (void (XSControl_TransferReader::*)( const Standard_CString ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (XSControl_TransferReader::*)( const Standard_CString ,  const opencascade::handle<Standard_Transient> &  ) >(&XSControl_TransferReader::SetContext),
             R"#(Sets a Context : according to receiving appli, to be interpreted by the Actor)#"  , py::arg("theName"),  py::arg("theCtx"))
        .def("GetContext",
             (Standard_Boolean (XSControl_TransferReader::*)( const Standard_CString ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (XSControl_TransferReader::*)( const Standard_CString ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const>(&XSControl_TransferReader::GetContext),
             R"#(Returns the Context attached to a name, if set and if it is Kind of the type, else a Null Handle Returns True if OK, False if no Context)#"  , py::arg("theName"),  py::arg("theType"),  py::arg("theCtx"))
        .def("Context",
             (NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (XSControl_TransferReader::*)() ) static_cast<NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (XSControl_TransferReader::*)() >(&XSControl_TransferReader::Context),
             R"#(Returns (modifiable) the whole definition of Context Rather for internal use (ex.: preparing and setting in once))#" )
        .def("SetFileName",
             (void (XSControl_TransferReader::*)( const Standard_CString  ) ) static_cast<void (XSControl_TransferReader::*)( const Standard_CString  ) >(&XSControl_TransferReader::SetFileName),
             R"#(Sets a new value for (loaded) file name)#"  , py::arg("theName"))
        .def("FileName",
             (Standard_CString (XSControl_TransferReader::*)() const) static_cast<Standard_CString (XSControl_TransferReader::*)() const>(&XSControl_TransferReader::FileName),
             R"#(Returns actual value of file name)#" )
        .def("Clear",
             (void (XSControl_TransferReader::*)( const Standard_Integer  ) ) static_cast<void (XSControl_TransferReader::*)( const Standard_Integer  ) >(&XSControl_TransferReader::Clear),
             R"#(Clears data, according mode : -1 all 0 nothing done +1 final results +2 working data (model, context, transfer process))#"  , py::arg("theMode"))
        .def("TransientProcess",
             (const opencascade::handle<Transfer_TransientProcess> & (XSControl_TransferReader::*)() const) static_cast<const opencascade::handle<Transfer_TransientProcess> & (XSControl_TransferReader::*)() const>(&XSControl_TransferReader::TransientProcess),
             R"#(Returns the currently used TransientProcess It is computed from the model by TransferReadRoots, or by BeginTransferRead)#" )
        .def("SetTransientProcess",
             (void (XSControl_TransferReader::*)( const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<void (XSControl_TransferReader::*)( const opencascade::handle<Transfer_TransientProcess> &  ) >(&XSControl_TransferReader::SetTransientProcess),
             R"#(Forces the TransientProcess Remark : it also changes the Model and the Actor, from those recorded in the new TransientProcess)#"  , py::arg("theTP"))
        .def("RecordResult",
             (Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) >(&XSControl_TransferReader::RecordResult),
             R"#(Records a final result of transferring an entity This result is recorded as a ResultFromModel, taken from the TransientProcess Returns True if a result is available, False else)#"  , py::arg("theEnt"))
        .def("IsRecorded",
             (Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_TransferReader::IsRecorded),
             R"#(Returns True if a final result is recorded for an entity Remark that it can bring no effective result if transfer has completely failed (FinalResult brings only fail messages ...))#"  , py::arg("theEnt"))
        .def("HasResult",
             (Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_TransferReader::HasResult),
             R"#(Returns True if a final result is recorded AND BRINGS AN EFFECTIVE RESULT (else, it brings only fail messages))#"  , py::arg("theEnt"))
        .def("RecordedList",
             (opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_TransferReader::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_TransferReader::*)() const>(&XSControl_TransferReader::RecordedList),
             R"#(Returns the list of entities to which a final result is attached (i.e. processed by RecordResult))#" )
        .def("Skip",
             (Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) >(&XSControl_TransferReader::Skip),
             R"#(Note that an entity has been required for transfer but no result at all is available (typically : case not implemented) It is not an error, but it gives a specific status : Skipped Returns True if done, False if <ent> is not in starting model)#"  , py::arg("theEnt"))
        .def("IsSkipped",
             (Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_TransferReader::IsSkipped),
             R"#(Returns True if an entity is noted as skipped)#"  , py::arg("theEnt"))
        .def("IsMarked",
             (Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_TransferReader::IsMarked),
             R"#(Returns True if an entity has been asked for transfert, hence it is marked, as : Recorded (a computation has ran, with or without an effective result), or Skipped (case ignored))#"  , py::arg("theEnt"))
        .def("FinalResult",
             (opencascade::handle<Transfer_ResultFromModel> (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<opencascade::handle<Transfer_ResultFromModel> (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_TransferReader::FinalResult),
             R"#(Returns the final result recorded for an entity, as such)#"  , py::arg("theEnt"))
        .def("FinalEntityLabel",
             (Standard_CString (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_CString (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_TransferReader::FinalEntityLabel),
             R"#(Returns the label attached to an entity recorded for final, or an empty string if not recorded)#"  , py::arg("theEnt"))
        .def("FinalEntityNumber",
             (Standard_Integer (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_TransferReader::FinalEntityNumber),
             R"#(Returns the number attached to the entity recorded for final, or zero if not recorded (looks in the ResultFromModel))#"  , py::arg("theEnt"))
        .def("ResultFromNumber",
             (opencascade::handle<Transfer_ResultFromModel> (XSControl_TransferReader::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Transfer_ResultFromModel> (XSControl_TransferReader::*)( const Standard_Integer  ) const>(&XSControl_TransferReader::ResultFromNumber),
             R"#(Returns the final result recorded for a NUMBER of entity (internal use). Null if out of range)#"  , py::arg("theNum"))
        .def("TransientResult",
             (opencascade::handle<Standard_Transient> (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<opencascade::handle<Standard_Transient> (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_TransferReader::TransientResult),
             R"#(Returns the resulting object as a Transient Null Handle if no result or result not transient)#"  , py::arg("theEnt"))
        .def("ShapeResult",
             (TopoDS_Shape (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<TopoDS_Shape (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) const>(&XSControl_TransferReader::ShapeResult),
             R"#(Returns the resulting object as a Shape Null Shape if no result or result not a shape)#"  , py::arg("theEnt"))
        .def("ClearResult",
             (Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) >(&XSControl_TransferReader::ClearResult),
             R"#(Clears recorded result for an entity, according mode <mode> = -1 : true, complete, clearing (erasing result) <mode> >= 0 : simple "stripping", see ResultFromModel, in particular, 0 for simple internal strip, 10 for all but final result, 11 for all : just label, status and filename are kept Returns True when done, False if nothing was to clear)#"  , py::arg("theEnt"),  py::arg("theMode"))
        .def("EntityFromResult",
             (opencascade::handle<Standard_Transient> (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const) static_cast<opencascade::handle<Standard_Transient> (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const>(&XSControl_TransferReader::EntityFromResult),
             R"#(Returns an entity from which a given result was produced. If <mode> = 0 (D), searches in last root transfers If <mode> = 1, searches in last (root & sub) transfers If <mode> = 2, searches in root recorded results If <mode> = 3, searches in all (root & sub) recordeds <res> can be, either a transient object (result itself) or a binder. For a binder of shape, calls EntityFromShapeResult Returns a Null Handle if <res> not recorded)#"  , py::arg("theRes"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("EntityFromShapeResult",
             (opencascade::handle<Standard_Transient> (XSControl_TransferReader::*)( const TopoDS_Shape & ,  const Standard_Integer  ) const) static_cast<opencascade::handle<Standard_Transient> (XSControl_TransferReader::*)( const TopoDS_Shape & ,  const Standard_Integer  ) const>(&XSControl_TransferReader::EntityFromShapeResult),
             R"#(Returns an entity from which a given shape result was produced Returns a Null Handle if <res> not recorded or not a Shape)#"  , py::arg("theRes"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("EntitiesFromShapeList",
             (opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_TransferReader::*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_TransferReader::*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Integer  ) const>(&XSControl_TransferReader::EntitiesFromShapeList),
             R"#(Returns the list of entities from which some shapes were produced : it corresponds to a loop on EntityFromShapeResult, but is optimised)#"  , py::arg("theRes"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("CheckList",
             (Interface_CheckIterator (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const) static_cast<Interface_CheckIterator (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const>(&XSControl_TransferReader::CheckList),
             R"#(Returns the CheckList resulting from transferring <ent>, i.e. stored in its recorded form ResultFromModel (empty if transfer successful or not recorded ...))#"  , py::arg("theEnt"),  py::arg("theLevel")=static_cast<const Standard_Integer>(0))
        .def("HasChecks",
             (Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Boolean  ) const>(&XSControl_TransferReader::HasChecks),
             R"#(Returns True if an entity (with a final result) has checks : - failsonly = False : any kind of check message - failsonly = True : fails only Returns False if <ent> is not recorded)#"  , py::arg("theEnt"),  py::arg("FailsOnly"))
        .def("CheckedList",
             (opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Interface_CheckStatus ,  const Standard_Boolean  ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Interface_CheckStatus ,  const Standard_Boolean  ) const>(&XSControl_TransferReader::CheckedList),
             R"#(Returns the list of starting entities to which a given check status is attached, IN FINAL RESULTS <ent> can be an entity, or the model to query all entities Below, "entities" are, either <ent> plus its sub-transferred, or all the entities of the model)#"  , py::arg("theEnt"),  py::arg("WithCheck")=static_cast<const Interface_CheckStatus>(Interface_CheckAny),  py::arg("theResult")=static_cast<const Standard_Boolean>(Standard_True))
        .def("BeginTransfer",
             (Standard_Boolean (XSControl_TransferReader::*)() ) static_cast<Standard_Boolean (XSControl_TransferReader::*)() >(&XSControl_TransferReader::BeginTransfer),
             R"#(Defines a new TransferProcess for reading transfer Returns True if done, False if data are not properly defined (the Model, the Actor for Read))#" )
        .def("Recognize",
             (Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Boolean (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> &  ) >(&XSControl_TransferReader::Recognize),
             R"#(Tells if an entity is recognized as a valid candidate for Transfer. Calls method Recognize from the Actor (if known))#"  , py::arg("theEnt"))
        .def("TransferOne",
             (Standard_Integer (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Boolean  ) >(&XSControl_TransferReader::TransferOne),
             R"#(Commands the transfer on reading for an entity to data for Imagine, using the selected Actor for Read Returns count of transferred entities, ok or with fails (0/1) If <rec> is True (D), the result is recorded by RecordResult)#"  , py::arg("theEnt"),  py::arg("theRec")=static_cast<const Standard_Boolean>(Standard_True))
        .def("TransferList",
             (Standard_Integer (XSControl_TransferReader::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (XSControl_TransferReader::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ,  const Standard_Boolean  ) >(&XSControl_TransferReader::TransferList),
             R"#(Commands the transfer on reading for a list of entities to data for Imagine, using the selected Actor for Read Returns count of transferred entities, ok or with fails (0/1) If <rec> is True (D), the results are recorded by RecordResult)#"  , py::arg("theList"),  py::arg("theRec")=static_cast<const Standard_Boolean>(Standard_True))
        .def("TransferRoots",
             (Standard_Integer (XSControl_TransferReader::*)( const Interface_Graph &  ) ) static_cast<Standard_Integer (XSControl_TransferReader::*)( const Interface_Graph &  ) >(&XSControl_TransferReader::TransferRoots),
             R"#(Transfers the content of the current Interface Model to data handled by Imagine, starting from its Roots (determined by the Graph <G>), using the selected Actor for Read Returns the count of performed root transfers (i.e. 0 if none) or -1 if no actor is defined)#"  , py::arg("theGraph"))
        .def("TransferClear",
             (void (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) ) static_cast<void (XSControl_TransferReader::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) >(&XSControl_TransferReader::TransferClear),
             R"#(Clears the results attached to an entity if <ents> equates the starting model, clears all results)#"  , py::arg("theEnt"),  py::arg("theLevel")=static_cast<const Standard_Integer>(0))
        .def("PrintStats",
             (void (XSControl_TransferReader::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (XSControl_TransferReader::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&XSControl_TransferReader::PrintStats),
             R"#(Prints statistics on current Trace File, according <what> and <mode>. See PrintStatsProcess for details)#"  , py::arg("theWhat"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("LastCheckList",
             (Interface_CheckIterator (XSControl_TransferReader::*)() const) static_cast<Interface_CheckIterator (XSControl_TransferReader::*)() const>(&XSControl_TransferReader::LastCheckList),
             R"#(Returns the CheckList resulting from last TransferRead i.e. from TransientProcess itself, recorded from last Clear)#" )
        .def("LastTransferList",
             (opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_TransferReader::*)( const Standard_Boolean  ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (XSControl_TransferReader::*)( const Standard_Boolean  ) const>(&XSControl_TransferReader::LastTransferList),
             R"#(Returns the list of entities recorded as lastly transferred i.e. from TransientProcess itself, recorded from last Clear If <roots> is True , considers only roots of transfer If <roots> is False, considers all entities bound with result)#"  , py::arg("theRoots"))
        .def("ShapeResultList",
             (const opencascade::handle<TopTools_HSequenceOfShape> & (XSControl_TransferReader::*)( const Standard_Boolean  ) ) static_cast<const opencascade::handle<TopTools_HSequenceOfShape> & (XSControl_TransferReader::*)( const Standard_Boolean  ) >(&XSControl_TransferReader::ShapeResultList),
             R"#(Returns a list of result Shapes If <rec> is True , sees RecordedList If <rec> is False, sees LastTransferList (last ROOT transfers) For each one, if it is a Shape, it is cumulated to the list If no Shape is found, returns an empty Sequence)#"  , py::arg("theRec"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_TransferReader::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_TransferReader::*)() const>(&XSControl_TransferReader::DynamicType),
             R"#(None)#" )
        .def_static("PrintStatsProcess_s",
                    (void (*)( const opencascade::handle<Transfer_TransientProcess> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (*)( const opencascade::handle<Transfer_TransientProcess> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&XSControl_TransferReader::PrintStatsProcess),
                    R"#(This routines prints statistics about a TransientProcess It can be called, by a TransferReader, or isolately Prints are done on the default trace file <what> defines what kind of statistics are to be printed : 0 : basic figures 1 : root results 2 : all recorded (roots, intermediate, checked entities) 3 : abnormal records 4 : check messages (warnings and fails) 5 : fail messages)#"  , py::arg("theTP"),  py::arg("theWhat"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def_static("PrintStatsOnList_s",
                    (void (*)( const opencascade::handle<Transfer_TransientProcess> & ,  const opencascade::handle<TColStd_HSequenceOfTransient> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (*)( const opencascade::handle<Transfer_TransientProcess> & ,  const opencascade::handle<TColStd_HSequenceOfTransient> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&XSControl_TransferReader::PrintStatsOnList),
                    R"#(Works as PrintStatsProcess, but displays data only on the entities which are in <list> (filter))#"  , py::arg("theTP"),  py::arg("theList"),  py::arg("theWhat"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_TransferReader::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XSControl_TransferReader::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<XSControl_WorkSession ,opencascade::handle<XSControl_WorkSession>  , IFSelect_WorkSession >>(m.attr("XSControl_WorkSession"))
        .def(py::init<  >()  )
        .def("ClearData",
             (void (XSControl_WorkSession::*)( const Standard_Integer  ) ) static_cast<void (XSControl_WorkSession::*)( const Standard_Integer  ) >(&XSControl_WorkSession::ClearData),
             R"#(In addition to basic ClearData, clears Transfer and Management for interactive use, for mode = 0,1,2 and over 4 Plus : mode = 5 to clear Transfers (both ways) only mode = 6 to clear enforced results mode = 7 to clear transfers, results)#"  , py::arg("theMode"))
        .def("SelectNorm",
             (Standard_Boolean (XSControl_WorkSession::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (XSControl_WorkSession::*)( const Standard_CString  ) >(&XSControl_WorkSession::SelectNorm),
             R"#(Selects a Norm defined by its name. A Norm is described and handled by a Controller Returns True if done, False if <normname> is unknown)#"  , py::arg("theNormName"))
        .def("SetController",
             (void (XSControl_WorkSession::*)( const opencascade::handle<XSControl_Controller> &  ) ) static_cast<void (XSControl_WorkSession::*)( const opencascade::handle<XSControl_Controller> &  ) >(&XSControl_WorkSession::SetController),
             R"#(Selects a Norm defined by its Controller itself)#"  , py::arg("theCtl"))
        .def("SelectedNorm",
             (Standard_CString (XSControl_WorkSession::*)( const Standard_Boolean  ) const) static_cast<Standard_CString (XSControl_WorkSession::*)( const Standard_Boolean  ) const>(&XSControl_WorkSession::SelectedNorm),
             R"#(Returns the name of the last Selected Norm. If none is defined, returns an empty string By default, returns the complete name of the norm If <rsc> is True, returns the short name used for resource)#"  , py::arg("theRsc")=static_cast<const Standard_Boolean>(Standard_False))
        .def("NormAdaptor",
             (const opencascade::handle<XSControl_Controller> & (XSControl_WorkSession::*)() const) static_cast<const opencascade::handle<XSControl_Controller> & (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::NormAdaptor),
             R"#(Returns the norm controller itself)#" )
        .def("Context",
             (const NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (XSControl_WorkSession::*)() const) static_cast<const NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::Context),
             R"#(Returns the current Context List, Null if not defined The Context is given to the TransientProcess for TransferRead)#" )
        .def("SetAllContext",
             (void (XSControl_WorkSession::*)( const NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > &  ) ) static_cast<void (XSControl_WorkSession::*)( const NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > &  ) >(&XSControl_WorkSession::SetAllContext),
             R"#(Sets the current Context List, as a whole Sets it to the TransferReader)#"  , py::arg("theContext"))
        .def("ClearContext",
             (void (XSControl_WorkSession::*)() ) static_cast<void (XSControl_WorkSession::*)() >(&XSControl_WorkSession::ClearContext),
             R"#(Clears the whole current Context (nullifies it))#" )
        .def("PrintTransferStatus",
             (Standard_Boolean (XSControl_WorkSession::*)( const Standard_Integer ,  const Standard_Boolean ,  const opencascade::handle<Message_Messenger> &  ) const) static_cast<Standard_Boolean (XSControl_WorkSession::*)( const Standard_Integer ,  const Standard_Boolean ,  const opencascade::handle<Message_Messenger> &  ) const>(&XSControl_WorkSession::PrintTransferStatus),
             R"#(Prints the transfer status of a transferred item, as beeing the Mapped n0 <num>, from MapWriter if <wri> is True, or from MapReader if <wri> is False Returns True when done, False else (i.e. num out of range))#"  , py::arg("theNum"),  py::arg("theWri"),  py::arg("theS"))
        .def("InitTransferReader",
             (void (XSControl_WorkSession::*)( const Standard_Integer  ) ) static_cast<void (XSControl_WorkSession::*)( const Standard_Integer  ) >(&XSControl_WorkSession::InitTransferReader),
             R"#(Sets a Transfer Reader, by internal ways, according mode : 0 recreates it clear, 1 clears it (does not recreate) 2 aligns Roots of TransientProcess from final Results 3 aligns final Results from Roots of TransientProcess 4 begins a new transfer (by BeginTransfer) 5 recreates TransferReader then begins a new transfer)#"  , py::arg("theMode"))
        .def("SetTransferReader",
             (void (XSControl_WorkSession::*)( const opencascade::handle<XSControl_TransferReader> &  ) ) static_cast<void (XSControl_WorkSession::*)( const opencascade::handle<XSControl_TransferReader> &  ) >(&XSControl_WorkSession::SetTransferReader),
             R"#(Sets a Transfer Reader, which manages transfers on reading)#"  , py::arg("theTR"))
        .def("TransferReader",
             (const opencascade::handle<XSControl_TransferReader> & (XSControl_WorkSession::*)() const) static_cast<const opencascade::handle<XSControl_TransferReader> & (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::TransferReader),
             R"#(Returns the Transfer Reader, Null if not set)#" )
        .def("MapReader",
             (opencascade::handle<Transfer_TransientProcess> (XSControl_WorkSession::*)() const) static_cast<opencascade::handle<Transfer_TransientProcess> (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::MapReader),
             R"#(Returns the TransientProcess(internal data for TransferReader))#" )
        .def("SetMapReader",
             (Standard_Boolean (XSControl_WorkSession::*)( const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<Standard_Boolean (XSControl_WorkSession::*)( const opencascade::handle<Transfer_TransientProcess> &  ) >(&XSControl_WorkSession::SetMapReader),
             R"#(Changes the Map Reader, i.e. considers that the new one defines the relevant read results (forgets the former ones) Returns True when done, False in case of bad definition, i.e. if Model from TP differs from that of Session)#"  , py::arg("theTP"))
        .def("Result",
             (opencascade::handle<Standard_Transient> (XSControl_WorkSession::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const) static_cast<opencascade::handle<Standard_Transient> (XSControl_WorkSession::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) const>(&XSControl_WorkSession::Result),
             R"#(Returns the result attached to a starting entity If <mode> = 0, returns Final Result If <mode> = 1, considers Last Result If <mode> = 2, considers Final, else if absent, Last returns it as Transient, if result is not transient returns the Binder <mode> = 10,11,12 idem but returns the Binder itself (if it is not, e.g. Shape, returns the Binder) <mode> = 20, returns the ResultFromModel)#"  , py::arg("theEnt"),  py::arg("theMode"))
        .def("TransferReadOne",
             (Standard_Integer (XSControl_WorkSession::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Integer (XSControl_WorkSession::*)( const opencascade::handle<Standard_Transient> &  ) >(&XSControl_WorkSession::TransferReadOne),
             R"#(Commands the transfer of, either one entity, or a list I.E. calls the TransferReader after having analysed <ents> It is cumulated from the last BeginTransfer <ents> is processed by GiveList, hence : - <ents> a Selection : its SelectionResult - <ents> a HSequenceOfTransient : this list - <ents> the Model : in this specific case, all the roots, with no cumulation of former transfers (TransferReadRoots))#"  , py::arg("theEnts"))
        .def("TransferReadRoots",
             (Standard_Integer (XSControl_WorkSession::*)() ) static_cast<Standard_Integer (XSControl_WorkSession::*)() >(&XSControl_WorkSession::TransferReadRoots),
             R"#(Commands the transfer of all the root entities of the model i.e. calls TransferRoot from the TransferReader with the Graph No cumulation with former calls to TransferReadOne)#" )
        .def("NewModel",
             (opencascade::handle<Interface_InterfaceModel> (XSControl_WorkSession::*)() ) static_cast<opencascade::handle<Interface_InterfaceModel> (XSControl_WorkSession::*)() >(&XSControl_WorkSession::NewModel),
             R"#(produces and returns a new Model well conditionned It is produced by the Norm Controller It can be Null (if this function is not implemented))#" )
        .def("TransferWriter",
             (const opencascade::handle<XSControl_TransferWriter> & (XSControl_WorkSession::*)() const) static_cast<const opencascade::handle<XSControl_TransferWriter> & (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::TransferWriter),
             R"#(Returns the Transfer Reader, Null if not set)#" )
        .def("SetMapWriter",
             (Standard_Boolean (XSControl_WorkSession::*)( const opencascade::handle<Transfer_FinderProcess> &  ) ) static_cast<Standard_Boolean (XSControl_WorkSession::*)( const opencascade::handle<Transfer_FinderProcess> &  ) >(&XSControl_WorkSession::SetMapWriter),
             R"#(Changes the Map Reader, i.e. considers that the new one defines the relevant read results (forgets the former ones) Returns True when done, False if <FP> is Null)#"  , py::arg("theFP"))
        .def("TransferWriteShape",
             (IFSelect_ReturnStatus (XSControl_WorkSession::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) ) static_cast<IFSelect_ReturnStatus (XSControl_WorkSession::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) >(&XSControl_WorkSession::TransferWriteShape),
             R"#(Transfers a Shape from CasCade to a model of current norm, according to the last call to SetModeWriteShape Returns status :Done if OK, Fail if error during transfer, Error if transfer badly initialised)#"  , py::arg("theShape"),  py::arg("theCompGraph")=static_cast<const Standard_Boolean>(Standard_True))
        .def("TransferWriteCheckList",
             (Interface_CheckIterator (XSControl_WorkSession::*)() const) static_cast<Interface_CheckIterator (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::TransferWriteCheckList),
             R"#(Returns the check-list of last transfer (write) It is recorded in the FinderProcess, but it must be bound with resulting entities (in the resulting file model) rather than with original objects (in fact, their mappers))#" )
        .def("Vars",
             (const opencascade::handle<XSControl_Vars> & (XSControl_WorkSession::*)() const) static_cast<const opencascade::handle<XSControl_Vars> & (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::Vars),
             R"#(None)#" )
        .def("SetVars",
             (void (XSControl_WorkSession::*)( const opencascade::handle<XSControl_Vars> &  ) ) static_cast<void (XSControl_WorkSession::*)( const opencascade::handle<XSControl_Vars> &  ) >(&XSControl_WorkSession::SetVars),
             R"#(None)#"  , py::arg("theVars"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_WorkSession::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_WorkSession::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XSControl_WorkSession::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<XSControl_Vars ,opencascade::handle<XSControl_Vars>  , Standard_Transient >>(m.attr("XSControl_Vars"))
        .def(py::init<  >()  )
        .def("Set",
             (void (XSControl_Vars::*)( const Standard_CString ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (XSControl_Vars::*)( const Standard_CString ,  const opencascade::handle<Standard_Transient> &  ) >(&XSControl_Vars::Set),
             R"#(None)#"  , py::arg("name"),  py::arg("val"))
        .def("SetPoint",
             (void (XSControl_Vars::*)( const Standard_CString ,  const gp_Pnt &  ) ) static_cast<void (XSControl_Vars::*)( const Standard_CString ,  const gp_Pnt &  ) >(&XSControl_Vars::SetPoint),
             R"#(None)#"  , py::arg("name"),  py::arg("val"))
        .def("SetPoint2d",
             (void (XSControl_Vars::*)( const Standard_CString ,  const gp_Pnt2d &  ) ) static_cast<void (XSControl_Vars::*)( const Standard_CString ,  const gp_Pnt2d &  ) >(&XSControl_Vars::SetPoint2d),
             R"#(None)#"  , py::arg("name"),  py::arg("val"))
        .def("SetShape",
             (void (XSControl_Vars::*)( const Standard_CString ,  const TopoDS_Shape &  ) ) static_cast<void (XSControl_Vars::*)( const Standard_CString ,  const TopoDS_Shape &  ) >(&XSControl_Vars::SetShape),
             R"#(None)#"  , py::arg("name"),  py::arg("val"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_Vars::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_Vars::*)() const>(&XSControl_Vars::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_Vars::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XSControl_Vars::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<XSControl_ConnectedShapes ,opencascade::handle<XSControl_ConnectedShapes>  , IFSelect_SelectExplore >>(m.attr("XSControl_ConnectedShapes"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<XSControl_TransferReader> & >()  , py::arg("TR") )
        .def("SetReader",
             (void (XSControl_ConnectedShapes::*)( const opencascade::handle<XSControl_TransferReader> &  ) ) static_cast<void (XSControl_ConnectedShapes::*)( const opencascade::handle<XSControl_TransferReader> &  ) >(&XSControl_ConnectedShapes::SetReader),
             R"#(Sets a TransferReader to sort entities : it brings the TransferProcess which may change, while the TransferReader does not)#"  , py::arg("TR"))
        .def("Explore",
             (Standard_Boolean (XSControl_ConnectedShapes::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const) static_cast<Standard_Boolean (XSControl_ConnectedShapes::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const>(&XSControl_ConnectedShapes::Explore),
             R"#(Explores an entity : entities from which are connected to that produced by this entity, including itself)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("ExploreLabel",
             (TCollection_AsciiString (XSControl_ConnectedShapes::*)() const) static_cast<TCollection_AsciiString (XSControl_ConnectedShapes::*)() const>(&XSControl_ConnectedShapes::ExploreLabel),
             R"#(Returns a text defining the criterium. "Connected Entities through produced Shapes")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_ConnectedShapes::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_ConnectedShapes::*)() const>(&XSControl_ConnectedShapes::DynamicType),
             R"#(None)#" )
        .def_static("AdjacentEntities_s",
                    (opencascade::handle<TColStd_HSequenceOfTransient> (*)( const TopoDS_Shape & ,  const opencascade::handle<Transfer_TransientProcess> & ,  const TopAbs_ShapeEnum  ) ) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (*)( const TopoDS_Shape & ,  const opencascade::handle<Transfer_TransientProcess> & ,  const TopAbs_ShapeEnum  ) >(&XSControl_ConnectedShapes::AdjacentEntities),
                    R"#(This functions considers a shape from a transfer and performs the search function explained above)#"  , py::arg("ashape"),  py::arg("TP"),  py::arg("type"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_ConnectedShapes::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XSControl_ConnectedShapes::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<XSControl_SelectForTransfer ,opencascade::handle<XSControl_SelectForTransfer>  , IFSelect_SelectExtract >>(m.attr("XSControl_SelectForTransfer"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<XSControl_TransferReader> & >()  , py::arg("TR") )
        .def("SetReader",
             (void (XSControl_SelectForTransfer::*)( const opencascade::handle<XSControl_TransferReader> &  ) ) static_cast<void (XSControl_SelectForTransfer::*)( const opencascade::handle<XSControl_TransferReader> &  ) >(&XSControl_SelectForTransfer::SetReader),
             R"#(Sets a TransferReader to sort entities : it brings the Actor, which may change, while the TransferReader does not)#"  , py::arg("TR"))
        .def("SetActor",
             (void (XSControl_SelectForTransfer::*)( const opencascade::handle<Transfer_ActorOfTransientProcess> &  ) ) static_cast<void (XSControl_SelectForTransfer::*)( const opencascade::handle<Transfer_ActorOfTransientProcess> &  ) >(&XSControl_SelectForTransfer::SetActor),
             R"#(Sets a precise actor to sort entities This definition oversedes the creation with a TransferReader)#"  , py::arg("act"))
        .def("Actor",
             (opencascade::handle<Transfer_ActorOfTransientProcess> (XSControl_SelectForTransfer::*)() const) static_cast<opencascade::handle<Transfer_ActorOfTransientProcess> (XSControl_SelectForTransfer::*)() const>(&XSControl_SelectForTransfer::Actor),
             R"#(Returns the Actor used as precised one. Returns a Null Handle for a creation from a TransferReader without any further setting)#" )
        .def("Reader",
             (opencascade::handle<XSControl_TransferReader> (XSControl_SelectForTransfer::*)() const) static_cast<opencascade::handle<XSControl_TransferReader> (XSControl_SelectForTransfer::*)() const>(&XSControl_SelectForTransfer::Reader),
             R"#(Returns the Reader (if created with a Reader) Returns a Null Handle if not created with a Reader)#" )
        .def("Sort",
             (Standard_Boolean (XSControl_SelectForTransfer::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_Boolean (XSControl_SelectForTransfer::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&XSControl_SelectForTransfer::Sort),
             R"#(Returns True for an Entity which is recognized by the Actor, either the precised one, or the one defined by TransferReader)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("ExtractLabel",
             (TCollection_AsciiString (XSControl_SelectForTransfer::*)() const) static_cast<TCollection_AsciiString (XSControl_SelectForTransfer::*)() const>(&XSControl_SelectForTransfer::ExtractLabel),
             R"#(Returns a text defining the criterium : "Recognized for Transfer [(current actor)]")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_SelectForTransfer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_SelectForTransfer::*)() const>(&XSControl_SelectForTransfer::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_SelectForTransfer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XSControl_SelectForTransfer::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/XSControl_Writer.hxx
// ./opencascade/XSControl.hxx
// ./opencascade/XSControl_Reader.hxx
// ./opencascade/XSControl_Vars.hxx
// ./opencascade/XSControl_FuncShape.hxx
// ./opencascade/XSControl_Functions.hxx
// ./opencascade/XSControl_SignTransferStatus.hxx
// ./opencascade/XSControl_SelectForTransfer.hxx
// ./opencascade/XSControl_Controller.hxx
// ./opencascade/XSControl_TransferReader.hxx
// ./opencascade/XSControl_TransferWriter.hxx
// ./opencascade/XSControl_ConnectedShapes.hxx
// ./opencascade/XSControl_Utils.hxx
// ./opencascade/XSControl_WorkSession.hxx

// operators

// register typdefs
// ./opencascade/XSControl_Writer.hxx
// ./opencascade/XSControl.hxx
// ./opencascade/XSControl_Reader.hxx
// ./opencascade/XSControl_Vars.hxx
// ./opencascade/XSControl_FuncShape.hxx
// ./opencascade/XSControl_Functions.hxx
// ./opencascade/XSControl_SignTransferStatus.hxx
// ./opencascade/XSControl_SelectForTransfer.hxx
// ./opencascade/XSControl_Controller.hxx
// ./opencascade/XSControl_TransferReader.hxx
// ./opencascade/XSControl_TransferWriter.hxx
// ./opencascade/XSControl_ConnectedShapes.hxx
// ./opencascade/XSControl_Utils.hxx
// ./opencascade/XSControl_WorkSession.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

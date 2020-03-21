
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <XSControl_TransferReader.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <XSControl_TransferReader.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_TransientProcess.hxx>
#include <XSControl_Controller.hxx>
#include <TopoDS_Shape.hxx>
#include <Interface_CheckIterator.hxx>
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
#include <XSControl_TransferReader.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <XSControl_Controller.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_HGraph.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Transfer_ResultFromModel.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_Graph.hxx>
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
#include <XSControl_WorkSession.hxx>
#include <TCollection_AsciiString.hxx>
#include <XSControl_WorkSession.hxx>
#include <Interface_InterfaceModel.hxx>
#include <XSControl_Controller.hxx>
#include <XSControl_TransferReader.hxx>
#include <XSControl_Vars.hxx>
#include <Message_Messenger.hxx>
#include <Transfer_TransientProcess.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom_Geometry.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Shape.hxx>
#include <Standard_TypeMismatch.hxx>

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

    // default constructor
    register_default_constructor<XSControl , shared_ptr<XSControl>>(m,"XSControl");

    static_cast<py::class_<XSControl , shared_ptr<XSControl> >>(m.attr("XSControl"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XSControl_ConnectedShapes ,opencascade::handle<XSControl_ConnectedShapes> , IFSelect_SelectExplore>>(m.attr("XSControl_ConnectedShapes"))
    // constructors
    // custom constructors
    // methods
        .def("Explore",
             (Standard_Boolean (XSControl_ConnectedShapes::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & , Interface_EntityIterator & ) const) static_cast<Standard_Boolean (XSControl_ConnectedShapes::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & , Interface_EntityIterator & ) const>(&XSControl_ConnectedShapes::Explore),
             R"#(Explores an entity : entities from which are connected to that produced by this entity, including itself)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("ExploreLabel",
             (TCollection_AsciiString (XSControl_ConnectedShapes::*)() const) static_cast<TCollection_AsciiString (XSControl_ConnectedShapes::*)() const>(&XSControl_ConnectedShapes::ExploreLabel),
             R"#(Returns a text defining the criterium. "Connected Entities through produced Shapes")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_ConnectedShapes::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_ConnectedShapes::*)() const>(&XSControl_ConnectedShapes::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_ConnectedShapes::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XSControl_Controller ,opencascade::handle<XSControl_Controller>,Py_XSControl_Controller , Standard_Transient>>(m.attr("XSControl_Controller"))
    // constructors
    // custom constructors
    // methods
        .def("AutoRecord",
             (void (XSControl_Controller::*)() const) static_cast<void (XSControl_Controller::*)() const>(&XSControl_Controller::AutoRecord),
             R"#(Records <me> is a general dictionary under Short and Long Names (see method Name))#" )
        .def("Name",
             (Standard_CString (XSControl_Controller::*)( const Standard_Boolean ) const) static_cast<Standard_CString (XSControl_Controller::*)( const Standard_Boolean ) const>(&XSControl_Controller::Name),
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
             (opencascade::handle<Transfer_ActorOfTransientProcess> (XSControl_Controller::*)( const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<opencascade::handle<Transfer_ActorOfTransientProcess> (XSControl_Controller::*)( const opencascade::handle<Interface_InterfaceModel> & ) const>(&XSControl_Controller::ActorRead),
             R"#(Returns the Actor for Read attached to the pair (norm,appli) It can be adapted for data of the input Model, as required Can be read from field then adapted with Model as required)#"  , py::arg("model"))
        .def("ActorWrite",
             (opencascade::handle<Transfer_ActorOfFinderProcess> (XSControl_Controller::*)() const) static_cast<opencascade::handle<Transfer_ActorOfFinderProcess> (XSControl_Controller::*)() const>(&XSControl_Controller::ActorWrite),
             R"#(Returns the Actor for Write attached to the pair (norm,appli) Read from field. Can be redefined)#" )
        .def("RecognizeWriteTransient",
             (Standard_Boolean (XSControl_Controller::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer ) const) static_cast<Standard_Boolean (XSControl_Controller::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer ) const>(&XSControl_Controller::RecognizeWriteTransient),
             R"#(Tells if <obj> (an application object) is a valid candidate for a transfer to a Model. By default, asks the ActorWrite if known (through a TransientMapper). Can be redefined)#"  , py::arg("obj"),  py::arg("modetrans")=static_cast<const Standard_Integer>(0))
        .def("TransferWriteTransient",
             (IFSelect_ReturnStatus (XSControl_Controller::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_FinderProcess> & , const opencascade::handle<Interface_InterfaceModel> & , const Standard_Integer ) const) static_cast<IFSelect_ReturnStatus (XSControl_Controller::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_FinderProcess> & , const opencascade::handle<Interface_InterfaceModel> & , const Standard_Integer ) const>(&XSControl_Controller::TransferWriteTransient),
             R"#(Takes one Transient Object and transfers it to an InterfaceModel (already created, e.g. by NewModel) (result is recorded in the model by AddWithRefs) FP records produced results and checks)#"  , py::arg("obj"),  py::arg("FP"),  py::arg("model"),  py::arg("modetrans")=static_cast<const Standard_Integer>(0))
        .def("RecognizeWriteShape",
             (Standard_Boolean (XSControl_Controller::*)( const TopoDS_Shape & , const Standard_Integer ) const) static_cast<Standard_Boolean (XSControl_Controller::*)( const TopoDS_Shape & , const Standard_Integer ) const>(&XSControl_Controller::RecognizeWriteShape),
             R"#(Tells if a shape is valid for a transfer to a model Asks the ActorWrite (through a ShapeMapper))#"  , py::arg("shape"),  py::arg("modetrans")=static_cast<const Standard_Integer>(0))
        .def("TransferWriteShape",
             (IFSelect_ReturnStatus (XSControl_Controller::*)( const TopoDS_Shape & , const opencascade::handle<Transfer_FinderProcess> & , const opencascade::handle<Interface_InterfaceModel> & , const Standard_Integer ) const) static_cast<IFSelect_ReturnStatus (XSControl_Controller::*)( const TopoDS_Shape & , const opencascade::handle<Transfer_FinderProcess> & , const opencascade::handle<Interface_InterfaceModel> & , const Standard_Integer ) const>(&XSControl_Controller::TransferWriteShape),
             R"#(Takes one Shape and transfers it to an InterfaceModel (already created, e.g. by NewModel) Default uses ActorWrite; can be redefined as necessary Returned value is a status, as follows : Done OK , Void : No Result , Fail : Fail (e.g. exception) Error : bad conditions , bad model or null model)#"  , py::arg("shape"),  py::arg("FP"),  py::arg("model"),  py::arg("modetrans")=static_cast<const Standard_Integer>(0))
        .def("Customise",
             (void (XSControl_Controller::*)( opencascade::handle<XSControl_WorkSession> & ) ) static_cast<void (XSControl_Controller::*)( opencascade::handle<XSControl_WorkSession> & ) >(&XSControl_Controller::Customise),
             R"#(Customises a WorkSession, by adding to it the recorded items (by AddSessionItem))#"  , py::arg("WS"))
        .def("AdaptorSession",
             (const NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (XSControl_Controller::*)() const) static_cast<const NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (XSControl_Controller::*)() const>(&XSControl_Controller::AdaptorSession),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_Controller::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_Controller::*)() const>(&XSControl_Controller::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_Controller::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<XSControl_FuncShape , shared_ptr<XSControl_FuncShape>>(m,"XSControl_FuncShape");

    static_cast<py::class_<XSControl_FuncShape , shared_ptr<XSControl_FuncShape> >>(m.attr("XSControl_FuncShape"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<XSControl_Functions , shared_ptr<XSControl_Functions>>(m,"XSControl_Functions");

    static_cast<py::class_<XSControl_Functions , shared_ptr<XSControl_Functions> >>(m.attr("XSControl_Functions"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XSControl_Reader , shared_ptr<XSControl_Reader> >>(m.attr("XSControl_Reader"))
    // constructors
    // custom constructors
    // methods
        .def("NbRootsForTransfer",
             (Standard_Integer (XSControl_Reader::*)() ) static_cast<Standard_Integer (XSControl_Reader::*)() >(&XSControl_Reader::NbRootsForTransfer),
             R"#(Determines the list of root entities which are candidate for a transfer to a Shape, and returns the number of entities in the list)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XSControl_SelectForTransfer ,opencascade::handle<XSControl_SelectForTransfer> , IFSelect_SelectExtract>>(m.attr("XSControl_SelectForTransfer"))
    // constructors
    // custom constructors
    // methods
        .def("Sort",
             (Standard_Boolean (XSControl_SelectForTransfer::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (XSControl_SelectForTransfer::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&XSControl_SelectForTransfer::Sort),
             R"#(Returns True for an Entity which is recognized by the Actor, either the precised one, or the one defined by TransferReader)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("ExtractLabel",
             (TCollection_AsciiString (XSControl_SelectForTransfer::*)() const) static_cast<TCollection_AsciiString (XSControl_SelectForTransfer::*)() const>(&XSControl_SelectForTransfer::ExtractLabel),
             R"#(Returns a text defining the criterium : "Recognized for Transfer [(current actor)]")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_SelectForTransfer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_SelectForTransfer::*)() const>(&XSControl_SelectForTransfer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_SelectForTransfer::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XSControl_SignTransferStatus ,opencascade::handle<XSControl_SignTransferStatus> , IFSelect_Signature>>(m.attr("XSControl_SignTransferStatus"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_CString (XSControl_SignTransferStatus::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_CString (XSControl_SignTransferStatus::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&XSControl_SignTransferStatus::Value),
             R"#(Returns the Signature for a Transient object, as its transfer status)#"  , py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_SignTransferStatus::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_SignTransferStatus::*)() const>(&XSControl_SignTransferStatus::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_SignTransferStatus::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XSControl_TransferReader ,opencascade::handle<XSControl_TransferReader> , Standard_Transient>>(m.attr("XSControl_TransferReader"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetActor",
             (void (XSControl_TransferReader::*)( const opencascade::handle<Transfer_ActorOfTransientProcess> & ) ) static_cast<void (XSControl_TransferReader::*)( const opencascade::handle<Transfer_ActorOfTransientProcess> & ) >(&XSControl_TransferReader::SetActor),
             R"#(Sets the Actor directly : this value will be used if the Controller is not set)#"  , py::arg("theActor"))
        .def("Model",
             (const opencascade::handle<Interface_InterfaceModel> & (XSControl_TransferReader::*)() const) static_cast<const opencascade::handle<Interface_InterfaceModel> & (XSControl_TransferReader::*)() const>(&XSControl_TransferReader::Model),
             R"#(Returns the currently set InterfaceModel)#" )
        .def("Context",
             (NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (XSControl_TransferReader::*)() ) static_cast<NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (XSControl_TransferReader::*)() >(&XSControl_TransferReader::Context),
             R"#(Returns (modifiable) the whole definition of Context Rather for internal use (ex.: preparing and setting in once))#" )
        .def("SetFileName",
             (void (XSControl_TransferReader::*)( const Standard_CString ) ) static_cast<void (XSControl_TransferReader::*)( const Standard_CString ) >(&XSControl_TransferReader::SetFileName),
             R"#(Sets a new value for (loaded) file name)#"  , py::arg("theName"))
        .def("FileName",
             (Standard_CString (XSControl_TransferReader::*)() const) static_cast<Standard_CString (XSControl_TransferReader::*)() const>(&XSControl_TransferReader::FileName),
             R"#(Returns actual value of file name)#" )
        .def("TransientProcess",
             (const opencascade::handle<Transfer_TransientProcess> & (XSControl_TransferReader::*)() const) static_cast<const opencascade::handle<Transfer_TransientProcess> & (XSControl_TransferReader::*)() const>(&XSControl_TransferReader::TransientProcess),
             R"#(Returns the currently used TransientProcess It is computed from the model by TransferReadRoots, or by BeginTransferRead)#" )
        .def("SetTransientProcess",
             (void (XSControl_TransferReader::*)( const opencascade::handle<Transfer_TransientProcess> & ) ) static_cast<void (XSControl_TransferReader::*)( const opencascade::handle<Transfer_TransientProcess> & ) >(&XSControl_TransferReader::SetTransientProcess),
             R"#(Forces the TransientProcess Remark : it also changes the Model and the Actor, from those recorded in the new TransientProcess)#"  , py::arg("theTP"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_TransferReader::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_TransferReader::*)() const>(&XSControl_TransferReader::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_TransferReader::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XSControl_TransferWriter ,opencascade::handle<XSControl_TransferWriter> , Standard_Transient>>(m.attr("XSControl_TransferWriter"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("FinderProcess",
             (const opencascade::handle<Transfer_FinderProcess> & (XSControl_TransferWriter::*)() const) static_cast<const opencascade::handle<Transfer_FinderProcess> & (XSControl_TransferWriter::*)() const>(&XSControl_TransferWriter::FinderProcess),
             R"#(Returns the FinderProcess itself)#" )
        .def("SetFinderProcess",
             (void (XSControl_TransferWriter::*)( const opencascade::handle<Transfer_FinderProcess> & ) ) static_cast<void (XSControl_TransferWriter::*)( const opencascade::handle<Transfer_FinderProcess> & ) >(&XSControl_TransferWriter::SetFinderProcess),
             R"#(Sets a new FinderProcess and forgets the former one)#"  , py::arg("theFP"))
        .def("Controller",
             (const opencascade::handle<XSControl_Controller> & (XSControl_TransferWriter::*)() const) static_cast<const opencascade::handle<XSControl_Controller> & (XSControl_TransferWriter::*)() const>(&XSControl_TransferWriter::Controller),
             R"#(Returns the currently used Controller)#" )
        .def("SetController",
             (void (XSControl_TransferWriter::*)( const opencascade::handle<XSControl_Controller> & ) ) static_cast<void (XSControl_TransferWriter::*)( const opencascade::handle<XSControl_Controller> & ) >(&XSControl_TransferWriter::SetController),
             R"#(Sets a new Controller, also sets a new FinderProcess)#"  , py::arg("theCtl"))
        .def("TransferMode",
             (Standard_Integer (XSControl_TransferWriter::*)() const) static_cast<Standard_Integer (XSControl_TransferWriter::*)() const>(&XSControl_TransferWriter::TransferMode),
             R"#(Returns the current Transfer Mode (an Integer) It will be interpreted by the Controller to run Transfers This call form could be later replaced by more specific ones (parameters suited for each norm / transfer case))#" )
        .def("SetTransferMode",
             (void (XSControl_TransferWriter::*)( const Standard_Integer ) ) static_cast<void (XSControl_TransferWriter::*)( const Standard_Integer ) >(&XSControl_TransferWriter::SetTransferMode),
             R"#(Changes the Transfer Mode)#"  , py::arg("theMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_TransferWriter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_TransferWriter::*)() const>(&XSControl_TransferWriter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_TransferWriter::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XSControl_Utils , shared_ptr<XSControl_Utils> >>(m.attr("XSControl_Utils"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XSControl_Vars ,opencascade::handle<XSControl_Vars> , Standard_Transient>>(m.attr("XSControl_Vars"))
    // constructors
    // custom constructors
    // methods
        .def("Set",
             (void (XSControl_Vars::*)( const Standard_CString , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (XSControl_Vars::*)( const Standard_CString , const opencascade::handle<Standard_Transient> & ) >(&XSControl_Vars::Set),
             R"#(None)#"  , py::arg("name"),  py::arg("val"))
        .def("SetPoint",
             (void (XSControl_Vars::*)( const Standard_CString , const gp_Pnt & ) ) static_cast<void (XSControl_Vars::*)( const Standard_CString , const gp_Pnt & ) >(&XSControl_Vars::SetPoint),
             R"#(None)#"  , py::arg("name"),  py::arg("val"))
        .def("SetPoint2d",
             (void (XSControl_Vars::*)( const Standard_CString , const gp_Pnt2d & ) ) static_cast<void (XSControl_Vars::*)( const Standard_CString , const gp_Pnt2d & ) >(&XSControl_Vars::SetPoint2d),
             R"#(None)#"  , py::arg("name"),  py::arg("val"))
        .def("SetShape",
             (void (XSControl_Vars::*)( const Standard_CString , const TopoDS_Shape & ) ) static_cast<void (XSControl_Vars::*)( const Standard_CString , const TopoDS_Shape & ) >(&XSControl_Vars::SetShape),
             R"#(None)#"  , py::arg("name"),  py::arg("val"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_Vars::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_Vars::*)() const>(&XSControl_Vars::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_Vars::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XSControl_WorkSession ,opencascade::handle<XSControl_WorkSession> , IFSelect_WorkSession>>(m.attr("XSControl_WorkSession"))
    // constructors
    // custom constructors
    // methods
        .def("ClearData",
             (void (XSControl_WorkSession::*)( const Standard_Integer ) ) static_cast<void (XSControl_WorkSession::*)( const Standard_Integer ) >(&XSControl_WorkSession::ClearData),
             R"#(In addition to basic ClearData, clears Transfer and Management for interactive use, for mode = 0,1,2 and over 4 Plus : mode = 5 to clear Transfers (both ways) only mode = 6 to clear enforced results mode = 7 to clear transfers, results)#"  , py::arg("theMode"))
        .def("NormAdaptor",
             (const opencascade::handle<XSControl_Controller> & (XSControl_WorkSession::*)() const) static_cast<const opencascade::handle<XSControl_Controller> & (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::NormAdaptor),
             R"#(Returns the norm controller itself)#" )
        .def("Context",
             (const NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (XSControl_WorkSession::*)() const) static_cast<const NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::Context),
             R"#(Returns the current Context List, Null if not defined The Context is given to the TransientProcess for TransferRead)#" )
        .def("TransferReader",
             (const opencascade::handle<XSControl_TransferReader> & (XSControl_WorkSession::*)() const) static_cast<const opencascade::handle<XSControl_TransferReader> & (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::TransferReader),
             R"#(Returns the Transfer Reader, Null if not set)#" )
        .def("TransferWriter",
             (const opencascade::handle<XSControl_TransferWriter> & (XSControl_WorkSession::*)() const) static_cast<const opencascade::handle<XSControl_TransferWriter> & (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::TransferWriter),
             R"#(Returns the Transfer Reader, Null if not set)#" )
        .def("SetMapWriter",
             (Standard_Boolean (XSControl_WorkSession::*)( const opencascade::handle<Transfer_FinderProcess> & ) ) static_cast<Standard_Boolean (XSControl_WorkSession::*)( const opencascade::handle<Transfer_FinderProcess> & ) >(&XSControl_WorkSession::SetMapWriter),
             R"#(Changes the Map Reader, i.e. considers that the new one defines the relevant read results (forgets the former ones) Returns True when done, False if <FP> is Null)#"  , py::arg("theFP"))
        .def("Vars",
             (const opencascade::handle<XSControl_Vars> & (XSControl_WorkSession::*)() const) static_cast<const opencascade::handle<XSControl_Vars> & (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::Vars),
             R"#(None)#" )
        .def("SetVars",
             (void (XSControl_WorkSession::*)( const opencascade::handle<XSControl_Vars> & ) ) static_cast<void (XSControl_WorkSession::*)( const opencascade::handle<XSControl_Vars> & ) >(&XSControl_WorkSession::SetVars),
             R"#(None)#"  , py::arg("theVars"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XSControl_WorkSession::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XSControl_WorkSession::*)() const>(&XSControl_WorkSession::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XSControl_WorkSession::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XSControl_Writer , shared_ptr<XSControl_Writer> >>(m.attr("XSControl_Writer"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/XSControl_SelectForTransfer.hxx
// ./opencascade/XSControl_Functions.hxx
// ./opencascade/XSControl_ConnectedShapes.hxx
// ./opencascade/XSControl_TransferWriter.hxx
// ./opencascade/XSControl_Writer.hxx
// ./opencascade/XSControl.hxx
// ./opencascade/XSControl_SignTransferStatus.hxx
// ./opencascade/XSControl_TransferReader.hxx
// ./opencascade/XSControl_Controller.hxx
// ./opencascade/XSControl_FuncShape.hxx
// ./opencascade/XSControl_Reader.hxx
// ./opencascade/XSControl_WorkSession.hxx
// ./opencascade/XSControl_Vars.hxx
// ./opencascade/XSControl_Utils.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

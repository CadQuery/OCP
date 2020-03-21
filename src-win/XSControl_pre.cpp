
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <XSControl_TransferReader.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <XSControl_WorkSession.hxx>
#include <TCollection_AsciiString.hxx>
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
#include <Geom_Geometry.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Shape.hxx>
#include <XSControl_TransferReader.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <XSControl_WorkSession.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TopoDS_Shape.hxx>
#include <XSControl_Controller.hxx>
#include <XSControl_TransferReader.hxx>
#include <XSControl_Vars.hxx>
#include <Message_Messenger.hxx>
#include <Transfer_TransientProcess.hxx>
#include <TopoDS_Shape.hxx>
#include <XSControl_WorkSession.hxx>
#include <Interface_InterfaceModel.hxx>
#include <XSControl_TransferReader.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_TransientProcess.hxx>
#include <XSControl_Controller.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_HGraph.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Transfer_ResultFromModel.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_Graph.hxx>
#include <Standard_TypeMismatch.hxx>
#include <XSControl_Controller.hxx>
#include <TopoDS_Shape.hxx>
#include <Interface_CheckIterator.hxx>
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
void register_XSControl_enums(py::module &main_module) {


py::module m = main_module.def_submodule("XSControl", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_XSControl_Controller : public XSControl_Controller{
    public:
        using XSControl_Controller::XSControl_Controller;


        // public pure virtual
        opencascade::handle<Interface_InterfaceModel> NewModel() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Interface_InterfaceModel>,XSControl_Controller,NewModel,) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<XSControl , shared_ptr<XSControl> >(m,"XSControl",R"#(This package provides complements to IFSelect & Co for control of a session)#");
    py::class_<XSControl_ConnectedShapes ,opencascade::handle<XSControl_ConnectedShapes> , IFSelect_SelectExplore>(m,"XSControl_ConnectedShapes",R"#(From a TopoDS_Shape, or from the entity which has produced it, searches for the shapes, and the entities which have produced them in last transfer, which are adjacent to it by VERTICESFrom a TopoDS_Shape, or from the entity which has produced it, searches for the shapes, and the entities which have produced them in last transfer, which are adjacent to it by VERTICESFrom a TopoDS_Shape, or from the entity which has produced it, searches for the shapes, and the entities which have produced them in last transfer, which are adjacent to it by VERTICES)#");
    py::class_<XSControl_Controller ,opencascade::handle<XSControl_Controller>,Py_XSControl_Controller , Standard_Transient>(m,"XSControl_Controller",R"#(This class allows a general X-STEP engine to run generic functions on any interface norm, in the same way. It includes the transfer operations. I.e. it gathers the already available general modules, the engine has just to know itThis class allows a general X-STEP engine to run generic functions on any interface norm, in the same way. It includes the transfer operations. I.e. it gathers the already available general modules, the engine has just to know itThis class allows a general X-STEP engine to run generic functions on any interface norm, in the same way. It includes the transfer operations. I.e. it gathers the already available general modules, the engine has just to know it)#");
    py::class_<XSControl_FuncShape , shared_ptr<XSControl_FuncShape> >(m,"XSControl_FuncShape",R"#(Defines additionnal commands for XSControl to : - control of initialisation (xinit, xnorm, newmodel) - analyse of the result of a transfer (recorded in a TransientProcess for Read, FinderProcess for Write) : statistics, various lists (roots,complete,abnormal), what about one specific entity, producing a model with the abnormal result)#");
    py::class_<XSControl_Functions , shared_ptr<XSControl_Functions> >(m,"XSControl_Functions",R"#(Functions from XSControl gives access to actions which can be commanded with the resources provided by XSControl: especially Controller and Transfer)#");
    py::class_<XSControl_Reader , shared_ptr<XSControl_Reader> >(m,"XSControl_Reader",R"#(A groundwork to convert a shape to data which complies with a particular norm. This data can be that of a whole model or that of a specific list of entities in the model. You specify the list using a single selection or a combination of selections. A selection is an operator which computes a list of entities from a list given in input. To specify the input, you can use: - A predefined selection such as "xst-transferrable-roots" - A filter based on a signature. A signature is an operator which returns a string from an entity according to its type. For example: - "xst-type" (CDL) - "iges-level" - "step-type". A filter can be based on a signature by giving a value to be matched by the string returned. For example, "xst-type(Curve)". If no list is specified, the selection computes its list of entities from the whole model. To use this class, you have to initialize the transfer norm first, as shown in the example below. Example: Control_Reader reader; IFSelect_ReturnStatus status = reader.ReadFile (filename.); When using IGESControl_Reader or STEPControl_Reader - as the above example shows - the reader initializes the norm directly. Note that loading the file only stores the data. It does not translate this data. Shapes are accumulated by successive transfers. The last shape is cleared by: - ClearShapes which allows you to handle a new batch - TransferRoots which restarts the list of shapes from scratch.)#");
    py::class_<XSControl_SelectForTransfer ,opencascade::handle<XSControl_SelectForTransfer> , IFSelect_SelectExtract>(m,"XSControl_SelectForTransfer",R"#(This selection selects the entities which are recognised for transfer by an Actor for Read : current one or another one.This selection selects the entities which are recognised for transfer by an Actor for Read : current one or another one.This selection selects the entities which are recognised for transfer by an Actor for Read : current one or another one.)#");
    py::class_<XSControl_SignTransferStatus ,opencascade::handle<XSControl_SignTransferStatus> , IFSelect_Signature>(m,"XSControl_SignTransferStatus",R"#(This Signatures gives the Transfer Status of an entity, as recorded in a TransferProcess. It can be : - Void : not recorded, or recorded as void with no message (attributes are not taken into account) - Warning : no result, warning message(s), no fail - Fail : no result, fail messages (with or without warning) - Result.. : result, no message (neither warning nor fail) Result.. i.e. Result:TypeName of the result - Result../Warning : result, with warning but no fail - Result../Fail : result, with fail (.e. bad result) - Fail on run : no result yet recorded, no message, but an exception occurred while recording the result (this should not appear and indicates a programming error)This Signatures gives the Transfer Status of an entity, as recorded in a TransferProcess. It can be : - Void : not recorded, or recorded as void with no message (attributes are not taken into account) - Warning : no result, warning message(s), no fail - Fail : no result, fail messages (with or without warning) - Result.. : result, no message (neither warning nor fail) Result.. i.e. Result:TypeName of the result - Result../Warning : result, with warning but no fail - Result../Fail : result, with fail (.e. bad result) - Fail on run : no result yet recorded, no message, but an exception occurred while recording the result (this should not appear and indicates a programming error)This Signatures gives the Transfer Status of an entity, as recorded in a TransferProcess. It can be : - Void : not recorded, or recorded as void with no message (attributes are not taken into account) - Warning : no result, warning message(s), no fail - Fail : no result, fail messages (with or without warning) - Result.. : result, no message (neither warning nor fail) Result.. i.e. Result:TypeName of the result - Result../Warning : result, with warning but no fail - Result../Fail : result, with fail (.e. bad result) - Fail on run : no result yet recorded, no message, but an exception occurred while recording the result (this should not appear and indicates a programming error))#");
    py::class_<XSControl_TransferReader ,opencascade::handle<XSControl_TransferReader> , Standard_Transient>(m,"XSControl_TransferReader",R"#(A TransferReader performs, manages, handles results of, transfers done when reading a file (i.e. from entities of an InterfaceModel, to objects for Imagine)A TransferReader performs, manages, handles results of, transfers done when reading a file (i.e. from entities of an InterfaceModel, to objects for Imagine)A TransferReader performs, manages, handles results of, transfers done when reading a file (i.e. from entities of an InterfaceModel, to objects for Imagine))#");
    py::class_<XSControl_TransferWriter ,opencascade::handle<XSControl_TransferWriter> , Standard_Transient>(m,"XSControl_TransferWriter",R"#(TransferWriter gives help to control transfer to write a file after having converted data from Cascade/ImagineTransferWriter gives help to control transfer to write a file after having converted data from Cascade/ImagineTransferWriter gives help to control transfer to write a file after having converted data from Cascade/Imagine)#");
    py::class_<XSControl_Utils , shared_ptr<XSControl_Utils> >(m,"XSControl_Utils",R"#(This class provides various useful utility routines, to facilitate handling of most common data structures : transients (type, type name ...), strings (ascii or extended, pointed or handled or ...), shapes (reading, writing, testing ...), sequences & arrays (of strings, of transients, of shapes ...), ...)#");
    py::class_<XSControl_Vars ,opencascade::handle<XSControl_Vars> , Standard_Transient>(m,"XSControl_Vars",R"#(Defines a receptacle for externally defined variables, each one has a nameDefines a receptacle for externally defined variables, each one has a nameDefines a receptacle for externally defined variables, each one has a name)#");
    py::class_<XSControl_WorkSession ,opencascade::handle<XSControl_WorkSession> , IFSelect_WorkSession>(m,"XSControl_WorkSession",R"#(This WorkSession completes the basic one, by adding : - use of Controller, with norm selection... - management of transfers (both ways) with auxiliary classes TransferReader and TransferWriter -> these transfers may work with a Context List : its items are given by the user, according to the transfer to be i.e. it is interpreted by the Actors Each item is accessed by a NameThis WorkSession completes the basic one, by adding : - use of Controller, with norm selection... - management of transfers (both ways) with auxiliary classes TransferReader and TransferWriter -> these transfers may work with a Context List : its items are given by the user, according to the transfer to be i.e. it is interpreted by the Actors Each item is accessed by a NameThis WorkSession completes the basic one, by adding : - use of Controller, with norm selection... - management of transfers (both ways) with auxiliary classes TransferReader and TransferWriter -> these transfers may work with a Context List : its items are given by the user, according to the transfer to be i.e. it is interpreted by the Actors Each item is accessed by a Name)#");
    py::class_<XSControl_Writer , shared_ptr<XSControl_Writer> >(m,"XSControl_Writer",R"#(This class gives a simple way to create then write a Model compliant to a given norm, from a Shape The model can then be edited by tools by other appropriate tools)#");

};

// user-defined post-inclusion per module

// user-defined post

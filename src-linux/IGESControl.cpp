
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <ShapeExtend_WireData.hxx>
#include <Transfer_FinderProcess.hxx>
#include <IGESData_IGESModel.hxx>
#include <TopoDS_Shape.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESToBRep_IGESBoundary.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_FinderProcess.hxx>
#include <XSControl_WorkSession.hxx>
#include <Transfer_FinderProcess.hxx>
#include <XSControl_WorkSession.hxx>
#include <IGESData_IGESModel.hxx>

// module includes
#include <IGESControl_ActorWrite.hxx>
#include <IGESControl_AlgoContainer.hxx>
#include <IGESControl_Controller.hxx>
#include <IGESControl_IGESBoundary.hxx>
#include <IGESControl_Reader.hxx>
#include <IGESControl_ToolContainer.hxx>
#include <IGESControl_Writer.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESControl(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESControl"));


//Python trampoline classes

// classes


    static_cast<py::class_<IGESControl_ActorWrite ,opencascade::handle<IGESControl_ActorWrite> , Transfer_ActorOfFinderProcess>>(m.attr("IGESControl_ActorWrite"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Recognize",
             (Standard_Boolean (IGESControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & ) ) static_cast<Standard_Boolean (IGESControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & ) >(&IGESControl_ActorWrite::Recognize),
             R"#(Recognizes a ShapeMapper)#"  , py::arg("start"))
        .def("Transfer",
             (opencascade::handle<Transfer_Binder> (IGESControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Transfer_FinderProcess> & ) ) static_cast<opencascade::handle<Transfer_Binder> (IGESControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Transfer_FinderProcess> & ) >(&IGESControl_ActorWrite::Transfer),
             R"#(Transfers Shape to IGES Entities)#"  , py::arg("start"),  py::arg("FP"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESControl_ActorWrite::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESControl_ActorWrite::*)() const>(&IGESControl_ActorWrite::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESControl_ActorWrite::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESControl_ActorWrite::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESControl_AlgoContainer ,opencascade::handle<IGESControl_AlgoContainer> , IGESToBRep_AlgoContainer>>(m.attr("IGESControl_AlgoContainer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESControl_AlgoContainer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESControl_AlgoContainer::*)() const>(&IGESControl_AlgoContainer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESControl_AlgoContainer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESControl_AlgoContainer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESControl_Controller ,opencascade::handle<IGESControl_Controller> , XSControl_Controller>>(m.attr("IGESControl_Controller"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("modefnes")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("NewModel",
             (opencascade::handle<Interface_InterfaceModel> (IGESControl_Controller::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (IGESControl_Controller::*)() const>(&IGESControl_Controller::NewModel),
             R"#(Creates a new empty Model ready to receive data of the Norm. It is taken from IGES Template Model)#" )
        .def("ActorRead",
             (opencascade::handle<Transfer_ActorOfTransientProcess> (IGESControl_Controller::*)( const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<opencascade::handle<Transfer_ActorOfTransientProcess> (IGESControl_Controller::*)( const opencascade::handle<Interface_InterfaceModel> & ) const>(&IGESControl_Controller::ActorRead),
             R"#(Returns the Actor for Read attached to the pair (norm,appli) It is an Actor from IGESToBRep, adapted from an IGESModel : Unit, tolerances)#"  , py::arg("model"))
        .def("TransferWriteShape",
             (IFSelect_ReturnStatus (IGESControl_Controller::*)( const TopoDS_Shape & , const opencascade::handle<Transfer_FinderProcess> & , const opencascade::handle<Interface_InterfaceModel> & , const Standard_Integer ) const) static_cast<IFSelect_ReturnStatus (IGESControl_Controller::*)( const TopoDS_Shape & , const opencascade::handle<Transfer_FinderProcess> & , const opencascade::handle<Interface_InterfaceModel> & , const Standard_Integer ) const>(&IGESControl_Controller::TransferWriteShape),
             R"#(Takes one Shape and transfers it to the InterfaceModel (already created by NewModel for instance) <modetrans> is to be interpreted by each kind of XstepAdaptor Returns a status : 0 OK 1 No result 2 Fail -1 bad modeshape -2 bad model (requires an IGESModel) modeshape : 0 groupe of face (version < 5.1) 1 BREP-version 5.1 of IGES)#"  , py::arg("shape"),  py::arg("FP"),  py::arg("model"),  py::arg("modetrans")=static_cast<const Standard_Integer>(0))
        .def("Customise",
             (void (IGESControl_Controller::*)( opencascade::handle<XSControl_WorkSession> & ) ) static_cast<void (IGESControl_Controller::*)( opencascade::handle<XSControl_WorkSession> & ) >(&IGESControl_Controller::Customise),
             R"#(None)#"  , py::arg("WS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESControl_Controller::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESControl_Controller::*)() const>(&IGESControl_Controller::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Init_s",
                    (Standard_Boolean (*)() ) static_cast<Standard_Boolean (*)() >(&IGESControl_Controller::Init),
                    R"#(Standard Initialisation. It creates a Controller for IGES and records it to various names, available to select it later Returns True when done, False if could not be done Also, it creates and records an Adaptor for FNES)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESControl_Controller::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESControl_Controller::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESControl_IGESBoundary ,opencascade::handle<IGESControl_IGESBoundary> , IGESToBRep_IGESBoundary>>(m.attr("IGESControl_IGESBoundary"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const IGESToBRep_CurveAndSurface & >()  , py::arg("CS") )
    // custom constructors
    // methods
        .def("Check",
             (void (IGESControl_IGESBoundary::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (IGESControl_IGESBoundary::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&IGESControl_IGESBoundary::Check),
             R"#(Checks result of translation of IGES boundary entities (types 141, 142 or 508). Checks consistency of 2D and 3D representations and keeps only one if they are inconsistent. Checks the closure of resulting wire and if it is not closed, checks 2D and 3D representation and updates the resulting wire to contain only closed representation.)#"  , py::arg("result"),  py::arg("checkclosure"),  py::arg("okCurve3d"),  py::arg("okCurve2d"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESControl_IGESBoundary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESControl_IGESBoundary::*)() const>(&IGESControl_IGESBoundary::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESControl_IGESBoundary::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESControl_IGESBoundary::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESControl_Reader , shared_ptr<IGESControl_Reader> , XSControl_Reader>>(m.attr("IGESControl_Reader"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<XSControl_WorkSession> &,const Standard_Boolean >()  , py::arg("WS"),  py::arg("scratch")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("SetReadVisible",
             (void (IGESControl_Reader::*)( const Standard_Boolean ) ) static_cast<void (IGESControl_Reader::*)( const Standard_Boolean ) >(&IGESControl_Reader::SetReadVisible),
             R"#(Set the transion of ALL Roots (if theReadOnlyVisible is False) or of Visible Roots (if theReadOnlyVisible is True))#"  , py::arg("ReadRoot"))
        .def("GetReadVisible",
             (Standard_Boolean (IGESControl_Reader::*)() const) static_cast<Standard_Boolean (IGESControl_Reader::*)() const>(&IGESControl_Reader::GetReadVisible),
             R"#(None)#" )
        .def("IGESModel",
             (opencascade::handle<IGESData_IGESModel> (IGESControl_Reader::*)() const) static_cast<opencascade::handle<IGESData_IGESModel> (IGESControl_Reader::*)() const>(&IGESControl_Reader::IGESModel),
             R"#(Returns the model as a IGESModel. It can then be consulted (header, product))#" )
        .def("NbRootsForTransfer",
             (Standard_Integer (IGESControl_Reader::*)() ) static_cast<Standard_Integer (IGESControl_Reader::*)() >(&IGESControl_Reader::NbRootsForTransfer),
             R"#(Determines the list of root entities from Model which are candidate for a transfer to a Shape (type of entities is PRODUCT) <theReadOnlyVisible> is taken into account to define roots)#" )
        .def("PrintTransferInfo",
             (void (IGESControl_Reader::*)( const IFSelect_PrintFail , const IFSelect_PrintCount ) const) static_cast<void (IGESControl_Reader::*)( const IFSelect_PrintFail , const IFSelect_PrintCount ) const>(&IGESControl_Reader::PrintTransferInfo),
             R"#(Prints Statistics and check list for Transfer)#"  , py::arg("failwarn"),  py::arg("mode"))
        .def("SetReadVisible",
             (void (IGESControl_Reader::*)( const Standard_Boolean ) ) static_cast<void (IGESControl_Reader::*)( const Standard_Boolean ) >(&IGESControl_Reader::SetReadVisible),
             R"#(Set the transion of ALL Roots (if theReadOnlyVisible is False) or of Visible Roots (if theReadOnlyVisible is True))#"  , py::arg("ReadRoot"))
        .def("GetReadVisible",
             (Standard_Boolean (IGESControl_Reader::*)() const) static_cast<Standard_Boolean (IGESControl_Reader::*)() const>(&IGESControl_Reader::GetReadVisible),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESControl_ToolContainer ,opencascade::handle<IGESControl_ToolContainer> , IGESToBRep_ToolContainer>>(m.attr("IGESControl_ToolContainer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IGESBoundary",
             (opencascade::handle<IGESToBRep_IGESBoundary> (IGESControl_ToolContainer::*)() const) static_cast<opencascade::handle<IGESToBRep_IGESBoundary> (IGESControl_ToolContainer::*)() const>(&IGESControl_ToolContainer::IGESBoundary),
             R"#(Returns IGESControl_IGESBoundary)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESControl_ToolContainer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESControl_ToolContainer::*)() const>(&IGESControl_ToolContainer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESControl_ToolContainer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESControl_ToolContainer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESControl_Writer , shared_ptr<IGESControl_Writer> >>(m.attr("IGESControl_Writer"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_CString,const Standard_Integer >()  , py::arg("unit"),  py::arg("modecr")=static_cast<const Standard_Integer>(0) )
        .def(py::init< const opencascade::handle<IGESData_IGESModel> &,const Standard_Integer >()  , py::arg("model"),  py::arg("modecr")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("Model",
             (const opencascade::handle<IGESData_IGESModel> & (IGESControl_Writer::*)() const) static_cast<const opencascade::handle<IGESData_IGESModel> & (IGESControl_Writer::*)() const>(&IGESControl_Writer::Model),
             R"#(Returns the IGES model to be written in output.)#" )
        .def("TransferProcess",
             (const opencascade::handle<Transfer_FinderProcess> & (IGESControl_Writer::*)() const) static_cast<const opencascade::handle<Transfer_FinderProcess> & (IGESControl_Writer::*)() const>(&IGESControl_Writer::TransferProcess),
             R"#(None)#" )
        .def("SetTransferProcess",
             (void (IGESControl_Writer::*)( const opencascade::handle<Transfer_FinderProcess> & ) ) static_cast<void (IGESControl_Writer::*)( const opencascade::handle<Transfer_FinderProcess> & ) >(&IGESControl_Writer::SetTransferProcess),
             R"#(Returns/Sets the TransferProcess : it contains final results and if some, check messages)#"  , py::arg("TP"))
        .def("AddShape",
             (Standard_Boolean (IGESControl_Writer::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (IGESControl_Writer::*)( const TopoDS_Shape & ) >(&IGESControl_Writer::AddShape),
             R"#(Translates a Shape to IGES Entities and adds them to the model Returns True if done, False if Shape not suitable for IGES or null)#"  , py::arg("sh"))
        .def("AddGeom",
             (Standard_Boolean (IGESControl_Writer::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IGESControl_Writer::*)( const opencascade::handle<Standard_Transient> & ) >(&IGESControl_Writer::AddGeom),
             R"#(Translates a Geometry (Surface or Curve) to IGES Entities and adds them to the model Returns True if done, False if geom is neither a Surface or a Curve suitable for IGES or is null)#"  , py::arg("geom"))
        .def("AddEntity",
             (Standard_Boolean (IGESControl_Writer::*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<Standard_Boolean (IGESControl_Writer::*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESControl_Writer::AddEntity),
             R"#(Adds an IGES entity (and the ones it references) to the model)#"  , py::arg("ent"))
        .def("ComputeModel",
             (void (IGESControl_Writer::*)() ) static_cast<void (IGESControl_Writer::*)() >(&IGESControl_Writer::ComputeModel),
             R"#(Computes the entities found in the model, which is ready to be written. This contrasts with the default computation of headers only.)#" )
        .def("Write",
             (Standard_Boolean (IGESControl_Writer::*)( std::ostream & , const Standard_Boolean ) ) static_cast<Standard_Boolean (IGESControl_Writer::*)( std::ostream & , const Standard_Boolean ) >(&IGESControl_Writer::Write),
             R"#(Computes then writes the model to an OStream Returns True when done, false in case of error)#"  , py::arg("S"),  py::arg("fnes")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Write",
             (Standard_Boolean (IGESControl_Writer::*)( const Standard_CString , const Standard_Boolean ) ) static_cast<Standard_Boolean (IGESControl_Writer::*)( const Standard_CString , const Standard_Boolean ) >(&IGESControl_Writer::Write),
             R"#(Prepares and writes an IGES model either to an OStream, S or to a file name,CString. Returns True if the operation was performed correctly and False if an error occurred (for instance, if the processor could not create the file).)#"  , py::arg("file"),  py::arg("fnes")=static_cast<const Standard_Boolean>(Standard_False))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IGESControl_IGESBoundary.hxx
// ./opencascade/IGESControl_Writer.hxx
// ./opencascade/IGESControl_ToolContainer.hxx
// ./opencascade/IGESControl_Controller.hxx
// ./opencascade/IGESControl_ActorWrite.hxx
// ./opencascade/IGESControl_Reader.hxx
// ./opencascade/IGESControl_AlgoContainer.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

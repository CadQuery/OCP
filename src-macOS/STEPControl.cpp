
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <XSControl_WorkSession.hxx>
#include <StepData_StepModel.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <XSControl_WorkSession.hxx>
#include <StepData_StepModel.hxx>
#include <TopoDS_Shape.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <XSControl_WorkSession.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_FinderProcess.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepShape_NonManifoldSurfaceShapeRepresentation.hxx>
#include <StepRepr_Representation.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepRepr_RepresentationRelationship.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <StepRepr_ShapeRepresentationRelationship.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepShape_FaceSurface.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Compound.hxx>

// module includes
#include <STEPControl_ActorRead.hxx>
#include <STEPControl_ActorWrite.hxx>
#include <STEPControl_Controller.hxx>
#include <STEPControl_Reader.hxx>
#include <STEPControl_StepModelType.hxx>
#include <STEPControl_Writer.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_STEPControl(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("STEPControl"));


//Python trampoline classes

// classes


    static_cast<py::class_<STEPControl_ActorRead ,opencascade::handle<STEPControl_ActorRead> , Transfer_ActorOfTransientProcess>>(m.attr("STEPControl_ActorRead"))
    // constructors
    // custom constructors
    // methods
        .def("Recognize",
             (Standard_Boolean (STEPControl_ActorRead::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (STEPControl_ActorRead::*)( const opencascade::handle<Standard_Transient> & ) >(&STEPControl_ActorRead::Recognize),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer",
             (opencascade::handle<Transfer_Binder> (STEPControl_ActorRead::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_TransientProcess> & ) ) static_cast<opencascade::handle<Transfer_Binder> (STEPControl_ActorRead::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_TransientProcess> & ) >(&STEPControl_ActorRead::Transfer),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPControl_ActorRead::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPControl_ActorRead::*)() const>(&STEPControl_ActorRead::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPControl_ActorRead::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPControl_ActorWrite ,opencascade::handle<STEPControl_ActorWrite> , Transfer_ActorOfFinderProcess>>(m.attr("STEPControl_ActorWrite"))
    // constructors
    // custom constructors
    // methods
        .def("Recognize",
             (Standard_Boolean (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & ) ) static_cast<Standard_Boolean (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & ) >(&STEPControl_ActorWrite::Recognize),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer",
             (opencascade::handle<Transfer_Binder> (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Transfer_FinderProcess> & ) ) static_cast<opencascade::handle<Transfer_Binder> (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Transfer_FinderProcess> & ) >(&STEPControl_ActorWrite::Transfer),
             R"#(None)#"  , py::arg("start"),  py::arg("FP"))
        .def("IsAssembly",
             (Standard_Boolean (STEPControl_ActorWrite::*)( TopoDS_Shape & ) const) static_cast<Standard_Boolean (STEPControl_ActorWrite::*)( TopoDS_Shape & ) const>(&STEPControl_ActorWrite::IsAssembly),
             R"#(Customizable method to check whether shape S should be written as assembly or not Default implementation uses flag GroupMode and analyses the shape itself NOTE: this method can modify shape)#"  , py::arg("S"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPControl_ActorWrite::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPControl_ActorWrite::*)() const>(&STEPControl_ActorWrite::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPControl_ActorWrite::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPControl_Controller ,opencascade::handle<STEPControl_Controller> , XSControl_Controller>>(m.attr("STEPControl_Controller"))
    // constructors
    // custom constructors
    // methods
        .def("NewModel",
             (opencascade::handle<Interface_InterfaceModel> (STEPControl_Controller::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (STEPControl_Controller::*)() const>(&STEPControl_Controller::NewModel),
             R"#(Creates a new empty Model ready to receive data of the Norm. It is taken from STEP Template Model)#" )
        .def("Customise",
             (void (STEPControl_Controller::*)( opencascade::handle<XSControl_WorkSession> & ) ) static_cast<void (STEPControl_Controller::*)( opencascade::handle<XSControl_WorkSession> & ) >(&STEPControl_Controller::Customise),
             R"#(None)#"  , py::arg("WS"))
        .def("TransferWriteShape",
             (IFSelect_ReturnStatus (STEPControl_Controller::*)( const TopoDS_Shape & , const opencascade::handle<Transfer_FinderProcess> & , const opencascade::handle<Interface_InterfaceModel> & , const Standard_Integer ) const) static_cast<IFSelect_ReturnStatus (STEPControl_Controller::*)( const TopoDS_Shape & , const opencascade::handle<Transfer_FinderProcess> & , const opencascade::handle<Interface_InterfaceModel> & , const Standard_Integer ) const>(&STEPControl_Controller::TransferWriteShape),
             R"#(Takes one Shape and transfers it to the InterfaceModel (already created by NewModel for instance) <modeshape> is to be interpreted by each kind of XstepAdaptor Returns a status : 0 OK 1 No result 2 Fail -1 bad modeshape -2 bad model (requires a StepModel) modeshape : 1 Facetted BRep, 2 Shell, 3 Manifold Solid)#"  , py::arg("shape"),  py::arg("FP"),  py::arg("model"),  py::arg("modetrans")=static_cast<const Standard_Integer>(0))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPControl_Controller::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPControl_Controller::*)() const>(&STEPControl_Controller::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPControl_Controller::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPControl_Reader , shared_ptr<STEPControl_Reader> , XSControl_Reader>>(m.attr("STEPControl_Reader"))
    // constructors
    // custom constructors
    // methods
        .def("NbRootsForTransfer",
             (Standard_Integer (STEPControl_Reader::*)() ) static_cast<Standard_Integer (STEPControl_Reader::*)() >(&STEPControl_Reader::NbRootsForTransfer),
             R"#(Determines the list of root entities from Model which are candidate for a transfer to a Shape (type of entities is PRODUCT))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPControl_Writer , shared_ptr<STEPControl_Writer> >>(m.attr("STEPControl_Writer"))
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
// ./opencascade/STEPControl_Reader.hxx
// ./opencascade/STEPControl_Writer.hxx
// ./opencascade/STEPControl_Controller.hxx
// ./opencascade/STEPControl_ActorWrite.hxx
// ./opencascade/STEPControl_ActorRead.hxx
// ./opencascade/STEPControl_StepModelType.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Transfer_FinderProcess.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepShape_NonManifoldSurfaceShapeRepresentation.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <XSControl_WorkSession.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_FinderProcess.hxx>
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
#include <XSControl_WorkSession.hxx>
#include <StepData_StepModel.hxx>
#include <TopoDS_Shape.hxx>
#include <XSControl_WorkSession.hxx>
#include <StepData_StepModel.hxx>
#include <StepRepr_RepresentationContext.hxx>

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


    static_cast<py::class_<STEPControl_ActorRead ,opencascade::handle<STEPControl_ActorRead>  , Transfer_ActorOfTransientProcess >>(m.attr("STEPControl_ActorRead"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Recognize",
             (Standard_Boolean (STEPControl_ActorRead::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Boolean (STEPControl_ActorRead::*)( const opencascade::handle<Standard_Transient> &  ) >(&STEPControl_ActorRead::Recognize),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer",
             (opencascade::handle<Transfer_Binder> (STEPControl_ActorRead::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (STEPControl_ActorRead::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&STEPControl_ActorRead::Transfer),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("TransferShape",
             (opencascade::handle<Transfer_Binder> (STEPControl_ActorRead::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_TransientProcess> & ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<Transfer_Binder> (STEPControl_ActorRead::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_TransientProcess> & ,  const Standard_Boolean  ) >(&STEPControl_ActorRead::TransferShape),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"),  py::arg("isManifold")=static_cast<const Standard_Boolean>(Standard_True))
        .def("PrepareUnits",
             (void (STEPControl_ActorRead::*)( const opencascade::handle<StepRepr_Representation> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<void (STEPControl_ActorRead::*)( const opencascade::handle<StepRepr_Representation> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&STEPControl_ActorRead::PrepareUnits),
             R"#(set units and tolerances context by given ShapeRepresentation)#"  , py::arg("rep"),  py::arg("TP"))
        .def("ResetUnits",
             (void (STEPControl_ActorRead::*)() ) static_cast<void (STEPControl_ActorRead::*)() >(&STEPControl_ActorRead::ResetUnits),
             R"#(reset units and tolerances context to default (mm, radians, read.precision.val, etc.))#" )
        .def("ComputeTransformation",
             (Standard_Boolean (STEPControl_ActorRead::*)( const opencascade::handle<StepGeom_Axis2Placement3d> & ,  const opencascade::handle<StepGeom_Axis2Placement3d> & ,  const opencascade::handle<StepRepr_Representation> & ,  const opencascade::handle<StepRepr_Representation> & ,  const opencascade::handle<Transfer_TransientProcess> & ,  gp_Trsf &  ) ) static_cast<Standard_Boolean (STEPControl_ActorRead::*)( const opencascade::handle<StepGeom_Axis2Placement3d> & ,  const opencascade::handle<StepGeom_Axis2Placement3d> & ,  const opencascade::handle<StepRepr_Representation> & ,  const opencascade::handle<StepRepr_Representation> & ,  const opencascade::handle<Transfer_TransientProcess> & ,  gp_Trsf &  ) >(&STEPControl_ActorRead::ComputeTransformation),
             R"#(Computes transformation defined by two axis placements (in MAPPED_ITEM or ITEM_DEFINED_TRANSFORMATION) taking into account their representation contexts (i.e. units, which may be different) Returns True if transformation is computed and is not an identity.)#"  , py::arg("Origin"),  py::arg("Target"),  py::arg("OrigContext"),  py::arg("TargContext"),  py::arg("TP"),  py::arg("Trsf"))
        .def("ComputeSRRWT",
             (Standard_Boolean (STEPControl_ActorRead::*)( const opencascade::handle<StepRepr_RepresentationRelationship> & ,  const opencascade::handle<Transfer_TransientProcess> & ,  gp_Trsf &  ) ) static_cast<Standard_Boolean (STEPControl_ActorRead::*)( const opencascade::handle<StepRepr_RepresentationRelationship> & ,  const opencascade::handle<Transfer_TransientProcess> & ,  gp_Trsf &  ) >(&STEPControl_ActorRead::ComputeSRRWT),
             R"#(Computes transformation defined by given REPRESENTATION_RELATIONSHIP_WITH_TRANSFORMATION)#"  , py::arg("SRR"),  py::arg("TP"),  py::arg("Trsf"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPControl_ActorRead::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPControl_ActorRead::*)() const>(&STEPControl_ActorRead::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPControl_ActorRead::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPControl_ActorRead::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPControl_ActorWrite ,opencascade::handle<STEPControl_ActorWrite>  , Transfer_ActorOfFinderProcess >>(m.attr("STEPControl_ActorWrite"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Recognize",
             (Standard_Boolean (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> &  ) ) static_cast<Standard_Boolean (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> &  ) >(&STEPControl_ActorWrite::Recognize),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer",
             (opencascade::handle<Transfer_Binder> (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_FinderProcess> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_FinderProcess> &  ) >(&STEPControl_ActorWrite::Transfer),
             R"#(None)#"  , py::arg("start"),  py::arg("FP"))
        .def("TransferSubShape",
             (opencascade::handle<Transfer_Binder> (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ,  opencascade::handle<StepGeom_Axis2Placement3d> & ,  const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<Transfer_Binder> (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ,  opencascade::handle<StepGeom_Axis2Placement3d> & ,  const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Boolean  ) >(&STEPControl_ActorWrite::TransferSubShape),
             R"#(None)#"  , py::arg("start"),  py::arg("SDR"),  py::arg("AX1"),  py::arg("FP"),  py::arg("shapeGroup")=static_cast<const opencascade::handle<TopTools_HSequenceOfShape> &>(NULL),  py::arg("isManifold")=static_cast<const Standard_Boolean>(Standard_True))
        .def("TransferShape",
             (opencascade::handle<Transfer_Binder> (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ,  const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<Transfer_Binder> (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ,  const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Boolean  ) >(&STEPControl_ActorWrite::TransferShape),
             R"#(None)#"  , py::arg("start"),  py::arg("SDR"),  py::arg("FP"),  py::arg("shapeGroup")=static_cast<const opencascade::handle<TopTools_HSequenceOfShape> &>(NULL),  py::arg("isManifold")=static_cast<const Standard_Boolean>(Standard_True))
        .def("TransferCompound",
             (opencascade::handle<Transfer_Binder> (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ,  const opencascade::handle<Transfer_FinderProcess> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (STEPControl_ActorWrite::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ,  const opencascade::handle<Transfer_FinderProcess> &  ) >(&STEPControl_ActorWrite::TransferCompound),
             R"#(None)#"  , py::arg("start"),  py::arg("SDR"),  py::arg("FP"))
        .def("SetMode",
             (void (STEPControl_ActorWrite::*)( const STEPControl_StepModelType  ) ) static_cast<void (STEPControl_ActorWrite::*)( const STEPControl_StepModelType  ) >(&STEPControl_ActorWrite::SetMode),
             R"#(None)#"  , py::arg("M"))
        .def("Mode",
             (STEPControl_StepModelType (STEPControl_ActorWrite::*)() const) static_cast<STEPControl_StepModelType (STEPControl_ActorWrite::*)() const>(&STEPControl_ActorWrite::Mode),
             R"#(None)#" )
        .def("SetGroupMode",
             (void (STEPControl_ActorWrite::*)( const Standard_Integer  ) ) static_cast<void (STEPControl_ActorWrite::*)( const Standard_Integer  ) >(&STEPControl_ActorWrite::SetGroupMode),
             R"#(None)#"  , py::arg("mode"))
        .def("GroupMode",
             (Standard_Integer (STEPControl_ActorWrite::*)() const) static_cast<Standard_Integer (STEPControl_ActorWrite::*)() const>(&STEPControl_ActorWrite::GroupMode),
             R"#(None)#" )
        .def("SetTolerance",
             (void (STEPControl_ActorWrite::*)( const Standard_Real  ) ) static_cast<void (STEPControl_ActorWrite::*)( const Standard_Real  ) >(&STEPControl_ActorWrite::SetTolerance),
             R"#(None)#"  , py::arg("Tol"))
        .def("IsAssembly",
             (Standard_Boolean (STEPControl_ActorWrite::*)( TopoDS_Shape &  ) const) static_cast<Standard_Boolean (STEPControl_ActorWrite::*)( TopoDS_Shape &  ) const>(&STEPControl_ActorWrite::IsAssembly),
             R"#(Customizable method to check whether shape S should be written as assembly or not Default implementation uses flag GroupMode and analyses the shape itself NOTE: this method can modify shape)#"  , py::arg("S"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPControl_ActorWrite::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPControl_ActorWrite::*)() const>(&STEPControl_ActorWrite::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPControl_ActorWrite::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPControl_ActorWrite::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPControl_Controller ,opencascade::handle<STEPControl_Controller>  , XSControl_Controller >>(m.attr("STEPControl_Controller"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("NewModel",
             (opencascade::handle<Interface_InterfaceModel> (STEPControl_Controller::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (STEPControl_Controller::*)() const>(&STEPControl_Controller::NewModel),
             R"#(Creates a new empty Model ready to receive data of the Norm. It is taken from STEP Template Model)#" )
        .def("Customise",
             (void (STEPControl_Controller::*)( opencascade::handle<XSControl_WorkSession> &  ) ) static_cast<void (STEPControl_Controller::*)( opencascade::handle<XSControl_WorkSession> &  ) >(&STEPControl_Controller::Customise),
             R"#(None)#"  , py::arg("WS"))
        .def("TransferWriteShape",
             (IFSelect_ReturnStatus (STEPControl_Controller::*)( const TopoDS_Shape & ,  const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const Standard_Integer  ) const) static_cast<IFSelect_ReturnStatus (STEPControl_Controller::*)( const TopoDS_Shape & ,  const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const Standard_Integer  ) const>(&STEPControl_Controller::TransferWriteShape),
             R"#(Takes one Shape and transfers it to the InterfaceModel (already created by NewModel for instance) <modeshape> is to be interpreted by each kind of XstepAdaptor Returns a status : 0 OK 1 No result 2 Fail -1 bad modeshape -2 bad model (requires a StepModel) modeshape : 1 Facetted BRep, 2 Shell, 3 Manifold Solid)#"  , py::arg("shape"),  py::arg("FP"),  py::arg("model"),  py::arg("modetrans")=static_cast<const Standard_Integer>(0))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPControl_Controller::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPControl_Controller::*)() const>(&STEPControl_Controller::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Init_s",
                    (Standard_Boolean (*)() ) static_cast<Standard_Boolean (*)() >(&STEPControl_Controller::Init),
                    R"#(Standard Initialisation. It creates a Controller for STEP and records it to various names, available to select it later Returns True when done, False if could not be done)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPControl_Controller::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPControl_Controller::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPControl_Reader , shared_ptr<STEPControl_Reader>  , XSControl_Reader >>(m.attr("STEPControl_Reader"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<XSControl_WorkSession> &,const Standard_Boolean >()  , py::arg("WS"),  py::arg("scratch")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("StepModel",
             (opencascade::handle<StepData_StepModel> (STEPControl_Reader::*)() const) static_cast<opencascade::handle<StepData_StepModel> (STEPControl_Reader::*)() const>(&STEPControl_Reader::StepModel),
             R"#(Returns the model as a StepModel. It can then be consulted (header, product))#" )
        .def("TransferRoot",
             (Standard_Boolean (STEPControl_Reader::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (STEPControl_Reader::*)( const Standard_Integer  ) >(&STEPControl_Reader::TransferRoot),
             R"#(Transfers a root given its rank in the list of candidate roots Default is the first one Returns True if a shape has resulted, false else Same as inherited TransferOneRoot, kept for compatibility)#"  , py::arg("num")=static_cast<const Standard_Integer>(1))
        .def("NbRootsForTransfer",
             (Standard_Integer (STEPControl_Reader::*)() ) static_cast<Standard_Integer (STEPControl_Reader::*)() >(&STEPControl_Reader::NbRootsForTransfer),
             R"#(Determines the list of root entities from Model which are candidate for a transfer to a Shape (type of entities is PRODUCT))#" )
        .def("FileUnits",
             (void (STEPControl_Reader::*)( NCollection_Sequence<TCollection_AsciiString> & ,  NCollection_Sequence<TCollection_AsciiString> & ,  NCollection_Sequence<TCollection_AsciiString> &  ) ) static_cast<void (STEPControl_Reader::*)( NCollection_Sequence<TCollection_AsciiString> & ,  NCollection_Sequence<TCollection_AsciiString> & ,  NCollection_Sequence<TCollection_AsciiString> &  ) >(&STEPControl_Reader::FileUnits),
             R"#(Returns sequence of all unit names for shape representations found in file)#"  , py::arg("theUnitLengthNames"),  py::arg("theUnitAngleNames"),  py::arg("theUnitSolidAngleNames"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPControl_Writer , shared_ptr<STEPControl_Writer>  >>(m.attr("STEPControl_Writer"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<XSControl_WorkSession> &,const Standard_Boolean >()  , py::arg("WS"),  py::arg("scratch")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("SetTolerance",
             (void (STEPControl_Writer::*)( const Standard_Real  ) ) static_cast<void (STEPControl_Writer::*)( const Standard_Real  ) >(&STEPControl_Writer::SetTolerance),
             R"#(Sets a length-measure value that will be written to uncertainty-measure-with-unit when the next shape is translated.)#"  , py::arg("Tol"))
        .def("UnsetTolerance",
             (void (STEPControl_Writer::*)() ) static_cast<void (STEPControl_Writer::*)() >(&STEPControl_Writer::UnsetTolerance),
             R"#(Unsets the tolerance formerly forced by SetTolerance)#" )
        .def("SetWS",
             (void (STEPControl_Writer::*)( const opencascade::handle<XSControl_WorkSession> & ,  const Standard_Boolean  ) ) static_cast<void (STEPControl_Writer::*)( const opencascade::handle<XSControl_WorkSession> & ,  const Standard_Boolean  ) >(&STEPControl_Writer::SetWS),
             R"#(Sets a specific session to <me>)#"  , py::arg("WS"),  py::arg("scratch")=static_cast<const Standard_Boolean>(Standard_True))
        .def("WS",
             (opencascade::handle<XSControl_WorkSession> (STEPControl_Writer::*)() const) static_cast<opencascade::handle<XSControl_WorkSession> (STEPControl_Writer::*)() const>(&STEPControl_Writer::WS),
             R"#(Returns the session used in <me>)#" )
        .def("Model",
             (opencascade::handle<StepData_StepModel> (STEPControl_Writer::*)( const Standard_Boolean  ) ) static_cast<opencascade::handle<StepData_StepModel> (STEPControl_Writer::*)( const Standard_Boolean  ) >(&STEPControl_Writer::Model),
             R"#(Returns the produced model. Produces a new one if not yet done or if <newone> is True This method allows for instance to edit product or header data before writing.)#"  , py::arg("newone")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Transfer",
             (IFSelect_ReturnStatus (STEPControl_Writer::*)( const TopoDS_Shape & ,  const STEPControl_StepModelType ,  const Standard_Boolean  ) ) static_cast<IFSelect_ReturnStatus (STEPControl_Writer::*)( const TopoDS_Shape & ,  const STEPControl_StepModelType ,  const Standard_Boolean  ) >(&STEPControl_Writer::Transfer),
             R"#(Translates shape sh to a STEP entity. mode defines the STEP entity type to be output: - STEPControlStd_AsIs translates a shape to its highest possible STEP representation. - STEPControlStd_ManifoldSolidBrep translates a shape to a STEP manifold_solid_brep or brep_with_voids entity. - STEPControlStd_FacetedBrep translates a shape into a STEP faceted_brep entity. - STEPControlStd_ShellBasedSurfaceModel translates a shape into a STEP shell_based_surface_model entity. - STEPControlStd_GeometricCurveSet translates a shape into a STEP geometric_curve_set entity.)#"  , py::arg("sh"),  py::arg("mode"),  py::arg("compgraph")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Write",
             (IFSelect_ReturnStatus (STEPControl_Writer::*)( const Standard_CString  ) ) static_cast<IFSelect_ReturnStatus (STEPControl_Writer::*)( const Standard_CString  ) >(&STEPControl_Writer::Write),
             R"#(Writes a STEP model in the file identified by filename.)#"  , py::arg("filename"))
        .def("PrintStatsTransfer",
             (void (STEPControl_Writer::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (STEPControl_Writer::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&STEPControl_Writer::PrintStatsTransfer),
             R"#(Displays the statistics for the last translation. what defines the kind of statistics that are displayed: - 0 gives general statistics (number of translated roots, number of warnings, number of fail messages), - 1 gives root results, - 2 gives statistics for all checked entities, - 3 gives the list of translated entities, - 4 gives warning and fail messages, - 5 gives fail messages only. mode is used according to the use of what. If what is 0, mode is ignored. If what is 1, 2 or 3, mode defines the following: - 0 lists the numbers of STEP entities in a STEP model, - 1 gives the number, identifier, type and result type for each STEP entity and/or its status (fail, warning, etc.), - 2 gives maximum information for each STEP entity (i.e. checks), - 3 gives the number of entities by the type of a STEP entity, - 4 gives the number of of STEP entities per result type and/or status, - 5 gives the number of pairs (STEP or result type and status), - 6 gives the number of pairs (STEP or result type and status) AND the list of entity numbers in the STEP model.)#"  , py::arg("what"),  py::arg("mode")=static_cast<const Standard_Integer>(0))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/STEPControl_ActorWrite.hxx
// ./opencascade/STEPControl_StepModelType.hxx
// ./opencascade/STEPControl_Controller.hxx
// ./opencascade/STEPControl_ActorRead.hxx
// ./opencascade/STEPControl_Writer.hxx
// ./opencascade/STEPControl_Reader.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

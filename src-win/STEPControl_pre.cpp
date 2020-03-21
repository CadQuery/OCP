
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
#include <XSControl_WorkSession.hxx>
#include <StepData_StepModel.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepShape_NonManifoldSurfaceShapeRepresentation.hxx>
#include <XSControl_WorkSession.hxx>
#include <StepData_StepModel.hxx>
#include <StepRepr_RepresentationContext.hxx>
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
#include <Interface_InterfaceModel.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <XSControl_WorkSession.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_FinderProcess.hxx>

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
void register_STEPControl_enums(py::module &main_module) {


py::module m = main_module.def_submodule("STEPControl", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<STEPControl_StepModelType>(m, "STEPControl_StepModelType",R"#(Gives you the choice of translation mode for an Open CASCADE shape that is being translated to STEP. - STEPControl_AsIs translates an Open CASCADE shape to its highest possible STEP representation. - STEPControl_ManifoldSolidBrep translates an Open CASCADE shape to a STEP manifold_solid_brep or brep_with_voids entity. - STEPControl_FacetedBrep translates an Open CASCADE shape into a STEP faceted_brep entity. - STEPControl_ShellBasedSurfaceModel translates an Open CASCADE shape into a STEP shell_based_surface_model entity. - STEPControl_GeometricCurveSet translates an Open CASCADE shape into a STEP geometric_curve_set entity.)#")
        .value("STEPControl_AsIs",STEPControl_StepModelType::STEPControl_AsIs)
        .value("STEPControl_ManifoldSolidBrep",STEPControl_StepModelType::STEPControl_ManifoldSolidBrep)
        .value("STEPControl_BrepWithVoids",STEPControl_StepModelType::STEPControl_BrepWithVoids)
        .value("STEPControl_FacetedBrep",STEPControl_StepModelType::STEPControl_FacetedBrep)
        .value("STEPControl_FacetedBrepAndBrepWithVoids",STEPControl_StepModelType::STEPControl_FacetedBrepAndBrepWithVoids)
        .value("STEPControl_ShellBasedSurfaceModel",STEPControl_StepModelType::STEPControl_ShellBasedSurfaceModel)
        .value("STEPControl_GeometricCurveSet",STEPControl_StepModelType::STEPControl_GeometricCurveSet)
        .value("STEPControl_Hybrid",STEPControl_StepModelType::STEPControl_Hybrid).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<STEPControl_ActorRead ,opencascade::handle<STEPControl_ActorRead> , Transfer_ActorOfTransientProcess>(m,"STEPControl_ActorRead",R"#(This class performs the transfer of an Entity from AP214 and AP203, either Geometric or Topologic.This class performs the transfer of an Entity from AP214 and AP203, either Geometric or Topologic.This class performs the transfer of an Entity from AP214 and AP203, either Geometric or Topologic.)#");
    py::class_<STEPControl_ActorWrite ,opencascade::handle<STEPControl_ActorWrite> , Transfer_ActorOfFinderProcess>(m,"STEPControl_ActorWrite",R"#(This class performs the transfer of a Shape from TopoDS to AP203 or AP214 (CD2 or DIS)This class performs the transfer of a Shape from TopoDS to AP203 or AP214 (CD2 or DIS)This class performs the transfer of a Shape from TopoDS to AP203 or AP214 (CD2 or DIS))#");
    py::class_<STEPControl_Controller ,opencascade::handle<STEPControl_Controller> , XSControl_Controller>(m,"STEPControl_Controller",R"#(defines basic controller for STEP processordefines basic controller for STEP processordefines basic controller for STEP processor)#");
    py::class_<STEPControl_Reader , shared_ptr<STEPControl_Reader> , XSControl_Reader>(m,"STEPControl_Reader",R"#(Reads STEP files, checks them and translates their contents into Open CASCADE models. The STEP data can be that of a whole model or that of a specific list of entities in the model. As in XSControl_Reader, you specify the list using a selection. For the translation of iges files it is possible to use next sequence: To change translation parameters class Interface_Static should be used before beginning of translation (see STEP Parameters and General Parameters) Creation of reader - STEPControl_Reader reader; To load s file in a model use method reader.ReadFile("filename.stp") To print load results reader.PrintCheckLoad(failsonly,mode) where mode is equal to the value of enumeration IFSelect_PrintCount For definition number of candidates : Standard_Integer nbroots = reader. NbRootsForTransfer(); To transfer entities from a model the following methods can be used: for the whole model - reader.TransferRoots(); to transfer a list of entities: reader.TransferList(list); to transfer one entity Handle(Standard_Transient) ent = reader.RootForTransfer(num); reader.TransferEntity(ent), or reader.TransferOneRoot(num), or reader.TransferOne(num), or reader.TransferRoot(num) To obtain the result the following method can be used: reader.NbShapes() and reader.Shape(num); or reader.OneShape(); To print the results of transfer use method: reader.PrintCheckTransfer(failwarn,mode); where printfail is equal to the value of enumeration IFSelect_PrintFail, mode see above; or reader.PrintStatsTransfer(); Gets correspondence between a STEP entity and a result shape obtained from it. Handle(XSControl_WorkSession) WS = reader.WS(); if ( WS->TransferReader()->HasResult(ent) ) TopoDS_Shape shape = WS->TransferReader()->ShapeResult(ent);)#");
    py::class_<STEPControl_Writer , shared_ptr<STEPControl_Writer> >(m,"STEPControl_Writer",R"#(This class creates and writes STEP files from Open CASCADE models. A STEP file can be written to an existing STEP file or to a new one. Translation can be performed in one or several operations. Each translation operation outputs a distinct root entity in the STEP file.)#");

};

// user-defined post-inclusion per module

// user-defined post

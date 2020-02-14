
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <XSControl_TransferReader.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <Interface_Graph.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <StepGeom_CompositeCurve.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <STEPSelections_AssemblyComponent.hxx>
#include <Interface_InterfaceModel.hxx>

// module includes
#include <STEPSelections_AssemblyComponent.hxx>
#include <STEPSelections_AssemblyExplorer.hxx>
#include <STEPSelections_AssemblyLink.hxx>
#include <STEPSelections_Counter.hxx>
#include <STEPSelections_HSequenceOfAssemblyLink.hxx>
#include <STEPSelections_SelectAssembly.hxx>
#include <STEPSelections_SelectDerived.hxx>
#include <STEPSelections_SelectFaces.hxx>
#include <STEPSelections_SelectForTransfer.hxx>
#include <STEPSelections_SelectGSCurves.hxx>
#include <STEPSelections_SelectInstances.hxx>
#include <STEPSelections_SequenceOfAssemblyComponent.hxx>
#include <STEPSelections_SequenceOfAssemblyLink.hxx>

// template related includes
// ./opencascade/STEPSelections_SequenceOfAssemblyLink.hxx
#include "NCollection.hxx"
// ./opencascade/STEPSelections_SequenceOfAssemblyComponent.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_STEPSelections_enums(py::module &main_module) {


py::module m = main_module.def_submodule("STEPSelections", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<opencascade::handle<STEPSelections_AssemblyLink> >(m,"STEPSelections_SequenceOfAssemblyLink");  
    preregister_template_NCollection_Sequence<opencascade::handle<STEPSelections_AssemblyComponent> >(m,"STEPSelections_SequenceOfAssemblyComponent");  

// classes forward declarations only
    py::class_<STEPSelections_AssemblyComponent ,opencascade::handle<STEPSelections_AssemblyComponent>  , Standard_Transient >(m,"STEPSelections_AssemblyComponent",R"#()#");
    py::class_<STEPSelections_AssemblyExplorer , shared_ptr<STEPSelections_AssemblyExplorer>  >(m,"STEPSelections_AssemblyExplorer",R"#(None)#");
    py::class_<STEPSelections_AssemblyLink ,opencascade::handle<STEPSelections_AssemblyLink>  , Standard_Transient >(m,"STEPSelections_AssemblyLink",R"#()#");
    py::class_<STEPSelections_Counter , shared_ptr<STEPSelections_Counter>  >(m,"STEPSelections_Counter",R"#(None)#");
    py::class_<STEPSelections_HSequenceOfAssemblyLink ,opencascade::handle<STEPSelections_HSequenceOfAssemblyLink>  , STEPSelections_SequenceOfAssemblyLink , Standard_Transient >(m,"STEPSelections_HSequenceOfAssemblyLink",R"#()#");
    py::class_<STEPSelections_SelectAssembly ,opencascade::handle<STEPSelections_SelectAssembly>  , IFSelect_SelectExplore >(m,"STEPSelections_SelectAssembly",R"#()#");
    py::class_<STEPSelections_SelectDerived ,opencascade::handle<STEPSelections_SelectDerived>  >(m,"STEPSelections_SelectDerived",R"#()#");
    py::class_<STEPSelections_SelectFaces ,opencascade::handle<STEPSelections_SelectFaces>  , IFSelect_SelectExplore >(m,"STEPSelections_SelectFaces",R"#(This selection returns "STEP faces"This selection returns "STEP faces"This selection returns "STEP faces")#");
    py::class_<STEPSelections_SelectForTransfer ,opencascade::handle<STEPSelections_SelectForTransfer>  , XSControl_SelectForTransfer >(m,"STEPSelections_SelectForTransfer",R"#()#");
    py::class_<STEPSelections_SelectGSCurves ,opencascade::handle<STEPSelections_SelectGSCurves>  , IFSelect_SelectExplore >(m,"STEPSelections_SelectGSCurves",R"#(This selection returns "curves in the geometric_set (except composite curves)"This selection returns "curves in the geometric_set (except composite curves)"This selection returns "curves in the geometric_set (except composite curves)")#");
    py::class_<STEPSelections_SelectInstances ,opencascade::handle<STEPSelections_SelectInstances>  , IFSelect_SelectExplore >(m,"STEPSelections_SelectInstances",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post

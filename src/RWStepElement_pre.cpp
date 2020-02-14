
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_Volume3dElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_Curve3dElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_CurveElementEndReleasePacket.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceSectionField.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_ElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceSectionFieldVarying.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceSectionFieldConstant.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_CurveElementSectionDerivedDefinitions.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_UniformSurfaceSection.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceSection.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_Surface3dElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceElementProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepElement_RWAnalysisItemWithinRepresentation.hxx>
#include <RWStepElement_RWCurve3dElementDescriptor.hxx>
#include <RWStepElement_RWCurveElementEndReleasePacket.hxx>
#include <RWStepElement_RWCurveElementSectionDefinition.hxx>
#include <RWStepElement_RWCurveElementSectionDerivedDefinitions.hxx>
#include <RWStepElement_RWElementDescriptor.hxx>
#include <RWStepElement_RWElementMaterial.hxx>
#include <RWStepElement_RWSurface3dElementDescriptor.hxx>
#include <RWStepElement_RWSurfaceElementProperty.hxx>
#include <RWStepElement_RWSurfaceSection.hxx>
#include <RWStepElement_RWSurfaceSectionField.hxx>
#include <RWStepElement_RWSurfaceSectionFieldConstant.hxx>
#include <RWStepElement_RWSurfaceSectionFieldVarying.hxx>
#include <RWStepElement_RWUniformSurfaceSection.hxx>
#include <RWStepElement_RWVolume3dElementDescriptor.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepElement_enums(py::module &main_module) {


py::module m = main_module.def_submodule("RWStepElement", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<RWStepElement_RWAnalysisItemWithinRepresentation , shared_ptr<RWStepElement_RWAnalysisItemWithinRepresentation>  >(m,"RWStepElement_RWAnalysisItemWithinRepresentation",R"#(Read & Write tool for AnalysisItemWithinRepresentation)#");
    py::class_<RWStepElement_RWCurve3dElementDescriptor , shared_ptr<RWStepElement_RWCurve3dElementDescriptor>  >(m,"RWStepElement_RWCurve3dElementDescriptor",R"#(Read & Write tool for Curve3dElementDescriptor)#");
    py::class_<RWStepElement_RWCurveElementEndReleasePacket , shared_ptr<RWStepElement_RWCurveElementEndReleasePacket>  >(m,"RWStepElement_RWCurveElementEndReleasePacket",R"#(Read & Write tool for CurveElementEndReleasePacket)#");
    py::class_<RWStepElement_RWCurveElementSectionDefinition , shared_ptr<RWStepElement_RWCurveElementSectionDefinition>  >(m,"RWStepElement_RWCurveElementSectionDefinition",R"#(Read & Write tool for CurveElementSectionDefinition)#");
    py::class_<RWStepElement_RWCurveElementSectionDerivedDefinitions , shared_ptr<RWStepElement_RWCurveElementSectionDerivedDefinitions>  >(m,"RWStepElement_RWCurveElementSectionDerivedDefinitions",R"#(Read & Write tool for CurveElementSectionDerivedDefinitions)#");
    py::class_<RWStepElement_RWElementDescriptor , shared_ptr<RWStepElement_RWElementDescriptor>  >(m,"RWStepElement_RWElementDescriptor",R"#(Read & Write tool for ElementDescriptor)#");
    py::class_<RWStepElement_RWElementMaterial , shared_ptr<RWStepElement_RWElementMaterial>  >(m,"RWStepElement_RWElementMaterial",R"#(Read & Write tool for ElementMaterial)#");
    py::class_<RWStepElement_RWSurface3dElementDescriptor , shared_ptr<RWStepElement_RWSurface3dElementDescriptor>  >(m,"RWStepElement_RWSurface3dElementDescriptor",R"#(Read & Write tool for Surface3dElementDescriptor)#");
    py::class_<RWStepElement_RWSurfaceElementProperty , shared_ptr<RWStepElement_RWSurfaceElementProperty>  >(m,"RWStepElement_RWSurfaceElementProperty",R"#(Read & Write tool for SurfaceElementProperty)#");
    py::class_<RWStepElement_RWSurfaceSection , shared_ptr<RWStepElement_RWSurfaceSection>  >(m,"RWStepElement_RWSurfaceSection",R"#(Read & Write tool for SurfaceSection)#");
    py::class_<RWStepElement_RWSurfaceSectionField , shared_ptr<RWStepElement_RWSurfaceSectionField>  >(m,"RWStepElement_RWSurfaceSectionField",R"#(Read & Write tool for SurfaceSectionField)#");
    py::class_<RWStepElement_RWSurfaceSectionFieldConstant , shared_ptr<RWStepElement_RWSurfaceSectionFieldConstant>  >(m,"RWStepElement_RWSurfaceSectionFieldConstant",R"#(Read & Write tool for SurfaceSectionFieldConstant)#");
    py::class_<RWStepElement_RWSurfaceSectionFieldVarying , shared_ptr<RWStepElement_RWSurfaceSectionFieldVarying>  >(m,"RWStepElement_RWSurfaceSectionFieldVarying",R"#(Read & Write tool for SurfaceSectionFieldVarying)#");
    py::class_<RWStepElement_RWUniformSurfaceSection , shared_ptr<RWStepElement_RWUniformSurfaceSection>  >(m,"RWStepElement_RWUniformSurfaceSection",R"#(Read & Write tool for UniformSurfaceSection)#");
    py::class_<RWStepElement_RWVolume3dElementDescriptor , shared_ptr<RWStepElement_RWVolume3dElementDescriptor>  >(m,"RWStepElement_RWVolume3dElementDescriptor",R"#(Read & Write tool for Volume3dElementDescriptor)#");

};

// user-defined post-inclusion per module

// user-defined post

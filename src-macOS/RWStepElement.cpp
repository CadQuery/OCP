
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_UniformSurfaceSection.hxx>
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
#include <StepElement_SurfaceSectionField.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_Volume3dElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceElementProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_Surface3dElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceSection.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_CurveElementEndReleasePacket.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceSectionFieldConstant.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_Curve3dElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_CurveElementSectionDerivedDefinitions.hxx>
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
void register_RWStepElement(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepElement"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepElement_RWAnalysisItemWithinRepresentation , shared_ptr<RWStepElement_RWAnalysisItemWithinRepresentation> >>(m.attr("RWStepElement_RWAnalysisItemWithinRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWCurve3dElementDescriptor , shared_ptr<RWStepElement_RWCurve3dElementDescriptor> >>(m.attr("RWStepElement_RWCurve3dElementDescriptor"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWCurveElementEndReleasePacket , shared_ptr<RWStepElement_RWCurveElementEndReleasePacket> >>(m.attr("RWStepElement_RWCurveElementEndReleasePacket"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWCurveElementSectionDefinition , shared_ptr<RWStepElement_RWCurveElementSectionDefinition> >>(m.attr("RWStepElement_RWCurveElementSectionDefinition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWCurveElementSectionDerivedDefinitions , shared_ptr<RWStepElement_RWCurveElementSectionDerivedDefinitions> >>(m.attr("RWStepElement_RWCurveElementSectionDerivedDefinitions"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWElementDescriptor , shared_ptr<RWStepElement_RWElementDescriptor> >>(m.attr("RWStepElement_RWElementDescriptor"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWElementMaterial , shared_ptr<RWStepElement_RWElementMaterial> >>(m.attr("RWStepElement_RWElementMaterial"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWSurface3dElementDescriptor , shared_ptr<RWStepElement_RWSurface3dElementDescriptor> >>(m.attr("RWStepElement_RWSurface3dElementDescriptor"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWSurfaceElementProperty , shared_ptr<RWStepElement_RWSurfaceElementProperty> >>(m.attr("RWStepElement_RWSurfaceElementProperty"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWSurfaceSection , shared_ptr<RWStepElement_RWSurfaceSection> >>(m.attr("RWStepElement_RWSurfaceSection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWSurfaceSectionField , shared_ptr<RWStepElement_RWSurfaceSectionField> >>(m.attr("RWStepElement_RWSurfaceSectionField"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWSurfaceSectionFieldConstant , shared_ptr<RWStepElement_RWSurfaceSectionFieldConstant> >>(m.attr("RWStepElement_RWSurfaceSectionFieldConstant"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWSurfaceSectionFieldVarying , shared_ptr<RWStepElement_RWSurfaceSectionFieldVarying> >>(m.attr("RWStepElement_RWSurfaceSectionFieldVarying"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWUniformSurfaceSection , shared_ptr<RWStepElement_RWUniformSurfaceSection> >>(m.attr("RWStepElement_RWUniformSurfaceSection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWVolume3dElementDescriptor , shared_ptr<RWStepElement_RWVolume3dElementDescriptor> >>(m.attr("RWStepElement_RWVolume3dElementDescriptor"))
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
// ./opencascade/RWStepElement_RWElementMaterial.hxx
// ./opencascade/RWStepElement_RWUniformSurfaceSection.hxx
// ./opencascade/RWStepElement_RWElementDescriptor.hxx
// ./opencascade/RWStepElement_RWSurfaceSectionFieldVarying.hxx
// ./opencascade/RWStepElement_RWSurfaceSectionField.hxx
// ./opencascade/RWStepElement_RWVolume3dElementDescriptor.hxx
// ./opencascade/RWStepElement_RWSurfaceElementProperty.hxx
// ./opencascade/RWStepElement_RWSurface3dElementDescriptor.hxx
// ./opencascade/RWStepElement_RWSurfaceSection.hxx
// ./opencascade/RWStepElement_RWCurveElementSectionDefinition.hxx
// ./opencascade/RWStepElement_RWAnalysisItemWithinRepresentation.hxx
// ./opencascade/RWStepElement_RWCurveElementEndReleasePacket.hxx
// ./opencascade/RWStepElement_RWSurfaceSectionFieldConstant.hxx
// ./opencascade/RWStepElement_RWCurve3dElementDescriptor.hxx
// ./opencascade/RWStepElement_RWCurveElementSectionDerivedDefinitions.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

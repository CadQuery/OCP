
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
#include <StepElement_SurfaceElementProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_Volume3dElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceSection.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceSectionFieldVarying.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_CurveElementEndReleasePacket.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_CurveElementSectionDerivedDefinitions.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_Surface3dElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_UniformSurfaceSection.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_Curve3dElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceSectionFieldConstant.hxx>
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWAnalysisItemWithinRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) const) static_cast<void (RWStepElement_RWAnalysisItemWithinRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) const>(&RWStepElement_RWAnalysisItemWithinRepresentation::ReadStep),
             R"#(Reads AnalysisItemWithinRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWAnalysisItemWithinRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) const) static_cast<void (RWStepElement_RWAnalysisItemWithinRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) const>(&RWStepElement_RWAnalysisItemWithinRepresentation::WriteStep),
             R"#(Writes AnalysisItemWithinRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWAnalysisItemWithinRepresentation::*)( const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWAnalysisItemWithinRepresentation::*)( const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & , Interface_EntityIterator & ) const>(&RWStepElement_RWAnalysisItemWithinRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWCurve3dElementDescriptor , shared_ptr<RWStepElement_RWCurve3dElementDescriptor> >>(m.attr("RWStepElement_RWCurve3dElementDescriptor"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWCurve3dElementDescriptor::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_Curve3dElementDescriptor> & ) const) static_cast<void (RWStepElement_RWCurve3dElementDescriptor::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_Curve3dElementDescriptor> & ) const>(&RWStepElement_RWCurve3dElementDescriptor::ReadStep),
             R"#(Reads Curve3dElementDescriptor)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWCurve3dElementDescriptor::*)( StepData_StepWriter & , const opencascade::handle<StepElement_Curve3dElementDescriptor> & ) const) static_cast<void (RWStepElement_RWCurve3dElementDescriptor::*)( StepData_StepWriter & , const opencascade::handle<StepElement_Curve3dElementDescriptor> & ) const>(&RWStepElement_RWCurve3dElementDescriptor::WriteStep),
             R"#(Writes Curve3dElementDescriptor)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWCurve3dElementDescriptor::*)( const opencascade::handle<StepElement_Curve3dElementDescriptor> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWCurve3dElementDescriptor::*)( const opencascade::handle<StepElement_Curve3dElementDescriptor> & , Interface_EntityIterator & ) const>(&RWStepElement_RWCurve3dElementDescriptor::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWCurveElementEndReleasePacket , shared_ptr<RWStepElement_RWCurveElementEndReleasePacket> >>(m.attr("RWStepElement_RWCurveElementEndReleasePacket"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWCurveElementEndReleasePacket::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_CurveElementEndReleasePacket> & ) const) static_cast<void (RWStepElement_RWCurveElementEndReleasePacket::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_CurveElementEndReleasePacket> & ) const>(&RWStepElement_RWCurveElementEndReleasePacket::ReadStep),
             R"#(Reads CurveElementEndReleasePacket)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWCurveElementEndReleasePacket::*)( StepData_StepWriter & , const opencascade::handle<StepElement_CurveElementEndReleasePacket> & ) const) static_cast<void (RWStepElement_RWCurveElementEndReleasePacket::*)( StepData_StepWriter & , const opencascade::handle<StepElement_CurveElementEndReleasePacket> & ) const>(&RWStepElement_RWCurveElementEndReleasePacket::WriteStep),
             R"#(Writes CurveElementEndReleasePacket)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWCurveElementEndReleasePacket::*)( const opencascade::handle<StepElement_CurveElementEndReleasePacket> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWCurveElementEndReleasePacket::*)( const opencascade::handle<StepElement_CurveElementEndReleasePacket> & , Interface_EntityIterator & ) const>(&RWStepElement_RWCurveElementEndReleasePacket::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWCurveElementSectionDefinition , shared_ptr<RWStepElement_RWCurveElementSectionDefinition> >>(m.attr("RWStepElement_RWCurveElementSectionDefinition"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWCurveElementSectionDefinition::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_CurveElementSectionDefinition> & ) const) static_cast<void (RWStepElement_RWCurveElementSectionDefinition::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_CurveElementSectionDefinition> & ) const>(&RWStepElement_RWCurveElementSectionDefinition::ReadStep),
             R"#(Reads CurveElementSectionDefinition)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWCurveElementSectionDefinition::*)( StepData_StepWriter & , const opencascade::handle<StepElement_CurveElementSectionDefinition> & ) const) static_cast<void (RWStepElement_RWCurveElementSectionDefinition::*)( StepData_StepWriter & , const opencascade::handle<StepElement_CurveElementSectionDefinition> & ) const>(&RWStepElement_RWCurveElementSectionDefinition::WriteStep),
             R"#(Writes CurveElementSectionDefinition)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWCurveElementSectionDefinition::*)( const opencascade::handle<StepElement_CurveElementSectionDefinition> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWCurveElementSectionDefinition::*)( const opencascade::handle<StepElement_CurveElementSectionDefinition> & , Interface_EntityIterator & ) const>(&RWStepElement_RWCurveElementSectionDefinition::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWCurveElementSectionDerivedDefinitions , shared_ptr<RWStepElement_RWCurveElementSectionDerivedDefinitions> >>(m.attr("RWStepElement_RWCurveElementSectionDerivedDefinitions"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWCurveElementSectionDerivedDefinitions::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_CurveElementSectionDerivedDefinitions> & ) const) static_cast<void (RWStepElement_RWCurveElementSectionDerivedDefinitions::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_CurveElementSectionDerivedDefinitions> & ) const>(&RWStepElement_RWCurveElementSectionDerivedDefinitions::ReadStep),
             R"#(Reads CurveElementSectionDerivedDefinitions)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWCurveElementSectionDerivedDefinitions::*)( StepData_StepWriter & , const opencascade::handle<StepElement_CurveElementSectionDerivedDefinitions> & ) const) static_cast<void (RWStepElement_RWCurveElementSectionDerivedDefinitions::*)( StepData_StepWriter & , const opencascade::handle<StepElement_CurveElementSectionDerivedDefinitions> & ) const>(&RWStepElement_RWCurveElementSectionDerivedDefinitions::WriteStep),
             R"#(Writes CurveElementSectionDerivedDefinitions)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWCurveElementSectionDerivedDefinitions::*)( const opencascade::handle<StepElement_CurveElementSectionDerivedDefinitions> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWCurveElementSectionDerivedDefinitions::*)( const opencascade::handle<StepElement_CurveElementSectionDerivedDefinitions> & , Interface_EntityIterator & ) const>(&RWStepElement_RWCurveElementSectionDerivedDefinitions::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWElementDescriptor , shared_ptr<RWStepElement_RWElementDescriptor> >>(m.attr("RWStepElement_RWElementDescriptor"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWElementDescriptor::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_ElementDescriptor> & ) const) static_cast<void (RWStepElement_RWElementDescriptor::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_ElementDescriptor> & ) const>(&RWStepElement_RWElementDescriptor::ReadStep),
             R"#(Reads ElementDescriptor)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWElementDescriptor::*)( StepData_StepWriter & , const opencascade::handle<StepElement_ElementDescriptor> & ) const) static_cast<void (RWStepElement_RWElementDescriptor::*)( StepData_StepWriter & , const opencascade::handle<StepElement_ElementDescriptor> & ) const>(&RWStepElement_RWElementDescriptor::WriteStep),
             R"#(Writes ElementDescriptor)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWElementDescriptor::*)( const opencascade::handle<StepElement_ElementDescriptor> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWElementDescriptor::*)( const opencascade::handle<StepElement_ElementDescriptor> & , Interface_EntityIterator & ) const>(&RWStepElement_RWElementDescriptor::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWElementMaterial , shared_ptr<RWStepElement_RWElementMaterial> >>(m.attr("RWStepElement_RWElementMaterial"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWElementMaterial::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_ElementMaterial> & ) const) static_cast<void (RWStepElement_RWElementMaterial::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_ElementMaterial> & ) const>(&RWStepElement_RWElementMaterial::ReadStep),
             R"#(Reads ElementMaterial)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWElementMaterial::*)( StepData_StepWriter & , const opencascade::handle<StepElement_ElementMaterial> & ) const) static_cast<void (RWStepElement_RWElementMaterial::*)( StepData_StepWriter & , const opencascade::handle<StepElement_ElementMaterial> & ) const>(&RWStepElement_RWElementMaterial::WriteStep),
             R"#(Writes ElementMaterial)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWElementMaterial::*)( const opencascade::handle<StepElement_ElementMaterial> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWElementMaterial::*)( const opencascade::handle<StepElement_ElementMaterial> & , Interface_EntityIterator & ) const>(&RWStepElement_RWElementMaterial::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWSurface3dElementDescriptor , shared_ptr<RWStepElement_RWSurface3dElementDescriptor> >>(m.attr("RWStepElement_RWSurface3dElementDescriptor"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWSurface3dElementDescriptor::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_Surface3dElementDescriptor> & ) const) static_cast<void (RWStepElement_RWSurface3dElementDescriptor::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_Surface3dElementDescriptor> & ) const>(&RWStepElement_RWSurface3dElementDescriptor::ReadStep),
             R"#(Reads Surface3dElementDescriptor)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWSurface3dElementDescriptor::*)( StepData_StepWriter & , const opencascade::handle<StepElement_Surface3dElementDescriptor> & ) const) static_cast<void (RWStepElement_RWSurface3dElementDescriptor::*)( StepData_StepWriter & , const opencascade::handle<StepElement_Surface3dElementDescriptor> & ) const>(&RWStepElement_RWSurface3dElementDescriptor::WriteStep),
             R"#(Writes Surface3dElementDescriptor)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWSurface3dElementDescriptor::*)( const opencascade::handle<StepElement_Surface3dElementDescriptor> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWSurface3dElementDescriptor::*)( const opencascade::handle<StepElement_Surface3dElementDescriptor> & , Interface_EntityIterator & ) const>(&RWStepElement_RWSurface3dElementDescriptor::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWSurfaceElementProperty , shared_ptr<RWStepElement_RWSurfaceElementProperty> >>(m.attr("RWStepElement_RWSurfaceElementProperty"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWSurfaceElementProperty::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_SurfaceElementProperty> & ) const) static_cast<void (RWStepElement_RWSurfaceElementProperty::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_SurfaceElementProperty> & ) const>(&RWStepElement_RWSurfaceElementProperty::ReadStep),
             R"#(Reads SurfaceElementProperty)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWSurfaceElementProperty::*)( StepData_StepWriter & , const opencascade::handle<StepElement_SurfaceElementProperty> & ) const) static_cast<void (RWStepElement_RWSurfaceElementProperty::*)( StepData_StepWriter & , const opencascade::handle<StepElement_SurfaceElementProperty> & ) const>(&RWStepElement_RWSurfaceElementProperty::WriteStep),
             R"#(Writes SurfaceElementProperty)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWSurfaceElementProperty::*)( const opencascade::handle<StepElement_SurfaceElementProperty> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWSurfaceElementProperty::*)( const opencascade::handle<StepElement_SurfaceElementProperty> & , Interface_EntityIterator & ) const>(&RWStepElement_RWSurfaceElementProperty::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWSurfaceSection , shared_ptr<RWStepElement_RWSurfaceSection> >>(m.attr("RWStepElement_RWSurfaceSection"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWSurfaceSection::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_SurfaceSection> & ) const) static_cast<void (RWStepElement_RWSurfaceSection::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_SurfaceSection> & ) const>(&RWStepElement_RWSurfaceSection::ReadStep),
             R"#(Reads SurfaceSection)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWSurfaceSection::*)( StepData_StepWriter & , const opencascade::handle<StepElement_SurfaceSection> & ) const) static_cast<void (RWStepElement_RWSurfaceSection::*)( StepData_StepWriter & , const opencascade::handle<StepElement_SurfaceSection> & ) const>(&RWStepElement_RWSurfaceSection::WriteStep),
             R"#(Writes SurfaceSection)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWSurfaceSection::*)( const opencascade::handle<StepElement_SurfaceSection> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWSurfaceSection::*)( const opencascade::handle<StepElement_SurfaceSection> & , Interface_EntityIterator & ) const>(&RWStepElement_RWSurfaceSection::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWSurfaceSectionField , shared_ptr<RWStepElement_RWSurfaceSectionField> >>(m.attr("RWStepElement_RWSurfaceSectionField"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWSurfaceSectionField::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_SurfaceSectionField> & ) const) static_cast<void (RWStepElement_RWSurfaceSectionField::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_SurfaceSectionField> & ) const>(&RWStepElement_RWSurfaceSectionField::ReadStep),
             R"#(Reads SurfaceSectionField)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWSurfaceSectionField::*)( StepData_StepWriter & , const opencascade::handle<StepElement_SurfaceSectionField> & ) const) static_cast<void (RWStepElement_RWSurfaceSectionField::*)( StepData_StepWriter & , const opencascade::handle<StepElement_SurfaceSectionField> & ) const>(&RWStepElement_RWSurfaceSectionField::WriteStep),
             R"#(Writes SurfaceSectionField)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWSurfaceSectionField::*)( const opencascade::handle<StepElement_SurfaceSectionField> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWSurfaceSectionField::*)( const opencascade::handle<StepElement_SurfaceSectionField> & , Interface_EntityIterator & ) const>(&RWStepElement_RWSurfaceSectionField::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWSurfaceSectionFieldConstant , shared_ptr<RWStepElement_RWSurfaceSectionFieldConstant> >>(m.attr("RWStepElement_RWSurfaceSectionFieldConstant"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWSurfaceSectionFieldConstant::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_SurfaceSectionFieldConstant> & ) const) static_cast<void (RWStepElement_RWSurfaceSectionFieldConstant::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_SurfaceSectionFieldConstant> & ) const>(&RWStepElement_RWSurfaceSectionFieldConstant::ReadStep),
             R"#(Reads SurfaceSectionFieldConstant)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWSurfaceSectionFieldConstant::*)( StepData_StepWriter & , const opencascade::handle<StepElement_SurfaceSectionFieldConstant> & ) const) static_cast<void (RWStepElement_RWSurfaceSectionFieldConstant::*)( StepData_StepWriter & , const opencascade::handle<StepElement_SurfaceSectionFieldConstant> & ) const>(&RWStepElement_RWSurfaceSectionFieldConstant::WriteStep),
             R"#(Writes SurfaceSectionFieldConstant)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWSurfaceSectionFieldConstant::*)( const opencascade::handle<StepElement_SurfaceSectionFieldConstant> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWSurfaceSectionFieldConstant::*)( const opencascade::handle<StepElement_SurfaceSectionFieldConstant> & , Interface_EntityIterator & ) const>(&RWStepElement_RWSurfaceSectionFieldConstant::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWSurfaceSectionFieldVarying , shared_ptr<RWStepElement_RWSurfaceSectionFieldVarying> >>(m.attr("RWStepElement_RWSurfaceSectionFieldVarying"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWSurfaceSectionFieldVarying::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_SurfaceSectionFieldVarying> & ) const) static_cast<void (RWStepElement_RWSurfaceSectionFieldVarying::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_SurfaceSectionFieldVarying> & ) const>(&RWStepElement_RWSurfaceSectionFieldVarying::ReadStep),
             R"#(Reads SurfaceSectionFieldVarying)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWSurfaceSectionFieldVarying::*)( StepData_StepWriter & , const opencascade::handle<StepElement_SurfaceSectionFieldVarying> & ) const) static_cast<void (RWStepElement_RWSurfaceSectionFieldVarying::*)( StepData_StepWriter & , const opencascade::handle<StepElement_SurfaceSectionFieldVarying> & ) const>(&RWStepElement_RWSurfaceSectionFieldVarying::WriteStep),
             R"#(Writes SurfaceSectionFieldVarying)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWSurfaceSectionFieldVarying::*)( const opencascade::handle<StepElement_SurfaceSectionFieldVarying> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWSurfaceSectionFieldVarying::*)( const opencascade::handle<StepElement_SurfaceSectionFieldVarying> & , Interface_EntityIterator & ) const>(&RWStepElement_RWSurfaceSectionFieldVarying::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWUniformSurfaceSection , shared_ptr<RWStepElement_RWUniformSurfaceSection> >>(m.attr("RWStepElement_RWUniformSurfaceSection"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWUniformSurfaceSection::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_UniformSurfaceSection> & ) const) static_cast<void (RWStepElement_RWUniformSurfaceSection::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_UniformSurfaceSection> & ) const>(&RWStepElement_RWUniformSurfaceSection::ReadStep),
             R"#(Reads UniformSurfaceSection)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWUniformSurfaceSection::*)( StepData_StepWriter & , const opencascade::handle<StepElement_UniformSurfaceSection> & ) const) static_cast<void (RWStepElement_RWUniformSurfaceSection::*)( StepData_StepWriter & , const opencascade::handle<StepElement_UniformSurfaceSection> & ) const>(&RWStepElement_RWUniformSurfaceSection::WriteStep),
             R"#(Writes UniformSurfaceSection)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWUniformSurfaceSection::*)( const opencascade::handle<StepElement_UniformSurfaceSection> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWUniformSurfaceSection::*)( const opencascade::handle<StepElement_UniformSurfaceSection> & , Interface_EntityIterator & ) const>(&RWStepElement_RWUniformSurfaceSection::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepElement_RWVolume3dElementDescriptor , shared_ptr<RWStepElement_RWVolume3dElementDescriptor> >>(m.attr("RWStepElement_RWVolume3dElementDescriptor"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepElement_RWVolume3dElementDescriptor::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_Volume3dElementDescriptor> & ) const) static_cast<void (RWStepElement_RWVolume3dElementDescriptor::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepElement_Volume3dElementDescriptor> & ) const>(&RWStepElement_RWVolume3dElementDescriptor::ReadStep),
             R"#(Reads Volume3dElementDescriptor)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepElement_RWVolume3dElementDescriptor::*)( StepData_StepWriter & , const opencascade::handle<StepElement_Volume3dElementDescriptor> & ) const) static_cast<void (RWStepElement_RWVolume3dElementDescriptor::*)( StepData_StepWriter & , const opencascade::handle<StepElement_Volume3dElementDescriptor> & ) const>(&RWStepElement_RWVolume3dElementDescriptor::WriteStep),
             R"#(Writes Volume3dElementDescriptor)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepElement_RWVolume3dElementDescriptor::*)( const opencascade::handle<StepElement_Volume3dElementDescriptor> & , Interface_EntityIterator & ) const) static_cast<void (RWStepElement_RWVolume3dElementDescriptor::*)( const opencascade::handle<StepElement_Volume3dElementDescriptor> & , Interface_EntityIterator & ) const>(&RWStepElement_RWVolume3dElementDescriptor::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/RWStepElement_RWSurfaceElementProperty.hxx
// ./opencascade/RWStepElement_RWVolume3dElementDescriptor.hxx
// ./opencascade/RWStepElement_RWCurveElementSectionDefinition.hxx
// ./opencascade/RWStepElement_RWSurfaceSection.hxx
// ./opencascade/RWStepElement_RWSurfaceSectionFieldVarying.hxx
// ./opencascade/RWStepElement_RWElementMaterial.hxx
// ./opencascade/RWStepElement_RWCurveElementEndReleasePacket.hxx
// ./opencascade/RWStepElement_RWCurveElementSectionDerivedDefinitions.hxx
// ./opencascade/RWStepElement_RWSurface3dElementDescriptor.hxx
// ./opencascade/RWStepElement_RWUniformSurfaceSection.hxx
// ./opencascade/RWStepElement_RWCurve3dElementDescriptor.hxx
// ./opencascade/RWStepElement_RWAnalysisItemWithinRepresentation.hxx
// ./opencascade/RWStepElement_RWSurfaceSectionFieldConstant.hxx
// ./opencascade/RWStepElement_RWSurfaceSectionField.hxx
// ./opencascade/RWStepElement_RWElementDescriptor.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

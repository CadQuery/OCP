
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepElement_SurfaceSection.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepElement_SurfaceSectionField.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_Representation.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>

// module includes
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepElement_Array1OfCurveElementEndReleasePacket.hxx>
#include <StepElement_Array1OfCurveElementSectionDefinition.hxx>
#include <StepElement_Array1OfHSequenceOfCurveElementPurposeMember.hxx>
#include <StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember.hxx>
#include <StepElement_Array1OfMeasureOrUnspecifiedValue.hxx>
#include <StepElement_Array1OfSurfaceSection.hxx>
#include <StepElement_Array1OfVolumeElementPurpose.hxx>
#include <StepElement_Array1OfVolumeElementPurposeMember.hxx>
#include <StepElement_Array2OfCurveElementPurposeMember.hxx>
#include <StepElement_Array2OfSurfaceElementPurpose.hxx>
#include <StepElement_Array2OfSurfaceElementPurposeMember.hxx>
#include <StepElement_Curve3dElementDescriptor.hxx>
#include <StepElement_CurveEdge.hxx>
#include <StepElement_CurveElementEndReleasePacket.hxx>
#include <StepElement_CurveElementFreedom.hxx>
#include <StepElement_CurveElementFreedomMember.hxx>
#include <StepElement_CurveElementPurpose.hxx>
#include <StepElement_CurveElementPurposeMember.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepElement_CurveElementSectionDerivedDefinitions.hxx>
#include <StepElement_Element2dShape.hxx>
#include <StepElement_ElementAspect.hxx>
#include <StepElement_ElementAspectMember.hxx>
#include <StepElement_ElementDescriptor.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <StepElement_ElementOrder.hxx>
#include <StepElement_ElementVolume.hxx>
#include <StepElement_EnumeratedCurveElementFreedom.hxx>
#include <StepElement_EnumeratedCurveElementPurpose.hxx>
#include <StepElement_EnumeratedSurfaceElementPurpose.hxx>
#include <StepElement_EnumeratedVolumeElementPurpose.hxx>
#include <StepElement_HArray1OfCurveElementEndReleasePacket.hxx>
#include <StepElement_HArray1OfCurveElementSectionDefinition.hxx>
#include <StepElement_HArray1OfHSequenceOfCurveElementPurposeMember.hxx>
#include <StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember.hxx>
#include <StepElement_HArray1OfMeasureOrUnspecifiedValue.hxx>
#include <StepElement_HArray1OfSurfaceSection.hxx>
#include <StepElement_HArray1OfVolumeElementPurpose.hxx>
#include <StepElement_HArray1OfVolumeElementPurposeMember.hxx>
#include <StepElement_HArray2OfCurveElementPurposeMember.hxx>
#include <StepElement_HArray2OfSurfaceElementPurpose.hxx>
#include <StepElement_HArray2OfSurfaceElementPurposeMember.hxx>
#include <StepElement_HSequenceOfCurveElementPurposeMember.hxx>
#include <StepElement_HSequenceOfCurveElementSectionDefinition.hxx>
#include <StepElement_HSequenceOfElementMaterial.hxx>
#include <StepElement_HSequenceOfSurfaceElementPurposeMember.hxx>
#include <StepElement_MeasureOrUnspecifiedValue.hxx>
#include <StepElement_MeasureOrUnspecifiedValueMember.hxx>
#include <StepElement_SequenceOfCurveElementPurposeMember.hxx>
#include <StepElement_SequenceOfCurveElementSectionDefinition.hxx>
#include <StepElement_SequenceOfElementMaterial.hxx>
#include <StepElement_SequenceOfSurfaceElementPurposeMember.hxx>
#include <StepElement_Surface3dElementDescriptor.hxx>
#include <StepElement_SurfaceElementProperty.hxx>
#include <StepElement_SurfaceElementPurpose.hxx>
#include <StepElement_SurfaceElementPurposeMember.hxx>
#include <StepElement_SurfaceSection.hxx>
#include <StepElement_SurfaceSectionField.hxx>
#include <StepElement_SurfaceSectionFieldConstant.hxx>
#include <StepElement_SurfaceSectionFieldVarying.hxx>
#include <StepElement_UniformSurfaceSection.hxx>
#include <StepElement_UnspecifiedValue.hxx>
#include <StepElement_Volume3dElementDescriptor.hxx>
#include <StepElement_Volume3dElementShape.hxx>
#include <StepElement_VolumeElementPurpose.hxx>
#include <StepElement_VolumeElementPurposeMember.hxx>

// template related includes
// ./opencascade/StepElement_SequenceOfCurveElementSectionDefinition.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfCurveElementSectionDefinition.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_SequenceOfCurveElementPurposeMember.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfCurveElementEndReleasePacket.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_SequenceOfElementMaterial.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array2OfCurveElementPurposeMember.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfHSequenceOfCurveElementPurposeMember.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfSurfaceSection.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_SequenceOfSurfaceElementPurposeMember.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfVolumeElementPurpose.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfVolumeElementPurposeMember.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array2OfSurfaceElementPurpose.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfMeasureOrUnspecifiedValue.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array2OfSurfaceElementPurposeMember.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepElement(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepElement"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepElement_HArray1OfSurfaceSection ,std::unique_ptr<StepElement_HArray1OfSurfaceSection>  >>(m.attr("StepElement_HArray1OfSurfaceSection"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_SurfaceSection> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepElement_SurfaceSection> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepElement_Array1OfSurfaceSection & (StepElement_HArray1OfSurfaceSection::*)() const) static_cast<const StepElement_Array1OfSurfaceSection & (StepElement_HArray1OfSurfaceSection::*)() const>(&StepElement_HArray1OfSurfaceSection::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfSurfaceSection & (StepElement_HArray1OfSurfaceSection::*)() ) static_cast<StepElement_Array1OfSurfaceSection & (StepElement_HArray1OfSurfaceSection::*)() >(&StepElement_HArray1OfSurfaceSection::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfSurfaceSection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfSurfaceSection::*)() const>(&StepElement_HArray1OfSurfaceSection::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfSurfaceSection::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfSurfaceSection::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_HArray1OfCurveElementSectionDefinition ,std::unique_ptr<StepElement_HArray1OfCurveElementSectionDefinition>  >>(m.attr("StepElement_HArray1OfCurveElementSectionDefinition"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_CurveElementSectionDefinition> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepElement_CurveElementSectionDefinition> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepElement_Array1OfCurveElementSectionDefinition & (StepElement_HArray1OfCurveElementSectionDefinition::*)() const) static_cast<const StepElement_Array1OfCurveElementSectionDefinition & (StepElement_HArray1OfCurveElementSectionDefinition::*)() const>(&StepElement_HArray1OfCurveElementSectionDefinition::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfCurveElementSectionDefinition & (StepElement_HArray1OfCurveElementSectionDefinition::*)() ) static_cast<StepElement_Array1OfCurveElementSectionDefinition & (StepElement_HArray1OfCurveElementSectionDefinition::*)() >(&StepElement_HArray1OfCurveElementSectionDefinition::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfCurveElementSectionDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfCurveElementSectionDefinition::*)() const>(&StepElement_HArray1OfCurveElementSectionDefinition::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfCurveElementSectionDefinition::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfCurveElementSectionDefinition::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_SurfaceElementPurposeMember ,opencascade::handle<StepElement_SurfaceElementPurposeMember>  , StepData_SelectNamed >>(m.attr("StepElement_SurfaceElementPurposeMember"))
        .def(py::init<  >()  )
        .def("HasName",
             (Standard_Boolean (StepElement_SurfaceElementPurposeMember::*)() const) static_cast<Standard_Boolean (StepElement_SurfaceElementPurposeMember::*)() const>(&StepElement_SurfaceElementPurposeMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepElement_SurfaceElementPurposeMember::*)() const) static_cast<Standard_CString (StepElement_SurfaceElementPurposeMember::*)() const>(&StepElement_SurfaceElementPurposeMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepElement_SurfaceElementPurposeMember::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (StepElement_SurfaceElementPurposeMember::*)( const Standard_CString  ) >(&StepElement_SurfaceElementPurposeMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepElement_SurfaceElementPurposeMember::*)( const Standard_CString  ) const) static_cast<Standard_Boolean (StepElement_SurfaceElementPurposeMember::*)( const Standard_CString  ) const>(&StepElement_SurfaceElementPurposeMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_SurfaceElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_SurfaceElementPurposeMember::*)() const>(&StepElement_SurfaceElementPurposeMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_SurfaceElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_SurfaceElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_HArray1OfVolumeElementPurposeMember ,std::unique_ptr<StepElement_HArray1OfVolumeElementPurposeMember>  >>(m.attr("StepElement_HArray1OfVolumeElementPurposeMember"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_VolumeElementPurposeMember> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepElement_VolumeElementPurposeMember> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepElement_Array1OfVolumeElementPurposeMember & (StepElement_HArray1OfVolumeElementPurposeMember::*)() const) static_cast<const StepElement_Array1OfVolumeElementPurposeMember & (StepElement_HArray1OfVolumeElementPurposeMember::*)() const>(&StepElement_HArray1OfVolumeElementPurposeMember::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfVolumeElementPurposeMember & (StepElement_HArray1OfVolumeElementPurposeMember::*)() ) static_cast<StepElement_Array1OfVolumeElementPurposeMember & (StepElement_HArray1OfVolumeElementPurposeMember::*)() >(&StepElement_HArray1OfVolumeElementPurposeMember::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfVolumeElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfVolumeElementPurposeMember::*)() const>(&StepElement_HArray1OfVolumeElementPurposeMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfVolumeElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfVolumeElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_CurveElementSectionDefinition ,opencascade::handle<StepElement_CurveElementSectionDefinition>  , Standard_Transient >>(m.attr("StepElement_CurveElementSectionDefinition"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_CurveElementSectionDefinition::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Real  ) ) static_cast<void (StepElement_CurveElementSectionDefinition::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Real  ) >(&StepElement_CurveElementSectionDefinition::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aDescription"),  py::arg("aSectionAngle"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepElement_CurveElementSectionDefinition::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepElement_CurveElementSectionDefinition::*)() const>(&StepElement_CurveElementSectionDefinition::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepElement_CurveElementSectionDefinition::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepElement_CurveElementSectionDefinition::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepElement_CurveElementSectionDefinition::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("SectionAngle",
             (Standard_Real (StepElement_CurveElementSectionDefinition::*)() const) static_cast<Standard_Real (StepElement_CurveElementSectionDefinition::*)() const>(&StepElement_CurveElementSectionDefinition::SectionAngle),
             R"#(Returns field SectionAngle)#" )
        .def("SetSectionAngle",
             (void (StepElement_CurveElementSectionDefinition::*)( const Standard_Real  ) ) static_cast<void (StepElement_CurveElementSectionDefinition::*)( const Standard_Real  ) >(&StepElement_CurveElementSectionDefinition::SetSectionAngle),
             R"#(Set field SectionAngle)#"  , py::arg("SectionAngle"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_CurveElementSectionDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_CurveElementSectionDefinition::*)() const>(&StepElement_CurveElementSectionDefinition::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_CurveElementSectionDefinition::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_CurveElementSectionDefinition::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_ElementDescriptor ,opencascade::handle<StepElement_ElementDescriptor>  , Standard_Transient >>(m.attr("StepElement_ElementDescriptor"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_ElementDescriptor::*)( const StepElement_ElementOrder ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepElement_ElementDescriptor::*)( const StepElement_ElementOrder ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepElement_ElementDescriptor::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aTopologyOrder"),  py::arg("aDescription"))
        .def("TopologyOrder",
             (StepElement_ElementOrder (StepElement_ElementDescriptor::*)() const) static_cast<StepElement_ElementOrder (StepElement_ElementDescriptor::*)() const>(&StepElement_ElementDescriptor::TopologyOrder),
             R"#(Returns field TopologyOrder)#" )
        .def("SetTopologyOrder",
             (void (StepElement_ElementDescriptor::*)( const StepElement_ElementOrder  ) ) static_cast<void (StepElement_ElementDescriptor::*)( const StepElement_ElementOrder  ) >(&StepElement_ElementDescriptor::SetTopologyOrder),
             R"#(Set field TopologyOrder)#"  , py::arg("TopologyOrder"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepElement_ElementDescriptor::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepElement_ElementDescriptor::*)() const>(&StepElement_ElementDescriptor::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepElement_ElementDescriptor::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepElement_ElementDescriptor::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepElement_ElementDescriptor::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_ElementDescriptor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_ElementDescriptor::*)() const>(&StepElement_ElementDescriptor::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_ElementDescriptor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_ElementDescriptor::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_HArray1OfCurveElementEndReleasePacket ,std::unique_ptr<StepElement_HArray1OfCurveElementEndReleasePacket>  >>(m.attr("StepElement_HArray1OfCurveElementEndReleasePacket"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_CurveElementEndReleasePacket> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepElement_CurveElementEndReleasePacket> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepElement_Array1OfCurveElementEndReleasePacket & (StepElement_HArray1OfCurveElementEndReleasePacket::*)() const) static_cast<const StepElement_Array1OfCurveElementEndReleasePacket & (StepElement_HArray1OfCurveElementEndReleasePacket::*)() const>(&StepElement_HArray1OfCurveElementEndReleasePacket::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfCurveElementEndReleasePacket & (StepElement_HArray1OfCurveElementEndReleasePacket::*)() ) static_cast<StepElement_Array1OfCurveElementEndReleasePacket & (StepElement_HArray1OfCurveElementEndReleasePacket::*)() >(&StepElement_HArray1OfCurveElementEndReleasePacket::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfCurveElementEndReleasePacket::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfCurveElementEndReleasePacket::*)() const>(&StepElement_HArray1OfCurveElementEndReleasePacket::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfCurveElementEndReleasePacket::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfCurveElementEndReleasePacket::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_SurfaceElementPurpose ,std::unique_ptr<StepElement_SurfaceElementPurpose>  , StepData_SelectType >>(m.attr("StepElement_SurfaceElementPurpose"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepElement_SurfaceElementPurpose::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepElement_SurfaceElementPurpose::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepElement_SurfaceElementPurpose::CaseNum),
             R"#(Recognizes a kind of SurfaceElementPurpose select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepElement_SurfaceElementPurpose::*)( const opencascade::handle<StepData_SelectMember> &  ) const) static_cast<Standard_Integer (StepElement_SurfaceElementPurpose::*)( const opencascade::handle<StepData_SelectMember> &  ) const>(&StepElement_SurfaceElementPurpose::CaseMem),
             R"#(Recognizes a items of select member SurfaceElementPurposeMember 1 -> EnumeratedSurfaceElementPurpose 2 -> ApplicationDefinedElementPurpose 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepElement_SurfaceElementPurpose::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepElement_SurfaceElementPurpose::*)() const>(&StepElement_SurfaceElementPurpose::NewMember),
             R"#(Returns a new select member the type SurfaceElementPurposeMember)#" )
        .def("SetEnumeratedSurfaceElementPurpose",
             (void (StepElement_SurfaceElementPurpose::*)( const StepElement_EnumeratedSurfaceElementPurpose  ) ) static_cast<void (StepElement_SurfaceElementPurpose::*)( const StepElement_EnumeratedSurfaceElementPurpose  ) >(&StepElement_SurfaceElementPurpose::SetEnumeratedSurfaceElementPurpose),
             R"#(Set Value for EnumeratedSurfaceElementPurpose)#"  , py::arg("aVal"))
        .def("EnumeratedSurfaceElementPurpose",
             (StepElement_EnumeratedSurfaceElementPurpose (StepElement_SurfaceElementPurpose::*)() const) static_cast<StepElement_EnumeratedSurfaceElementPurpose (StepElement_SurfaceElementPurpose::*)() const>(&StepElement_SurfaceElementPurpose::EnumeratedSurfaceElementPurpose),
             R"#(Returns Value as EnumeratedSurfaceElementPurpose (or Null if another type))#" )
        .def("SetApplicationDefinedElementPurpose",
             (void (StepElement_SurfaceElementPurpose::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepElement_SurfaceElementPurpose::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepElement_SurfaceElementPurpose::SetApplicationDefinedElementPurpose),
             R"#(Set Value for ApplicationDefinedElementPurpose)#"  , py::arg("aVal"))
        .def("ApplicationDefinedElementPurpose",
             (opencascade::handle<TCollection_HAsciiString> (StepElement_SurfaceElementPurpose::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepElement_SurfaceElementPurpose::*)() const>(&StepElement_SurfaceElementPurpose::ApplicationDefinedElementPurpose),
             R"#(Returns Value as ApplicationDefinedElementPurpose (or Null if another type))#" )
;


    static_cast<py::class_<StepElement_HArray1OfVolumeElementPurpose ,std::unique_ptr<StepElement_HArray1OfVolumeElementPurpose>  >>(m.attr("StepElement_HArray1OfVolumeElementPurpose"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepElement_VolumeElementPurpose & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepElement_VolumeElementPurpose> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepElement_Array1OfVolumeElementPurpose & (StepElement_HArray1OfVolumeElementPurpose::*)() const) static_cast<const StepElement_Array1OfVolumeElementPurpose & (StepElement_HArray1OfVolumeElementPurpose::*)() const>(&StepElement_HArray1OfVolumeElementPurpose::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfVolumeElementPurpose & (StepElement_HArray1OfVolumeElementPurpose::*)() ) static_cast<StepElement_Array1OfVolumeElementPurpose & (StepElement_HArray1OfVolumeElementPurpose::*)() >(&StepElement_HArray1OfVolumeElementPurpose::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfVolumeElementPurpose::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfVolumeElementPurpose::*)() const>(&StepElement_HArray1OfVolumeElementPurpose::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfVolumeElementPurpose::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfVolumeElementPurpose::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_CurveElementEndReleasePacket ,opencascade::handle<StepElement_CurveElementEndReleasePacket>  , Standard_Transient >>(m.attr("StepElement_CurveElementEndReleasePacket"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_CurveElementEndReleasePacket::*)( const StepElement_CurveElementFreedom & ,  const Standard_Real  ) ) static_cast<void (StepElement_CurveElementEndReleasePacket::*)( const StepElement_CurveElementFreedom & ,  const Standard_Real  ) >(&StepElement_CurveElementEndReleasePacket::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aReleaseFreedom"),  py::arg("aReleaseStiffness"))
        .def("ReleaseFreedom",
             (StepElement_CurveElementFreedom (StepElement_CurveElementEndReleasePacket::*)() const) static_cast<StepElement_CurveElementFreedom (StepElement_CurveElementEndReleasePacket::*)() const>(&StepElement_CurveElementEndReleasePacket::ReleaseFreedom),
             R"#(Returns field ReleaseFreedom)#" )
        .def("SetReleaseFreedom",
             (void (StepElement_CurveElementEndReleasePacket::*)( const StepElement_CurveElementFreedom &  ) ) static_cast<void (StepElement_CurveElementEndReleasePacket::*)( const StepElement_CurveElementFreedom &  ) >(&StepElement_CurveElementEndReleasePacket::SetReleaseFreedom),
             R"#(Set field ReleaseFreedom)#"  , py::arg("ReleaseFreedom"))
        .def("ReleaseStiffness",
             (Standard_Real (StepElement_CurveElementEndReleasePacket::*)() const) static_cast<Standard_Real (StepElement_CurveElementEndReleasePacket::*)() const>(&StepElement_CurveElementEndReleasePacket::ReleaseStiffness),
             R"#(Returns field ReleaseStiffness)#" )
        .def("SetReleaseStiffness",
             (void (StepElement_CurveElementEndReleasePacket::*)( const Standard_Real  ) ) static_cast<void (StepElement_CurveElementEndReleasePacket::*)( const Standard_Real  ) >(&StepElement_CurveElementEndReleasePacket::SetReleaseStiffness),
             R"#(Set field ReleaseStiffness)#"  , py::arg("ReleaseStiffness"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_CurveElementEndReleasePacket::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_CurveElementEndReleasePacket::*)() const>(&StepElement_CurveElementEndReleasePacket::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_CurveElementEndReleasePacket::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_CurveElementEndReleasePacket::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_CurveElementPurpose ,std::unique_ptr<StepElement_CurveElementPurpose>  , StepData_SelectType >>(m.attr("StepElement_CurveElementPurpose"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepElement_CurveElementPurpose::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepElement_CurveElementPurpose::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepElement_CurveElementPurpose::CaseNum),
             R"#(Recognizes a kind of CurveElementPurpose select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepElement_CurveElementPurpose::*)( const opencascade::handle<StepData_SelectMember> &  ) const) static_cast<Standard_Integer (StepElement_CurveElementPurpose::*)( const opencascade::handle<StepData_SelectMember> &  ) const>(&StepElement_CurveElementPurpose::CaseMem),
             R"#(Recognizes a items of select member CurveElementPurposeMember 1 -> EnumeratedCurveElementPurpose 2 -> ApplicationDefinedElementPurpose 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepElement_CurveElementPurpose::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepElement_CurveElementPurpose::*)() const>(&StepElement_CurveElementPurpose::NewMember),
             R"#(Returns a new select member the type CurveElementPurposeMember)#" )
        .def("SetEnumeratedCurveElementPurpose",
             (void (StepElement_CurveElementPurpose::*)( const StepElement_EnumeratedCurveElementPurpose  ) ) static_cast<void (StepElement_CurveElementPurpose::*)( const StepElement_EnumeratedCurveElementPurpose  ) >(&StepElement_CurveElementPurpose::SetEnumeratedCurveElementPurpose),
             R"#(Set Value for EnumeratedCurveElementPurpose)#"  , py::arg("aVal"))
        .def("EnumeratedCurveElementPurpose",
             (StepElement_EnumeratedCurveElementPurpose (StepElement_CurveElementPurpose::*)() const) static_cast<StepElement_EnumeratedCurveElementPurpose (StepElement_CurveElementPurpose::*)() const>(&StepElement_CurveElementPurpose::EnumeratedCurveElementPurpose),
             R"#(Returns Value as EnumeratedCurveElementPurpose (or Null if another type))#" )
        .def("SetApplicationDefinedElementPurpose",
             (void (StepElement_CurveElementPurpose::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepElement_CurveElementPurpose::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepElement_CurveElementPurpose::SetApplicationDefinedElementPurpose),
             R"#(Set Value for ApplicationDefinedElementPurpose)#"  , py::arg("aVal"))
        .def("ApplicationDefinedElementPurpose",
             (opencascade::handle<TCollection_HAsciiString> (StepElement_CurveElementPurpose::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepElement_CurveElementPurpose::*)() const>(&StepElement_CurveElementPurpose::ApplicationDefinedElementPurpose),
             R"#(Returns Value as ApplicationDefinedElementPurpose (or Null if another type))#" )
;


    static_cast<py::class_<StepElement_CurveElementSectionDerivedDefinitions ,opencascade::handle<StepElement_CurveElementSectionDerivedDefinitions>  , StepElement_CurveElementSectionDefinition >>(m.attr("StepElement_CurveElementSectionDerivedDefinitions"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_CurveElementSectionDerivedDefinitions::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const Standard_Real ,  const StepElement_MeasureOrUnspecifiedValue & ,  const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> & ,  const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> & ,  const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> & ,  const StepElement_MeasureOrUnspecifiedValue & ,  const StepElement_MeasureOrUnspecifiedValue &  ) ) static_cast<void (StepElement_CurveElementSectionDerivedDefinitions::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> & ,  const opencascade::handle<TColStd_HArray1OfReal> & ,  const Standard_Real ,  const StepElement_MeasureOrUnspecifiedValue & ,  const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> & ,  const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> & ,  const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> & ,  const StepElement_MeasureOrUnspecifiedValue & ,  const StepElement_MeasureOrUnspecifiedValue &  ) >(&StepElement_CurveElementSectionDerivedDefinitions::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aCurveElementSectionDefinition_Description"),  py::arg("aCurveElementSectionDefinition_SectionAngle"),  py::arg("aCrossSectionalArea"),  py::arg("aShearArea"),  py::arg("aSecondMomentOfArea"),  py::arg("aTorsionalConstant"),  py::arg("aWarpingConstant"),  py::arg("aLocationOfCentroid"),  py::arg("aLocationOfShearCentre"),  py::arg("aLocationOfNonStructuralMass"),  py::arg("aNonStructuralMass"),  py::arg("aPolarMoment"))
        .def("CrossSectionalArea",
             (Standard_Real (StepElement_CurveElementSectionDerivedDefinitions::*)() const) static_cast<Standard_Real (StepElement_CurveElementSectionDerivedDefinitions::*)() const>(&StepElement_CurveElementSectionDerivedDefinitions::CrossSectionalArea),
             R"#(Returns field CrossSectionalArea)#" )
        .def("SetCrossSectionalArea",
             (void (StepElement_CurveElementSectionDerivedDefinitions::*)( const Standard_Real  ) ) static_cast<void (StepElement_CurveElementSectionDerivedDefinitions::*)( const Standard_Real  ) >(&StepElement_CurveElementSectionDerivedDefinitions::SetCrossSectionalArea),
             R"#(Set field CrossSectionalArea)#"  , py::arg("CrossSectionalArea"))
        .def("ShearArea",
             (opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> (StepElement_CurveElementSectionDerivedDefinitions::*)() const) static_cast<opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> (StepElement_CurveElementSectionDerivedDefinitions::*)() const>(&StepElement_CurveElementSectionDerivedDefinitions::ShearArea),
             R"#(Returns field ShearArea)#" )
        .def("SetShearArea",
             (void (StepElement_CurveElementSectionDerivedDefinitions::*)( const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> &  ) ) static_cast<void (StepElement_CurveElementSectionDerivedDefinitions::*)( const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> &  ) >(&StepElement_CurveElementSectionDerivedDefinitions::SetShearArea),
             R"#(Set field ShearArea)#"  , py::arg("ShearArea"))
        .def("SecondMomentOfArea",
             (opencascade::handle<TColStd_HArray1OfReal> (StepElement_CurveElementSectionDerivedDefinitions::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepElement_CurveElementSectionDerivedDefinitions::*)() const>(&StepElement_CurveElementSectionDerivedDefinitions::SecondMomentOfArea),
             R"#(Returns field SecondMomentOfArea)#" )
        .def("SetSecondMomentOfArea",
             (void (StepElement_CurveElementSectionDerivedDefinitions::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) ) static_cast<void (StepElement_CurveElementSectionDerivedDefinitions::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) >(&StepElement_CurveElementSectionDerivedDefinitions::SetSecondMomentOfArea),
             R"#(Set field SecondMomentOfArea)#"  , py::arg("SecondMomentOfArea"))
        .def("TorsionalConstant",
             (Standard_Real (StepElement_CurveElementSectionDerivedDefinitions::*)() const) static_cast<Standard_Real (StepElement_CurveElementSectionDerivedDefinitions::*)() const>(&StepElement_CurveElementSectionDerivedDefinitions::TorsionalConstant),
             R"#(Returns field TorsionalConstant)#" )
        .def("SetTorsionalConstant",
             (void (StepElement_CurveElementSectionDerivedDefinitions::*)( const Standard_Real  ) ) static_cast<void (StepElement_CurveElementSectionDerivedDefinitions::*)( const Standard_Real  ) >(&StepElement_CurveElementSectionDerivedDefinitions::SetTorsionalConstant),
             R"#(Set field TorsionalConstant)#"  , py::arg("TorsionalConstant"))
        .def("WarpingConstant",
             (StepElement_MeasureOrUnspecifiedValue (StepElement_CurveElementSectionDerivedDefinitions::*)() const) static_cast<StepElement_MeasureOrUnspecifiedValue (StepElement_CurveElementSectionDerivedDefinitions::*)() const>(&StepElement_CurveElementSectionDerivedDefinitions::WarpingConstant),
             R"#(Returns field WarpingConstant)#" )
        .def("SetWarpingConstant",
             (void (StepElement_CurveElementSectionDerivedDefinitions::*)( const StepElement_MeasureOrUnspecifiedValue &  ) ) static_cast<void (StepElement_CurveElementSectionDerivedDefinitions::*)( const StepElement_MeasureOrUnspecifiedValue &  ) >(&StepElement_CurveElementSectionDerivedDefinitions::SetWarpingConstant),
             R"#(Set field WarpingConstant)#"  , py::arg("WarpingConstant"))
        .def("LocationOfCentroid",
             (opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> (StepElement_CurveElementSectionDerivedDefinitions::*)() const) static_cast<opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> (StepElement_CurveElementSectionDerivedDefinitions::*)() const>(&StepElement_CurveElementSectionDerivedDefinitions::LocationOfCentroid),
             R"#(Returns field LocationOfCentroid)#" )
        .def("SetLocationOfCentroid",
             (void (StepElement_CurveElementSectionDerivedDefinitions::*)( const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> &  ) ) static_cast<void (StepElement_CurveElementSectionDerivedDefinitions::*)( const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> &  ) >(&StepElement_CurveElementSectionDerivedDefinitions::SetLocationOfCentroid),
             R"#(Set field LocationOfCentroid)#"  , py::arg("LocationOfCentroid"))
        .def("LocationOfShearCentre",
             (opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> (StepElement_CurveElementSectionDerivedDefinitions::*)() const) static_cast<opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> (StepElement_CurveElementSectionDerivedDefinitions::*)() const>(&StepElement_CurveElementSectionDerivedDefinitions::LocationOfShearCentre),
             R"#(Returns field LocationOfShearCentre)#" )
        .def("SetLocationOfShearCentre",
             (void (StepElement_CurveElementSectionDerivedDefinitions::*)( const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> &  ) ) static_cast<void (StepElement_CurveElementSectionDerivedDefinitions::*)( const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> &  ) >(&StepElement_CurveElementSectionDerivedDefinitions::SetLocationOfShearCentre),
             R"#(Set field LocationOfShearCentre)#"  , py::arg("LocationOfShearCentre"))
        .def("LocationOfNonStructuralMass",
             (opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> (StepElement_CurveElementSectionDerivedDefinitions::*)() const) static_cast<opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> (StepElement_CurveElementSectionDerivedDefinitions::*)() const>(&StepElement_CurveElementSectionDerivedDefinitions::LocationOfNonStructuralMass),
             R"#(Returns field LocationOfNonStructuralMass)#" )
        .def("SetLocationOfNonStructuralMass",
             (void (StepElement_CurveElementSectionDerivedDefinitions::*)( const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> &  ) ) static_cast<void (StepElement_CurveElementSectionDerivedDefinitions::*)( const opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> &  ) >(&StepElement_CurveElementSectionDerivedDefinitions::SetLocationOfNonStructuralMass),
             R"#(Set field LocationOfNonStructuralMass)#"  , py::arg("LocationOfNonStructuralMass"))
        .def("NonStructuralMass",
             (StepElement_MeasureOrUnspecifiedValue (StepElement_CurveElementSectionDerivedDefinitions::*)() const) static_cast<StepElement_MeasureOrUnspecifiedValue (StepElement_CurveElementSectionDerivedDefinitions::*)() const>(&StepElement_CurveElementSectionDerivedDefinitions::NonStructuralMass),
             R"#(Returns field NonStructuralMass)#" )
        .def("SetNonStructuralMass",
             (void (StepElement_CurveElementSectionDerivedDefinitions::*)( const StepElement_MeasureOrUnspecifiedValue &  ) ) static_cast<void (StepElement_CurveElementSectionDerivedDefinitions::*)( const StepElement_MeasureOrUnspecifiedValue &  ) >(&StepElement_CurveElementSectionDerivedDefinitions::SetNonStructuralMass),
             R"#(Set field NonStructuralMass)#"  , py::arg("NonStructuralMass"))
        .def("PolarMoment",
             (StepElement_MeasureOrUnspecifiedValue (StepElement_CurveElementSectionDerivedDefinitions::*)() const) static_cast<StepElement_MeasureOrUnspecifiedValue (StepElement_CurveElementSectionDerivedDefinitions::*)() const>(&StepElement_CurveElementSectionDerivedDefinitions::PolarMoment),
             R"#(Returns field PolarMoment)#" )
        .def("SetPolarMoment",
             (void (StepElement_CurveElementSectionDerivedDefinitions::*)( const StepElement_MeasureOrUnspecifiedValue &  ) ) static_cast<void (StepElement_CurveElementSectionDerivedDefinitions::*)( const StepElement_MeasureOrUnspecifiedValue &  ) >(&StepElement_CurveElementSectionDerivedDefinitions::SetPolarMoment),
             R"#(Set field PolarMoment)#"  , py::arg("PolarMoment"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_CurveElementSectionDerivedDefinitions::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_CurveElementSectionDerivedDefinitions::*)() const>(&StepElement_CurveElementSectionDerivedDefinitions::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_CurveElementSectionDerivedDefinitions::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_CurveElementSectionDerivedDefinitions::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_SurfaceElementProperty ,opencascade::handle<StepElement_SurfaceElementProperty>  , Standard_Transient >>(m.attr("StepElement_SurfaceElementProperty"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_SurfaceElementProperty::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepElement_SurfaceSectionField> &  ) ) static_cast<void (StepElement_SurfaceElementProperty::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepElement_SurfaceSectionField> &  ) >(&StepElement_SurfaceElementProperty::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aPropertyId"),  py::arg("aDescription"),  py::arg("aSection"))
        .def("PropertyId",
             (opencascade::handle<TCollection_HAsciiString> (StepElement_SurfaceElementProperty::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepElement_SurfaceElementProperty::*)() const>(&StepElement_SurfaceElementProperty::PropertyId),
             R"#(Returns field PropertyId)#" )
        .def("SetPropertyId",
             (void (StepElement_SurfaceElementProperty::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepElement_SurfaceElementProperty::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepElement_SurfaceElementProperty::SetPropertyId),
             R"#(Set field PropertyId)#"  , py::arg("PropertyId"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepElement_SurfaceElementProperty::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepElement_SurfaceElementProperty::*)() const>(&StepElement_SurfaceElementProperty::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepElement_SurfaceElementProperty::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepElement_SurfaceElementProperty::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepElement_SurfaceElementProperty::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("Section",
             (opencascade::handle<StepElement_SurfaceSectionField> (StepElement_SurfaceElementProperty::*)() const) static_cast<opencascade::handle<StepElement_SurfaceSectionField> (StepElement_SurfaceElementProperty::*)() const>(&StepElement_SurfaceElementProperty::Section),
             R"#(Returns field Section)#" )
        .def("SetSection",
             (void (StepElement_SurfaceElementProperty::*)( const opencascade::handle<StepElement_SurfaceSectionField> &  ) ) static_cast<void (StepElement_SurfaceElementProperty::*)( const opencascade::handle<StepElement_SurfaceSectionField> &  ) >(&StepElement_SurfaceElementProperty::SetSection),
             R"#(Set field Section)#"  , py::arg("Section"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_SurfaceElementProperty::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_SurfaceElementProperty::*)() const>(&StepElement_SurfaceElementProperty::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_SurfaceElementProperty::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_SurfaceElementProperty::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_HArray2OfSurfaceElementPurpose ,std::unique_ptr<StepElement_HArray2OfSurfaceElementPurpose>  >>(m.attr("StepElement_HArray2OfSurfaceElementPurpose"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const StepElement_SurfaceElementPurpose & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<StepElement_SurfaceElementPurpose> & >()  , py::arg("theOther") )
        .def("Array2",
             (const StepElement_Array2OfSurfaceElementPurpose & (StepElement_HArray2OfSurfaceElementPurpose::*)() const) static_cast<const StepElement_Array2OfSurfaceElementPurpose & (StepElement_HArray2OfSurfaceElementPurpose::*)() const>(&StepElement_HArray2OfSurfaceElementPurpose::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (StepElement_Array2OfSurfaceElementPurpose & (StepElement_HArray2OfSurfaceElementPurpose::*)() ) static_cast<StepElement_Array2OfSurfaceElementPurpose & (StepElement_HArray2OfSurfaceElementPurpose::*)() >(&StepElement_HArray2OfSurfaceElementPurpose::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray2OfSurfaceElementPurpose::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray2OfSurfaceElementPurpose::*)() const>(&StepElement_HArray2OfSurfaceElementPurpose::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray2OfSurfaceElementPurpose::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray2OfSurfaceElementPurpose::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_HSequenceOfElementMaterial ,std::unique_ptr<StepElement_HSequenceOfElementMaterial>  >>(m.attr("StepElement_HSequenceOfElementMaterial"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepElement_ElementMaterial> > & >()  , py::arg("theOther") )
        .def("Sequence",
             (const StepElement_SequenceOfElementMaterial & (StepElement_HSequenceOfElementMaterial::*)() const) static_cast<const StepElement_SequenceOfElementMaterial & (StepElement_HSequenceOfElementMaterial::*)() const>(&StepElement_HSequenceOfElementMaterial::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepElement_HSequenceOfElementMaterial::*)(  const opencascade::handle<StepElement_ElementMaterial> &  ) ) static_cast<void (StepElement_HSequenceOfElementMaterial::*)(  const opencascade::handle<StepElement_ElementMaterial> &  ) >(&StepElement_HSequenceOfElementMaterial::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepElement_HSequenceOfElementMaterial::*)( NCollection_Sequence<opencascade::handle<StepElement_ElementMaterial> > &  ) ) static_cast<void (StepElement_HSequenceOfElementMaterial::*)( NCollection_Sequence<opencascade::handle<StepElement_ElementMaterial> > &  ) >(&StepElement_HSequenceOfElementMaterial::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepElement_SequenceOfElementMaterial & (StepElement_HSequenceOfElementMaterial::*)() ) static_cast<StepElement_SequenceOfElementMaterial & (StepElement_HSequenceOfElementMaterial::*)() >(&StepElement_HSequenceOfElementMaterial::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfElementMaterial::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfElementMaterial::*)() const>(&StepElement_HSequenceOfElementMaterial::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HSequenceOfElementMaterial::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HSequenceOfElementMaterial::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_CurveElementFreedomMember ,opencascade::handle<StepElement_CurveElementFreedomMember>  , StepData_SelectNamed >>(m.attr("StepElement_CurveElementFreedomMember"))
        .def(py::init<  >()  )
        .def("HasName",
             (Standard_Boolean (StepElement_CurveElementFreedomMember::*)() const) static_cast<Standard_Boolean (StepElement_CurveElementFreedomMember::*)() const>(&StepElement_CurveElementFreedomMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepElement_CurveElementFreedomMember::*)() const) static_cast<Standard_CString (StepElement_CurveElementFreedomMember::*)() const>(&StepElement_CurveElementFreedomMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepElement_CurveElementFreedomMember::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (StepElement_CurveElementFreedomMember::*)( const Standard_CString  ) >(&StepElement_CurveElementFreedomMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepElement_CurveElementFreedomMember::*)( const Standard_CString  ) const) static_cast<Standard_Boolean (StepElement_CurveElementFreedomMember::*)( const Standard_CString  ) const>(&StepElement_CurveElementFreedomMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_CurveElementFreedomMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_CurveElementFreedomMember::*)() const>(&StepElement_CurveElementFreedomMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_CurveElementFreedomMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_CurveElementFreedomMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_VolumeElementPurpose ,std::unique_ptr<StepElement_VolumeElementPurpose>  , StepData_SelectType >>(m.attr("StepElement_VolumeElementPurpose"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepElement_VolumeElementPurpose::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepElement_VolumeElementPurpose::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepElement_VolumeElementPurpose::CaseNum),
             R"#(Recognizes a kind of VolumeElementPurpose select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepElement_VolumeElementPurpose::*)( const opencascade::handle<StepData_SelectMember> &  ) const) static_cast<Standard_Integer (StepElement_VolumeElementPurpose::*)( const opencascade::handle<StepData_SelectMember> &  ) const>(&StepElement_VolumeElementPurpose::CaseMem),
             R"#(Recognizes a items of select member VolumeElementPurposeMember 1 -> EnumeratedVolumeElementPurpose 2 -> ApplicationDefinedElementPurpose 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepElement_VolumeElementPurpose::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepElement_VolumeElementPurpose::*)() const>(&StepElement_VolumeElementPurpose::NewMember),
             R"#(Returns a new select member the type VolumeElementPurposeMember)#" )
        .def("SetEnumeratedVolumeElementPurpose",
             (void (StepElement_VolumeElementPurpose::*)( const StepElement_EnumeratedVolumeElementPurpose  ) ) static_cast<void (StepElement_VolumeElementPurpose::*)( const StepElement_EnumeratedVolumeElementPurpose  ) >(&StepElement_VolumeElementPurpose::SetEnumeratedVolumeElementPurpose),
             R"#(Set Value for EnumeratedVolumeElementPurpose)#"  , py::arg("aVal"))
        .def("EnumeratedVolumeElementPurpose",
             (StepElement_EnumeratedVolumeElementPurpose (StepElement_VolumeElementPurpose::*)() const) static_cast<StepElement_EnumeratedVolumeElementPurpose (StepElement_VolumeElementPurpose::*)() const>(&StepElement_VolumeElementPurpose::EnumeratedVolumeElementPurpose),
             R"#(Returns Value as EnumeratedVolumeElementPurpose (or Null if another type))#" )
        .def("SetApplicationDefinedElementPurpose",
             (void (StepElement_VolumeElementPurpose::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepElement_VolumeElementPurpose::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepElement_VolumeElementPurpose::SetApplicationDefinedElementPurpose),
             R"#(Set Value for ApplicationDefinedElementPurpose)#"  , py::arg("aVal"))
        .def("ApplicationDefinedElementPurpose",
             (opencascade::handle<TCollection_HAsciiString> (StepElement_VolumeElementPurpose::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepElement_VolumeElementPurpose::*)() const>(&StepElement_VolumeElementPurpose::ApplicationDefinedElementPurpose),
             R"#(Returns Value as ApplicationDefinedElementPurpose (or Null if another type))#" )
;


    static_cast<py::class_<StepElement_HArray2OfCurveElementPurposeMember ,std::unique_ptr<StepElement_HArray2OfCurveElementPurposeMember>  >>(m.attr("StepElement_HArray2OfCurveElementPurposeMember"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_CurveElementPurposeMember> & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<opencascade::handle<StepElement_CurveElementPurposeMember> > & >()  , py::arg("theOther") )
        .def("Array2",
             (const StepElement_Array2OfCurveElementPurposeMember & (StepElement_HArray2OfCurveElementPurposeMember::*)() const) static_cast<const StepElement_Array2OfCurveElementPurposeMember & (StepElement_HArray2OfCurveElementPurposeMember::*)() const>(&StepElement_HArray2OfCurveElementPurposeMember::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (StepElement_Array2OfCurveElementPurposeMember & (StepElement_HArray2OfCurveElementPurposeMember::*)() ) static_cast<StepElement_Array2OfCurveElementPurposeMember & (StepElement_HArray2OfCurveElementPurposeMember::*)() >(&StepElement_HArray2OfCurveElementPurposeMember::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray2OfCurveElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray2OfCurveElementPurposeMember::*)() const>(&StepElement_HArray2OfCurveElementPurposeMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray2OfCurveElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray2OfCurveElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_ElementAspect ,std::unique_ptr<StepElement_ElementAspect>  , StepData_SelectType >>(m.attr("StepElement_ElementAspect"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepElement_ElementAspect::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepElement_ElementAspect::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepElement_ElementAspect::CaseNum),
             R"#(Recognizes a kind of ElementAspect select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepElement_ElementAspect::*)( const opencascade::handle<StepData_SelectMember> &  ) const) static_cast<Standard_Integer (StepElement_ElementAspect::*)( const opencascade::handle<StepData_SelectMember> &  ) const>(&StepElement_ElementAspect::CaseMem),
             R"#(Recognizes a items of select member ElementAspectMember 1 -> ElementVolume 2 -> Volume3dFace 3 -> Volume2dFace 4 -> Volume3dEdge 5 -> Volume2dEdge 6 -> Surface3dFace 7 -> Surface2dFace 8 -> Surface3dEdge 9 -> Surface2dEdge 10 -> CurveEdge 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepElement_ElementAspect::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepElement_ElementAspect::*)() const>(&StepElement_ElementAspect::NewMember),
             R"#(Returns a new select member the type ElementAspectMember)#" )
        .def("SetElementVolume",
             (void (StepElement_ElementAspect::*)( const StepElement_ElementVolume  ) ) static_cast<void (StepElement_ElementAspect::*)( const StepElement_ElementVolume  ) >(&StepElement_ElementAspect::SetElementVolume),
             R"#(Set Value for ElementVolume)#"  , py::arg("aVal"))
        .def("ElementVolume",
             (StepElement_ElementVolume (StepElement_ElementAspect::*)() const) static_cast<StepElement_ElementVolume (StepElement_ElementAspect::*)() const>(&StepElement_ElementAspect::ElementVolume),
             R"#(Returns Value as ElementVolume (or Null if another type))#" )
        .def("SetVolume3dFace",
             (void (StepElement_ElementAspect::*)( const Standard_Integer  ) ) static_cast<void (StepElement_ElementAspect::*)( const Standard_Integer  ) >(&StepElement_ElementAspect::SetVolume3dFace),
             R"#(Set Value for Volume3dFace)#"  , py::arg("aVal"))
        .def("Volume3dFace",
             (Standard_Integer (StepElement_ElementAspect::*)() const) static_cast<Standard_Integer (StepElement_ElementAspect::*)() const>(&StepElement_ElementAspect::Volume3dFace),
             R"#(Returns Value as Volume3dFace (or Null if another type))#" )
        .def("SetVolume2dFace",
             (void (StepElement_ElementAspect::*)( const Standard_Integer  ) ) static_cast<void (StepElement_ElementAspect::*)( const Standard_Integer  ) >(&StepElement_ElementAspect::SetVolume2dFace),
             R"#(Set Value for Volume2dFace)#"  , py::arg("aVal"))
        .def("Volume2dFace",
             (Standard_Integer (StepElement_ElementAspect::*)() const) static_cast<Standard_Integer (StepElement_ElementAspect::*)() const>(&StepElement_ElementAspect::Volume2dFace),
             R"#(Returns Value as Volume2dFace (or Null if another type))#" )
        .def("SetVolume3dEdge",
             (void (StepElement_ElementAspect::*)( const Standard_Integer  ) ) static_cast<void (StepElement_ElementAspect::*)( const Standard_Integer  ) >(&StepElement_ElementAspect::SetVolume3dEdge),
             R"#(Set Value for Volume3dEdge)#"  , py::arg("aVal"))
        .def("Volume3dEdge",
             (Standard_Integer (StepElement_ElementAspect::*)() const) static_cast<Standard_Integer (StepElement_ElementAspect::*)() const>(&StepElement_ElementAspect::Volume3dEdge),
             R"#(Returns Value as Volume3dEdge (or Null if another type))#" )
        .def("SetVolume2dEdge",
             (void (StepElement_ElementAspect::*)( const Standard_Integer  ) ) static_cast<void (StepElement_ElementAspect::*)( const Standard_Integer  ) >(&StepElement_ElementAspect::SetVolume2dEdge),
             R"#(Set Value for Volume2dEdge)#"  , py::arg("aVal"))
        .def("Volume2dEdge",
             (Standard_Integer (StepElement_ElementAspect::*)() const) static_cast<Standard_Integer (StepElement_ElementAspect::*)() const>(&StepElement_ElementAspect::Volume2dEdge),
             R"#(Returns Value as Volume2dEdge (or Null if another type))#" )
        .def("SetSurface3dFace",
             (void (StepElement_ElementAspect::*)( const Standard_Integer  ) ) static_cast<void (StepElement_ElementAspect::*)( const Standard_Integer  ) >(&StepElement_ElementAspect::SetSurface3dFace),
             R"#(Set Value for Surface3dFace)#"  , py::arg("aVal"))
        .def("Surface3dFace",
             (Standard_Integer (StepElement_ElementAspect::*)() const) static_cast<Standard_Integer (StepElement_ElementAspect::*)() const>(&StepElement_ElementAspect::Surface3dFace),
             R"#(Returns Value as Surface3dFace (or Null if another type))#" )
        .def("SetSurface2dFace",
             (void (StepElement_ElementAspect::*)( const Standard_Integer  ) ) static_cast<void (StepElement_ElementAspect::*)( const Standard_Integer  ) >(&StepElement_ElementAspect::SetSurface2dFace),
             R"#(Set Value for Surface2dFace)#"  , py::arg("aVal"))
        .def("Surface2dFace",
             (Standard_Integer (StepElement_ElementAspect::*)() const) static_cast<Standard_Integer (StepElement_ElementAspect::*)() const>(&StepElement_ElementAspect::Surface2dFace),
             R"#(Returns Value as Surface2dFace (or Null if another type))#" )
        .def("SetSurface3dEdge",
             (void (StepElement_ElementAspect::*)( const Standard_Integer  ) ) static_cast<void (StepElement_ElementAspect::*)( const Standard_Integer  ) >(&StepElement_ElementAspect::SetSurface3dEdge),
             R"#(Set Value for Surface3dEdge)#"  , py::arg("aVal"))
        .def("Surface3dEdge",
             (Standard_Integer (StepElement_ElementAspect::*)() const) static_cast<Standard_Integer (StepElement_ElementAspect::*)() const>(&StepElement_ElementAspect::Surface3dEdge),
             R"#(Returns Value as Surface3dEdge (or Null if another type))#" )
        .def("SetSurface2dEdge",
             (void (StepElement_ElementAspect::*)( const Standard_Integer  ) ) static_cast<void (StepElement_ElementAspect::*)( const Standard_Integer  ) >(&StepElement_ElementAspect::SetSurface2dEdge),
             R"#(Set Value for Surface2dEdge)#"  , py::arg("aVal"))
        .def("Surface2dEdge",
             (Standard_Integer (StepElement_ElementAspect::*)() const) static_cast<Standard_Integer (StepElement_ElementAspect::*)() const>(&StepElement_ElementAspect::Surface2dEdge),
             R"#(Returns Value as Surface2dEdge (or Null if another type))#" )
        .def("SetCurveEdge",
             (void (StepElement_ElementAspect::*)( const StepElement_CurveEdge  ) ) static_cast<void (StepElement_ElementAspect::*)( const StepElement_CurveEdge  ) >(&StepElement_ElementAspect::SetCurveEdge),
             R"#(Set Value for CurveEdge)#"  , py::arg("aVal"))
        .def("CurveEdge",
             (StepElement_CurveEdge (StepElement_ElementAspect::*)() const) static_cast<StepElement_CurveEdge (StepElement_ElementAspect::*)() const>(&StepElement_ElementAspect::CurveEdge),
             R"#(Returns Value as CurveEdge (or Null if another type))#" )
;


    static_cast<py::class_<StepElement_HArray1OfMeasureOrUnspecifiedValue ,std::unique_ptr<StepElement_HArray1OfMeasureOrUnspecifiedValue>  >>(m.attr("StepElement_HArray1OfMeasureOrUnspecifiedValue"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepElement_MeasureOrUnspecifiedValue & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepElement_MeasureOrUnspecifiedValue> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepElement_Array1OfMeasureOrUnspecifiedValue & (StepElement_HArray1OfMeasureOrUnspecifiedValue::*)() const) static_cast<const StepElement_Array1OfMeasureOrUnspecifiedValue & (StepElement_HArray1OfMeasureOrUnspecifiedValue::*)() const>(&StepElement_HArray1OfMeasureOrUnspecifiedValue::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfMeasureOrUnspecifiedValue & (StepElement_HArray1OfMeasureOrUnspecifiedValue::*)() ) static_cast<StepElement_Array1OfMeasureOrUnspecifiedValue & (StepElement_HArray1OfMeasureOrUnspecifiedValue::*)() >(&StepElement_HArray1OfMeasureOrUnspecifiedValue::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfMeasureOrUnspecifiedValue::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfMeasureOrUnspecifiedValue::*)() const>(&StepElement_HArray1OfMeasureOrUnspecifiedValue::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfMeasureOrUnspecifiedValue::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfMeasureOrUnspecifiedValue::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_CurveElementPurposeMember ,opencascade::handle<StepElement_CurveElementPurposeMember>  , StepData_SelectNamed >>(m.attr("StepElement_CurveElementPurposeMember"))
        .def(py::init<  >()  )
        .def("HasName",
             (Standard_Boolean (StepElement_CurveElementPurposeMember::*)() const) static_cast<Standard_Boolean (StepElement_CurveElementPurposeMember::*)() const>(&StepElement_CurveElementPurposeMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepElement_CurveElementPurposeMember::*)() const) static_cast<Standard_CString (StepElement_CurveElementPurposeMember::*)() const>(&StepElement_CurveElementPurposeMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepElement_CurveElementPurposeMember::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (StepElement_CurveElementPurposeMember::*)( const Standard_CString  ) >(&StepElement_CurveElementPurposeMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepElement_CurveElementPurposeMember::*)( const Standard_CString  ) const) static_cast<Standard_Boolean (StepElement_CurveElementPurposeMember::*)( const Standard_CString  ) const>(&StepElement_CurveElementPurposeMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_CurveElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_CurveElementPurposeMember::*)() const>(&StepElement_CurveElementPurposeMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_CurveElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_CurveElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_Surface3dElementDescriptor ,opencascade::handle<StepElement_Surface3dElementDescriptor>  , StepElement_ElementDescriptor >>(m.attr("StepElement_Surface3dElementDescriptor"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_Surface3dElementDescriptor::*)( const StepElement_ElementOrder ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember> & ,  const StepElement_Element2dShape  ) ) static_cast<void (StepElement_Surface3dElementDescriptor::*)( const StepElement_ElementOrder ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember> & ,  const StepElement_Element2dShape  ) >(&StepElement_Surface3dElementDescriptor::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aElementDescriptor_TopologyOrder"),  py::arg("aElementDescriptor_Description"),  py::arg("aPurpose"),  py::arg("aShape"))
        .def("Purpose",
             (opencascade::handle<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember> (StepElement_Surface3dElementDescriptor::*)() const) static_cast<opencascade::handle<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember> (StepElement_Surface3dElementDescriptor::*)() const>(&StepElement_Surface3dElementDescriptor::Purpose),
             R"#(Returns field Purpose)#" )
        .def("SetPurpose",
             (void (StepElement_Surface3dElementDescriptor::*)( const opencascade::handle<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember> &  ) ) static_cast<void (StepElement_Surface3dElementDescriptor::*)( const opencascade::handle<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember> &  ) >(&StepElement_Surface3dElementDescriptor::SetPurpose),
             R"#(Set field Purpose)#"  , py::arg("Purpose"))
        .def("Shape",
             (StepElement_Element2dShape (StepElement_Surface3dElementDescriptor::*)() const) static_cast<StepElement_Element2dShape (StepElement_Surface3dElementDescriptor::*)() const>(&StepElement_Surface3dElementDescriptor::Shape),
             R"#(Returns field Shape)#" )
        .def("SetShape",
             (void (StepElement_Surface3dElementDescriptor::*)( const StepElement_Element2dShape  ) ) static_cast<void (StepElement_Surface3dElementDescriptor::*)( const StepElement_Element2dShape  ) >(&StepElement_Surface3dElementDescriptor::SetShape),
             R"#(Set field Shape)#"  , py::arg("Shape"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_Surface3dElementDescriptor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_Surface3dElementDescriptor::*)() const>(&StepElement_Surface3dElementDescriptor::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_Surface3dElementDescriptor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_Surface3dElementDescriptor::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_SurfaceSectionField ,opencascade::handle<StepElement_SurfaceSectionField>  , Standard_Transient >>(m.attr("StepElement_SurfaceSectionField"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_SurfaceSectionField::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_SurfaceSectionField::*)() const>(&StepElement_SurfaceSectionField::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_SurfaceSectionField::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_SurfaceSectionField::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_ElementMaterial ,opencascade::handle<StepElement_ElementMaterial>  , Standard_Transient >>(m.attr("StepElement_ElementMaterial"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_ElementMaterial::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepRepr_HArray1OfMaterialPropertyRepresentation> &  ) ) static_cast<void (StepElement_ElementMaterial::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepRepr_HArray1OfMaterialPropertyRepresentation> &  ) >(&StepElement_ElementMaterial::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aMaterialId"),  py::arg("aDescription"),  py::arg("aProperties"))
        .def("MaterialId",
             (opencascade::handle<TCollection_HAsciiString> (StepElement_ElementMaterial::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepElement_ElementMaterial::*)() const>(&StepElement_ElementMaterial::MaterialId),
             R"#(Returns field MaterialId)#" )
        .def("SetMaterialId",
             (void (StepElement_ElementMaterial::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepElement_ElementMaterial::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepElement_ElementMaterial::SetMaterialId),
             R"#(Set field MaterialId)#"  , py::arg("MaterialId"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepElement_ElementMaterial::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepElement_ElementMaterial::*)() const>(&StepElement_ElementMaterial::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepElement_ElementMaterial::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepElement_ElementMaterial::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepElement_ElementMaterial::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("Properties",
             (opencascade::handle<StepRepr_HArray1OfMaterialPropertyRepresentation> (StepElement_ElementMaterial::*)() const) static_cast<opencascade::handle<StepRepr_HArray1OfMaterialPropertyRepresentation> (StepElement_ElementMaterial::*)() const>(&StepElement_ElementMaterial::Properties),
             R"#(Returns field Properties)#" )
        .def("SetProperties",
             (void (StepElement_ElementMaterial::*)( const opencascade::handle<StepRepr_HArray1OfMaterialPropertyRepresentation> &  ) ) static_cast<void (StepElement_ElementMaterial::*)( const opencascade::handle<StepRepr_HArray1OfMaterialPropertyRepresentation> &  ) >(&StepElement_ElementMaterial::SetProperties),
             R"#(Set field Properties)#"  , py::arg("Properties"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_ElementMaterial::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_ElementMaterial::*)() const>(&StepElement_ElementMaterial::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_ElementMaterial::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_ElementMaterial::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_CurveElementFreedom ,std::unique_ptr<StepElement_CurveElementFreedom>  , StepData_SelectType >>(m.attr("StepElement_CurveElementFreedom"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepElement_CurveElementFreedom::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepElement_CurveElementFreedom::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepElement_CurveElementFreedom::CaseNum),
             R"#(Recognizes a kind of CurveElementFreedom select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepElement_CurveElementFreedom::*)( const opencascade::handle<StepData_SelectMember> &  ) const) static_cast<Standard_Integer (StepElement_CurveElementFreedom::*)( const opencascade::handle<StepData_SelectMember> &  ) const>(&StepElement_CurveElementFreedom::CaseMem),
             R"#(Recognizes a items of select member CurveElementFreedomMember 1 -> EnumeratedCurveElementFreedom 2 -> ApplicationDefinedDegreeOfFreedom 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepElement_CurveElementFreedom::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepElement_CurveElementFreedom::*)() const>(&StepElement_CurveElementFreedom::NewMember),
             R"#(Returns a new select member the type CurveElementFreedomMember)#" )
        .def("SetEnumeratedCurveElementFreedom",
             (void (StepElement_CurveElementFreedom::*)( const StepElement_EnumeratedCurveElementFreedom  ) ) static_cast<void (StepElement_CurveElementFreedom::*)( const StepElement_EnumeratedCurveElementFreedom  ) >(&StepElement_CurveElementFreedom::SetEnumeratedCurveElementFreedom),
             R"#(Set Value for EnumeratedCurveElementFreedom)#"  , py::arg("aVal"))
        .def("EnumeratedCurveElementFreedom",
             (StepElement_EnumeratedCurveElementFreedom (StepElement_CurveElementFreedom::*)() const) static_cast<StepElement_EnumeratedCurveElementFreedom (StepElement_CurveElementFreedom::*)() const>(&StepElement_CurveElementFreedom::EnumeratedCurveElementFreedom),
             R"#(Returns Value as EnumeratedCurveElementFreedom (or Null if another type))#" )
        .def("SetApplicationDefinedDegreeOfFreedom",
             (void (StepElement_CurveElementFreedom::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepElement_CurveElementFreedom::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepElement_CurveElementFreedom::SetApplicationDefinedDegreeOfFreedom),
             R"#(Set Value for ApplicationDefinedDegreeOfFreedom)#"  , py::arg("aVal"))
        .def("ApplicationDefinedDegreeOfFreedom",
             (opencascade::handle<TCollection_HAsciiString> (StepElement_CurveElementFreedom::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepElement_CurveElementFreedom::*)() const>(&StepElement_CurveElementFreedom::ApplicationDefinedDegreeOfFreedom),
             R"#(Returns Value as ApplicationDefinedDegreeOfFreedom (or Null if another type))#" )
;


    static_cast<py::class_<StepElement_SurfaceSectionFieldConstant ,opencascade::handle<StepElement_SurfaceSectionFieldConstant>  , StepElement_SurfaceSectionField >>(m.attr("StepElement_SurfaceSectionFieldConstant"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_SurfaceSectionFieldConstant::*)( const opencascade::handle<StepElement_SurfaceSection> &  ) ) static_cast<void (StepElement_SurfaceSectionFieldConstant::*)( const opencascade::handle<StepElement_SurfaceSection> &  ) >(&StepElement_SurfaceSectionFieldConstant::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aDefinition"))
        .def("Definition",
             (opencascade::handle<StepElement_SurfaceSection> (StepElement_SurfaceSectionFieldConstant::*)() const) static_cast<opencascade::handle<StepElement_SurfaceSection> (StepElement_SurfaceSectionFieldConstant::*)() const>(&StepElement_SurfaceSectionFieldConstant::Definition),
             R"#(Returns field Definition)#" )
        .def("SetDefinition",
             (void (StepElement_SurfaceSectionFieldConstant::*)( const opencascade::handle<StepElement_SurfaceSection> &  ) ) static_cast<void (StepElement_SurfaceSectionFieldConstant::*)( const opencascade::handle<StepElement_SurfaceSection> &  ) >(&StepElement_SurfaceSectionFieldConstant::SetDefinition),
             R"#(Set field Definition)#"  , py::arg("Definition"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_SurfaceSectionFieldConstant::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_SurfaceSectionFieldConstant::*)() const>(&StepElement_SurfaceSectionFieldConstant::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_SurfaceSectionFieldConstant::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_SurfaceSectionFieldConstant::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_HSequenceOfSurfaceElementPurposeMember ,std::unique_ptr<StepElement_HSequenceOfSurfaceElementPurposeMember>  >>(m.attr("StepElement_HSequenceOfSurfaceElementPurposeMember"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepElement_SurfaceElementPurposeMember> > & >()  , py::arg("theOther") )
        .def("Sequence",
             (const StepElement_SequenceOfSurfaceElementPurposeMember & (StepElement_HSequenceOfSurfaceElementPurposeMember::*)() const) static_cast<const StepElement_SequenceOfSurfaceElementPurposeMember & (StepElement_HSequenceOfSurfaceElementPurposeMember::*)() const>(&StepElement_HSequenceOfSurfaceElementPurposeMember::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepElement_HSequenceOfSurfaceElementPurposeMember::*)(  const opencascade::handle<StepElement_SurfaceElementPurposeMember> &  ) ) static_cast<void (StepElement_HSequenceOfSurfaceElementPurposeMember::*)(  const opencascade::handle<StepElement_SurfaceElementPurposeMember> &  ) >(&StepElement_HSequenceOfSurfaceElementPurposeMember::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepElement_HSequenceOfSurfaceElementPurposeMember::*)( NCollection_Sequence<opencascade::handle<StepElement_SurfaceElementPurposeMember> > &  ) ) static_cast<void (StepElement_HSequenceOfSurfaceElementPurposeMember::*)( NCollection_Sequence<opencascade::handle<StepElement_SurfaceElementPurposeMember> > &  ) >(&StepElement_HSequenceOfSurfaceElementPurposeMember::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepElement_SequenceOfSurfaceElementPurposeMember & (StepElement_HSequenceOfSurfaceElementPurposeMember::*)() ) static_cast<StepElement_SequenceOfSurfaceElementPurposeMember & (StepElement_HSequenceOfSurfaceElementPurposeMember::*)() >(&StepElement_HSequenceOfSurfaceElementPurposeMember::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfSurfaceElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfSurfaceElementPurposeMember::*)() const>(&StepElement_HSequenceOfSurfaceElementPurposeMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HSequenceOfSurfaceElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HSequenceOfSurfaceElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_AnalysisItemWithinRepresentation ,opencascade::handle<StepElement_AnalysisItemWithinRepresentation>  , Standard_Transient >>(m.attr("StepElement_AnalysisItemWithinRepresentation"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_AnalysisItemWithinRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepRepr_RepresentationItem> & ,  const opencascade::handle<StepRepr_Representation> &  ) ) static_cast<void (StepElement_AnalysisItemWithinRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepRepr_RepresentationItem> & ,  const opencascade::handle<StepRepr_Representation> &  ) >(&StepElement_AnalysisItemWithinRepresentation::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aName"),  py::arg("aDescription"),  py::arg("aItem"),  py::arg("aRep"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepElement_AnalysisItemWithinRepresentation::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepElement_AnalysisItemWithinRepresentation::*)() const>(&StepElement_AnalysisItemWithinRepresentation::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepElement_AnalysisItemWithinRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepElement_AnalysisItemWithinRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepElement_AnalysisItemWithinRepresentation::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepElement_AnalysisItemWithinRepresentation::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepElement_AnalysisItemWithinRepresentation::*)() const>(&StepElement_AnalysisItemWithinRepresentation::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepElement_AnalysisItemWithinRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepElement_AnalysisItemWithinRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepElement_AnalysisItemWithinRepresentation::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("Item",
             (opencascade::handle<StepRepr_RepresentationItem> (StepElement_AnalysisItemWithinRepresentation::*)() const) static_cast<opencascade::handle<StepRepr_RepresentationItem> (StepElement_AnalysisItemWithinRepresentation::*)() const>(&StepElement_AnalysisItemWithinRepresentation::Item),
             R"#(Returns field Item)#" )
        .def("SetItem",
             (void (StepElement_AnalysisItemWithinRepresentation::*)( const opencascade::handle<StepRepr_RepresentationItem> &  ) ) static_cast<void (StepElement_AnalysisItemWithinRepresentation::*)( const opencascade::handle<StepRepr_RepresentationItem> &  ) >(&StepElement_AnalysisItemWithinRepresentation::SetItem),
             R"#(Set field Item)#"  , py::arg("Item"))
        .def("Rep",
             (opencascade::handle<StepRepr_Representation> (StepElement_AnalysisItemWithinRepresentation::*)() const) static_cast<opencascade::handle<StepRepr_Representation> (StepElement_AnalysisItemWithinRepresentation::*)() const>(&StepElement_AnalysisItemWithinRepresentation::Rep),
             R"#(Returns field Rep)#" )
        .def("SetRep",
             (void (StepElement_AnalysisItemWithinRepresentation::*)( const opencascade::handle<StepRepr_Representation> &  ) ) static_cast<void (StepElement_AnalysisItemWithinRepresentation::*)( const opencascade::handle<StepRepr_Representation> &  ) >(&StepElement_AnalysisItemWithinRepresentation::SetRep),
             R"#(Set field Rep)#"  , py::arg("Rep"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_AnalysisItemWithinRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_AnalysisItemWithinRepresentation::*)() const>(&StepElement_AnalysisItemWithinRepresentation::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_AnalysisItemWithinRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_AnalysisItemWithinRepresentation::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_SurfaceSection ,opencascade::handle<StepElement_SurfaceSection>  , Standard_Transient >>(m.attr("StepElement_SurfaceSection"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_SurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue & ,  const StepElement_MeasureOrUnspecifiedValue & ,  const StepElement_MeasureOrUnspecifiedValue &  ) ) static_cast<void (StepElement_SurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue & ,  const StepElement_MeasureOrUnspecifiedValue & ,  const StepElement_MeasureOrUnspecifiedValue &  ) >(&StepElement_SurfaceSection::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aOffset"),  py::arg("aNonStructuralMass"),  py::arg("aNonStructuralMassOffset"))
        .def("Offset",
             (StepElement_MeasureOrUnspecifiedValue (StepElement_SurfaceSection::*)() const) static_cast<StepElement_MeasureOrUnspecifiedValue (StepElement_SurfaceSection::*)() const>(&StepElement_SurfaceSection::Offset),
             R"#(Returns field Offset)#" )
        .def("SetOffset",
             (void (StepElement_SurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue &  ) ) static_cast<void (StepElement_SurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue &  ) >(&StepElement_SurfaceSection::SetOffset),
             R"#(Set field Offset)#"  , py::arg("Offset"))
        .def("NonStructuralMass",
             (StepElement_MeasureOrUnspecifiedValue (StepElement_SurfaceSection::*)() const) static_cast<StepElement_MeasureOrUnspecifiedValue (StepElement_SurfaceSection::*)() const>(&StepElement_SurfaceSection::NonStructuralMass),
             R"#(Returns field NonStructuralMass)#" )
        .def("SetNonStructuralMass",
             (void (StepElement_SurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue &  ) ) static_cast<void (StepElement_SurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue &  ) >(&StepElement_SurfaceSection::SetNonStructuralMass),
             R"#(Set field NonStructuralMass)#"  , py::arg("NonStructuralMass"))
        .def("NonStructuralMassOffset",
             (StepElement_MeasureOrUnspecifiedValue (StepElement_SurfaceSection::*)() const) static_cast<StepElement_MeasureOrUnspecifiedValue (StepElement_SurfaceSection::*)() const>(&StepElement_SurfaceSection::NonStructuralMassOffset),
             R"#(Returns field NonStructuralMassOffset)#" )
        .def("SetNonStructuralMassOffset",
             (void (StepElement_SurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue &  ) ) static_cast<void (StepElement_SurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue &  ) >(&StepElement_SurfaceSection::SetNonStructuralMassOffset),
             R"#(Set field NonStructuralMassOffset)#"  , py::arg("NonStructuralMassOffset"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_SurfaceSection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_SurfaceSection::*)() const>(&StepElement_SurfaceSection::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_SurfaceSection::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_SurfaceSection::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember ,std::unique_ptr<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember>  >>(m.attr("StepElement_HArray1OfHSequenceOfCurveElementPurposeMember"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_HSequenceOfCurveElementPurposeMember> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepElement_HSequenceOfCurveElementPurposeMember> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepElement_Array1OfHSequenceOfCurveElementPurposeMember & (StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::*)() const) static_cast<const StepElement_Array1OfHSequenceOfCurveElementPurposeMember & (StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::*)() const>(&StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfHSequenceOfCurveElementPurposeMember & (StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::*)() ) static_cast<StepElement_Array1OfHSequenceOfCurveElementPurposeMember & (StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::*)() >(&StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::*)() const>(&StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_UniformSurfaceSection ,opencascade::handle<StepElement_UniformSurfaceSection>  , StepElement_SurfaceSection >>(m.attr("StepElement_UniformSurfaceSection"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_UniformSurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue & ,  const StepElement_MeasureOrUnspecifiedValue & ,  const StepElement_MeasureOrUnspecifiedValue & ,  const Standard_Real ,  const StepElement_MeasureOrUnspecifiedValue & ,  const StepElement_MeasureOrUnspecifiedValue &  ) ) static_cast<void (StepElement_UniformSurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue & ,  const StepElement_MeasureOrUnspecifiedValue & ,  const StepElement_MeasureOrUnspecifiedValue & ,  const Standard_Real ,  const StepElement_MeasureOrUnspecifiedValue & ,  const StepElement_MeasureOrUnspecifiedValue &  ) >(&StepElement_UniformSurfaceSection::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aSurfaceSection_Offset"),  py::arg("aSurfaceSection_NonStructuralMass"),  py::arg("aSurfaceSection_NonStructuralMassOffset"),  py::arg("aThickness"),  py::arg("aBendingThickness"),  py::arg("aShearThickness"))
        .def("Thickness",
             (Standard_Real (StepElement_UniformSurfaceSection::*)() const) static_cast<Standard_Real (StepElement_UniformSurfaceSection::*)() const>(&StepElement_UniformSurfaceSection::Thickness),
             R"#(Returns field Thickness)#" )
        .def("SetThickness",
             (void (StepElement_UniformSurfaceSection::*)( const Standard_Real  ) ) static_cast<void (StepElement_UniformSurfaceSection::*)( const Standard_Real  ) >(&StepElement_UniformSurfaceSection::SetThickness),
             R"#(Set field Thickness)#"  , py::arg("Thickness"))
        .def("BendingThickness",
             (StepElement_MeasureOrUnspecifiedValue (StepElement_UniformSurfaceSection::*)() const) static_cast<StepElement_MeasureOrUnspecifiedValue (StepElement_UniformSurfaceSection::*)() const>(&StepElement_UniformSurfaceSection::BendingThickness),
             R"#(Returns field BendingThickness)#" )
        .def("SetBendingThickness",
             (void (StepElement_UniformSurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue &  ) ) static_cast<void (StepElement_UniformSurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue &  ) >(&StepElement_UniformSurfaceSection::SetBendingThickness),
             R"#(Set field BendingThickness)#"  , py::arg("BendingThickness"))
        .def("ShearThickness",
             (StepElement_MeasureOrUnspecifiedValue (StepElement_UniformSurfaceSection::*)() const) static_cast<StepElement_MeasureOrUnspecifiedValue (StepElement_UniformSurfaceSection::*)() const>(&StepElement_UniformSurfaceSection::ShearThickness),
             R"#(Returns field ShearThickness)#" )
        .def("SetShearThickness",
             (void (StepElement_UniformSurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue &  ) ) static_cast<void (StepElement_UniformSurfaceSection::*)( const StepElement_MeasureOrUnspecifiedValue &  ) >(&StepElement_UniformSurfaceSection::SetShearThickness),
             R"#(Set field ShearThickness)#"  , py::arg("ShearThickness"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_UniformSurfaceSection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_UniformSurfaceSection::*)() const>(&StepElement_UniformSurfaceSection::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_UniformSurfaceSection::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_UniformSurfaceSection::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_HArray2OfSurfaceElementPurposeMember ,std::unique_ptr<StepElement_HArray2OfSurfaceElementPurposeMember>  >>(m.attr("StepElement_HArray2OfSurfaceElementPurposeMember"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_SurfaceElementPurposeMember> & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<opencascade::handle<StepElement_SurfaceElementPurposeMember> > & >()  , py::arg("theOther") )
        .def("Array2",
             (const StepElement_Array2OfSurfaceElementPurposeMember & (StepElement_HArray2OfSurfaceElementPurposeMember::*)() const) static_cast<const StepElement_Array2OfSurfaceElementPurposeMember & (StepElement_HArray2OfSurfaceElementPurposeMember::*)() const>(&StepElement_HArray2OfSurfaceElementPurposeMember::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (StepElement_Array2OfSurfaceElementPurposeMember & (StepElement_HArray2OfSurfaceElementPurposeMember::*)() ) static_cast<StepElement_Array2OfSurfaceElementPurposeMember & (StepElement_HArray2OfSurfaceElementPurposeMember::*)() >(&StepElement_HArray2OfSurfaceElementPurposeMember::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray2OfSurfaceElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray2OfSurfaceElementPurposeMember::*)() const>(&StepElement_HArray2OfSurfaceElementPurposeMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray2OfSurfaceElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray2OfSurfaceElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_MeasureOrUnspecifiedValue ,std::unique_ptr<StepElement_MeasureOrUnspecifiedValue>  , StepData_SelectType >>(m.attr("StepElement_MeasureOrUnspecifiedValue"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepElement_MeasureOrUnspecifiedValue::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepElement_MeasureOrUnspecifiedValue::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepElement_MeasureOrUnspecifiedValue::CaseNum),
             R"#(Recognizes a kind of MeasureOrUnspecifiedValue select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepElement_MeasureOrUnspecifiedValue::*)( const opencascade::handle<StepData_SelectMember> &  ) const) static_cast<Standard_Integer (StepElement_MeasureOrUnspecifiedValue::*)( const opencascade::handle<StepData_SelectMember> &  ) const>(&StepElement_MeasureOrUnspecifiedValue::CaseMem),
             R"#(Recognizes a items of select member MeasureOrUnspecifiedValueMember 1 -> ContextDependentMeasure 2 -> UnspecifiedValue 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepElement_MeasureOrUnspecifiedValue::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepElement_MeasureOrUnspecifiedValue::*)() const>(&StepElement_MeasureOrUnspecifiedValue::NewMember),
             R"#(Returns a new select member the type MeasureOrUnspecifiedValueMember)#" )
        .def("SetContextDependentMeasure",
             (void (StepElement_MeasureOrUnspecifiedValue::*)( const Standard_Real  ) ) static_cast<void (StepElement_MeasureOrUnspecifiedValue::*)( const Standard_Real  ) >(&StepElement_MeasureOrUnspecifiedValue::SetContextDependentMeasure),
             R"#(Set Value for ContextDependentMeasure)#"  , py::arg("aVal"))
        .def("ContextDependentMeasure",
             (Standard_Real (StepElement_MeasureOrUnspecifiedValue::*)() const) static_cast<Standard_Real (StepElement_MeasureOrUnspecifiedValue::*)() const>(&StepElement_MeasureOrUnspecifiedValue::ContextDependentMeasure),
             R"#(Returns Value as ContextDependentMeasure (or Null if another type))#" )
        .def("SetUnspecifiedValue",
             (void (StepElement_MeasureOrUnspecifiedValue::*)( const StepElement_UnspecifiedValue  ) ) static_cast<void (StepElement_MeasureOrUnspecifiedValue::*)( const StepElement_UnspecifiedValue  ) >(&StepElement_MeasureOrUnspecifiedValue::SetUnspecifiedValue),
             R"#(Set Value for UnspecifiedValue)#"  , py::arg("aVal"))
        .def("UnspecifiedValue",
             (StepElement_UnspecifiedValue (StepElement_MeasureOrUnspecifiedValue::*)() const) static_cast<StepElement_UnspecifiedValue (StepElement_MeasureOrUnspecifiedValue::*)() const>(&StepElement_MeasureOrUnspecifiedValue::UnspecifiedValue),
             R"#(Returns Value as UnspecifiedValue (or Null if another type))#" )
;


    static_cast<py::class_<StepElement_ElementAspectMember ,opencascade::handle<StepElement_ElementAspectMember>  , StepData_SelectNamed >>(m.attr("StepElement_ElementAspectMember"))
        .def(py::init<  >()  )
        .def("HasName",
             (Standard_Boolean (StepElement_ElementAspectMember::*)() const) static_cast<Standard_Boolean (StepElement_ElementAspectMember::*)() const>(&StepElement_ElementAspectMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepElement_ElementAspectMember::*)() const) static_cast<Standard_CString (StepElement_ElementAspectMember::*)() const>(&StepElement_ElementAspectMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepElement_ElementAspectMember::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (StepElement_ElementAspectMember::*)( const Standard_CString  ) >(&StepElement_ElementAspectMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepElement_ElementAspectMember::*)( const Standard_CString  ) const) static_cast<Standard_Boolean (StepElement_ElementAspectMember::*)( const Standard_CString  ) const>(&StepElement_ElementAspectMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_ElementAspectMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_ElementAspectMember::*)() const>(&StepElement_ElementAspectMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_ElementAspectMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_ElementAspectMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_MeasureOrUnspecifiedValueMember ,opencascade::handle<StepElement_MeasureOrUnspecifiedValueMember>  , StepData_SelectNamed >>(m.attr("StepElement_MeasureOrUnspecifiedValueMember"))
        .def(py::init<  >()  )
        .def("HasName",
             (Standard_Boolean (StepElement_MeasureOrUnspecifiedValueMember::*)() const) static_cast<Standard_Boolean (StepElement_MeasureOrUnspecifiedValueMember::*)() const>(&StepElement_MeasureOrUnspecifiedValueMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepElement_MeasureOrUnspecifiedValueMember::*)() const) static_cast<Standard_CString (StepElement_MeasureOrUnspecifiedValueMember::*)() const>(&StepElement_MeasureOrUnspecifiedValueMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepElement_MeasureOrUnspecifiedValueMember::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (StepElement_MeasureOrUnspecifiedValueMember::*)( const Standard_CString  ) >(&StepElement_MeasureOrUnspecifiedValueMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepElement_MeasureOrUnspecifiedValueMember::*)( const Standard_CString  ) const) static_cast<Standard_Boolean (StepElement_MeasureOrUnspecifiedValueMember::*)( const Standard_CString  ) const>(&StepElement_MeasureOrUnspecifiedValueMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_MeasureOrUnspecifiedValueMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_MeasureOrUnspecifiedValueMember::*)() const>(&StepElement_MeasureOrUnspecifiedValueMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_MeasureOrUnspecifiedValueMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_MeasureOrUnspecifiedValueMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_HSequenceOfCurveElementPurposeMember ,std::unique_ptr<StepElement_HSequenceOfCurveElementPurposeMember>  >>(m.attr("StepElement_HSequenceOfCurveElementPurposeMember"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepElement_CurveElementPurposeMember> > & >()  , py::arg("theOther") )
        .def("Sequence",
             (const StepElement_SequenceOfCurveElementPurposeMember & (StepElement_HSequenceOfCurveElementPurposeMember::*)() const) static_cast<const StepElement_SequenceOfCurveElementPurposeMember & (StepElement_HSequenceOfCurveElementPurposeMember::*)() const>(&StepElement_HSequenceOfCurveElementPurposeMember::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepElement_HSequenceOfCurveElementPurposeMember::*)(  const opencascade::handle<StepElement_CurveElementPurposeMember> &  ) ) static_cast<void (StepElement_HSequenceOfCurveElementPurposeMember::*)(  const opencascade::handle<StepElement_CurveElementPurposeMember> &  ) >(&StepElement_HSequenceOfCurveElementPurposeMember::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepElement_HSequenceOfCurveElementPurposeMember::*)( NCollection_Sequence<opencascade::handle<StepElement_CurveElementPurposeMember> > &  ) ) static_cast<void (StepElement_HSequenceOfCurveElementPurposeMember::*)( NCollection_Sequence<opencascade::handle<StepElement_CurveElementPurposeMember> > &  ) >(&StepElement_HSequenceOfCurveElementPurposeMember::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepElement_SequenceOfCurveElementPurposeMember & (StepElement_HSequenceOfCurveElementPurposeMember::*)() ) static_cast<StepElement_SequenceOfCurveElementPurposeMember & (StepElement_HSequenceOfCurveElementPurposeMember::*)() >(&StepElement_HSequenceOfCurveElementPurposeMember::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfCurveElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfCurveElementPurposeMember::*)() const>(&StepElement_HSequenceOfCurveElementPurposeMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HSequenceOfCurveElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HSequenceOfCurveElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_VolumeElementPurposeMember ,opencascade::handle<StepElement_VolumeElementPurposeMember>  , StepData_SelectNamed >>(m.attr("StepElement_VolumeElementPurposeMember"))
        .def(py::init<  >()  )
        .def("HasName",
             (Standard_Boolean (StepElement_VolumeElementPurposeMember::*)() const) static_cast<Standard_Boolean (StepElement_VolumeElementPurposeMember::*)() const>(&StepElement_VolumeElementPurposeMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepElement_VolumeElementPurposeMember::*)() const) static_cast<Standard_CString (StepElement_VolumeElementPurposeMember::*)() const>(&StepElement_VolumeElementPurposeMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepElement_VolumeElementPurposeMember::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (StepElement_VolumeElementPurposeMember::*)( const Standard_CString  ) >(&StepElement_VolumeElementPurposeMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepElement_VolumeElementPurposeMember::*)( const Standard_CString  ) const) static_cast<Standard_Boolean (StepElement_VolumeElementPurposeMember::*)( const Standard_CString  ) const>(&StepElement_VolumeElementPurposeMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_VolumeElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_VolumeElementPurposeMember::*)() const>(&StepElement_VolumeElementPurposeMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_VolumeElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_VolumeElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_Volume3dElementDescriptor ,opencascade::handle<StepElement_Volume3dElementDescriptor>  , StepElement_ElementDescriptor >>(m.attr("StepElement_Volume3dElementDescriptor"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_Volume3dElementDescriptor::*)( const StepElement_ElementOrder ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepElement_HArray1OfVolumeElementPurposeMember> & ,  const StepElement_Volume3dElementShape  ) ) static_cast<void (StepElement_Volume3dElementDescriptor::*)( const StepElement_ElementOrder ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepElement_HArray1OfVolumeElementPurposeMember> & ,  const StepElement_Volume3dElementShape  ) >(&StepElement_Volume3dElementDescriptor::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aElementDescriptor_TopologyOrder"),  py::arg("aElementDescriptor_Description"),  py::arg("aPurpose"),  py::arg("aShape"))
        .def("Purpose",
             (opencascade::handle<StepElement_HArray1OfVolumeElementPurposeMember> (StepElement_Volume3dElementDescriptor::*)() const) static_cast<opencascade::handle<StepElement_HArray1OfVolumeElementPurposeMember> (StepElement_Volume3dElementDescriptor::*)() const>(&StepElement_Volume3dElementDescriptor::Purpose),
             R"#(Returns field Purpose)#" )
        .def("SetPurpose",
             (void (StepElement_Volume3dElementDescriptor::*)( const opencascade::handle<StepElement_HArray1OfVolumeElementPurposeMember> &  ) ) static_cast<void (StepElement_Volume3dElementDescriptor::*)( const opencascade::handle<StepElement_HArray1OfVolumeElementPurposeMember> &  ) >(&StepElement_Volume3dElementDescriptor::SetPurpose),
             R"#(Set field Purpose)#"  , py::arg("Purpose"))
        .def("Shape",
             (StepElement_Volume3dElementShape (StepElement_Volume3dElementDescriptor::*)() const) static_cast<StepElement_Volume3dElementShape (StepElement_Volume3dElementDescriptor::*)() const>(&StepElement_Volume3dElementDescriptor::Shape),
             R"#(Returns field Shape)#" )
        .def("SetShape",
             (void (StepElement_Volume3dElementDescriptor::*)( const StepElement_Volume3dElementShape  ) ) static_cast<void (StepElement_Volume3dElementDescriptor::*)( const StepElement_Volume3dElementShape  ) >(&StepElement_Volume3dElementDescriptor::SetShape),
             R"#(Set field Shape)#"  , py::arg("Shape"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_Volume3dElementDescriptor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_Volume3dElementDescriptor::*)() const>(&StepElement_Volume3dElementDescriptor::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_Volume3dElementDescriptor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_Volume3dElementDescriptor::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_HSequenceOfCurveElementSectionDefinition ,std::unique_ptr<StepElement_HSequenceOfCurveElementSectionDefinition>  >>(m.attr("StepElement_HSequenceOfCurveElementSectionDefinition"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepElement_CurveElementSectionDefinition> > & >()  , py::arg("theOther") )
        .def("Sequence",
             (const StepElement_SequenceOfCurveElementSectionDefinition & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() const) static_cast<const StepElement_SequenceOfCurveElementSectionDefinition & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() const>(&StepElement_HSequenceOfCurveElementSectionDefinition::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepElement_HSequenceOfCurveElementSectionDefinition::*)(  const opencascade::handle<StepElement_CurveElementSectionDefinition> &  ) ) static_cast<void (StepElement_HSequenceOfCurveElementSectionDefinition::*)(  const opencascade::handle<StepElement_CurveElementSectionDefinition> &  ) >(&StepElement_HSequenceOfCurveElementSectionDefinition::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepElement_HSequenceOfCurveElementSectionDefinition::*)( NCollection_Sequence<opencascade::handle<StepElement_CurveElementSectionDefinition> > &  ) ) static_cast<void (StepElement_HSequenceOfCurveElementSectionDefinition::*)( NCollection_Sequence<opencascade::handle<StepElement_CurveElementSectionDefinition> > &  ) >(&StepElement_HSequenceOfCurveElementSectionDefinition::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepElement_SequenceOfCurveElementSectionDefinition & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() ) static_cast<StepElement_SequenceOfCurveElementSectionDefinition & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() >(&StepElement_HSequenceOfCurveElementSectionDefinition::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() const>(&StepElement_HSequenceOfCurveElementSectionDefinition::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HSequenceOfCurveElementSectionDefinition::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HSequenceOfCurveElementSectionDefinition::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_Curve3dElementDescriptor ,opencascade::handle<StepElement_Curve3dElementDescriptor>  , StepElement_ElementDescriptor >>(m.attr("StepElement_Curve3dElementDescriptor"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_Curve3dElementDescriptor::*)( const StepElement_ElementOrder ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember> &  ) ) static_cast<void (StepElement_Curve3dElementDescriptor::*)( const StepElement_ElementOrder ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember> &  ) >(&StepElement_Curve3dElementDescriptor::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aElementDescriptor_TopologyOrder"),  py::arg("aElementDescriptor_Description"),  py::arg("aPurpose"))
        .def("Purpose",
             (opencascade::handle<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember> (StepElement_Curve3dElementDescriptor::*)() const) static_cast<opencascade::handle<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember> (StepElement_Curve3dElementDescriptor::*)() const>(&StepElement_Curve3dElementDescriptor::Purpose),
             R"#(Returns field Purpose)#" )
        .def("SetPurpose",
             (void (StepElement_Curve3dElementDescriptor::*)( const opencascade::handle<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember> &  ) ) static_cast<void (StepElement_Curve3dElementDescriptor::*)( const opencascade::handle<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember> &  ) >(&StepElement_Curve3dElementDescriptor::SetPurpose),
             R"#(Set field Purpose)#"  , py::arg("Purpose"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_Curve3dElementDescriptor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_Curve3dElementDescriptor::*)() const>(&StepElement_Curve3dElementDescriptor::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_Curve3dElementDescriptor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_Curve3dElementDescriptor::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember ,std::unique_ptr<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember>  >>(m.attr("StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_HSequenceOfSurfaceElementPurposeMember> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepElement_HSequenceOfSurfaceElementPurposeMember> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember & (StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::*)() const) static_cast<const StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember & (StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::*)() const>(&StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember & (StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::*)() ) static_cast<StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember & (StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::*)() >(&StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::*)() const>(&StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepElement_SurfaceSectionFieldVarying ,opencascade::handle<StepElement_SurfaceSectionFieldVarying>  , StepElement_SurfaceSectionField >>(m.attr("StepElement_SurfaceSectionFieldVarying"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepElement_SurfaceSectionFieldVarying::*)( const opencascade::handle<StepElement_HArray1OfSurfaceSection> & ,  const Standard_Boolean  ) ) static_cast<void (StepElement_SurfaceSectionFieldVarying::*)( const opencascade::handle<StepElement_HArray1OfSurfaceSection> & ,  const Standard_Boolean  ) >(&StepElement_SurfaceSectionFieldVarying::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aDefinitions"),  py::arg("aAdditionalNodeValues"))
        .def("Definitions",
             (opencascade::handle<StepElement_HArray1OfSurfaceSection> (StepElement_SurfaceSectionFieldVarying::*)() const) static_cast<opencascade::handle<StepElement_HArray1OfSurfaceSection> (StepElement_SurfaceSectionFieldVarying::*)() const>(&StepElement_SurfaceSectionFieldVarying::Definitions),
             R"#(Returns field Definitions)#" )
        .def("SetDefinitions",
             (void (StepElement_SurfaceSectionFieldVarying::*)( const opencascade::handle<StepElement_HArray1OfSurfaceSection> &  ) ) static_cast<void (StepElement_SurfaceSectionFieldVarying::*)( const opencascade::handle<StepElement_HArray1OfSurfaceSection> &  ) >(&StepElement_SurfaceSectionFieldVarying::SetDefinitions),
             R"#(Set field Definitions)#"  , py::arg("Definitions"))
        .def("AdditionalNodeValues",
             (Standard_Boolean (StepElement_SurfaceSectionFieldVarying::*)() const) static_cast<Standard_Boolean (StepElement_SurfaceSectionFieldVarying::*)() const>(&StepElement_SurfaceSectionFieldVarying::AdditionalNodeValues),
             R"#(Returns field AdditionalNodeValues)#" )
        .def("SetAdditionalNodeValues",
             (void (StepElement_SurfaceSectionFieldVarying::*)( const Standard_Boolean  ) ) static_cast<void (StepElement_SurfaceSectionFieldVarying::*)( const Standard_Boolean  ) >(&StepElement_SurfaceSectionFieldVarying::SetAdditionalNodeValues),
             R"#(Set field AdditionalNodeValues)#"  , py::arg("AdditionalNodeValues"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_SurfaceSectionFieldVarying::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_SurfaceSectionFieldVarying::*)() const>(&StepElement_SurfaceSectionFieldVarying::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_SurfaceSectionFieldVarying::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_SurfaceSectionFieldVarying::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/StepElement_HArray1OfSurfaceSection.hxx
// ./opencascade/StepElement_CurveElementPurposeMember.hxx
// ./opencascade/StepElement_HArray1OfCurveElementSectionDefinition.hxx
// ./opencascade/StepElement_HArray2OfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_Surface3dElementDescriptor.hxx
// ./opencascade/StepElement_SurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_Volume3dElementDescriptor.hxx
// ./opencascade/StepElement_SequenceOfCurveElementSectionDefinition.hxx
// ./opencascade/StepElement_Array1OfCurveElementSectionDefinition.hxx
// ./opencascade/StepElement_HArray1OfVolumeElementPurposeMember.hxx
// ./opencascade/StepElement_SurfaceSectionField.hxx
// ./opencascade/StepElement_ElementOrder.hxx
// ./opencascade/StepElement_EnumeratedCurveElementPurpose.hxx
// ./opencascade/StepElement_CurveElementSectionDefinition.hxx
// ./opencascade/StepElement_MeasureOrUnspecifiedValue.hxx
// ./opencascade/StepElement_ElementDescriptor.hxx
// ./opencascade/StepElement_ElementMaterial.hxx
// ./opencascade/StepElement_SequenceOfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_Array1OfCurveElementEndReleasePacket.hxx
// ./opencascade/StepElement_EnumeratedSurfaceElementPurpose.hxx
// ./opencascade/StepElement_HArray1OfCurveElementEndReleasePacket.hxx
// ./opencascade/StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_SequenceOfElementMaterial.hxx
// ./opencascade/StepElement_CurveEdge.hxx
// ./opencascade/StepElement_Array2OfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_SurfaceElementPurpose.hxx
// ./opencascade/StepElement_CurveElementFreedom.hxx
// ./opencascade/StepElement_HArray1OfVolumeElementPurpose.hxx
// ./opencascade/StepElement_ElementAspectMember.hxx
// ./opencascade/StepElement_SurfaceSectionFieldConstant.hxx
// ./opencascade/StepElement_Volume3dElementShape.hxx
// ./opencascade/StepElement_CurveElementEndReleasePacket.hxx
// ./opencascade/StepElement_UnspecifiedValue.hxx
// ./opencascade/StepElement_EnumeratedCurveElementFreedom.hxx
// ./opencascade/StepElement_HSequenceOfCurveElementSectionDefinition.hxx
// ./opencascade/StepElement_Array1OfHSequenceOfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_CurveElementPurpose.hxx
// ./opencascade/StepElement_Array1OfSurfaceSection.hxx
// ./opencascade/StepElement_EnumeratedVolumeElementPurpose.hxx
// ./opencascade/StepElement_HSequenceOfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_CurveElementSectionDerivedDefinitions.hxx
// ./opencascade/StepElement_MeasureOrUnspecifiedValueMember.hxx
// ./opencascade/StepElement_SurfaceElementProperty.hxx
// ./opencascade/StepElement_Element2dShape.hxx
// ./opencascade/StepElement_SequenceOfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_AnalysisItemWithinRepresentation.hxx
// ./opencascade/StepElement_Array1OfVolumeElementPurpose.hxx
// ./opencascade/StepElement_Array1OfVolumeElementPurposeMember.hxx
// ./opencascade/StepElement_HArray2OfSurfaceElementPurpose.hxx
// ./opencascade/StepElement_SurfaceSectionFieldVarying.hxx
// ./opencascade/StepElement_HSequenceOfElementMaterial.hxx
// ./opencascade/StepElement_ElementVolume.hxx
// ./opencascade/StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_SurfaceSection.hxx
// ./opencascade/StepElement_CurveElementFreedomMember.hxx
// ./opencascade/StepElement_HSequenceOfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_Array2OfSurfaceElementPurpose.hxx
// ./opencascade/StepElement_VolumeElementPurpose.hxx
// ./opencascade/StepElement_HArray1OfHSequenceOfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_HArray2OfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_Curve3dElementDescriptor.hxx
// ./opencascade/StepElement_ElementAspect.hxx
// ./opencascade/StepElement_UniformSurfaceSection.hxx
// ./opencascade/StepElement_Array1OfMeasureOrUnspecifiedValue.hxx
// ./opencascade/StepElement_HArray1OfMeasureOrUnspecifiedValue.hxx
// ./opencascade/StepElement_Array2OfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_VolumeElementPurposeMember.hxx

// operators

// register typdefs
// ./opencascade/StepElement_HArray1OfSurfaceSection.hxx
// ./opencascade/StepElement_CurveElementPurposeMember.hxx
// ./opencascade/StepElement_HArray1OfCurveElementSectionDefinition.hxx
// ./opencascade/StepElement_HArray2OfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_Surface3dElementDescriptor.hxx
// ./opencascade/StepElement_SurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_Volume3dElementDescriptor.hxx
// ./opencascade/StepElement_SequenceOfCurveElementSectionDefinition.hxx
    register_template_NCollection_Sequence<opencascade::handle<StepElement_CurveElementSectionDefinition> >(m,"StepElement_SequenceOfCurveElementSectionDefinition");  
// ./opencascade/StepElement_Array1OfCurveElementSectionDefinition.hxx
    register_template_NCollection_Array1<opencascade::handle<StepElement_CurveElementSectionDefinition> >(m,"StepElement_Array1OfCurveElementSectionDefinition");  
// ./opencascade/StepElement_HArray1OfVolumeElementPurposeMember.hxx
// ./opencascade/StepElement_SurfaceSectionField.hxx
// ./opencascade/StepElement_ElementOrder.hxx
// ./opencascade/StepElement_EnumeratedCurveElementPurpose.hxx
// ./opencascade/StepElement_CurveElementSectionDefinition.hxx
// ./opencascade/StepElement_MeasureOrUnspecifiedValue.hxx
// ./opencascade/StepElement_ElementDescriptor.hxx
// ./opencascade/StepElement_ElementMaterial.hxx
// ./opencascade/StepElement_SequenceOfCurveElementPurposeMember.hxx
    register_template_NCollection_Sequence<opencascade::handle<StepElement_CurveElementPurposeMember> >(m,"StepElement_SequenceOfCurveElementPurposeMember");  
// ./opencascade/StepElement_Array1OfCurveElementEndReleasePacket.hxx
    register_template_NCollection_Array1<opencascade::handle<StepElement_CurveElementEndReleasePacket> >(m,"StepElement_Array1OfCurveElementEndReleasePacket");  
// ./opencascade/StepElement_EnumeratedSurfaceElementPurpose.hxx
// ./opencascade/StepElement_HArray1OfCurveElementEndReleasePacket.hxx
// ./opencascade/StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_SequenceOfElementMaterial.hxx
    register_template_NCollection_Sequence<opencascade::handle<StepElement_ElementMaterial> >(m,"StepElement_SequenceOfElementMaterial");  
// ./opencascade/StepElement_CurveEdge.hxx
// ./opencascade/StepElement_Array2OfCurveElementPurposeMember.hxx
    register_template_NCollection_Array2<opencascade::handle<StepElement_CurveElementPurposeMember> >(m,"StepElement_Array2OfCurveElementPurposeMember");  
// ./opencascade/StepElement_SurfaceElementPurpose.hxx
// ./opencascade/StepElement_CurveElementFreedom.hxx
// ./opencascade/StepElement_HArray1OfVolumeElementPurpose.hxx
// ./opencascade/StepElement_ElementAspectMember.hxx
// ./opencascade/StepElement_SurfaceSectionFieldConstant.hxx
// ./opencascade/StepElement_Volume3dElementShape.hxx
// ./opencascade/StepElement_CurveElementEndReleasePacket.hxx
// ./opencascade/StepElement_UnspecifiedValue.hxx
// ./opencascade/StepElement_EnumeratedCurveElementFreedom.hxx
// ./opencascade/StepElement_HSequenceOfCurveElementSectionDefinition.hxx
// ./opencascade/StepElement_Array1OfHSequenceOfCurveElementPurposeMember.hxx
    register_template_NCollection_Array1<opencascade::handle<StepElement_HSequenceOfCurveElementPurposeMember> >(m,"StepElement_Array1OfHSequenceOfCurveElementPurposeMember");  
// ./opencascade/StepElement_CurveElementPurpose.hxx
// ./opencascade/StepElement_Array1OfSurfaceSection.hxx
    register_template_NCollection_Array1<opencascade::handle<StepElement_SurfaceSection> >(m,"StepElement_Array1OfSurfaceSection");  
// ./opencascade/StepElement_EnumeratedVolumeElementPurpose.hxx
// ./opencascade/StepElement_HSequenceOfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_CurveElementSectionDerivedDefinitions.hxx
// ./opencascade/StepElement_MeasureOrUnspecifiedValueMember.hxx
// ./opencascade/StepElement_SurfaceElementProperty.hxx
// ./opencascade/StepElement_Element2dShape.hxx
// ./opencascade/StepElement_SequenceOfSurfaceElementPurposeMember.hxx
    register_template_NCollection_Sequence<opencascade::handle<StepElement_SurfaceElementPurposeMember> >(m,"StepElement_SequenceOfSurfaceElementPurposeMember");  
// ./opencascade/StepElement_AnalysisItemWithinRepresentation.hxx
// ./opencascade/StepElement_Array1OfVolumeElementPurpose.hxx
    register_template_NCollection_Array1<StepElement_VolumeElementPurpose>(m,"StepElement_Array1OfVolumeElementPurpose");  
// ./opencascade/StepElement_Array1OfVolumeElementPurposeMember.hxx
    register_template_NCollection_Array1<opencascade::handle<StepElement_VolumeElementPurposeMember> >(m,"StepElement_Array1OfVolumeElementPurposeMember");  
// ./opencascade/StepElement_HArray2OfSurfaceElementPurpose.hxx
// ./opencascade/StepElement_SurfaceSectionFieldVarying.hxx
// ./opencascade/StepElement_HSequenceOfElementMaterial.hxx
// ./opencascade/StepElement_ElementVolume.hxx
// ./opencascade/StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember.hxx
    register_template_NCollection_Array1<opencascade::handle<StepElement_HSequenceOfSurfaceElementPurposeMember> >(m,"StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember");  
// ./opencascade/StepElement_SurfaceSection.hxx
// ./opencascade/StepElement_CurveElementFreedomMember.hxx
// ./opencascade/StepElement_HSequenceOfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_Array2OfSurfaceElementPurpose.hxx
    register_template_NCollection_Array2<StepElement_SurfaceElementPurpose>(m,"StepElement_Array2OfSurfaceElementPurpose");  
// ./opencascade/StepElement_VolumeElementPurpose.hxx
// ./opencascade/StepElement_HArray1OfHSequenceOfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_HArray2OfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_Curve3dElementDescriptor.hxx
// ./opencascade/StepElement_ElementAspect.hxx
// ./opencascade/StepElement_UniformSurfaceSection.hxx
// ./opencascade/StepElement_Array1OfMeasureOrUnspecifiedValue.hxx
    register_template_NCollection_Array1<StepElement_MeasureOrUnspecifiedValue>(m,"StepElement_Array1OfMeasureOrUnspecifiedValue");  
// ./opencascade/StepElement_HArray1OfMeasureOrUnspecifiedValue.hxx
// ./opencascade/StepElement_Array2OfSurfaceElementPurposeMember.hxx
    register_template_NCollection_Array2<opencascade::handle<StepElement_SurfaceElementPurposeMember> >(m,"StepElement_Array2OfSurfaceElementPurposeMember");  
// ./opencascade/StepElement_VolumeElementPurposeMember.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <StepElement_SurfaceSectionField.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_Representation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
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
// ./opencascade/StepElement_SequenceOfElementMaterial.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_Array1OfVolumeElementPurpose.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_SequenceOfSurfaceElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_Array1OfVolumeElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_Array1OfCurveElementSectionDefinition.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_SequenceOfCurveElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_Array1OfCurveElementEndReleasePacket.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_Array1OfHSequenceOfCurveElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_Array1OfMeasureOrUnspecifiedValue.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_SequenceOfCurveElementSectionDefinition.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_Array2OfSurfaceElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_Array2OfCurveElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_Array1OfSurfaceSection.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepElement_Array2OfSurfaceElementPurpose.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepElement(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepElement"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepElement_AnalysisItemWithinRepresentation ,opencascade::handle<StepElement_AnalysisItemWithinRepresentation> , Standard_Transient>>(m.attr("StepElement_AnalysisItemWithinRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_AnalysisItemWithinRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_AnalysisItemWithinRepresentation::*)() const>(&StepElement_AnalysisItemWithinRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_AnalysisItemWithinRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_CurveElementEndReleasePacket ,opencascade::handle<StepElement_CurveElementEndReleasePacket> , Standard_Transient>>(m.attr("StepElement_CurveElementEndReleasePacket"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_CurveElementEndReleasePacket::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_CurveElementEndReleasePacket::*)() const>(&StepElement_CurveElementEndReleasePacket::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_CurveElementEndReleasePacket::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_CurveElementFreedom , shared_ptr<StepElement_CurveElementFreedom> , StepData_SelectType>>(m.attr("StepElement_CurveElementFreedom"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepElement_CurveElementFreedom::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepElement_CurveElementFreedom::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepElement_CurveElementFreedom::CaseNum),
             R"#(Recognizes a kind of CurveElementFreedom select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepElement_CurveElementFreedom::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepElement_CurveElementFreedom::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepElement_CurveElementFreedom::CaseMem),
             R"#(Recognizes a items of select member CurveElementFreedomMember 1 -> EnumeratedCurveElementFreedom 2 -> ApplicationDefinedDegreeOfFreedom 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepElement_CurveElementFreedom::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepElement_CurveElementFreedom::*)() const>(&StepElement_CurveElementFreedom::NewMember),
             R"#(Returns a new select member the type CurveElementFreedomMember)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_CurveElementFreedomMember ,opencascade::handle<StepElement_CurveElementFreedomMember> , StepData_SelectNamed>>(m.attr("StepElement_CurveElementFreedomMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepElement_CurveElementFreedomMember::*)() const) static_cast<Standard_Boolean (StepElement_CurveElementFreedomMember::*)() const>(&StepElement_CurveElementFreedomMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepElement_CurveElementFreedomMember::*)() const) static_cast<Standard_CString (StepElement_CurveElementFreedomMember::*)() const>(&StepElement_CurveElementFreedomMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepElement_CurveElementFreedomMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepElement_CurveElementFreedomMember::*)( const Standard_CString ) >(&StepElement_CurveElementFreedomMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepElement_CurveElementFreedomMember::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepElement_CurveElementFreedomMember::*)( const Standard_CString ) const>(&StepElement_CurveElementFreedomMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_CurveElementFreedomMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_CurveElementFreedomMember::*)() const>(&StepElement_CurveElementFreedomMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_CurveElementFreedomMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_CurveElementPurpose , shared_ptr<StepElement_CurveElementPurpose> , StepData_SelectType>>(m.attr("StepElement_CurveElementPurpose"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepElement_CurveElementPurpose::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepElement_CurveElementPurpose::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepElement_CurveElementPurpose::CaseNum),
             R"#(Recognizes a kind of CurveElementPurpose select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepElement_CurveElementPurpose::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepElement_CurveElementPurpose::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepElement_CurveElementPurpose::CaseMem),
             R"#(Recognizes a items of select member CurveElementPurposeMember 1 -> EnumeratedCurveElementPurpose 2 -> ApplicationDefinedElementPurpose 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepElement_CurveElementPurpose::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepElement_CurveElementPurpose::*)() const>(&StepElement_CurveElementPurpose::NewMember),
             R"#(Returns a new select member the type CurveElementPurposeMember)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_CurveElementPurposeMember ,opencascade::handle<StepElement_CurveElementPurposeMember> , StepData_SelectNamed>>(m.attr("StepElement_CurveElementPurposeMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepElement_CurveElementPurposeMember::*)() const) static_cast<Standard_Boolean (StepElement_CurveElementPurposeMember::*)() const>(&StepElement_CurveElementPurposeMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepElement_CurveElementPurposeMember::*)() const) static_cast<Standard_CString (StepElement_CurveElementPurposeMember::*)() const>(&StepElement_CurveElementPurposeMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepElement_CurveElementPurposeMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepElement_CurveElementPurposeMember::*)( const Standard_CString ) >(&StepElement_CurveElementPurposeMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepElement_CurveElementPurposeMember::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepElement_CurveElementPurposeMember::*)( const Standard_CString ) const>(&StepElement_CurveElementPurposeMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_CurveElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_CurveElementPurposeMember::*)() const>(&StepElement_CurveElementPurposeMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_CurveElementPurposeMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_CurveElementSectionDefinition ,opencascade::handle<StepElement_CurveElementSectionDefinition> , Standard_Transient>>(m.attr("StepElement_CurveElementSectionDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_CurveElementSectionDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_CurveElementSectionDefinition::*)() const>(&StepElement_CurveElementSectionDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_CurveElementSectionDefinition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_ElementAspect , shared_ptr<StepElement_ElementAspect> , StepData_SelectType>>(m.attr("StepElement_ElementAspect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepElement_ElementAspect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepElement_ElementAspect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepElement_ElementAspect::CaseNum),
             R"#(Recognizes a kind of ElementAspect select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepElement_ElementAspect::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepElement_ElementAspect::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepElement_ElementAspect::CaseMem),
             R"#(Recognizes a items of select member ElementAspectMember 1 -> ElementVolume 2 -> Volume3dFace 3 -> Volume2dFace 4 -> Volume3dEdge 5 -> Volume2dEdge 6 -> Surface3dFace 7 -> Surface2dFace 8 -> Surface3dEdge 9 -> Surface2dEdge 10 -> CurveEdge 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepElement_ElementAspect::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepElement_ElementAspect::*)() const>(&StepElement_ElementAspect::NewMember),
             R"#(Returns a new select member the type ElementAspectMember)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_ElementAspectMember ,opencascade::handle<StepElement_ElementAspectMember> , StepData_SelectNamed>>(m.attr("StepElement_ElementAspectMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepElement_ElementAspectMember::*)() const) static_cast<Standard_Boolean (StepElement_ElementAspectMember::*)() const>(&StepElement_ElementAspectMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepElement_ElementAspectMember::*)() const) static_cast<Standard_CString (StepElement_ElementAspectMember::*)() const>(&StepElement_ElementAspectMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepElement_ElementAspectMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepElement_ElementAspectMember::*)( const Standard_CString ) >(&StepElement_ElementAspectMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepElement_ElementAspectMember::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepElement_ElementAspectMember::*)( const Standard_CString ) const>(&StepElement_ElementAspectMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_ElementAspectMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_ElementAspectMember::*)() const>(&StepElement_ElementAspectMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_ElementAspectMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_ElementDescriptor ,opencascade::handle<StepElement_ElementDescriptor> , Standard_Transient>>(m.attr("StepElement_ElementDescriptor"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_ElementDescriptor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_ElementDescriptor::*)() const>(&StepElement_ElementDescriptor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_ElementDescriptor::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_ElementMaterial ,opencascade::handle<StepElement_ElementMaterial> , Standard_Transient>>(m.attr("StepElement_ElementMaterial"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_ElementMaterial::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_ElementMaterial::*)() const>(&StepElement_ElementMaterial::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_ElementMaterial::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HArray1OfCurveElementEndReleasePacket ,opencascade::handle<StepElement_HArray1OfCurveElementEndReleasePacket> , StepElement_Array1OfCurveElementEndReleasePacket, Standard_Transient>>(m.attr("StepElement_HArray1OfCurveElementEndReleasePacket"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_CurveElementEndReleasePacket> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepElement_CurveElementEndReleasePacket> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepElement_Array1OfCurveElementEndReleasePacket & (StepElement_HArray1OfCurveElementEndReleasePacket::*)() const) static_cast<const StepElement_Array1OfCurveElementEndReleasePacket & (StepElement_HArray1OfCurveElementEndReleasePacket::*)() const>(&StepElement_HArray1OfCurveElementEndReleasePacket::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfCurveElementEndReleasePacket & (StepElement_HArray1OfCurveElementEndReleasePacket::*)() ) static_cast<StepElement_Array1OfCurveElementEndReleasePacket & (StepElement_HArray1OfCurveElementEndReleasePacket::*)() >(&StepElement_HArray1OfCurveElementEndReleasePacket::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfCurveElementEndReleasePacket::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfCurveElementEndReleasePacket::*)() const>(&StepElement_HArray1OfCurveElementEndReleasePacket::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfCurveElementEndReleasePacket::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfCurveElementEndReleasePacket::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HArray1OfCurveElementSectionDefinition ,opencascade::handle<StepElement_HArray1OfCurveElementSectionDefinition> , StepElement_Array1OfCurveElementSectionDefinition, Standard_Transient>>(m.attr("StepElement_HArray1OfCurveElementSectionDefinition"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_CurveElementSectionDefinition> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepElement_CurveElementSectionDefinition> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepElement_Array1OfCurveElementSectionDefinition & (StepElement_HArray1OfCurveElementSectionDefinition::*)() const) static_cast<const StepElement_Array1OfCurveElementSectionDefinition & (StepElement_HArray1OfCurveElementSectionDefinition::*)() const>(&StepElement_HArray1OfCurveElementSectionDefinition::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfCurveElementSectionDefinition & (StepElement_HArray1OfCurveElementSectionDefinition::*)() ) static_cast<StepElement_Array1OfCurveElementSectionDefinition & (StepElement_HArray1OfCurveElementSectionDefinition::*)() >(&StepElement_HArray1OfCurveElementSectionDefinition::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfCurveElementSectionDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfCurveElementSectionDefinition::*)() const>(&StepElement_HArray1OfCurveElementSectionDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfCurveElementSectionDefinition::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfCurveElementSectionDefinition::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember ,opencascade::handle<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember> , StepElement_Array1OfHSequenceOfCurveElementPurposeMember, Standard_Transient>>(m.attr("StepElement_HArray1OfHSequenceOfCurveElementPurposeMember"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_HSequenceOfCurveElementPurposeMember> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepElement_HSequenceOfCurveElementPurposeMember> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepElement_Array1OfHSequenceOfCurveElementPurposeMember & (StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::*)() const) static_cast<const StepElement_Array1OfHSequenceOfCurveElementPurposeMember & (StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::*)() const>(&StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfHSequenceOfCurveElementPurposeMember & (StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::*)() ) static_cast<StepElement_Array1OfHSequenceOfCurveElementPurposeMember & (StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::*)() >(&StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::*)() const>(&StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfHSequenceOfCurveElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember ,opencascade::handle<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember> , StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember, Standard_Transient>>(m.attr("StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_HSequenceOfSurfaceElementPurposeMember> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepElement_HSequenceOfSurfaceElementPurposeMember> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember & (StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::*)() const) static_cast<const StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember & (StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::*)() const>(&StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember & (StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::*)() ) static_cast<StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember & (StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::*)() >(&StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::*)() const>(&StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HArray1OfMeasureOrUnspecifiedValue ,opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> , StepElement_Array1OfMeasureOrUnspecifiedValue, Standard_Transient>>(m.attr("StepElement_HArray1OfMeasureOrUnspecifiedValue"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepElement_MeasureOrUnspecifiedValue & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepElement_MeasureOrUnspecifiedValue> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepElement_Array1OfMeasureOrUnspecifiedValue & (StepElement_HArray1OfMeasureOrUnspecifiedValue::*)() const) static_cast<const StepElement_Array1OfMeasureOrUnspecifiedValue & (StepElement_HArray1OfMeasureOrUnspecifiedValue::*)() const>(&StepElement_HArray1OfMeasureOrUnspecifiedValue::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfMeasureOrUnspecifiedValue & (StepElement_HArray1OfMeasureOrUnspecifiedValue::*)() ) static_cast<StepElement_Array1OfMeasureOrUnspecifiedValue & (StepElement_HArray1OfMeasureOrUnspecifiedValue::*)() >(&StepElement_HArray1OfMeasureOrUnspecifiedValue::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfMeasureOrUnspecifiedValue::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfMeasureOrUnspecifiedValue::*)() const>(&StepElement_HArray1OfMeasureOrUnspecifiedValue::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfMeasureOrUnspecifiedValue::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfMeasureOrUnspecifiedValue::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HArray1OfSurfaceSection ,opencascade::handle<StepElement_HArray1OfSurfaceSection> , StepElement_Array1OfSurfaceSection, Standard_Transient>>(m.attr("StepElement_HArray1OfSurfaceSection"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_SurfaceSection> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepElement_SurfaceSection> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepElement_Array1OfSurfaceSection & (StepElement_HArray1OfSurfaceSection::*)() const) static_cast<const StepElement_Array1OfSurfaceSection & (StepElement_HArray1OfSurfaceSection::*)() const>(&StepElement_HArray1OfSurfaceSection::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfSurfaceSection & (StepElement_HArray1OfSurfaceSection::*)() ) static_cast<StepElement_Array1OfSurfaceSection & (StepElement_HArray1OfSurfaceSection::*)() >(&StepElement_HArray1OfSurfaceSection::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfSurfaceSection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfSurfaceSection::*)() const>(&StepElement_HArray1OfSurfaceSection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfSurfaceSection::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfSurfaceSection::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HArray1OfVolumeElementPurpose ,opencascade::handle<StepElement_HArray1OfVolumeElementPurpose> , StepElement_Array1OfVolumeElementPurpose, Standard_Transient>>(m.attr("StepElement_HArray1OfVolumeElementPurpose"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepElement_VolumeElementPurpose & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepElement_VolumeElementPurpose> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepElement_Array1OfVolumeElementPurpose & (StepElement_HArray1OfVolumeElementPurpose::*)() const) static_cast<const StepElement_Array1OfVolumeElementPurpose & (StepElement_HArray1OfVolumeElementPurpose::*)() const>(&StepElement_HArray1OfVolumeElementPurpose::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfVolumeElementPurpose & (StepElement_HArray1OfVolumeElementPurpose::*)() ) static_cast<StepElement_Array1OfVolumeElementPurpose & (StepElement_HArray1OfVolumeElementPurpose::*)() >(&StepElement_HArray1OfVolumeElementPurpose::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfVolumeElementPurpose::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfVolumeElementPurpose::*)() const>(&StepElement_HArray1OfVolumeElementPurpose::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfVolumeElementPurpose::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfVolumeElementPurpose::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HArray1OfVolumeElementPurposeMember ,opencascade::handle<StepElement_HArray1OfVolumeElementPurposeMember> , StepElement_Array1OfVolumeElementPurposeMember, Standard_Transient>>(m.attr("StepElement_HArray1OfVolumeElementPurposeMember"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_VolumeElementPurposeMember> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepElement_VolumeElementPurposeMember> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepElement_Array1OfVolumeElementPurposeMember & (StepElement_HArray1OfVolumeElementPurposeMember::*)() const) static_cast<const StepElement_Array1OfVolumeElementPurposeMember & (StepElement_HArray1OfVolumeElementPurposeMember::*)() const>(&StepElement_HArray1OfVolumeElementPurposeMember::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepElement_Array1OfVolumeElementPurposeMember & (StepElement_HArray1OfVolumeElementPurposeMember::*)() ) static_cast<StepElement_Array1OfVolumeElementPurposeMember & (StepElement_HArray1OfVolumeElementPurposeMember::*)() >(&StepElement_HArray1OfVolumeElementPurposeMember::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray1OfVolumeElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray1OfVolumeElementPurposeMember::*)() const>(&StepElement_HArray1OfVolumeElementPurposeMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray1OfVolumeElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray1OfVolumeElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HArray2OfCurveElementPurposeMember ,opencascade::handle<StepElement_HArray2OfCurveElementPurposeMember> , StepElement_Array2OfCurveElementPurposeMember, Standard_Transient>>(m.attr("StepElement_HArray2OfCurveElementPurposeMember"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_CurveElementPurposeMember> & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<opencascade::handle<StepElement_CurveElementPurposeMember> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const StepElement_Array2OfCurveElementPurposeMember & (StepElement_HArray2OfCurveElementPurposeMember::*)() const) static_cast<const StepElement_Array2OfCurveElementPurposeMember & (StepElement_HArray2OfCurveElementPurposeMember::*)() const>(&StepElement_HArray2OfCurveElementPurposeMember::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (StepElement_Array2OfCurveElementPurposeMember & (StepElement_HArray2OfCurveElementPurposeMember::*)() ) static_cast<StepElement_Array2OfCurveElementPurposeMember & (StepElement_HArray2OfCurveElementPurposeMember::*)() >(&StepElement_HArray2OfCurveElementPurposeMember::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray2OfCurveElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray2OfCurveElementPurposeMember::*)() const>(&StepElement_HArray2OfCurveElementPurposeMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray2OfCurveElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray2OfCurveElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HArray2OfSurfaceElementPurpose ,opencascade::handle<StepElement_HArray2OfSurfaceElementPurpose> , StepElement_Array2OfSurfaceElementPurpose, Standard_Transient>>(m.attr("StepElement_HArray2OfSurfaceElementPurpose"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const StepElement_SurfaceElementPurpose & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<StepElement_SurfaceElementPurpose> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const StepElement_Array2OfSurfaceElementPurpose & (StepElement_HArray2OfSurfaceElementPurpose::*)() const) static_cast<const StepElement_Array2OfSurfaceElementPurpose & (StepElement_HArray2OfSurfaceElementPurpose::*)() const>(&StepElement_HArray2OfSurfaceElementPurpose::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (StepElement_Array2OfSurfaceElementPurpose & (StepElement_HArray2OfSurfaceElementPurpose::*)() ) static_cast<StepElement_Array2OfSurfaceElementPurpose & (StepElement_HArray2OfSurfaceElementPurpose::*)() >(&StepElement_HArray2OfSurfaceElementPurpose::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray2OfSurfaceElementPurpose::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray2OfSurfaceElementPurpose::*)() const>(&StepElement_HArray2OfSurfaceElementPurpose::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray2OfSurfaceElementPurpose::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray2OfSurfaceElementPurpose::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HArray2OfSurfaceElementPurposeMember ,opencascade::handle<StepElement_HArray2OfSurfaceElementPurposeMember> , StepElement_Array2OfSurfaceElementPurposeMember, Standard_Transient>>(m.attr("StepElement_HArray2OfSurfaceElementPurposeMember"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const opencascade::handle<StepElement_SurfaceElementPurposeMember> & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<opencascade::handle<StepElement_SurfaceElementPurposeMember> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const StepElement_Array2OfSurfaceElementPurposeMember & (StepElement_HArray2OfSurfaceElementPurposeMember::*)() const) static_cast<const StepElement_Array2OfSurfaceElementPurposeMember & (StepElement_HArray2OfSurfaceElementPurposeMember::*)() const>(&StepElement_HArray2OfSurfaceElementPurposeMember::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (StepElement_Array2OfSurfaceElementPurposeMember & (StepElement_HArray2OfSurfaceElementPurposeMember::*)() ) static_cast<StepElement_Array2OfSurfaceElementPurposeMember & (StepElement_HArray2OfSurfaceElementPurposeMember::*)() >(&StepElement_HArray2OfSurfaceElementPurposeMember::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HArray2OfSurfaceElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HArray2OfSurfaceElementPurposeMember::*)() const>(&StepElement_HArray2OfSurfaceElementPurposeMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HArray2OfSurfaceElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HArray2OfSurfaceElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HSequenceOfCurveElementPurposeMember ,opencascade::handle<StepElement_HSequenceOfCurveElementPurposeMember> , StepElement_SequenceOfCurveElementPurposeMember, Standard_Transient>>(m.attr("StepElement_HSequenceOfCurveElementPurposeMember"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepElement_CurveElementPurposeMember> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const StepElement_SequenceOfCurveElementPurposeMember & (StepElement_HSequenceOfCurveElementPurposeMember::*)() const) static_cast<const StepElement_SequenceOfCurveElementPurposeMember & (StepElement_HSequenceOfCurveElementPurposeMember::*)() const>(&StepElement_HSequenceOfCurveElementPurposeMember::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepElement_HSequenceOfCurveElementPurposeMember::*)(  const opencascade::handle<StepElement_CurveElementPurposeMember> & ) ) static_cast<void (StepElement_HSequenceOfCurveElementPurposeMember::*)(  const opencascade::handle<StepElement_CurveElementPurposeMember> & ) >(&StepElement_HSequenceOfCurveElementPurposeMember::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepElement_HSequenceOfCurveElementPurposeMember::*)( NCollection_Sequence<opencascade::handle<StepElement_CurveElementPurposeMember> > & ) ) static_cast<void (StepElement_HSequenceOfCurveElementPurposeMember::*)( NCollection_Sequence<opencascade::handle<StepElement_CurveElementPurposeMember> > & ) >(&StepElement_HSequenceOfCurveElementPurposeMember::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepElement_SequenceOfCurveElementPurposeMember & (StepElement_HSequenceOfCurveElementPurposeMember::*)() ) static_cast<StepElement_SequenceOfCurveElementPurposeMember & (StepElement_HSequenceOfCurveElementPurposeMember::*)() >(&StepElement_HSequenceOfCurveElementPurposeMember::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfCurveElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfCurveElementPurposeMember::*)() const>(&StepElement_HSequenceOfCurveElementPurposeMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HSequenceOfCurveElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HSequenceOfCurveElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HSequenceOfCurveElementSectionDefinition ,opencascade::handle<StepElement_HSequenceOfCurveElementSectionDefinition> , StepElement_SequenceOfCurveElementSectionDefinition, Standard_Transient>>(m.attr("StepElement_HSequenceOfCurveElementSectionDefinition"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepElement_CurveElementSectionDefinition> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const StepElement_SequenceOfCurveElementSectionDefinition & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() const) static_cast<const StepElement_SequenceOfCurveElementSectionDefinition & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() const>(&StepElement_HSequenceOfCurveElementSectionDefinition::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepElement_HSequenceOfCurveElementSectionDefinition::*)(  const opencascade::handle<StepElement_CurveElementSectionDefinition> & ) ) static_cast<void (StepElement_HSequenceOfCurveElementSectionDefinition::*)(  const opencascade::handle<StepElement_CurveElementSectionDefinition> & ) >(&StepElement_HSequenceOfCurveElementSectionDefinition::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepElement_HSequenceOfCurveElementSectionDefinition::*)( NCollection_Sequence<opencascade::handle<StepElement_CurveElementSectionDefinition> > & ) ) static_cast<void (StepElement_HSequenceOfCurveElementSectionDefinition::*)( NCollection_Sequence<opencascade::handle<StepElement_CurveElementSectionDefinition> > & ) >(&StepElement_HSequenceOfCurveElementSectionDefinition::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepElement_SequenceOfCurveElementSectionDefinition & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() ) static_cast<StepElement_SequenceOfCurveElementSectionDefinition & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() >(&StepElement_HSequenceOfCurveElementSectionDefinition::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() const>(&StepElement_HSequenceOfCurveElementSectionDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HSequenceOfCurveElementSectionDefinition::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HSequenceOfCurveElementSectionDefinition::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HSequenceOfElementMaterial ,opencascade::handle<StepElement_HSequenceOfElementMaterial> , StepElement_SequenceOfElementMaterial, Standard_Transient>>(m.attr("StepElement_HSequenceOfElementMaterial"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepElement_ElementMaterial> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const StepElement_SequenceOfElementMaterial & (StepElement_HSequenceOfElementMaterial::*)() const) static_cast<const StepElement_SequenceOfElementMaterial & (StepElement_HSequenceOfElementMaterial::*)() const>(&StepElement_HSequenceOfElementMaterial::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepElement_HSequenceOfElementMaterial::*)(  const opencascade::handle<StepElement_ElementMaterial> & ) ) static_cast<void (StepElement_HSequenceOfElementMaterial::*)(  const opencascade::handle<StepElement_ElementMaterial> & ) >(&StepElement_HSequenceOfElementMaterial::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepElement_HSequenceOfElementMaterial::*)( NCollection_Sequence<opencascade::handle<StepElement_ElementMaterial> > & ) ) static_cast<void (StepElement_HSequenceOfElementMaterial::*)( NCollection_Sequence<opencascade::handle<StepElement_ElementMaterial> > & ) >(&StepElement_HSequenceOfElementMaterial::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepElement_SequenceOfElementMaterial & (StepElement_HSequenceOfElementMaterial::*)() ) static_cast<StepElement_SequenceOfElementMaterial & (StepElement_HSequenceOfElementMaterial::*)() >(&StepElement_HSequenceOfElementMaterial::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfElementMaterial::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfElementMaterial::*)() const>(&StepElement_HSequenceOfElementMaterial::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HSequenceOfElementMaterial::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HSequenceOfElementMaterial::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_HSequenceOfSurfaceElementPurposeMember ,opencascade::handle<StepElement_HSequenceOfSurfaceElementPurposeMember> , StepElement_SequenceOfSurfaceElementPurposeMember, Standard_Transient>>(m.attr("StepElement_HSequenceOfSurfaceElementPurposeMember"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepElement_SurfaceElementPurposeMember> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const StepElement_SequenceOfSurfaceElementPurposeMember & (StepElement_HSequenceOfSurfaceElementPurposeMember::*)() const) static_cast<const StepElement_SequenceOfSurfaceElementPurposeMember & (StepElement_HSequenceOfSurfaceElementPurposeMember::*)() const>(&StepElement_HSequenceOfSurfaceElementPurposeMember::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepElement_HSequenceOfSurfaceElementPurposeMember::*)(  const opencascade::handle<StepElement_SurfaceElementPurposeMember> & ) ) static_cast<void (StepElement_HSequenceOfSurfaceElementPurposeMember::*)(  const opencascade::handle<StepElement_SurfaceElementPurposeMember> & ) >(&StepElement_HSequenceOfSurfaceElementPurposeMember::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepElement_HSequenceOfSurfaceElementPurposeMember::*)( NCollection_Sequence<opencascade::handle<StepElement_SurfaceElementPurposeMember> > & ) ) static_cast<void (StepElement_HSequenceOfSurfaceElementPurposeMember::*)( NCollection_Sequence<opencascade::handle<StepElement_SurfaceElementPurposeMember> > & ) >(&StepElement_HSequenceOfSurfaceElementPurposeMember::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepElement_SequenceOfSurfaceElementPurposeMember & (StepElement_HSequenceOfSurfaceElementPurposeMember::*)() ) static_cast<StepElement_SequenceOfSurfaceElementPurposeMember & (StepElement_HSequenceOfSurfaceElementPurposeMember::*)() >(&StepElement_HSequenceOfSurfaceElementPurposeMember::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfSurfaceElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfSurfaceElementPurposeMember::*)() const>(&StepElement_HSequenceOfSurfaceElementPurposeMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_HSequenceOfSurfaceElementPurposeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepElement_HSequenceOfSurfaceElementPurposeMember::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_MeasureOrUnspecifiedValue , shared_ptr<StepElement_MeasureOrUnspecifiedValue> , StepData_SelectType>>(m.attr("StepElement_MeasureOrUnspecifiedValue"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepElement_MeasureOrUnspecifiedValue::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepElement_MeasureOrUnspecifiedValue::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepElement_MeasureOrUnspecifiedValue::CaseNum),
             R"#(Recognizes a kind of MeasureOrUnspecifiedValue select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepElement_MeasureOrUnspecifiedValue::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepElement_MeasureOrUnspecifiedValue::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepElement_MeasureOrUnspecifiedValue::CaseMem),
             R"#(Recognizes a items of select member MeasureOrUnspecifiedValueMember 1 -> ContextDependentMeasure 2 -> UnspecifiedValue 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepElement_MeasureOrUnspecifiedValue::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepElement_MeasureOrUnspecifiedValue::*)() const>(&StepElement_MeasureOrUnspecifiedValue::NewMember),
             R"#(Returns a new select member the type MeasureOrUnspecifiedValueMember)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_MeasureOrUnspecifiedValueMember ,opencascade::handle<StepElement_MeasureOrUnspecifiedValueMember> , StepData_SelectNamed>>(m.attr("StepElement_MeasureOrUnspecifiedValueMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepElement_MeasureOrUnspecifiedValueMember::*)() const) static_cast<Standard_Boolean (StepElement_MeasureOrUnspecifiedValueMember::*)() const>(&StepElement_MeasureOrUnspecifiedValueMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepElement_MeasureOrUnspecifiedValueMember::*)() const) static_cast<Standard_CString (StepElement_MeasureOrUnspecifiedValueMember::*)() const>(&StepElement_MeasureOrUnspecifiedValueMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepElement_MeasureOrUnspecifiedValueMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepElement_MeasureOrUnspecifiedValueMember::*)( const Standard_CString ) >(&StepElement_MeasureOrUnspecifiedValueMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepElement_MeasureOrUnspecifiedValueMember::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepElement_MeasureOrUnspecifiedValueMember::*)( const Standard_CString ) const>(&StepElement_MeasureOrUnspecifiedValueMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_MeasureOrUnspecifiedValueMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_MeasureOrUnspecifiedValueMember::*)() const>(&StepElement_MeasureOrUnspecifiedValueMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_MeasureOrUnspecifiedValueMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_SurfaceElementProperty ,opencascade::handle<StepElement_SurfaceElementProperty> , Standard_Transient>>(m.attr("StepElement_SurfaceElementProperty"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_SurfaceElementProperty::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_SurfaceElementProperty::*)() const>(&StepElement_SurfaceElementProperty::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_SurfaceElementProperty::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_SurfaceElementPurpose , shared_ptr<StepElement_SurfaceElementPurpose> , StepData_SelectType>>(m.attr("StepElement_SurfaceElementPurpose"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepElement_SurfaceElementPurpose::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepElement_SurfaceElementPurpose::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepElement_SurfaceElementPurpose::CaseNum),
             R"#(Recognizes a kind of SurfaceElementPurpose select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepElement_SurfaceElementPurpose::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepElement_SurfaceElementPurpose::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepElement_SurfaceElementPurpose::CaseMem),
             R"#(Recognizes a items of select member SurfaceElementPurposeMember 1 -> EnumeratedSurfaceElementPurpose 2 -> ApplicationDefinedElementPurpose 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepElement_SurfaceElementPurpose::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepElement_SurfaceElementPurpose::*)() const>(&StepElement_SurfaceElementPurpose::NewMember),
             R"#(Returns a new select member the type SurfaceElementPurposeMember)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_SurfaceElementPurposeMember ,opencascade::handle<StepElement_SurfaceElementPurposeMember> , StepData_SelectNamed>>(m.attr("StepElement_SurfaceElementPurposeMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepElement_SurfaceElementPurposeMember::*)() const) static_cast<Standard_Boolean (StepElement_SurfaceElementPurposeMember::*)() const>(&StepElement_SurfaceElementPurposeMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepElement_SurfaceElementPurposeMember::*)() const) static_cast<Standard_CString (StepElement_SurfaceElementPurposeMember::*)() const>(&StepElement_SurfaceElementPurposeMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepElement_SurfaceElementPurposeMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepElement_SurfaceElementPurposeMember::*)( const Standard_CString ) >(&StepElement_SurfaceElementPurposeMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepElement_SurfaceElementPurposeMember::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepElement_SurfaceElementPurposeMember::*)( const Standard_CString ) const>(&StepElement_SurfaceElementPurposeMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_SurfaceElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_SurfaceElementPurposeMember::*)() const>(&StepElement_SurfaceElementPurposeMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_SurfaceElementPurposeMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_SurfaceSection ,opencascade::handle<StepElement_SurfaceSection> , Standard_Transient>>(m.attr("StepElement_SurfaceSection"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_SurfaceSection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_SurfaceSection::*)() const>(&StepElement_SurfaceSection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_SurfaceSection::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_SurfaceSectionField ,opencascade::handle<StepElement_SurfaceSectionField> , Standard_Transient>>(m.attr("StepElement_SurfaceSectionField"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_SurfaceSectionField::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_SurfaceSectionField::*)() const>(&StepElement_SurfaceSectionField::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_SurfaceSectionField::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_VolumeElementPurpose , shared_ptr<StepElement_VolumeElementPurpose> , StepData_SelectType>>(m.attr("StepElement_VolumeElementPurpose"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepElement_VolumeElementPurpose::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepElement_VolumeElementPurpose::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepElement_VolumeElementPurpose::CaseNum),
             R"#(Recognizes a kind of VolumeElementPurpose select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepElement_VolumeElementPurpose::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepElement_VolumeElementPurpose::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepElement_VolumeElementPurpose::CaseMem),
             R"#(Recognizes a items of select member VolumeElementPurposeMember 1 -> EnumeratedVolumeElementPurpose 2 -> ApplicationDefinedElementPurpose 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepElement_VolumeElementPurpose::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepElement_VolumeElementPurpose::*)() const>(&StepElement_VolumeElementPurpose::NewMember),
             R"#(Returns a new select member the type VolumeElementPurposeMember)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_VolumeElementPurposeMember ,opencascade::handle<StepElement_VolumeElementPurposeMember> , StepData_SelectNamed>>(m.attr("StepElement_VolumeElementPurposeMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepElement_VolumeElementPurposeMember::*)() const) static_cast<Standard_Boolean (StepElement_VolumeElementPurposeMember::*)() const>(&StepElement_VolumeElementPurposeMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepElement_VolumeElementPurposeMember::*)() const) static_cast<Standard_CString (StepElement_VolumeElementPurposeMember::*)() const>(&StepElement_VolumeElementPurposeMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepElement_VolumeElementPurposeMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepElement_VolumeElementPurposeMember::*)( const Standard_CString ) >(&StepElement_VolumeElementPurposeMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepElement_VolumeElementPurposeMember::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepElement_VolumeElementPurposeMember::*)( const Standard_CString ) const>(&StepElement_VolumeElementPurposeMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_VolumeElementPurposeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_VolumeElementPurposeMember::*)() const>(&StepElement_VolumeElementPurposeMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_VolumeElementPurposeMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_Curve3dElementDescriptor ,opencascade::handle<StepElement_Curve3dElementDescriptor> , StepElement_ElementDescriptor>>(m.attr("StepElement_Curve3dElementDescriptor"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_Curve3dElementDescriptor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_Curve3dElementDescriptor::*)() const>(&StepElement_Curve3dElementDescriptor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_Curve3dElementDescriptor::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_CurveElementSectionDerivedDefinitions ,opencascade::handle<StepElement_CurveElementSectionDerivedDefinitions> , StepElement_CurveElementSectionDefinition>>(m.attr("StepElement_CurveElementSectionDerivedDefinitions"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_CurveElementSectionDerivedDefinitions::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_CurveElementSectionDerivedDefinitions::*)() const>(&StepElement_CurveElementSectionDerivedDefinitions::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_CurveElementSectionDerivedDefinitions::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_Surface3dElementDescriptor ,opencascade::handle<StepElement_Surface3dElementDescriptor> , StepElement_ElementDescriptor>>(m.attr("StepElement_Surface3dElementDescriptor"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_Surface3dElementDescriptor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_Surface3dElementDescriptor::*)() const>(&StepElement_Surface3dElementDescriptor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_Surface3dElementDescriptor::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_SurfaceSectionFieldConstant ,opencascade::handle<StepElement_SurfaceSectionFieldConstant> , StepElement_SurfaceSectionField>>(m.attr("StepElement_SurfaceSectionFieldConstant"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_SurfaceSectionFieldConstant::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_SurfaceSectionFieldConstant::*)() const>(&StepElement_SurfaceSectionFieldConstant::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_SurfaceSectionFieldConstant::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_SurfaceSectionFieldVarying ,opencascade::handle<StepElement_SurfaceSectionFieldVarying> , StepElement_SurfaceSectionField>>(m.attr("StepElement_SurfaceSectionFieldVarying"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_SurfaceSectionFieldVarying::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_SurfaceSectionFieldVarying::*)() const>(&StepElement_SurfaceSectionFieldVarying::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_SurfaceSectionFieldVarying::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_UniformSurfaceSection ,opencascade::handle<StepElement_UniformSurfaceSection> , StepElement_SurfaceSection>>(m.attr("StepElement_UniformSurfaceSection"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_UniformSurfaceSection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_UniformSurfaceSection::*)() const>(&StepElement_UniformSurfaceSection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_UniformSurfaceSection::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepElement_Volume3dElementDescriptor ,opencascade::handle<StepElement_Volume3dElementDescriptor> , StepElement_ElementDescriptor>>(m.attr("StepElement_Volume3dElementDescriptor"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepElement_Volume3dElementDescriptor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepElement_Volume3dElementDescriptor::*)() const>(&StepElement_Volume3dElementDescriptor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepElement_Volume3dElementDescriptor::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepElement_CurveElementFreedomMember.hxx
// ./opencascade/StepElement_SequenceOfElementMaterial.hxx
// ./opencascade/StepElement_SurfaceElementProperty.hxx
// ./opencascade/StepElement_ElementDescriptor.hxx
// ./opencascade/StepElement_Volume3dElementShape.hxx
// ./opencascade/StepElement_UniformSurfaceSection.hxx
// ./opencascade/StepElement_HArray2OfSurfaceElementPurpose.hxx
// ./opencascade/StepElement_ElementVolume.hxx
// ./opencascade/StepElement_HSequenceOfCurveElementSectionDefinition.hxx
// ./opencascade/StepElement_Array1OfVolumeElementPurpose.hxx
// ./opencascade/StepElement_UnspecifiedValue.hxx
// ./opencascade/StepElement_HSequenceOfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_SurfaceSectionField.hxx
// ./opencascade/StepElement_CurveElementPurpose.hxx
// ./opencascade/StepElement_SequenceOfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_Array1OfVolumeElementPurposeMember.hxx
// ./opencascade/StepElement_Surface3dElementDescriptor.hxx
// ./opencascade/StepElement_VolumeElementPurpose.hxx
// ./opencascade/StepElement_AnalysisItemWithinRepresentation.hxx
// ./opencascade/StepElement_CurveElementSectionDefinition.hxx
// ./opencascade/StepElement_ElementAspect.hxx
// ./opencascade/StepElement_HSequenceOfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_EnumeratedVolumeElementPurpose.hxx
// ./opencascade/StepElement_HSequenceOfElementMaterial.hxx
// ./opencascade/StepElement_HArray2OfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_Array1OfCurveElementSectionDefinition.hxx
// ./opencascade/StepElement_HArray1OfSurfaceSection.hxx
// ./opencascade/StepElement_SequenceOfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_Curve3dElementDescriptor.hxx
// ./opencascade/StepElement_MeasureOrUnspecifiedValueMember.hxx
// ./opencascade/StepElement_SurfaceSection.hxx
// ./opencascade/StepElement_HArray1OfCurveElementEndReleasePacket.hxx
// ./opencascade/StepElement_CurveElementEndReleasePacket.hxx
// ./opencascade/StepElement_Array1OfCurveElementEndReleasePacket.hxx
// ./opencascade/StepElement_SurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_MeasureOrUnspecifiedValue.hxx
// ./opencascade/StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_Array1OfHSequenceOfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_Array1OfMeasureOrUnspecifiedValue.hxx
// ./opencascade/StepElement_SurfaceSectionFieldVarying.hxx
// ./opencascade/StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_EnumeratedCurveElementFreedom.hxx
// ./opencascade/StepElement_HArray2OfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_ElementMaterial.hxx
// ./opencascade/StepElement_SequenceOfCurveElementSectionDefinition.hxx
// ./opencascade/StepElement_HArray1OfVolumeElementPurpose.hxx
// ./opencascade/StepElement_HArray1OfHSequenceOfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_ElementAspectMember.hxx
// ./opencascade/StepElement_Array2OfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_HArray1OfMeasureOrUnspecifiedValue.hxx
// ./opencascade/StepElement_Array2OfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_SurfaceElementPurpose.hxx
// ./opencascade/StepElement_EnumeratedSurfaceElementPurpose.hxx
// ./opencascade/StepElement_SurfaceSectionFieldConstant.hxx
// ./opencascade/StepElement_CurveElementFreedom.hxx
// ./opencascade/StepElement_ElementOrder.hxx
// ./opencascade/StepElement_CurveElementPurposeMember.hxx
// ./opencascade/StepElement_HArray1OfVolumeElementPurposeMember.hxx
// ./opencascade/StepElement_CurveElementSectionDerivedDefinitions.hxx
// ./opencascade/StepElement_Volume3dElementDescriptor.hxx
// ./opencascade/StepElement_Array1OfSurfaceSection.hxx
// ./opencascade/StepElement_Array2OfSurfaceElementPurpose.hxx
// ./opencascade/StepElement_Element2dShape.hxx
// ./opencascade/StepElement_CurveEdge.hxx
// ./opencascade/StepElement_EnumeratedCurveElementPurpose.hxx
// ./opencascade/StepElement_VolumeElementPurposeMember.hxx
// ./opencascade/StepElement_HArray1OfCurveElementSectionDefinition.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<StepElement_ElementMaterial> >(m,"StepElement_SequenceOfElementMaterial");
    register_template_NCollection_Array1<StepElement_VolumeElementPurpose>(m,"StepElement_Array1OfVolumeElementPurpose");
    register_template_NCollection_Sequence<opencascade::handle<StepElement_SurfaceElementPurposeMember> >(m,"StepElement_SequenceOfSurfaceElementPurposeMember");
    register_template_NCollection_Array1<opencascade::handle<StepElement_VolumeElementPurposeMember> >(m,"StepElement_Array1OfVolumeElementPurposeMember");
    register_template_NCollection_Array1<opencascade::handle<StepElement_CurveElementSectionDefinition> >(m,"StepElement_Array1OfCurveElementSectionDefinition");
    register_template_NCollection_Sequence<opencascade::handle<StepElement_CurveElementPurposeMember> >(m,"StepElement_SequenceOfCurveElementPurposeMember");
    register_template_NCollection_Array1<opencascade::handle<StepElement_CurveElementEndReleasePacket> >(m,"StepElement_Array1OfCurveElementEndReleasePacket");
    register_template_NCollection_Array1<opencascade::handle<StepElement_HSequenceOfSurfaceElementPurposeMember> >(m,"StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember");
    register_template_NCollection_Array1<opencascade::handle<StepElement_HSequenceOfCurveElementPurposeMember> >(m,"StepElement_Array1OfHSequenceOfCurveElementPurposeMember");
    register_template_NCollection_Array1<StepElement_MeasureOrUnspecifiedValue>(m,"StepElement_Array1OfMeasureOrUnspecifiedValue");
    register_template_NCollection_Sequence<opencascade::handle<StepElement_CurveElementSectionDefinition> >(m,"StepElement_SequenceOfCurveElementSectionDefinition");
    register_template_NCollection_Array2<opencascade::handle<StepElement_SurfaceElementPurposeMember> >(m,"StepElement_Array2OfSurfaceElementPurposeMember");
    register_template_NCollection_Array2<opencascade::handle<StepElement_CurveElementPurposeMember> >(m,"StepElement_Array2OfCurveElementPurposeMember");
    register_template_NCollection_Array1<opencascade::handle<StepElement_SurfaceSection> >(m,"StepElement_Array1OfSurfaceSection");
    register_template_NCollection_Array2<StepElement_SurfaceElementPurpose>(m,"StepElement_Array2OfSurfaceElementPurpose");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

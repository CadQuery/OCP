
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <StepData_StepModel.hxx>
#include <IFSelect_Signature.hxx>
#include <IFSelect_SelectSignature.hxx>
#include <STEPEdit_EditContext.hxx>
#include <STEPEdit_EditSDR.hxx>
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>

// module includes
#include <STEPEdit.hxx>
#include <STEPEdit_EditContext.hxx>
#include <STEPEdit_EditSDR.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_STEPEdit(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("STEPEdit"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<STEPEdit , shared_ptr<STEPEdit>>(m,"STEPEdit");

    static_cast<py::class_<STEPEdit , shared_ptr<STEPEdit> >>(m.attr("STEPEdit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Protocol_s",
                    (opencascade::handle<Interface_Protocol> (*)() ) static_cast<opencascade::handle<Interface_Protocol> (*)() >(&STEPEdit::Protocol),
                    R"#(Returns a Protocol fit for STEP (creates the first time))#" )
        .def_static("NewModel_s",
                    (opencascade::handle<StepData_StepModel> (*)() ) static_cast<opencascade::handle<StepData_StepModel> (*)() >(&STEPEdit::NewModel),
                    R"#(Returns a new empty StepModel fit for STEP i.e. with its header determined from Protocol)#" )
        .def_static("SignType_s",
                    (opencascade::handle<IFSelect_Signature> (*)() ) static_cast<opencascade::handle<IFSelect_Signature> (*)() >(&STEPEdit::SignType),
                    R"#(Returns a SignType fit for STEP (creates the first time))#" )
        .def_static("NewSelectSDR_s",
                    (opencascade::handle<IFSelect_SelectSignature> (*)() ) static_cast<opencascade::handle<IFSelect_SelectSignature> (*)() >(&STEPEdit::NewSelectSDR),
                    R"#(Creates a Selection for ShapeDefinitionRepresentation By default searches among root entities)#" )
        .def_static("NewSelectPlacedItem_s",
                    (opencascade::handle<IFSelect_SelectSignature> (*)() ) static_cast<opencascade::handle<IFSelect_SelectSignature> (*)() >(&STEPEdit::NewSelectPlacedItem),
                    R"#(Creates a Selection for Placed Items, i.e. MappedItem or ContextDependentShapeRepresentation, which itself refers to a RepresentationRelationship with possible subtypes (Shape... and/or ...WithTransformation) By default in the whole StepModel)#" )
        .def_static("NewSelectShapeRepr_s",
                    (opencascade::handle<IFSelect_SelectSignature> (*)() ) static_cast<opencascade::handle<IFSelect_SelectSignature> (*)() >(&STEPEdit::NewSelectShapeRepr),
                    R"#(Creates a Selection for ShapeRepresentation and its sub-types, plus ContextDependentShapeRepresentation (which is not a sub-type of ShapeRepresentation) By default in the whole StepModel)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPEdit_EditContext ,opencascade::handle<STEPEdit_EditContext> , IFSelect_Editor>>(m.attr("STEPEdit_EditContext"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Label",
             (TCollection_AsciiString (STEPEdit_EditContext::*)() const) static_cast<TCollection_AsciiString (STEPEdit_EditContext::*)() const>(&STEPEdit_EditContext::Label),
             R"#(None)#" )
        .def("Recognize",
             (Standard_Boolean (STEPEdit_EditContext::*)( const opencascade::handle<IFSelect_EditForm> & ) const) static_cast<Standard_Boolean (STEPEdit_EditContext::*)( const opencascade::handle<IFSelect_EditForm> & ) const>(&STEPEdit_EditContext::Recognize),
             R"#(None)#"  , py::arg("form"))
        .def("StringValue",
             (opencascade::handle<TCollection_HAsciiString> (STEPEdit_EditContext::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPEdit_EditContext::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer ) const>(&STEPEdit_EditContext::StringValue),
             R"#(None)#"  , py::arg("form"),  py::arg("num"))
        .def("Apply",
             (Standard_Boolean (STEPEdit_EditContext::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (STEPEdit_EditContext::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&STEPEdit_EditContext::Apply),
             R"#(None)#"  , py::arg("form"),  py::arg("ent"),  py::arg("model"))
        .def("Load",
             (Standard_Boolean (STEPEdit_EditContext::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (STEPEdit_EditContext::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&STEPEdit_EditContext::Load),
             R"#(None)#"  , py::arg("form"),  py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPEdit_EditContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPEdit_EditContext::*)() const>(&STEPEdit_EditContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPEdit_EditContext::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPEdit_EditContext::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPEdit_EditSDR ,opencascade::handle<STEPEdit_EditSDR> , IFSelect_Editor>>(m.attr("STEPEdit_EditSDR"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Label",
             (TCollection_AsciiString (STEPEdit_EditSDR::*)() const) static_cast<TCollection_AsciiString (STEPEdit_EditSDR::*)() const>(&STEPEdit_EditSDR::Label),
             R"#(None)#" )
        .def("Recognize",
             (Standard_Boolean (STEPEdit_EditSDR::*)( const opencascade::handle<IFSelect_EditForm> & ) const) static_cast<Standard_Boolean (STEPEdit_EditSDR::*)( const opencascade::handle<IFSelect_EditForm> & ) const>(&STEPEdit_EditSDR::Recognize),
             R"#(None)#"  , py::arg("form"))
        .def("StringValue",
             (opencascade::handle<TCollection_HAsciiString> (STEPEdit_EditSDR::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPEdit_EditSDR::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer ) const>(&STEPEdit_EditSDR::StringValue),
             R"#(None)#"  , py::arg("form"),  py::arg("num"))
        .def("Apply",
             (Standard_Boolean (STEPEdit_EditSDR::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (STEPEdit_EditSDR::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&STEPEdit_EditSDR::Apply),
             R"#(None)#"  , py::arg("form"),  py::arg("ent"),  py::arg("model"))
        .def("Load",
             (Standard_Boolean (STEPEdit_EditSDR::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (STEPEdit_EditSDR::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&STEPEdit_EditSDR::Load),
             R"#(None)#"  , py::arg("form"),  py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPEdit_EditSDR::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPEdit_EditSDR::*)() const>(&STEPEdit_EditSDR::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPEdit_EditSDR::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPEdit_EditSDR::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\STEPEdit_EditContext.hxx
// ./opencascade\STEPEdit.hxx
// ./opencascade\STEPEdit_EditSDR.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

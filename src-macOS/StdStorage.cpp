
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <StdStorage_Data.hxx>
#include <Storage_BaseDriver.hxx>
#include <TCollection_AsciiString.hxx>
#include <StdStorage_HeaderData.hxx>
#include <StdStorage_TypeData.hxx>
#include <StdStorage_RootData.hxx>
#include <Storage_BaseDriver.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <Storage_Schema.hxx>
#include <Storage_Root.hxx>
#include <Storage_BaseDriver.hxx>

// module includes
#include <StdStorage.hxx>
#include <StdStorage_BacketOfPersistent.hxx>
#include <StdStorage_Data.hxx>
#include <StdStorage_HeaderData.hxx>
#include <StdStorage_HSequenceOfRoots.hxx>
#include <StdStorage_MapOfRoots.hxx>
#include <StdStorage_MapOfTypes.hxx>
#include <StdStorage_Root.hxx>
#include <StdStorage_RootData.hxx>
#include <StdStorage_SequenceOfRoots.hxx>
#include <StdStorage_TypeData.hxx>

// template related includes
// ./opencascade/StdStorage_MapOfRoots.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StdStorage_SequenceOfRoots.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdStorage(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdStorage"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<StdStorage , shared_ptr<StdStorage>>(m,"StdStorage");

    static_cast<py::class_<StdStorage , shared_ptr<StdStorage> >>(m.attr("StdStorage"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_BucketIterator , shared_ptr<StdStorage_BucketIterator> >>(m.attr("StdStorage_BucketIterator"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (StdObjMgt_Persistent * (StdStorage_BucketIterator::*)() const) static_cast<StdObjMgt_Persistent * (StdStorage_BucketIterator::*)() const>(&StdStorage_BucketIterator::Value),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (StdStorage_BucketIterator::*)() const) static_cast<Standard_Boolean (StdStorage_BucketIterator::*)() const>(&StdStorage_BucketIterator::More),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_Data ,opencascade::handle<StdStorage_Data> , Standard_Transient>>(m.attr("StdStorage_Data"))
    // constructors
    // custom constructors
    // methods
        .def("HeaderData",
             (opencascade::handle<StdStorage_HeaderData> (StdStorage_Data::*)() ) static_cast<opencascade::handle<StdStorage_HeaderData> (StdStorage_Data::*)() >(&StdStorage_Data::HeaderData),
             R"#(Returns the header data section)#" )
        .def("TypeData",
             (opencascade::handle<StdStorage_TypeData> (StdStorage_Data::*)() ) static_cast<opencascade::handle<StdStorage_TypeData> (StdStorage_Data::*)() >(&StdStorage_Data::TypeData),
             R"#(Returns the type data section)#" )
        .def("RootData",
             (opencascade::handle<StdStorage_RootData> (StdStorage_Data::*)() ) static_cast<opencascade::handle<StdStorage_RootData> (StdStorage_Data::*)() >(&StdStorage_Data::RootData),
             R"#(Returns the root data section)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_HSequenceOfRoots ,opencascade::handle<StdStorage_HSequenceOfRoots> , StdStorage_SequenceOfRoots, Standard_Transient>>(m.attr("StdStorage_HSequenceOfRoots"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StdStorage_Root> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const StdStorage_SequenceOfRoots & (StdStorage_HSequenceOfRoots::*)() const) static_cast<const StdStorage_SequenceOfRoots & (StdStorage_HSequenceOfRoots::*)() const>(&StdStorage_HSequenceOfRoots::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StdStorage_HSequenceOfRoots::*)(  const opencascade::handle<StdStorage_Root> & ) ) static_cast<void (StdStorage_HSequenceOfRoots::*)(  const opencascade::handle<StdStorage_Root> & ) >(&StdStorage_HSequenceOfRoots::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StdStorage_HSequenceOfRoots::*)( NCollection_Sequence<opencascade::handle<StdStorage_Root> > & ) ) static_cast<void (StdStorage_HSequenceOfRoots::*)( NCollection_Sequence<opencascade::handle<StdStorage_Root> > & ) >(&StdStorage_HSequenceOfRoots::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StdStorage_SequenceOfRoots & (StdStorage_HSequenceOfRoots::*)() ) static_cast<StdStorage_SequenceOfRoots & (StdStorage_HSequenceOfRoots::*)() >(&StdStorage_HSequenceOfRoots::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdStorage_HSequenceOfRoots::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdStorage_HSequenceOfRoots::*)() const>(&StdStorage_HSequenceOfRoots::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdStorage_HSequenceOfRoots::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdStorage_HSequenceOfRoots::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_HeaderData ,opencascade::handle<StdStorage_HeaderData> , Standard_Transient>>(m.attr("StdStorage_HeaderData"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdStorage_HeaderData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdStorage_HeaderData::*)() const>(&StdStorage_HeaderData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdStorage_HeaderData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_Root ,opencascade::handle<StdStorage_Root> , Standard_Transient>>(m.attr("StdStorage_Root"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdStorage_Root::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdStorage_Root::*)() const>(&StdStorage_Root::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdStorage_Root::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_RootData ,opencascade::handle<StdStorage_RootData> , Standard_Transient>>(m.attr("StdStorage_RootData"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdStorage_RootData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdStorage_RootData::*)() const>(&StdStorage_RootData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdStorage_RootData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdStorage_TypeData ,opencascade::handle<StdStorage_TypeData> , Standard_Transient>>(m.attr("StdStorage_TypeData"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdStorage_TypeData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdStorage_TypeData::*)() const>(&StdStorage_TypeData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdStorage_TypeData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StdStorage_RootData.hxx
// ./opencascade/StdStorage_BacketOfPersistent.hxx
// ./opencascade/StdStorage.hxx
// ./opencascade/StdStorage_Data.hxx
// ./opencascade/StdStorage_MapOfTypes.hxx
// ./opencascade/StdStorage_HSequenceOfRoots.hxx
// ./opencascade/StdStorage_MapOfRoots.hxx
// ./opencascade/StdStorage_TypeData.hxx
// ./opencascade/StdStorage_Root.hxx
// ./opencascade/StdStorage_SequenceOfRoots.hxx
// ./opencascade/StdStorage_HeaderData.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<StdStorage_Root> >(m,"StdStorage_SequenceOfRoots");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

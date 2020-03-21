
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_AsciiString.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Data.hxx>

// module includes
#include <BinObjMgt_PByte.hxx>
#include <BinObjMgt_PChar.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinObjMgt_PExtChar.hxx>
#include <BinObjMgt_PInteger.hxx>
#include <BinObjMgt_PReal.hxx>
#include <BinObjMgt_PShortReal.hxx>
#include <BinObjMgt_RRelocationTable.hxx>
#include <BinObjMgt_SRelocationTable.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinObjMgt(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinObjMgt"));


//Python trampoline classes

// classes


    static_cast<py::class_<BinObjMgt_Persistent , shared_ptr<BinObjMgt_Persistent> >>(m.attr("BinObjMgt_Persistent"))
    // constructors
    // custom constructors
    // methods
        .def("PutBoolean",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Boolean ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Boolean ) >(&BinObjMgt_Persistent::PutBoolean),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetBoolean",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Boolean & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Boolean & ) const>(&BinObjMgt_Persistent::GetBoolean),
             R"#(None)#"  , py::arg("theValue"))
        .def("Position",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::Position),
             R"#(Tells the current position for get/put)#" )
        .def("SetPosition",
             (Standard_Boolean (BinObjMgt_Persistent::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (BinObjMgt_Persistent::*)( const Standard_Integer ) const>(&BinObjMgt_Persistent::SetPosition),
             R"#(Sets the current position for get/put. Resets an error state depending on the validity of thePos. Returns the new state (value of IsOK()))#"  , py::arg("thePos"))
        .def("Truncate",
             (void (BinObjMgt_Persistent::*)() ) static_cast<void (BinObjMgt_Persistent::*)() >(&BinObjMgt_Persistent::Truncate),
             R"#(Truncates the buffer by current position, i.e. updates mySize)#" )
        .def("IsError",
             (Standard_Boolean (BinObjMgt_Persistent::*)() const) static_cast<Standard_Boolean (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::IsError),
             R"#(Indicates an error after Get methods or SetPosition)#" )
        .def("IsOK",
             (Standard_Boolean (BinObjMgt_Persistent::*)() const) static_cast<Standard_Boolean (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::IsOK),
             R"#(Indicates a good state after Get methods or SetPosition)#" )
        .def("SetId",
             (void (BinObjMgt_Persistent::*)( const Standard_Integer ) ) static_cast<void (BinObjMgt_Persistent::*)( const Standard_Integer ) >(&BinObjMgt_Persistent::SetId),
             R"#(Sets the Id of the object)#"  , py::arg("theId"))
        .def("SetTypeId",
             (void (BinObjMgt_Persistent::*)( const Standard_Integer ) ) static_cast<void (BinObjMgt_Persistent::*)( const Standard_Integer ) >(&BinObjMgt_Persistent::SetTypeId),
             R"#(Sets the Id of the type of the object)#"  , py::arg("theId"))
        .def("Id",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::Id),
             R"#(Returns the Id of the object)#" )
        .def("TypeId",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::TypeId),
             R"#(Returns the Id of the type of the object)#" )
        .def("Length",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::Length),
             R"#(Returns the length of data)#" )
        .def("SetId",
             (void (BinObjMgt_Persistent::*)( const Standard_Integer ) ) static_cast<void (BinObjMgt_Persistent::*)( const Standard_Integer ) >(&BinObjMgt_Persistent::SetId),
             R"#(Sets the Id of the object)#"  , py::arg("theId"))
        .def("SetTypeId",
             (void (BinObjMgt_Persistent::*)( const Standard_Integer ) ) static_cast<void (BinObjMgt_Persistent::*)( const Standard_Integer ) >(&BinObjMgt_Persistent::SetTypeId),
             R"#(Sets the Id of the type of the object)#"  , py::arg("theTypeId"))
        .def("Id",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::Id),
             R"#(Returns the Id of the object)#" )
        .def("TypeId",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::TypeId),
             R"#(Returns the Id of the type of the object)#" )
        .def("Length",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::Length),
             R"#(Returns the length of data)#" )
        .def("Position",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::Position),
             R"#(Tells the current position for get/put)#" )
        .def("SetPosition",
             (Standard_Boolean (BinObjMgt_Persistent::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (BinObjMgt_Persistent::*)( const Standard_Integer ) const>(&BinObjMgt_Persistent::SetPosition),
             R"#(Sets the current position for get/put. Resets an error state depending on the validity of thePos. Returns the new state (value of IsOK()))#"  , py::arg("thePos"))
        .def("Truncate",
             (void (BinObjMgt_Persistent::*)() ) static_cast<void (BinObjMgt_Persistent::*)() >(&BinObjMgt_Persistent::Truncate),
             R"#(Truncates the buffer by current position, i.e. updates mySize)#" )
        .def("IsError",
             (Standard_Boolean (BinObjMgt_Persistent::*)() const) static_cast<Standard_Boolean (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::IsError),
             R"#(Indicates an error after Get methods or SetPosition)#" )
        .def("IsOK",
             (Standard_Boolean (BinObjMgt_Persistent::*)() const) static_cast<Standard_Boolean (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::IsOK),
             R"#(Indicates a good state after Get methods or SetPosition)#" )
        .def("PutBoolean",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Boolean ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Boolean ) >(&BinObjMgt_Persistent::PutBoolean),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetBoolean",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Boolean & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Boolean & ) const>(&BinObjMgt_Persistent::GetBoolean),
             R"#(None)#"  , py::arg("theValue"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BinObjMgt_RRelocationTable , shared_ptr<BinObjMgt_RRelocationTable>>(m,"BinObjMgt_RRelocationTable");

    static_cast<py::class_<BinObjMgt_RRelocationTable , shared_ptr<BinObjMgt_RRelocationTable> >>(m.attr("BinObjMgt_RRelocationTable"))
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
// ./opencascade/BinObjMgt_PInteger.hxx
// ./opencascade/BinObjMgt_RRelocationTable.hxx
// ./opencascade/BinObjMgt_PChar.hxx
// ./opencascade/BinObjMgt_SRelocationTable.hxx
// ./opencascade/BinObjMgt_PExtChar.hxx
// ./opencascade/BinObjMgt_PShortReal.hxx
// ./opencascade/BinObjMgt_PByte.hxx
// ./opencascade/BinObjMgt_PReal.hxx
// ./opencascade/BinObjMgt_Persistent.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

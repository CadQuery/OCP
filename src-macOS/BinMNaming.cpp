
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinMNaming_NamedShapeDriver.hxx>
#include <BinMNaming_NamingDriver.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>

// module includes
#include <BinMNaming.hxx>
#include <BinMNaming_NamedShapeDriver.hxx>
#include <BinMNaming_NamingDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinMNaming(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinMNaming"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BinMNaming , shared_ptr<BinMNaming>>(m,"BinMNaming");

    static_cast<py::class_<BinMNaming , shared_ptr<BinMNaming> >>(m.attr("BinMNaming"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMNaming_NamedShapeDriver ,opencascade::handle<BinMNaming_NamedShapeDriver> , BinMDF_ADriver>>(m.attr("BinMNaming_NamedShapeDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMNaming_NamedShapeDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMNaming_NamedShapeDriver::*)() const>(&BinMNaming_NamedShapeDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMNaming_NamedShapeDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMNaming_NamedShapeDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMNaming_NamedShapeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMNaming_NamedShapeDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMNaming_NamedShapeDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMNaming_NamedShapeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("IsWithTriangles",
             (Standard_Boolean (BinMNaming_NamedShapeDriver::*)() const) static_cast<Standard_Boolean (BinMNaming_NamedShapeDriver::*)() const>(&BinMNaming_NamedShapeDriver::IsWithTriangles),
             R"#(Return true if shape should be stored with triangles.)#" )
        .def("SetWithTriangles",
             (void (BinMNaming_NamedShapeDriver::*)( const Standard_Boolean ) ) static_cast<void (BinMNaming_NamedShapeDriver::*)( const Standard_Boolean ) >(&BinMNaming_NamedShapeDriver::SetWithTriangles),
             R"#(set whether to store triangulation)#"  , py::arg("isWithTriangles"))
        .def("SetFormatNb",
             (void (BinMNaming_NamedShapeDriver::*)( const Standard_Integer ) ) static_cast<void (BinMNaming_NamedShapeDriver::*)( const Standard_Integer ) >(&BinMNaming_NamedShapeDriver::SetFormatNb),
             R"#(set the format of topology First : does not write CurveOnSurface UV Points into the file on reading calls Check() method. Second: stores CurveOnSurface UV Points.)#"  , py::arg("theFormat"))
        .def("GetFormatNb",
             (Standard_Integer (BinMNaming_NamedShapeDriver::*)() const) static_cast<Standard_Integer (BinMNaming_NamedShapeDriver::*)() const>(&BinMNaming_NamedShapeDriver::GetFormatNb),
             R"#(get the format of topology)#" )
        .def("GetShapesLocations",
             (BinTools_LocationSet & (BinMNaming_NamedShapeDriver::*)() ) static_cast<BinTools_LocationSet & (BinMNaming_NamedShapeDriver::*)() >(&BinMNaming_NamedShapeDriver::GetShapesLocations),
             R"#(get the format of topology)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMNaming_NamedShapeDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMNaming_NamedShapeDriver::*)() const>(&BinMNaming_NamedShapeDriver::DynamicType),
             R"#(None)#" )
        .def("GetFormatNb",
             (Standard_Integer (BinMNaming_NamedShapeDriver::*)() const) static_cast<Standard_Integer (BinMNaming_NamedShapeDriver::*)() const>(&BinMNaming_NamedShapeDriver::GetFormatNb),
             R"#(get the format of topology)#" )
        .def("SetFormatNb",
             (void (BinMNaming_NamedShapeDriver::*)( const Standard_Integer ) ) static_cast<void (BinMNaming_NamedShapeDriver::*)( const Standard_Integer ) >(&BinMNaming_NamedShapeDriver::SetFormatNb),
             R"#(set the format of topology First : does not write CurveOnSurface UV Points into the file on reading calls Check() method. Second: stores CurveOnSurface UV Points.)#"  , py::arg("theFormatNb"))
        .def("SetWithTriangles",
             (void (BinMNaming_NamedShapeDriver::*)( const Standard_Boolean ) ) static_cast<void (BinMNaming_NamedShapeDriver::*)( const Standard_Boolean ) >(&BinMNaming_NamedShapeDriver::SetWithTriangles),
             R"#(set whether to store triangulation)#"  , py::arg("isWithTriangles"))
        .def("GetShapesLocations",
             (BinTools_LocationSet & (BinMNaming_NamedShapeDriver::*)() ) static_cast<BinTools_LocationSet & (BinMNaming_NamedShapeDriver::*)() >(&BinMNaming_NamedShapeDriver::GetShapesLocations),
             R"#(get the format of topology)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMNaming_NamedShapeDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMNaming_NamingDriver ,opencascade::handle<BinMNaming_NamingDriver> , BinMDF_ADriver>>(m.attr("BinMNaming_NamingDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMNaming_NamingDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMNaming_NamingDriver::*)() const>(&BinMNaming_NamingDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMNaming_NamingDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMNaming_NamingDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMNaming_NamingDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMNaming_NamingDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMNaming_NamingDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMNaming_NamingDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMNaming_NamingDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMNaming_NamingDriver::*)() const>(&BinMNaming_NamingDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMNaming_NamingDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BinMNaming.hxx
// ./opencascade/BinMNaming_NamingDriver.hxx
// ./opencascade/BinMNaming_NamedShapeDriver.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

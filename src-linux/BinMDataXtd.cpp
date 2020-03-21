
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinMDataXtd_PointDriver.hxx>
#include <BinMDataXtd_AxisDriver.hxx>
#include <BinMDataXtd_PlaneDriver.hxx>
#include <BinMDataXtd_GeometryDriver.hxx>
#include <BinMDataXtd_ConstraintDriver.hxx>
#include <BinMDataXtd_PlacementDriver.hxx>
#include <BinMDataXtd_PatternStdDriver.hxx>
#include <BinMDataXtd_ShapeDriver.hxx>
#include <BinMDataXtd_TriangulationDriver.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>

// module includes
#include <BinMDataXtd.hxx>
#include <BinMDataXtd_AxisDriver.hxx>
#include <BinMDataXtd_ConstraintDriver.hxx>
#include <BinMDataXtd_GeometryDriver.hxx>
#include <BinMDataXtd_PatternStdDriver.hxx>
#include <BinMDataXtd_PlacementDriver.hxx>
#include <BinMDataXtd_PlaneDriver.hxx>
#include <BinMDataXtd_PointDriver.hxx>
#include <BinMDataXtd_PositionDriver.hxx>
#include <BinMDataXtd_PresentationDriver.hxx>
#include <BinMDataXtd_ShapeDriver.hxx>
#include <BinMDataXtd_TriangulationDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinMDataXtd(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinMDataXtd"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BinMDataXtd , shared_ptr<BinMDataXtd>>(m,"BinMDataXtd");

    static_cast<py::class_<BinMDataXtd , shared_ptr<BinMDataXtd> >>(m.attr("BinMDataXtd"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("AddDrivers_s",
                    (void (*)( const opencascade::handle<BinMDF_ADriverTable> & , const opencascade::handle<Message_Messenger> & ) ) static_cast<void (*)( const opencascade::handle<BinMDF_ADriverTable> & , const opencascade::handle<Message_Messenger> & ) >(&BinMDataXtd::AddDrivers),
                    R"#(Adds the attribute drivers to <theDriverTable>.)#"  , py::arg("theDriverTable"),  py::arg("aMsgDrv"))
        .def_static("SetDocumentVersion_s",
                    (void (*)( const Standard_Integer ) ) static_cast<void (*)( const Standard_Integer ) >(&BinMDataXtd::SetDocumentVersion),
                    R"#(None)#"  , py::arg("DocVersion"))
        .def_static("DocumentVersion_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&BinMDataXtd::DocumentVersion),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataXtd_AxisDriver ,opencascade::handle<BinMDataXtd_AxisDriver> , BinMDF_ADriver>>(m.attr("BinMDataXtd_AxisDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataXtd_AxisDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataXtd_AxisDriver::*)() const>(&BinMDataXtd_AxisDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataXtd_AxisDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataXtd_AxisDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataXtd_AxisDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataXtd_AxisDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataXtd_AxisDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataXtd_AxisDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataXtd_AxisDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataXtd_AxisDriver::*)() const>(&BinMDataXtd_AxisDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataXtd_AxisDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataXtd_AxisDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataXtd_ConstraintDriver ,opencascade::handle<BinMDataXtd_ConstraintDriver> , BinMDF_ADriver>>(m.attr("BinMDataXtd_ConstraintDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataXtd_ConstraintDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataXtd_ConstraintDriver::*)() const>(&BinMDataXtd_ConstraintDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataXtd_ConstraintDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataXtd_ConstraintDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataXtd_ConstraintDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataXtd_ConstraintDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataXtd_ConstraintDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataXtd_ConstraintDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataXtd_ConstraintDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataXtd_ConstraintDriver::*)() const>(&BinMDataXtd_ConstraintDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataXtd_ConstraintDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataXtd_ConstraintDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataXtd_GeometryDriver ,opencascade::handle<BinMDataXtd_GeometryDriver> , BinMDF_ADriver>>(m.attr("BinMDataXtd_GeometryDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataXtd_GeometryDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataXtd_GeometryDriver::*)() const>(&BinMDataXtd_GeometryDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataXtd_GeometryDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataXtd_GeometryDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataXtd_GeometryDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataXtd_GeometryDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataXtd_GeometryDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataXtd_GeometryDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataXtd_GeometryDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataXtd_GeometryDriver::*)() const>(&BinMDataXtd_GeometryDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataXtd_GeometryDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataXtd_GeometryDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataXtd_PatternStdDriver ,opencascade::handle<BinMDataXtd_PatternStdDriver> , BinMDF_ADriver>>(m.attr("BinMDataXtd_PatternStdDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataXtd_PatternStdDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataXtd_PatternStdDriver::*)() const>(&BinMDataXtd_PatternStdDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataXtd_PatternStdDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataXtd_PatternStdDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataXtd_PatternStdDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataXtd_PatternStdDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataXtd_PatternStdDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataXtd_PatternStdDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataXtd_PatternStdDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataXtd_PatternStdDriver::*)() const>(&BinMDataXtd_PatternStdDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataXtd_PatternStdDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataXtd_PatternStdDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataXtd_PlacementDriver ,opencascade::handle<BinMDataXtd_PlacementDriver> , BinMDF_ADriver>>(m.attr("BinMDataXtd_PlacementDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataXtd_PlacementDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataXtd_PlacementDriver::*)() const>(&BinMDataXtd_PlacementDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataXtd_PlacementDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataXtd_PlacementDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataXtd_PlacementDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataXtd_PlacementDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataXtd_PlacementDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataXtd_PlacementDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataXtd_PlacementDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataXtd_PlacementDriver::*)() const>(&BinMDataXtd_PlacementDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataXtd_PlacementDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataXtd_PlacementDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataXtd_PlaneDriver ,opencascade::handle<BinMDataXtd_PlaneDriver> , BinMDF_ADriver>>(m.attr("BinMDataXtd_PlaneDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataXtd_PlaneDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataXtd_PlaneDriver::*)() const>(&BinMDataXtd_PlaneDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataXtd_PlaneDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataXtd_PlaneDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataXtd_PlaneDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataXtd_PlaneDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataXtd_PlaneDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataXtd_PlaneDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataXtd_PlaneDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataXtd_PlaneDriver::*)() const>(&BinMDataXtd_PlaneDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataXtd_PlaneDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataXtd_PlaneDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataXtd_PointDriver ,opencascade::handle<BinMDataXtd_PointDriver> , BinMDF_ADriver>>(m.attr("BinMDataXtd_PointDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataXtd_PointDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataXtd_PointDriver::*)() const>(&BinMDataXtd_PointDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataXtd_PointDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataXtd_PointDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataXtd_PointDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataXtd_PointDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataXtd_PointDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataXtd_PointDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataXtd_PointDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataXtd_PointDriver::*)() const>(&BinMDataXtd_PointDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataXtd_PointDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataXtd_PointDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataXtd_PositionDriver ,opencascade::handle<BinMDataXtd_PositionDriver> , BinMDF_ADriver>>(m.attr("BinMDataXtd_PositionDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataXtd_PositionDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataXtd_PositionDriver::*)() const>(&BinMDataXtd_PositionDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataXtd_PositionDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataXtd_PositionDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataXtd_PositionDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataXtd_PositionDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataXtd_PositionDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataXtd_PositionDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataXtd_PositionDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataXtd_PositionDriver::*)() const>(&BinMDataXtd_PositionDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataXtd_PositionDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataXtd_PositionDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataXtd_PresentationDriver ,opencascade::handle<BinMDataXtd_PresentationDriver> , BinMDF_ADriver>>(m.attr("BinMDataXtd_PresentationDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataXtd_PresentationDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataXtd_PresentationDriver::*)() const>(&BinMDataXtd_PresentationDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataXtd_PresentationDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataXtd_PresentationDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataXtd_PresentationDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataXtd_PresentationDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataXtd_PresentationDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataXtd_PresentationDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataXtd_PresentationDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataXtd_PresentationDriver::*)() const>(&BinMDataXtd_PresentationDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataXtd_PresentationDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataXtd_PresentationDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataXtd_ShapeDriver ,opencascade::handle<BinMDataXtd_ShapeDriver> , BinMDF_ADriver>>(m.attr("BinMDataXtd_ShapeDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataXtd_ShapeDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataXtd_ShapeDriver::*)() const>(&BinMDataXtd_ShapeDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataXtd_ShapeDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataXtd_ShapeDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataXtd_ShapeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataXtd_ShapeDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataXtd_ShapeDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataXtd_ShapeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataXtd_ShapeDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataXtd_ShapeDriver::*)() const>(&BinMDataXtd_ShapeDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataXtd_ShapeDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataXtd_ShapeDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataXtd_TriangulationDriver ,opencascade::handle<BinMDataXtd_TriangulationDriver> , BinMDF_ADriver>>(m.attr("BinMDataXtd_TriangulationDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataXtd_TriangulationDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataXtd_TriangulationDriver::*)() const>(&BinMDataXtd_TriangulationDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataXtd_TriangulationDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataXtd_TriangulationDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataXtd_TriangulationDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataXtd_TriangulationDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataXtd_TriangulationDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataXtd_TriangulationDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataXtd_TriangulationDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataXtd_TriangulationDriver::*)() const>(&BinMDataXtd_TriangulationDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataXtd_TriangulationDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataXtd_TriangulationDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BinMDataXtd_AxisDriver.hxx
// ./opencascade/BinMDataXtd_GeometryDriver.hxx
// ./opencascade/BinMDataXtd_TriangulationDriver.hxx
// ./opencascade/BinMDataXtd_PresentationDriver.hxx
// ./opencascade/BinMDataXtd.hxx
// ./opencascade/BinMDataXtd_PatternStdDriver.hxx
// ./opencascade/BinMDataXtd_PlacementDriver.hxx
// ./opencascade/BinMDataXtd_ConstraintDriver.hxx
// ./opencascade/BinMDataXtd_PositionDriver.hxx
// ./opencascade/BinMDataXtd_PlaneDriver.hxx
// ./opencascade/BinMDataXtd_PointDriver.hxx
// ./opencascade/BinMDataXtd_ShapeDriver.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

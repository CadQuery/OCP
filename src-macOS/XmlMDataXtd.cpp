
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
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlMDataXtd_AxisDriver.hxx>
#include <XmlMDataXtd_ShapeDriver.hxx>
#include <XmlMDataXtd_PointDriver.hxx>
#include <XmlMDataXtd_PlaneDriver.hxx>
#include <XmlMDataXtd_GeometryDriver.hxx>
#include <XmlMDataXtd_ConstraintDriver.hxx>
#include <XmlMDataXtd_PlacementDriver.hxx>
#include <XmlMDataXtd_PatternStdDriver.hxx>
#include <XmlMDataXtd_TriangulationDriver.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>

// module includes
#include <XmlMDataXtd.hxx>
#include <XmlMDataXtd_AxisDriver.hxx>
#include <XmlMDataXtd_ConstraintDriver.hxx>
#include <XmlMDataXtd_GeometryDriver.hxx>
#include <XmlMDataXtd_PatternStdDriver.hxx>
#include <XmlMDataXtd_PlacementDriver.hxx>
#include <XmlMDataXtd_PlaneDriver.hxx>
#include <XmlMDataXtd_PointDriver.hxx>
#include <XmlMDataXtd_PositionDriver.hxx>
#include <XmlMDataXtd_PresentationDriver.hxx>
#include <XmlMDataXtd_ShapeDriver.hxx>
#include <XmlMDataXtd_TriangulationDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlMDataXtd(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("XmlMDataXtd"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<XmlMDataXtd , shared_ptr<XmlMDataXtd>>(m,"XmlMDataXtd");

    static_cast<py::class_<XmlMDataXtd , shared_ptr<XmlMDataXtd> >>(m.attr("XmlMDataXtd"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataXtd_AxisDriver ,opencascade::handle<XmlMDataXtd_AxisDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataXtd_AxisDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataXtd_AxisDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataXtd_AxisDriver::*)() const>(&XmlMDataXtd_AxisDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataXtd_AxisDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataXtd_AxisDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataXtd_AxisDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataXtd_AxisDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataXtd_AxisDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataXtd_AxisDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataXtd_AxisDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataXtd_AxisDriver::*)() const>(&XmlMDataXtd_AxisDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataXtd_AxisDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataXtd_ConstraintDriver ,opencascade::handle<XmlMDataXtd_ConstraintDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataXtd_ConstraintDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataXtd_ConstraintDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataXtd_ConstraintDriver::*)() const>(&XmlMDataXtd_ConstraintDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataXtd_ConstraintDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataXtd_ConstraintDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataXtd_ConstraintDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataXtd_ConstraintDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataXtd_ConstraintDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataXtd_ConstraintDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataXtd_ConstraintDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataXtd_ConstraintDriver::*)() const>(&XmlMDataXtd_ConstraintDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataXtd_ConstraintDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataXtd_GeometryDriver ,opencascade::handle<XmlMDataXtd_GeometryDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataXtd_GeometryDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataXtd_GeometryDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataXtd_GeometryDriver::*)() const>(&XmlMDataXtd_GeometryDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataXtd_GeometryDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataXtd_GeometryDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataXtd_GeometryDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataXtd_GeometryDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataXtd_GeometryDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataXtd_GeometryDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataXtd_GeometryDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataXtd_GeometryDriver::*)() const>(&XmlMDataXtd_GeometryDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataXtd_GeometryDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataXtd_PatternStdDriver ,opencascade::handle<XmlMDataXtd_PatternStdDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataXtd_PatternStdDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataXtd_PatternStdDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataXtd_PatternStdDriver::*)() const>(&XmlMDataXtd_PatternStdDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataXtd_PatternStdDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataXtd_PatternStdDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataXtd_PatternStdDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataXtd_PatternStdDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataXtd_PatternStdDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataXtd_PatternStdDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataXtd_PatternStdDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataXtd_PatternStdDriver::*)() const>(&XmlMDataXtd_PatternStdDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataXtd_PatternStdDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataXtd_PlacementDriver ,opencascade::handle<XmlMDataXtd_PlacementDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataXtd_PlacementDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataXtd_PlacementDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataXtd_PlacementDriver::*)() const>(&XmlMDataXtd_PlacementDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataXtd_PlacementDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataXtd_PlacementDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataXtd_PlacementDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataXtd_PlacementDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataXtd_PlacementDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataXtd_PlacementDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataXtd_PlacementDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataXtd_PlacementDriver::*)() const>(&XmlMDataXtd_PlacementDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataXtd_PlacementDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataXtd_PlaneDriver ,opencascade::handle<XmlMDataXtd_PlaneDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataXtd_PlaneDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataXtd_PlaneDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataXtd_PlaneDriver::*)() const>(&XmlMDataXtd_PlaneDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataXtd_PlaneDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataXtd_PlaneDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataXtd_PlaneDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataXtd_PlaneDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataXtd_PlaneDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataXtd_PlaneDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataXtd_PlaneDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataXtd_PlaneDriver::*)() const>(&XmlMDataXtd_PlaneDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataXtd_PlaneDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataXtd_PointDriver ,opencascade::handle<XmlMDataXtd_PointDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataXtd_PointDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataXtd_PointDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataXtd_PointDriver::*)() const>(&XmlMDataXtd_PointDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataXtd_PointDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataXtd_PointDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataXtd_PointDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataXtd_PointDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataXtd_PointDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataXtd_PointDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataXtd_PointDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataXtd_PointDriver::*)() const>(&XmlMDataXtd_PointDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataXtd_PointDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataXtd_PositionDriver ,opencascade::handle<XmlMDataXtd_PositionDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataXtd_PositionDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataXtd_PositionDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataXtd_PositionDriver::*)() const>(&XmlMDataXtd_PositionDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataXtd_PositionDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataXtd_PositionDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataXtd_PositionDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataXtd_PositionDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataXtd_PositionDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataXtd_PositionDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataXtd_PositionDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataXtd_PositionDriver::*)() const>(&XmlMDataXtd_PositionDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataXtd_PositionDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataXtd_PresentationDriver ,opencascade::handle<XmlMDataXtd_PresentationDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataXtd_PresentationDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataXtd_PresentationDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataXtd_PresentationDriver::*)() const>(&XmlMDataXtd_PresentationDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataXtd_PresentationDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataXtd_PresentationDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataXtd_PresentationDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataXtd_PresentationDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataXtd_PresentationDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataXtd_PresentationDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataXtd_PresentationDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataXtd_PresentationDriver::*)() const>(&XmlMDataXtd_PresentationDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataXtd_PresentationDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataXtd_ShapeDriver ,opencascade::handle<XmlMDataXtd_ShapeDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataXtd_ShapeDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataXtd_ShapeDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataXtd_ShapeDriver::*)() const>(&XmlMDataXtd_ShapeDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataXtd_ShapeDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataXtd_ShapeDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataXtd_ShapeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataXtd_ShapeDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataXtd_ShapeDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataXtd_ShapeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataXtd_ShapeDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataXtd_ShapeDriver::*)() const>(&XmlMDataXtd_ShapeDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataXtd_ShapeDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataXtd_TriangulationDriver ,opencascade::handle<XmlMDataXtd_TriangulationDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataXtd_TriangulationDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataXtd_TriangulationDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataXtd_TriangulationDriver::*)() const>(&XmlMDataXtd_TriangulationDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataXtd_TriangulationDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataXtd_TriangulationDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataXtd_TriangulationDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataXtd_TriangulationDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataXtd_TriangulationDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataXtd_TriangulationDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataXtd_TriangulationDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataXtd_TriangulationDriver::*)() const>(&XmlMDataXtd_TriangulationDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataXtd_TriangulationDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/XmlMDataXtd_ShapeDriver.hxx
// ./opencascade/XmlMDataXtd_ConstraintDriver.hxx
// ./opencascade/XmlMDataXtd_GeometryDriver.hxx
// ./opencascade/XmlMDataXtd_TriangulationDriver.hxx
// ./opencascade/XmlMDataXtd_AxisDriver.hxx
// ./opencascade/XmlMDataXtd_PositionDriver.hxx
// ./opencascade/XmlMDataXtd.hxx
// ./opencascade/XmlMDataXtd_PlacementDriver.hxx
// ./opencascade/XmlMDataXtd_PlaneDriver.hxx
// ./opencascade/XmlMDataXtd_PatternStdDriver.hxx
// ./opencascade/XmlMDataXtd_PointDriver.hxx
// ./opencascade/XmlMDataXtd_PresentationDriver.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

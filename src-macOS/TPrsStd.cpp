
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDataXtd_Constraint.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom_Geometry.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <AIS_InteractiveContext.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <V3d_Viewer.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>

// module includes
#include <TPrsStd_AISPresentation.hxx>
#include <TPrsStd_AISViewer.hxx>
#include <TPrsStd_AxisDriver.hxx>
#include <TPrsStd_ConstraintDriver.hxx>
#include <TPrsStd_ConstraintTools.hxx>
#include <TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver.hxx>
#include <TPrsStd_DataMapOfGUIDDriver.hxx>
#include <TPrsStd_Driver.hxx>
#include <TPrsStd_DriverTable.hxx>
#include <TPrsStd_GeometryDriver.hxx>
#include <TPrsStd_NamedShapeDriver.hxx>
#include <TPrsStd_PlaneDriver.hxx>
#include <TPrsStd_PointDriver.hxx>

// template related includes
// ./opencascade/TPrsStd_DataMapOfGUIDDriver.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TPrsStd(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TPrsStd"));


//Python trampoline classes
    class Py_TPrsStd_Driver : public TPrsStd_Driver{
    public:
        using TPrsStd_Driver::TPrsStd_Driver;


        // public pure virtual
        Standard_Boolean Update(const TDF_Label & L,opencascade::handle<AIS_InteractiveObject> & ais) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,TPrsStd_Driver,Update,L,ais) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<TPrsStd_AISPresentation ,opencascade::handle<TPrsStd_AISPresentation> , TDF_Attribute>>(m.attr("TPrsStd_AISPresentation"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TPrsStd_AISPresentation::*)() const) static_cast<const Standard_GUID & (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::ID),
             R"#(None)#" )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TPrsStd_AISPresentation::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::NewEmpty),
             R"#(None)#" )
        .def("Restore",
             (void (TPrsStd_AISPresentation::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TPrsStd_AISPresentation::*)( const opencascade::handle<TDF_Attribute> & ) >(&TPrsStd_AISPresentation::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("Paste",
             (void (TPrsStd_AISPresentation::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TPrsStd_AISPresentation::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TPrsStd_AISPresentation::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("BackupCopy",
             (opencascade::handle<TDF_Attribute> (TPrsStd_AISPresentation::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::BackupCopy),
             R"#(None)#" )
        .def("AfterAddition",
             (void (TPrsStd_AISPresentation::*)() ) static_cast<void (TPrsStd_AISPresentation::*)() >(&TPrsStd_AISPresentation::AfterAddition),
             R"#(None)#" )
        .def("BeforeRemoval",
             (void (TPrsStd_AISPresentation::*)() ) static_cast<void (TPrsStd_AISPresentation::*)() >(&TPrsStd_AISPresentation::BeforeRemoval),
             R"#(None)#" )
        .def("BeforeForget",
             (void (TPrsStd_AISPresentation::*)() ) static_cast<void (TPrsStd_AISPresentation::*)() >(&TPrsStd_AISPresentation::BeforeForget),
             R"#(None)#" )
        .def("AfterResume",
             (void (TPrsStd_AISPresentation::*)() ) static_cast<void (TPrsStd_AISPresentation::*)() >(&TPrsStd_AISPresentation::AfterResume),
             R"#(None)#" )
        .def("BeforeUndo",
             (Standard_Boolean (TPrsStd_AISPresentation::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TPrsStd_AISPresentation::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TPrsStd_AISPresentation::BeforeUndo),
             R"#(None)#"  , py::arg("anAttDelta"),  py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AfterUndo",
             (Standard_Boolean (TPrsStd_AISPresentation::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TPrsStd_AISPresentation::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TPrsStd_AISPresentation::AfterUndo),
             R"#(update AIS viewer according to delta)#"  , py::arg("anAttDelta"),  py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TPrsStd_AISPresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TPrsStd_AISPresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_AISViewer ,opencascade::handle<TPrsStd_AISViewer> , TDF_Attribute>>(m.attr("TPrsStd_AISViewer"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TPrsStd_AISViewer::*)() const) static_cast<const Standard_GUID & (TPrsStd_AISViewer::*)() const>(&TPrsStd_AISViewer::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TPrsStd_AISViewer::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TPrsStd_AISViewer::*)( const opencascade::handle<TDF_Attribute> & ) >(&TPrsStd_AISViewer::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TPrsStd_AISViewer::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TPrsStd_AISViewer::*)() const>(&TPrsStd_AISViewer::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TPrsStd_AISViewer::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TPrsStd_AISViewer::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TPrsStd_AISViewer::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TPrsStd_AISViewer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TPrsStd_AISViewer::*)() const>(&TPrsStd_AISViewer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TPrsStd_AISViewer::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TPrsStd_ConstraintTools , shared_ptr<TPrsStd_ConstraintTools>>(m,"TPrsStd_ConstraintTools");

    static_cast<py::class_<TPrsStd_ConstraintTools , shared_ptr<TPrsStd_ConstraintTools> >>(m.attr("TPrsStd_ConstraintTools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_Driver ,opencascade::handle<TPrsStd_Driver>,Py_TPrsStd_Driver , Standard_Transient>>(m.attr("TPrsStd_Driver"))
    // constructors
    // custom constructors
    // methods
        .def("Update",
             (Standard_Boolean (TPrsStd_Driver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<Standard_Boolean (TPrsStd_Driver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_Driver::Update),
             R"#(Updates the interactive object ais with information found on the attributes associated with the label L.)#"  , py::arg("L"),  py::arg("ais"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TPrsStd_Driver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TPrsStd_Driver::*)() const>(&TPrsStd_Driver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TPrsStd_Driver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_DriverTable ,opencascade::handle<TPrsStd_DriverTable> , Standard_Transient>>(m.attr("TPrsStd_DriverTable"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TPrsStd_DriverTable::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TPrsStd_DriverTable::*)() const>(&TPrsStd_DriverTable::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TPrsStd_DriverTable::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_AxisDriver ,opencascade::handle<TPrsStd_AxisDriver> , TPrsStd_Driver>>(m.attr("TPrsStd_AxisDriver"))
    // constructors
    // custom constructors
    // methods
        .def("Update",
             (Standard_Boolean (TPrsStd_AxisDriver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<Standard_Boolean (TPrsStd_AxisDriver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_AxisDriver::Update),
             R"#(Build the AISObject (if null) or update it. No compute is done. Returns <True> if informations was found and AISObject updated.)#"  , py::arg("aLabel"),  py::arg("anAISObject"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TPrsStd_AxisDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TPrsStd_AxisDriver::*)() const>(&TPrsStd_AxisDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TPrsStd_AxisDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_ConstraintDriver ,opencascade::handle<TPrsStd_ConstraintDriver> , TPrsStd_Driver>>(m.attr("TPrsStd_ConstraintDriver"))
    // constructors
    // custom constructors
    // methods
        .def("Update",
             (Standard_Boolean (TPrsStd_ConstraintDriver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<Standard_Boolean (TPrsStd_ConstraintDriver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintDriver::Update),
             R"#(Build the AISObject (if null) or update it. No compute is done. Returns <True> if informations was found and AISObject updated.)#"  , py::arg("aLabel"),  py::arg("anAISObject"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TPrsStd_ConstraintDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TPrsStd_ConstraintDriver::*)() const>(&TPrsStd_ConstraintDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TPrsStd_ConstraintDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_GeometryDriver ,opencascade::handle<TPrsStd_GeometryDriver> , TPrsStd_Driver>>(m.attr("TPrsStd_GeometryDriver"))
    // constructors
    // custom constructors
    // methods
        .def("Update",
             (Standard_Boolean (TPrsStd_GeometryDriver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<Standard_Boolean (TPrsStd_GeometryDriver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_GeometryDriver::Update),
             R"#(Build the AISObject (if null) or update it. No compute is done. Returns <True> if informations was found and AISObject updated.)#"  , py::arg("aLabel"),  py::arg("anAISObject"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TPrsStd_GeometryDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TPrsStd_GeometryDriver::*)() const>(&TPrsStd_GeometryDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TPrsStd_GeometryDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_NamedShapeDriver ,opencascade::handle<TPrsStd_NamedShapeDriver> , TPrsStd_Driver>>(m.attr("TPrsStd_NamedShapeDriver"))
    // constructors
    // custom constructors
    // methods
        .def("Update",
             (Standard_Boolean (TPrsStd_NamedShapeDriver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<Standard_Boolean (TPrsStd_NamedShapeDriver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_NamedShapeDriver::Update),
             R"#(Build the AISObject (if null) or update it. No compute is done. Returns <True> if informations was found and AISObject updated.)#"  , py::arg("aLabel"),  py::arg("anAISObject"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TPrsStd_NamedShapeDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TPrsStd_NamedShapeDriver::*)() const>(&TPrsStd_NamedShapeDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TPrsStd_NamedShapeDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_PlaneDriver ,opencascade::handle<TPrsStd_PlaneDriver> , TPrsStd_Driver>>(m.attr("TPrsStd_PlaneDriver"))
    // constructors
    // custom constructors
    // methods
        .def("Update",
             (Standard_Boolean (TPrsStd_PlaneDriver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<Standard_Boolean (TPrsStd_PlaneDriver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_PlaneDriver::Update),
             R"#(Build the AISObject (if null) or update it. No compute is done. Returns <True> if informations was found and AISObject updated.)#"  , py::arg("aLabel"),  py::arg("anAISObject"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TPrsStd_PlaneDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TPrsStd_PlaneDriver::*)() const>(&TPrsStd_PlaneDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TPrsStd_PlaneDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_PointDriver ,opencascade::handle<TPrsStd_PointDriver> , TPrsStd_Driver>>(m.attr("TPrsStd_PointDriver"))
    // constructors
    // custom constructors
    // methods
        .def("Update",
             (Standard_Boolean (TPrsStd_PointDriver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<Standard_Boolean (TPrsStd_PointDriver::*)( const TDF_Label & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_PointDriver::Update),
             R"#(Build the AISObject (if null) or update it. No compute is done. Returns <True> if informations was found and AISObject updated.)#"  , py::arg("aLabel"),  py::arg("anAISObject"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TPrsStd_PointDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TPrsStd_PointDriver::*)() const>(&TPrsStd_PointDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TPrsStd_PointDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TPrsStd_NamedShapeDriver.hxx
// ./opencascade/TPrsStd_ConstraintTools.hxx
// ./opencascade/TPrsStd_ConstraintDriver.hxx
// ./opencascade/TPrsStd_DriverTable.hxx
// ./opencascade/TPrsStd_DataMapOfGUIDDriver.hxx
// ./opencascade/TPrsStd_PlaneDriver.hxx
// ./opencascade/TPrsStd_GeometryDriver.hxx
// ./opencascade/TPrsStd_Driver.hxx
// ./opencascade/TPrsStd_AISPresentation.hxx
// ./opencascade/TPrsStd_PointDriver.hxx
// ./opencascade/TPrsStd_AISViewer.hxx
// ./opencascade/TPrsStd_AxisDriver.hxx
// ./opencascade/TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

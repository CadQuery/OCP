
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
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <AIS_InteractiveContext.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <V3d_Viewer.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDataXtd_Constraint.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom_Geometry.hxx>
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetDisplayed",
             (void (TPrsStd_AISPresentation::*)( const Standard_Boolean ) ) static_cast<void (TPrsStd_AISPresentation::*)( const Standard_Boolean ) >(&TPrsStd_AISPresentation::SetDisplayed),
             R"#(None)#"  , py::arg("B"))
        .def("Display",
             (void (TPrsStd_AISPresentation::*)( const Standard_Boolean ) ) static_cast<void (TPrsStd_AISPresentation::*)( const Standard_Boolean ) >(&TPrsStd_AISPresentation::Display),
             R"#(Display presentation of object in AIS viewer. If <update> = True then AISObject is recomputed and all the visualization settings are applied)#"  , py::arg("update")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Erase",
             (void (TPrsStd_AISPresentation::*)( const Standard_Boolean ) ) static_cast<void (TPrsStd_AISPresentation::*)( const Standard_Boolean ) >(&TPrsStd_AISPresentation::Erase),
             R"#(Removes the presentation of this AIS presentation attribute from the TPrsStd_AISViewer. If remove is true, this AIS presentation attribute is removed from the interactive context.)#"  , py::arg("remove")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Update",
             (void (TPrsStd_AISPresentation::*)() ) static_cast<void (TPrsStd_AISPresentation::*)() >(&TPrsStd_AISPresentation::Update),
             R"#(Recompute presentation of object and apply the visualization settings)#" )
        .def("GetDriverGUID",
             (Standard_GUID (TPrsStd_AISPresentation::*)() const) static_cast<Standard_GUID (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::GetDriverGUID),
             R"#(None)#" )
        .def("SetDriverGUID",
             (void (TPrsStd_AISPresentation::*)( const Standard_GUID & ) ) static_cast<void (TPrsStd_AISPresentation::*)( const Standard_GUID & ) >(&TPrsStd_AISPresentation::SetDriverGUID),
             R"#(None)#"  , py::arg("guid"))
        .def("IsDisplayed",
             (Standard_Boolean (TPrsStd_AISPresentation::*)() const) static_cast<Standard_Boolean (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::IsDisplayed),
             R"#(Returns true if this AIS presentation attribute is displayed.)#" )
        .def("GetAIS",
             (opencascade::handle<AIS_InteractiveObject> (TPrsStd_AISPresentation::*)() const) static_cast<opencascade::handle<AIS_InteractiveObject> (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::GetAIS),
             R"#(Returns AIS_InteractiveObject stored in the presentation attribute)#" )
        .def("Material",
             (Graphic3d_NameOfMaterial (TPrsStd_AISPresentation::*)() const) static_cast<Graphic3d_NameOfMaterial (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::Material),
             R"#(Returns the material setting for this presentation attribute.)#" )
        .def("SetMaterial",
             (void (TPrsStd_AISPresentation::*)( const Graphic3d_NameOfMaterial ) ) static_cast<void (TPrsStd_AISPresentation::*)( const Graphic3d_NameOfMaterial ) >(&TPrsStd_AISPresentation::SetMaterial),
             R"#(Sets the material aName for this presentation attribute.)#"  , py::arg("aName"))
        .def("HasOwnMaterial",
             (Standard_Boolean (TPrsStd_AISPresentation::*)() const) static_cast<Standard_Boolean (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::HasOwnMaterial),
             R"#(Returns true if this presentation attribute already has a material setting.)#" )
        .def("UnsetMaterial",
             (void (TPrsStd_AISPresentation::*)() ) static_cast<void (TPrsStd_AISPresentation::*)() >(&TPrsStd_AISPresentation::UnsetMaterial),
             R"#(Removes the material setting from this presentation attribute.)#" )
        .def("SetTransparency",
             (void (TPrsStd_AISPresentation::*)( const Standard_Real ) ) static_cast<void (TPrsStd_AISPresentation::*)( const Standard_Real ) >(&TPrsStd_AISPresentation::SetTransparency),
             R"#(Sets the transparency value aValue for this presentation attribute. This value is 0.6 by default.)#"  , py::arg("aValue")=static_cast<const Standard_Real>(0.6))
        .def("Transparency",
             (Standard_Real (TPrsStd_AISPresentation::*)() const) static_cast<Standard_Real (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::Transparency),
             R"#(None)#" )
        .def("HasOwnTransparency",
             (Standard_Boolean (TPrsStd_AISPresentation::*)() const) static_cast<Standard_Boolean (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::HasOwnTransparency),
             R"#(Returns true if this presentation attribute already has a transparency setting.)#" )
        .def("UnsetTransparency",
             (void (TPrsStd_AISPresentation::*)() ) static_cast<void (TPrsStd_AISPresentation::*)() >(&TPrsStd_AISPresentation::UnsetTransparency),
             R"#(Removes the transparency setting from this presentation attribute.)#" )
        .def("Color",
             (Quantity_NameOfColor (TPrsStd_AISPresentation::*)() const) static_cast<Quantity_NameOfColor (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::Color),
             R"#(None)#" )
        .def("SetColor",
             (void (TPrsStd_AISPresentation::*)( const Quantity_NameOfColor ) ) static_cast<void (TPrsStd_AISPresentation::*)( const Quantity_NameOfColor ) >(&TPrsStd_AISPresentation::SetColor),
             R"#(Sets the color aColor for this presentation attribute.)#"  , py::arg("aColor"))
        .def("HasOwnColor",
             (Standard_Boolean (TPrsStd_AISPresentation::*)() const) static_cast<Standard_Boolean (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::HasOwnColor),
             R"#(Returns true if this presentation attribute already has a color setting.)#" )
        .def("UnsetColor",
             (void (TPrsStd_AISPresentation::*)() ) static_cast<void (TPrsStd_AISPresentation::*)() >(&TPrsStd_AISPresentation::UnsetColor),
             R"#(Removes the color setting from this presentation attribute.)#" )
        .def("Width",
             (Standard_Real (TPrsStd_AISPresentation::*)() const) static_cast<Standard_Real (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::Width),
             R"#(None)#" )
        .def("SetWidth",
             (void (TPrsStd_AISPresentation::*)( const Standard_Real ) ) static_cast<void (TPrsStd_AISPresentation::*)( const Standard_Real ) >(&TPrsStd_AISPresentation::SetWidth),
             R"#(Sets the width aWidth for this presentation attribute.)#"  , py::arg("aWidth"))
        .def("HasOwnWidth",
             (Standard_Boolean (TPrsStd_AISPresentation::*)() const) static_cast<Standard_Boolean (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::HasOwnWidth),
             R"#(Returns true if this presentation attribute already has a width setting.)#" )
        .def("UnsetWidth",
             (void (TPrsStd_AISPresentation::*)() ) static_cast<void (TPrsStd_AISPresentation::*)() >(&TPrsStd_AISPresentation::UnsetWidth),
             R"#(Removes the width setting from this presentation attribute.)#" )
        .def("Mode",
             (Standard_Integer (TPrsStd_AISPresentation::*)() const) static_cast<Standard_Integer (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::Mode),
             R"#(None)#" )
        .def("SetMode",
             (void (TPrsStd_AISPresentation::*)( const Standard_Integer ) ) static_cast<void (TPrsStd_AISPresentation::*)( const Standard_Integer ) >(&TPrsStd_AISPresentation::SetMode),
             R"#(None)#"  , py::arg("theMode"))
        .def("HasOwnMode",
             (Standard_Boolean (TPrsStd_AISPresentation::*)() const) static_cast<Standard_Boolean (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::HasOwnMode),
             R"#(None)#" )
        .def("UnsetMode",
             (void (TPrsStd_AISPresentation::*)() ) static_cast<void (TPrsStd_AISPresentation::*)() >(&TPrsStd_AISPresentation::UnsetMode),
             R"#(None)#" )
        .def("GetNbSelectionModes",
             (Standard_Integer (TPrsStd_AISPresentation::*)() const) static_cast<Standard_Integer (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::GetNbSelectionModes),
             R"#(Returns selection mode(s) of the attribute. It starts with 1 .. GetNbSelectionModes().)#" )
        .def("SelectionMode",
             (Standard_Integer (TPrsStd_AISPresentation::*)( const int ) const) static_cast<Standard_Integer (TPrsStd_AISPresentation::*)( const int ) const>(&TPrsStd_AISPresentation::SelectionMode),
             R"#(None)#"  , py::arg("index")=static_cast<const int>(1))
        .def("SetSelectionMode",
             (void (TPrsStd_AISPresentation::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (TPrsStd_AISPresentation::*)( const Standard_Integer , const Standard_Boolean ) >(&TPrsStd_AISPresentation::SetSelectionMode),
             R"#(Sets selection mode. If "theTransaction" flag is OFF, modification of the attribute doesn't influence the transaction mechanism (the attribute doesn't participate in undo/redo because of this modification). Certainly, if any other data of the attribute is modified (display mode, color, ...), the attribute will be included into undo/redo.)#"  , py::arg("theSelectionMode"),  py::arg("theTransaction")=static_cast<const Standard_Boolean>(Standard_True))
        .def("AddSelectionMode",
             (void (TPrsStd_AISPresentation::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (TPrsStd_AISPresentation::*)( const Standard_Integer , const Standard_Boolean ) >(&TPrsStd_AISPresentation::AddSelectionMode),
             R"#(None)#"  , py::arg("theSelectionMode"),  py::arg("theTransaction")=static_cast<const Standard_Boolean>(Standard_True))
        .def("HasOwnSelectionMode",
             (Standard_Boolean (TPrsStd_AISPresentation::*)() const) static_cast<Standard_Boolean (TPrsStd_AISPresentation::*)() const>(&TPrsStd_AISPresentation::HasOwnSelectionMode),
             R"#(None)#" )
        .def("UnsetSelectionMode",
             (void (TPrsStd_AISPresentation::*)() ) static_cast<void (TPrsStd_AISPresentation::*)() >(&TPrsStd_AISPresentation::UnsetSelectionMode),
             R"#(Clears all selection modes of the attribute.)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TPrsStd_AISPresentation::GetID),
                    R"#(Returns the GUID for TPrsStd_AISPresentation attributes.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TPrsStd_AISPresentation> (*)( const TDF_Label & , const Standard_GUID & ) ) static_cast<opencascade::handle<TPrsStd_AISPresentation> (*)( const TDF_Label & , const Standard_GUID & ) >(&TPrsStd_AISPresentation::Set),
                    R"#(Creates or retrieves the presentation attribute on the label L, and sets the GUID driver.)#"  , py::arg("L"),  py::arg("driver"))
        .def_static("Unset_s",
                    (void (*)( const TDF_Label & ) ) static_cast<void (*)( const TDF_Label & ) >(&TPrsStd_AISPresentation::Unset),
                    R"#(Delete (if exist) the presentation attribute associated to the label <L>.)#"  , py::arg("L"))
        .def_static("Set_s",
                    (opencascade::handle<TPrsStd_AISPresentation> (*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<opencascade::handle<TPrsStd_AISPresentation> (*)( const opencascade::handle<TDF_Attribute> & ) >(&TPrsStd_AISPresentation::Set),
                    R"#(Creates or retrieves the AISPresentation attribute attached to master. The GUID of the driver will be the GUID of master. master is the attribute you want to display.)#"  , py::arg("master"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TPrsStd_AISPresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TPrsStd_AISPresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_AISViewer ,opencascade::handle<TPrsStd_AISViewer> , TDF_Attribute>>(m.attr("TPrsStd_AISViewer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Update",
             (void (TPrsStd_AISViewer::*)() const) static_cast<void (TPrsStd_AISViewer::*)() const>(&TPrsStd_AISViewer::Update),
             R"#(Updates the viewer at the label access. access is the root of the data framework.)#" )
        .def("SetInteractiveContext",
             (void (TPrsStd_AISViewer::*)( const opencascade::handle<AIS_InteractiveContext> & ) ) static_cast<void (TPrsStd_AISViewer::*)( const opencascade::handle<AIS_InteractiveContext> & ) >(&TPrsStd_AISViewer::SetInteractiveContext),
             R"#(Sets the interactive context ctx for this attribute.)#"  , py::arg("ctx"))
        .def("GetInteractiveContext",
             (opencascade::handle<AIS_InteractiveContext> (TPrsStd_AISViewer::*)() const) static_cast<opencascade::handle<AIS_InteractiveContext> (TPrsStd_AISViewer::*)() const>(&TPrsStd_AISViewer::GetInteractiveContext),
             R"#(Returns the interactive context in this attribute.)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TPrsStd_AISViewer::GetID),
                    R"#(class methods =============)#" )
        .def_static("Has_s",
                    (Standard_Boolean (*)( const TDF_Label & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & ) >(&TPrsStd_AISViewer::Has),
                    R"#(returns True if there is an AISViewer attribute in <acces> Data Framework.)#"  , py::arg("acces"))
        .def_static("New_s",
                    (opencascade::handle<TPrsStd_AISViewer> (*)( const TDF_Label & , const opencascade::handle<AIS_InteractiveContext> & ) ) static_cast<opencascade::handle<TPrsStd_AISViewer> (*)( const TDF_Label & , const opencascade::handle<AIS_InteractiveContext> & ) >(&TPrsStd_AISViewer::New),
                    R"#(create and set an AISViewer at. Raise an exception if Has.)#"  , py::arg("access"),  py::arg("selector"))
        .def_static("New_s",
                    (opencascade::handle<TPrsStd_AISViewer> (*)( const TDF_Label & , const opencascade::handle<V3d_Viewer> & ) ) static_cast<opencascade::handle<TPrsStd_AISViewer> (*)( const TDF_Label & , const opencascade::handle<V3d_Viewer> & ) >(&TPrsStd_AISViewer::New),
                    R"#(create and set an AISAttribute at root label. The interactive context is build. Raise an exception if Has.)#"  , py::arg("acces"),  py::arg("viewer"))
        .def_static("Find_s",
                    (Standard_Boolean (*)( const TDF_Label & , opencascade::handle<TPrsStd_AISViewer> & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , opencascade::handle<TPrsStd_AISViewer> & ) >(&TPrsStd_AISViewer::Find),
                    R"#(Finds the viewer attribute at the label access, the root of the data framework. Calling this function can be used to initialize an AIS viewer)#"  , py::arg("acces"),  py::arg("A"))
        .def_static("Find_s",
                    (Standard_Boolean (*)( const TDF_Label & , opencascade::handle<AIS_InteractiveContext> & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , opencascade::handle<AIS_InteractiveContext> & ) >(&TPrsStd_AISViewer::Find),
                    R"#(None)#"  , py::arg("acces"),  py::arg("IC"))
        .def_static("Find_s",
                    (Standard_Boolean (*)( const TDF_Label & , opencascade::handle<V3d_Viewer> & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , opencascade::handle<V3d_Viewer> & ) >(&TPrsStd_AISViewer::Find),
                    R"#(None)#"  , py::arg("acces"),  py::arg("V"))
        .def_static("Update_s",
                    (void (*)( const TDF_Label & ) ) static_cast<void (*)( const TDF_Label & ) >(&TPrsStd_AISViewer::Update),
                    R"#(AISViewer methods =================)#"  , py::arg("acces"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TPrsStd_AISViewer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TPrsStd_AISViewer::get_type_descriptor),
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
        .def_static("UpdateOnlyValue_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , const opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , const opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::UpdateOnlyValue),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeDistance_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeDistance),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeParallel_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeParallel),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeTangent_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeTangent),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputePerpendicular_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputePerpendicular),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeConcentric_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeConcentric),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeSymmetry_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeSymmetry),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeMidPoint_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeMidPoint),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeAngle_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeAngle),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeRadius_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeRadius),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeMinRadius_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeMinRadius),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeMaxRadius_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeMaxRadius),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeEqualDistance_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeEqualDistance),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeEqualRadius_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeEqualRadius),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeFix_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeFix),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeDiameter_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeDiameter),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeOffset_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeOffset),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputePlacement_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputePlacement),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeCoincident_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeCoincident),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeRound_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeRound),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeOthers_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeOthers),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
        .def_static("ComputeAngleForOneFace_s",
                    (void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) ) static_cast<void (*)( const opencascade::handle<TDataXtd_Constraint> & , opencascade::handle<AIS_InteractiveObject> & ) >(&TPrsStd_ConstraintTools::ComputeAngleForOneFace),
                    R"#(None)#"  , py::arg("aConst"),  py::arg("anAIS"))
    // static methods using call by reference i.s.o. return
        .def_static("ComputeTextAndValue_s",
                    []( const opencascade::handle<TDataXtd_Constraint> & aConst,TCollection_ExtendedString & aText,const Standard_Boolean anIsAngle ){ Standard_Real  aValue; TPrsStd_ConstraintTools::ComputeTextAndValue(aConst,aValue,aText,anIsAngle); return std::make_tuple(aValue); },
                    R"#(None)#"  , py::arg("aConst"),  py::arg("aText"),  py::arg("anIsAngle"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TPrsStd_Driver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_DriverTable ,opencascade::handle<TPrsStd_DriverTable> , Standard_Transient>>(m.attr("TPrsStd_DriverTable"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("InitStandardDrivers",
             (void (TPrsStd_DriverTable::*)() ) static_cast<void (TPrsStd_DriverTable::*)() >(&TPrsStd_DriverTable::InitStandardDrivers),
             R"#(Fills the table with standard drivers)#" )
        .def("AddDriver",
             (Standard_Boolean (TPrsStd_DriverTable::*)( const Standard_GUID & , const opencascade::handle<TPrsStd_Driver> & ) ) static_cast<Standard_Boolean (TPrsStd_DriverTable::*)( const Standard_GUID & , const opencascade::handle<TPrsStd_Driver> & ) >(&TPrsStd_DriverTable::AddDriver),
             R"#(Returns true if the driver has been added successfully to the driver table.)#"  , py::arg("guid"),  py::arg("driver"))
        .def("FindDriver",
             (Standard_Boolean (TPrsStd_DriverTable::*)( const Standard_GUID & , opencascade::handle<TPrsStd_Driver> & ) const) static_cast<Standard_Boolean (TPrsStd_DriverTable::*)( const Standard_GUID & , opencascade::handle<TPrsStd_Driver> & ) const>(&TPrsStd_DriverTable::FindDriver),
             R"#(Returns true if the driver was found.)#"  , py::arg("guid"),  py::arg("driver"))
        .def("RemoveDriver",
             (Standard_Boolean (TPrsStd_DriverTable::*)( const Standard_GUID & ) ) static_cast<Standard_Boolean (TPrsStd_DriverTable::*)( const Standard_GUID & ) >(&TPrsStd_DriverTable::RemoveDriver),
             R"#(Removes a driver with the given GUID. Returns true if the driver has been removed successfully.)#"  , py::arg("guid"))
        .def("Clear",
             (void (TPrsStd_DriverTable::*)() ) static_cast<void (TPrsStd_DriverTable::*)() >(&TPrsStd_DriverTable::Clear),
             R"#(Removes all drivers. Returns true if the driver has been removed successfully. If this method is used, the InitStandardDrivers method should be called to fill the table with standard drivers.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TPrsStd_DriverTable::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TPrsStd_DriverTable::*)() const>(&TPrsStd_DriverTable::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Get_s",
                    (opencascade::handle<TPrsStd_DriverTable> (*)() ) static_cast<opencascade::handle<TPrsStd_DriverTable> (*)() >(&TPrsStd_DriverTable::Get),
                    R"#(Returns the static table. If it does not exist, creates it and fills it with standard drivers.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TPrsStd_DriverTable::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TPrsStd_DriverTable::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_AxisDriver ,opencascade::handle<TPrsStd_AxisDriver> , TPrsStd_Driver>>(m.attr("TPrsStd_AxisDriver"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TPrsStd_AxisDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_ConstraintDriver ,opencascade::handle<TPrsStd_ConstraintDriver> , TPrsStd_Driver>>(m.attr("TPrsStd_ConstraintDriver"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TPrsStd_ConstraintDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_GeometryDriver ,opencascade::handle<TPrsStd_GeometryDriver> , TPrsStd_Driver>>(m.attr("TPrsStd_GeometryDriver"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TPrsStd_GeometryDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_NamedShapeDriver ,opencascade::handle<TPrsStd_NamedShapeDriver> , TPrsStd_Driver>>(m.attr("TPrsStd_NamedShapeDriver"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TPrsStd_NamedShapeDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_PlaneDriver ,opencascade::handle<TPrsStd_PlaneDriver> , TPrsStd_Driver>>(m.attr("TPrsStd_PlaneDriver"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TPrsStd_PlaneDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TPrsStd_PointDriver ,opencascade::handle<TPrsStd_PointDriver> , TPrsStd_Driver>>(m.attr("TPrsStd_PointDriver"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TPrsStd_PointDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TPrsStd_DriverTable.hxx
// ./opencascade/TPrsStd_PlaneDriver.hxx
// ./opencascade/TPrsStd_PointDriver.hxx
// ./opencascade/TPrsStd_AISViewer.hxx
// ./opencascade/TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver.hxx
// ./opencascade/TPrsStd_GeometryDriver.hxx
// ./opencascade/TPrsStd_Driver.hxx
// ./opencascade/TPrsStd_AISPresentation.hxx
// ./opencascade/TPrsStd_AxisDriver.hxx
// ./opencascade/TPrsStd_NamedShapeDriver.hxx
// ./opencascade/TPrsStd_ConstraintTools.hxx
// ./opencascade/TPrsStd_DataMapOfGUIDDriver.hxx
// ./opencascade/TPrsStd_ConstraintDriver.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

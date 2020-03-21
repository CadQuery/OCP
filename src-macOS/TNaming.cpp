
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Shape.hxx>
#include <TNaming_NamedShape.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TNaming_Tool.hxx>
#include <TNaming_Localizer.hxx>
#include <TNaming_Naming.hxx>
#include <TopoDS_Shape.hxx>
#include <TNaming_UsedShapes.hxx>
#include <TDF_Label.hxx>
#include <TNaming_Iterator.hxx>
#include <TNaming_NamedShape.hxx>
#include <TNaming_Localizer.hxx>
#include <TNaming_OldShapeIterator.hxx>
#include <TNaming_UsedShapes.hxx>
#include <TopoDS_Shape.hxx>
#include <TNaming_NamedShape.hxx>
#include <TNaming_DeltaOnModification.hxx>
#include <TNaming_NamedShape.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_IDFilter.hxx>
#include <TNaming_Builder.hxx>
#include <Standard_GUID.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_DeltaOnAddition.hxx>
#include <TDF_DeltaOnRemoval.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TNaming_Localizer.hxx>
#include <TNaming_NamedShape.hxx>
#include <TNaming_UsedShapes.hxx>
#include <TNaming_NamedShape.hxx>
#include <Standard_ConstructionError.hxx>
#include <TDF_Label.hxx>
#include <TopoDS_Shape.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TNaming_RefShape.hxx>
#include <TopoDS_Shape.hxx>
#include <TNaming_NamedShape.hxx>
#include <TNaming_NamedShape.hxx>
#include <TDF_RelocationTable.hxx>
#include <TopoDS_Shape.hxx>
#include <TNaming_TranslateTool.hxx>
#include <TopLoc_Location.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TNaming_NewShapeIterator.hxx>
#include <TNaming_OldShapeIterator.hxx>
#include <TNaming_NamedShape.hxx>
#include <TDF_Label.hxx>
#include <TopoDS_Shape.hxx>
#include <TNaming_Builder.hxx>
#include <TNaming_Iterator.hxx>
#include <TNaming_NewShapeIterator.hxx>
#include <TNaming_OldShapeIterator.hxx>
#include <Standard_GUID.hxx>
#include <TopoDS_Shape.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_DeltaOnRemoval.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_Label.hxx>
#include <TNaming_NamedShape.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TNaming_Tool.hxx>
#include <TopoDS_Shape.hxx>
#include <TNaming_UsedShapes.hxx>
#include <TDF_Label.hxx>
#include <TNaming_UsedShapes.hxx>
#include <TDF_Label.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TNaming_Tool.hxx>
#include <TNaming_Name.hxx>
#include <TNaming_Naming.hxx>
#include <TopoDS_Shape.hxx>
#include <TNaming_UsedShapes.hxx>
#include <TDF_Label.hxx>
#include <TNaming_Iterator.hxx>
#include <TNaming_NamedShape.hxx>
#include <TDF_Label.hxx>
#include <TNaming_NamedShape.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Shell.hxx>
#include <TNaming_CopyShape.hxx>
#include <TNaming_TranslateTool.hxx>
#include <TNaming_Translator.hxx>
#include <TNaming_NamedShape.hxx>
#include <TNaming_UsedShapes.hxx>
#include <TNaming_Builder.hxx>
#include <TNaming_Tool.hxx>
#include <TNaming_Iterator.hxx>
#include <TNaming_NewShapeIterator.hxx>
#include <TNaming_OldShapeIterator.hxx>
#include <TNaming_SameShapeIterator.hxx>
#include <TNaming_Name.hxx>
#include <TNaming_Naming.hxx>
#include <TNaming_Selector.hxx>
#include <TNaming_DeltaOnRemoval.hxx>
#include <TNaming_DeltaOnModification.hxx>
#include <TNaming_RefShape.hxx>
#include <TNaming_Scope.hxx>
#include <TNaming_Identifier.hxx>
#include <TNaming_Localizer.hxx>
#include <TNaming_ShapesSet.hxx>
#include <TNaming_IteratorOnShapesSet.hxx>
#include <TNaming_NamingTool.hxx>

// module includes
#include <TNaming.hxx>
#include <TNaming_Builder.hxx>
#include <TNaming_CopyShape.hxx>
#include <TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape.hxx>
#include <TNaming_DataMapIteratorOfDataMapOfShapeShapesSet.hxx>
#include <TNaming_DataMapOfShapePtrRefShape.hxx>
#include <TNaming_DataMapOfShapeShapesSet.hxx>
#include <TNaming_DeltaOnModification.hxx>
#include <TNaming_DeltaOnRemoval.hxx>
#include <TNaming_Evolution.hxx>
#include <TNaming_Identifier.hxx>
#include <TNaming_Iterator.hxx>
#include <TNaming_IteratorOnShapesSet.hxx>
#include <TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape.hxx>
#include <TNaming_ListIteratorOfListOfMapOfShape.hxx>
#include <TNaming_ListIteratorOfListOfNamedShape.hxx>
#include <TNaming_ListOfIndexedDataMapOfShapeListOfShape.hxx>
#include <TNaming_ListOfMapOfShape.hxx>
#include <TNaming_ListOfNamedShape.hxx>
#include <TNaming_Localizer.hxx>
#include <TNaming_MapIteratorOfMapOfNamedShape.hxx>
#include <TNaming_MapOfNamedShape.hxx>
#include <TNaming_Name.hxx>
#include <TNaming_NamedShape.hxx>
#include <TNaming_NamedShapeHasher.hxx>
#include <TNaming_NameType.hxx>
#include <TNaming_Naming.hxx>
#include <TNaming_NamingTool.hxx>
#include <TNaming_NCollections.hxx>
#include <TNaming_NewShapeIterator.hxx>
#include <TNaming_OldShapeIterator.hxx>
#include <TNaming_PtrAttribute.hxx>
#include <TNaming_PtrNode.hxx>
#include <TNaming_PtrRefShape.hxx>
#include <TNaming_RefShape.hxx>
#include <TNaming_SameShapeIterator.hxx>
#include <TNaming_Scope.hxx>
#include <TNaming_Selector.hxx>
#include <TNaming_ShapesSet.hxx>
#include <TNaming_Tool.hxx>
#include <TNaming_TranslateTool.hxx>
#include <TNaming_Translator.hxx>
#include <TNaming_UsedShapes.hxx>

// template related includes
// ./opencascade/TNaming_ListOfNamedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_ListOfNamedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_ListOfMapOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_ListOfMapOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_ListOfIndexedDataMapOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_ListOfIndexedDataMapOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_DataMapOfShapeShapesSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_DataMapOfShapeShapesSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_MapOfNamedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_MapOfNamedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_NamedShapeHasher.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_DataMapOfShapePtrRefShape.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TNaming(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TNaming"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<TNaming , shared_ptr<TNaming>>(m,"TNaming");

    static_cast<py::class_<TNaming , shared_ptr<TNaming> >>(m.attr("TNaming"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Builder , shared_ptr<TNaming_Builder> >>(m.attr("TNaming_Builder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TNaming_CopyShape , shared_ptr<TNaming_CopyShape>>(m,"TNaming_CopyShape");

    static_cast<py::class_<TNaming_CopyShape , shared_ptr<TNaming_CopyShape> >>(m.attr("TNaming_CopyShape"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_DeltaOnModification ,opencascade::handle<TNaming_DeltaOnModification> , TDF_DeltaOnModification>>(m.attr("TNaming_DeltaOnModification"))
    // constructors
    // custom constructors
    // methods
        .def("Apply",
             (void (TNaming_DeltaOnModification::*)() ) static_cast<void (TNaming_DeltaOnModification::*)() >(&TNaming_DeltaOnModification::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TNaming_DeltaOnModification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TNaming_DeltaOnModification::*)() const>(&TNaming_DeltaOnModification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TNaming_DeltaOnModification::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_DeltaOnRemoval ,opencascade::handle<TNaming_DeltaOnRemoval> , TDF_DeltaOnRemoval>>(m.attr("TNaming_DeltaOnRemoval"))
    // constructors
    // custom constructors
    // methods
        .def("Apply",
             (void (TNaming_DeltaOnRemoval::*)() ) static_cast<void (TNaming_DeltaOnRemoval::*)() >(&TNaming_DeltaOnRemoval::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TNaming_DeltaOnRemoval::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TNaming_DeltaOnRemoval::*)() const>(&TNaming_DeltaOnRemoval::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TNaming_DeltaOnRemoval::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Identifier , shared_ptr<TNaming_Identifier> >>(m.attr("TNaming_Identifier"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Iterator , shared_ptr<TNaming_Iterator> >>(m.attr("TNaming_Iterator"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TNaming_Iterator::*)() const) static_cast<Standard_Boolean (TNaming_Iterator::*)() const>(&TNaming_Iterator::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
        .def("More",
             (Standard_Boolean (TNaming_Iterator::*)() const) static_cast<Standard_Boolean (TNaming_Iterator::*)() const>(&TNaming_Iterator::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_IteratorOnShapesSet , shared_ptr<TNaming_IteratorOnShapesSet> >>(m.attr("TNaming_IteratorOnShapesSet"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TNaming_ShapesSet & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Init",
             (void (TNaming_IteratorOnShapesSet::*)( const TNaming_ShapesSet & ) ) static_cast<void (TNaming_IteratorOnShapesSet::*)( const TNaming_ShapesSet & ) >(&TNaming_IteratorOnShapesSet::Init),
             R"#(Initialize the iteration)#"  , py::arg("S"))
        .def("More",
             (Standard_Boolean (TNaming_IteratorOnShapesSet::*)() const) static_cast<Standard_Boolean (TNaming_IteratorOnShapesSet::*)() const>(&TNaming_IteratorOnShapesSet::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
        .def("Next",
             (void (TNaming_IteratorOnShapesSet::*)() ) static_cast<void (TNaming_IteratorOnShapesSet::*)() >(&TNaming_IteratorOnShapesSet::Next),
             R"#(Move to the next Item)#" )
        .def("Value",
             (const TopoDS_Shape & (TNaming_IteratorOnShapesSet::*)() const) static_cast<const TopoDS_Shape & (TNaming_IteratorOnShapesSet::*)() const>(&TNaming_IteratorOnShapesSet::Value),
             R"#(None)#" )
        .def("Init",
             (void (TNaming_IteratorOnShapesSet::*)( const TNaming_ShapesSet & ) ) static_cast<void (TNaming_IteratorOnShapesSet::*)( const TNaming_ShapesSet & ) >(&TNaming_IteratorOnShapesSet::Init),
             R"#(Initialize the iteration)#"  , py::arg("S"))
        .def("More",
             (Standard_Boolean (TNaming_IteratorOnShapesSet::*)() const) static_cast<Standard_Boolean (TNaming_IteratorOnShapesSet::*)() const>(&TNaming_IteratorOnShapesSet::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
        .def("Next",
             (void (TNaming_IteratorOnShapesSet::*)() ) static_cast<void (TNaming_IteratorOnShapesSet::*)() >(&TNaming_IteratorOnShapesSet::Next),
             R"#(Move to the next Item)#" )
        .def("Value",
             (const TopoDS_Shape & (TNaming_IteratorOnShapesSet::*)() const) static_cast<const TopoDS_Shape & (TNaming_IteratorOnShapesSet::*)() const>(&TNaming_IteratorOnShapesSet::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Localizer , shared_ptr<TNaming_Localizer> >>(m.attr("TNaming_Localizer"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Name , shared_ptr<TNaming_Name> >>(m.attr("TNaming_Name"))
    // constructors
    // custom constructors
    // methods
        .def("Orientation",
             (TopAbs_Orientation (TNaming_Name::*)() const) static_cast<TopAbs_Orientation (TNaming_Name::*)() const>(&TNaming_Name::Orientation),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_NamedShape ,opencascade::handle<TNaming_NamedShape> , TDF_Attribute>>(m.attr("TNaming_NamedShape"))
    // constructors
    // custom constructors
    // methods
        .def("Evolution",
             (TNaming_Evolution (TNaming_NamedShape::*)() const) static_cast<TNaming_Evolution (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::Evolution),
             R"#(Returns the Evolution of the attribute.)#" )
        .def("Version",
             (Standard_Integer (TNaming_NamedShape::*)() const) static_cast<Standard_Integer (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::Version),
             R"#(Returns the Version of the attribute.)#" )
        .def("SetVersion",
             (void (TNaming_NamedShape::*)( const Standard_Integer ) ) static_cast<void (TNaming_NamedShape::*)( const Standard_Integer ) >(&TNaming_NamedShape::SetVersion),
             R"#(Set the Version of the attribute.)#"  , py::arg("version"))
        .def("ID",
             (const Standard_GUID & (TNaming_NamedShape::*)() const) static_cast<const Standard_GUID & (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::ID),
             R"#(Returns the ID of the attribute.)#" )
        .def("BackupCopy",
             (opencascade::handle<TDF_Attribute> (TNaming_NamedShape::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::BackupCopy),
             R"#(Copies the attribute contents into a new other attribute. It is used by Backup().)#" )
        .def("Restore",
             (void (TNaming_NamedShape::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TNaming_NamedShape::*)( const opencascade::handle<TDF_Attribute> & ) >(&TNaming_NamedShape::Restore),
             R"#(Restores the contents from <anAttribute> into this one. It is used when aborting a transaction.)#"  , py::arg("anAttribute"))
        .def("DeltaOnModification",
             (opencascade::handle<TDF_DeltaOnModification> (TNaming_NamedShape::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<opencascade::handle<TDF_DeltaOnModification> (TNaming_NamedShape::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TNaming_NamedShape::DeltaOnModification),
             R"#(Makes a DeltaOnModification between <me> and <anOldAttribute.)#"  , py::arg("anOldAttribute"))
        .def("DeltaOnModification",
             (void (TNaming_NamedShape::*)( const opencascade::handle<TDF_DeltaOnModification> & ) ) static_cast<void (TNaming_NamedShape::*)( const opencascade::handle<TDF_DeltaOnModification> & ) >(&TNaming_NamedShape::DeltaOnModification),
             R"#(Applies a DeltaOnModification to <me>.)#"  , py::arg("aDelta"))
        .def("DeltaOnRemoval",
             (opencascade::handle<TDF_DeltaOnRemoval> (TNaming_NamedShape::*)() const) static_cast<opencascade::handle<TDF_DeltaOnRemoval> (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::DeltaOnRemoval),
             R"#(Makes a DeltaOnRemoval on <me> because <me> has disappeared from the DS.)#" )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TNaming_NamedShape::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::NewEmpty),
             R"#(Returns an new empty attribute from the good end type. It is used by the copy algorithm.)#" )
        .def("Paste",
             (void (TNaming_NamedShape::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TNaming_NamedShape::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TNaming_NamedShape::Paste),
             R"#(This method is different from the "Copy" one, because it is used when copying an attribute from a source structure into a target structure. This method pastes the current attribute to the label corresponding to the insertor. The pasted attribute may be a brand new one or a new version of the previous one.)#"  , py::arg("intoAttribute"),  py::arg("aRelocTationable"))
        .def("References",
             (void (TNaming_NamedShape::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TNaming_NamedShape::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TNaming_NamedShape::References),
             R"#(Adds the directly referenced attributes and labels to <aDataSet>. "Directly" means we have only to look at the first level of references.)#"  , py::arg("aDataSet"))
        .def("BeforeRemoval",
             (void (TNaming_NamedShape::*)() ) static_cast<void (TNaming_NamedShape::*)() >(&TNaming_NamedShape::BeforeRemoval),
             R"#(None)#" )
        .def("BeforeUndo",
             (Standard_Boolean (TNaming_NamedShape::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TNaming_NamedShape::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TNaming_NamedShape::BeforeUndo),
             R"#(Something to do before applying <anAttDelta>)#"  , py::arg("anAttDelta"),  py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AfterUndo",
             (Standard_Boolean (TNaming_NamedShape::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TNaming_NamedShape::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TNaming_NamedShape::AfterUndo),
             R"#(Something to do after applying <anAttDelta>.)#"  , py::arg("anAttDelta"),  py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Dump",
             (Standard_OStream & (TNaming_NamedShape::*)( std::ostream & ) const) static_cast<Standard_OStream & (TNaming_NamedShape::*)( std::ostream & ) const>(&TNaming_NamedShape::Dump),
             R"#(Dumps the attribute on <aStream>.)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TNaming_NamedShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::DynamicType),
             R"#(None)#" )
        .def("ID",
             (const Standard_GUID & (TNaming_NamedShape::*)() const) static_cast<const Standard_GUID & (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::ID),
             R"#(Returns the ID of the attribute.)#" )
        .def("Evolution",
             (TNaming_Evolution (TNaming_NamedShape::*)() const) static_cast<TNaming_Evolution (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::Evolution),
             R"#(Returns the Evolution of the attribute.)#" )
        .def("Version",
             (Standard_Integer (TNaming_NamedShape::*)() const) static_cast<Standard_Integer (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::Version),
             R"#(Returns the Version of the attribute.)#" )
        .def("SetVersion",
             (void (TNaming_NamedShape::*)( const Standard_Integer ) ) static_cast<void (TNaming_NamedShape::*)( const Standard_Integer ) >(&TNaming_NamedShape::SetVersion),
             R"#(Set the Version of the attribute.)#"  , py::arg("v"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TNaming_NamedShape::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Naming ,opencascade::handle<TNaming_Naming> , TDF_Attribute>>(m.attr("TNaming_Naming"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TNaming_Naming::*)() const) static_cast<const Standard_GUID & (TNaming_Naming::*)() const>(&TNaming_Naming::ID),
             R"#(Deferred methods from TDF_Attribute ===================================)#" )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TNaming_Naming::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TNaming_Naming::*)() const>(&TNaming_Naming::NewEmpty),
             R"#(None)#" )
        .def("Restore",
             (void (TNaming_Naming::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TNaming_Naming::*)( const opencascade::handle<TDF_Attribute> & ) >(&TNaming_Naming::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("Paste",
             (void (TNaming_Naming::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TNaming_Naming::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TNaming_Naming::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("References",
             (void (TNaming_Naming::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TNaming_Naming::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TNaming_Naming::References),
             R"#(None)#"  , py::arg("aDataSet"))
        .def("Dump",
             (Standard_OStream & (TNaming_Naming::*)( std::ostream & ) const) static_cast<Standard_OStream & (TNaming_Naming::*)( std::ostream & ) const>(&TNaming_Naming::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("ExtendedDump",
             (void (TNaming_Naming::*)( std::ostream & , const TDF_IDFilter & , NCollection_IndexedMap<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) const) static_cast<void (TNaming_Naming::*)( std::ostream & , const TDF_IDFilter & , NCollection_IndexedMap<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) const>(&TNaming_Naming::ExtendedDump),
             R"#(None)#"  , py::arg("anOS"),  py::arg("aFilter"),  py::arg("aMap"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TNaming_Naming::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TNaming_Naming::*)() const>(&TNaming_Naming::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TNaming_Naming::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TNaming_NamingTool , shared_ptr<TNaming_NamingTool>>(m,"TNaming_NamingTool");

    static_cast<py::class_<TNaming_NamingTool , shared_ptr<TNaming_NamingTool> >>(m.attr("TNaming_NamingTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_NewShapeIterator , shared_ptr<TNaming_NewShapeIterator> >>(m.attr("TNaming_NewShapeIterator"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TNaming_NewShapeIterator::*)() const) static_cast<Standard_Boolean (TNaming_NewShapeIterator::*)() const>(&TNaming_NewShapeIterator::More),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (TNaming_NewShapeIterator::*)() const) static_cast<Standard_Boolean (TNaming_NewShapeIterator::*)() const>(&TNaming_NewShapeIterator::More),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_OldShapeIterator , shared_ptr<TNaming_OldShapeIterator> >>(m.attr("TNaming_OldShapeIterator"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TNaming_OldShapeIterator::*)() const) static_cast<Standard_Boolean (TNaming_OldShapeIterator::*)() const>(&TNaming_OldShapeIterator::More),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (TNaming_OldShapeIterator::*)() const) static_cast<Standard_Boolean (TNaming_OldShapeIterator::*)() const>(&TNaming_OldShapeIterator::More),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_RefShape , shared_ptr<TNaming_RefShape> >>(m.attr("TNaming_RefShape"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Shape",
             (void (TNaming_RefShape::*)( const TopoDS_Shape & ) ) static_cast<void (TNaming_RefShape::*)( const TopoDS_Shape & ) >(&TNaming_RefShape::Shape),
             R"#(None)#"  , py::arg("S"))
        .def("Shape",
             (const TopoDS_Shape & (TNaming_RefShape::*)() const) static_cast<const TopoDS_Shape & (TNaming_RefShape::*)() const>(&TNaming_RefShape::Shape),
             R"#(None)#" )
        .def("Shape",
             (void (TNaming_RefShape::*)( const TopoDS_Shape & ) ) static_cast<void (TNaming_RefShape::*)( const TopoDS_Shape & ) >(&TNaming_RefShape::Shape),
             R"#(None)#"  , py::arg("S"))
        .def("Shape",
             (const TopoDS_Shape & (TNaming_RefShape::*)() const) static_cast<const TopoDS_Shape & (TNaming_RefShape::*)() const>(&TNaming_RefShape::Shape),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_SameShapeIterator , shared_ptr<TNaming_SameShapeIterator> >>(m.attr("TNaming_SameShapeIterator"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TNaming_SameShapeIterator::*)() const) static_cast<Standard_Boolean (TNaming_SameShapeIterator::*)() const>(&TNaming_SameShapeIterator::More),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (TNaming_SameShapeIterator::*)() const) static_cast<Standard_Boolean (TNaming_SameShapeIterator::*)() const>(&TNaming_SameShapeIterator::More),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Scope , shared_ptr<TNaming_Scope> >>(m.attr("TNaming_Scope"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Selector , shared_ptr<TNaming_Selector> >>(m.attr("TNaming_Selector"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_ShapesSet , shared_ptr<TNaming_ShapesSet> >>(m.attr("TNaming_ShapesSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (TNaming_ShapesSet::*)() ) static_cast<void (TNaming_ShapesSet::*)() >(&TNaming_ShapesSet::Clear),
             R"#(Removes all Shapes)#" )
        .def("Add",
             (Standard_Boolean (TNaming_ShapesSet::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (TNaming_ShapesSet::*)( const TopoDS_Shape & ) >(&TNaming_ShapesSet::Add),
             R"#(Adds the Shape <S>)#"  , py::arg("S"))
        .def("Contains",
             (Standard_Boolean (TNaming_ShapesSet::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (TNaming_ShapesSet::*)( const TopoDS_Shape & ) const>(&TNaming_ShapesSet::Contains),
             R"#(Returns True if <S> is in <me>)#"  , py::arg("S"))
        .def("Remove",
             (Standard_Boolean (TNaming_ShapesSet::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (TNaming_ShapesSet::*)( const TopoDS_Shape & ) >(&TNaming_ShapesSet::Remove),
             R"#(Removes <S> in <me>.)#"  , py::arg("S"))
        .def("IsEmpty",
             (Standard_Boolean (TNaming_ShapesSet::*)() const) static_cast<Standard_Boolean (TNaming_ShapesSet::*)() const>(&TNaming_ShapesSet::IsEmpty),
             R"#(None)#" )
        .def("NbShapes",
             (Standard_Integer (TNaming_ShapesSet::*)() const) static_cast<Standard_Integer (TNaming_ShapesSet::*)() const>(&TNaming_ShapesSet::NbShapes),
             R"#(None)#" )
        .def("ChangeMap",
             (TopTools_MapOfShape & (TNaming_ShapesSet::*)() ) static_cast<TopTools_MapOfShape & (TNaming_ShapesSet::*)() >(&TNaming_ShapesSet::ChangeMap),
             R"#(None)#" )
        .def("Map",
             (const TopTools_MapOfShape & (TNaming_ShapesSet::*)() const) static_cast<const TopTools_MapOfShape & (TNaming_ShapesSet::*)() const>(&TNaming_ShapesSet::Map),
             R"#(None)#" )
        .def("Clear",
             (void (TNaming_ShapesSet::*)() ) static_cast<void (TNaming_ShapesSet::*)() >(&TNaming_ShapesSet::Clear),
             R"#(Removes all Shapes)#" )
        .def("Add",
             (Standard_Boolean (TNaming_ShapesSet::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (TNaming_ShapesSet::*)( const TopoDS_Shape & ) >(&TNaming_ShapesSet::Add),
             R"#(Adds the Shape <S>)#"  , py::arg("S"))
        .def("Contains",
             (Standard_Boolean (TNaming_ShapesSet::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (TNaming_ShapesSet::*)( const TopoDS_Shape & ) const>(&TNaming_ShapesSet::Contains),
             R"#(Returns True if <S> is in <me>)#"  , py::arg("S"))
        .def("Remove",
             (Standard_Boolean (TNaming_ShapesSet::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (TNaming_ShapesSet::*)( const TopoDS_Shape & ) >(&TNaming_ShapesSet::Remove),
             R"#(Removes <S> in <me>.)#"  , py::arg("S"))
        .def("IsEmpty",
             (Standard_Boolean (TNaming_ShapesSet::*)() const) static_cast<Standard_Boolean (TNaming_ShapesSet::*)() const>(&TNaming_ShapesSet::IsEmpty),
             R"#(None)#" )
        .def("NbShapes",
             (Standard_Integer (TNaming_ShapesSet::*)() const) static_cast<Standard_Integer (TNaming_ShapesSet::*)() const>(&TNaming_ShapesSet::NbShapes),
             R"#(None)#" )
        .def("ChangeMap",
             (TopTools_MapOfShape & (TNaming_ShapesSet::*)() ) static_cast<TopTools_MapOfShape & (TNaming_ShapesSet::*)() >(&TNaming_ShapesSet::ChangeMap),
             R"#(None)#" )
        .def("Map",
             (const TopTools_MapOfShape & (TNaming_ShapesSet::*)() const) static_cast<const TopTools_MapOfShape & (TNaming_ShapesSet::*)() const>(&TNaming_ShapesSet::Map),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TNaming_Tool , shared_ptr<TNaming_Tool>>(m,"TNaming_Tool");

    static_cast<py::class_<TNaming_Tool , shared_ptr<TNaming_Tool> >>(m.attr("TNaming_Tool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TNaming_TranslateTool ,opencascade::handle<TNaming_TranslateTool>>(m,"TNaming_TranslateTool");

    static_cast<py::class_<TNaming_TranslateTool ,opencascade::handle<TNaming_TranslateTool> , Standard_Transient>>(m.attr("TNaming_TranslateTool"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TNaming_TranslateTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TNaming_TranslateTool::*)() const>(&TNaming_TranslateTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TNaming_TranslateTool::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Translator , shared_ptr<TNaming_Translator> >>(m.attr("TNaming_Translator"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_UsedShapes ,opencascade::handle<TNaming_UsedShapes> , TDF_Attribute>>(m.attr("TNaming_UsedShapes"))
    // constructors
    // custom constructors
    // methods
        .def("Map",
             (TNaming_DataMapOfShapePtrRefShape & (TNaming_UsedShapes::*)() ) static_cast<TNaming_DataMapOfShapePtrRefShape & (TNaming_UsedShapes::*)() >(&TNaming_UsedShapes::Map),
             R"#(None)#" )
        .def("ID",
             (const Standard_GUID & (TNaming_UsedShapes::*)() const) static_cast<const Standard_GUID & (TNaming_UsedShapes::*)() const>(&TNaming_UsedShapes::ID),
             R"#(Returns the ID of the attribute.)#" )
        .def("BackupCopy",
             (opencascade::handle<TDF_Attribute> (TNaming_UsedShapes::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TNaming_UsedShapes::*)() const>(&TNaming_UsedShapes::BackupCopy),
             R"#(Copies the attribute contents into a new other attribute. It is used by Backup().)#" )
        .def("Restore",
             (void (TNaming_UsedShapes::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TNaming_UsedShapes::*)( const opencascade::handle<TDF_Attribute> & ) >(&TNaming_UsedShapes::Restore),
             R"#(Restores the contents from <anAttribute> into this one. It is used when aborting a transaction.)#"  , py::arg("anAttribute"))
        .def("BeforeRemoval",
             (void (TNaming_UsedShapes::*)() ) static_cast<void (TNaming_UsedShapes::*)() >(&TNaming_UsedShapes::BeforeRemoval),
             R"#(Clears the table.)#" )
        .def("AfterUndo",
             (Standard_Boolean (TNaming_UsedShapes::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TNaming_UsedShapes::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TNaming_UsedShapes::AfterUndo),
             R"#(Something to do after applying <anAttDelta>.)#"  , py::arg("anAttDelta"),  py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("DeltaOnAddition",
             (opencascade::handle<TDF_DeltaOnAddition> (TNaming_UsedShapes::*)() const) static_cast<opencascade::handle<TDF_DeltaOnAddition> (TNaming_UsedShapes::*)() const>(&TNaming_UsedShapes::DeltaOnAddition),
             R"#(this method returns a null handle (no delta).)#" )
        .def("DeltaOnRemoval",
             (opencascade::handle<TDF_DeltaOnRemoval> (TNaming_UsedShapes::*)() const) static_cast<opencascade::handle<TDF_DeltaOnRemoval> (TNaming_UsedShapes::*)() const>(&TNaming_UsedShapes::DeltaOnRemoval),
             R"#(this method returns a null handle (no delta).)#" )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TNaming_UsedShapes::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TNaming_UsedShapes::*)() const>(&TNaming_UsedShapes::NewEmpty),
             R"#(Returns an new empty attribute from the good end type. It is used by the copy algorithm.)#" )
        .def("Paste",
             (void (TNaming_UsedShapes::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TNaming_UsedShapes::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TNaming_UsedShapes::Paste),
             R"#(This method is different from the "Copy" one, because it is used when copying an attribute from a source structure into a target structure. This method pastes the current attribute to the label corresponding to the insertor. The pasted attribute may be a brand new one or a new version of the previous one.)#"  , py::arg("intoAttribute"),  py::arg("aRelocTationable"))
        .def("References",
             (void (TNaming_UsedShapes::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TNaming_UsedShapes::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TNaming_UsedShapes::References),
             R"#(Adds the directly referenced attributes and labels to <aDataSet>. "Directly" means we have only to look at the first level of references.)#"  , py::arg("aDataSet"))
        .def("Dump",
             (Standard_OStream & (TNaming_UsedShapes::*)( std::ostream & ) const) static_cast<Standard_OStream & (TNaming_UsedShapes::*)( std::ostream & ) const>(&TNaming_UsedShapes::Dump),
             R"#(Dumps the attribute on <aStream>.)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TNaming_UsedShapes::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TNaming_UsedShapes::*)() const>(&TNaming_UsedShapes::DynamicType),
             R"#(None)#" )
        .def("Map",
             (TNaming_DataMapOfShapePtrRefShape & (TNaming_UsedShapes::*)() ) static_cast<TNaming_DataMapOfShapePtrRefShape & (TNaming_UsedShapes::*)() >(&TNaming_UsedShapes::Map),
             R"#(None)#" )
        .def("ID",
             (const Standard_GUID & (TNaming_UsedShapes::*)() const) static_cast<const Standard_GUID & (TNaming_UsedShapes::*)() const>(&TNaming_UsedShapes::ID),
             R"#(Returns the ID of the attribute.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TNaming_UsedShapes::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TNaming_TranslateTool.hxx
// ./opencascade/TNaming_DeltaOnModification.hxx
// ./opencascade/TNaming_OldShapeIterator.hxx
// ./opencascade/TNaming_Tool.hxx
// ./opencascade/TNaming_DataMapIteratorOfDataMapOfShapeShapesSet.hxx
// ./opencascade/TNaming_Scope.hxx
// ./opencascade/TNaming_ListOfNamedShape.hxx
// ./opencascade/TNaming_Evolution.hxx
// ./opencascade/TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape.hxx
// ./opencascade/TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape.hxx
// ./opencascade/TNaming_ListOfMapOfShape.hxx
// ./opencascade/TNaming_DeltaOnRemoval.hxx
// ./opencascade/TNaming_Naming.hxx
// ./opencascade/TNaming_NCollections.hxx
// ./opencascade/TNaming_NameType.hxx
// ./opencascade/TNaming_UsedShapes.hxx
// ./opencascade/TNaming_Identifier.hxx
// ./opencascade/TNaming_ListOfIndexedDataMapOfShapeListOfShape.hxx
// ./opencascade/TNaming_PtrAttribute.hxx
// ./opencascade/TNaming_Builder.hxx
// ./opencascade/TNaming_PtrNode.hxx
// ./opencascade/TNaming_IteratorOnShapesSet.hxx
// ./opencascade/TNaming_PtrRefShape.hxx
// ./opencascade/TNaming_ListIteratorOfListOfNamedShape.hxx
// ./opencascade/TNaming_Translator.hxx
// ./opencascade/TNaming_Selector.hxx
// ./opencascade/TNaming_NamingTool.hxx
// ./opencascade/TNaming_Name.hxx
// ./opencascade/TNaming_CopyShape.hxx
// ./opencascade/TNaming_DataMapOfShapeShapesSet.hxx
// ./opencascade/TNaming_ListIteratorOfListOfMapOfShape.hxx
// ./opencascade/TNaming_Iterator.hxx
// ./opencascade/TNaming_NamedShape.hxx
// ./opencascade/TNaming_RefShape.hxx
// ./opencascade/TNaming_MapOfNamedShape.hxx
// ./opencascade/TNaming_SameShapeIterator.hxx
// ./opencascade/TNaming_Localizer.hxx
// ./opencascade/TNaming_MapIteratorOfMapOfNamedShape.hxx
// ./opencascade/TNaming_NamedShapeHasher.hxx
// ./opencascade/TNaming_DataMapOfShapePtrRefShape.hxx
// ./opencascade/TNaming_NewShapeIterator.hxx
// ./opencascade/TNaming_ShapesSet.hxx
// ./opencascade/TNaming.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<TNaming_NamedShape> >(m,"TNaming_ListOfNamedShape");
    register_template_NCollection_List<TopTools_MapOfShape>(m,"TNaming_ListOfMapOfShape");
    register_template_NCollection_List<TopTools_IndexedDataMapOfShapeListOfShape>(m,"TNaming_ListOfIndexedDataMapOfShapeListOfShape");
    register_template_NCollection_DataMap<TopoDS_Shape, TNaming_ShapesSet, TopTools_ShapeMapHasher>(m,"TNaming_DataMapOfShapeShapesSet");
    register_template_NCollection_Map<opencascade::handle<TNaming_NamedShape>, TNaming_NamedShapeHasher>(m,"TNaming_MapOfNamedShape");
    register_template_NCollection_DefaultHasher<opencascade::handle<TNaming_NamedShape> >(m,"TNaming_NamedShapeHasher");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

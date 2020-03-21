
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
#include <TNaming_DeltaOnModification.hxx>
#include <TNaming_NamedShape.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TNaming_NewShapeIterator.hxx>
#include <TNaming_OldShapeIterator.hxx>
#include <TNaming_NamedShape.hxx>
#include <TDF_Label.hxx>
#include <TopoDS_Shape.hxx>
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
#include <TNaming_RefShape.hxx>
#include <TNaming_Localizer.hxx>
#include <TDF_Label.hxx>
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
#include <TopoDS_Shape.hxx>
#include <TNaming_NamedShape.hxx>
#include <TNaming_Localizer.hxx>
#include <TNaming_OldShapeIterator.hxx>
#include <TNaming_UsedShapes.hxx>
#include <TDF_RelocationTable.hxx>
#include <TopoDS_Shape.hxx>
#include <TNaming_TranslateTool.hxx>
#include <TopLoc_Location.hxx>
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
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TNaming_Tool.hxx>
#include <TopoDS_Shape.hxx>
#include <TNaming_UsedShapes.hxx>
#include <TDF_Label.hxx>
#include <Standard_NoMoreObject.hxx>
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
#include <TNaming_UsedShapes.hxx>
#include <TNaming_NamedShape.hxx>
#include <Standard_ConstructionError.hxx>
#include <TDF_Label.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Shape.hxx>
#include <TNaming_NamedShape.hxx>
#include <TNaming_UsedShapes.hxx>
#include <TDF_Label.hxx>

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
// ./opencascade/TNaming_MapOfNamedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_MapOfNamedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_DataMapOfShapePtrRefShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_ListOfMapOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_ListOfMapOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_NamedShapeHasher.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_ListOfNamedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_ListOfNamedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_DataMapOfShapeShapesSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_DataMapOfShapeShapesSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_ListOfIndexedDataMapOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TNaming_ListOfIndexedDataMapOfShapeListOfShape.hxx
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
        .def_static("Substitute_s",
                    (void (*)( const TDF_Label & , const TDF_Label & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (*)( const TDF_Label & , const TDF_Label & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&TNaming::Substitute),
                    R"#(Subtituter les shapes sur les structures de source vers cible)#"  , py::arg("labelsource"),  py::arg("labelcible"),  py::arg("mapOldNew"))
        .def_static("Update_s",
                    (void (*)( const TDF_Label & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (*)( const TDF_Label & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&TNaming::Update),
                    R"#(Mise a jour des shapes du label et de ses fils en tenant compte des substitutions decrite par mapOldNew.)#"  , py::arg("label"),  py::arg("mapOldNew"))
        .def_static("Displace_s",
                    (void (*)( const TDF_Label & , const TopLoc_Location & , const Standard_Boolean ) ) static_cast<void (*)( const TDF_Label & , const TopLoc_Location & , const Standard_Boolean ) >(&TNaming::Displace),
                    R"#(Application de la Location sur les shapes du label et de ses sous labels.)#"  , py::arg("label"),  py::arg("aLocation"),  py::arg("WithOld")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("ChangeShapes_s",
                    (void (*)( const TDF_Label & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (*)( const TDF_Label & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&TNaming::ChangeShapes),
                    R"#(Remplace les shapes du label et des sous-labels par des copies.)#"  , py::arg("label"),  py::arg("M"))
        .def_static("Transform_s",
                    (void (*)( const TDF_Label & , const gp_Trsf & ) ) static_cast<void (*)( const TDF_Label & , const gp_Trsf & ) >(&TNaming::Transform),
                    R"#(Application de la transformation sur les shapes du label et de ses sous labels. Warning: le remplacement du shape est fait dans tous les attributs qui le contiennent meme si ceux ci ne sont pas associees a des sous-labels de <Label>.)#"  , py::arg("label"),  py::arg("aTransformation"))
        .def_static("Replicate_s",
                    (void (*)( const opencascade::handle<TNaming_NamedShape> & , const gp_Trsf & , const TDF_Label & ) ) static_cast<void (*)( const opencascade::handle<TNaming_NamedShape> & , const gp_Trsf & , const TDF_Label & ) >(&TNaming::Replicate),
                    R"#(Replicates the named shape with the transformation <T> on the label <L> (and sub-labels if necessary) (TNaming_GENERATED is set))#"  , py::arg("NS"),  py::arg("T"),  py::arg("L"))
        .def_static("Replicate_s",
                    (void (*)( const TopoDS_Shape & , const gp_Trsf & , const TDF_Label & ) ) static_cast<void (*)( const TopoDS_Shape & , const gp_Trsf & , const TDF_Label & ) >(&TNaming::Replicate),
                    R"#(Replicates the shape with the transformation <T> on the label <L> (and sub-labels if necessary) (TNaming_GENERATED is set))#"  , py::arg("SH"),  py::arg("T"),  py::arg("L"))
        .def_static("MakeShape_s",
                    (TopoDS_Shape (*)(  const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<TopoDS_Shape (*)(  const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&TNaming::MakeShape),
                    R"#(Builds shape from map content)#"  , py::arg("MS"))
        .def_static("FindUniqueContext_s",
                    (TopoDS_Shape (*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TNaming::FindUniqueContext),
                    R"#(Find unique context of shape <S>)#"  , py::arg("S"),  py::arg("Context"))
        .def_static("FindUniqueContextSet_s",
                    (TopoDS_Shape (*)( const TopoDS_Shape & , const TopoDS_Shape & , opencascade::handle<TopTools_HArray1OfShape> & ) ) static_cast<TopoDS_Shape (*)( const TopoDS_Shape & , const TopoDS_Shape & , opencascade::handle<TopTools_HArray1OfShape> & ) >(&TNaming::FindUniqueContextSet),
                    R"#(Find unique context of shape <S>,which is pure concatenation of atomic shapes (Compound). The result is concatenation of single contexts)#"  , py::arg("S"),  py::arg("Context"),  py::arg("Arr"))
        .def_static("SubstituteSShape_s",
                    (Standard_Boolean (*)( const TDF_Label & , const TopoDS_Shape & , TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , const TopoDS_Shape & , TopoDS_Shape & ) >(&TNaming::SubstituteSShape),
                    R"#(Subtitutes shape in source structure)#"  , py::arg("accesslabel"),  py::arg("From"),  py::arg("To"))
        .def_static("OuterWire_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , TopoDS_Wire & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , TopoDS_Wire & ) >(&TNaming::OuterWire),
                    R"#(Returns True if outer wire is found and the found wire in <theWire>.)#"  , py::arg("theFace"),  py::arg("theWire"))
        .def_static("OuterShell_s",
                    (Standard_Boolean (*)( const TopoDS_Solid & , TopoDS_Shell & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Solid & , TopoDS_Shell & ) >(&TNaming::OuterShell),
                    R"#(Returns True if outer Shell is found and the found shell in <theShell>. Print of TNaming enumeration =============================)#"  , py::arg("theSolid"),  py::arg("theShell"))
        .def_static("IDList_s",
                    (void (*)( NCollection_List<Standard_GUID> & ) ) static_cast<void (*)( NCollection_List<Standard_GUID> & ) >(&TNaming::IDList),
                    R"#(Appends to <anIDList> the list of the attributes IDs of this package. CAUTION: <anIDList> is NOT cleared before use.)#"  , py::arg("anIDList"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TNaming_Evolution , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TNaming_Evolution , std::ostream & ) >(&TNaming::Print),
                    R"#(Prints the evolution <EVOL> as a String on the Stream <S> and returns <S>.)#"  , py::arg("EVOL"),  py::arg("S"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TNaming_NameType , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TNaming_NameType , std::ostream & ) >(&TNaming::Print),
                    R"#(Prints the name of name type <NAME> as a String on the Stream <S> and returns <S>.)#"  , py::arg("NAME"),  py::arg("S"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TDF_Label & , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TDF_Label & , std::ostream & ) >(&TNaming::Print),
                    R"#(Prints the content of UsedShapes private attribute as a String Table on the Stream <S> and returns <S>.)#"  , py::arg("ACCESS"),  py::arg("S"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Builder , shared_ptr<TNaming_Builder> >>(m.attr("TNaming_Builder"))
    // constructors
        .def(py::init< const TDF_Label & >()  , py::arg("aLabel") )
    // custom constructors
    // methods
        .def("Generated",
             (void (TNaming_Builder::*)( const TopoDS_Shape & ) ) static_cast<void (TNaming_Builder::*)( const TopoDS_Shape & ) >(&TNaming_Builder::Generated),
             R"#(Records the shape newShape which was generated during a topological construction. As an example, consider the case of a face generated in construction of a box.)#"  , py::arg("newShape"))
        .def("Generated",
             (void (TNaming_Builder::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TNaming_Builder::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TNaming_Builder::Generated),
             R"#(Records the shape newShape which was generated from the shape oldShape during a topological construction. As an example, consider the case of a face generated from an edge in construction of a prism.)#"  , py::arg("oldShape"),  py::arg("newShape"))
        .def("Delete",
             (void (TNaming_Builder::*)( const TopoDS_Shape & ) ) static_cast<void (TNaming_Builder::*)( const TopoDS_Shape & ) >(&TNaming_Builder::Delete),
             R"#(Records the shape oldShape which was deleted from the current label. As an example, consider the case of a face removed by a Boolean operation.)#"  , py::arg("oldShape"))
        .def("Modify",
             (void (TNaming_Builder::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TNaming_Builder::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TNaming_Builder::Modify),
             R"#(Records the shape newShape which is a modification of the shape oldShape. As an example, consider the case of a face split or merged in a Boolean operation.)#"  , py::arg("oldShape"),  py::arg("newShape"))
        .def("Select",
             (void (TNaming_Builder::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TNaming_Builder::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TNaming_Builder::Select),
             R"#(Add a Shape to the current label , This Shape is unmodified. Used for example to define a set of shapes under a label.)#"  , py::arg("aShape"),  py::arg("inShape"))
        .def("NamedShape",
             (opencascade::handle<TNaming_NamedShape> (TNaming_Builder::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TNaming_Builder::*)() const>(&TNaming_Builder::NamedShape),
             R"#(Returns the NamedShape which has been built or is under construction.)#" )
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
        .def_static("CopyTool_s",
                    (void (*)( const TopoDS_Shape & , NCollection_IndexedDataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> & , TopoDS_Shape & ) ) static_cast<void (*)( const TopoDS_Shape & , NCollection_IndexedDataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> & , TopoDS_Shape & ) >(&TNaming_CopyShape::CopyTool),
                    R"#(Makes copy a set of shape(s), using the aMap)#"  , py::arg("aShape"),  py::arg("aMap"),  py::arg("aResult"))
        .def_static("Translate_s",
                    (void (*)( const TopoDS_Shape & , NCollection_IndexedDataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> & , TopoDS_Shape & , const opencascade::handle<TNaming_TranslateTool> & ) ) static_cast<void (*)( const TopoDS_Shape & , NCollection_IndexedDataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> & , TopoDS_Shape & , const opencascade::handle<TNaming_TranslateTool> & ) >(&TNaming_CopyShape::Translate),
                    R"#(Translates a Transient shape(s) to Transient)#"  , py::arg("aShape"),  py::arg("aMap"),  py::arg("aResult"),  py::arg("TrTool"))
        .def_static("Translate_s",
                    (TopLoc_Location (*)( const TopLoc_Location & , NCollection_IndexedDataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> & ) ) static_cast<TopLoc_Location (*)( const TopLoc_Location & , NCollection_IndexedDataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> & ) >(&TNaming_CopyShape::Translate),
                    R"#(Translates a Topological Location to an other Top. Location)#"  , py::arg("L"),  py::arg("aMap"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_DeltaOnModification ,opencascade::handle<TNaming_DeltaOnModification> , TDF_DeltaOnModification>>(m.attr("TNaming_DeltaOnModification"))
    // constructors
        .def(py::init< const opencascade::handle<TNaming_NamedShape> & >()  , py::arg("NS") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TNaming_DeltaOnModification::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_DeltaOnRemoval ,opencascade::handle<TNaming_DeltaOnRemoval> , TDF_DeltaOnRemoval>>(m.attr("TNaming_DeltaOnRemoval"))
    // constructors
        .def(py::init< const opencascade::handle<TNaming_NamedShape> & >()  , py::arg("NS") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TNaming_DeltaOnRemoval::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Identifier , shared_ptr<TNaming_Identifier> >>(m.attr("TNaming_Identifier"))
    // constructors
        .def(py::init< const TDF_Label &,const TopoDS_Shape &,const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("Lab"),  py::arg("S"),  py::arg("Context"),  py::arg("Geom") )
        .def(py::init< const TDF_Label &,const TopoDS_Shape &,const opencascade::handle<TNaming_NamedShape> &,const Standard_Boolean >()  , py::arg("Lab"),  py::arg("S"),  py::arg("ContextNS"),  py::arg("Geom") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (TNaming_Identifier::*)() const) static_cast<Standard_Boolean (TNaming_Identifier::*)() const>(&TNaming_Identifier::IsDone),
             R"#(None)#" )
        .def("Type",
             (TNaming_NameType (TNaming_Identifier::*)() const) static_cast<TNaming_NameType (TNaming_Identifier::*)() const>(&TNaming_Identifier::Type),
             R"#(None)#" )
        .def("IsFeature",
             (Standard_Boolean (TNaming_Identifier::*)() ) static_cast<Standard_Boolean (TNaming_Identifier::*)() >(&TNaming_Identifier::IsFeature),
             R"#(None)#" )
        .def("Feature",
             (opencascade::handle<TNaming_NamedShape> (TNaming_Identifier::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TNaming_Identifier::*)() const>(&TNaming_Identifier::Feature),
             R"#(None)#" )
        .def("InitArgs",
             (void (TNaming_Identifier::*)() ) static_cast<void (TNaming_Identifier::*)() >(&TNaming_Identifier::InitArgs),
             R"#(None)#" )
        .def("MoreArgs",
             (Standard_Boolean (TNaming_Identifier::*)() const) static_cast<Standard_Boolean (TNaming_Identifier::*)() const>(&TNaming_Identifier::MoreArgs),
             R"#(None)#" )
        .def("NextArg",
             (void (TNaming_Identifier::*)() ) static_cast<void (TNaming_Identifier::*)() >(&TNaming_Identifier::NextArg),
             R"#(None)#" )
        .def("ArgIsFeature",
             (Standard_Boolean (TNaming_Identifier::*)() const) static_cast<Standard_Boolean (TNaming_Identifier::*)() const>(&TNaming_Identifier::ArgIsFeature),
             R"#(None)#" )
        .def("FeatureArg",
             (opencascade::handle<TNaming_NamedShape> (TNaming_Identifier::*)() ) static_cast<opencascade::handle<TNaming_NamedShape> (TNaming_Identifier::*)() >(&TNaming_Identifier::FeatureArg),
             R"#(None)#" )
        .def("ShapeArg",
             (TopoDS_Shape (TNaming_Identifier::*)() ) static_cast<TopoDS_Shape (TNaming_Identifier::*)() >(&TNaming_Identifier::ShapeArg),
             R"#(None)#" )
        .def("ShapeContext",
             (TopoDS_Shape (TNaming_Identifier::*)() const) static_cast<TopoDS_Shape (TNaming_Identifier::*)() const>(&TNaming_Identifier::ShapeContext),
             R"#(None)#" )
        .def("NamedShapeOfGeneration",
             (opencascade::handle<TNaming_NamedShape> (TNaming_Identifier::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TNaming_Identifier::*)() const>(&TNaming_Identifier::NamedShapeOfGeneration),
             R"#(None)#" )
        .def("AncestorIdentification",
             (void (TNaming_Identifier::*)( TNaming_Localizer & , const TopoDS_Shape & ) ) static_cast<void (TNaming_Identifier::*)( TNaming_Localizer & , const TopoDS_Shape & ) >(&TNaming_Identifier::AncestorIdentification),
             R"#(None)#"  , py::arg("Localizer"),  py::arg("Context"))
        .def("PrimitiveIdentification",
             (void (TNaming_Identifier::*)( TNaming_Localizer & , const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TNaming_Identifier::*)( TNaming_Localizer & , const opencascade::handle<TNaming_NamedShape> & ) >(&TNaming_Identifier::PrimitiveIdentification),
             R"#(None)#"  , py::arg("Localizer"),  py::arg("NS"))
        .def("GeneratedIdentification",
             (void (TNaming_Identifier::*)( TNaming_Localizer & , const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TNaming_Identifier::*)( TNaming_Localizer & , const opencascade::handle<TNaming_NamedShape> & ) >(&TNaming_Identifier::GeneratedIdentification),
             R"#(None)#"  , py::arg("Localizer"),  py::arg("NS"))
        .def("Identification",
             (void (TNaming_Identifier::*)( TNaming_Localizer & , const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TNaming_Identifier::*)( TNaming_Localizer & , const opencascade::handle<TNaming_NamedShape> & ) >(&TNaming_Identifier::Identification),
             R"#(None)#"  , py::arg("Localizer"),  py::arg("NS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Iterator , shared_ptr<TNaming_Iterator> >>(m.attr("TNaming_Iterator"))
    // constructors
        .def(py::init< const opencascade::handle<TNaming_NamedShape> & >()  , py::arg("anAtt") )
        .def(py::init< const TDF_Label & >()  , py::arg("aLabel") )
        .def(py::init< const TDF_Label &,const Standard_Integer >()  , py::arg("aLabel"),  py::arg("aTrans") )
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TNaming_Iterator::*)() const) static_cast<Standard_Boolean (TNaming_Iterator::*)() const>(&TNaming_Iterator::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
        .def("Next",
             (void (TNaming_Iterator::*)() ) static_cast<void (TNaming_Iterator::*)() >(&TNaming_Iterator::Next),
             R"#(Moves the iteration to the next Item)#" )
        .def("OldShape",
             (const TopoDS_Shape & (TNaming_Iterator::*)() const) static_cast<const TopoDS_Shape & (TNaming_Iterator::*)() const>(&TNaming_Iterator::OldShape),
             R"#(Returns the old shape in this iterator object. This shape can be a null one.)#" )
        .def("NewShape",
             (const TopoDS_Shape & (TNaming_Iterator::*)() const) static_cast<const TopoDS_Shape & (TNaming_Iterator::*)() const>(&TNaming_Iterator::NewShape),
             R"#(Returns the new shape in this iterator object.)#" )
        .def("IsModification",
             (Standard_Boolean (TNaming_Iterator::*)() const) static_cast<Standard_Boolean (TNaming_Iterator::*)() const>(&TNaming_Iterator::IsModification),
             R"#(Returns true if the new shape is a modification (split, fuse,etc...) of the old shape.)#" )
        .def("Evolution",
             (TNaming_Evolution (TNaming_Iterator::*)() const) static_cast<TNaming_Evolution (TNaming_Iterator::*)() const>(&TNaming_Iterator::Evolution),
             R"#(None)#" )
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (TNaming_Localizer::*)( const opencascade::handle<TNaming_UsedShapes> & , const Standard_Integer ) ) static_cast<void (TNaming_Localizer::*)( const opencascade::handle<TNaming_UsedShapes> & , const Standard_Integer ) >(&TNaming_Localizer::Init),
             R"#(None)#"  , py::arg("US"),  py::arg("CurTrans"))
        .def("SubShapes",
             (const TopTools_MapOfShape & (TNaming_Localizer::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) ) static_cast<const TopTools_MapOfShape & (TNaming_Localizer::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) >(&TNaming_Localizer::SubShapes),
             R"#(None)#"  , py::arg("S"),  py::arg("Type"))
        .def("Ancestors",
             (const TopTools_IndexedDataMapOfShapeListOfShape & (TNaming_Localizer::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) ) static_cast<const TopTools_IndexedDataMapOfShapeListOfShape & (TNaming_Localizer::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) >(&TNaming_Localizer::Ancestors),
             R"#(None)#"  , py::arg("S"),  py::arg("Type"))
        .def("FindFeaturesInAncestors",
             (void (TNaming_Localizer::*)( const TopoDS_Shape & , const TopoDS_Shape & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (TNaming_Localizer::*)( const TopoDS_Shape & , const TopoDS_Shape & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&TNaming_Localizer::FindFeaturesInAncestors),
             R"#(None)#"  , py::arg("S"),  py::arg("In"),  py::arg("AncInFeatures"))
        .def("GoBack",
             (void (TNaming_Localizer::*)( const TopoDS_Shape & , const TDF_Label & , const TNaming_Evolution , NCollection_List<TopoDS_Shape> & , NCollection_List<opencascade::handle<TNaming_NamedShape> > & ) ) static_cast<void (TNaming_Localizer::*)( const TopoDS_Shape & , const TDF_Label & , const TNaming_Evolution , NCollection_List<TopoDS_Shape> & , NCollection_List<opencascade::handle<TNaming_NamedShape> > & ) >(&TNaming_Localizer::GoBack),
             R"#(None)#"  , py::arg("S"),  py::arg("Lab"),  py::arg("Evol"),  py::arg("OldS"),  py::arg("OldLab"))
        .def("Backward",
             (void (TNaming_Localizer::*)( const opencascade::handle<TNaming_NamedShape> & , const TopoDS_Shape & , NCollection_Map<opencascade::handle<TNaming_NamedShape>, TNaming_NamedShapeHasher> & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (TNaming_Localizer::*)( const opencascade::handle<TNaming_NamedShape> & , const TopoDS_Shape & , NCollection_Map<opencascade::handle<TNaming_NamedShape>, TNaming_NamedShapeHasher> & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&TNaming_Localizer::Backward),
             R"#(None)#"  , py::arg("NS"),  py::arg("S"),  py::arg("Primitives"),  py::arg("ValidShapes"))
        .def("FindNeighbourg",
             (void (TNaming_Localizer::*)( const TopoDS_Shape & , const TopoDS_Shape & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (TNaming_Localizer::*)( const TopoDS_Shape & , const TopoDS_Shape & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&TNaming_Localizer::FindNeighbourg),
             R"#(None)#"  , py::arg("Cont"),  py::arg("S"),  py::arg("Neighbourg"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsNew_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<TNaming_NamedShape> & ) >(&TNaming_Localizer::IsNew),
                    R"#(None)#"  , py::arg("S"),  py::arg("NS"))
        .def_static("FindGenerator_s",
                    (void (*)( const opencascade::handle<TNaming_NamedShape> & , const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) ) static_cast<void (*)( const opencascade::handle<TNaming_NamedShape> & , const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) >(&TNaming_Localizer::FindGenerator),
                    R"#(None)#"  , py::arg("NS"),  py::arg("S"),  py::arg("theListOfGenerators"))
        .def_static("FindShapeContext_s",
                    (void (*)( const opencascade::handle<TNaming_NamedShape> & , const TopoDS_Shape & , TopoDS_Shape & ) ) static_cast<void (*)( const opencascade::handle<TNaming_NamedShape> & , const TopoDS_Shape & , TopoDS_Shape & ) >(&TNaming_Localizer::FindShapeContext),
                    R"#(Finds context of the shape <S>.)#"  , py::arg("NS"),  py::arg("theS"),  py::arg("theSC"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Name , shared_ptr<TNaming_Name> >>(m.attr("TNaming_Name"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Type",
             (void (TNaming_Name::*)( const TNaming_NameType ) ) static_cast<void (TNaming_Name::*)( const TNaming_NameType ) >(&TNaming_Name::Type),
             R"#(None)#"  , py::arg("aType"))
        .def("ShapeType",
             (void (TNaming_Name::*)( const TopAbs_ShapeEnum ) ) static_cast<void (TNaming_Name::*)( const TopAbs_ShapeEnum ) >(&TNaming_Name::ShapeType),
             R"#(None)#"  , py::arg("aType"))
        .def("Shape",
             (void (TNaming_Name::*)( const TopoDS_Shape & ) ) static_cast<void (TNaming_Name::*)( const TopoDS_Shape & ) >(&TNaming_Name::Shape),
             R"#(None)#"  , py::arg("theShape"))
        .def("Append",
             (void (TNaming_Name::*)( const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TNaming_Name::*)( const opencascade::handle<TNaming_NamedShape> & ) >(&TNaming_Name::Append),
             R"#(None)#"  , py::arg("arg"))
        .def("StopNamedShape",
             (void (TNaming_Name::*)( const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TNaming_Name::*)( const opencascade::handle<TNaming_NamedShape> & ) >(&TNaming_Name::StopNamedShape),
             R"#(None)#"  , py::arg("arg"))
        .def("Index",
             (void (TNaming_Name::*)( const Standard_Integer ) ) static_cast<void (TNaming_Name::*)( const Standard_Integer ) >(&TNaming_Name::Index),
             R"#(None)#"  , py::arg("I"))
        .def("ContextLabel",
             (void (TNaming_Name::*)( const TDF_Label & ) ) static_cast<void (TNaming_Name::*)( const TDF_Label & ) >(&TNaming_Name::ContextLabel),
             R"#(None)#"  , py::arg("theLab"))
        .def("Orientation",
             (void (TNaming_Name::*)( const TopAbs_Orientation ) ) static_cast<void (TNaming_Name::*)( const TopAbs_Orientation ) >(&TNaming_Name::Orientation),
             R"#(None)#"  , py::arg("theOrientation"))
        .def("Type",
             (TNaming_NameType (TNaming_Name::*)() const) static_cast<TNaming_NameType (TNaming_Name::*)() const>(&TNaming_Name::Type),
             R"#(None)#" )
        .def("ShapeType",
             (TopAbs_ShapeEnum (TNaming_Name::*)() const) static_cast<TopAbs_ShapeEnum (TNaming_Name::*)() const>(&TNaming_Name::ShapeType),
             R"#(None)#" )
        .def("Shape",
             (TopoDS_Shape (TNaming_Name::*)() const) static_cast<TopoDS_Shape (TNaming_Name::*)() const>(&TNaming_Name::Shape),
             R"#(None)#" )
        .def("Arguments",
             (const TNaming_ListOfNamedShape & (TNaming_Name::*)() const) static_cast<const TNaming_ListOfNamedShape & (TNaming_Name::*)() const>(&TNaming_Name::Arguments),
             R"#(None)#" )
        .def("StopNamedShape",
             (opencascade::handle<TNaming_NamedShape> (TNaming_Name::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TNaming_Name::*)() const>(&TNaming_Name::StopNamedShape),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (TNaming_Name::*)() const) static_cast<Standard_Integer (TNaming_Name::*)() const>(&TNaming_Name::Index),
             R"#(None)#" )
        .def("ContextLabel",
             (const TDF_Label & (TNaming_Name::*)() const) static_cast<const TDF_Label & (TNaming_Name::*)() const>(&TNaming_Name::ContextLabel),
             R"#(None)#" )
        .def("Orientation",
             (TopAbs_Orientation (TNaming_Name::*)() const) static_cast<TopAbs_Orientation (TNaming_Name::*)() const>(&TNaming_Name::Orientation),
             R"#(None)#" )
        .def("Solve",
             (Standard_Boolean (TNaming_Name::*)( const TDF_Label & ,  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) const) static_cast<Standard_Boolean (TNaming_Name::*)( const TDF_Label & ,  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) const>(&TNaming_Name::Solve),
             R"#(None)#"  , py::arg("aLab"),  py::arg("Valid"))
        .def("Paste",
             (void (TNaming_Name::*)( TNaming_Name & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TNaming_Name::*)( TNaming_Name & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TNaming_Name::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_NamedShape ,opencascade::handle<TNaming_NamedShape> , TDF_Attribute>>(m.attr("TNaming_NamedShape"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsEmpty",
             (Standard_Boolean (TNaming_NamedShape::*)() const) static_cast<Standard_Boolean (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::IsEmpty),
             R"#(None)#" )
        .def("Get",
             (TopoDS_Shape (TNaming_NamedShape::*)() const) static_cast<TopoDS_Shape (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::Get),
             R"#(Returns the shapes contained in <NS>. Returns a null shape if IsEmpty.)#" )
        .def("Evolution",
             (TNaming_Evolution (TNaming_NamedShape::*)() const) static_cast<TNaming_Evolution (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::Evolution),
             R"#(Returns the Evolution of the attribute.)#" )
        .def("Version",
             (Standard_Integer (TNaming_NamedShape::*)() const) static_cast<Standard_Integer (TNaming_NamedShape::*)() const>(&TNaming_NamedShape::Version),
             R"#(Returns the Version of the attribute.)#" )
        .def("SetVersion",
             (void (TNaming_NamedShape::*)( const Standard_Integer ) ) static_cast<void (TNaming_NamedShape::*)( const Standard_Integer ) >(&TNaming_NamedShape::SetVersion),
             R"#(Set the Version of the attribute.)#"  , py::arg("version"))
        .def("Clear",
             (void (TNaming_NamedShape::*)() ) static_cast<void (TNaming_NamedShape::*)() >(&TNaming_NamedShape::Clear),
             R"#(None)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TNaming_NamedShape::GetID),
                    R"#(class method ============ Returns the GUID for named shapes.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TNaming_NamedShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TNaming_NamedShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Naming ,opencascade::handle<TNaming_Naming> , TDF_Attribute>>(m.attr("TNaming_Naming"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsDefined",
             (Standard_Boolean (TNaming_Naming::*)() const) static_cast<Standard_Boolean (TNaming_Naming::*)() const>(&TNaming_Naming::IsDefined),
             R"#(None)#" )
        .def("GetName",
             (const TNaming_Name & (TNaming_Naming::*)() const) static_cast<const TNaming_Name & (TNaming_Naming::*)() const>(&TNaming_Naming::GetName),
             R"#(None)#" )
        .def("ChangeName",
             (TNaming_Name & (TNaming_Naming::*)() ) static_cast<TNaming_Name & (TNaming_Naming::*)() >(&TNaming_Naming::ChangeName),
             R"#(None)#" )
        .def("Regenerate",
             (Standard_Boolean (TNaming_Naming::*)( NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) ) static_cast<Standard_Boolean (TNaming_Naming::*)( NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) >(&TNaming_Naming::Regenerate),
             R"#(regenerate only the Name associated to me)#"  , py::arg("scope"))
        .def("Solve",
             (Standard_Boolean (TNaming_Naming::*)( NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) ) static_cast<Standard_Boolean (TNaming_Naming::*)( NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) >(&TNaming_Naming::Solve),
             R"#(Regenerate recursively the whole name with scope. If scope is empty it means that all the labels of the framework are valid.)#"  , py::arg("scope"))
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TNaming_Naming::GetID),
                    R"#(following code from TDesignStd ==============================)#" )
        .def_static("Insert_s",
                    (opencascade::handle<TNaming_Naming> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TNaming_Naming> (*)( const TDF_Label & ) >(&TNaming_Naming::Insert),
                    R"#(None)#"  , py::arg("under"))
        .def_static("Name_s",
                    (opencascade::handle<TNaming_NamedShape> (*)( const TDF_Label & , const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<opencascade::handle<TNaming_NamedShape> (*)( const TDF_Label & , const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&TNaming_Naming::Name),
                    R"#(Creates a Namimg attribute at label <where> to identify the shape <Selection>. Geometry is Standard_True if we are only interested by the underlying geometry (e.g. setting a constraint). <Context> is used to find neighbours of <S> when required by the naming. If KeepOrientation is True the Selection orientation is taken into account. BNproblem == True points out that Context sub-shapes in DF have orientation differences with Context shape itself. instance method ===============)#"  , py::arg("where"),  py::arg("Selection"),  py::arg("Context"),  py::arg("Geometry")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("KeepOrientation")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("BNproblem")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TNaming_Naming::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TNaming_Naming::get_type_descriptor),
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
        .def_static("CurrentShape_s",
                    (void (*)(  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ,  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & , const opencascade::handle<TNaming_NamedShape> & , NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (*)(  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ,  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & , const opencascade::handle<TNaming_NamedShape> & , NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&TNaming_NamingTool::CurrentShape),
                    R"#(None)#"  , py::arg("Valid"),  py::arg("Forbiden"),  py::arg("NS"),  py::arg("MS"))
        .def_static("CurrentShapeFromShape_s",
                    (void (*)(  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ,  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & , const TDF_Label & , const TopoDS_Shape & , NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (*)(  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ,  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & , const TDF_Label & , const TopoDS_Shape & , NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&TNaming_NamingTool::CurrentShapeFromShape),
                    R"#(None)#"  , py::arg("Valid"),  py::arg("Forbiden"),  py::arg("Acces"),  py::arg("S"),  py::arg("MS"))
        .def_static("BuildDescendants_s",
                    (void (*)( const opencascade::handle<TNaming_NamedShape> & , NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) ) static_cast<void (*)( const opencascade::handle<TNaming_NamedShape> & , NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) >(&TNaming_NamingTool::BuildDescendants),
                    R"#(None)#"  , py::arg("NS"),  py::arg("Labels"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_NewShapeIterator , shared_ptr<TNaming_NewShapeIterator> >>(m.attr("TNaming_NewShapeIterator"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const Standard_Integer,const TDF_Label & >()  , py::arg("aShape"),  py::arg("Transaction"),  py::arg("access") )
        .def(py::init< const TopoDS_Shape &,const TDF_Label & >()  , py::arg("aShape"),  py::arg("access") )
        .def(py::init< const TNaming_NewShapeIterator & >()  , py::arg("anIterator") )
        .def(py::init< const TNaming_Iterator & >()  , py::arg("anIterator") )
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TNaming_NewShapeIterator::*)() const) static_cast<Standard_Boolean (TNaming_NewShapeIterator::*)() const>(&TNaming_NewShapeIterator::More),
             R"#(None)#" )
        .def("Next",
             (void (TNaming_NewShapeIterator::*)() ) static_cast<void (TNaming_NewShapeIterator::*)() >(&TNaming_NewShapeIterator::Next),
             R"#(None)#" )
        .def("Label",
             (TDF_Label (TNaming_NewShapeIterator::*)() const) static_cast<TDF_Label (TNaming_NewShapeIterator::*)() const>(&TNaming_NewShapeIterator::Label),
             R"#(None)#" )
        .def("NamedShape",
             (opencascade::handle<TNaming_NamedShape> (TNaming_NewShapeIterator::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TNaming_NewShapeIterator::*)() const>(&TNaming_NewShapeIterator::NamedShape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (TNaming_NewShapeIterator::*)() const) static_cast<const TopoDS_Shape & (TNaming_NewShapeIterator::*)() const>(&TNaming_NewShapeIterator::Shape),
             R"#(Warning! Can be a Null Shape if a descendant is deleted.)#" )
        .def("IsModification",
             (Standard_Boolean (TNaming_NewShapeIterator::*)() const) static_cast<Standard_Boolean (TNaming_NewShapeIterator::*)() const>(&TNaming_NewShapeIterator::IsModification),
             R"#(True if the new shape is a modification (split, fuse,etc...) of the old shape.)#" )
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
        .def(py::init< const TopoDS_Shape &,const Standard_Integer,const TDF_Label & >()  , py::arg("aShape"),  py::arg("Transaction"),  py::arg("access") )
        .def(py::init< const TopoDS_Shape &,const TDF_Label & >()  , py::arg("aShape"),  py::arg("access") )
        .def(py::init< const TNaming_OldShapeIterator & >()  , py::arg("anIterator") )
        .def(py::init< const TNaming_Iterator & >()  , py::arg("anIterator") )
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TNaming_OldShapeIterator::*)() const) static_cast<Standard_Boolean (TNaming_OldShapeIterator::*)() const>(&TNaming_OldShapeIterator::More),
             R"#(None)#" )
        .def("Next",
             (void (TNaming_OldShapeIterator::*)() ) static_cast<void (TNaming_OldShapeIterator::*)() >(&TNaming_OldShapeIterator::Next),
             R"#(None)#" )
        .def("Label",
             (TDF_Label (TNaming_OldShapeIterator::*)() const) static_cast<TDF_Label (TNaming_OldShapeIterator::*)() const>(&TNaming_OldShapeIterator::Label),
             R"#(None)#" )
        .def("NamedShape",
             (opencascade::handle<TNaming_NamedShape> (TNaming_OldShapeIterator::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TNaming_OldShapeIterator::*)() const>(&TNaming_OldShapeIterator::NamedShape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (TNaming_OldShapeIterator::*)() const) static_cast<const TopoDS_Shape & (TNaming_OldShapeIterator::*)() const>(&TNaming_OldShapeIterator::Shape),
             R"#(None)#" )
        .def("IsModification",
             (Standard_Boolean (TNaming_OldShapeIterator::*)() const) static_cast<Standard_Boolean (TNaming_OldShapeIterator::*)() const>(&TNaming_OldShapeIterator::IsModification),
             R"#(True if the new shape is a modification (split, fuse,etc...) of the old shape.)#" )
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
        .def("Label",
             (TDF_Label (TNaming_RefShape::*)() const) static_cast<TDF_Label (TNaming_RefShape::*)() const>(&TNaming_RefShape::Label),
             R"#(None)#" )
        .def("NamedShape",
             (opencascade::handle<TNaming_NamedShape> (TNaming_RefShape::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TNaming_RefShape::*)() const>(&TNaming_RefShape::NamedShape),
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
        .def(py::init< const TopoDS_Shape &,const TDF_Label & >()  , py::arg("aShape"),  py::arg("access") )
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TNaming_SameShapeIterator::*)() const) static_cast<Standard_Boolean (TNaming_SameShapeIterator::*)() const>(&TNaming_SameShapeIterator::More),
             R"#(None)#" )
        .def("Next",
             (void (TNaming_SameShapeIterator::*)() ) static_cast<void (TNaming_SameShapeIterator::*)() >(&TNaming_SameShapeIterator::Next),
             R"#(None)#" )
        .def("Label",
             (TDF_Label (TNaming_SameShapeIterator::*)() const) static_cast<TDF_Label (TNaming_SameShapeIterator::*)() const>(&TNaming_SameShapeIterator::Label),
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
        .def(py::init<  >()  )
        .def(py::init< const Standard_Boolean >()  , py::arg("WithValid") )
        .def(py::init< NCollection_Map<TDF_Label, TDF_LabelMapHasher> & >()  , py::arg("valid") )
    // custom constructors
    // methods
        .def("WithValid",
             (Standard_Boolean (TNaming_Scope::*)() const) static_cast<Standard_Boolean (TNaming_Scope::*)() const>(&TNaming_Scope::WithValid),
             R"#(None)#" )
        .def("WithValid",
             (void (TNaming_Scope::*)( const Standard_Boolean ) ) static_cast<void (TNaming_Scope::*)( const Standard_Boolean ) >(&TNaming_Scope::WithValid),
             R"#(None)#"  , py::arg("mode"))
        .def("ClearValid",
             (void (TNaming_Scope::*)() ) static_cast<void (TNaming_Scope::*)() >(&TNaming_Scope::ClearValid),
             R"#(None)#" )
        .def("Valid",
             (void (TNaming_Scope::*)( const TDF_Label & ) ) static_cast<void (TNaming_Scope::*)( const TDF_Label & ) >(&TNaming_Scope::Valid),
             R"#(None)#"  , py::arg("L"))
        .def("ValidChildren",
             (void (TNaming_Scope::*)( const TDF_Label & , const Standard_Boolean ) ) static_cast<void (TNaming_Scope::*)( const TDF_Label & , const Standard_Boolean ) >(&TNaming_Scope::ValidChildren),
             R"#(None)#"  , py::arg("L"),  py::arg("withroot")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Unvalid",
             (void (TNaming_Scope::*)( const TDF_Label & ) ) static_cast<void (TNaming_Scope::*)( const TDF_Label & ) >(&TNaming_Scope::Unvalid),
             R"#(None)#"  , py::arg("L"))
        .def("UnvalidChildren",
             (void (TNaming_Scope::*)( const TDF_Label & , const Standard_Boolean ) ) static_cast<void (TNaming_Scope::*)( const TDF_Label & , const Standard_Boolean ) >(&TNaming_Scope::UnvalidChildren),
             R"#(None)#"  , py::arg("L"),  py::arg("withroot")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsValid",
             (Standard_Boolean (TNaming_Scope::*)( const TDF_Label & ) const) static_cast<Standard_Boolean (TNaming_Scope::*)( const TDF_Label & ) const>(&TNaming_Scope::IsValid),
             R"#(None)#"  , py::arg("L"))
        .def("GetValid",
             (const TDF_LabelMap & (TNaming_Scope::*)() const) static_cast<const TDF_LabelMap & (TNaming_Scope::*)() const>(&TNaming_Scope::GetValid),
             R"#(None)#" )
        .def("ChangeValid",
             (TDF_LabelMap & (TNaming_Scope::*)() ) static_cast<TDF_LabelMap & (TNaming_Scope::*)() >(&TNaming_Scope::ChangeValid),
             R"#(None)#" )
        .def("CurrentShape",
             (TopoDS_Shape (TNaming_Scope::*)( const opencascade::handle<TNaming_NamedShape> & ) const) static_cast<TopoDS_Shape (TNaming_Scope::*)( const opencascade::handle<TNaming_NamedShape> & ) const>(&TNaming_Scope::CurrentShape),
             R"#(Returns the current value of <NS> according to the Valid Scope.)#"  , py::arg("NS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Selector , shared_ptr<TNaming_Selector> >>(m.attr("TNaming_Selector"))
    // constructors
        .def(py::init< const TDF_Label & >()  , py::arg("aLabel") )
    // custom constructors
    // methods
        .def("Select",
             (Standard_Boolean (TNaming_Selector::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean , const Standard_Boolean ) const) static_cast<Standard_Boolean (TNaming_Selector::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean , const Standard_Boolean ) const>(&TNaming_Selector::Select),
             R"#(Creates a topological naming on the label aLabel given as an argument at construction time. If successful, the shape Selection - found in the shape Context - is now identified in the named shape returned in NamedShape. If Geometry is true, NamedShape contains the first appearance of Selection. This syntax is more robust than the previous syntax for this method.)#"  , py::arg("Selection"),  py::arg("Context"),  py::arg("Geometry")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("KeepOrientatation")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Select",
             (Standard_Boolean (TNaming_Selector::*)( const TopoDS_Shape & , const Standard_Boolean , const Standard_Boolean ) const) static_cast<Standard_Boolean (TNaming_Selector::*)( const TopoDS_Shape & , const Standard_Boolean , const Standard_Boolean ) const>(&TNaming_Selector::Select),
             R"#(Creates a topological naming on the label aLabel given as an argument at construction time. If successful, the shape Selection is now identified in the named shape returned in NamedShape. If Geometry is true, NamedShape contains the first appearance of Selection.)#"  , py::arg("Selection"),  py::arg("Geometry")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("KeepOrientatation")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Solve",
             (Standard_Boolean (TNaming_Selector::*)( NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) const) static_cast<Standard_Boolean (TNaming_Selector::*)( NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) const>(&TNaming_Selector::Solve),
             R"#(Updates the topological naming on the label aLabel given as an argument at construction time. The underlying shape returned in the method NamedShape is updated. To read this shape, use the method TNaming_Tool::GetShape)#"  , py::arg("Valid"))
        .def("Arguments",
             (void (TNaming_Selector::*)( NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) const) static_cast<void (TNaming_Selector::*)( NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) const>(&TNaming_Selector::Arguments),
             R"#(Returns the attribute list args. This list contains the named shape on which the topological naming was built.)#"  , py::arg("args"))
        .def("NamedShape",
             (opencascade::handle<TNaming_NamedShape> (TNaming_Selector::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TNaming_Selector::*)() const>(&TNaming_Selector::NamedShape),
             R"#(Returns the NamedShape build or under construction, which contains the topological naming..)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsIdentified_s",
                    (Standard_Boolean (*)( const TDF_Label & , const TopoDS_Shape & , opencascade::handle<TNaming_NamedShape> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , const TopoDS_Shape & , opencascade::handle<TNaming_NamedShape> & , const Standard_Boolean ) >(&TNaming_Selector::IsIdentified),
                    R"#(To know if a shape is already identified (not selected) =======================================================)#"  , py::arg("access"),  py::arg("selection"),  py::arg("NS"),  py::arg("Geometry")=static_cast<const Standard_Boolean>(Standard_False))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_ShapesSet , shared_ptr<TNaming_ShapesSet> >>(m.attr("TNaming_ShapesSet"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopAbs_ShapeEnum >()  , py::arg("S"),  py::arg("Type")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE) )
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
        .def("Add",
             (void (TNaming_ShapesSet::*)( const TNaming_ShapesSet & ) ) static_cast<void (TNaming_ShapesSet::*)( const TNaming_ShapesSet & ) >(&TNaming_ShapesSet::Add),
             R"#(Adds the shapes contained in <Shapes>.)#"  , py::arg("Shapes"))
        .def("Filter",
             (void (TNaming_ShapesSet::*)( const TNaming_ShapesSet & ) ) static_cast<void (TNaming_ShapesSet::*)( const TNaming_ShapesSet & ) >(&TNaming_ShapesSet::Filter),
             R"#(Erases in <me> the shapes not contained in <Shapes>)#"  , py::arg("Shapes"))
        .def("Remove",
             (void (TNaming_ShapesSet::*)( const TNaming_ShapesSet & ) ) static_cast<void (TNaming_ShapesSet::*)( const TNaming_ShapesSet & ) >(&TNaming_ShapesSet::Remove),
             R"#(Removes in <me> the shapes contained in <Shapes>)#"  , py::arg("Shapes"))
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
        .def_static("CurrentShape_s",
                    (TopoDS_Shape (*)( const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<TopoDS_Shape (*)( const opencascade::handle<TNaming_NamedShape> & ) >(&TNaming_Tool::CurrentShape),
                    R"#(Returns the last Modification of <NS>. Returns the shape CurrentShape contained in the named shape attribute NS. CurrentShape is the current state of the entities if they have been modified in other attributes of the same data structure. Each call to this function creates a new compound.)#"  , py::arg("NS"))
        .def_static("CurrentShape_s",
                    (TopoDS_Shape (*)( const opencascade::handle<TNaming_NamedShape> & ,  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) ) static_cast<TopoDS_Shape (*)( const opencascade::handle<TNaming_NamedShape> & ,  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) >(&TNaming_Tool::CurrentShape),
                    R"#(Returns the shape CurrentShape contained in the named shape attribute NS, and present in the updated attribute map Updated. CurrentShape is the current state of the entities if they have been modified in other attributes of the same data structure. Each call to this function creates a new compound. Warning Only the contents of Updated are searched.R)#"  , py::arg("NS"),  py::arg("Updated"))
        .def_static("CurrentNamedShape_s",
                    (opencascade::handle<TNaming_NamedShape> (*)( const opencascade::handle<TNaming_NamedShape> & ,  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) ) static_cast<opencascade::handle<TNaming_NamedShape> (*)( const opencascade::handle<TNaming_NamedShape> & ,  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) >(&TNaming_Tool::CurrentNamedShape),
                    R"#(Returns the NamedShape of the last Modification of <NS>. This shape is identified by a label.)#"  , py::arg("NS"),  py::arg("Updated"))
        .def_static("CurrentNamedShape_s",
                    (opencascade::handle<TNaming_NamedShape> (*)( const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<opencascade::handle<TNaming_NamedShape> (*)( const opencascade::handle<TNaming_NamedShape> & ) >(&TNaming_Tool::CurrentNamedShape),
                    R"#(Returns NamedShape the last Modification of <NS>.)#"  , py::arg("NS"))
        .def_static("NamedShape_s",
                    (opencascade::handle<TNaming_NamedShape> (*)( const TopoDS_Shape & , const TDF_Label & ) ) static_cast<opencascade::handle<TNaming_NamedShape> (*)( const TopoDS_Shape & , const TDF_Label & ) >(&TNaming_Tool::NamedShape),
                    R"#(Returns the named shape attribute defined by the shape aShape and the label anAccess. This attribute is returned as a new shape. You call this function, if you need to create a topological attribute for existing data. Example class MyPkg_MyClass { public: Standard_Boolean SameEdge(const Handle(OCafTest_Line)& , const Handle(CafTest_Line)& ); };)#"  , py::arg("aShape"),  py::arg("anAcces"))
        .def_static("GetShape_s",
                    (TopoDS_Shape (*)( const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<TopoDS_Shape (*)( const opencascade::handle<TNaming_NamedShape> & ) >(&TNaming_Tool::GetShape),
                    R"#(Returns the entities stored in the named shape attribute NS. If there is only one old-new pair, the new shape is returned. Otherwise, a Compound is returned. This compound is made out of all the new shapes found. Each call to this function creates a new compound.)#"  , py::arg("NS"))
        .def_static("OriginalShape_s",
                    (TopoDS_Shape (*)( const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<TopoDS_Shape (*)( const opencascade::handle<TNaming_NamedShape> & ) >(&TNaming_Tool::OriginalShape),
                    R"#(Returns the shape contained as OldShape in <NS>)#"  , py::arg("NS"))
        .def_static("GeneratedShape_s",
                    (TopoDS_Shape (*)( const TopoDS_Shape & , const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<TopoDS_Shape (*)( const TopoDS_Shape & , const opencascade::handle<TNaming_NamedShape> & ) >(&TNaming_Tool::GeneratedShape),
                    R"#(Returns the shape generated from S or by a modification of S and contained in the named shape Generation.)#"  , py::arg("S"),  py::arg("Generation"))
        .def_static("Collect_s",
                    (void (*)( const opencascade::handle<TNaming_NamedShape> & , NCollection_Map<opencascade::handle<TNaming_NamedShape>, TNaming_NamedShapeHasher> & , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<TNaming_NamedShape> & , NCollection_Map<opencascade::handle<TNaming_NamedShape>, TNaming_NamedShapeHasher> & , const Standard_Boolean ) >(&TNaming_Tool::Collect),
                    R"#(None)#"  , py::arg("NS"),  py::arg("Labels"),  py::arg("OnlyModif")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("HasLabel_s",
                    (Standard_Boolean (*)( const TDF_Label & , const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , const TopoDS_Shape & ) >(&TNaming_Tool::HasLabel),
                    R"#(Returns True if <aShape> appears under a label.(DP))#"  , py::arg("access"),  py::arg("aShape"))
        .def_static("Label_s",
                    (TDF_Label (*)( const TDF_Label & , const TopoDS_Shape & , Standard_Integer & ) ) static_cast<TDF_Label (*)( const TDF_Label & , const TopoDS_Shape & , Standard_Integer & ) >(&TNaming_Tool::Label),
                    R"#(Returns the label of the first apparition of <aShape>. Transdef is a value of the transaction of the first apparition of <aShape>.)#"  , py::arg("access"),  py::arg("aShape"),  py::arg("TransDef"))
        .def_static("InitialShape_s",
                    (TopoDS_Shape (*)( const TopoDS_Shape & , const TDF_Label & , NCollection_List<TDF_Label> & ) ) static_cast<TopoDS_Shape (*)( const TopoDS_Shape & , const TDF_Label & , NCollection_List<TDF_Label> & ) >(&TNaming_Tool::InitialShape),
                    R"#(Returns the shape created from the shape aShape contained in the attribute anAcces.)#"  , py::arg("aShape"),  py::arg("anAcces"),  py::arg("Labels"))
        .def_static("ValidUntil_s",
                    (Standard_Integer (*)( const TDF_Label & , const TopoDS_Shape & ) ) static_cast<Standard_Integer (*)( const TDF_Label & , const TopoDS_Shape & ) >(&TNaming_Tool::ValidUntil),
                    R"#(Returns the last transaction where the creation of S is valid.)#"  , py::arg("access"),  py::arg("S"))
        .def_static("FindShape_s",
                    (void (*)(  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ,  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & , const opencascade::handle<TNaming_NamedShape> & , TopoDS_Shape & ) ) static_cast<void (*)(  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ,  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & , const opencascade::handle<TNaming_NamedShape> & , TopoDS_Shape & ) >(&TNaming_Tool::FindShape),
                    R"#(Returns the current shape (a Wire or a Shell) built (in the data framework) from the the shapes of the argument named shape. It is used for IDENTITY name type computation.)#"  , py::arg("Valid"),  py::arg("Forbiden"),  py::arg("Arg"),  py::arg("S"))
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
        .def("Add",
             (void (TNaming_TranslateTool::*)( TopoDS_Shape & , const TopoDS_Shape & ) const) static_cast<void (TNaming_TranslateTool::*)( TopoDS_Shape & , const TopoDS_Shape & ) const>(&TNaming_TranslateTool::Add),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("MakeVertex",
             (void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const) static_cast<void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const>(&TNaming_TranslateTool::MakeVertex),
             R"#(None)#"  , py::arg("S"))
        .def("MakeEdge",
             (void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const) static_cast<void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const>(&TNaming_TranslateTool::MakeEdge),
             R"#(None)#"  , py::arg("S"))
        .def("MakeWire",
             (void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const) static_cast<void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const>(&TNaming_TranslateTool::MakeWire),
             R"#(None)#"  , py::arg("S"))
        .def("MakeFace",
             (void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const) static_cast<void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const>(&TNaming_TranslateTool::MakeFace),
             R"#(None)#"  , py::arg("S"))
        .def("MakeShell",
             (void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const) static_cast<void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const>(&TNaming_TranslateTool::MakeShell),
             R"#(None)#"  , py::arg("S"))
        .def("MakeSolid",
             (void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const) static_cast<void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const>(&TNaming_TranslateTool::MakeSolid),
             R"#(None)#"  , py::arg("S"))
        .def("MakeCompSolid",
             (void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const) static_cast<void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const>(&TNaming_TranslateTool::MakeCompSolid),
             R"#(None)#"  , py::arg("S"))
        .def("MakeCompound",
             (void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const) static_cast<void (TNaming_TranslateTool::*)( TopoDS_Shape & ) const>(&TNaming_TranslateTool::MakeCompound),
             R"#(None)#"  , py::arg("S"))
        .def("UpdateVertex",
             (void (TNaming_TranslateTool::*)( const TopoDS_Shape & , TopoDS_Shape & , NCollection_IndexedDataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> & ) const) static_cast<void (TNaming_TranslateTool::*)( const TopoDS_Shape & , TopoDS_Shape & , NCollection_IndexedDataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> & ) const>(&TNaming_TranslateTool::UpdateVertex),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("M"))
        .def("UpdateEdge",
             (void (TNaming_TranslateTool::*)( const TopoDS_Shape & , TopoDS_Shape & , NCollection_IndexedDataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> & ) const) static_cast<void (TNaming_TranslateTool::*)( const TopoDS_Shape & , TopoDS_Shape & , NCollection_IndexedDataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> & ) const>(&TNaming_TranslateTool::UpdateEdge),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("M"))
        .def("UpdateFace",
             (void (TNaming_TranslateTool::*)( const TopoDS_Shape & , TopoDS_Shape & , NCollection_IndexedDataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> & ) const) static_cast<void (TNaming_TranslateTool::*)( const TopoDS_Shape & , TopoDS_Shape & , NCollection_IndexedDataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> & ) const>(&TNaming_TranslateTool::UpdateFace),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("M"))
        .def("UpdateShape",
             (void (TNaming_TranslateTool::*)( const TopoDS_Shape & , TopoDS_Shape & ) const) static_cast<void (TNaming_TranslateTool::*)( const TopoDS_Shape & , TopoDS_Shape & ) const>(&TNaming_TranslateTool::UpdateShape),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TNaming_TranslateTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TNaming_TranslateTool::*)() const>(&TNaming_TranslateTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TNaming_TranslateTool::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TNaming_TranslateTool::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TNaming_Translator , shared_ptr<TNaming_Translator> >>(m.attr("TNaming_Translator"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Add",
             (void (TNaming_Translator::*)( const TopoDS_Shape & ) ) static_cast<void (TNaming_Translator::*)( const TopoDS_Shape & ) >(&TNaming_Translator::Add),
             R"#(None)#"  , py::arg("aShape"))
        .def("Perform",
             (void (TNaming_Translator::*)() ) static_cast<void (TNaming_Translator::*)() >(&TNaming_Translator::Perform),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (TNaming_Translator::*)() const) static_cast<Standard_Boolean (TNaming_Translator::*)() const>(&TNaming_Translator::IsDone),
             R"#(None)#" )
        .def("Copied",
             (const TopoDS_Shape (TNaming_Translator::*)( const TopoDS_Shape & ) const) static_cast<const TopoDS_Shape (TNaming_Translator::*)( const TopoDS_Shape & ) const>(&TNaming_Translator::Copied),
             R"#(returns copied shape)#"  , py::arg("aShape"))
        .def("Copied",
             (const TopTools_DataMapOfShapeShape & (TNaming_Translator::*)() const) static_cast<const TopTools_DataMapOfShapeShape & (TNaming_Translator::*)() const>(&TNaming_Translator::Copied),
             R"#(returns DataMap of results; (shape <-> copied shape))#" )
        .def("DumpMap",
             (void (TNaming_Translator::*)( const Standard_Boolean ) const) static_cast<void (TNaming_Translator::*)( const Standard_Boolean ) const>(&TNaming_Translator::DumpMap),
             R"#(None)#"  , py::arg("isWrite")=static_cast<const Standard_Boolean>(Standard_False))
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
        .def("Destroy",
             (void (TNaming_UsedShapes::*)() ) static_cast<void (TNaming_UsedShapes::*)() >(&TNaming_UsedShapes::Destroy),
             R"#(None)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TNaming_UsedShapes::GetID),
                    R"#(Returns the ID: 2a96b614-ec8b-11d0-bee7-080009dc3333.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TNaming_UsedShapes::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TNaming_UsedShapes::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TNaming_Selector.hxx
// ./opencascade/TNaming_DeltaOnRemoval.hxx
// ./opencascade/TNaming_MapOfNamedShape.hxx
// ./opencascade/TNaming_Iterator.hxx
// ./opencascade/TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape.hxx
// ./opencascade/TNaming_NewShapeIterator.hxx
// ./opencascade/TNaming_PtrRefShape.hxx
// ./opencascade/TNaming_Identifier.hxx
// ./opencascade/TNaming_RefShape.hxx
// ./opencascade/TNaming_NCollections.hxx
// ./opencascade/TNaming_ListIteratorOfListOfNamedShape.hxx
// ./opencascade/TNaming_DataMapOfShapePtrRefShape.hxx
// ./opencascade/TNaming_Naming.hxx
// ./opencascade/TNaming_ListIteratorOfListOfMapOfShape.hxx
// ./opencascade/TNaming_UsedShapes.hxx
// ./opencascade/TNaming_NamedShape.hxx
// ./opencascade/TNaming_Scope.hxx
// ./opencascade/TNaming_PtrNode.hxx
// ./opencascade/TNaming_Translator.hxx
// ./opencascade/TNaming_Tool.hxx
// ./opencascade/TNaming_Name.hxx
// ./opencascade/TNaming_ListOfMapOfShape.hxx
// ./opencascade/TNaming_ShapesSet.hxx
// ./opencascade/TNaming_DataMapIteratorOfDataMapOfShapeShapesSet.hxx
// ./opencascade/TNaming_NameType.hxx
// ./opencascade/TNaming_CopyShape.hxx
// ./opencascade/TNaming_PtrAttribute.hxx
// ./opencascade/TNaming.hxx
// ./opencascade/TNaming_Evolution.hxx
// ./opencascade/TNaming_SameShapeIterator.hxx
// ./opencascade/TNaming_IteratorOnShapesSet.hxx
// ./opencascade/TNaming_DeltaOnModification.hxx
// ./opencascade/TNaming_OldShapeIterator.hxx
// ./opencascade/TNaming_Builder.hxx
// ./opencascade/TNaming_NamedShapeHasher.hxx
// ./opencascade/TNaming_TranslateTool.hxx
// ./opencascade/TNaming_NamingTool.hxx
// ./opencascade/TNaming_ListOfNamedShape.hxx
// ./opencascade/TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape.hxx
// ./opencascade/TNaming_Localizer.hxx
// ./opencascade/TNaming_DataMapOfShapeShapesSet.hxx
// ./opencascade/TNaming_MapIteratorOfMapOfNamedShape.hxx
// ./opencascade/TNaming_ListOfIndexedDataMapOfShapeListOfShape.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Map<opencascade::handle<TNaming_NamedShape>, TNaming_NamedShapeHasher>(m,"TNaming_MapOfNamedShape");
    register_template_NCollection_List<TopTools_MapOfShape>(m,"TNaming_ListOfMapOfShape");
    register_template_NCollection_DefaultHasher<opencascade::handle<TNaming_NamedShape> >(m,"TNaming_NamedShapeHasher");
    register_template_NCollection_List<opencascade::handle<TNaming_NamedShape> >(m,"TNaming_ListOfNamedShape");
    register_template_NCollection_DataMap<TopoDS_Shape, TNaming_ShapesSet, TopTools_ShapeMapHasher>(m,"TNaming_DataMapOfShapeShapesSet");
    register_template_NCollection_List<TopTools_IndexedDataMapOfShapeListOfShape>(m,"TNaming_ListOfIndexedDataMapOfShapeListOfShape");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

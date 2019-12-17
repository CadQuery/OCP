
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopoDS_Shape.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TNaming_Tool.hxx>
#include <TopoDS_Shape.hxx>
#include <TNaming_UsedShapes.hxx>
#include <TDF_Label.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TNaming_Localizer.hxx>
#include <TNaming_RefShape.hxx>
#include <TNaming_Localizer.hxx>
#include <TNaming_OldShapeIterator.hxx>
#include <TNaming_UsedShapes.hxx>
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
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TNaming_NewShapeIterator.hxx>
#include <TNaming_OldShapeIterator.hxx>
#include <TNaming_NamedShape.hxx>
#include <TDF_Label.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Shape.hxx>
#include <TNaming_NamedShape.hxx>
#include <TNaming_UsedShapes.hxx>
#include <TNaming_NamedShape.hxx>
#include <Standard_ConstructionError.hxx>
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
#include <TopoDS_Shape.hxx>
#include <TNaming_NamedShape.hxx>
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
#include <TopoDS_Shape.hxx>
#include <TNaming_TranslateTool.hxx>
#include <TopLoc_Location.hxx>
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
#include <TDF_Label.hxx>
#include <TNaming_NamedShape.hxx>
#include <TNaming_DeltaOnModification.hxx>
#include <TNaming_NamedShape.hxx>
#include <TDF_RelocationTable.hxx>
#include <TNaming_NamedShape.hxx>

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
// ./opencascade/TNaming_DataMapOfShapePtrRefShape.hxx
#include "NCollection.hxx"
// ./opencascade/TNaming_DataMapOfShapeShapesSet.hxx
#include "NCollection.hxx"
// ./opencascade/TNaming_DataMapOfShapeShapesSet.hxx
#include "NCollection.hxx"
// ./opencascade/TNaming_ListOfNamedShape.hxx
#include "NCollection.hxx"
// ./opencascade/TNaming_ListOfNamedShape.hxx
#include "NCollection.hxx"
// ./opencascade/TNaming_ListOfMapOfShape.hxx
#include "NCollection.hxx"
// ./opencascade/TNaming_ListOfMapOfShape.hxx
#include "NCollection.hxx"
// ./opencascade/TNaming_ListOfIndexedDataMapOfShapeListOfShape.hxx
#include "NCollection.hxx"
// ./opencascade/TNaming_ListOfIndexedDataMapOfShapeListOfShape.hxx
#include "NCollection.hxx"
// ./opencascade/TNaming_NamedShapeHasher.hxx
#include "NCollection.hxx"
// ./opencascade/TNaming_MapOfNamedShape.hxx
#include "NCollection.hxx"
// ./opencascade/TNaming_MapOfNamedShape.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TNaming_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TNaming", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<TNaming_NameType>(m, "TNaming_NameType",R"#(to store naming characteristcs)#")
        .value("TNaming_UNKNOWN",TNaming_NameType::TNaming_UNKNOWN)
        .value("TNaming_IDENTITY",TNaming_NameType::TNaming_IDENTITY)
        .value("TNaming_MODIFUNTIL",TNaming_NameType::TNaming_MODIFUNTIL)
        .value("TNaming_GENERATION",TNaming_NameType::TNaming_GENERATION)
        .value("TNaming_INTERSECTION",TNaming_NameType::TNaming_INTERSECTION)
        .value("TNaming_UNION",TNaming_NameType::TNaming_UNION)
        .value("TNaming_SUBSTRACTION",TNaming_NameType::TNaming_SUBSTRACTION)
        .value("TNaming_CONSTSHAPE",TNaming_NameType::TNaming_CONSTSHAPE)
        .value("TNaming_FILTERBYNEIGHBOURGS",TNaming_NameType::TNaming_FILTERBYNEIGHBOURGS)
        .value("TNaming_ORIENTATION",TNaming_NameType::TNaming_ORIENTATION)
        .value("TNaming_WIREIN",TNaming_NameType::TNaming_WIREIN)
        .value("TNaming_SHELLIN",TNaming_NameType::TNaming_SHELLIN).export_values();
    py::enum_<TNaming_Evolution>(m, "TNaming_Evolution",R"#(Defines the type of evolution in old shape - new shape pairs. The definitions - in the form of the terms of the enumeration - are needed by the TNaming_NamedShape attribute and indicate what entities this attribute records as follows: - PRIMITIVE - New entities; in each pair, old shape is a null shape and new shape is a created entity. - GENERATED - Entities created from other entities; in each pair, old shape is the generator and new shape is the created entity. - MODIFY - Split or merged entities, in each pair, old shape is the entity before the operation and new shape is the new entity after the operation. - DELETE - Deletion of entities; in each pair, old shape is a deleted entity and new shape is null. - SELECTED - Named topological entities; in each pair, the new shape is a named entity and the old shape is not used.)#")
        .value("TNaming_PRIMITIVE",TNaming_Evolution::TNaming_PRIMITIVE)
        .value("TNaming_GENERATED",TNaming_Evolution::TNaming_GENERATED)
        .value("TNaming_MODIFY",TNaming_Evolution::TNaming_MODIFY)
        .value("TNaming_DELETE",TNaming_Evolution::TNaming_DELETE)
        .value("TNaming_REPLACE",TNaming_Evolution::TNaming_REPLACE)
        .value("TNaming_SELECTED",TNaming_Evolution::TNaming_SELECTED).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<TNaming_TranslateTool ,opencascade::handle<TNaming_TranslateTool>  , Standard_Transient >(m,"TNaming_TranslateTool",R"#(tool to copy underlying TShape of a Shape. The TranslateTool class is provided to support the translation of topological data structures Transient to Transient.tool to copy underlying TShape of a Shape. The TranslateTool class is provided to support the translation of topological data structures Transient to Transient.tool to copy underlying TShape of a Shape. The TranslateTool class is provided to support the translation of topological data structures Transient to Transient.)#");
    py::class_<TNaming_IteratorOnShapesSet ,std::unique_ptr<TNaming_IteratorOnShapesSet>  >(m,"TNaming_IteratorOnShapesSet",R"#(None)#");
    py::class_<TNaming_Identifier ,std::unique_ptr<TNaming_Identifier>  >(m,"TNaming_Identifier",R"#(None)#");
    py::class_<TNaming_Localizer ,std::unique_ptr<TNaming_Localizer>  >(m,"TNaming_Localizer",R"#(None)#");
    py::class_<TNaming_Iterator ,std::unique_ptr<TNaming_Iterator>  >(m,"TNaming_Iterator",R"#(A tool to visit the contents of a named shape attribute. Pairs of shapes in the attribute are iterated, one being the pre-modification or the old shape, and the other the post-modification or the new shape. This allows you to have a full access to all contents of an attribute. If, on the other hand, you are only interested in topological entities stored in the attribute, you can use the functions GetShape and CurrentShape in TNaming_Tool.)#");
    py::class_<TNaming_Builder ,std::unique_ptr<TNaming_Builder>  >(m,"TNaming_Builder",R"#(A tool to create and maintain topological attributes. Constructor creates an empty TNaming_NamedShape attribute at the given label. It allows adding "old shape" and "new shape" pairs with the specified evolution to this named shape. One evolution type per one builder must be used.)#");
    py::class_<TNaming_Naming ,opencascade::handle<TNaming_Naming>  , TDF_Attribute >(m,"TNaming_Naming",R"#(This attribute store the topological naming of any selected shape, when this shape is not already attached to a specific label. This class is also used to solve it when the argumentsof the toipological naming are modified.This attribute store the topological naming of any selected shape, when this shape is not already attached to a specific label. This class is also used to solve it when the argumentsof the toipological naming are modified.This attribute store the topological naming of any selected shape, when this shape is not already attached to a specific label. This class is also used to solve it when the argumentsof the toipological naming are modified.)#");
    py::class_<TNaming_Scope ,std::unique_ptr<TNaming_Scope>  >(m,"TNaming_Scope",R"#(this class manage a scope of labels ===================================)#");
    py::class_<TNaming_ShapesSet ,std::unique_ptr<TNaming_ShapesSet>  >(m,"TNaming_ShapesSet",R"#(None)#");
    py::class_<TNaming_DeltaOnModification ,opencascade::handle<TNaming_DeltaOnModification>  , TDF_DeltaOnModification >(m,"TNaming_DeltaOnModification",R"#(This class provides default services for an AttributeDelta on a MODIFICATION action.This class provides default services for an AttributeDelta on a MODIFICATION action.This class provides default services for an AttributeDelta on a MODIFICATION action.)#");
    py::class_<TNaming_RefShape ,std::unique_ptr<TNaming_RefShape>  >(m,"TNaming_RefShape",R"#(None)#");
    py::class_<TNaming_Name ,std::unique_ptr<TNaming_Name>  >(m,"TNaming_Name",R"#(store the arguments of Naming.)#");
    py::class_<TNaming_SameShapeIterator ,std::unique_ptr<TNaming_SameShapeIterator>  >(m,"TNaming_SameShapeIterator",R"#(To iterate on all the label which contained a given shape.)#");
    py::class_<TNaming_Tool ,std::unique_ptr<TNaming_Tool>  >(m,"TNaming_Tool",R"#(A tool to get information on the topology of a named shape attribute. This information is typically a TopoDS_Shape object. Using this tool, relations between named shapes are also accessible.)#");
    py::class_<TNaming_Selector ,std::unique_ptr<TNaming_Selector>  >(m,"TNaming_Selector",R"#(This class provides a single API for selection of shapes. This involves both identification and selection of shapes in the data framework. If the selected shape is modified, this selector will solve its identifications. This class is the user interface for topological naming resources. * The <IsIdentified> method returns (if exists) the NamedShape which contains a given shape. The definition of an identified shape is : a Shape handled by a NamedShape (this shape is the only one stored) , which has the TNaming_PRImITIVE evolution)#");
    py::class_<TNaming_UsedShapes ,opencascade::handle<TNaming_UsedShapes>  , TDF_Attribute >(m,"TNaming_UsedShapes",R"#(Global attribute located under root label to store all the shapes handled by the framework Set of Shapes Used in a Data from TDF Only one instance by Data, it always Stored as Attribute of The Root.Global attribute located under root label to store all the shapes handled by the framework Set of Shapes Used in a Data from TDF Only one instance by Data, it always Stored as Attribute of The Root.Global attribute located under root label to store all the shapes handled by the framework Set of Shapes Used in a Data from TDF Only one instance by Data, it always Stored as Attribute of The Root.)#");
    py::class_<TNaming_CopyShape ,std::unique_ptr<TNaming_CopyShape>  >(m,"TNaming_CopyShape",R"#(None)#");
    py::class_<TNaming_DeltaOnRemoval ,opencascade::handle<TNaming_DeltaOnRemoval>  , TDF_DeltaOnRemoval >(m,"TNaming_DeltaOnRemoval",R"#()#");
    py::class_<TNaming_Translator ,std::unique_ptr<TNaming_Translator>  >(m,"TNaming_Translator",R"#(only for Shape Copy test - to move in DNaming)#");
    py::class_<TNaming_NamedShape ,opencascade::handle<TNaming_NamedShape>  , TDF_Attribute >(m,"TNaming_NamedShape",R"#(The basis to define an attribute for the storage of topology and naming data. This attribute contains two parts: - The type of evolution, a term of the enumeration TNaming_Evolution - A list of pairs of shapes called the "old" shape and the "new" shape. The meaning depends on the type of evolution.The basis to define an attribute for the storage of topology and naming data. This attribute contains two parts: - The type of evolution, a term of the enumeration TNaming_Evolution - A list of pairs of shapes called the "old" shape and the "new" shape. The meaning depends on the type of evolution.The basis to define an attribute for the storage of topology and naming data. This attribute contains two parts: - The type of evolution, a term of the enumeration TNaming_Evolution - A list of pairs of shapes called the "old" shape and the "new" shape. The meaning depends on the type of evolution.)#");
    py::class_<TNaming_OldShapeIterator ,std::unique_ptr<TNaming_OldShapeIterator>  >(m,"TNaming_OldShapeIterator",R"#(Iterates on all the ascendants of a shape)#");
    py::class_<TNaming_NewShapeIterator ,std::unique_ptr<TNaming_NewShapeIterator>  >(m,"TNaming_NewShapeIterator",R"#(Iterates on all the descendants of a shape)#");
    py::class_<TNaming_NamingTool ,std::unique_ptr<TNaming_NamingTool>  >(m,"TNaming_NamingTool",R"#(None)#");
    py::class_<TNaming ,std::unique_ptr<TNaming>  >(m,"TNaming",R"#(A topological attribute can be seen as a hook into the topological structure. To this hook, data can be attached and references defined. It is used for keeping and access to topological objects and their evolution. All topological objects are stored in the one user-protected TNaming_UsedShapes attribute at the root label of the data framework. This attribute contains map with all topological shapes, used in this document. To all other labels TNaming_NamedShape attribute can be added. This attribute contains references (hooks) to shapes from the TNaming_UsedShapes attribute and evolution of these shapes. TNaming_NamedShape attribute contains a set of pairs of hooks: old shape and new shape (see the figure below). It allows not only get the topological shapes by the labels, but also trace evolution of the shapes and correctly resolve dependent shapes by the changed one. If shape is just-created, then the old shape for accorded named shape is an empty shape. If a shape is deleted, then the new shape in this named shape is empty. Different algorithms may dispose sub-shapes of the result shape at the individual label depending on necessity: - If a sub-shape must have some extra attributes (material of each face or color of each edge). In this case a specific sub-shape is placed to the separate label (usually, sub-label of the result shape label) with all attributes of this sub-shape. - If topological naming is needed, a necessary and sufficient (for selected sub-shapes identification) set of sub-shapes is placed to the child labels of the result shape label. As usual, as far as basic solids and closed shells are concerned, all faces of the shape are disposed. Edges and vertices sub-shapes can be identified as intersection of contiguous faces. Modified/generated shapes may be placed to one named shape and identified as this named shape and source named shape that also can be identified with used algorithms. TNaming_NamedShape may contain a few pairs of hooks with the same evolution. In this case topology shape, which belongs to the named shape, is a compound of new shapes. The data model contains both the topology and the hooks, and functions handle both topological entities and hooks. Consider the case of a box function, which creates a solid with six faces and six hooks. Each hook is attached to a face. If you want, you can also have this function create hooks for edges and vertices as well as for faces. For the sake of simplicity though, let's limit the example. Not all functions can define explicit hooks for all topological entities they create, but all topological entities can be turned into hooks when necessary. This is where topological naming is necessary.)#");

// pre-register typdefs
// ./opencascade/TNaming_TranslateTool.hxx
// ./opencascade/TNaming_PtrNode.hxx
// ./opencascade/TNaming_SameShapeIterator.hxx
// ./opencascade/TNaming_NCollections.hxx
// ./opencascade/TNaming_IteratorOnShapesSet.hxx
// ./opencascade/TNaming_DataMapOfShapePtrRefShape.hxx
// ./opencascade/TNaming_Translator.hxx
// ./opencascade/TNaming_Identifier.hxx
// ./opencascade/TNaming_PtrRefShape.hxx
// ./opencascade/TNaming_Tool.hxx
// ./opencascade/TNaming_ListIteratorOfListOfNamedShape.hxx
// ./opencascade/TNaming_Localizer.hxx
// ./opencascade/TNaming_NewShapeIterator.hxx
// ./opencascade/TNaming_Iterator.hxx
// ./opencascade/TNaming_NameType.hxx
// ./opencascade/TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape.hxx
// ./opencascade/TNaming_DataMapOfShapeShapesSet.hxx
    preregister_template_NCollection_DataMap<TopoDS_Shape, TNaming_ShapesSet, TopTools_ShapeMapHasher>(m,"TNaming_DataMapOfShapeShapesSet");  
// ./opencascade/TNaming_ListOfNamedShape.hxx
    preregister_template_NCollection_List<opencascade::handle<TNaming_NamedShape> >(m,"TNaming_ListOfNamedShape");  
// ./opencascade/TNaming_Selector.hxx
// ./opencascade/TNaming_Builder.hxx
// ./opencascade/TNaming_NamedShape.hxx
// ./opencascade/TNaming_Naming.hxx
// ./opencascade/TNaming_UsedShapes.hxx
// ./opencascade/TNaming_Scope.hxx
// ./opencascade/TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape.hxx
// ./opencascade/TNaming_ListOfMapOfShape.hxx
    preregister_template_NCollection_List<TopTools_MapOfShape>(m,"TNaming_ListOfMapOfShape");  
// ./opencascade/TNaming_ListIteratorOfListOfMapOfShape.hxx
// ./opencascade/TNaming_PtrAttribute.hxx
// ./opencascade/TNaming_ListOfIndexedDataMapOfShapeListOfShape.hxx
    preregister_template_NCollection_List<TopTools_IndexedDataMapOfShapeListOfShape>(m,"TNaming_ListOfIndexedDataMapOfShapeListOfShape");  
// ./opencascade/TNaming_DataMapIteratorOfDataMapOfShapeShapesSet.hxx
// ./opencascade/TNaming_NamedShapeHasher.hxx
    preregister_template_NCollection_DefaultHasher<opencascade::handle<TNaming_NamedShape> >(m,"TNaming_NamedShapeHasher");  
// ./opencascade/TNaming_MapIteratorOfMapOfNamedShape.hxx
// ./opencascade/TNaming.hxx
// ./opencascade/TNaming_ShapesSet.hxx
// ./opencascade/TNaming_Evolution.hxx
// ./opencascade/TNaming_CopyShape.hxx
// ./opencascade/TNaming_DeltaOnModification.hxx
// ./opencascade/TNaming_OldShapeIterator.hxx
// ./opencascade/TNaming_RefShape.hxx
// ./opencascade/TNaming_DeltaOnRemoval.hxx
// ./opencascade/TNaming_Name.hxx
// ./opencascade/TNaming_NamingTool.hxx
// ./opencascade/TNaming_MapOfNamedShape.hxx
    preregister_template_NCollection_Map<opencascade::handle<TNaming_NamedShape>, TNaming_NamedShapeHasher>(m,"TNaming_MapOfNamedShape");  

};

// user-defined post-inclusion per module

// user-defined post

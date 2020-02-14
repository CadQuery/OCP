
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_HShape.hxx>
#include <TopoDS_TVertex.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_TEdge.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_TWire.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_TFace.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_TShell.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_TSolid.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_TCompSolid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_TCompound.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Builder.hxx>
#include <TopoDS_Iterator.hxx>
#include <TopoDS_Shape.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_FrozenShape.hxx>
#include <TopoDS_UnCompatibleShapes.hxx>
#include <TopoDS_Iterator.hxx>
#include <TopoDS_Builder.hxx>
#include <Standard_NoMoreObject.hxx>

// module includes
#include <TopoDS.hxx>
#include <TopoDS_AlertWithShape.hxx>
#include <TopoDS_Builder.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_FrozenShape.hxx>
#include <TopoDS_HShape.hxx>
#include <TopoDS_Iterator.hxx>
#include <TopoDS_ListIteratorOfListOfShape.hxx>
#include <TopoDS_ListOfShape.hxx>
#include <TopoDS_LockedShape.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_TCompound.hxx>
#include <TopoDS_TCompSolid.hxx>
#include <TopoDS_TEdge.hxx>
#include <TopoDS_TFace.hxx>
#include <TopoDS_TShape.hxx>
#include <TopoDS_TShell.hxx>
#include <TopoDS_TSolid.hxx>
#include <TopoDS_TVertex.hxx>
#include <TopoDS_TWire.hxx>
#include <TopoDS_UnCompatibleShapes.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>

// template related includes
// ./opencascade/TopoDS_ListOfShape.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopoDS_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopoDS", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_TopoDS_TShape : public TopoDS_TShape{
    public:
        using TopoDS_TShape::TopoDS_TShape;
        
        
        // public pure virtual
        TopAbs_ShapeEnum ShapeType() const  override { PYBIND11_OVERLOAD_PURE(TopAbs_ShapeEnum,TopoDS_TShape,ShapeType,) };
        opencascade::handle<TopoDS_TShape> EmptyCopy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TopoDS_TShape>,TopoDS_TShape,EmptyCopy,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_TopoDS_TEdge : public TopoDS_TEdge{
    public:
        using TopoDS_TEdge::TopoDS_TEdge;
        
        
        // public pure virtual
        
        opencascade::handle<TopoDS_TShape> EmptyCopy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TopoDS_TShape>,TopoDS_TShape,EmptyCopy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_TopoDS_TVertex : public TopoDS_TVertex{
    public:
        using TopoDS_TVertex::TopoDS_TVertex;
        
        
        // public pure virtual
        
        opencascade::handle<TopoDS_TShape> EmptyCopy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TopoDS_TShape>,TopoDS_TShape,EmptyCopy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs

// classes forward declarations only
    py::class_<TopoDS , shared_ptr<TopoDS>  >(m,"TopoDS",R"#(Provides methods to cast objects of class TopoDS_Shape to be onjects of more specialized sub-classes. Types are verified, thus in the example below, the first two blocks are correct but the third is rejected by the compiler.)#");
    py::class_<TopoDS_AlertWithShape ,opencascade::handle<TopoDS_AlertWithShape>  , Message_Alert >(m,"TopoDS_AlertWithShape",R"#(Alert object storing TopoDS shape in its field)#");
    py::class_<TopoDS_Builder , shared_ptr<TopoDS_Builder>  >(m,"TopoDS_Builder",R"#(A Builder is used to create Topological Data Structures.It is the root of the Builder class hierarchy.)#");
    py::class_<TopoDS_HShape ,opencascade::handle<TopoDS_HShape>  , Standard_Transient >(m,"TopoDS_HShape",R"#(Class to manipulate a Shape with handle.Class to manipulate a Shape with handle.Class to manipulate a Shape with handle.)#");
    py::class_<TopoDS_Iterator , shared_ptr<TopoDS_Iterator>  >(m,"TopoDS_Iterator",R"#(Iterates on the underlying shape underlying a given TopoDS_Shape object, providing access to its component sub-shapes. Each component shape is returned as a TopoDS_Shape with an orientation, and a compound of the original values and the relative values.)#");
    py::class_<TopoDS_Shape , shared_ptr<TopoDS_Shape>  >(m,"TopoDS_Shape",R"#(Describes a shape which - references an underlying shape with the potential to be given a location and an orientation - has a location for the underlying shape, giving its placement in the local coordinate system - has an orientation for the underlying shape, in terms of its geometry (as opposed to orientation in relation to other shapes). Note: A Shape is empty if it references an underlying shape which has an empty list of shapes.)#");
    py::class_<TopoDS_TShape ,opencascade::handle<TopoDS_TShape> ,Py_TopoDS_TShape , Standard_Transient >(m,"TopoDS_TShape",R"#(A TShape is a topological structure describing a set of points in a 2D or 3D space.A TShape is a topological structure describing a set of points in a 2D or 3D space.)#");
    py::class_<TopoDS_CompSolid , shared_ptr<TopoDS_CompSolid>  , TopoDS_Shape >(m,"TopoDS_CompSolid",R"#(Describes a composite solid which - references an underlying composite solid with the potential to be given a location and an orientation - has a location for the underlying composite solid, giving its placement in the local coordinate system - has an orientation for the underlying composite solid, in terms of its geometry (as opposed to orientation in relation to other shapes). Casts shape S to the more specialized return type, CompSolid.)#");
    py::class_<TopoDS_Compound , shared_ptr<TopoDS_Compound>  , TopoDS_Shape >(m,"TopoDS_Compound",R"#(Describes a compound which - references an underlying compound with the potential to be given a location and an orientation - has a location for the underlying compound, giving its placement in the local coordinate system - has an orientation for the underlying compound, in terms of its geometry (as opposed to orientation in relation to other shapes). Casts shape S to the more specialized return type, Compound.)#");
    py::class_<TopoDS_Edge , shared_ptr<TopoDS_Edge>  , TopoDS_Shape >(m,"TopoDS_Edge",R"#(Describes an edge which - references an underlying edge with the potential to be given a location and an orientation - has a location for the underlying edge, giving its placement in the local coordinate system - has an orientation for the underlying edge, in terms of its geometry (as opposed to orientation in relation to other shapes).)#");
    py::class_<TopoDS_Face , shared_ptr<TopoDS_Face>  , TopoDS_Shape >(m,"TopoDS_Face",R"#(Describes a face which - references an underlying face with the potential to be given a location and an orientation - has a location for the underlying face, giving its placement in the local coordinate system - has an orientation for the underlying face, in terms of its geometry (as opposed to orientation in relation to other shapes).)#");
    py::class_<TopoDS_Shell , shared_ptr<TopoDS_Shell>  , TopoDS_Shape >(m,"TopoDS_Shell",R"#(Describes a shell which - references an underlying shell with the potential to be given a location and an orientation - has a location for the underlying shell, giving its placement in the local coordinate system - has an orientation for the underlying shell, in terms of its geometry (as opposed to orientation in relation to other shapes).)#");
    py::class_<TopoDS_Solid , shared_ptr<TopoDS_Solid>  , TopoDS_Shape >(m,"TopoDS_Solid",R"#(Describes a solid shape which - references an underlying solid shape with the potential to be given a location and an orientation - has a location for the underlying shape, giving its placement in the local coordinate system - has an orientation for the underlying shape, in terms of its geometry (as opposed to orientation in relation to other shapes).)#");
    py::class_<TopoDS_TCompSolid ,opencascade::handle<TopoDS_TCompSolid>  , TopoDS_TShape >(m,"TopoDS_TCompSolid",R"#(A set of solids connected by their faces.A set of solids connected by their faces.A set of solids connected by their faces.)#");
    py::class_<TopoDS_TCompound ,opencascade::handle<TopoDS_TCompound>  , TopoDS_TShape >(m,"TopoDS_TCompound",R"#(A TCompound is an all-purpose set of Shapes.A TCompound is an all-purpose set of Shapes.A TCompound is an all-purpose set of Shapes.)#");
    py::class_<TopoDS_TEdge ,opencascade::handle<TopoDS_TEdge> ,Py_TopoDS_TEdge , TopoDS_TShape >(m,"TopoDS_TEdge",R"#(A topological part of a curve in 2D or 3D, the boundary is a set of oriented Vertices.A topological part of a curve in 2D or 3D, the boundary is a set of oriented Vertices.A topological part of a curve in 2D or 3D, the boundary is a set of oriented Vertices.)#");
    py::class_<TopoDS_TFace ,opencascade::handle<TopoDS_TFace>  , TopoDS_TShape >(m,"TopoDS_TFace",R"#(A topological part of a surface or of the 2D space. The boundary is a set of wires and vertices.A topological part of a surface or of the 2D space. The boundary is a set of wires and vertices.A topological part of a surface or of the 2D space. The boundary is a set of wires and vertices.)#");
    py::class_<TopoDS_TShell ,opencascade::handle<TopoDS_TShell>  , TopoDS_TShape >(m,"TopoDS_TShell",R"#(A set of faces connected by their edges.A set of faces connected by their edges.A set of faces connected by their edges.)#");
    py::class_<TopoDS_TSolid ,opencascade::handle<TopoDS_TSolid>  , TopoDS_TShape >(m,"TopoDS_TSolid",R"#(A Topological part of 3D space, bounded by shells, edges and vertices.A Topological part of 3D space, bounded by shells, edges and vertices.A Topological part of 3D space, bounded by shells, edges and vertices.)#");
    py::class_<TopoDS_TVertex ,opencascade::handle<TopoDS_TVertex> ,Py_TopoDS_TVertex , TopoDS_TShape >(m,"TopoDS_TVertex",R"#(A Vertex is a topological point in two or three dimensions.A Vertex is a topological point in two or three dimensions.A Vertex is a topological point in two or three dimensions.)#");
    py::class_<TopoDS_TWire ,opencascade::handle<TopoDS_TWire>  , TopoDS_TShape >(m,"TopoDS_TWire",R"#(A set of edges connected by their vertices.A set of edges connected by their vertices.A set of edges connected by their vertices.)#");
    py::class_<TopoDS_Vertex , shared_ptr<TopoDS_Vertex>  , TopoDS_Shape >(m,"TopoDS_Vertex",R"#(Describes a vertex which - references an underlying vertex with the potential to be given a location and an orientation - has a location for the underlying vertex, giving its placement in the local coordinate system - has an orientation for the underlying vertex, in terms of its geometry (as opposed to orientation in relation to other shapes).)#");
    py::class_<TopoDS_Wire , shared_ptr<TopoDS_Wire>  , TopoDS_Shape >(m,"TopoDS_Wire",R"#(Describes a wire which - references an underlying wire with the potential to be given a location and an orientation - has a location for the underlying wire, giving its placement in the local coordinate system - has an orientation for the underlying wire, in terms of its geometry (as opposed to orientation in relation to other shapes).)#");

};

// user-defined post-inclusion per module

// user-defined post

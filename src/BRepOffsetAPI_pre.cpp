
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax2.hxx>
#include <Law_Function.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom_BSplineSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <gp_Pln.hxx>
#include <BRepBuilderAPI_Sewing.hxx>
#include <TopoDS_Edge.hxx>

// module includes
#include <BRepOffsetAPI_DraftAngle.hxx>
#include <BRepOffsetAPI_FindContigousEdges.hxx>
#include <BRepOffsetAPI_MakeDraft.hxx>
#include <BRepOffsetAPI_MakeEvolved.hxx>
#include <BRepOffsetAPI_MakeFilling.hxx>
#include <BRepOffsetAPI_MakeOffset.hxx>
#include <BRepOffsetAPI_MakeOffsetShape.hxx>
#include <BRepOffsetAPI_MakePipe.hxx>
#include <BRepOffsetAPI_MakePipeShell.hxx>
#include <BRepOffsetAPI_MakeThickSolid.hxx>
#include <BRepOffsetAPI_MiddlePath.hxx>
#include <BRepOffsetAPI_NormalProjection.hxx>
#include <BRepOffsetAPI_SequenceOfSequenceOfReal.hxx>
#include <BRepOffsetAPI_SequenceOfSequenceOfShape.hxx>
#include <BRepOffsetAPI_Sewing.hxx>
#include <BRepOffsetAPI_ThruSections.hxx>

// template related includes
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfReal.hxx
#include "NCollection.hxx"
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfShape.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepOffsetAPI_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepOffsetAPI", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<TColStd_SequenceOfReal>(m,"BRepOffsetAPI_SequenceOfSequenceOfReal");  
    preregister_template_NCollection_Sequence<TopTools_SequenceOfShape>(m,"BRepOffsetAPI_SequenceOfSequenceOfShape");  

// classes forward declarations only
    py::class_<BRepOffsetAPI_DraftAngle , shared_ptr<BRepOffsetAPI_DraftAngle>  , BRepBuilderAPI_ModifyShape >(m,"BRepOffsetAPI_DraftAngle",R"#(Taper-adding transformations on a shape. The resulting shape is constructed by defining one face to be tapered after another one, as well as the geometric properties of their tapered transformation. Each tapered transformation is propagated along the series of faces which are tangential to one another and which contains the face to be tapered. This algorithm is useful in the construction of molds or dies. It facilitates the removal of the article being produced. A DraftAngle object provides a framework for: - initializing the construction algorithm with a given shape, - acquiring the data characterizing the faces to be tapered, - implementing the construction algorithm, and - consulting the results. Warning - This algorithm treats planar, cylindrical and conical faces. - Do not use shapes, which with a draft angle added to a face would modify the topology. This would, for example, involve creation of new vertices, edges or faces, or suppression of existing vertices, edges or faces. - Any face, which is continuous in tangency with the face to be tapered, will also be tapered. These connected faces must also respect the above criteria.)#");
    py::class_<BRepOffsetAPI_FindContigousEdges , shared_ptr<BRepOffsetAPI_FindContigousEdges>  >(m,"BRepOffsetAPI_FindContigousEdges",R"#(Provides methods to identify contigous boundaries for continuity control (C0, C1, ...))#");
    py::class_<BRepOffsetAPI_MakeDraft , shared_ptr<BRepOffsetAPI_MakeDraft>  , BRepBuilderAPI_MakeShape >(m,"BRepOffsetAPI_MakeDraft",R"#(Build a draft surface along a wire)#");
    py::class_<BRepOffsetAPI_MakeEvolved , shared_ptr<BRepOffsetAPI_MakeEvolved>  , BRepBuilderAPI_MakeShape >(m,"BRepOffsetAPI_MakeEvolved",R"#(Describes functions to build evolved shapes. An evolved shape is built from a planar spine (face or wire) and a profile (wire). The evolved shape is the unlooped sweep (pipe) of the profile along the spine. Self-intersections are removed. A MakeEvolved object provides a framework for: - defining the construction of an evolved shape, - implementing the construction algorithm, and - consulting the result. Computes an Evolved by 1 - sweeping a profile along a spine. 2 - removing the self-intersections.)#");
    py::class_<BRepOffsetAPI_MakeFilling , shared_ptr<BRepOffsetAPI_MakeFilling>  , BRepBuilderAPI_MakeShape >(m,"BRepOffsetAPI_MakeFilling",R"#(N-Side Filling This algorithm avoids to build a face from: * a set of edges defining the bounds of the face and some constraints the surface of the face has to satisfy * a set of edges and points defining some constraints the support surface has to satisfy * an initial surface to deform for satisfying the constraints * a set of parameters to control the constraints.)#");
    py::class_<BRepOffsetAPI_MakeOffset , shared_ptr<BRepOffsetAPI_MakeOffset>  , BRepBuilderAPI_MakeShape >(m,"BRepOffsetAPI_MakeOffset",R"#(Describes algorithms for offsetting wires from a set of wires contained in a planar face. A MakeOffset object provides a framework for: - defining the construction of an offset, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<BRepOffsetAPI_MakeOffsetShape , shared_ptr<BRepOffsetAPI_MakeOffsetShape>  , BRepBuilderAPI_MakeShape >(m,"BRepOffsetAPI_MakeOffsetShape",R"#(Describes functions to build a shell out of a shape. The result is an unlooped shape parallel to the source shape. A MakeOffsetShape object provides a framework for: - defining the construction of a shell - implementing the construction algorithm - consulting the result.)#");
    py::class_<BRepOffsetAPI_MakePipe , shared_ptr<BRepOffsetAPI_MakePipe>  , BRepPrimAPI_MakeSweep >(m,"BRepOffsetAPI_MakePipe",R"#(Describes functions to build pipes. A pipe is built a basis shape (called the profile) along a wire (called the spine) by sweeping. The profile must not contain solids. A MakePipe object provides a framework for: - defining the construction of a pipe, - implementing the construction algorithm, and - consulting the result. Warning The MakePipe class implements pipe constructions with G1 continuous spines only.)#");
    py::class_<BRepOffsetAPI_MakePipeShell , shared_ptr<BRepOffsetAPI_MakePipeShell>  , BRepPrimAPI_MakeSweep >(m,"BRepOffsetAPI_MakePipeShell",R"#(This class provides for a framework to construct a shell or a solid along a spine consisting in a wire. To produce a solid, the initial wire must be closed. Two approaches are used: - definition by section - by a section and a scaling law - by addition of successive intermediary sections - definition by sweep mode. - pseudo-Frenet - constant - binormal constant - normal defined by a surface support - normal defined by a guiding contour. The two global approaches can also be combined. You can also close the surface later in order to form a solid. Warning: some limitations exist -- Mode with auxilary spine is incompatible with hometetic laws -- Mode with auxilary spine and keep contact produce only CO surface.)#");
    py::class_<BRepOffsetAPI_MiddlePath , shared_ptr<BRepOffsetAPI_MiddlePath>  , BRepBuilderAPI_MakeShape >(m,"BRepOffsetAPI_MiddlePath",R"#(Describes functions to build a middle path of a pipe-like shape)#");
    py::class_<BRepOffsetAPI_NormalProjection , shared_ptr<BRepOffsetAPI_NormalProjection>  , BRepBuilderAPI_MakeShape >(m,"BRepOffsetAPI_NormalProjection",R"#(A framework to define projection onto a shape according to the normal from each point to be projected. The target shape is a face, and the source shape is an edge or a wire.)#");
    py::class_<BRepOffsetAPI_ThruSections , shared_ptr<BRepOffsetAPI_ThruSections>  , BRepBuilderAPI_MakeShape >(m,"BRepOffsetAPI_ThruSections",R"#(Describes functions to build a loft. This is a shell or a solid passing through a set of sections in a given sequence. Usually sections are wires, but the first and the last sections may be vertices (punctual sections).)#");
    py::class_<BRepOffsetAPI_MakeThickSolid , shared_ptr<BRepOffsetAPI_MakeThickSolid>  , BRepOffsetAPI_MakeOffsetShape >(m,"BRepOffsetAPI_MakeThickSolid",R"#(Describes functions to build hollowed solids. A hollowed solid is built from an initial solid and a set of faces on this solid, which are to be removed. The remaining faces of the solid become the walls of the hollowed solid, their thickness defined at the time of construction. the solid is built from an initial solid <S> and a set of faces {Fi} from <S>, builds a solid composed by two shells closed by the {Fi}. First shell <SS> is composed by all the faces of <S> expected {Fi}. Second shell is the offset shell of <SS>. A MakeThickSolid object provides a framework for: - defining the cross-section of a hollowed solid, - implementing the construction algorithm, and - consulting the result.)#");

};

// user-defined post-inclusion per module

// user-defined post

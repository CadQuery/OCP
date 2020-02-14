
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <gp_Pnt.hxx>
#include <TopoDS_Vertex.hxx>
#include <Bnd_Box.hxx>
#include <TopoDS_Vertex.hxx>

// module includes
#include <BRepExtrema_DistanceSS.hxx>
#include <BRepExtrema_DistShapeShape.hxx>
#include <BRepExtrema_ElementFilter.hxx>
#include <BRepExtrema_ExtCC.hxx>
#include <BRepExtrema_ExtCF.hxx>
#include <BRepExtrema_ExtFF.hxx>
#include <BRepExtrema_ExtPC.hxx>
#include <BRepExtrema_ExtPF.hxx>
#include <BRepExtrema_MapOfIntegerPackedMapOfInteger.hxx>
#include <BRepExtrema_OverlapTool.hxx>
#include <BRepExtrema_Poly.hxx>
#include <BRepExtrema_SelfIntersection.hxx>
#include <BRepExtrema_SeqOfSolution.hxx>
#include <BRepExtrema_ShapeProximity.hxx>
#include <BRepExtrema_SolutionElem.hxx>
#include <BRepExtrema_SupportType.hxx>
#include <BRepExtrema_TriangleSet.hxx>
#include <BRepExtrema_UnCompatibleShape.hxx>

// template related includes
// ./opencascade/BRepExtrema_TriangleSet.hxx
#include "NCollection.hxx"
// ./opencascade/BRepExtrema_SeqOfSolution.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepExtrema_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepExtrema", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BRepExtrema_SupportType>(m, "BRepExtrema_SupportType",R"#(None)#")
        .value("BRepExtrema_IsVertex",BRepExtrema_SupportType::BRepExtrema_IsVertex)
        .value("BRepExtrema_IsOnEdge",BRepExtrema_SupportType::BRepExtrema_IsOnEdge)
        .value("BRepExtrema_IsInFace",BRepExtrema_SupportType::BRepExtrema_IsInFace).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Vector<TopoDS_Face>(m,"BRepExtrema_ShapeList");  
    preregister_template_NCollection_Sequence<BRepExtrema_SolutionElem>(m,"BRepExtrema_SeqOfSolution");  

// classes forward declarations only
    py::class_<BRepExtrema_DistShapeShape , shared_ptr<BRepExtrema_DistShapeShape>  >(m,"BRepExtrema_DistShapeShape",R"#(This class provides tools to compute minimum distance between two Shapes (Compound,CompSolid, Solid, Shell, Face, Wire, Edge, Vertex).)#");
    py::class_<BRepExtrema_DistanceSS , shared_ptr<BRepExtrema_DistanceSS>  >(m,"BRepExtrema_DistanceSS",R"#(This class allows to compute minimum distance between two shapes (face edge vertex) and is used in DistShapeShape class.)#");
    py::class_<BRepExtrema_ElementFilter , shared_ptr<BRepExtrema_ElementFilter>  >(m,"BRepExtrema_ElementFilter",R"#(Filtering tool used to detect if two given mesh elements should be tested for overlapping/intersection or not.)#");
    py::class_<BRepExtrema_ExtCC , shared_ptr<BRepExtrema_ExtCC>  >(m,"BRepExtrema_ExtCC",R"#(None)#");
    py::class_<BRepExtrema_ExtCF , shared_ptr<BRepExtrema_ExtCF>  >(m,"BRepExtrema_ExtCF",R"#(None)#");
    py::class_<BRepExtrema_ExtFF , shared_ptr<BRepExtrema_ExtFF>  >(m,"BRepExtrema_ExtFF",R"#(None)#");
    py::class_<BRepExtrema_ExtPC , shared_ptr<BRepExtrema_ExtPC>  >(m,"BRepExtrema_ExtPC",R"#(None)#");
    py::class_<BRepExtrema_ExtPF , shared_ptr<BRepExtrema_ExtPF>  >(m,"BRepExtrema_ExtPF",R"#(None)#");
    py::class_<BRepExtrema_OverlapTool , shared_ptr<BRepExtrema_OverlapTool>  >(m,"BRepExtrema_OverlapTool",R"#(Tool class for for detection of overlapping of two BVH primitive sets. This tool is not intended to be used independently, and is integrated in other classes, implementing algorithms based on shape tessellation (BRepExtrema_ShapeProximity and BRepExtrema_SelfIntersection).)#");
    py::class_<BRepExtrema_Poly , shared_ptr<BRepExtrema_Poly>  >(m,"BRepExtrema_Poly",R"#(None)#");
    py::class_<BRepExtrema_ShapeProximity , shared_ptr<BRepExtrema_ShapeProximity>  >(m,"BRepExtrema_ShapeProximity",R"#(Tool class for shape proximity detection. For two given shapes and given tolerance (offset from the mesh) the algorithm allows to determine whether or not they are overlapped. The algorithm input consists of any shapes which can be decomposed into individual faces (used as basic shape elements). High performance is achieved through the use of existing triangulation of faces. So poly triangulation (with the desired deflection) should already be built. Note that solution is approximate (and corresponds to the deflection used for triangulation).)#");
    py::class_<BRepExtrema_SolutionElem , shared_ptr<BRepExtrema_SolutionElem>  >(m,"BRepExtrema_SolutionElem",R"#(This class is used to store information relative to the minimum distance between two shapes.)#");
    py::class_<BRepExtrema_TriangleSet , shared_ptr<BRepExtrema_TriangleSet>  >(m,"BRepExtrema_TriangleSet",R"#(Triangle set corresponding to specific face.Triangle set corresponding to specific face.)#");
    py::class_<BRepExtrema_SelfIntersection , shared_ptr<BRepExtrema_SelfIntersection>  , BRepExtrema_ElementFilter >(m,"BRepExtrema_SelfIntersection",R"#(Tool class for detection of self-sections in the given shape. This class is based on BRepExtrema_OverlapTool and thus uses shape tessellation to detect incorrect mesh fragments (pairs of overlapped triangles belonging to different faces). Thus, a result depends critically on the quality of mesh generator (e.g., BREP mesh is not always a good choice, because it can contain gaps between adjacent face triangulations, which may not share vertices on common edge; thus false overlap can be detected). As a result, this tool can be used for relatively fast approximated test which provides sub-set of potentially overlapped faces.)#");

};

// user-defined post-inclusion per module

// user-defined post

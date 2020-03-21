
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BRepAlgo_AsDes.hxx>
#include <TopoDS_Face.hxx>
#include <BRepOffset_Offset.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Compound.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepOffset_Analyse.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepOffset_Inter3d.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepOffset_Analyse.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <BRepOffset_Analyse.hxx>
#include <TopoDS_Wire.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_Image.hxx>
#include <Geom_Curve.hxx>

// module includes
#include <BRepOffset.hxx>
#include <BRepOffset_Analyse.hxx>
#include <BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval.hxx>
#include <BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape.hxx>
#include <BRepOffset_DataMapIteratorOfDataMapOfShapeOffset.hxx>
#include <BRepOffset_DataMapOfShapeListOfInterval.hxx>
#include <BRepOffset_DataMapOfShapeMapOfShape.hxx>
#include <BRepOffset_DataMapOfShapeOffset.hxx>
#include <BRepOffset_Error.hxx>
#include <BRepOffset_Inter2d.hxx>
#include <BRepOffset_Inter3d.hxx>
#include <BRepOffset_Interval.hxx>
#include <BRepOffset_ListIteratorOfListOfInterval.hxx>
#include <BRepOffset_ListOfInterval.hxx>
#include <BRepOffset_MakeLoops.hxx>
#include <BRepOffset_MakeOffset.hxx>
#include <BRepOffset_MakeSimpleOffset.hxx>
#include <BRepOffset_Mode.hxx>
#include <BRepOffset_Offset.hxx>
#include <BRepOffset_SimpleOffset.hxx>
#include <BRepOffset_Status.hxx>
#include <BRepOffset_Tool.hxx>
#include <BRepOffset_Type.hxx>

// template related includes
// ./opencascade/BRepOffset_DataMapOfShapeOffset.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeOffset.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_ListOfInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_ListOfInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeListOfInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeListOfInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeMapOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeMapOfShape.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepOffset_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepOffset", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BRepOffset_Type>(m, "BRepOffset_Type",R"#(None)#")
        .value("BRepOffset_Concave",BRepOffset_Type::BRepOffset_Concave)
        .value("BRepOffset_Convex",BRepOffset_Type::BRepOffset_Convex)
        .value("BRepOffset_Tangent",BRepOffset_Type::BRepOffset_Tangent)
        .value("BRepOffset_FreeBoundary",BRepOffset_Type::BRepOffset_FreeBoundary)
        .value("BRepOffset_Other",BRepOffset_Type::BRepOffset_Other).export_values();
    py::enum_<BRepOffsetSimple_Status>(m, "BRepOffsetSimple_Status",R"#(None)#")
        .value("BRepOffsetSimple_OK",BRepOffsetSimple_Status::BRepOffsetSimple_OK)
        .value("BRepOffsetSimple_NullInputShape",BRepOffsetSimple_Status::BRepOffsetSimple_NullInputShape)
        .value("BRepOffsetSimple_ErrorOffsetComputation",BRepOffsetSimple_Status::BRepOffsetSimple_ErrorOffsetComputation)
        .value("BRepOffsetSimple_ErrorWallFaceComputation",BRepOffsetSimple_Status::BRepOffsetSimple_ErrorWallFaceComputation)
        .value("BRepOffsetSimple_ErrorInvalidNbShells",BRepOffsetSimple_Status::BRepOffsetSimple_ErrorInvalidNbShells)
        .value("BRepOffsetSimple_ErrorNonClosedShell",BRepOffsetSimple_Status::BRepOffsetSimple_ErrorNonClosedShell).export_values();
    py::enum_<BRepOffset_Status>(m, "BRepOffset_Status",R"#(status of an offset face Good : Reversed : e.g. Offset > Radius of a cylinder Degenerated : e.g. Offset = Radius of a cylinder Unknown : e.g. for a Beziersurf)#")
        .value("BRepOffset_Good",BRepOffset_Status::BRepOffset_Good)
        .value("BRepOffset_Reversed",BRepOffset_Status::BRepOffset_Reversed)
        .value("BRepOffset_Degenerated",BRepOffset_Status::BRepOffset_Degenerated)
        .value("BRepOffset_Unknown",BRepOffset_Status::BRepOffset_Unknown).export_values();
    py::enum_<BRepOffset_Error>(m, "BRepOffset_Error",R"#(None)#")
        .value("BRepOffset_NoError",BRepOffset_Error::BRepOffset_NoError)
        .value("BRepOffset_UnknownError",BRepOffset_Error::BRepOffset_UnknownError)
        .value("BRepOffset_BadNormalsOnGeometry",BRepOffset_Error::BRepOffset_BadNormalsOnGeometry)
        .value("BRepOffset_C0Geometry",BRepOffset_Error::BRepOffset_C0Geometry)
        .value("BRepOffset_NullOffset",BRepOffset_Error::BRepOffset_NullOffset)
        .value("BRepOffset_NotConnectedShell",BRepOffset_Error::BRepOffset_NotConnectedShell).export_values();
    py::enum_<BRepOffset_Mode>(m, "BRepOffset_Mode",R"#(Lists the offset modes. These are the following: - BRepOffset_Skin which describes the offset along the surface of a solid, used to obtain a manifold topological space, - BRepOffset_Pipe which describes the offset of a curve, used to obtain a pre-surface, - BRepOffset_RectoVerso which describes the offset of a given surface shell along both sides of the surface.)#")
        .value("BRepOffset_Skin",BRepOffset_Mode::BRepOffset_Skin)
        .value("BRepOffset_Pipe",BRepOffset_Mode::BRepOffset_Pipe)
        .value("BRepOffset_RectoVerso",BRepOffset_Mode::BRepOffset_RectoVerso).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_DataMap<TopoDS_Shape, BRepOffset_Offset, TopTools_ShapeMapHasher>(m,"BRepOffset_DataMapOfShapeOffset");
    preregister_template_NCollection_List<BRepOffset_Interval>(m,"BRepOffset_ListOfInterval");
    preregister_template_NCollection_DataMap<TopoDS_Shape, BRepOffset_ListOfInterval, TopTools_ShapeMapHasher>(m,"BRepOffset_DataMapOfShapeListOfInterval");
    preregister_template_NCollection_DataMap<TopoDS_Shape, TopTools_MapOfShape, TopTools_ShapeMapHasher>(m,"BRepOffset_DataMapOfShapeMapOfShape");

// classes forward declarations only
    py::class_<BRepOffset , shared_ptr<BRepOffset> >(m,"BRepOffset",R"#(Auxiliary tools for offset algorithms)#");
    py::class_<BRepOffset_Analyse , shared_ptr<BRepOffset_Analyse> >(m,"BRepOffset_Analyse",R"#(Analyse of a shape consit to Find the part of edges convex concave tangent.)#");
    py::class_<BRepOffset_Inter2d , shared_ptr<BRepOffset_Inter2d> >(m,"BRepOffset_Inter2d",R"#(Computes the intersections betwwen edges on a face stores result is SD as AsDes from BRepOffset.)#");
    py::class_<BRepOffset_Inter3d , shared_ptr<BRepOffset_Inter3d> >(m,"BRepOffset_Inter3d",R"#(Computes the intersection face face in a set of faces Store the result in a SD as AsDes.)#");
    py::class_<BRepOffset_Interval , shared_ptr<BRepOffset_Interval> >(m,"BRepOffset_Interval",R"#(None)#");
    py::class_<BRepOffset_MakeLoops , shared_ptr<BRepOffset_MakeLoops> >(m,"BRepOffset_MakeLoops",R"#(None)#");
    py::class_<BRepOffset_MakeOffset , shared_ptr<BRepOffset_MakeOffset> >(m,"BRepOffset_MakeOffset",R"#(None)#");
    py::class_<BRepOffset_MakeSimpleOffset , shared_ptr<BRepOffset_MakeSimpleOffset> >(m,"BRepOffset_MakeSimpleOffset",R"#(Limitations: According to the algorithm nature result depends on the smoothness of input data. Smooth (G1-continuity) input shape will lead to the good result.)#");
    py::class_<BRepOffset_Offset , shared_ptr<BRepOffset_Offset> >(m,"BRepOffset_Offset",R"#(This class compute elemenary offset surface. Evaluate the offset generated : 1 - from a face. 2 - from an edge. 3 - from a vertex.)#");
    py::class_<BRepOffset_SimpleOffset ,opencascade::handle<BRepOffset_SimpleOffset> , BRepTools_Modification>(m,"BRepOffset_SimpleOffset",R"#(This class represents mechanism of simple offset algorithm i. e. topology-preserve offset construction without intersection.This class represents mechanism of simple offset algorithm i. e. topology-preserve offset construction without intersection.This class represents mechanism of simple offset algorithm i. e. topology-preserve offset construction without intersection.)#");
    py::class_<BRepOffset_Tool , shared_ptr<BRepOffset_Tool> >(m,"BRepOffset_Tool",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post

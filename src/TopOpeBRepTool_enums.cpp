
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BRepClass3d_SolidClassifier.hxx>
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Solid.hxx>
#include <TopOpeBRepTool_GeomTool.hxx>
#include <TopOpeBRepTool_AncestorsTool.hxx>
#include <TopOpeBRepTool_C2DF.hxx>
#include <TopOpeBRepTool_SolidClassifier.hxx>
#include <TopOpeBRepTool_CurveTool.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <TopOpeBRepTool_BoxSort.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <TopOpeBRepTool_ShapeTool.hxx>
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <TopOpeBRepTool_connexity.hxx>
#include <TopOpeBRepTool_face.hxx>
#include <TopOpeBRepTool_CLASSI.hxx>
#include <TopOpeBRepTool_TOOL.hxx>
#include <TopOpeBRepTool_CORRISO.hxx>
#include <TopOpeBRepTool_REGUW.hxx>
#include <TopOpeBRepTool_REGUS.hxx>
#include <TopOpeBRepTool_makeTransition.hxx>
#include <TopOpeBRepTool_mkTondgE.hxx>
#include <TopOpeBRepTool_PurgeInternalEdges.hxx>
#include <TopOpeBRepTool_FuseEdges.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <Geom2d_Curve.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Shape.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <gp_Dir.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <TopOpeBRepTool_C2DF.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>

// module includes
#include <TopOpeBRepTool.hxx>
#include <TopOpeBRepTool_2d.hxx>
#include <TopOpeBRepTool_AncestorsTool.hxx>
#include <TopOpeBRepTool_box.hxx>
#include <TopOpeBRepTool_BoxSort.hxx>
#include <TopOpeBRepTool_C2DF.hxx>
#include <TopOpeBRepTool_CLASSI.hxx>
#include <TopOpeBRepTool_connexity.hxx>
#include <TopOpeBRepTool_CORRISO.hxx>
#include <TopOpeBRepTool_CurveTool.hxx>
#include <TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF.hxx>
#include <TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeface.hxx>
#include <TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF.hxx>
#include <TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx>
#include <TopOpeBRepTool_DataMapOfShapeface.hxx>
#include <TopOpeBRepTool_DataMapOfShapeListOfC2DF.hxx>
#include <TopOpeBRepTool_define.hxx>
#include <TopOpeBRepTool_defineG.hxx>
#include <TopOpeBRepTool_DRAW.hxx>
#include <TopOpeBRepTool_EXPORT.hxx>
#include <TopOpeBRepTool_face.hxx>
#include <TopOpeBRepTool_FuseEdges.hxx>
#include <TopOpeBRepTool_GEOMETRY.hxx>
#include <TopOpeBRepTool_GeomTool.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <TopOpeBRepTool_IndexedDataMapOfShapeBox.hxx>
#include <TopOpeBRepTool_IndexedDataMapOfShapeBox2d.hxx>
#include <TopOpeBRepTool_IndexedDataMapOfShapeconnexity.hxx>
#include <TopOpeBRepTool_IndexedDataMapOfSolidClassifier.hxx>
#include <TopOpeBRepTool_KRO.hxx>
#include <TopOpeBRepTool_ListIteratorOfListOfC2DF.hxx>
#include <TopOpeBRepTool_ListOfC2DF.hxx>
#include <TopOpeBRepTool_makeTransition.hxx>
#include <TopOpeBRepTool_mkTondgE.hxx>
#include <TopOpeBRepTool_OutCurveType.hxx>
#include <TopOpeBRepTool_Plos.hxx>
#include <TopOpeBRepTool_PROJECT.hxx>
#include <TopOpeBRepTool_PShapeClassifier.hxx>
#include <TopOpeBRepTool_PSoClassif.hxx>
#include <TopOpeBRepTool_PURGE.hxx>
#include <TopOpeBRepTool_PurgeInternalEdges.hxx>
#include <TopOpeBRepTool_REGUS.hxx>
#include <TopOpeBRepTool_REGUW.hxx>
#include <TopOpeBRepTool_SC.hxx>
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <TopOpeBRepTool_ShapeTool.hxx>
#include <TopOpeBRepTool_SolidClassifier.hxx>
#include <TopOpeBRepTool_STATE.hxx>
#include <TopOpeBRepTool_tol.hxx>
#include <TopOpeBRepTool_TOOL.hxx>
#include <TopOpeBRepTool_TOPOLOGY.hxx>

// template related includes
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox2d.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfShapeface.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfShapeface.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepTool_ListOfC2DF.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepTool_ListOfC2DF.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfShapeListOfC2DF.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfShapeListOfC2DF.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeconnexity.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopOpeBRepTool_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopOpeBRepTool", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<TopOpeBRepTool_OutCurveType>(m, "TopOpeBRepTool_OutCurveType",R"#(None)#")
        .value("TopOpeBRepTool_BSPLINE1",TopOpeBRepTool_OutCurveType::TopOpeBRepTool_BSPLINE1)
        .value("TopOpeBRepTool_APPROX",TopOpeBRepTool_OutCurveType::TopOpeBRepTool_APPROX)
        .value("TopOpeBRepTool_INTERPOL",TopOpeBRepTool_OutCurveType::TopOpeBRepTool_INTERPOL).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<TopOpeBRepTool_face ,std::unique_ptr<TopOpeBRepTool_face>  >(m,"TopOpeBRepTool_face",R"#(None)#");
    py::class_<TopOpeBRepTool_CurveTool ,std::unique_ptr<TopOpeBRepTool_CurveTool>  >(m,"TopOpeBRepTool_CurveTool",R"#(None)#");
    py::class_<TopOpeBRepTool_makeTransition ,std::unique_ptr<TopOpeBRepTool_makeTransition>  >(m,"TopOpeBRepTool_makeTransition",R"#(None)#");
    py::class_<TopOpeBRepTool_CORRISO ,std::unique_ptr<TopOpeBRepTool_CORRISO>  >(m,"TopOpeBRepTool_CORRISO",R"#(Fref is built on x-periodic surface (x=u,v). S built on Fref's geometry, should be UVClosed.)#");
    py::class_<TopOpeBRepTool_ShapeClassifier ,std::unique_ptr<TopOpeBRepTool_ShapeClassifier>  >(m,"TopOpeBRepTool_ShapeClassifier",R"#(None)#");
    py::class_<TopOpeBRepTool_mkTondgE ,std::unique_ptr<TopOpeBRepTool_mkTondgE>  >(m,"TopOpeBRepTool_mkTondgE",R"#(None)#");
    py::class_<TopOpeBRepTool_C2DF ,std::unique_ptr<TopOpeBRepTool_C2DF>  >(m,"TopOpeBRepTool_C2DF",R"#(None)#");
    py::class_<TopOpeBRepTool_ShapeExplorer ,std::unique_ptr<TopOpeBRepTool_ShapeExplorer>  , TopExp_Explorer >(m,"TopOpeBRepTool_ShapeExplorer",R"#(Extends TopExp_Explorer by counting index of current item (for tracing and debug))#");
    py::class_<TopOpeBRepTool_ShapeTool ,std::unique_ptr<TopOpeBRepTool_ShapeTool>  >(m,"TopOpeBRepTool_ShapeTool",R"#(None)#");
    py::class_<TopOpeBRepTool_TOOL ,std::unique_ptr<TopOpeBRepTool_TOOL>  >(m,"TopOpeBRepTool_TOOL",R"#(None)#");
    py::class_<TopOpeBRepTool_GeomTool ,std::unique_ptr<TopOpeBRepTool_GeomTool>  >(m,"TopOpeBRepTool_GeomTool",R"#(None)#");
    py::class_<TopOpeBRepTool_REGUW ,std::unique_ptr<TopOpeBRepTool_REGUW>  >(m,"TopOpeBRepTool_REGUW",R"#(None)#");
    py::class_<TopOpeBRepTool_connexity ,std::unique_ptr<TopOpeBRepTool_connexity>  >(m,"TopOpeBRepTool_connexity",R"#(None)#");
    py::class_<TopOpeBRepTool_CLASSI ,std::unique_ptr<TopOpeBRepTool_CLASSI>  >(m,"TopOpeBRepTool_CLASSI",R"#(None)#");
    py::class_<TopOpeBRepTool_AncestorsTool ,std::unique_ptr<TopOpeBRepTool_AncestorsTool>  >(m,"TopOpeBRepTool_AncestorsTool",R"#(Describes the ancestors tool needed by the class DSFiller from TopOpeInter.)#");
    py::class_<TopOpeBRepTool_HBoxTool ,opencascade::handle<TopOpeBRepTool_HBoxTool>  , Standard_Transient >(m,"TopOpeBRepTool_HBoxTool",R"#()#");
    py::class_<TopOpeBRepTool_REGUS ,std::unique_ptr<TopOpeBRepTool_REGUS>  >(m,"TopOpeBRepTool_REGUS",R"#(None)#");
    py::class_<TopOpeBRepTool ,std::unique_ptr<TopOpeBRepTool>  >(m,"TopOpeBRepTool",R"#(This package provides services used by the TopOpeBRep package performing topological operations on the BRep data structure.)#");
    py::class_<TopOpeBRepTool_BoxSort ,std::unique_ptr<TopOpeBRepTool_BoxSort>  >(m,"TopOpeBRepTool_BoxSort",R"#(None)#");
    py::class_<TopOpeBRepTool_FuseEdges ,std::unique_ptr<TopOpeBRepTool_FuseEdges>  >(m,"TopOpeBRepTool_FuseEdges",R"#(This class can detect vertices in a face that can be considered useless and then perform the fuse of the edges and remove the useless vertices. By useles vertices, we mean : * vertices that have exactly two connex edges * the edges connex to the vertex must have exactly the same 2 connex faces . * The edges connex to the vertex must have the same geometric support.)#");
    py::class_<TopOpeBRepTool_SolidClassifier ,std::unique_ptr<TopOpeBRepTool_SolidClassifier>  >(m,"TopOpeBRepTool_SolidClassifier",R"#(None)#");
    py::class_<TopOpeBRepTool_PurgeInternalEdges ,std::unique_ptr<TopOpeBRepTool_PurgeInternalEdges>  >(m,"TopOpeBRepTool_PurgeInternalEdges",R"#(remove from a shape, the internal edges that are not connected to any face in the shape. We can get the list of the edges as a DataMapOfShapeListOfShape with a Face of the Shape as the key and a list of internal edges as the value. The list of internal edges means edges that are not connected to any face in the shape.)#");

// pre-register typdefs
// ./opencascade/TopOpeBRepTool_PSoClassif.hxx
// ./opencascade/TopOpeBRepTool_PShapeClassifier.hxx
// ./opencascade/TopOpeBRepTool_define.hxx
// ./opencascade/TopOpeBRepTool_face.hxx
// ./opencascade/TopOpeBRepTool_REGUW.hxx
// ./opencascade/TopOpeBRepTool_PURGE.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox2d.hxx
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, Bnd_Box2d, TopTools_OrientedShapeMapHasher>(m,"TopOpeBRepTool_IndexedDataMapOfShapeBox2d");  
// ./opencascade/TopOpeBRepTool_ListIteratorOfListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_CurveTool.hxx
// ./opencascade/TopOpeBRepTool.hxx
// ./opencascade/TopOpeBRepTool_makeTransition.hxx
// ./opencascade/TopOpeBRepTool_PROJECT.hxx
// ./opencascade/TopOpeBRepTool_DataMapOfShapeface.hxx
    preregister_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepTool_face, TopTools_ShapeMapHasher>(m,"TopOpeBRepTool_DataMapOfShapeface");  
// ./opencascade/TopOpeBRepTool_TOPOLOGY.hxx
// ./opencascade/TopOpeBRepTool_connexity.hxx
// ./opencascade/TopOpeBRepTool_GEOMETRY.hxx
// ./opencascade/TopOpeBRepTool_Plos.hxx
// ./opencascade/TopOpeBRepTool_CORRISO.hxx
// ./opencascade/TopOpeBRepTool_2d.hxx
// ./opencascade/TopOpeBRepTool_EXPORT.hxx
// ./opencascade/TopOpeBRepTool_KRO.hxx
// ./opencascade/TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF.hxx
// ./opencascade/TopOpeBRepTool_SolidClassifier.hxx
// ./opencascade/TopOpeBRepTool_ShapeClassifier.hxx
// ./opencascade/TopOpeBRepTool_CLASSI.hxx
// ./opencascade/TopOpeBRepTool_mkTondgE.hxx
// ./opencascade/TopOpeBRepTool_defineG.hxx
// ./opencascade/TopOpeBRepTool_BoxSort.hxx
// ./opencascade/TopOpeBRepTool_ListOfC2DF.hxx
    preregister_template_NCollection_List<TopOpeBRepTool_C2DF>(m,"TopOpeBRepTool_ListOfC2DF");  
// ./opencascade/TopOpeBRepTool_OutCurveType.hxx
// ./opencascade/TopOpeBRepTool_C2DF.hxx
// ./opencascade/TopOpeBRepTool_AncestorsTool.hxx
// ./opencascade/TopOpeBRepTool_ShapeExplorer.hxx
// ./opencascade/TopOpeBRepTool_DRAW.hxx
// ./opencascade/TopOpeBRepTool_PurgeInternalEdges.hxx
// ./opencascade/TopOpeBRepTool_ShapeTool.hxx
// ./opencascade/TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeface.hxx
// ./opencascade/TopOpeBRepTool_DataMapOfShapeListOfC2DF.hxx
    preregister_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepTool_ListOfC2DF, TopTools_ShapeMapHasher>(m,"TopOpeBRepTool_DataMapOfShapeListOfC2DF");  
// ./opencascade/TopOpeBRepTool_tol.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox.hxx
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, Bnd_Box, TopTools_OrientedShapeMapHasher>(m,"TopOpeBRepTool_IndexedDataMapOfShapeBox");  
// ./opencascade/TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx
    preregister_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepTool_C2DF, TopTools_OrientedShapeMapHasher>(m,"TopOpeBRepTool_DataMapOfOrientedShapeC2DF");  
// ./opencascade/TopOpeBRepTool_HBoxTool.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfSolidClassifier.hxx
// ./opencascade/TopOpeBRepTool_TOOL.hxx
// ./opencascade/TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_FuseEdges.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeconnexity.hxx
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepTool_connexity, TopTools_ShapeMapHasher>(m,"TopOpeBRepTool_IndexedDataMapOfShapeconnexity");  
// ./opencascade/TopOpeBRepTool_GeomTool.hxx
// ./opencascade/TopOpeBRepTool_SC.hxx
// ./opencascade/TopOpeBRepTool_REGUS.hxx
// ./opencascade/TopOpeBRepTool_STATE.hxx
// ./opencascade/TopOpeBRepTool_box.hxx

};

// user-defined post-inclusion per module

// user-defined post

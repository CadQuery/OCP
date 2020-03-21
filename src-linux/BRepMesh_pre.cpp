
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <gp_Circ2d.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <CSLib_Class2d.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Poly_Polygon3D.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_Box.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Shape.hxx>
#include <BRepMesh_DiscretRoot.hxx>

// module includes
#include <BRepMesh_Circle.hxx>
#include <BRepMesh_CircleInspector.hxx>
#include <BRepMesh_CircleTool.hxx>
#include <BRepMesh_Classifier.hxx>
#include <BRepMesh_Context.hxx>
#include <BRepMesh_CurveTessellator.hxx>
#include <BRepMesh_DataStructureOfDelaun.hxx>
#include <BRepMesh_Deflection.hxx>
#include <BRepMesh_DegreeOfFreedom.hxx>
#include <BRepMesh_Delaun.hxx>
#include <BRepMesh_DiscretFactory.hxx>
#include <BRepMesh_DiscretRoot.hxx>
#include <BRepMesh_Edge.hxx>
#include <BRepMesh_EdgeDiscret.hxx>
#include <BRepMesh_EdgeParameterProvider.hxx>
#include <BRepMesh_EdgeTessellationExtractor.hxx>
#include <BRepMesh_FaceChecker.hxx>
#include <BRepMesh_FaceDiscret.hxx>
#include <BRepMesh_FactoryError.hxx>
#include <BRepMesh_FastDiscret.hxx>
#include <BRepMesh_GeomTool.hxx>
#include <BRepMesh_IncrementalMesh.hxx>
#include <BRepMesh_MeshAlgoFactory.hxx>
#include <BRepMesh_MeshTool.hxx>
#include <BRepMesh_ModelBuilder.hxx>
#include <BRepMesh_ModelHealer.hxx>
#include <BRepMesh_ModelPostProcessor.hxx>
#include <BRepMesh_ModelPreProcessor.hxx>
#include <BRepMesh_OrientedEdge.hxx>
#include <BRepMesh_PairOfIndex.hxx>
#include <BRepMesh_PluginEntryType.hxx>
#include <BRepMesh_PluginMacro.hxx>
#include <BRepMesh_SelectorOfDataStructureOfDelaun.hxx>
#include <BRepMesh_ShapeTool.hxx>
#include <BRepMesh_ShapeVisitor.hxx>
#include <BRepMesh_Triangle.hxx>
#include <BRepMesh_Vertex.hxx>
#include <BRepMesh_VertexInspector.hxx>
#include <BRepMesh_VertexTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <IMeshData_Wire.hxx>

// Module definiiton
void register_BRepMesh_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepMesh", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BRepMesh_DegreeOfFreedom>(m, "BRepMesh_DegreeOfFreedom",R"#(None)#")
        .value("BRepMesh_Free",BRepMesh_DegreeOfFreedom::BRepMesh_Free)
        .value("BRepMesh_InVolume",BRepMesh_DegreeOfFreedom::BRepMesh_InVolume)
        .value("BRepMesh_OnSurface",BRepMesh_DegreeOfFreedom::BRepMesh_OnSurface)
        .value("BRepMesh_OnCurve",BRepMesh_DegreeOfFreedom::BRepMesh_OnCurve)
        .value("BRepMesh_Fixed",BRepMesh_DegreeOfFreedom::BRepMesh_Fixed)
        .value("BRepMesh_Frontier",BRepMesh_DegreeOfFreedom::BRepMesh_Frontier)
        .value("BRepMesh_Deleted",BRepMesh_DegreeOfFreedom::BRepMesh_Deleted).export_values();
    py::enum_<BRepMesh_FactoryError>(m, "BRepMesh_FactoryError",R"#(None)#")
        .value("BRepMesh_FE_NOERROR",BRepMesh_FactoryError::BRepMesh_FE_NOERROR)
        .value("BRepMesh_FE_LIBRARYNOTFOUND",BRepMesh_FactoryError::BRepMesh_FE_LIBRARYNOTFOUND)
        .value("BRepMesh_FE_FUNCTIONNOTFOUND",BRepMesh_FactoryError::BRepMesh_FE_FUNCTIONNOTFOUND)
        .value("BRepMesh_FE_CANNOTCREATEALGO",BRepMesh_FactoryError::BRepMesh_FE_CANNOTCREATEALGO).export_values();

//Python trampoline classes
    class Py_BRepMesh_DiscretRoot : public BRepMesh_DiscretRoot{
    public:
        using BRepMesh_DiscretRoot::BRepMesh_DiscretRoot;


        // public pure virtual
        void Perform() override { PYBIND11_OVERLOAD_PURE(void,BRepMesh_DiscretRoot,Perform,) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<BRepMesh_Circle , shared_ptr<BRepMesh_Circle> >(m,"BRepMesh_Circle",R"#(Describes a 2d circle with a size of only 3 Standard_Real numbers instead of gp who needs 7 Standard_Real numbers.)#");
    py::class_<BRepMesh_CircleInspector , shared_ptr<BRepMesh_CircleInspector> , NCollection_CellFilter_InspectorXY>(m,"BRepMesh_CircleInspector",R"#(Auxilary class to find circles shot by the given point.)#");
    py::class_<BRepMesh_CircleTool , shared_ptr<BRepMesh_CircleTool> >(m,"BRepMesh_CircleTool",R"#(Create sort and destroy the circles used in triangulation.)#");
    py::class_<BRepMesh_Classifier ,opencascade::handle<BRepMesh_Classifier> , Standard_Transient>(m,"BRepMesh_Classifier",R"#(Auxilary class intended for classification of points regarding internals of discrete face.)#");
    py::class_<BRepMesh_Context ,opencascade::handle<BRepMesh_Context> >(m,"BRepMesh_Context",R"#(Class implemeting default context of BRepMesh algorithm. Initializes context by default algorithms.)#");
    py::class_<BRepMesh_CurveTessellator ,opencascade::handle<BRepMesh_CurveTessellator> >(m,"BRepMesh_CurveTessellator",R"#(Auxiliary class performing tessellation of passed edge according to specified parameters.)#");
    py::class_<BRepMesh_DataStructureOfDelaun ,opencascade::handle<BRepMesh_DataStructureOfDelaun> , Standard_Transient>(m,"BRepMesh_DataStructureOfDelaun",R"#(Describes the data structure necessary for the mesh algorithms in two dimensions plane or on surface by meshing in UV space.)#");
    py::class_<BRepMesh_Deflection ,opencascade::handle<BRepMesh_Deflection> , Standard_Transient>(m,"BRepMesh_Deflection",R"#(Auxiliary tool encompassing methods to compute deflection of shapes.)#");
    py::class_<BRepMesh_DiscretFactory , shared_ptr_nodelete<BRepMesh_DiscretFactory> >(m,"BRepMesh_DiscretFactory",R"#(This class intended to setup / retrieve default triangulation algorithm. Use BRepMesh_DiscretFactory::Get() static method to retrieve global Factory instance. Use BRepMesh_DiscretFactory::Discret() method to retrieve meshing tool.)#");
    py::class_<BRepMesh_DiscretRoot ,opencascade::handle<BRepMesh_DiscretRoot>,Py_BRepMesh_DiscretRoot , Standard_Transient>(m,"BRepMesh_DiscretRoot",R"#(This is a common interface for meshing algorithms instantiated by Mesh Factory and implemented by plugins.This is a common interface for meshing algorithms instantiated by Mesh Factory and implemented by plugins.)#");
    py::class_<BRepMesh_EdgeDiscret ,opencascade::handle<BRepMesh_EdgeDiscret> >(m,"BRepMesh_EdgeDiscret",R"#(Class implements functionality of edge discret tool. Performs check of the edges for existing Poly_PolygonOnTriangulation. In case if it fits specified deflection, restores data structure using it, else clears edges from outdated data.)#");
    py::class_<BRepMesh_EdgeTessellationExtractor ,opencascade::handle<BRepMesh_EdgeTessellationExtractor> >(m,"BRepMesh_EdgeTessellationExtractor",R"#(Auxiliary class implements functionality retrieving tessellated representation of an edge stored in polygon.)#");
    py::class_<BRepMesh_FaceChecker ,opencascade::handle<BRepMesh_FaceChecker> , Standard_Transient>(m,"BRepMesh_FaceChecker",R"#(Auxiliary class checking wires of target face for self-intersections. Explodes wires of discrete face on sets of segments using tessellation data stored in model. Each segment is then checked for intersection with other ones. All collisions are registerd and returned as result of check.)#");
    py::class_<BRepMesh_FaceDiscret ,opencascade::handle<BRepMesh_FaceDiscret> >(m,"BRepMesh_FaceDiscret",R"#(Class implements functionality starting triangulation of model's faces. Each face is processed separately and can be executed in parallel mode. Uses mesh algo factory passed as initializer to create instance of triangulation algorithm according to type of surface of target face.)#");
    py::class_<BRepMesh_FastDiscret , shared_ptr<BRepMesh_FastDiscret> >(m,"BRepMesh_FastDiscret",R"#(None)#");
    py::class_<BRepMesh_GeomTool , shared_ptr<BRepMesh_GeomTool> >(m,"BRepMesh_GeomTool",R"#(Tool class accumulating common geometrical functions as well as functionality using shape geometry to produce data necessary for tessellation. General aim is to calculate discretization points for the given curve or iso curve of surface according to the specified parameters.)#");
    py::class_<BRepMesh_MeshAlgoFactory ,opencascade::handle<BRepMesh_MeshAlgoFactory> >(m,"BRepMesh_MeshAlgoFactory",R"#(Default implementation of IMeshTools_MeshAlgoFactory providing algorithms of different compexity depending on type of target surface.)#");
    py::class_<BRepMesh_MeshTool ,opencascade::handle<BRepMesh_MeshTool> , Standard_Transient>(m,"BRepMesh_MeshTool",R"#(Auxiliary tool providing API for manipulation with BRepMesh_DataStructureOfDelaun.)#");
    py::class_<BRepMesh_ModelBuilder ,opencascade::handle<BRepMesh_ModelBuilder> >(m,"BRepMesh_ModelBuilder",R"#(Class implements interface representing tool for discrete model building.)#");
    py::class_<BRepMesh_ModelHealer ,opencascade::handle<BRepMesh_ModelHealer> >(m,"BRepMesh_ModelHealer",R"#(Class implements functionality of model healer tool. Iterates over model's faces and checks consistency of their wires, i.e.whether wires are closed and do not contain self - intersections. In case if wire contains disconnected parts, ends of adjacent edges forming the gaps are connected in parametric space forcibly. The notion of this operation is to create correct discrete model defined relatively parametric space of target face taking into account connectivity and tolerances of 3D space only. This means that there are no specific computations are made for the sake of determination of U and V tolerance. Registers intersections on edges forming the face's shape and tries to amplify discrete represenation by decreasing of deflection for the target edge. Checks can be performed in parallel mode.)#");
    py::class_<BRepMesh_ModelPostProcessor ,opencascade::handle<BRepMesh_ModelPostProcessor> >(m,"BRepMesh_ModelPostProcessor",R"#(Class implements functionality of model post-processing tool. Stores polygons on triangulations to TopoDS_Edge.)#");
    py::class_<BRepMesh_ModelPreProcessor ,opencascade::handle<BRepMesh_ModelPreProcessor> >(m,"BRepMesh_ModelPreProcessor",R"#(Class implements functionality of model pre-processing tool. Nullifies existing polygonal data in case if model elements have IMeshData_Outdated status.)#");
    py::class_<BRepMesh_OrientedEdge , shared_ptr<BRepMesh_OrientedEdge> >(m,"BRepMesh_OrientedEdge",R"#(Light weighted structure representing simple link.)#");
    py::class_<BRepMesh_PairOfIndex , shared_ptr<BRepMesh_PairOfIndex> >(m,"BRepMesh_PairOfIndex",R"#(This class represents a pair of integer indices to store element indices connected to link. It is restricted to store more than two indices in it.)#");
    py::class_<BRepMesh_SelectorOfDataStructureOfDelaun ,opencascade::handle<BRepMesh_SelectorOfDataStructureOfDelaun> , Standard_Transient>(m,"BRepMesh_SelectorOfDataStructureOfDelaun",R"#(Describes a selector and an iterator on a selector of components of a mesh.)#");
    py::class_<BRepMesh_ShapeTool ,opencascade::handle<BRepMesh_ShapeTool> , Standard_Transient>(m,"BRepMesh_ShapeTool",R"#(Auxiliary class providing functionality to compute, retrieve and store data to TopoDS and model shape.)#");
    py::class_<BRepMesh_ShapeVisitor ,opencascade::handle<BRepMesh_ShapeVisitor> >(m,"BRepMesh_ShapeVisitor",R"#(Builds discrete model of a shape by adding faces and free edges. Computes deflection for corresponded shape and checks whether it fits existing polygonal representation. If not, cleans shape from outdated info.)#");
    py::class_<BRepMesh_Vertex , shared_ptr<BRepMesh_Vertex> >(m,"BRepMesh_Vertex",R"#(Light weighted structure representing vertex of the mesh in parametric space. Vertex could be associated with 3d point stored in external map.)#");
    py::class_<BRepMesh_VertexInspector , shared_ptr<BRepMesh_VertexInspector> , NCollection_CellFilter_InspectorXY>(m,"BRepMesh_VertexInspector",R"#(Class intended for fast searching of the coincidence points.)#");
    py::class_<BRepMesh_VertexTool ,opencascade::handle<BRepMesh_VertexTool> , Standard_Transient>(m,"BRepMesh_VertexTool",R"#(Describes data structure intended to keep mesh nodes defined in UV space and implements functionality providing their uniqueness regarding their position.)#");
    py::class_<BRepMesh_Edge , shared_ptr<BRepMesh_Edge> , BRepMesh_OrientedEdge>(m,"BRepMesh_Edge",R"#(Light weighted structure representing link of the mesh.)#");
    py::class_<BRepMesh_IncrementalMesh ,opencascade::handle<BRepMesh_IncrementalMesh> , BRepMesh_DiscretRoot>(m,"BRepMesh_IncrementalMesh",R"#(Builds the mesh of a shape with respect of their correctly triangulated parts)#");

};

// user-defined post-inclusion per module

// user-defined post

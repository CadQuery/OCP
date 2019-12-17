
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Circ2d.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <TopoDS_Face.hxx>
#include <Geom2dAdaptor_HCurve.hxx>
#include <TopoDS_Face.hxx>
#include <Poly_Triangulation.hxx>
#include <TopoDS_Edge.hxx>
#include <Bnd_Box.hxx>
#include <TopoDS_Vertex.hxx>
#include <Adaptor3d_Surface.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Bnd_Box.hxx>
#include <Geom2dAdaptor_HCurve.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <TopoDS_Vertex.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Poly_Triangulation.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopoDS_Shape.hxx>
#include <BRepMesh_DiscretRoot.hxx>
#include <BRepMesh_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <BRepMesh_FaceAttribute.hxx>
#include <BRepMesh_VertexInspector.hxx>
#include <BRepMesh_CircleInspector.hxx>
#include <BRepMesh_Classifier.hxx>
#include <Poly_Triangulation.hxx>
#include <BRepMesh_VertexTool.hxx>

// module includes
#include <BRepMesh.hxx>
#include <BRepMesh_Circle.hxx>
#include <BRepMesh_CircleInspector.hxx>
#include <BRepMesh_CircleTool.hxx>
#include <BRepMesh_Classifier.hxx>
#include <BRepMesh_DataStructureOfDelaun.hxx>
#include <BRepMesh_DegreeOfFreedom.hxx>
#include <BRepMesh_Delaun.hxx>
#include <BRepMesh_DiscretFactory.hxx>
#include <BRepMesh_DiscretRoot.hxx>
#include <BRepMesh_Edge.hxx>
#include <BRepMesh_EdgeParameterProvider.hxx>
#include <BRepMesh_EdgeTessellationExtractor.hxx>
#include <BRepMesh_EdgeTessellator.hxx>
#include <BRepMesh_FaceAttribute.hxx>
#include <BRepMesh_FactoryError.hxx>
#include <BRepMesh_FastDiscret.hxx>
#include <BRepMesh_FastDiscretFace.hxx>
#include <BRepMesh_GeomTool.hxx>
#include <BRepMesh_IEdgeTool.hxx>
#include <BRepMesh_IncrementalMesh.hxx>
#include <BRepMesh_OrientedEdge.hxx>
#include <BRepMesh_PairOfIndex.hxx>
#include <BRepMesh_PairOfPolygon.hxx>
#include <BRepMesh_PluginEntryType.hxx>
#include <BRepMesh_PluginMacro.hxx>
#include <BRepMesh_SelectorOfDataStructureOfDelaun.hxx>
#include <BRepMesh_ShapeTool.hxx>
#include <BRepMesh_Status.hxx>
#include <BRepMesh_Triangle.hxx>
#include <BRepMesh_Vertex.hxx>
#include <BRepMesh_VertexInspector.hxx>
#include <BRepMesh_VertexTool.hxx>
#include <BRepMesh_WireChecker.hxx>
#include <BRepMesh_WireInterferenceChecker.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepMesh_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepMesh", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BRepMesh_Status>(m, "BRepMesh_Status",R"#(Discribes the wires discretisation.)#")
        .value("BRepMesh_NoError",BRepMesh_Status::BRepMesh_NoError)
        .value("BRepMesh_OpenWire",BRepMesh_Status::BRepMesh_OpenWire)
        .value("BRepMesh_SelfIntersectingWire",BRepMesh_Status::BRepMesh_SelfIntersectingWire)
        .value("BRepMesh_Failure",BRepMesh_Status::BRepMesh_Failure)
        .value("BRepMesh_ReMesh",BRepMesh_Status::BRepMesh_ReMesh).export_values();
    py::enum_<BRepMesh_FactoryError>(m, "BRepMesh_FactoryError",R"#(None)#")
        .value("BRepMesh_FE_NOERROR",BRepMesh_FactoryError::BRepMesh_FE_NOERROR)
        .value("BRepMesh_FE_LIBRARYNOTFOUND",BRepMesh_FactoryError::BRepMesh_FE_LIBRARYNOTFOUND)
        .value("BRepMesh_FE_FUNCTIONNOTFOUND",BRepMesh_FactoryError::BRepMesh_FE_FUNCTIONNOTFOUND)
        .value("BRepMesh_FE_CANNOTCREATEALGO",BRepMesh_FactoryError::BRepMesh_FE_CANNOTCREATEALGO).export_values();
    py::enum_<BRepMesh_DegreeOfFreedom>(m, "BRepMesh_DegreeOfFreedom",R"#(None)#")
        .value("BRepMesh_Free",BRepMesh_DegreeOfFreedom::BRepMesh_Free)
        .value("BRepMesh_InVolume",BRepMesh_DegreeOfFreedom::BRepMesh_InVolume)
        .value("BRepMesh_OnSurface",BRepMesh_DegreeOfFreedom::BRepMesh_OnSurface)
        .value("BRepMesh_OnCurve",BRepMesh_DegreeOfFreedom::BRepMesh_OnCurve)
        .value("BRepMesh_Fixed",BRepMesh_DegreeOfFreedom::BRepMesh_Fixed)
        .value("BRepMesh_Frontier",BRepMesh_DegreeOfFreedom::BRepMesh_Frontier)
        .value("BRepMesh_Deleted",BRepMesh_DegreeOfFreedom::BRepMesh_Deleted).export_values();

//Python trampoline classes
    class Py_BRepMesh_IEdgeTool : public BRepMesh_IEdgeTool{
    public:
        using BRepMesh_IEdgeTool::BRepMesh_IEdgeTool;
        
        // public pure virtual
        Standard_Integer NbPoints() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,BRepMesh_IEdgeTool,NbPoints,) };
        Standard_Boolean Value(const Standard_Integer theIndex,Standard_Real & theParameter,gp_Pnt & thePoint,gp_Pnt2d & theUV) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepMesh_IEdgeTool,Value,theIndex,theParameter,thePoint,theUV) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_BRepMesh_DiscretRoot : public BRepMesh_DiscretRoot{
    public:
        using BRepMesh_DiscretRoot::BRepMesh_DiscretRoot;
        
        // public pure virtual
        void Perform() override { PYBIND11_OVERLOAD_PURE(void,BRepMesh_DiscretRoot,Perform,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<BRepMesh_OrientedEdge ,std::unique_ptr<BRepMesh_OrientedEdge>  >(m,"BRepMesh_OrientedEdge",R"#(Light weighted structure representing simple link.)#");
    py::class_<BRepMesh_Classifier ,std::unique_ptr<BRepMesh_Classifier>  >(m,"BRepMesh_Classifier",R"#(Auxilary class contains information about correctness of discretized face and used for classification of points regarding face internals.)#");
    py::class_<BRepMesh_CircleTool ,std::unique_ptr<BRepMesh_CircleTool>  >(m,"BRepMesh_CircleTool",R"#(Create sort and destroy the circles used in triangulation.)#");
    py::class_<BRepMesh_EdgeParameterProvider ,std::unique_ptr<BRepMesh_EdgeParameterProvider>  >(m,"BRepMesh_EdgeParameterProvider",R"#(Auxiliary class provides correct parameters on curve regarding SameParameter flag.)#");
    py::class_<BRepMesh_ShapeTool ,std::unique_ptr<BRepMesh_ShapeTool>  >(m,"BRepMesh_ShapeTool",R"#(None)#");
    py::class_<BRepMesh_WireInterferenceChecker ,std::unique_ptr<BRepMesh_WireInterferenceChecker>  >(m,"BRepMesh_WireInterferenceChecker",R"#(Auxilary class implementing functionality for checking interference between two discretized wires.)#");
    py::class_<BRepMesh_VertexTool ,std::unique_ptr<BRepMesh_VertexTool>  >(m,"BRepMesh_VertexTool",R"#(Describes data structure intended to keep mesh nodes defined in UV space and implements functionality providing their uniqueness regarding thir position.)#");
    py::class_<BRepMesh_FastDiscretFace ,opencascade::handle<BRepMesh_FastDiscretFace>  , Standard_Transient >(m,"BRepMesh_FastDiscretFace",R"#(Algorithm to mesh a face with respect of the frontier the deflection and by option the shared components.Algorithm to mesh a face with respect of the frontier the deflection and by option the shared components.)#");
    py::class_<BRepMesh_IEdgeTool ,opencascade::handle<BRepMesh_IEdgeTool> ,Py_BRepMesh_IEdgeTool , Standard_Transient >(m,"BRepMesh_IEdgeTool",R"#(Interface class providing API for edge tessellation tools.Interface class providing API for edge tessellation tools.)#");
    py::class_<BRepMesh_SelectorOfDataStructureOfDelaun ,std::unique_ptr<BRepMesh_SelectorOfDataStructureOfDelaun>  >(m,"BRepMesh_SelectorOfDataStructureOfDelaun",R"#(Describes a selector and an iterator on a selector of components of a mesh.)#");
    py::class_<BRepMesh_Circle ,std::unique_ptr<BRepMesh_Circle>  >(m,"BRepMesh_Circle",R"#(Describes a 2d circle with a size of only 3 Standard_Real numbers instead of gp who needs 7 Standard_Real numbers.)#");
    py::class_<BRepMesh_FaceAttribute ,opencascade::handle<BRepMesh_FaceAttribute>  , Standard_Transient >(m,"BRepMesh_FaceAttribute",R"#(Auxiliary class for FastDiscret and FastDiscretFace classes.Auxiliary class for FastDiscret and FastDiscretFace classes.)#");
    py::class_<BRepMesh_Vertex ,std::unique_ptr<BRepMesh_Vertex>  >(m,"BRepMesh_Vertex",R"#(Light weighted structure representing vertex of the mesh in parametric space. Vertex could be associated with 3d point stored in external map.)#");
    py::class_<BRepMesh_Delaun ,std::unique_ptr<BRepMesh_Delaun>  >(m,"BRepMesh_Delaun",R"#(Compute the Delaunay's triangulation with the algorithm of Watson.)#");
    py::class_<BRepMesh_PairOfIndex ,std::unique_ptr<BRepMesh_PairOfIndex>  >(m,"BRepMesh_PairOfIndex",R"#(This class represents a pair of integer indices to store element indices connected to link. It is restricted to store more than two indices in it.)#");
    py::class_<BRepMesh_VertexInspector ,std::unique_ptr<BRepMesh_VertexInspector>  >(m,"BRepMesh_VertexInspector",R"#(Class intended for fast searching of the coincidence points.)#");
    py::class_<BRepMesh_Edge ,std::unique_ptr<BRepMesh_Edge>  , BRepMesh_OrientedEdge >(m,"BRepMesh_Edge",R"#(Light weighted structure representing link of the mesh.)#");
    py::class_<BRepMesh_EdgeTessellator ,opencascade::handle<BRepMesh_EdgeTessellator>  , BRepMesh_IEdgeTool >(m,"BRepMesh_EdgeTessellator",R"#(Auxiliary class implements functionality producing tessellated representation of an edge based on edge geometry.Auxiliary class implements functionality producing tessellated representation of an edge based on edge geometry.)#");
    py::class_<BRepMesh_PairOfPolygon ,std::unique_ptr<BRepMesh_PairOfPolygon>  >(m,"BRepMesh_PairOfPolygon",R"#(None)#");
    py::class_<BRepMesh_DiscretFactory ,std::unique_ptr<BRepMesh_DiscretFactory, py::nodelete>  >(m,"BRepMesh_DiscretFactory",R"#(This class intended to setup / retrieve default triangulation algorithm. Use BRepMesh_DiscretFactory::Get() static method to retrieve global Factory instance. Use BRepMesh_DiscretFactory::Discret() method to retrieve meshing tool.)#");
    py::class_<BRepMesh_WireChecker ,std::unique_ptr<BRepMesh_WireChecker>  >(m,"BRepMesh_WireChecker",R"#(Auxilary class intended to check correctness of discretized face. In particular, checks boundaries of discretized face for self intersections and gaps.)#");
    py::class_<BRepMesh_DiscretRoot ,opencascade::handle<BRepMesh_DiscretRoot> ,Py_BRepMesh_DiscretRoot , Standard_Transient >(m,"BRepMesh_DiscretRoot",R"#(This is a common interface for meshing algorithms instantiated by Mesh Factory and implemented by plugins.This is a common interface for meshing algorithms instantiated by Mesh Factory and implemented by plugins.)#");
    py::class_<BRepMesh_EdgeTessellationExtractor ,opencascade::handle<BRepMesh_EdgeTessellationExtractor>  , BRepMesh_IEdgeTool >(m,"BRepMesh_EdgeTessellationExtractor",R"#(Auxiliary class implements functionality retrieving tessellated representation of an edge stored in polygon.Auxiliary class implements functionality retrieving tessellated representation of an edge stored in polygon.)#");
    py::class_<BRepMesh_FastDiscret ,opencascade::handle<BRepMesh_FastDiscret>  , Standard_Transient >(m,"BRepMesh_FastDiscret",R"#(Algorithm to mesh a shape with respect of the frontier the deflection and by option the shared components.Algorithm to mesh a shape with respect of the frontier the deflection and by option the shared components.)#");
    py::class_<BRepMesh_DataStructureOfDelaun ,opencascade::handle<BRepMesh_DataStructureOfDelaun>  , Standard_Transient >(m,"BRepMesh_DataStructureOfDelaun",R"#(Describes the data structure necessary for the mesh algorithms in two dimensions plane or on surface by meshing in UV space.Describes the data structure necessary for the mesh algorithms in two dimensions plane or on surface by meshing in UV space.)#");
    py::class_<BRepMesh_CircleInspector ,std::unique_ptr<BRepMesh_CircleInspector>  >(m,"BRepMesh_CircleInspector",R"#(Auxilary class to find circles shot by the given point.)#");
    py::class_<BRepMesh_IncrementalMesh ,opencascade::handle<BRepMesh_IncrementalMesh>  , BRepMesh_DiscretRoot >(m,"BRepMesh_IncrementalMesh",R"#(Builds the mesh of a shape with respect of their correctly triangulated partsBuilds the mesh of a shape with respect of their correctly triangulated parts)#");
    py::class_<BRepMesh_GeomTool ,std::unique_ptr<BRepMesh_GeomTool>  >(m,"BRepMesh_GeomTool",R"#(Tool class accumulating common geometrical functions as well as functionality using shape geometry to produce data necessary for tessellation. General aim is to calculate discretization points for the given curve or iso curve of surface according to the specified parameters.)#");

// pre-register typdefs
// ./opencascade/BRepMesh_Classifier.hxx
// ./opencascade/BRepMesh_PluginMacro.hxx
// ./opencascade/BRepMesh_Status.hxx
// ./opencascade/BRepMesh_VertexInspector.hxx
// ./opencascade/BRepMesh_CircleTool.hxx
// ./opencascade/BRepMesh_EdgeTessellationExtractor.hxx
// ./opencascade/BRepMesh_EdgeParameterProvider.hxx
// ./opencascade/BRepMesh_Edge.hxx
// ./opencascade/BRepMesh_ShapeTool.hxx
// ./opencascade/BRepMesh_Triangle.hxx
// ./opencascade/BRepMesh_OrientedEdge.hxx
// ./opencascade/BRepMesh_FactoryError.hxx
// ./opencascade/BRepMesh_EdgeTessellator.hxx
// ./opencascade/BRepMesh_WireInterferenceChecker.hxx
// ./opencascade/BRepMesh_FastDiscret.hxx
// ./opencascade/BRepMesh_VertexTool.hxx
// ./opencascade/BRepMesh_PairOfPolygon.hxx
// ./opencascade/BRepMesh_FastDiscretFace.hxx
// ./opencascade/BRepMesh_GeomTool.hxx
// ./opencascade/BRepMesh_IEdgeTool.hxx
// ./opencascade/BRepMesh_DiscretFactory.hxx
// ./opencascade/BRepMesh_SelectorOfDataStructureOfDelaun.hxx
// ./opencascade/BRepMesh_DataStructureOfDelaun.hxx
// ./opencascade/BRepMesh_Circle.hxx
// ./opencascade/BRepMesh_WireChecker.hxx
// ./opencascade/BRepMesh_FaceAttribute.hxx
// ./opencascade/BRepMesh_IncrementalMesh.hxx
// ./opencascade/BRepMesh_Vertex.hxx
// ./opencascade/BRepMesh_DiscretRoot.hxx
// ./opencascade/BRepMesh_Delaun.hxx
// ./opencascade/BRepMesh_PluginEntryType.hxx
// ./opencascade/BRepMesh_CircleInspector.hxx
// ./opencascade/BRepMesh.hxx
// ./opencascade/BRepMesh_PairOfIndex.hxx
// ./opencascade/BRepMesh_DegreeOfFreedom.hxx

};

// user-defined post-inclusion per module

// user-defined post

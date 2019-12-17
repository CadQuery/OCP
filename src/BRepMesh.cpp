
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


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
void register_BRepMesh(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepMesh"));


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

// classes


    static_cast<py::class_<BRepMesh_OrientedEdge ,std::unique_ptr<BRepMesh_OrientedEdge>  >>(m.attr("BRepMesh_OrientedEdge"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theFirstNode"),  py::arg("theLastNode") )
        .def("FirstNode",
             (Standard_Integer (BRepMesh_OrientedEdge::*)() const) static_cast<Standard_Integer (BRepMesh_OrientedEdge::*)() const>(&BRepMesh_OrientedEdge::FirstNode),
             R"#(Returns index of first node of the Link.)#" )
        .def("LastNode",
             (Standard_Integer (BRepMesh_OrientedEdge::*)() const) static_cast<Standard_Integer (BRepMesh_OrientedEdge::*)() const>(&BRepMesh_OrientedEdge::LastNode),
             R"#(Returns index of last node of the Link.)#" )
        .def("HashCode",
             (Standard_Integer (BRepMesh_OrientedEdge::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BRepMesh_OrientedEdge::*)( const Standard_Integer  ) const>(&BRepMesh_OrientedEdge::HashCode),
             R"#(Returns hash code for this edge.)#"  , py::arg("theUpper"))
        .def("IsEqual",
             (Standard_Boolean (BRepMesh_OrientedEdge::*)( const BRepMesh_OrientedEdge &  ) const) static_cast<Standard_Boolean (BRepMesh_OrientedEdge::*)( const BRepMesh_OrientedEdge &  ) const>(&BRepMesh_OrientedEdge::IsEqual),
             R"#(Checks this and other edge for equality.)#"  , py::arg("theOther"))
;


    static_cast<py::class_<BRepMesh_Classifier ,std::unique_ptr<BRepMesh_Classifier>  >>(m.attr("BRepMesh_Classifier"))
        .def(py::init<  >()  )
        .def("Destroy",
             (void (BRepMesh_Classifier::*)() ) static_cast<void (BRepMesh_Classifier::*)() >(&BRepMesh_Classifier::Destroy),
             R"#(Method is called on destruction. Clears internal data structures.)#" )
        .def("Perform",
             (TopAbs_State (BRepMesh_Classifier::*)( const gp_Pnt2d &  ) const) static_cast<TopAbs_State (BRepMesh_Classifier::*)( const gp_Pnt2d &  ) const>(&BRepMesh_Classifier::Perform),
             R"#(Performs classification of the given point regarding to face internals.)#"  , py::arg("thePoint"))
        .def("RegisterWire",
             (void (BRepMesh_Classifier::*)( const NCollection_Sequence<gp_Pnt2d> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepMesh_Classifier::*)( const NCollection_Sequence<gp_Pnt2d> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&BRepMesh_Classifier::RegisterWire),
             R"#(Registers wire specified by sequence of points for further classification of points.)#"  , py::arg("theWire"),  py::arg("theTolUV"),  py::arg("theUmin"),  py::arg("theUmax"),  py::arg("theVmin"),  py::arg("theVmax"))
;


    static_cast<py::class_<BRepMesh_CircleTool ,std::unique_ptr<BRepMesh_CircleTool>  >>(m.attr("BRepMesh_CircleTool"))
        .def(py::init< const opencascade::handle<NCollection_IncAllocator> & >()  , py::arg("theAllocator") )
        .def(py::init< const Standard_Integer,const opencascade::handle<NCollection_IncAllocator> & >()  , py::arg("theReservedSize"),  py::arg("theAllocator") )
        .def("Init",
             (void (BRepMesh_CircleTool::*)( const Standard_Integer  ) ) static_cast<void (BRepMesh_CircleTool::*)( const Standard_Integer  ) >(&BRepMesh_CircleTool::Init),
             R"#(Initializes the tool.)#"  , py::arg(""))
        .def("SetCellSize",
             (void (BRepMesh_CircleTool::*)( const Standard_Real  ) ) static_cast<void (BRepMesh_CircleTool::*)( const Standard_Real  ) >(&BRepMesh_CircleTool::SetCellSize),
             R"#(Sets new size for cell filter.)#"  , py::arg("theSize"))
        .def("SetCellSize",
             (void (BRepMesh_CircleTool::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepMesh_CircleTool::*)( const Standard_Real ,  const Standard_Real  ) >(&BRepMesh_CircleTool::SetCellSize),
             R"#(Sets new size for cell filter.)#"  , py::arg("theSizeX"),  py::arg("theSizeY"))
        .def("SetMinMaxSize",
             (void (BRepMesh_CircleTool::*)( const gp_XY & ,  const gp_XY &  ) ) static_cast<void (BRepMesh_CircleTool::*)( const gp_XY & ,  const gp_XY &  ) >(&BRepMesh_CircleTool::SetMinMaxSize),
             R"#(Sets limits of inspection area.)#"  , py::arg("theMin"),  py::arg("theMax"))
        .def("Bind",
             (void (BRepMesh_CircleTool::*)( const Standard_Integer ,  const gp_Circ2d &  ) ) static_cast<void (BRepMesh_CircleTool::*)( const Standard_Integer ,  const gp_Circ2d &  ) >(&BRepMesh_CircleTool::Bind),
             R"#(Binds the circle to the tool.)#"  , py::arg("theIndex"),  py::arg("theCircle"))
        .def("Bind",
             (Standard_Boolean (BRepMesh_CircleTool::*)( const Standard_Integer ,  const gp_XY & ,  const gp_XY & ,  const gp_XY &  ) ) static_cast<Standard_Boolean (BRepMesh_CircleTool::*)( const Standard_Integer ,  const gp_XY & ,  const gp_XY & ,  const gp_XY &  ) >(&BRepMesh_CircleTool::Bind),
             R"#(Computes circle on three points and bind it to the tool.)#"  , py::arg("theIndex"),  py::arg("thePoint1"),  py::arg("thePoint2"),  py::arg("thePoint3"))
        .def("MocBind",
             (void (BRepMesh_CircleTool::*)( const Standard_Integer  ) ) static_cast<void (BRepMesh_CircleTool::*)( const Standard_Integer  ) >(&BRepMesh_CircleTool::MocBind),
             R"#(Binds implicit zero circle.)#"  , py::arg("theIndex"))
        .def("Delete",
             (void (BRepMesh_CircleTool::*)( const Standard_Integer  ) ) static_cast<void (BRepMesh_CircleTool::*)( const Standard_Integer  ) >(&BRepMesh_CircleTool::Delete),
             R"#(Deletes a circle from the tool.)#"  , py::arg("theIndex"))
        .def("Select",
             (BRepMesh::ListOfInteger & (BRepMesh_CircleTool::*)( const gp_XY &  ) ) static_cast<BRepMesh::ListOfInteger & (BRepMesh_CircleTool::*)( const gp_XY &  ) >(&BRepMesh_CircleTool::Select),
             R"#(Select the circles shot by the given point.)#"  , py::arg("thePoint"))
        .def_static("MakeCircle_s",
                    (Standard_Boolean (*)( const gp_XY & ,  const gp_XY & ,  const gp_XY & ,  gp_XY & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (*)( const gp_XY & ,  const gp_XY & ,  const gp_XY & ,  gp_XY & ,  Standard_Real &  ) >(&BRepMesh_CircleTool::MakeCircle),
                    R"#(Computes circle on three points.)#"  , py::arg("thePoint1"),  py::arg("thePoint2"),  py::arg("thePoint3"),  py::arg("theLocation"),  py::arg("theRadius"))
;


    static_cast<py::class_<BRepMesh_EdgeParameterProvider ,std::unique_ptr<BRepMesh_EdgeParameterProvider>  >>(m.attr("BRepMesh_EdgeParameterProvider"))
        .def(py::init< const TopoDS_Edge &,const TopoDS_Face &,const opencascade::handle<TColStd_HArray1OfReal> & >()  , py::arg("theEdge"),  py::arg("theFace"),  py::arg("theParameters") )
        .def("Parameter",
             (Standard_Real (BRepMesh_EdgeParameterProvider::*)( const Standard_Integer ,  const gp_Pnt &  ) ) static_cast<Standard_Real (BRepMesh_EdgeParameterProvider::*)( const Standard_Integer ,  const gp_Pnt &  ) >(&BRepMesh_EdgeParameterProvider::Parameter),
             R"#(Returns parameter according to SameParameter flag of the edge. If SameParameter is TRUE returns value from parameters w/o changes, elsewhere scales initial parameter and tries to determine resulting value using projection of the corresponded 3D point on PCurve.)#"  , py::arg("theIndex"),  py::arg("thePoint3d"))
;

    register_default_constructor<BRepMesh_ShapeTool ,std::unique_ptr<BRepMesh_ShapeTool>>(m,"BRepMesh_ShapeTool");

    static_cast<py::class_<BRepMesh_ShapeTool ,std::unique_ptr<BRepMesh_ShapeTool>  >>(m.attr("BRepMesh_ShapeTool"))
        .def_static("MaxFaceTolerance_s",
                    (Standard_Real (*)( const TopoDS_Face &  ) ) static_cast<Standard_Real (*)( const TopoDS_Face &  ) >(&BRepMesh_ShapeTool::MaxFaceTolerance),
                    R"#(Returns maximum tolerance of the given face. Considers tolerances of edges and vertices contained in the given face.)#"  , py::arg("theFace"))
        .def_static("BoxMaxDimension_s",
                    (void (*)( const Bnd_Box & ,  Standard_Real &  ) ) static_cast<void (*)( const Bnd_Box & ,  Standard_Real &  ) >(&BRepMesh_ShapeTool::BoxMaxDimension),
                    R"#(Gets the maximum dimension of the given bounding box. If the given bounding box is void leaves the resulting value unchanged.)#"  , py::arg("theBox"),  py::arg("theMaxDimension"))
        .def_static("RelativeEdgeDeflection_s",
                    (Standard_Real (*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Real (*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) >(&BRepMesh_ShapeTool::RelativeEdgeDeflection),
                    R"#(Returns relative deflection for edge with respect to shape size.)#"  , py::arg("theEdge"),  py::arg("theDeflection"),  py::arg("theMaxShapeSize"),  py::arg("theAdjustmentCoefficient"))
        .def_static("FindUV_s",
                    (gp_XY (*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real ,  const opencascade::handle<BRepMesh_FaceAttribute> &  ) ) static_cast<gp_XY (*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real ,  const opencascade::handle<BRepMesh_FaceAttribute> &  ) >(&BRepMesh_ShapeTool::FindUV),
                    R"#(Checks 2d representations of 3d point with the given index for equality to avoid duplications.)#"  , py::arg("theIndexOfPnt3d"),  py::arg("thePnt2d"),  py::arg("theMinDistance"),  py::arg("theFaceAttribute"))
        .def_static("AddInFace_s",
                    (void (*)( const TopoDS_Face & ,  opencascade::handle<Poly_Triangulation> &  ) ) static_cast<void (*)( const TopoDS_Face & ,  opencascade::handle<Poly_Triangulation> &  ) >(&BRepMesh_ShapeTool::AddInFace),
                    R"#(Stores the given triangulation into the given face.)#"  , py::arg("theFace"),  py::arg("theTriangulation"))
        .def_static("NullifyFace_s",
                    (void (*)( const TopoDS_Face &  ) ) static_cast<void (*)( const TopoDS_Face &  ) >(&BRepMesh_ShapeTool::NullifyFace),
                    R"#(Nullifies triangulation stored in the face.)#"  , py::arg("theFace"))
        .def_static("NullifyEdge_s",
                    (void (*)( const TopoDS_Edge & ,  const opencascade::handle<Poly_Triangulation> & ,  const TopLoc_Location &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const opencascade::handle<Poly_Triangulation> & ,  const TopLoc_Location &  ) >(&BRepMesh_ShapeTool::NullifyEdge),
                    R"#(Nullifies polygon on triangulation stored in the edge.)#"  , py::arg("theEdge"),  py::arg("theTriangulation"),  py::arg("theLocation"))
        .def_static("UpdateEdge_s",
                    (void (*)( const TopoDS_Edge & ,  const opencascade::handle<Poly_PolygonOnTriangulation> & ,  const opencascade::handle<Poly_Triangulation> & ,  const TopLoc_Location &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const opencascade::handle<Poly_PolygonOnTriangulation> & ,  const opencascade::handle<Poly_Triangulation> & ,  const TopLoc_Location &  ) >(&BRepMesh_ShapeTool::UpdateEdge),
                    R"#(Updates the given edge by the given tessellated representation.)#"  , py::arg("theEdge"),  py::arg("thePolygon"),  py::arg("theTriangulation"),  py::arg("theLocation"))
        .def_static("UpdateEdge_s",
                    (void (*)( const TopoDS_Edge & ,  const opencascade::handle<Poly_PolygonOnTriangulation> & ,  const opencascade::handle<Poly_PolygonOnTriangulation> & ,  const opencascade::handle<Poly_Triangulation> & ,  const TopLoc_Location &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const opencascade::handle<Poly_PolygonOnTriangulation> & ,  const opencascade::handle<Poly_PolygonOnTriangulation> & ,  const opencascade::handle<Poly_Triangulation> & ,  const TopLoc_Location &  ) >(&BRepMesh_ShapeTool::UpdateEdge),
                    R"#(Updates the given seam edge by the given tessellated representations.)#"  , py::arg("theEdge"),  py::arg("thePolygon1"),  py::arg("thePolygon2"),  py::arg("theTriangulation"),  py::arg("theLocation"))
        .def_static("UseLocation_s",
                    (gp_Pnt (*)( const gp_Pnt & ,  const TopLoc_Location &  ) ) static_cast<gp_Pnt (*)( const gp_Pnt & ,  const TopLoc_Location &  ) >(&BRepMesh_ShapeTool::UseLocation),
                    R"#(Applies location to the given point and return result.)#"  , py::arg("thePnt"),  py::arg("theLoc"))
        .def_static("IsDegenerated_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepMesh_ShapeTool::IsDegenerated),
                    R"#(Checks is the given edge degenerated. Checks geometrical parameters in case if IsDegenerated flag is not set.)#"  , py::arg("theEdge"),  py::arg("theFace"))
;


    static_cast<py::class_<BRepMesh_VertexTool ,std::unique_ptr<BRepMesh_VertexTool>  >>(m.attr("BRepMesh_VertexTool"))
        .def(py::init< const opencascade::handle<NCollection_IncAllocator> & >()  , py::arg("theAllocator") )
        .def("SetCellSize",
             (void (BRepMesh_VertexTool::*)( const Standard_Real  ) ) static_cast<void (BRepMesh_VertexTool::*)( const Standard_Real  ) >(&BRepMesh_VertexTool::SetCellSize),
             R"#(Sets new size of cell for cellfilter equal in both directions.)#"  , py::arg("theSize"))
        .def("SetCellSize",
             (void (BRepMesh_VertexTool::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepMesh_VertexTool::*)( const Standard_Real ,  const Standard_Real  ) >(&BRepMesh_VertexTool::SetCellSize),
             R"#(Sets new size of cell for cellfilter.)#"  , py::arg("theSizeX"),  py::arg("theSizeY"))
        .def("SetTolerance",
             (void (BRepMesh_VertexTool::*)( const Standard_Real  ) ) static_cast<void (BRepMesh_VertexTool::*)( const Standard_Real  ) >(&BRepMesh_VertexTool::SetTolerance),
             R"#(Sets the tolerance to be used for identification of coincident vertices equal for both dimensions.)#"  , py::arg("theTolerance"))
        .def("SetTolerance",
             (void (BRepMesh_VertexTool::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepMesh_VertexTool::*)( const Standard_Real ,  const Standard_Real  ) >(&BRepMesh_VertexTool::SetTolerance),
             R"#(Sets the tolerance to be used for identification of coincident vertices.)#"  , py::arg("theToleranceX"),  py::arg("theToleranceY"))
        .def("GetTolerance",
             (void (BRepMesh_VertexTool::*)( Standard_Real & ,  Standard_Real &  ) ) static_cast<void (BRepMesh_VertexTool::*)( Standard_Real & ,  Standard_Real &  ) >(&BRepMesh_VertexTool::GetTolerance),
             R"#(Gets the tolerance to be used for identification of coincident vertices.)#"  , py::arg("theToleranceX"),  py::arg("theToleranceY"))
        .def("Add",
             (Standard_Integer (BRepMesh_VertexTool::*)( const BRepMesh_Vertex & ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (BRepMesh_VertexTool::*)( const BRepMesh_Vertex & ,  const Standard_Boolean  ) >(&BRepMesh_VertexTool::Add),
             R"#(Adds vertex with empty data to the tool.)#"  , py::arg("theVertex"),  py::arg("isForceAdd"))
        .def("Delete",
             (void (BRepMesh_VertexTool::*)( const Standard_Integer  ) ) static_cast<void (BRepMesh_VertexTool::*)( const Standard_Integer  ) >(&BRepMesh_VertexTool::Delete),
             R"#(Deletes vertex with the given index from the tool.)#"  , py::arg("theIndex"))
        .def("Vertices",
             (const BRepMesh::HVectorOfVertex & (BRepMesh_VertexTool::*)() const) static_cast<const BRepMesh::HVectorOfVertex & (BRepMesh_VertexTool::*)() const>(&BRepMesh_VertexTool::Vertices),
             R"#(Returns set of mesh vertices.)#" )
        .def("ChangeVertices",
             (BRepMesh::HVectorOfVertex & (BRepMesh_VertexTool::*)() ) static_cast<BRepMesh::HVectorOfVertex & (BRepMesh_VertexTool::*)() >(&BRepMesh_VertexTool::ChangeVertices),
             R"#(Returns set of mesh vertices.)#" )
        .def("FindKey",
             (const BRepMesh_Vertex & (BRepMesh_VertexTool::*)( const Standard_Integer  ) ) static_cast<const BRepMesh_Vertex & (BRepMesh_VertexTool::*)( const Standard_Integer  ) >(&BRepMesh_VertexTool::FindKey),
             R"#(Returns vertex by the given index.)#"  , py::arg("theIndex"))
        .def("FindIndex",
             (Standard_Integer (BRepMesh_VertexTool::*)( const BRepMesh_Vertex &  ) ) static_cast<Standard_Integer (BRepMesh_VertexTool::*)( const BRepMesh_Vertex &  ) >(&BRepMesh_VertexTool::FindIndex),
             R"#(Returns index of the given vertex.)#"  , py::arg("theVertex"))
        .def("Extent",
             (Standard_Integer (BRepMesh_VertexTool::*)() const) static_cast<Standard_Integer (BRepMesh_VertexTool::*)() const>(&BRepMesh_VertexTool::Extent),
             R"#(Returns a number of vertices.)#" )
        .def("IsEmpty",
             (Standard_Boolean (BRepMesh_VertexTool::*)() const) static_cast<Standard_Boolean (BRepMesh_VertexTool::*)() const>(&BRepMesh_VertexTool::IsEmpty),
             R"#(Returns True when the map contains no keys.)#" )
        .def("Substitute",
             (void (BRepMesh_VertexTool::*)( const Standard_Integer ,  const BRepMesh_Vertex &  ) ) static_cast<void (BRepMesh_VertexTool::*)( const Standard_Integer ,  const BRepMesh_Vertex &  ) >(&BRepMesh_VertexTool::Substitute),
             R"#(Substitutes vertex with the given by the given vertex with attributes.)#"  , py::arg("theIndex"),  py::arg("theVertex"))
        .def("RemoveLast",
             (void (BRepMesh_VertexTool::*)() ) static_cast<void (BRepMesh_VertexTool::*)() >(&BRepMesh_VertexTool::RemoveLast),
             R"#(Remove last node from the structure.)#" )
        .def("GetListOfDelNodes",
             (const BRepMesh::ListOfInteger & (BRepMesh_VertexTool::*)() const) static_cast<const BRepMesh::ListOfInteger & (BRepMesh_VertexTool::*)() const>(&BRepMesh_VertexTool::GetListOfDelNodes),
             R"#(Returns the list with indexes of vertices that have movability attribute equal to BRepMesh_Deleted and can be replaced with another node.)#" )
        .def("Statistics",
             (void (BRepMesh_VertexTool::*)( std::ostream &  ) const) static_cast<void (BRepMesh_VertexTool::*)( std::ostream &  ) const>(&BRepMesh_VertexTool::Statistics),
             R"#(Prints statistics.)#"  , py::arg("theStream"))
;


    static_cast<py::class_<BRepMesh_FastDiscretFace ,opencascade::handle<BRepMesh_FastDiscretFace>  , Standard_Transient >>(m.attr("BRepMesh_FastDiscretFace"))
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theAngle"),  py::arg("theMinSize"),  py::arg("isInternalVerticesMode"),  py::arg("isControlSurfaceDeflection") )
        .def("Perform",
             (void (BRepMesh_FastDiscretFace::*)( const opencascade::handle<BRepMesh_FaceAttribute> &  ) ) static_cast<void (BRepMesh_FastDiscretFace::*)( const opencascade::handle<BRepMesh_FaceAttribute> &  ) >(&BRepMesh_FastDiscretFace::Perform),
             R"#(None)#"  , py::arg("theAttribute"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_FastDiscretFace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_FastDiscretFace::*)() const>(&BRepMesh_FastDiscretFace::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_FastDiscretFace::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_FastDiscretFace::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepMesh_IEdgeTool ,opencascade::handle<BRepMesh_IEdgeTool> ,Py_BRepMesh_IEdgeTool , Standard_Transient >>(m.attr("BRepMesh_IEdgeTool"))
        .def("NbPoints",
             (Standard_Integer (BRepMesh_IEdgeTool::*)() const) static_cast<Standard_Integer (BRepMesh_IEdgeTool::*)() const>(&BRepMesh_IEdgeTool::NbPoints),
             R"#(Returns number of tessellation points.)#" )
        .def("Value",
             (Standard_Boolean (BRepMesh_IEdgeTool::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt2d &  ) ) static_cast<Standard_Boolean (BRepMesh_IEdgeTool::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt2d &  ) >(&BRepMesh_IEdgeTool::Value),
             R"#(Returns parameters of solution with the given index.)#"  , py::arg("theIndex"),  py::arg("theParameter"),  py::arg("thePoint"),  py::arg("theUV"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_IEdgeTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_IEdgeTool::*)() const>(&BRepMesh_IEdgeTool::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_IEdgeTool::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_IEdgeTool::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepMesh_SelectorOfDataStructureOfDelaun ,std::unique_ptr<BRepMesh_SelectorOfDataStructureOfDelaun>  >>(m.attr("BRepMesh_SelectorOfDataStructureOfDelaun"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<BRepMesh_DataStructureOfDelaun> & >()  , py::arg("theMesh") )
        .def("Initialize",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const opencascade::handle<BRepMesh_DataStructureOfDelaun> &  ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const opencascade::handle<BRepMesh_DataStructureOfDelaun> &  ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::Initialize),
             R"#(Initializes selector by the mesh.)#"  , py::arg("theMesh"))
        .def("NeighboursOf",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Vertex &  ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Vertex &  ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOf),
             R"#(Selects all neighboring elements of the given node.)#"  , py::arg("theNode"))
        .def("NeighboursOfNode",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const Standard_Integer  ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const Standard_Integer  ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOfNode),
             R"#(Selects all neighboring elements of node with the given index.)#"  , py::arg("theNodeIndex"))
        .def("NeighboursOf",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Edge &  ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Edge &  ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOf),
             R"#(Selects all neighboring elements of the given link.)#"  , py::arg("theLink"))
        .def("NeighboursOfLink",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const Standard_Integer  ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const Standard_Integer  ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOfLink),
             R"#(Selects all neighboring elements of link with the given index.)#"  , py::arg("theLinkIndex"))
        .def("NeighboursOf",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Triangle &  ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Triangle &  ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOf),
             R"#(Selects all neighboring elements of the given element.)#"  , py::arg("theElement"))
        .def("NeighboursOfElement",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const Standard_Integer  ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const Standard_Integer  ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOfElement),
             R"#(Selects all neighboring elements by nodes of the given element.)#"  , py::arg("theElementIndex"))
        .def("NeighboursByEdgeOf",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Triangle &  ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Triangle &  ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursByEdgeOf),
             R"#(Selects all neighboring elements by links of the given element.)#"  , py::arg("theElement"))
        .def("NeighboursOf",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_SelectorOfDataStructureOfDelaun &  ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_SelectorOfDataStructureOfDelaun &  ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOf),
             R"#(Adds a level of neighbours by edge to the selector.)#"  , py::arg(""))
        .def("AddNeighbours",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)() ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)() >(&BRepMesh_SelectorOfDataStructureOfDelaun::AddNeighbours),
             R"#(Adds a level of neighbours by edge the selector.)#" )
        .def("Nodes",
             (const BRepMesh::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const) static_cast<const BRepMesh::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const>(&BRepMesh_SelectorOfDataStructureOfDelaun::Nodes),
             R"#(Returns selected nodes.)#" )
        .def("Links",
             (const BRepMesh::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const) static_cast<const BRepMesh::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const>(&BRepMesh_SelectorOfDataStructureOfDelaun::Links),
             R"#(Returns selected links.)#" )
        .def("Elements",
             (const BRepMesh::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const) static_cast<const BRepMesh::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const>(&BRepMesh_SelectorOfDataStructureOfDelaun::Elements),
             R"#(Returns selected elements.)#" )
        .def("FrontierLinks",
             (const BRepMesh::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const) static_cast<const BRepMesh::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const>(&BRepMesh_SelectorOfDataStructureOfDelaun::FrontierLinks),
             R"#(Gives the list of incices of frontier links.)#" )
;


    static_cast<py::class_<BRepMesh_Circle ,std::unique_ptr<BRepMesh_Circle>  >>(m.attr("BRepMesh_Circle"))
        .def(py::init<  >()  )
        .def(py::init< const gp_XY &,const Standard_Real >()  , py::arg("theLocation"),  py::arg("theRadius") )
        .def("SetLocation",
             (void (BRepMesh_Circle::*)( const gp_XY &  ) ) static_cast<void (BRepMesh_Circle::*)( const gp_XY &  ) >(&BRepMesh_Circle::SetLocation),
             R"#(Sets location of a circle.)#"  , py::arg("theLocation"))
        .def("SetRadius",
             (void (BRepMesh_Circle::*)( const Standard_Real  ) ) static_cast<void (BRepMesh_Circle::*)( const Standard_Real  ) >(&BRepMesh_Circle::SetRadius),
             R"#(Sets radius of a circle.)#"  , py::arg("theRadius"))
        .def("Location",
             (const gp_XY & (BRepMesh_Circle::*)() const) static_cast<const gp_XY & (BRepMesh_Circle::*)() const>(&BRepMesh_Circle::Location),
             R"#(Returns location of a circle.)#" )
        .def("Radius",
             (const Standard_Real & (BRepMesh_Circle::*)() const) static_cast<const Standard_Real & (BRepMesh_Circle::*)() const>(&BRepMesh_Circle::Radius),
             R"#(Returns radius of a circle.)#" )
;


    static_cast<py::class_<BRepMesh_FaceAttribute ,opencascade::handle<BRepMesh_FaceAttribute>  , Standard_Transient >>(m.attr("BRepMesh_FaceAttribute"))
        .def(py::init<  const NCollection_Handle<BRepMesh::DMapOfVertexInteger> &, const NCollection_Handle<BRepMesh::DMapOfIntegerPnt> & >()  , py::arg("theBoundaryVertices"),  py::arg("theBoundaryPoints") )
        .def(py::init< const TopoDS_Face &, const NCollection_Handle<BRepMesh::DMapOfVertexInteger> &, const NCollection_Handle<BRepMesh::DMapOfIntegerPnt> &,const Standard_Boolean >()  , py::arg("theFace"),  py::arg("theBoundaryVertices"),  py::arg("theBoundaryPoints"),  py::arg("theAdaptiveMin") )
        .def("Surface",
             (const opencascade::handle<BRepAdaptor_HSurface> & (BRepMesh_FaceAttribute::*)() const) static_cast<const opencascade::handle<BRepAdaptor_HSurface> & (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::Surface),
             R"#(Returns face's surface.)#" )
        .def("IsInitialized",
             (Standard_Boolean (BRepMesh_FaceAttribute::*)() const) static_cast<Standard_Boolean (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::IsInitialized),
             R"#(Returns True in case if this attribute has already been intialized.)#" )
        .def("SetFace",
             (void (BRepMesh_FaceAttribute::*)( const TopoDS_Face & ,  const Standard_Boolean  ) ) static_cast<void (BRepMesh_FaceAttribute::*)( const TopoDS_Face & ,  const Standard_Boolean  ) >(&BRepMesh_FaceAttribute::SetFace),
             R"#(Initializes this attribute by the given face.)#"  , py::arg("theFace"),  py::arg("theAdaptiveMin"))
        .def("Face",
             (const TopoDS_Face & (BRepMesh_FaceAttribute::*)() const) static_cast<const TopoDS_Face & (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::Face),
             R"#(Returns forward oriented face to be used for calculations.)#" )
        .def("SetBoundaryVertices",
             (void (BRepMesh_FaceAttribute::*)(  const NCollection_Handle<BRepMesh::DMapOfVertexInteger> &  ) ) static_cast<void (BRepMesh_FaceAttribute::*)(  const NCollection_Handle<BRepMesh::DMapOfVertexInteger> &  ) >(&BRepMesh_FaceAttribute::SetBoundaryVertices),
             R"#(Sets boundary vertices map.)#"  , py::arg("theVertices"))
        .def("SetBoundaryPoints",
             (void (BRepMesh_FaceAttribute::*)(  const NCollection_Handle<BRepMesh::DMapOfIntegerPnt> &  ) ) static_cast<void (BRepMesh_FaceAttribute::*)(  const NCollection_Handle<BRepMesh::DMapOfIntegerPnt> &  ) >(&BRepMesh_FaceAttribute::SetBoundaryPoints),
             R"#(Sets boundary points map.)#"  , py::arg("theBoundaryPoints"))
        .def("ToleranceU",
             (Standard_Real (BRepMesh_FaceAttribute::*)() const) static_cast<Standard_Real (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::ToleranceU),
             R"#(Returns U tolerance of face calculated regarding its parameters.)#" )
        .def("ToleranceV",
             (Standard_Real (BRepMesh_FaceAttribute::*)() const) static_cast<Standard_Real (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::ToleranceV),
             R"#(Returns V tolerance of face calculated regarding its parameters.)#" )
        .def("GetDefFace",
             (Standard_Real (BRepMesh_FaceAttribute::*)() const) static_cast<Standard_Real (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::GetDefFace),
             R"#(Gives face deflection parameter.)#" )
        .def("SetDefFace",
             (void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) ) static_cast<void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) >(&BRepMesh_FaceAttribute::SetDefFace),
             R"#(Sets face deflection.)#"  , py::arg("theDefFace"))
        .def("GetUMin",
             (Standard_Real (BRepMesh_FaceAttribute::*)() const) static_cast<Standard_Real (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::GetUMin),
             R"#(Gives minimal value in U domain.)#" )
        .def("SetUMin",
             (void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) ) static_cast<void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) >(&BRepMesh_FaceAttribute::SetUMin),
             R"#(Sets minimal value in U domain.)#"  , py::arg("theUMin"))
        .def("GetVMin",
             (Standard_Real (BRepMesh_FaceAttribute::*)() const) static_cast<Standard_Real (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::GetVMin),
             R"#(Gives minimal value in V domain.)#" )
        .def("SetVMin",
             (void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) ) static_cast<void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) >(&BRepMesh_FaceAttribute::SetVMin),
             R"#(Sets minimal value in V domain.)#"  , py::arg("theVMin"))
        .def("GetUMax",
             (Standard_Real (BRepMesh_FaceAttribute::*)() const) static_cast<Standard_Real (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::GetUMax),
             R"#(Gives maximal value in U domain.)#" )
        .def("SetUMax",
             (void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) ) static_cast<void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) >(&BRepMesh_FaceAttribute::SetUMax),
             R"#(Sets maximal value in U domain.)#"  , py::arg("theUMax"))
        .def("GetVMax",
             (Standard_Real (BRepMesh_FaceAttribute::*)() const) static_cast<Standard_Real (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::GetVMax),
             R"#(Gives maximal value in V domain.)#" )
        .def("SetVMax",
             (void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) ) static_cast<void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) >(&BRepMesh_FaceAttribute::SetVMax),
             R"#(Sets maximal value in V domain.)#"  , py::arg("theVMax"))
        .def("GetDeltaX",
             (Standard_Real (BRepMesh_FaceAttribute::*)() const) static_cast<Standard_Real (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::GetDeltaX),
             R"#(Gives value of step in U domain.)#" )
        .def("SetDeltaX",
             (void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) ) static_cast<void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) >(&BRepMesh_FaceAttribute::SetDeltaX),
             R"#(Sets value of step in U domain.)#"  , py::arg("theDeltaX"))
        .def("GetDeltaY",
             (Standard_Real (BRepMesh_FaceAttribute::*)() const) static_cast<Standard_Real (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::GetDeltaY),
             R"#(Gives value of step in V domain.)#" )
        .def("SetDeltaY",
             (void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) ) static_cast<void (BRepMesh_FaceAttribute::*)( const Standard_Real  ) >(&BRepMesh_FaceAttribute::SetDeltaY),
             R"#(Sets value of step in V domain.)#"  , py::arg("theDeltaY"))
        .def("GetStatus",
             (Standard_Integer (BRepMesh_FaceAttribute::*)() const) static_cast<Standard_Integer (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::GetStatus),
             R"#(Sets set of status flags for this face.)#" )
        .def("SetStatus",
             (void (BRepMesh_FaceAttribute::*)( const BRepMesh_Status  ) ) static_cast<void (BRepMesh_FaceAttribute::*)( const BRepMesh_Status  ) >(&BRepMesh_FaceAttribute::SetStatus),
             R"#(Sets status flag for this face.)#"  , py::arg("theStatus"))
        .def("IsValid",
             (Standard_Boolean (BRepMesh_FaceAttribute::*)() const) static_cast<Standard_Boolean (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::IsValid),
             R"#(Returns TRUE in case if computed data is valid.)#" )
        .def("Clear",
             (void (BRepMesh_FaceAttribute::*)() ) static_cast<void (BRepMesh_FaceAttribute::*)() >(&BRepMesh_FaceAttribute::Clear),
             R"#(Clear face attribute.)#" )
        .def("ChangeInternalEdges",
             (BRepMesh::HDMapOfShapePairOfPolygon & (BRepMesh_FaceAttribute::*)() ) static_cast<BRepMesh::HDMapOfShapePairOfPolygon & (BRepMesh_FaceAttribute::*)() >(&BRepMesh_FaceAttribute::ChangeInternalEdges),
             R"#(Gives reference to map of internal edges of face.)#" )
        .def("ChangeLocation2D",
             (BRepMesh::HDMapOfIntegerListOfXY & (BRepMesh_FaceAttribute::*)() ) static_cast<BRepMesh::HDMapOfIntegerListOfXY & (BRepMesh_FaceAttribute::*)() >(&BRepMesh_FaceAttribute::ChangeLocation2D),
             R"#(Gives reference to map of 2D points of discretization.)#" )
        .def("ChangeSurfacePoints",
             (BRepMesh::HDMapOfIntegerPnt & (BRepMesh_FaceAttribute::*)() ) static_cast<BRepMesh::HDMapOfIntegerPnt & (BRepMesh_FaceAttribute::*)() >(&BRepMesh_FaceAttribute::ChangeSurfacePoints),
             R"#(Gives reference to map of 3D points of discretization.)#" )
        .def("ChangeSurfaceVertices",
             (BRepMesh::HDMapOfVertexInteger & (BRepMesh_FaceAttribute::*)() ) static_cast<BRepMesh::HDMapOfVertexInteger & (BRepMesh_FaceAttribute::*)() >(&BRepMesh_FaceAttribute::ChangeSurfaceVertices),
             R"#(Gives reference to map of vertices of discretization.)#" )
        .def("ChangeVertexEdgeMap",
             (BRepMesh::HIMapOfInteger & (BRepMesh_FaceAttribute::*)() ) static_cast<BRepMesh::HIMapOfInteger & (BRepMesh_FaceAttribute::*)() >(&BRepMesh_FaceAttribute::ChangeVertexEdgeMap),
             R"#(Gives reference on map of (vertex, edge) pairs of face.)#" )
        .def("ChangeStructure",
             (opencascade::handle<BRepMesh_DataStructureOfDelaun> & (BRepMesh_FaceAttribute::*)() ) static_cast<opencascade::handle<BRepMesh_DataStructureOfDelaun> & (BRepMesh_FaceAttribute::*)() >(&BRepMesh_FaceAttribute::ChangeStructure),
             R"#(Gives Delaunay data structure.)#" )
        .def("ChangeClassifier",
             (BRepMesh::HClassifier & (BRepMesh_FaceAttribute::*)() ) static_cast<BRepMesh::HClassifier & (BRepMesh_FaceAttribute::*)() >(&BRepMesh_FaceAttribute::ChangeClassifier),
             R"#(Returns classifier.)#" )
        .def("ChangeMeshNodes",
             (BRepMesh::HVectorOfVertex & (BRepMesh_FaceAttribute::*)() ) static_cast<BRepMesh::HVectorOfVertex & (BRepMesh_FaceAttribute::*)() >(&BRepMesh_FaceAttribute::ChangeMeshNodes),
             R"#(Returns mesh nodes calculated for boundaries.)#" )
        .def("LastPointId",
             (Standard_Integer (BRepMesh_FaceAttribute::*)() const) static_cast<Standard_Integer (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::LastPointId),
             R"#(Gives the number of different locations in 3D space.)#" )
        .def("GetPoint",
             (const gp_Pnt & (BRepMesh_FaceAttribute::*)( const BRepMesh_Vertex &  ) const) static_cast<const gp_Pnt & (BRepMesh_FaceAttribute::*)( const BRepMesh_Vertex &  ) const>(&BRepMesh_FaceAttribute::GetPoint),
             R"#(Gives the 3D location of the vertex.)#"  , py::arg("theVertex"))
        .def("GetPoint",
             (const gp_Pnt & (BRepMesh_FaceAttribute::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt & (BRepMesh_FaceAttribute::*)( const Standard_Integer  ) const>(&BRepMesh_FaceAttribute::GetPoint),
             R"#(Gives the 3D location of the vertex.)#"  , py::arg("theIndex"))
        .def("AddNode",
             (void (BRepMesh_FaceAttribute::*)( const Standard_Integer ,  const gp_XY & ,  const BRepMesh_DegreeOfFreedom ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<void (BRepMesh_FaceAttribute::*)( const Standard_Integer ,  const gp_XY & ,  const BRepMesh_DegreeOfFreedom ,  Standard_Integer & ,  Standard_Integer &  ) >(&BRepMesh_FaceAttribute::AddNode),
             R"#(Adds node with the given parameters to mesh.)#"  , py::arg("theIndex"),  py::arg("theUV"),  py::arg("theMovability"),  py::arg("theNodeIndex"),  py::arg("theNodeOnEdgeIndex"))
        .def("Scale",
             (gp_XY (BRepMesh_FaceAttribute::*)( const gp_XY & ,  const Standard_Boolean  ) ) static_cast<gp_XY (BRepMesh_FaceAttribute::*)( const gp_XY & ,  const Standard_Boolean  ) >(&BRepMesh_FaceAttribute::Scale),
             R"#(Scales the given point from real parametric space to face basis and otherwise.)#"  , py::arg("thePoint2d"),  py::arg("isToFaceBasis"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_FaceAttribute::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_FaceAttribute::*)() const>(&BRepMesh_FaceAttribute::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_FaceAttribute::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_FaceAttribute::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepMesh_Vertex ,std::unique_ptr<BRepMesh_Vertex>  >>(m.attr("BRepMesh_Vertex"))
        .def(py::init<  >()  )
        .def(py::init< const gp_XY &,const Standard_Integer,const BRepMesh_DegreeOfFreedom >()  , py::arg("theUV"),  py::arg("theLocation3d"),  py::arg("theMovability") )
        .def(py::init< const Standard_Real,const Standard_Real,const BRepMesh_DegreeOfFreedom >()  , py::arg("theU"),  py::arg("theV"),  py::arg("theMovability") )
        .def("Initialize",
             (void (BRepMesh_Vertex::*)( const gp_XY & ,  const Standard_Integer ,  const BRepMesh_DegreeOfFreedom  ) ) static_cast<void (BRepMesh_Vertex::*)( const gp_XY & ,  const Standard_Integer ,  const BRepMesh_DegreeOfFreedom  ) >(&BRepMesh_Vertex::Initialize),
             R"#(Initializes vertex associated with point in 3d space.)#"  , py::arg("theUV"),  py::arg("theLocation3d"),  py::arg("theMovability"))
        .def("Coord",
             (const gp_XY & (BRepMesh_Vertex::*)() const) static_cast<const gp_XY & (BRepMesh_Vertex::*)() const>(&BRepMesh_Vertex::Coord),
             R"#(Returns position of the vertex in parametric space.)#" )
        .def("ChangeCoord",
             (gp_XY & (BRepMesh_Vertex::*)() ) static_cast<gp_XY & (BRepMesh_Vertex::*)() >(&BRepMesh_Vertex::ChangeCoord),
             R"#(Returns position of the vertex in parametric space for modification.)#" )
        .def("Location3d",
             (Standard_Integer (BRepMesh_Vertex::*)() const) static_cast<Standard_Integer (BRepMesh_Vertex::*)() const>(&BRepMesh_Vertex::Location3d),
             R"#(Returns index of 3d point associated with the vertex.)#" )
        .def("Movability",
             (BRepMesh_DegreeOfFreedom (BRepMesh_Vertex::*)() const) static_cast<BRepMesh_DegreeOfFreedom (BRepMesh_Vertex::*)() const>(&BRepMesh_Vertex::Movability),
             R"#(Returns movability of the vertex.)#" )
        .def("SetMovability",
             (void (BRepMesh_Vertex::*)( const BRepMesh_DegreeOfFreedom  ) ) static_cast<void (BRepMesh_Vertex::*)( const BRepMesh_DegreeOfFreedom  ) >(&BRepMesh_Vertex::SetMovability),
             R"#(Sets movability of the vertex.)#"  , py::arg("theMovability"))
        .def("HashCode",
             (Standard_Integer (BRepMesh_Vertex::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BRepMesh_Vertex::*)( const Standard_Integer  ) const>(&BRepMesh_Vertex::HashCode),
             R"#(Returns hash code for this vertex.)#"  , py::arg("Upper"))
        .def("IsEqual",
             (Standard_Boolean (BRepMesh_Vertex::*)( const BRepMesh_Vertex &  ) const) static_cast<Standard_Boolean (BRepMesh_Vertex::*)( const BRepMesh_Vertex &  ) const>(&BRepMesh_Vertex::IsEqual),
             R"#(Checks for equality with another vertex.)#"  , py::arg("theOther"))
;


    static_cast<py::class_<BRepMesh_Delaun ,std::unique_ptr<BRepMesh_Delaun>  >>(m.attr("BRepMesh_Delaun"))
        .def(py::init< NCollection_Array1<BRepMesh_Vertex> & >()  , py::arg("theVertices") )
        .def(py::init< const opencascade::handle<BRepMesh_DataStructureOfDelaun> &,NCollection_Array1<BRepMesh_Vertex> & >()  , py::arg("theOldMesh"),  py::arg("theVertices") )
        .def(py::init< const opencascade::handle<BRepMesh_DataStructureOfDelaun> &,NCollection_Array1<Standard_Integer> & >()  , py::arg("theOldMesh"),  py::arg("theVertexIndices") )
        .def(py::init< const opencascade::handle<BRepMesh_DataStructureOfDelaun> &,NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer >()  , py::arg("theOldMesh"),  py::arg("theVertexIndices"),  py::arg("theCellsCountU"),  py::arg("theCellsCountV") )
        .def("Init",
             (void (BRepMesh_Delaun::*)( NCollection_Array1<BRepMesh_Vertex> &  ) ) static_cast<void (BRepMesh_Delaun::*)( NCollection_Array1<BRepMesh_Vertex> &  ) >(&BRepMesh_Delaun::Init),
             R"#(Initializes the triangulation with an array of vertices.)#"  , py::arg("theVertices"))
        .def("RemoveVertex",
             (void (BRepMesh_Delaun::*)( const BRepMesh_Vertex &  ) ) static_cast<void (BRepMesh_Delaun::*)( const BRepMesh_Vertex &  ) >(&BRepMesh_Delaun::RemoveVertex),
             R"#(Removes a vertex from the triangulation.)#"  , py::arg("theVertex"))
        .def("AddVertices",
             (void (BRepMesh_Delaun::*)( NCollection_Array1<BRepMesh_Vertex> &  ) ) static_cast<void (BRepMesh_Delaun::*)( NCollection_Array1<BRepMesh_Vertex> &  ) >(&BRepMesh_Delaun::AddVertices),
             R"#(Adds some vertices into the triangulation.)#"  , py::arg("theVertices"))
        .def("UseEdge",
             (Standard_Boolean (BRepMesh_Delaun::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (BRepMesh_Delaun::*)( const Standard_Integer  ) >(&BRepMesh_Delaun::UseEdge),
             R"#(Modify mesh to use the edge.)#"  , py::arg("theEdge"))
        .def("Result",
             (const opencascade::handle<BRepMesh_DataStructureOfDelaun> & (BRepMesh_Delaun::*)() const) static_cast<const opencascade::handle<BRepMesh_DataStructureOfDelaun> & (BRepMesh_Delaun::*)() const>(&BRepMesh_Delaun::Result),
             R"#(Gives the Mesh data structure.)#" )
        .def("Frontier",
             (BRepMesh::HMapOfInteger (BRepMesh_Delaun::*)() const) static_cast<BRepMesh::HMapOfInteger (BRepMesh_Delaun::*)() const>(&BRepMesh_Delaun::Frontier),
             R"#(Gives the list of frontier edges.)#" )
        .def("InternalEdges",
             (BRepMesh::HMapOfInteger (BRepMesh_Delaun::*)() const) static_cast<BRepMesh::HMapOfInteger (BRepMesh_Delaun::*)() const>(&BRepMesh_Delaun::InternalEdges),
             R"#(Gives the list of internal edges.)#" )
        .def("FreeEdges",
             (BRepMesh::HMapOfInteger (BRepMesh_Delaun::*)() const) static_cast<BRepMesh::HMapOfInteger (BRepMesh_Delaun::*)() const>(&BRepMesh_Delaun::FreeEdges),
             R"#(Gives the list of free edges used only one time)#" )
        .def("GetVertex",
             (const BRepMesh_Vertex & (BRepMesh_Delaun::*)( const Standard_Integer  ) const) static_cast<const BRepMesh_Vertex & (BRepMesh_Delaun::*)( const Standard_Integer  ) const>(&BRepMesh_Delaun::GetVertex),
             R"#(Gives vertex with the given index)#"  , py::arg("theIndex"))
        .def("GetEdge",
             (const BRepMesh_Edge & (BRepMesh_Delaun::*)( const Standard_Integer  ) const) static_cast<const BRepMesh_Edge & (BRepMesh_Delaun::*)( const Standard_Integer  ) const>(&BRepMesh_Delaun::GetEdge),
             R"#(Gives edge with the given index)#"  , py::arg("theIndex"))
        .def("GetTriangle",
             (const BRepMesh_Triangle & (BRepMesh_Delaun::*)( const Standard_Integer  ) const) static_cast<const BRepMesh_Triangle & (BRepMesh_Delaun::*)( const Standard_Integer  ) const>(&BRepMesh_Delaun::GetTriangle),
             R"#(Gives triangle with the given index)#"  , py::arg("theIndex"))
        .def("Circles",
             (const BRepMesh_CircleTool & (BRepMesh_Delaun::*)() const) static_cast<const BRepMesh_CircleTool & (BRepMesh_Delaun::*)() const>(&BRepMesh_Delaun::Circles),
             R"#(Returns tool used to build mesh consistent to Delaunay criteria.)#" )
        .def("Contains",
             (Standard_Boolean (BRepMesh_Delaun::*)( const Standard_Integer ,  const BRepMesh_Vertex & ,  const Standard_Real ,  Standard_Integer &  ) const) static_cast<Standard_Boolean (BRepMesh_Delaun::*)( const Standard_Integer ,  const BRepMesh_Vertex & ,  const Standard_Real ,  Standard_Integer &  ) const>(&BRepMesh_Delaun::Contains),
             R"#(Test is the given triangle contains the given vertex.)#"  , py::arg("theTriangleId"),  py::arg("theVertex"),  py::arg("theSqTolerance"),  py::arg("theEdgeOn"))
;


    static_cast<py::class_<BRepMesh_EdgeTessellator ,opencascade::handle<BRepMesh_EdgeTessellator>  , BRepMesh_IEdgeTool >>(m.attr("BRepMesh_EdgeTessellator"))
        .def(py::init< const TopoDS_Edge &,const opencascade::handle<BRepMesh_FaceAttribute> &, const NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("theEdge"),  py::arg("theFaceAttribute"),  py::arg("theMapOfSharedFaces"),  py::arg("theLinDeflection"),  py::arg("theAngDeflection"),  py::arg("theMinSize") )
        .def("NbPoints",
             (Standard_Integer (BRepMesh_EdgeTessellator::*)() const) static_cast<Standard_Integer (BRepMesh_EdgeTessellator::*)() const>(&BRepMesh_EdgeTessellator::NbPoints),
             R"#(Returns number of dicretization points.)#" )
        .def("Value",
             (Standard_Boolean (BRepMesh_EdgeTessellator::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt2d &  ) ) static_cast<Standard_Boolean (BRepMesh_EdgeTessellator::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt2d &  ) >(&BRepMesh_EdgeTessellator::Value),
             R"#(Returns parameters of solution with the given index.)#"  , py::arg("theIndex"),  py::arg("theParameter"),  py::arg("thePoint"),  py::arg("theUV"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_EdgeTessellator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_EdgeTessellator::*)() const>(&BRepMesh_EdgeTessellator::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_EdgeTessellator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_EdgeTessellator::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepMesh_PairOfPolygon ,std::unique_ptr<BRepMesh_PairOfPolygon>  >>(m.attr("BRepMesh_PairOfPolygon"))
        .def(py::init<  >()  )
        .def("Clear",
             (void (BRepMesh_PairOfPolygon::*)() ) static_cast<void (BRepMesh_PairOfPolygon::*)() >(&BRepMesh_PairOfPolygon::Clear),
             R"#(Clears pair handles.)#" )
        .def("Prepend",
             (void (BRepMesh_PairOfPolygon::*)( const opencascade::handle<Poly_PolygonOnTriangulation> &  ) ) static_cast<void (BRepMesh_PairOfPolygon::*)( const opencascade::handle<Poly_PolygonOnTriangulation> &  ) >(&BRepMesh_PairOfPolygon::Prepend),
             R"#(Sets the first element of the pair. If last element is empty, also assignes the given polygon to it.)#"  , py::arg("thePolygon"))
        .def("Append",
             (void (BRepMesh_PairOfPolygon::*)( const opencascade::handle<Poly_PolygonOnTriangulation> &  ) ) static_cast<void (BRepMesh_PairOfPolygon::*)( const opencascade::handle<Poly_PolygonOnTriangulation> &  ) >(&BRepMesh_PairOfPolygon::Append),
             R"#(Sets the last element of the pair. If first element is empty, also assignes the given polygon to it.)#"  , py::arg("thePolygon"))
        .def("First",
             (const opencascade::handle<Poly_PolygonOnTriangulation> & (BRepMesh_PairOfPolygon::*)() const) static_cast<const opencascade::handle<Poly_PolygonOnTriangulation> & (BRepMesh_PairOfPolygon::*)() const>(&BRepMesh_PairOfPolygon::First),
             R"#(Returns first polygon on triangulation.)#" )
        .def("Last",
             (const opencascade::handle<Poly_PolygonOnTriangulation> & (BRepMesh_PairOfPolygon::*)() const) static_cast<const opencascade::handle<Poly_PolygonOnTriangulation> & (BRepMesh_PairOfPolygon::*)() const>(&BRepMesh_PairOfPolygon::Last),
             R"#(Returns last polygon on triangulation.)#" )
;


    static_cast<py::class_<BRepMesh_DiscretFactory ,std::unique_ptr<BRepMesh_DiscretFactory, py::nodelete>  >>(m.attr("BRepMesh_DiscretFactory"))
        .def("Names",
             (const TColStd_MapOfAsciiString & (BRepMesh_DiscretFactory::*)() const) static_cast<const TColStd_MapOfAsciiString & (BRepMesh_DiscretFactory::*)() const>(&BRepMesh_DiscretFactory::Names),
             R"#(Returns the list of registered meshing algorithms.)#" )
        .def("SetDefaultName",
             (Standard_Boolean (BRepMesh_DiscretFactory::*)( const TCollection_AsciiString &  ) ) static_cast<Standard_Boolean (BRepMesh_DiscretFactory::*)( const TCollection_AsciiString &  ) >(&BRepMesh_DiscretFactory::SetDefaultName),
             R"#(Setup meshing algorithm by name. Returns TRUE if requested tool is available. On fail Factory will continue to use previous algo.)#"  , py::arg("theName"))
        .def("DefaultName",
             (const TCollection_AsciiString & (BRepMesh_DiscretFactory::*)() const) static_cast<const TCollection_AsciiString & (BRepMesh_DiscretFactory::*)() const>(&BRepMesh_DiscretFactory::DefaultName),
             R"#(Returns name for current meshing algorithm.)#" )
        .def("SetFunctionName",
             (Standard_Boolean (BRepMesh_DiscretFactory::*)( const TCollection_AsciiString &  ) ) static_cast<Standard_Boolean (BRepMesh_DiscretFactory::*)( const TCollection_AsciiString &  ) >(&BRepMesh_DiscretFactory::SetFunctionName),
             R"#(Advanced function. Changes function name to retrieve from plugin. Returns TRUE if requested tool is available. On fail Factory will continue to use previous algo.)#"  , py::arg("theFuncName"))
        .def("FunctionName",
             (const TCollection_AsciiString & (BRepMesh_DiscretFactory::*)() const) static_cast<const TCollection_AsciiString & (BRepMesh_DiscretFactory::*)() const>(&BRepMesh_DiscretFactory::FunctionName),
             R"#(Returns function name that should be exported by plugin.)#" )
        .def("ErrorStatus",
             (BRepMesh_FactoryError (BRepMesh_DiscretFactory::*)() const) static_cast<BRepMesh_FactoryError (BRepMesh_DiscretFactory::*)() const>(&BRepMesh_DiscretFactory::ErrorStatus),
             R"#(Returns error status for last meshing algorithm switch.)#" )
        .def("SetDefault",
             (Standard_Boolean (BRepMesh_DiscretFactory::*)( const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) ) static_cast<Standard_Boolean (BRepMesh_DiscretFactory::*)( const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) >(&BRepMesh_DiscretFactory::SetDefault),
             R"#(Setup meshing algorithm that should be created by this Factory. Returns TRUE if requested tool is available. On fail Factory will continue to use previous algo. Call ::ErrorStatus() method to retrieve fault reason.)#"  , py::arg("theName"),  py::arg("theFuncName")=static_cast<const TCollection_AsciiString &>("DISCRETALGO"))
        .def("Discret",
             (opencascade::handle<BRepMesh_DiscretRoot> (BRepMesh_DiscretFactory::*)( const TopoDS_Shape & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<BRepMesh_DiscretRoot> (BRepMesh_DiscretFactory::*)( const TopoDS_Shape & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepMesh_DiscretFactory::Discret),
             R"#(Returns triangulation algorithm instance.)#"  , py::arg("theShape"),  py::arg("theLinDeflection"),  py::arg("theAngDeflection"))
        .def_static("Get_s",
                    (BRepMesh_DiscretFactory & (*)() ) static_cast<BRepMesh_DiscretFactory & (*)() >(&BRepMesh_DiscretFactory::Get),
                    R"#(Returns the global factory instance.)#" )
;


    static_cast<py::class_<BRepMesh_DiscretRoot ,opencascade::handle<BRepMesh_DiscretRoot> ,Py_BRepMesh_DiscretRoot , Standard_Transient >>(m.attr("BRepMesh_DiscretRoot"))
        .def("SetShape",
             (void (BRepMesh_DiscretRoot::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepMesh_DiscretRoot::*)( const TopoDS_Shape &  ) >(&BRepMesh_DiscretRoot::SetShape),
             R"#(Set the shape to triangulate.)#"  , py::arg("theShape"))
        .def("Shape",
             (const TopoDS_Shape & (BRepMesh_DiscretRoot::*)() const) static_cast<const TopoDS_Shape & (BRepMesh_DiscretRoot::*)() const>(&BRepMesh_DiscretRoot::Shape),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (BRepMesh_DiscretRoot::*)() const) static_cast<Standard_Boolean (BRepMesh_DiscretRoot::*)() const>(&BRepMesh_DiscretRoot::IsDone),
             R"#(Returns true if triangualtion was performed and has success.)#" )
        .def("Perform",
             (void (BRepMesh_DiscretRoot::*)() ) static_cast<void (BRepMesh_DiscretRoot::*)() >(&BRepMesh_DiscretRoot::Perform),
             R"#(Compute triangulation for set shape.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_DiscretRoot::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_DiscretRoot::*)() const>(&BRepMesh_DiscretRoot::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_DiscretRoot::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_DiscretRoot::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepMesh_EdgeTessellationExtractor ,opencascade::handle<BRepMesh_EdgeTessellationExtractor>  , BRepMesh_IEdgeTool >>(m.attr("BRepMesh_EdgeTessellationExtractor"))
        .def(py::init< const TopoDS_Edge &,const opencascade::handle<Geom2dAdaptor_HCurve> &,const TopoDS_Face &,const opencascade::handle<Poly_Triangulation> &,const opencascade::handle<Poly_PolygonOnTriangulation> &,const TopLoc_Location & >()  , py::arg("theEdge"),  py::arg("thePCurve"),  py::arg("theFace"),  py::arg("theTriangulation"),  py::arg("thePolygon"),  py::arg("theLocation") )
        .def("NbPoints",
             (Standard_Integer (BRepMesh_EdgeTessellationExtractor::*)() const) static_cast<Standard_Integer (BRepMesh_EdgeTessellationExtractor::*)() const>(&BRepMesh_EdgeTessellationExtractor::NbPoints),
             R"#(Returns number of dicretization points.)#" )
        .def("Value",
             (Standard_Boolean (BRepMesh_EdgeTessellationExtractor::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt2d &  ) ) static_cast<Standard_Boolean (BRepMesh_EdgeTessellationExtractor::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt2d &  ) >(&BRepMesh_EdgeTessellationExtractor::Value),
             R"#(Returns parameters of solution with the given index.)#"  , py::arg("theIndex"),  py::arg("theParameter"),  py::arg("thePoint"),  py::arg("theUV"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_EdgeTessellationExtractor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_EdgeTessellationExtractor::*)() const>(&BRepMesh_EdgeTessellationExtractor::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_EdgeTessellationExtractor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_EdgeTessellationExtractor::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepMesh_FastDiscret ,opencascade::handle<BRepMesh_FastDiscret>  , Standard_Transient >>(m.attr("BRepMesh_FastDiscret"))
        .def(py::init< const Bnd_Box &,const BRepMesh_FastDiscret::Parameters & >()  , py::arg("B"),  py::arg("theParams") )
        .def("Perform",
             (void (BRepMesh_FastDiscret::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepMesh_FastDiscret::*)( const TopoDS_Shape &  ) >(&BRepMesh_FastDiscret::Perform),
             R"#(Build triangulation on the whole shape.)#"  , py::arg("shape"))
        .def("Add",
             (Standard_Integer (BRepMesh_FastDiscret::*)( const TopoDS_Face &  ) ) static_cast<Standard_Integer (BRepMesh_FastDiscret::*)( const TopoDS_Face &  ) >(&BRepMesh_FastDiscret::Add),
             R"#(Record a face for further processing.)#"  , py::arg("face"))
        .def("Process",
             (void (BRepMesh_FastDiscret::*)( const TopoDS_Face &  ) const) static_cast<void (BRepMesh_FastDiscret::*)( const TopoDS_Face &  ) const>(&BRepMesh_FastDiscret::Process),
             R"#(Triangulate a face previously recorded for processing by call to Add(). Can be executed in parallel threads.)#"  , py::arg("face"))
        .def("MeshParameters",
             (const BRepMesh_FastDiscret::Parameters & (BRepMesh_FastDiscret::*)() const) static_cast<const BRepMesh_FastDiscret::Parameters & (BRepMesh_FastDiscret::*)() const>(&BRepMesh_FastDiscret::MeshParameters),
             R"#(Returns parameters of meshing)#" )
        .def("ChangeMeshParameters",
             (BRepMesh_FastDiscret::Parameters & (BRepMesh_FastDiscret::*)() ) static_cast<BRepMesh_FastDiscret::Parameters & (BRepMesh_FastDiscret::*)() >(&BRepMesh_FastDiscret::ChangeMeshParameters),
             R"#(Returns modificable mesh parameters)#" )
        .def("InitSharedFaces",
             (void (BRepMesh_FastDiscret::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepMesh_FastDiscret::*)( const TopoDS_Shape &  ) >(&BRepMesh_FastDiscret::InitSharedFaces),
             R"#(None)#"  , py::arg("theShape"))
        .def("SharedFaces",
             (const TopTools_IndexedDataMapOfShapeListOfShape & (BRepMesh_FastDiscret::*)() const) static_cast<const TopTools_IndexedDataMapOfShapeListOfShape & (BRepMesh_FastDiscret::*)() const>(&BRepMesh_FastDiscret::SharedFaces),
             R"#(None)#" )
        .def("GetFaceAttribute",
             (Standard_Boolean (BRepMesh_FastDiscret::*)( const TopoDS_Face & ,  opencascade::handle<BRepMesh_FaceAttribute> & ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (BRepMesh_FastDiscret::*)( const TopoDS_Face & ,  opencascade::handle<BRepMesh_FaceAttribute> & ,  const Standard_Boolean  ) const>(&BRepMesh_FastDiscret::GetFaceAttribute),
             R"#(Returns attribute descriptor for the given face.)#"  , py::arg("theFace"),  py::arg("theAttribute"),  py::arg("isForceCreate")=static_cast<const Standard_Boolean>(Standard_False))
        .def("RemoveFaceAttribute",
             (void (BRepMesh_FastDiscret::*)( const TopoDS_Face &  ) ) static_cast<void (BRepMesh_FastDiscret::*)( const TopoDS_Face &  ) >(&BRepMesh_FastDiscret::RemoveFaceAttribute),
             R"#(Remove face attribute as useless to free locate memory.)#"  , py::arg("theFace"))
        .def("NbBoundaryPoints",
             (Standard_Integer (BRepMesh_FastDiscret::*)() const) static_cast<Standard_Integer (BRepMesh_FastDiscret::*)() const>(&BRepMesh_FastDiscret::NbBoundaryPoints),
             R"#(Returns number of boundary 3d points.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_FastDiscret::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_FastDiscret::*)() const>(&BRepMesh_FastDiscret::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_FastDiscret::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_FastDiscret::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepMesh_DataStructureOfDelaun ,opencascade::handle<BRepMesh_DataStructureOfDelaun>  , Standard_Transient >>(m.attr("BRepMesh_DataStructureOfDelaun"))
        .def(py::init< const opencascade::handle<NCollection_IncAllocator> &,const Standard_Integer >()  , py::arg("theAllocator"),  py::arg("theReservedNodeSize")=static_cast<const Standard_Integer>(100) )
        .def("NbNodes",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::NbNodes),
             R"#(Returns number of nodes.)#" )
        .def("AddNode",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Vertex & ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Vertex & ,  const Standard_Boolean  ) >(&BRepMesh_DataStructureOfDelaun::AddNode),
             R"#(Adds node to the mesh if it is not already in the mesh.)#"  , py::arg("theNode"),  py::arg("isForceAdd")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IndexOf",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Vertex &  ) ) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Vertex &  ) >(&BRepMesh_DataStructureOfDelaun::IndexOf),
             R"#(Finds the index of the given node.)#"  , py::arg("theNode"))
        .def("GetNode",
             (const BRepMesh_Vertex & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer  ) ) static_cast<const BRepMesh_Vertex & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer  ) >(&BRepMesh_DataStructureOfDelaun::GetNode),
             R"#(Get node by the index.)#"  , py::arg("theIndex"))
        .def("SubstituteNode",
             (Standard_Boolean (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ,  const BRepMesh_Vertex &  ) ) static_cast<Standard_Boolean (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ,  const BRepMesh_Vertex &  ) >(&BRepMesh_DataStructureOfDelaun::SubstituteNode),
             R"#(Substitutes the node with the given index by new one.)#"  , py::arg("theIndex"),  py::arg("theNewNode"))
        .def("RemoveNode",
             (void (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&BRepMesh_DataStructureOfDelaun::RemoveNode),
             R"#(Removes node from the mesh in case if it has no connected links and its type is Free.)#"  , py::arg("theIndex"),  py::arg("isForce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("LinksConnectedTo",
             (const BRepMesh::ListOfInteger & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer  ) const) static_cast<const BRepMesh::ListOfInteger & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer  ) const>(&BRepMesh_DataStructureOfDelaun::LinksConnectedTo),
             R"#(Get list of links attached to the node with the given index.)#"  , py::arg("theIndex"))
        .def("NbLinks",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::NbLinks),
             R"#(Returns number of links.)#" )
        .def("AddLink",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Edge &  ) ) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Edge &  ) >(&BRepMesh_DataStructureOfDelaun::AddLink),
             R"#(Adds link to the mesh if it is not already in the mesh.)#"  , py::arg("theLink"))
        .def("IndexOf",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Edge &  ) const) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Edge &  ) const>(&BRepMesh_DataStructureOfDelaun::IndexOf),
             R"#(Finds the index of the given link.)#"  , py::arg("theLink"))
        .def("GetLink",
             (const BRepMesh_Edge & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer  ) ) static_cast<const BRepMesh_Edge & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer  ) >(&BRepMesh_DataStructureOfDelaun::GetLink),
             R"#(Get link by the index.)#"  , py::arg("theIndex"))
        .def("LinksOfDomain",
             (const BRepMesh::MapOfInteger & (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<const BRepMesh::MapOfInteger & (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::LinksOfDomain),
             R"#(Returns map of indices of links registered in mesh.)#" )
        .def("SubstituteLink",
             (Standard_Boolean (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ,  const BRepMesh_Edge &  ) ) static_cast<Standard_Boolean (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ,  const BRepMesh_Edge &  ) >(&BRepMesh_DataStructureOfDelaun::SubstituteLink),
             R"#(Substitutes the link with the given index by new one.)#"  , py::arg("theIndex"),  py::arg("theNewLink"))
        .def("RemoveLink",
             (void (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&BRepMesh_DataStructureOfDelaun::RemoveLink),
             R"#(Removes link from the mesh in case if it has no connected elements and its type is Free.)#"  , py::arg("theIndex"),  py::arg("isForce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ElementsConnectedTo",
             (const BRepMesh_PairOfIndex & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer  ) const) static_cast<const BRepMesh_PairOfIndex & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer  ) const>(&BRepMesh_DataStructureOfDelaun::ElementsConnectedTo),
             R"#(Returns indices of elements conected to the link with the given index.)#"  , py::arg("theLinkIndex"))
        .def("NbElements",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::NbElements),
             R"#(Returns number of links.)#" )
        .def("AddElement",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Triangle &  ) ) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Triangle &  ) >(&BRepMesh_DataStructureOfDelaun::AddElement),
             R"#(Adds element to the mesh if it is not already in the mesh.)#"  , py::arg("theElement"))
        .def("IndexOf",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Triangle &  ) const) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Triangle &  ) const>(&BRepMesh_DataStructureOfDelaun::IndexOf),
             R"#(Finds the index of the given element.)#"  , py::arg("theElement"))
        .def("GetElement",
             (const BRepMesh_Triangle & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer  ) ) static_cast<const BRepMesh_Triangle & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer  ) >(&BRepMesh_DataStructureOfDelaun::GetElement),
             R"#(Get element by the index.)#"  , py::arg("theIndex"))
        .def("ElementsOfDomain",
             (const BRepMesh::MapOfInteger & (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<const BRepMesh::MapOfInteger & (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::ElementsOfDomain),
             R"#(Returns map of indices of elements registered in mesh.)#" )
        .def("SubstituteElement",
             (Standard_Boolean (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ,  const BRepMesh_Triangle &  ) ) static_cast<Standard_Boolean (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ,  const BRepMesh_Triangle &  ) >(&BRepMesh_DataStructureOfDelaun::SubstituteElement),
             R"#(Substitutes the element with the given index by new one.)#"  , py::arg("theIndex"),  py::arg("theNewElement"))
        .def("RemoveElement",
             (void (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer  ) ) static_cast<void (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer  ) >(&BRepMesh_DataStructureOfDelaun::RemoveElement),
             R"#(Removes element from the mesh.)#"  , py::arg("theIndex"))
        .def("Statistics",
             (void (BRepMesh_DataStructureOfDelaun::*)( std::ostream &  ) const) static_cast<void (BRepMesh_DataStructureOfDelaun::*)( std::ostream &  ) const>(&BRepMesh_DataStructureOfDelaun::Statistics),
             R"#(Dumps information about this structure.)#"  , py::arg("theStream"))
        .def("Allocator",
             (const opencascade::handle<NCollection_IncAllocator> & (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<const opencascade::handle<NCollection_IncAllocator> & (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::Allocator),
             R"#(Returns memory allocator used by the structure.)#" )
        .def("Data",
             (BRepMesh::HVertexTool & (BRepMesh_DataStructureOfDelaun::*)() ) static_cast<BRepMesh::HVertexTool & (BRepMesh_DataStructureOfDelaun::*)() >(&BRepMesh_DataStructureOfDelaun::Data),
             R"#(Gives the data structure for initialization of cell size and tolerance.)#" )
        .def("ClearDomain",
             (void (BRepMesh_DataStructureOfDelaun::*)() ) static_cast<void (BRepMesh_DataStructureOfDelaun::*)() >(&BRepMesh_DataStructureOfDelaun::ClearDomain),
             R"#(Removes all elements.)#" )
        .def("ClearDeleted",
             (void (BRepMesh_DataStructureOfDelaun::*)() ) static_cast<void (BRepMesh_DataStructureOfDelaun::*)() >(&BRepMesh_DataStructureOfDelaun::ClearDeleted),
             R"#(Substitutes deleted items by the last one from corresponding map to have only non-deleted elements, links or nodes in the structure.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_DataStructureOfDelaun::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_DataStructureOfDelaun::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepMesh_IncrementalMesh ,opencascade::handle<BRepMesh_IncrementalMesh>  , BRepMesh_DiscretRoot >>(m.attr("BRepMesh_IncrementalMesh"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const Standard_Boolean,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theShape"),  py::arg("theLinDeflection"),  py::arg("isRelative")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theAngDeflection")=static_cast<const Standard_Real>(0.5),  py::arg("isInParallel")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("adaptiveMin")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Shape &,const BRepMesh_FastDiscret::Parameters & >()  , py::arg("theShape"),  py::arg("theParameters") )
        .def("Perform",
             (void (BRepMesh_IncrementalMesh::*)() ) static_cast<void (BRepMesh_IncrementalMesh::*)() >(&BRepMesh_IncrementalMesh::Perform),
             R"#(Performs meshing ot the shape.)#" )
        .def("Parameters",
             (const BRepMesh_FastDiscret::Parameters & (BRepMesh_IncrementalMesh::*)() const) static_cast<const BRepMesh_FastDiscret::Parameters & (BRepMesh_IncrementalMesh::*)() const>(&BRepMesh_IncrementalMesh::Parameters),
             R"#(Returns meshing parameters)#" )
        .def("ChangeParameters",
             (BRepMesh_FastDiscret::Parameters & (BRepMesh_IncrementalMesh::*)() ) static_cast<BRepMesh_FastDiscret::Parameters & (BRepMesh_IncrementalMesh::*)() >(&BRepMesh_IncrementalMesh::ChangeParameters),
             R"#(Returns modifiable meshing parameters)#" )
        .def("IsModified",
             (Standard_Boolean (BRepMesh_IncrementalMesh::*)() const) static_cast<Standard_Boolean (BRepMesh_IncrementalMesh::*)() const>(&BRepMesh_IncrementalMesh::IsModified),
             R"#(Returns modified flag.)#" )
        .def("GetStatusFlags",
             (Standard_Integer (BRepMesh_IncrementalMesh::*)() const) static_cast<Standard_Integer (BRepMesh_IncrementalMesh::*)() const>(&BRepMesh_IncrementalMesh::GetStatusFlags),
             R"#(Returns accumulated status flags faced during meshing.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_IncrementalMesh::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_IncrementalMesh::*)() const>(&BRepMesh_IncrementalMesh::DynamicType),
             R"#(None)#" )
        .def_static("IsParallelDefault_s",
                    (Standard_Boolean (*)() ) static_cast<Standard_Boolean (*)() >(&BRepMesh_IncrementalMesh::IsParallelDefault),
                    R"#(Returns multi-threading usage flag set by default in Discret() static method (thus applied only to Mesh Factories).)#" )
        .def_static("SetParallelDefault_s",
                    (void (*)( const Standard_Boolean  ) ) static_cast<void (*)( const Standard_Boolean  ) >(&BRepMesh_IncrementalMesh::SetParallelDefault),
                    R"#(Setup multi-threading usage flag set by default in Discret() static method (thus applied only to Mesh Factories).)#"  , py::arg("isInParallel"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_IncrementalMesh::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_IncrementalMesh::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepMesh_GeomTool ,std::unique_ptr<BRepMesh_GeomTool>  >>(m.attr("BRepMesh_GeomTool"))
        .def(py::init< const BRepAdaptor_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("theCurve"),  py::arg("theFirstParam"),  py::arg("theLastParam"),  py::arg("theLinDeflection"),  py::arg("theAngDeflection"),  py::arg("theMinPointsNb")=static_cast<const Standard_Integer>(2),  py::arg("theMinSize")=static_cast<const Standard_Real>(Precision :: Confusion ( )) )
        .def(py::init< const opencascade::handle<BRepAdaptor_HSurface> &,const GeomAbs_IsoType,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("theSurface"),  py::arg("theIsoType"),  py::arg("theParamIso"),  py::arg("theFirstParam"),  py::arg("theLastParam"),  py::arg("theLinDeflection"),  py::arg("theAngDeflection"),  py::arg("theMinPointsNb")=static_cast<const Standard_Integer>(2),  py::arg("theMinSize")=static_cast<const Standard_Real>(Precision :: Confusion ( )) )
        .def("AddPoint",
             (Standard_Integer (BRepMesh_GeomTool::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (BRepMesh_GeomTool::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Boolean  ) >(&BRepMesh_GeomTool::AddPoint),
             R"#(Adds point to already calculated points (or replaces existing).)#"  , py::arg("thePoint"),  py::arg("theParam"),  py::arg("theIsReplace")=static_cast<const Standard_Boolean>(Standard_True))
        .def("NbPoints",
             (Standard_Integer (BRepMesh_GeomTool::*)() const) static_cast<Standard_Integer (BRepMesh_GeomTool::*)() const>(&BRepMesh_GeomTool::NbPoints),
             R"#(Returns number of discretization points.)#" )
        .def("Value",
             (Standard_Boolean (BRepMesh_GeomTool::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt2d &  ) const) static_cast<Standard_Boolean (BRepMesh_GeomTool::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt2d &  ) const>(&BRepMesh_GeomTool::Value),
             R"#(Gets parameters of discretization point with the given index.)#"  , py::arg("theIndex"),  py::arg("theIsoParam"),  py::arg("theParam"),  py::arg("thePoint"),  py::arg("theUV"))
        .def("Value",
             (Standard_Boolean (BRepMesh_GeomTool::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt &  ) const) static_cast<Standard_Boolean (BRepMesh_GeomTool::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt &  ) const>(&BRepMesh_GeomTool::Value),
             R"#(Gets parameters of discretization point with the given index.)#"  , py::arg("theIndex"),  py::arg("theParam"),  py::arg("thePoint"))
        .def_static("Normal_s",
                    (Standard_Boolean (*)( const opencascade::handle<BRepAdaptor_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Dir &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<BRepAdaptor_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Dir &  ) >(&BRepMesh_GeomTool::Normal),
                    R"#(Computes normal to the given surface at the specified position in parametric space.)#"  , py::arg("theSurface"),  py::arg("theParamU"),  py::arg("theParamV"),  py::arg("thePoint"),  py::arg("theNormal"))
        .def_static("IntSegSeg_s",
                    (BRepMesh_GeomTool::IntFlag (*)( const gp_XY & ,  const gp_XY & ,  const gp_XY & ,  const gp_XY & ,  const Standard_Boolean ,  const Standard_Boolean ,  gp_Pnt2d &  ) ) static_cast<BRepMesh_GeomTool::IntFlag (*)( const gp_XY & ,  const gp_XY & ,  const gp_XY & ,  const gp_XY & ,  const Standard_Boolean ,  const Standard_Boolean ,  gp_Pnt2d &  ) >(&BRepMesh_GeomTool::IntSegSeg),
                    R"#(Checks intersection between the two segments. Checks that intersection point lies within ranges of both segments.)#"  , py::arg("theStartPnt1"),  py::arg("theEndPnt1"),  py::arg("theStartPnt2"),  py::arg("theEndPnt2"),  py::arg("isConsiderEndPointTouch"),  py::arg("isConsiderPointOnSegment"),  py::arg("theIntPnt"))
;

// functions
// ./opencascade/BRepMesh_Classifier.hxx
// ./opencascade/BRepMesh_PluginMacro.hxx
// ./opencascade/BRepMesh_Status.hxx
// ./opencascade/BRepMesh_VertexInspector.hxx
// ./opencascade/BRepMesh_CircleTool.hxx
// ./opencascade/BRepMesh_EdgeTessellationExtractor.hxx
// ./opencascade/BRepMesh_EdgeParameterProvider.hxx
// ./opencascade/BRepMesh_Edge.hxx
    m.def("HashCode", 
          (Standard_Integer (*)( const BRepMesh_Edge & ,  const Standard_Integer  ))  static_cast<Standard_Integer (*)( const BRepMesh_Edge & ,  const Standard_Integer  )>(&HashCode),
          R"#(None)#"  , py::arg("theEdge"),  py::arg("theUpper"));
// ./opencascade/BRepMesh_ShapeTool.hxx
// ./opencascade/BRepMesh_Triangle.hxx
    m.def("HashCode", 
          (Standard_Integer (*)( const BRepMesh_Triangle & ,  const Standard_Integer  ))  static_cast<Standard_Integer (*)( const BRepMesh_Triangle & ,  const Standard_Integer  )>(&HashCode),
          R"#(None)#"  , py::arg("theTriangle"),  py::arg("theUpper"));
// ./opencascade/BRepMesh_OrientedEdge.hxx
    m.def("HashCode", 
          (Standard_Integer (*)( const BRepMesh_OrientedEdge & ,  const Standard_Integer  ))  static_cast<Standard_Integer (*)( const BRepMesh_OrientedEdge & ,  const Standard_Integer  )>(&HashCode),
          R"#(None)#"  , py::arg("theEdge"),  py::arg("theUpper"));
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
    m.def("HashCode", 
          (Standard_Integer (*)( const BRepMesh_Vertex & ,  const Standard_Integer  ))  static_cast<Standard_Integer (*)( const BRepMesh_Vertex & ,  const Standard_Integer  )>(&HashCode),
          R"#(None)#"  , py::arg("me"),  py::arg("Upper"));
// ./opencascade/BRepMesh_DiscretRoot.hxx
// ./opencascade/BRepMesh_Delaun.hxx
// ./opencascade/BRepMesh_PluginEntryType.hxx
// ./opencascade/BRepMesh_CircleInspector.hxx
// ./opencascade/BRepMesh.hxx
// ./opencascade/BRepMesh_PairOfIndex.hxx
// ./opencascade/BRepMesh_DegreeOfFreedom.hxx

// operators

// register typdefs
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


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

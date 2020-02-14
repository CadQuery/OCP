
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <Standard_NullObject.hxx>
#include <BRepTools_Modification.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <Bnd_Box2d.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Compound.hxx>
#include <BRep_Builder.hxx>
#include <BRepTools_WireExplorer.hxx>
#include <BRepTools_Modification.hxx>
#include <BRepTools_Modifier.hxx>
#include <BRepTools_TrsfModification.hxx>
#include <BRepTools_NurbsConvertModification.hxx>
#include <BRepTools_GTrsfModification.hxx>
#include <BRepTools_Substitution.hxx>
#include <BRepTools_Quilt.hxx>
#include <BRepTools_ShapeSet.hxx>
#include <BRepTools_ReShape.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <BRepTools.hxx>
#include <BRepTools_DataMapIteratorOfMapOfVertexPnt2d.hxx>
#include <BRepTools_GTrsfModification.hxx>
#include <BRepTools_History.hxx>
#include <BRepTools_MapOfVertexPnt2d.hxx>
#include <BRepTools_Modification.hxx>
#include <BRepTools_Modifier.hxx>
#include <BRepTools_NurbsConvertModification.hxx>
#include <BRepTools_Quilt.hxx>
#include <BRepTools_ReShape.hxx>
#include <BRepTools_ShapeSet.hxx>
#include <BRepTools_Substitution.hxx>
#include <BRepTools_TrsfModification.hxx>
#include <BRepTools_WireExplorer.hxx>

// template related includes
// ./opencascade/BRepTools_MapOfVertexPnt2d.hxx
#include "NCollection.hxx"
// ./opencascade/BRepTools_MapOfVertexPnt2d.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepTools(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepTools"));


//Python trampoline classes
    class Py_BRepTools_Modification : public BRepTools_Modification{
    public:
        using BRepTools_Modification::BRepTools_Modification;
        
        
        // public pure virtual
        Standard_Boolean NewSurface(const TopoDS_Face & F,opencascade::handle<Geom_Surface> & S,TopLoc_Location & L,Standard_Real & Tol,Standard_Boolean & RevWires,Standard_Boolean & RevFace) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewSurface,F,S,L,Tol,RevWires,RevFace) };
        Standard_Boolean NewCurve(const TopoDS_Edge & E,opencascade::handle<Geom_Curve> & C,TopLoc_Location & L,Standard_Real & Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewCurve,E,C,L,Tol) };
        Standard_Boolean NewPoint(const TopoDS_Vertex & V,gp_Pnt & P,Standard_Real & Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewPoint,V,P,Tol) };
        Standard_Boolean NewCurve2d(const TopoDS_Edge & E,const TopoDS_Face & F,const TopoDS_Edge & NewE,const TopoDS_Face & NewF,opencascade::handle<Geom2d_Curve> & C,Standard_Real & Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewCurve2d,E,F,NewE,NewF,C,Tol) };
        Standard_Boolean NewParameter(const TopoDS_Vertex & V,const TopoDS_Edge & E,Standard_Real & P,Standard_Real & Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewParameter,V,E,P,Tol) };
        GeomAbs_Shape Continuity(const TopoDS_Edge & E,const TopoDS_Face & F1,const TopoDS_Face & F2,const TopoDS_Edge & NewE,const TopoDS_Face & NewF1,const TopoDS_Face & NewF2) override { PYBIND11_OVERLOAD_PURE(GeomAbs_Shape,BRepTools_Modification,Continuity,E,F1,F2,NewE,NewF1,NewF2) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes

    // default constructor
    register_default_constructor<BRepTools , shared_ptr<BRepTools>>(m,"BRepTools");

    static_cast<py::class_<BRepTools , shared_ptr<BRepTools>  >>(m.attr("BRepTools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("AddUVBounds_s",
                    (void (*)( const TopoDS_Face & ,  Bnd_Box2d &  ) ) static_cast<void (*)( const TopoDS_Face & ,  Bnd_Box2d &  ) >(&BRepTools::AddUVBounds),
                    R"#(Adds to the box <B> the bounding values in the parametric space of F.)#"  , py::arg("F"),  py::arg("B"))
        .def_static("AddUVBounds_s",
                    (void (*)( const TopoDS_Face & ,  const TopoDS_Wire & ,  Bnd_Box2d &  ) ) static_cast<void (*)( const TopoDS_Face & ,  const TopoDS_Wire & ,  Bnd_Box2d &  ) >(&BRepTools::AddUVBounds),
                    R"#(Adds to the box <B> the bounding values of the wire in the parametric space of F.)#"  , py::arg("F"),  py::arg("W"),  py::arg("B"))
        .def_static("AddUVBounds_s",
                    (void (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  Bnd_Box2d &  ) ) static_cast<void (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  Bnd_Box2d &  ) >(&BRepTools::AddUVBounds),
                    R"#(Adds to the box <B> the bounding values of the edge in the parametric space of F.)#"  , py::arg("F"),  py::arg("E"),  py::arg("B"))
        .def_static("Update_s",
                    (void (*)( const TopoDS_Vertex &  ) ) static_cast<void (*)( const TopoDS_Vertex &  ) >(&BRepTools::Update),
                    R"#(Update a vertex (nothing is done))#"  , py::arg("V"))
        .def_static("Update_s",
                    (void (*)( const TopoDS_Edge &  ) ) static_cast<void (*)( const TopoDS_Edge &  ) >(&BRepTools::Update),
                    R"#(Update an edge, compute 2d bounding boxes.)#"  , py::arg("E"))
        .def_static("Update_s",
                    (void (*)( const TopoDS_Wire &  ) ) static_cast<void (*)( const TopoDS_Wire &  ) >(&BRepTools::Update),
                    R"#(Update a wire (nothing is done))#"  , py::arg("W"))
        .def_static("Update_s",
                    (void (*)( const TopoDS_Face &  ) ) static_cast<void (*)( const TopoDS_Face &  ) >(&BRepTools::Update),
                    R"#(Update a Face, update UV points.)#"  , py::arg("F"))
        .def_static("Update_s",
                    (void (*)( const TopoDS_Shell &  ) ) static_cast<void (*)( const TopoDS_Shell &  ) >(&BRepTools::Update),
                    R"#(Update a shell (nothing is done))#"  , py::arg("S"))
        .def_static("Update_s",
                    (void (*)( const TopoDS_Solid &  ) ) static_cast<void (*)( const TopoDS_Solid &  ) >(&BRepTools::Update),
                    R"#(Update a solid (nothing is done))#"  , py::arg("S"))
        .def_static("Update_s",
                    (void (*)( const TopoDS_CompSolid &  ) ) static_cast<void (*)( const TopoDS_CompSolid &  ) >(&BRepTools::Update),
                    R"#(Update a composite solid (nothing is done))#"  , py::arg("C"))
        .def_static("Update_s",
                    (void (*)( const TopoDS_Compound &  ) ) static_cast<void (*)( const TopoDS_Compound &  ) >(&BRepTools::Update),
                    R"#(Update a compound (nothing is done))#"  , py::arg("C"))
        .def_static("Update_s",
                    (void (*)( const TopoDS_Shape &  ) ) static_cast<void (*)( const TopoDS_Shape &  ) >(&BRepTools::Update),
                    R"#(Update a shape, call the corect update.)#"  , py::arg("S"))
        .def_static("UpdateFaceUVPoints_s",
                    (void (*)( const TopoDS_Face &  ) ) static_cast<void (*)( const TopoDS_Face &  ) >(&BRepTools::UpdateFaceUVPoints),
                    R"#(For each edge of the face <F> reset the UV points to the bounding points of the parametric curve of the edge on the face.)#"  , py::arg("theF"))
        .def_static("Clean_s",
                    (void (*)( const TopoDS_Shape &  ) ) static_cast<void (*)( const TopoDS_Shape &  ) >(&BRepTools::Clean),
                    R"#(Removes all the triangulations of the faces of <S> and removes all polygons on triangulations of the edges.)#"  , py::arg("S"))
        .def_static("CleanGeometry_s",
                    (void (*)( const TopoDS_Shape &  ) ) static_cast<void (*)( const TopoDS_Shape &  ) >(&BRepTools::CleanGeometry),
                    R"#(Removes geometry (curves and surfaces) from all edges and faces of the shape)#"  , py::arg("theShape"))
        .def_static("RemoveUnusedPCurves_s",
                    (void (*)( const TopoDS_Shape &  ) ) static_cast<void (*)( const TopoDS_Shape &  ) >(&BRepTools::RemoveUnusedPCurves),
                    R"#(Removes all the pcurves of the edges of <S> that refer to surfaces not belonging to any face of <S>)#"  , py::arg("S"))
        .def_static("Triangulation_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,  const Standard_Real  ) >(&BRepTools::Triangulation),
                    R"#(verifies that each face from the shape <S> has got a triangulation with a deflection <= deflec and the edges a discretisation on this triangulation.)#"  , py::arg("S"),  py::arg("deflec"))
        .def_static("Compare_s",
                    (Standard_Boolean (*)( const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) >(&BRepTools::Compare),
                    R"#(Returns True if the distance between the two vertices is lower than their tolerance.)#"  , py::arg("V1"),  py::arg("V2"))
        .def_static("Compare_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) >(&BRepTools::Compare),
                    R"#(Returns True if the distance between the two edges is lower than their tolerance.)#"  , py::arg("E1"),  py::arg("E2"))
        .def_static("OuterWire_s",
                    (TopoDS_Wire (*)( const TopoDS_Face &  ) ) static_cast<TopoDS_Wire (*)( const TopoDS_Face &  ) >(&BRepTools::OuterWire),
                    R"#(Returns the outer most wire of <F>. Returns a Null wire if <F> has no wires.)#"  , py::arg("F"))
        .def_static("Map3DEdges_s",
                    (void (*)( const TopoDS_Shape & ,  NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&BRepTools::Map3DEdges),
                    R"#(Stores in the map <M> all the 3D topology edges of <S>.)#"  , py::arg("S"),  py::arg("M"))
        .def_static("IsReallyClosed_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepTools::IsReallyClosed),
                    R"#(Verifies that the edge <E> is found two times on the face <F> before calling BRep_Tool::IsClosed.)#"  , py::arg("E"),  py::arg("F"))
        .def_static("Dump_s",
                    (void (*)( const TopoDS_Shape & ,  std::ostream &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  std::ostream &  ) >(&BRepTools::Dump),
                    R"#(Dumps the topological structure and the geometry of <Sh> on the stream <S>.)#"  , py::arg("Sh"),  py::arg("S"))
        .def_static("Write_s",
                    (void (*)( const TopoDS_Shape & ,  std::ostream & ,  const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  std::ostream & ,  const opencascade::handle<Message_ProgressIndicator> &  ) >(&BRepTools::Write),
                    R"#(Writes <Sh> on <S> in an ASCII format.)#"  , py::arg("Sh"),  py::arg("S"),  py::arg("PR")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(NULL))
        .def_static("Read_s",
                    (void (*)( TopoDS_Shape & ,  std::istream & ,  const BRep_Builder & ,  const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<void (*)( TopoDS_Shape & ,  std::istream & ,  const BRep_Builder & ,  const opencascade::handle<Message_ProgressIndicator> &  ) >(&BRepTools::Read),
                    R"#(Reads a Shape from <S> in returns it in <Sh>. <B> is used to build the shape.)#"  , py::arg("Sh"),  py::arg("S"),  py::arg("B"),  py::arg("PR")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(NULL))
        .def_static("Write_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ,  const Standard_CString ,  const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,  const Standard_CString ,  const opencascade::handle<Message_ProgressIndicator> &  ) >(&BRepTools::Write),
                    R"#(Writes <Sh> in <File>.)#"  , py::arg("Sh"),  py::arg("File"),  py::arg("PR")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(NULL))
        .def_static("Read_s",
                    (Standard_Boolean (*)( TopoDS_Shape & ,  const Standard_CString ,  const BRep_Builder & ,  const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<Standard_Boolean (*)( TopoDS_Shape & ,  const Standard_CString ,  const BRep_Builder & ,  const opencascade::handle<Message_ProgressIndicator> &  ) >(&BRepTools::Read),
                    R"#(Reads a Shape from <File>, returns it in <Sh>. <B> is used to build the shape.)#"  , py::arg("Sh"),  py::arg("File"),  py::arg("B"),  py::arg("PR")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(NULL))
        .def_static("EvalAndUpdateTol_s",
                    (Standard_Real (*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom2d_Curve> ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom2d_Curve> ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepTools::EvalAndUpdateTol),
                    R"#(Evals real tolerance of edge <theE>. <theC3d>, <theC2d>, <theS>, <theF>, <theL> are correspondently 3d curve of edge, 2d curve on surface <theS> and rang of edge If calculated tolerance is more then current edge tolerance, edge is updated. Method returns actual tolerance of edge)#"  , py::arg("theE"),  py::arg("theC3d"),  py::arg("theC2d"),  py::arg("theS"),  py::arg("theF"),  py::arg("theL"))
    // static methods using call by reference i.s.o. return
        .def_static("UVBounds_s",
                    []( const TopoDS_Face & F ){ Standard_Real  UMin; Standard_Real  UMax; Standard_Real  VMin; Standard_Real  VMax; BRepTools::UVBounds(F,UMin,UMax,VMin,VMax); return std::make_tuple(UMin,UMax,VMin,VMax); },
                    R"#(Returns in UMin, UMax, VMin, VMax the bounding values in the parametric space of F.)#"  , py::arg("F"))
        .def_static("UVBounds_s",
                    []( const TopoDS_Face & F,const TopoDS_Wire & W ){ Standard_Real  UMin; Standard_Real  UMax; Standard_Real  VMin; Standard_Real  VMax; BRepTools::UVBounds(F,W,UMin,UMax,VMin,VMax); return std::make_tuple(UMin,UMax,VMin,VMax); },
                    R"#(Returns in UMin, UMax, VMin, VMax the bounding values of the wire in the parametric space of F.)#"  , py::arg("F"),  py::arg("W"))
        .def_static("UVBounds_s",
                    []( const TopoDS_Face & F,const TopoDS_Edge & E ){ Standard_Real  UMin; Standard_Real  UMax; Standard_Real  VMin; Standard_Real  VMax; BRepTools::UVBounds(F,E,UMin,UMax,VMin,VMax); return std::make_tuple(UMin,UMax,VMin,VMax); },
                    R"#(Returns in UMin, UMax, VMin, VMax the bounding values of the edge in the parametric space of F.)#"  , py::arg("F"),  py::arg("E"))
        .def_static("DetectClosedness_s",
                    []( const TopoDS_Face & theFace ){ Standard_Boolean  theUclosed; Standard_Boolean  theVclosed; BRepTools::DetectClosedness(theFace,theUclosed,theVclosed); return std::make_tuple(theUclosed,theVclosed); },
                    R"#(Detect closedness of face in U and V directions)#"  , py::arg("theFace"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_History ,opencascade::handle<BRepTools_History>  , Standard_Transient >>(m.attr("BRepTools_History"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddGenerated",
             (void (BRepTools_History::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepTools_History::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepTools_History::AddGenerated),
             R"#(Set the second shape as generated one from the first shape.)#"  , py::arg("theInitial"),  py::arg("theGenerated"))
        .def("AddModified",
             (void (BRepTools_History::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepTools_History::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepTools_History::AddModified),
             R"#(Set the second shape as modified one from the first shape.)#"  , py::arg("theInitial"),  py::arg("theModified"))
        .def("Remove",
             (void (BRepTools_History::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepTools_History::*)( const TopoDS_Shape &  ) >(&BRepTools_History::Remove),
             R"#(Set the shape as removed one.)#"  , py::arg("theRemoved"))
        .def("ReplaceGenerated",
             (void (BRepTools_History::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepTools_History::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepTools_History::ReplaceGenerated),
             R"#(Set the second shape as the only generated one from the first one.)#"  , py::arg("theInitial"),  py::arg("theGenerated"))
        .def("ReplaceModified",
             (void (BRepTools_History::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepTools_History::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepTools_History::ReplaceModified),
             R"#(Set the second shape as the only modified one from the first one.)#"  , py::arg("theInitial"),  py::arg("theModified"))
        .def("Clear",
             (void (BRepTools_History::*)() ) static_cast<void (BRepTools_History::*)() >(&BRepTools_History::Clear),
             R"#(Clears the history.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepTools_History::*)( const TopoDS_Shape &  ) const) static_cast<const TopTools_ListOfShape & (BRepTools_History::*)( const TopoDS_Shape &  ) const>(&BRepTools_History::Generated),
             R"#(Returns all shapes generated from the shape.)#"  , py::arg("theInitial"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepTools_History::*)( const TopoDS_Shape &  ) const) static_cast<const TopTools_ListOfShape & (BRepTools_History::*)( const TopoDS_Shape &  ) const>(&BRepTools_History::Modified),
             R"#(Returns all shapes modified from the shape.)#"  , py::arg("theInitial"))
        .def("IsRemoved",
             (Standard_Boolean (BRepTools_History::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepTools_History::*)( const TopoDS_Shape &  ) const>(&BRepTools_History::IsRemoved),
             R"#(Returns 'true' if the shape is removed.)#"  , py::arg("theInitial"))
        .def("HasGenerated",
             (Standard_Boolean (BRepTools_History::*)() const) static_cast<Standard_Boolean (BRepTools_History::*)() const>(&BRepTools_History::HasGenerated),
             R"#(Returns 'true' if there any shapes with Generated elements present)#" )
        .def("HasModified",
             (Standard_Boolean (BRepTools_History::*)() const) static_cast<Standard_Boolean (BRepTools_History::*)() const>(&BRepTools_History::HasModified),
             R"#(Returns 'true' if there any Modified shapes present)#" )
        .def("HasRemoved",
             (Standard_Boolean (BRepTools_History::*)() const) static_cast<Standard_Boolean (BRepTools_History::*)() const>(&BRepTools_History::HasRemoved),
             R"#(Returns 'true' if there any removed shapes present)#" )
        .def("Merge",
             (void (BRepTools_History::*)( const opencascade::handle<BRepTools_History> &  ) ) static_cast<void (BRepTools_History::*)( const opencascade::handle<BRepTools_History> &  ) >(&BRepTools_History::Merge),
             R"#(Merges the next history to this history.)#"  , py::arg("theHistory23"))
        .def("Merge",
             (void (BRepTools_History::*)( const BRepTools_History &  ) ) static_cast<void (BRepTools_History::*)( const BRepTools_History &  ) >(&BRepTools_History::Merge),
             R"#(Merges the next history to this history.)#"  , py::arg("theHistory23"))
        .def("Dump",
             (void (BRepTools_History::*)( std::ostream &  ) ) static_cast<void (BRepTools_History::*)( std::ostream &  ) >(&BRepTools_History::Dump),
             R"#(Prints the brief description of the history into a stream)#"  , py::arg("theS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTools_History::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTools_History::*)() const>(&BRepTools_History::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsSupportedType_s",
                    (Standard_Boolean (*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape &  ) >(&BRepTools_History::IsSupportedType),
                    R"#(Returns 'true' if the type of the shape is supported by the history.)#"  , py::arg("theShape"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTools_History::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepTools_History::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_Modification ,opencascade::handle<BRepTools_Modification> ,Py_BRepTools_Modification , Standard_Transient >>(m.attr("BRepTools_Modification"))
    // constructors
    // custom constructors
    // methods
        .def("NewSurface",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Face & ,  opencascade::handle<Geom_Surface> & ,  TopLoc_Location & ,  Standard_Real & ,  Standard_Boolean & ,  Standard_Boolean &  ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Face & ,  opencascade::handle<Geom_Surface> & ,  TopLoc_Location & ,  Standard_Real & ,  Standard_Boolean & ,  Standard_Boolean &  ) >(&BRepTools_Modification::NewSurface),
             R"#(Returns true if the face, F, has been modified. If the face has been modified: - S is the new geometry of the face, - L is its new location, and - Tol is the new tolerance. The flag, RevWires, is set to true when the modification reverses the normal of the surface, (i.e. the wires have to be reversed). The flag, RevFace, is set to true if the orientation of the modified face changes in the shells which contain it. If the face has not been modified this function returns false, and the values of S, L, Tol, RevWires and RevFace are not significant.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewTriangulation",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Face & ,  opencascade::handle<Poly_Triangulation> &  ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Face & ,  opencascade::handle<Poly_Triangulation> &  ) >(&BRepTools_Modification::NewTriangulation),
             R"#(Returns true if the face has been modified according to changed triangulation. If the face has been modified: - T is a new triangulation on the face)#"  , py::arg("F"),  py::arg("T"))
        .def("NewCurve",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  TopLoc_Location & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  TopLoc_Location & ,  Standard_Real &  ) >(&BRepTools_Modification::NewCurve),
             R"#(Returns true if the edge, E, has been modified. If the edge has been modified: - C is the new geometry associated with the edge, - L is its new location, and - Tol is the new tolerance. If the edge has not been modified, this function returns false, and the values of C, L and Tol are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPolygon",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & ,  opencascade::handle<Poly_Polygon3D> &  ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & ,  opencascade::handle<Poly_Polygon3D> &  ) >(&BRepTools_Modification::NewPolygon),
             R"#(Returns true if the edge has been modified according to changed polygon. If the edge has been modified: - P is a new polygon)#"  , py::arg("E"),  py::arg("P"))
        .def("NewPolygonOnTriangulation",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Poly_PolygonOnTriangulation> &  ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Poly_PolygonOnTriangulation> &  ) >(&BRepTools_Modification::NewPolygonOnTriangulation),
             R"#(Returns true if the edge has been modified according to changed polygon on triangulation. If the edge has been modified: - P is a new polygon on triangulation)#"  , py::arg("E"),  py::arg("F"),  py::arg("P"))
        .def("NewPoint",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Vertex & ,  gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Vertex & ,  gp_Pnt & ,  Standard_Real &  ) >(&BRepTools_Modification::NewPoint),
             R"#(Returns true if the vertex V has been modified. If V has been modified: - P is the new geometry of the vertex, and - Tol is the new tolerance. If the vertex has not been modified this function returns false, and the values of P and Tol are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real &  ) >(&BRepTools_Modification::NewCurve2d),
             R"#(Returns true if the edge, E, has a new curve on surface on the face, F. If a new curve exists: - C is the new geometry of the edge, - L is the new location, and - Tol is the new tolerance. NewE is the new edge created from E, and NewF is the new face created from F. If there is no new curve on the face, this function returns false, and the values of C, L and Tol are not significant.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) >(&BRepTools_Modification::NewParameter),
             R"#(Returns true if the vertex V has a new parameter on the edge E. If a new parameter exists: - P is the parameter, and - Tol is the new tolerance. If there is no new parameter this function returns false, and the values of P and Tol are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (BRepTools_Modification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<GeomAbs_Shape (BRepTools_Modification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) >(&BRepTools_Modification::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>. <NewE> is the new edge created from <E>. <NewF1> (resp. <NewF2>) is the new face created from <F1> (resp. <F2>).)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTools_Modification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTools_Modification::*)() const>(&BRepTools_Modification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTools_Modification::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepTools_Modification::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_Modifier , shared_ptr<BRepTools_Modifier>  >>(m.attr("BRepTools_Modifier"))
    // constructors
        .def(py::init< Standard_Boolean >()  , py::arg("theMutableInput")=static_cast<Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
        .def(py::init< const TopoDS_Shape &,const opencascade::handle<BRepTools_Modification> & >()  , py::arg("S"),  py::arg("M") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepTools_Modifier::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepTools_Modifier::*)( const TopoDS_Shape &  ) >(&BRepTools_Modifier::Init),
             R"#(Initializes the modifier with the shape <S>.)#"  , py::arg("S"))
        .def("Perform",
             (void (BRepTools_Modifier::*)( const opencascade::handle<BRepTools_Modification> & ,  const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<void (BRepTools_Modifier::*)( const opencascade::handle<BRepTools_Modification> & ,  const opencascade::handle<Message_ProgressIndicator> &  ) >(&BRepTools_Modifier::Perform),
             R"#(Performs the modifications described by <M>.)#"  , py::arg("M"),  py::arg("aProgress")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(NULL))
        .def("IsDone",
             (Standard_Boolean (BRepTools_Modifier::*)() const) static_cast<Standard_Boolean (BRepTools_Modifier::*)() const>(&BRepTools_Modifier::IsDone),
             R"#(Returns Standard_True if the modification has been computed successfully.)#" )
        .def("IsMutableInput",
             (Standard_Boolean (BRepTools_Modifier::*)() const) static_cast<Standard_Boolean (BRepTools_Modifier::*)() const>(&BRepTools_Modifier::IsMutableInput),
             R"#(Returns the current mutable input state)#" )
        .def("SetMutableInput",
             (void (BRepTools_Modifier::*)( Standard_Boolean  ) ) static_cast<void (BRepTools_Modifier::*)( Standard_Boolean  ) >(&BRepTools_Modifier::SetMutableInput),
             R"#(Sets the mutable input state If true then the input (original) shape can be modified during modification process)#"  , py::arg("theMutableInput"))
        .def("ModifiedShape",
             (const TopoDS_Shape & (BRepTools_Modifier::*)( const TopoDS_Shape &  ) const) static_cast<const TopoDS_Shape & (BRepTools_Modifier::*)( const TopoDS_Shape &  ) const>(&BRepTools_Modifier::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>.)#"  , py::arg("S"))
        .def("ModifiedShape",
             (const TopoDS_Shape & (BRepTools_Modifier::*)( const TopoDS_Shape &  ) const) static_cast<const TopoDS_Shape & (BRepTools_Modifier::*)( const TopoDS_Shape &  ) const>(&BRepTools_Modifier::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>.)#"  , py::arg("S"))
        .def("IsDone",
             (Standard_Boolean (BRepTools_Modifier::*)() const) static_cast<Standard_Boolean (BRepTools_Modifier::*)() const>(&BRepTools_Modifier::IsDone),
             R"#(Returns Standard_True if the modification has been computed successfully.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_Quilt , shared_ptr<BRepTools_Quilt>  >>(m.attr("BRepTools_Quilt"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Bind",
             (void (BRepTools_Quilt::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) ) static_cast<void (BRepTools_Quilt::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) >(&BRepTools_Quilt::Bind),
             R"#(Binds <Enew> to be the new edge instead of <Eold>.)#"  , py::arg("Eold"),  py::arg("Enew"))
        .def("Bind",
             (void (BRepTools_Quilt::*)( const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) ) static_cast<void (BRepTools_Quilt::*)( const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) >(&BRepTools_Quilt::Bind),
             R"#(Binds <VNew> to be a new vertex instead of <Vold>.)#"  , py::arg("Vold"),  py::arg("Vnew"))
        .def("Add",
             (void (BRepTools_Quilt::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepTools_Quilt::*)( const TopoDS_Shape &  ) >(&BRepTools_Quilt::Add),
             R"#(Add the faces of <S> to the Quilt, the faces containing bounded edges are copied.)#"  , py::arg("S"))
        .def("IsCopied",
             (Standard_Boolean (BRepTools_Quilt::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepTools_Quilt::*)( const TopoDS_Shape &  ) const>(&BRepTools_Quilt::IsCopied),
             R"#(Returns True if <S> has been copied (<S> is a vertex, an edge or a face))#"  , py::arg("S"))
        .def("Copy",
             (const TopoDS_Shape & (BRepTools_Quilt::*)( const TopoDS_Shape &  ) const) static_cast<const TopoDS_Shape & (BRepTools_Quilt::*)( const TopoDS_Shape &  ) const>(&BRepTools_Quilt::Copy),
             R"#(Returns the shape substitued to <S> in the Quilt.)#"  , py::arg("S"))
        .def("Shells",
             (TopoDS_Shape (BRepTools_Quilt::*)() const) static_cast<TopoDS_Shape (BRepTools_Quilt::*)() const>(&BRepTools_Quilt::Shells),
             R"#(Returns a Compound of shells made from the current set of faces. The shells will be flagged as closed or not closed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_ReShape ,opencascade::handle<BRepTools_ReShape>  , Standard_Transient >>(m.attr("BRepTools_ReShape"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (BRepTools_ReShape::*)() ) static_cast<void (BRepTools_ReShape::*)() >(&BRepTools_ReShape::Clear),
             R"#(Clears all substitutions requests)#" )
        .def("Remove",
             (void (BRepTools_ReShape::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepTools_ReShape::*)( const TopoDS_Shape &  ) >(&BRepTools_ReShape::Remove),
             R"#(Sets a request to Remove a Shape whatever the orientation)#"  , py::arg("shape"))
        .def("Replace",
             (void (BRepTools_ReShape::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepTools_ReShape::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepTools_ReShape::Replace),
             R"#(Sets a request to Replace a Shape by a new one.)#"  , py::arg("shape"),  py::arg("newshape"))
        .def("IsRecorded",
             (Standard_Boolean (BRepTools_ReShape::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepTools_ReShape::*)( const TopoDS_Shape &  ) const>(&BRepTools_ReShape::IsRecorded),
             R"#(Tells if a shape is recorded for Replace/Remove)#"  , py::arg("shape"))
        .def("Value",
             (TopoDS_Shape (BRepTools_ReShape::*)( const TopoDS_Shape &  ) const) static_cast<TopoDS_Shape (BRepTools_ReShape::*)( const TopoDS_Shape &  ) const>(&BRepTools_ReShape::Value),
             R"#(Returns the new value for an individual shape If not recorded, returns the original shape itself If to be Removed, returns a Null Shape Else, returns the replacing item)#"  , py::arg("shape"))
        .def("Status",
             (Standard_Integer (BRepTools_ReShape::*)( const TopoDS_Shape & ,  TopoDS_Shape & ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (BRepTools_ReShape::*)( const TopoDS_Shape & ,  TopoDS_Shape & ,  const Standard_Boolean  ) >(&BRepTools_ReShape::Status),
             R"#(Returns a complete substitution status for a shape 0 : not recorded, <newsh> = original <shape> < 0: to be removed, <newsh> is NULL > 0: to be replaced, <newsh> is a new item If <last> is False, returns status and new shape recorded in the map directly for the shape, if True and status > 0 then recursively searches for the last status and new shape.)#"  , py::arg("shape"),  py::arg("newsh"),  py::arg("last")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Apply",
             (TopoDS_Shape (BRepTools_ReShape::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) ) static_cast<TopoDS_Shape (BRepTools_ReShape::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) >(&BRepTools_ReShape::Apply),
             R"#(Applies the substitutions requests to a shape.)#"  , py::arg("shape"),  py::arg("until")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("ModeConsiderLocation",
             (Standard_Boolean & (BRepTools_ReShape::*)() ) static_cast<Standard_Boolean & (BRepTools_ReShape::*)() >(&BRepTools_ReShape::ModeConsiderLocation),
             R"#(Returns (modifiable) the flag which defines whether Location of shape take into account during replacing shapes.)#" )
        .def("CopyVertex",
             (TopoDS_Vertex (BRepTools_ReShape::*)( const TopoDS_Vertex & ,  const Standard_Real  ) ) static_cast<TopoDS_Vertex (BRepTools_ReShape::*)( const TopoDS_Vertex & ,  const Standard_Real  ) >(&BRepTools_ReShape::CopyVertex),
             R"#(None)#"  , py::arg("theV"),  py::arg("theTol")=static_cast<const Standard_Real>(- 1.0))
        .def("CopyVertex",
             (TopoDS_Vertex (BRepTools_ReShape::*)( const TopoDS_Vertex & ,  const gp_Pnt & ,  const Standard_Real  ) ) static_cast<TopoDS_Vertex (BRepTools_ReShape::*)( const TopoDS_Vertex & ,  const gp_Pnt & ,  const Standard_Real  ) >(&BRepTools_ReShape::CopyVertex),
             R"#(None)#"  , py::arg("theV"),  py::arg("theNewPos"),  py::arg("aTol"))
        .def("IsNewShape",
             (Standard_Boolean (BRepTools_ReShape::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepTools_ReShape::*)( const TopoDS_Shape &  ) const>(&BRepTools_ReShape::IsNewShape),
             R"#(None)#"  , py::arg("theShape"))
        .def("History",
             (opencascade::handle<BRepTools_History> (BRepTools_ReShape::*)() const) static_cast<opencascade::handle<BRepTools_History> (BRepTools_ReShape::*)() const>(&BRepTools_ReShape::History),
             R"#(Returns the history of the substituted shapes.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTools_ReShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTools_ReShape::*)() const>(&BRepTools_ReShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTools_ReShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepTools_ReShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_ShapeSet , shared_ptr<BRepTools_ShapeSet>  , TopTools_ShapeSet >>(m.attr("BRepTools_ShapeSet"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("isWithTriangles")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const BRep_Builder &,const Standard_Boolean >()  , py::arg("B"),  py::arg("isWithTriangles")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Clear",
             (void (BRepTools_ShapeSet::*)() ) static_cast<void (BRepTools_ShapeSet::*)() >(&BRepTools_ShapeSet::Clear),
             R"#(Clears the content of the set.)#" )
        .def("AddGeometry",
             (void (BRepTools_ShapeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepTools_ShapeSet::*)( const TopoDS_Shape &  ) >(&BRepTools_ShapeSet::AddGeometry),
             R"#(Stores the goemetry of <S>.)#"  , py::arg("S"))
        .def("DumpGeometry",
             (void (BRepTools_ShapeSet::*)( std::ostream &  ) const) static_cast<void (BRepTools_ShapeSet::*)( std::ostream &  ) const>(&BRepTools_ShapeSet::DumpGeometry),
             R"#(Dumps the geometry of me on the stream <OS>.)#"  , py::arg("OS"))
        .def("WriteGeometry",
             (void (BRepTools_ShapeSet::*)( std::ostream &  ) ) static_cast<void (BRepTools_ShapeSet::*)( std::ostream &  ) >(&BRepTools_ShapeSet::WriteGeometry),
             R"#(Writes the geometry of me on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
        .def("ReadGeometry",
             (void (BRepTools_ShapeSet::*)( std::istream &  ) ) static_cast<void (BRepTools_ShapeSet::*)( std::istream &  ) >(&BRepTools_ShapeSet::ReadGeometry),
             R"#(Reads the geometry of me from the stream <IS>.)#"  , py::arg("IS"))
        .def("DumpGeometry",
             (void (BRepTools_ShapeSet::*)( const TopoDS_Shape & ,  std::ostream &  ) const) static_cast<void (BRepTools_ShapeSet::*)( const TopoDS_Shape & ,  std::ostream &  ) const>(&BRepTools_ShapeSet::DumpGeometry),
             R"#(Dumps the geometry of <S> on the stream <OS>.)#"  , py::arg("S"),  py::arg("OS"))
        .def("WriteGeometry",
             (void (BRepTools_ShapeSet::*)( const TopoDS_Shape & ,  std::ostream &  ) const) static_cast<void (BRepTools_ShapeSet::*)( const TopoDS_Shape & ,  std::ostream &  ) const>(&BRepTools_ShapeSet::WriteGeometry),
             R"#(Writes the geometry of <S> on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("S"),  py::arg("OS"))
        .def("ReadGeometry",
             (void (BRepTools_ShapeSet::*)( const TopAbs_ShapeEnum ,  std::istream & ,  TopoDS_Shape &  ) ) static_cast<void (BRepTools_ShapeSet::*)( const TopAbs_ShapeEnum ,  std::istream & ,  TopoDS_Shape &  ) >(&BRepTools_ShapeSet::ReadGeometry),
             R"#(Reads the geometry of a shape of type <T> from the stream <IS> and returns it in <S>.)#"  , py::arg("T"),  py::arg("IS"),  py::arg("S"))
        .def("AddShapes",
             (void (BRepTools_ShapeSet::*)( TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepTools_ShapeSet::*)( TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepTools_ShapeSet::AddShapes),
             R"#(Inserts the shape <S2> in the shape <S1>. This method must be redefined to use the correct builder.)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Check",
             (void (BRepTools_ShapeSet::*)( const TopAbs_ShapeEnum ,  TopoDS_Shape &  ) ) static_cast<void (BRepTools_ShapeSet::*)( const TopAbs_ShapeEnum ,  TopoDS_Shape &  ) >(&BRepTools_ShapeSet::Check),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
        .def("ReadPolygon3D",
             (void (BRepTools_ShapeSet::*)( std::istream &  ) ) static_cast<void (BRepTools_ShapeSet::*)( std::istream &  ) >(&BRepTools_ShapeSet::ReadPolygon3D),
             R"#(Reads the 3d polygons of me from the stream <IS>.)#"  , py::arg("IS"))
        .def("WritePolygon3D",
             (void (BRepTools_ShapeSet::*)( std::ostream & ,  const Standard_Boolean  ) const) static_cast<void (BRepTools_ShapeSet::*)( std::ostream & ,  const Standard_Boolean  ) const>(&BRepTools_ShapeSet::WritePolygon3D),
             R"#(Writes the 3d polygons on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"),  py::arg("Compact")=static_cast<const Standard_Boolean>(Standard_True))
        .def("DumpPolygon3D",
             (void (BRepTools_ShapeSet::*)( std::ostream &  ) const) static_cast<void (BRepTools_ShapeSet::*)( std::ostream &  ) const>(&BRepTools_ShapeSet::DumpPolygon3D),
             R"#(Dumps the 3d polygons on the stream <OS>.)#"  , py::arg("OS"))
        .def("ReadTriangulation",
             (void (BRepTools_ShapeSet::*)( std::istream &  ) ) static_cast<void (BRepTools_ShapeSet::*)( std::istream &  ) >(&BRepTools_ShapeSet::ReadTriangulation),
             R"#(Reads the triangulation of me from the stream <IS>.)#"  , py::arg("IS"))
        .def("WriteTriangulation",
             (void (BRepTools_ShapeSet::*)( std::ostream & ,  const Standard_Boolean  ) const) static_cast<void (BRepTools_ShapeSet::*)( std::ostream & ,  const Standard_Boolean  ) const>(&BRepTools_ShapeSet::WriteTriangulation),
             R"#(Writes the triangulation on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"),  py::arg("Compact")=static_cast<const Standard_Boolean>(Standard_True))
        .def("DumpTriangulation",
             (void (BRepTools_ShapeSet::*)( std::ostream &  ) const) static_cast<void (BRepTools_ShapeSet::*)( std::ostream &  ) const>(&BRepTools_ShapeSet::DumpTriangulation),
             R"#(Dumps the triangulation on the stream <OS>.)#"  , py::arg("OS"))
        .def("ReadPolygonOnTriangulation",
             (void (BRepTools_ShapeSet::*)( std::istream &  ) ) static_cast<void (BRepTools_ShapeSet::*)( std::istream &  ) >(&BRepTools_ShapeSet::ReadPolygonOnTriangulation),
             R"#(Reads the polygons on triangulation of me from the stream <IS>.)#"  , py::arg("IS"))
        .def("WritePolygonOnTriangulation",
             (void (BRepTools_ShapeSet::*)( std::ostream & ,  const Standard_Boolean  ) const) static_cast<void (BRepTools_ShapeSet::*)( std::ostream & ,  const Standard_Boolean  ) const>(&BRepTools_ShapeSet::WritePolygonOnTriangulation),
             R"#(Writes the polygons on triangulation on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"),  py::arg("Compact")=static_cast<const Standard_Boolean>(Standard_True))
        .def("DumpPolygonOnTriangulation",
             (void (BRepTools_ShapeSet::*)( std::ostream &  ) const) static_cast<void (BRepTools_ShapeSet::*)( std::ostream &  ) const>(&BRepTools_ShapeSet::DumpPolygonOnTriangulation),
             R"#(Dumps the polygons on triangulation on the stream <OS>.)#"  , py::arg("OS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_Substitution , shared_ptr<BRepTools_Substitution>  >>(m.attr("BRepTools_Substitution"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (BRepTools_Substitution::*)() ) static_cast<void (BRepTools_Substitution::*)() >(&BRepTools_Substitution::Clear),
             R"#(Reset all the fields.)#" )
        .def("Substitute",
             (void (BRepTools_Substitution::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepTools_Substitution::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) >(&BRepTools_Substitution::Substitute),
             R"#(<Oldshape> will be replaced by <NewShapes>.)#"  , py::arg("OldShape"),  py::arg("NewShapes"))
        .def("Build",
             (void (BRepTools_Substitution::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepTools_Substitution::*)( const TopoDS_Shape &  ) >(&BRepTools_Substitution::Build),
             R"#(Build NewShape from <S> if its subshapes has modified.)#"  , py::arg("S"))
        .def("IsCopied",
             (Standard_Boolean (BRepTools_Substitution::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepTools_Substitution::*)( const TopoDS_Shape &  ) const>(&BRepTools_Substitution::IsCopied),
             R"#(Returns True if <S> has been replaced .)#"  , py::arg("S"))
        .def("Copy",
             (const TopTools_ListOfShape & (BRepTools_Substitution::*)( const TopoDS_Shape &  ) const) static_cast<const TopTools_ListOfShape & (BRepTools_Substitution::*)( const TopoDS_Shape &  ) const>(&BRepTools_Substitution::Copy),
             R"#(Returns the set of shapes substitued to <S> .)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_WireExplorer , shared_ptr<BRepTools_WireExplorer>  >>(m.attr("BRepTools_WireExplorer"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire & >()  , py::arg("W") )
        .def(py::init< const TopoDS_Wire &,const TopoDS_Face & >()  , py::arg("W"),  py::arg("F") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepTools_WireExplorer::*)( const TopoDS_Wire &  ) ) static_cast<void (BRepTools_WireExplorer::*)( const TopoDS_Wire &  ) >(&BRepTools_WireExplorer::Init),
             R"#(Initializes an exploration of the wire <W>.)#"  , py::arg("W"))
        .def("Init",
             (void (BRepTools_WireExplorer::*)( const TopoDS_Wire & ,  const TopoDS_Face &  ) ) static_cast<void (BRepTools_WireExplorer::*)( const TopoDS_Wire & ,  const TopoDS_Face &  ) >(&BRepTools_WireExplorer::Init),
             R"#(Initializes an exploration of the wire <W>. F is used to select the edge connected to the previous in the parametric representation of <F>.)#"  , py::arg("W"),  py::arg("F"))
        .def("Init",
             (void (BRepTools_WireExplorer::*)( const TopoDS_Wire & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepTools_WireExplorer::*)( const TopoDS_Wire & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&BRepTools_WireExplorer::Init),
             R"#(Initializes an exploration of the wire <W>. F is used to select the edge connected to the previous in the parametric representation of <F>. <UMIn>, <UMax>, <VMin>, <VMax> - the UV bounds of the face <F>.)#"  , py::arg("W"),  py::arg("F"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"))
        .def("More",
             (Standard_Boolean (BRepTools_WireExplorer::*)() const) static_cast<Standard_Boolean (BRepTools_WireExplorer::*)() const>(&BRepTools_WireExplorer::More),
             R"#(Returns True if there is a current edge.)#" )
        .def("Next",
             (void (BRepTools_WireExplorer::*)() ) static_cast<void (BRepTools_WireExplorer::*)() >(&BRepTools_WireExplorer::Next),
             R"#(Proceeds to the next edge.)#" )
        .def("Current",
             (const TopoDS_Edge & (BRepTools_WireExplorer::*)() const) static_cast<const TopoDS_Edge & (BRepTools_WireExplorer::*)() const>(&BRepTools_WireExplorer::Current),
             R"#(Returns the current edge.)#" )
        .def("Orientation",
             (TopAbs_Orientation (BRepTools_WireExplorer::*)() const) static_cast<TopAbs_Orientation (BRepTools_WireExplorer::*)() const>(&BRepTools_WireExplorer::Orientation),
             R"#(Returns an Orientation for the current edge.)#" )
        .def("CurrentVertex",
             (const TopoDS_Vertex & (BRepTools_WireExplorer::*)() const) static_cast<const TopoDS_Vertex & (BRepTools_WireExplorer::*)() const>(&BRepTools_WireExplorer::CurrentVertex),
             R"#(Returns the vertex connecting the current edge to the previous one.)#" )
        .def("Clear",
             (void (BRepTools_WireExplorer::*)() ) static_cast<void (BRepTools_WireExplorer::*)() >(&BRepTools_WireExplorer::Clear),
             R"#(Clears the content of the explorer.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_GTrsfModification ,opencascade::handle<BRepTools_GTrsfModification>  , BRepTools_Modification >>(m.attr("BRepTools_GTrsfModification"))
    // constructors
        .def(py::init< const gp_GTrsf & >()  , py::arg("T") )
    // custom constructors
    // methods
        .def("GTrsf",
             (gp_GTrsf & (BRepTools_GTrsfModification::*)() ) static_cast<gp_GTrsf & (BRepTools_GTrsfModification::*)() >(&BRepTools_GTrsfModification::GTrsf),
             R"#(Gives an access on the GTrsf.)#" )
        .def("NewSurface",
             (Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Face & ,  opencascade::handle<Geom_Surface> & ,  TopLoc_Location & ,  Standard_Real & ,  Standard_Boolean & ,  Standard_Boolean &  ) ) static_cast<Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Face & ,  opencascade::handle<Geom_Surface> & ,  TopLoc_Location & ,  Standard_Real & ,  Standard_Boolean & ,  Standard_Boolean &  ) >(&BRepTools_GTrsfModification::NewSurface),
             R"#(Returns Standard_True if the face <F> has been modified. In this case, <S> is the new geometric support of the face, <L> the new location,<Tol> the new tolerance.<RevWires> has to be set to Standard_True when the modification reverses the normal of the surface.(the wires have to be reversed). <RevFace> has to be set to Standard_True if the orientation of the modified face changes in the shells which contain it. -- Here, <RevFace> will return Standard_True if the -- gp_Trsf is negative.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  TopLoc_Location & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  TopLoc_Location & ,  Standard_Real &  ) >(&BRepTools_GTrsfModification::NewCurve),
             R"#(Returns Standard_True if the edge <E> has been modified. In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Vertex & ,  gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Vertex & ,  gp_Pnt & ,  Standard_Real &  ) >(&BRepTools_GTrsfModification::NewPoint),
             R"#(Returns Standard_True if the vertex <V> has been modified. In this case, <P> is the new geometric support of the vertex, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real &  ) >(&BRepTools_GTrsfModification::NewCurve2d),
             R"#(Returns Standard_True if the edge <E> has a new curve on surface on the face <F>.In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) >(&BRepTools_GTrsfModification::NewParameter),
             R"#(Returns Standard_True if the Vertex <V> has a new parameter on the edge <E>. In this case, <P> is the parameter, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (BRepTools_GTrsfModification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<GeomAbs_Shape (BRepTools_GTrsfModification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) >(&BRepTools_GTrsfModification::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTools_GTrsfModification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTools_GTrsfModification::*)() const>(&BRepTools_GTrsfModification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTools_GTrsfModification::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepTools_GTrsfModification::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_NurbsConvertModification ,opencascade::handle<BRepTools_NurbsConvertModification>  , BRepTools_Modification >>(m.attr("BRepTools_NurbsConvertModification"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("NewSurface",
             (Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Face & ,  opencascade::handle<Geom_Surface> & ,  TopLoc_Location & ,  Standard_Real & ,  Standard_Boolean & ,  Standard_Boolean &  ) ) static_cast<Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Face & ,  opencascade::handle<Geom_Surface> & ,  TopLoc_Location & ,  Standard_Real & ,  Standard_Boolean & ,  Standard_Boolean &  ) >(&BRepTools_NurbsConvertModification::NewSurface),
             R"#(Returns Standard_True if the face <F> has been modified. In this case, <S> is the new geometric support of the face, <L> the new location,<Tol> the new tolerance.<RevWires> has to be set to Standard_True when the modification reverses the normal of the surface.(the wires have to be reversed). <RevFace> has to be set to Standard_True if the orientation of the modified face changes in the shells which contain it. -- Here, <RevFace> will return Standard_True if the -- gp_Trsf is negative.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  TopLoc_Location & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  TopLoc_Location & ,  Standard_Real &  ) >(&BRepTools_NurbsConvertModification::NewCurve),
             R"#(Returns Standard_True if the edge <E> has been modified. In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Vertex & ,  gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Vertex & ,  gp_Pnt & ,  Standard_Real &  ) >(&BRepTools_NurbsConvertModification::NewPoint),
             R"#(Returns Standard_True if the vertex <V> has been modified. In this case, <P> is the new geometric support of the vertex, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real &  ) >(&BRepTools_NurbsConvertModification::NewCurve2d),
             R"#(Returns Standard_True if the edge <E> has a new curve on surface on the face <F>.In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) >(&BRepTools_NurbsConvertModification::NewParameter),
             R"#(Returns Standard_True if the Vertex <V> has a new parameter on the edge <E>. In this case, <P> is the parameter, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (BRepTools_NurbsConvertModification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<GeomAbs_Shape (BRepTools_NurbsConvertModification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) >(&BRepTools_NurbsConvertModification::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("GetUpdatedEdges",
             (const TopTools_ListOfShape & (BRepTools_NurbsConvertModification::*)() const) static_cast<const TopTools_ListOfShape & (BRepTools_NurbsConvertModification::*)() const>(&BRepTools_NurbsConvertModification::GetUpdatedEdges),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTools_NurbsConvertModification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTools_NurbsConvertModification::*)() const>(&BRepTools_NurbsConvertModification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTools_NurbsConvertModification::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepTools_NurbsConvertModification::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_TrsfModification ,opencascade::handle<BRepTools_TrsfModification>  , BRepTools_Modification >>(m.attr("BRepTools_TrsfModification"))
    // constructors
        .def(py::init< const gp_Trsf & >()  , py::arg("T") )
    // custom constructors
    // methods
        .def("Trsf",
             (gp_Trsf & (BRepTools_TrsfModification::*)() ) static_cast<gp_Trsf & (BRepTools_TrsfModification::*)() >(&BRepTools_TrsfModification::Trsf),
             R"#(Provides access to the gp_Trsf associated with this modification. The transformation can be changed.)#" )
        .def("NewSurface",
             (Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Face & ,  opencascade::handle<Geom_Surface> & ,  TopLoc_Location & ,  Standard_Real & ,  Standard_Boolean & ,  Standard_Boolean &  ) ) static_cast<Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Face & ,  opencascade::handle<Geom_Surface> & ,  TopLoc_Location & ,  Standard_Real & ,  Standard_Boolean & ,  Standard_Boolean &  ) >(&BRepTools_TrsfModification::NewSurface),
             R"#(Returns true if the face F has been modified. If the face has been modified: - S is the new geometry of the face, - L is its new location, and - Tol is the new tolerance. RevWires is set to true when the modification reverses the normal of the surface (the wires have to be reversed). RevFace is set to true if the orientation of the modified face changes in the shells which contain it. For this class, RevFace returns true if the gp_Trsf associated with this modification is negative.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  TopLoc_Location & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  TopLoc_Location & ,  Standard_Real &  ) >(&BRepTools_TrsfModification::NewCurve),
             R"#(Returns true if the edge E has been modified. If the edge has been modified: - C is the new geometric support of the edge, - L is the new location, and - Tol is the new tolerance. If the edge has not been modified, this function returns false, and the values of C, L and Tol are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Vertex & ,  gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Vertex & ,  gp_Pnt & ,  Standard_Real &  ) >(&BRepTools_TrsfModification::NewPoint),
             R"#(Returns true if the vertex V has been modified. If the vertex has been modified: - P is the new geometry of the vertex, and - Tol is the new tolerance. If the vertex has not been modified this function returns false, and the values of P and Tol are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real &  ) >(&BRepTools_TrsfModification::NewCurve2d),
             R"#(Returns true if the edge E has a new curve on surface on the face F. If a new curve exists: - C is the new geometric support of the edge, - L is the new location, and - Tol the new tolerance. If no new curve exists, this function returns false, and the values of C, L and Tol are not significant.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) >(&BRepTools_TrsfModification::NewParameter),
             R"#(Returns true if the Vertex V has a new parameter on the edge E. If a new parameter exists: - P is the parameter, and - Tol is the new tolerance. If no new parameter exists, this function returns false, and the values of P and Tol are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (BRepTools_TrsfModification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<GeomAbs_Shape (BRepTools_TrsfModification::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) >(&BRepTools_TrsfModification::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTools_TrsfModification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTools_TrsfModification::*)() const>(&BRepTools_TrsfModification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTools_TrsfModification::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepTools_TrsfModification::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepTools_MapOfVertexPnt2d.hxx
// ./opencascade/BRepTools_GTrsfModification.hxx
// ./opencascade/BRepTools_Modifier.hxx
// ./opencascade/BRepTools_TrsfModification.hxx
// ./opencascade/BRepTools_Quilt.hxx
// ./opencascade/BRepTools_History.hxx
// ./opencascade/BRepTools_ReShape.hxx
// ./opencascade/BRepTools_Modification.hxx
// ./opencascade/BRepTools.hxx
// ./opencascade/BRepTools_Substitution.hxx
// ./opencascade/BRepTools_ShapeSet.hxx
// ./opencascade/BRepTools_WireExplorer.hxx
// ./opencascade/BRepTools_NurbsConvertModification.hxx
// ./opencascade/BRepTools_DataMapIteratorOfMapOfVertexPnt2d.hxx

// operators

// register typdefs
    register_template_NCollection_DataMap<TopoDS_Shape, TColgp_SequenceOfPnt2d, TopTools_ShapeMapHasher>(m,"BRepTools_MapOfVertexPnt2d");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

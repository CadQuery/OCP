
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
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
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
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
#include <Standard_NullObject.hxx>
#include <BRepTools_Modification.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Wire.hxx>

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
void register_BRepTools_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepTools", R"#()#");

// user-defined inclusion per module in the body

// enums

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

// classes forward declarations only
    py::class_<BRepTools ,std::unique_ptr<BRepTools>  >(m,"BRepTools",R"#(The BRepTools package provides utilities for BRep data structures.)#");
    py::class_<BRepTools_Modification ,opencascade::handle<BRepTools_Modification> ,Py_BRepTools_Modification , Standard_Transient >(m,"BRepTools_Modification",R"#(Defines geometric modifications to a shape, i.e. changes to faces, edges and vertices.Defines geometric modifications to a shape, i.e. changes to faces, edges and vertices.Defines geometric modifications to a shape, i.e. changes to faces, edges and vertices.)#");
    py::class_<BRepTools_Modifier ,std::unique_ptr<BRepTools_Modifier>  >(m,"BRepTools_Modifier",R"#(Performs geometric modifications on a shape.)#");
    py::class_<BRepTools_History ,opencascade::handle<BRepTools_History>  , Standard_Transient >(m,"BRepTools_History",R"#(The history keeps the following relations between the input shapes (S1, ..., Sm) and output shapes (T1, ..., Tn): 1) an output shape Tj is generated from an input shape Si: Tj <= G(Si); 2) a output shape Tj is modified from an input shape Si: Tj <= M(Si); 3) an input shape (Si) is removed: R(Si) == 1.The history keeps the following relations between the input shapes (S1, ..., Sm) and output shapes (T1, ..., Tn): 1) an output shape Tj is generated from an input shape Si: Tj <= G(Si); 2) a output shape Tj is modified from an input shape Si: Tj <= M(Si); 3) an input shape (Si) is removed: R(Si) == 1.The history keeps the following relations between the input shapes (S1, ..., Sm) and output shapes (T1, ..., Tn): 1) an output shape Tj is generated from an input shape Si: Tj <= G(Si); 2) a output shape Tj is modified from an input shape Si: Tj <= M(Si); 3) an input shape (Si) is removed: R(Si) == 1.)#");
    py::class_<BRepTools_TrsfModification ,opencascade::handle<BRepTools_TrsfModification>  , BRepTools_Modification >(m,"BRepTools_TrsfModification",R"#(Describes a modification that uses a gp_Trsf to change the geometry of a shape. All functions return true and transform the geometry of the shape.Describes a modification that uses a gp_Trsf to change the geometry of a shape. All functions return true and transform the geometry of the shape.Describes a modification that uses a gp_Trsf to change the geometry of a shape. All functions return true and transform the geometry of the shape.)#");
    py::class_<BRepTools_ReShape ,opencascade::handle<BRepTools_ReShape>  , Standard_Transient >(m,"BRepTools_ReShape",R"#(Rebuilds a Shape by making pre-defined substitutions on some of its componentsRebuilds a Shape by making pre-defined substitutions on some of its componentsRebuilds a Shape by making pre-defined substitutions on some of its components)#");
    py::class_<BRepTools_NurbsConvertModification ,opencascade::handle<BRepTools_NurbsConvertModification>  , BRepTools_Modification >(m,"BRepTools_NurbsConvertModification",R"#(Defines a modification of the geometry by a Trsf from gp. All methods return True and transform the geometry.Defines a modification of the geometry by a Trsf from gp. All methods return True and transform the geometry.Defines a modification of the geometry by a Trsf from gp. All methods return True and transform the geometry.)#");
    py::class_<BRepTools_ShapeSet ,std::unique_ptr<BRepTools_ShapeSet>  , TopTools_ShapeSet >(m,"BRepTools_ShapeSet",R"#(Contains a Shape and all its subshapes, locations and geometries.)#");
    py::class_<BRepTools_WireExplorer ,std::unique_ptr<BRepTools_WireExplorer>  >(m,"BRepTools_WireExplorer",R"#(The WireExplorer is a tool to explore the edges of a wire in a connection order.)#");
    py::class_<BRepTools_GTrsfModification ,opencascade::handle<BRepTools_GTrsfModification>  , BRepTools_Modification >(m,"BRepTools_GTrsfModification",R"#(Defines a modification of the geometry by a GTrsf from gp. All methods return True and transform the geometry.Defines a modification of the geometry by a GTrsf from gp. All methods return True and transform the geometry.Defines a modification of the geometry by a GTrsf from gp. All methods return True and transform the geometry.)#");
    py::class_<BRepTools_Quilt ,std::unique_ptr<BRepTools_Quilt>  >(m,"BRepTools_Quilt",R"#(A Tool to glue faces at common edges and reconstruct shells.)#");
    py::class_<BRepTools_Substitution ,std::unique_ptr<BRepTools_Substitution>  >(m,"BRepTools_Substitution",R"#(A tool to substitute subshapes by other shapes.)#");

// pre-register typdefs
// ./opencascade/BRepTools.hxx
// ./opencascade/BRepTools_ReShape.hxx
// ./opencascade/BRepTools_GTrsfModification.hxx
// ./opencascade/BRepTools_NurbsConvertModification.hxx
// ./opencascade/BRepTools_Modification.hxx
// ./opencascade/BRepTools_Substitution.hxx
// ./opencascade/BRepTools_Modifier.hxx
// ./opencascade/BRepTools_ShapeSet.hxx
// ./opencascade/BRepTools_MapOfVertexPnt2d.hxx
    preregister_template_NCollection_DataMap<TopoDS_Shape, TColgp_SequenceOfPnt2d, TopTools_ShapeMapHasher>(m,"BRepTools_MapOfVertexPnt2d");  
// ./opencascade/BRepTools_History.hxx
// ./opencascade/BRepTools_Quilt.hxx
// ./opencascade/BRepTools_TrsfModification.hxx
// ./opencascade/BRepTools_DataMapIteratorOfMapOfVertexPnt2d.hxx
// ./opencascade/BRepTools_WireExplorer.hxx

};

// user-defined post-inclusion per module

// user-defined post

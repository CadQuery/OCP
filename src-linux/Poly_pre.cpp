
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Poly_Triangulation.hxx>
#include <Poly_CoherentLink.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_Polygon2D.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_Polygon2D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Connect.hxx>
#include <Poly_CoherentTriangle.hxx>
#include <Poly_CoherentTriangulation.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_NullObject.hxx>
#include <gp_Dir.hxx>
#include <gp_Dir2d.hxx>
#include <Poly_CoherentTriangle.hxx>
#include <Standard_NullObject.hxx>

// module includes
#include <Poly.hxx>
#include <Poly_Array1OfTriangle.hxx>
#include <Poly_CoherentLink.hxx>
#include <Poly_CoherentNode.hxx>
#include <Poly_CoherentTriangle.hxx>
#include <Poly_CoherentTriangulation.hxx>
#include <Poly_CoherentTriPtr.hxx>
#include <Poly_Connect.hxx>
#include <Poly_HArray1OfTriangle.hxx>
#include <Poly_ListOfTriangulation.hxx>
#include <Poly_MakeLoops.hxx>
#include <Poly_Polygon2D.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Triangle.hxx>
#include <Poly_Triangulation.hxx>

// template related includes
// ./opencascade/Poly_CoherentTriangulation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Poly_CoherentTriangulation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Poly_CoherentTriangulation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Poly_ListOfTriangulation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Poly_Array1OfTriangle.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Poly_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Poly", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_List<opencascade::handle<Poly_Triangulation> >(m,"Poly_ListOfTriangulation");
    preregister_template_NCollection_Array1<Poly_Triangle>(m,"Poly_Array1OfTriangle");

// classes forward declarations only
    py::class_<Poly_CoherentLink , shared_ptr<Poly_CoherentLink> >(m,"Poly_CoherentLink",R"#(Link between two mesh nodes that is created by existing triangle(s). Keeps reference to the opposite node of each incident triangle. The referred node with index "0" is always on the left side of the link, the one with the index "1" is always on the right side. It is possible to find both incident triangles using the method Poly_CoherentTriangulation::FindTriangle(). Any Link can store an arbitrary pointer that is called Attribute.)#");
    py::class_<Poly_CoherentNode , shared_ptr<Poly_CoherentNode> , gp_XYZ>(m,"Poly_CoherentNode",R"#(Node of coherent triangulation. Contains: Coordinates of a 3D point defining the node location 2D point coordinates List of triangles that use this Node Integer index, normally the index of the node in the original triangulation)#");
    py::class_<Poly_CoherentTriangle , shared_ptr<Poly_CoherentTriangle> >(m,"Poly_CoherentTriangle",R"#(Data class used in Poly_CoherentTriangultion. Implements a triangle with references to its neighbours.)#");
    py::class_<Poly_CoherentTriangulation ,opencascade::handle<Poly_CoherentTriangulation> , Standard_Transient>(m,"Poly_CoherentTriangulation",R"#(Triangulation structure that allows to: Store the connectivity of each triangle with up to 3 neighbouring ones and with the corresponding 3rd nodes on them, Store the connectivity of each node with all triangles that share this node Add nodes and triangles to the structure, Find all triangles sharing a single or a couple of nodes Remove triangles from structure Optionally create Links between pairs of nodes according to the current triangulation. Convert from/to Poly_Triangulation structure.Triangulation structure that allows to: Store the connectivity of each triangle with up to 3 neighbouring ones and with the corresponding 3rd nodes on them, Store the connectivity of each node with all triangles that share this node Add nodes and triangles to the structure, Find all triangles sharing a single or a couple of nodes Remove triangles from structure Optionally create Links between pairs of nodes according to the current triangulation. Convert from/to Poly_Triangulation structure.Triangulation structure that allows to: Store the connectivity of each triangle with up to 3 neighbouring ones and with the corresponding 3rd nodes on them, Store the connectivity of each node with all triangles that share this node Add nodes and triangles to the structure, Find all triangles sharing a single or a couple of nodes Remove triangles from structure Optionally create Links between pairs of nodes according to the current triangulation. Convert from/to Poly_Triangulation structure.Triangulation structure that allows to: Store the connectivity of each triangle with up to 3 neighbouring ones and with the corresponding 3rd nodes on them, Store the connectivity of each node with all triangles that share this node Add nodes and triangles to the structure, Find all triangles sharing a single or a couple of nodes Remove triangles from structure Optionally create Links between pairs of nodes according to the current triangulation. Convert from/to Poly_Triangulation structure.)#");
    py::class_<Poly_Connect , shared_ptr<Poly_Connect> >(m,"Poly_Connect",R"#(Provides an algorithm to explore, inside a triangulation, the adjacency data for a node or a triangle. Adjacency data for a node consists of triangles which contain the node. Adjacency data for a triangle consists of: - the 3 adjacent triangles which share an edge of the triangle, - and the 3 nodes which are the other nodes of these adjacent triangles. Example Inside a triangulation, a triangle T has nodes n1, n2 and n3. It has adjacent triangles AT1, AT2 and AT3 where: - AT1 shares the nodes n2 and n3, - AT2 shares the nodes n3 and n1, - AT3 shares the nodes n1 and n2. It has adjacent nodes an1, an2 and an3 where: - an1 is the third node of AT1, - an2 is the third node of AT2, - an3 is the third node of AT3. So triangle AT1 is composed of nodes n2, n3 and an1. There are two ways of using this algorithm. - From a given node you can look for one triangle that passes through the node, then look for the triangles adjacent to this triangle, then the adjacent nodes. You can thus explore the triangulation step by step (functions Triangle, Triangles and Nodes). - From a given node you can look for all the triangles that pass through the node (iteration method, using the functions Initialize, More, Next and Value). A Connect object can be seen as a tool which analyzes a triangulation and translates it into a series of triangles. By doing this, it provides an interface with other tools and applications working on basic triangles, and which do not work directly with a Poly_Triangulation.)#");
    py::class_<Poly_HArray1OfTriangle ,opencascade::handle<Poly_HArray1OfTriangle> , Poly_Array1OfTriangle, Standard_Transient>(m,"Poly_HArray1OfTriangle",R"#()#");
    py::class_<Poly_Polygon2D ,opencascade::handle<Poly_Polygon2D> , Standard_Transient>(m,"Poly_Polygon2D",R"#(Provides a polygon in 2D space (for example, in the parametric space of a surface). It is generally an approximate representation of a curve. A Polygon2D is defined by a table of nodes. Each node is a 2D point. If the polygon is closed, the point of closure is repeated at the end of the table of nodes.Provides a polygon in 2D space (for example, in the parametric space of a surface). It is generally an approximate representation of a curve. A Polygon2D is defined by a table of nodes. Each node is a 2D point. If the polygon is closed, the point of closure is repeated at the end of the table of nodes.Provides a polygon in 2D space (for example, in the parametric space of a surface). It is generally an approximate representation of a curve. A Polygon2D is defined by a table of nodes. Each node is a 2D point. If the polygon is closed, the point of closure is repeated at the end of the table of nodes.)#");
    py::class_<Poly_Polygon3D ,opencascade::handle<Poly_Polygon3D> , Standard_Transient>(m,"Poly_Polygon3D",R"#(This class Provides a polygon in 3D space. It is generally an approximate representation of a curve. A Polygon3D is defined by a table of nodes. Each node is a 3D point. If the polygon is closed, the point of closure is repeated at the end of the table of nodes. If the polygon is an approximate representation of a curve, you can associate with each of its nodes the value of the parameter of the corresponding point on the curve.This class Provides a polygon in 3D space. It is generally an approximate representation of a curve. A Polygon3D is defined by a table of nodes. Each node is a 3D point. If the polygon is closed, the point of closure is repeated at the end of the table of nodes. If the polygon is an approximate representation of a curve, you can associate with each of its nodes the value of the parameter of the corresponding point on the curve.This class Provides a polygon in 3D space. It is generally an approximate representation of a curve. A Polygon3D is defined by a table of nodes. Each node is a 3D point. If the polygon is closed, the point of closure is repeated at the end of the table of nodes. If the polygon is an approximate representation of a curve, you can associate with each of its nodes the value of the parameter of the corresponding point on the curve.)#");
    py::class_<Poly_PolygonOnTriangulation ,opencascade::handle<Poly_PolygonOnTriangulation> , Standard_Transient>(m,"Poly_PolygonOnTriangulation",R"#(This class provides a polygon in 3D space, based on the triangulation of a surface. It may be the approximate representation of a curve on the surface, or more generally the shape. A PolygonOnTriangulation is defined by a table of nodes. Each node is an index in the table of nodes specific to a triangulation, and represents a point on the surface. If the polygon is closed, the index of the point of closure is repeated at the end of the table of nodes. If the polygon is an approximate representation of a curve on a surface, you can associate with each of its nodes the value of the parameter of the corresponding point on the curve.represents a 3d PolygonThis class provides a polygon in 3D space, based on the triangulation of a surface. It may be the approximate representation of a curve on the surface, or more generally the shape. A PolygonOnTriangulation is defined by a table of nodes. Each node is an index in the table of nodes specific to a triangulation, and represents a point on the surface. If the polygon is closed, the index of the point of closure is repeated at the end of the table of nodes. If the polygon is an approximate representation of a curve on a surface, you can associate with each of its nodes the value of the parameter of the corresponding point on the curve.represents a 3d PolygonThis class provides a polygon in 3D space, based on the triangulation of a surface. It may be the approximate representation of a curve on the surface, or more generally the shape. A PolygonOnTriangulation is defined by a table of nodes. Each node is an index in the table of nodes specific to a triangulation, and represents a point on the surface. If the polygon is closed, the index of the point of closure is repeated at the end of the table of nodes. If the polygon is an approximate representation of a curve on a surface, you can associate with each of its nodes the value of the parameter of the corresponding point on the curve.represents a 3d Polygon)#");
    py::class_<Poly_Triangle , shared_ptr<Poly_Triangle> >(m,"Poly_Triangle",R"#(Describes a component triangle of a triangulation (Poly_Triangulation object). A Triangle is defined by a triplet of nodes. Each node is an index in the table of nodes specific to an existing triangulation of a shape, and represents a point on the surface.)#");
    py::class_<Poly_Triangulation ,opencascade::handle<Poly_Triangulation> , Standard_Transient>(m,"Poly_Triangulation",R"#(Provides a triangulation for a surface, a set of surfaces, or more generally a shape. A triangulation consists of an approximate representation of the actual shape, using a collection of points and triangles. The points are located on the surface. The edges of the triangles connect adjacent points with a straight line that approximates the true curve on the surface. A triangulation comprises: - A table of 3D nodes (3D points on the surface). - A table of triangles. Each triangle (Poly_Triangle object) comprises a triplet of indices in the table of 3D nodes specific to the triangulation. - A table of 2D nodes (2D points), parallel to the table of 3D nodes. This table is optional. If it exists, the coordinates of a 2D point are the (u, v) parameters of the corresponding 3D point on the surface approximated by the triangulation. - A deflection (optional), which maximizes the distance from a point on the surface to the corresponding point on its approximate triangulation. In many cases, algorithms do not need to work with the exact representation of a surface. A triangular representation induces simpler and more robust adjusting, faster performances, and the results are as good. This is a Transient class.Provides a triangulation for a surface, a set of surfaces, or more generally a shape. A triangulation consists of an approximate representation of the actual shape, using a collection of points and triangles. The points are located on the surface. The edges of the triangles connect adjacent points with a straight line that approximates the true curve on the surface. A triangulation comprises: - A table of 3D nodes (3D points on the surface). - A table of triangles. Each triangle (Poly_Triangle object) comprises a triplet of indices in the table of 3D nodes specific to the triangulation. - A table of 2D nodes (2D points), parallel to the table of 3D nodes. This table is optional. If it exists, the coordinates of a 2D point are the (u, v) parameters of the corresponding 3D point on the surface approximated by the triangulation. - A deflection (optional), which maximizes the distance from a point on the surface to the corresponding point on its approximate triangulation. In many cases, algorithms do not need to work with the exact representation of a surface. A triangular representation induces simpler and more robust adjusting, faster performances, and the results are as good. This is a Transient class.Provides a triangulation for a surface, a set of surfaces, or more generally a shape. A triangulation consists of an approximate representation of the actual shape, using a collection of points and triangles. The points are located on the surface. The edges of the triangles connect adjacent points with a straight line that approximates the true curve on the surface. A triangulation comprises: - A table of 3D nodes (3D points on the surface). - A table of triangles. Each triangle (Poly_Triangle object) comprises a triplet of indices in the table of 3D nodes specific to the triangulation. - A table of 2D nodes (2D points), parallel to the table of 3D nodes. This table is optional. If it exists, the coordinates of a 2D point are the (u, v) parameters of the corresponding 3D point on the surface approximated by the triangulation. - A deflection (optional), which maximizes the distance from a point on the surface to the corresponding point on its approximate triangulation. In many cases, algorithms do not need to work with the exact representation of a surface. A triangular representation induces simpler and more robust adjusting, faster performances, and the results are as good. This is a Transient class.)#");
    py::class_<Poly_MakeLoops2D , shared_ptr<Poly_MakeLoops2D> >(m,"Poly_MakeLoops2D",R"#(None)#");
    py::class_<Poly_MakeLoops3D , shared_ptr<Poly_MakeLoops3D> >(m,"Poly_MakeLoops3D",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post

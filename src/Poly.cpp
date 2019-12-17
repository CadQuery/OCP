
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Poly_CoherentTriangle.hxx>
#include <gp_Dir.hxx>
#include <gp_Dir2d.hxx>
#include <Poly_CoherentTriangle.hxx>
#include <Poly_CoherentTriangulation.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_NullObject.hxx>
#include <Poly_Triangulation.hxx>
#include <Standard_NullObject.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_Polygon2D.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_Polygon2D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Connect.hxx>
#include <Poly_CoherentLink.hxx>

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
// ./opencascade/Poly_Array1OfTriangle.hxx
#include "NCollection.hxx"
// ./opencascade/Poly_ListOfTriangulation.hxx
#include "NCollection.hxx"
// ./opencascade/Poly_CoherentTriangulation.hxx
#include "NCollection.hxx"
// ./opencascade/Poly_CoherentTriangulation.hxx
#include "NCollection.hxx"
// ./opencascade/Poly_CoherentTriangulation.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Poly(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Poly"));


//Python trampoline classes

// classes


    static_cast<py::class_<Poly_Polygon3D ,opencascade::handle<Poly_Polygon3D>  , Standard_Transient >>(m.attr("Poly_Polygon3D"))
        .def(py::init<  const NCollection_Array1<gp_Pnt> & >()  , py::arg("Nodes") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<Standard_Real> & >()  , py::arg("Nodes"),  py::arg("Parameters") )
        .def("Copy",
             (opencascade::handle<Poly_Polygon3D> (Poly_Polygon3D::*)() const) static_cast<opencascade::handle<Poly_Polygon3D> (Poly_Polygon3D::*)() const>(&Poly_Polygon3D::Copy),
             R"#(Creates a copy of current polygon)#" )
        .def("Deflection",
             (Standard_Real (Poly_Polygon3D::*)() const) static_cast<Standard_Real (Poly_Polygon3D::*)() const>(&Poly_Polygon3D::Deflection),
             R"#(Returns the deflection of this polygon)#" )
        .def("Deflection",
             (void (Poly_Polygon3D::*)( const Standard_Real  ) ) static_cast<void (Poly_Polygon3D::*)( const Standard_Real  ) >(&Poly_Polygon3D::Deflection),
             R"#(Sets the deflection of this polygon to D. See more on deflection in Poly_Polygon2D)#"  , py::arg("D"))
        .def("NbNodes",
             (Standard_Integer (Poly_Polygon3D::*)() const) static_cast<Standard_Integer (Poly_Polygon3D::*)() const>(&Poly_Polygon3D::NbNodes),
             R"#(Returns the number of nodes in this polygon. Note: If the polygon is closed, the point of closure is repeated at the end of its table of nodes. Thus, on a closed triangle the function NbNodes returns 4.)#" )
        .def("Nodes",
             (const TColgp_Array1OfPnt & (Poly_Polygon3D::*)() const) static_cast<const TColgp_Array1OfPnt & (Poly_Polygon3D::*)() const>(&Poly_Polygon3D::Nodes),
             R"#(Returns the table of nodes for this polygon.)#" )
        .def("HasParameters",
             (Standard_Boolean (Poly_Polygon3D::*)() const) static_cast<Standard_Boolean (Poly_Polygon3D::*)() const>(&Poly_Polygon3D::HasParameters),
             R"#(Returns the table of the parameters associated with each node in this polygon. HasParameters function checks if parameters are associated with the nodes of this polygon.)#" )
        .def("Parameters",
             (const TColStd_Array1OfReal & (Poly_Polygon3D::*)() const) static_cast<const TColStd_Array1OfReal & (Poly_Polygon3D::*)() const>(&Poly_Polygon3D::Parameters),
             R"#(Returns true if parameters are associated with the nodes in this polygon.)#" )
        .def("ChangeParameters",
             (TColStd_Array1OfReal & (Poly_Polygon3D::*)() const) static_cast<TColStd_Array1OfReal & (Poly_Polygon3D::*)() const>(&Poly_Polygon3D::ChangeParameters),
             R"#(Returns the table of the parameters associated with each node in this polygon. ChangeParameters function returnes the array as shared. Therefore if the table is selected by reference you can, by simply modifying it, directly modify the data structure of this polygon.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Poly_Polygon3D::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Poly_Polygon3D::*)() const>(&Poly_Polygon3D::DynamicType),
             R"#(None)#" )
        .def("NbNodes",
             (Standard_Integer (Poly_Polygon3D::*)() const) static_cast<Standard_Integer (Poly_Polygon3D::*)() const>(&Poly_Polygon3D::NbNodes),
             R"#(Returns the number of nodes in this polygon. Note: If the polygon is closed, the point of closure is repeated at the end of its table of nodes. Thus, on a closed triangle the function NbNodes returns 4.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Poly_Polygon3D::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Poly_Polygon3D::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<Poly_HArray1OfTriangle ,std::unique_ptr<Poly_HArray1OfTriangle>  >>(m.attr("Poly_HArray1OfTriangle"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const Poly_Triangle & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Poly_Triangle> & >()  , py::arg("theOther") )
        .def("Array1",
             (const Poly_Array1OfTriangle & (Poly_HArray1OfTriangle::*)() const) static_cast<const Poly_Array1OfTriangle & (Poly_HArray1OfTriangle::*)() const>(&Poly_HArray1OfTriangle::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Poly_Array1OfTriangle & (Poly_HArray1OfTriangle::*)() ) static_cast<Poly_Array1OfTriangle & (Poly_HArray1OfTriangle::*)() >(&Poly_HArray1OfTriangle::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Poly_HArray1OfTriangle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Poly_HArray1OfTriangle::*)() const>(&Poly_HArray1OfTriangle::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Poly_HArray1OfTriangle::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Poly_HArray1OfTriangle::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<Poly_Connect ,std::unique_ptr<Poly_Connect>  >>(m.attr("Poly_Connect"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Poly_Triangulation> & >()  , py::arg("theTriangulation") )
        .def("Load",
             (void (Poly_Connect::*)( const opencascade::handle<Poly_Triangulation> &  ) ) static_cast<void (Poly_Connect::*)( const opencascade::handle<Poly_Triangulation> &  ) >(&Poly_Connect::Load),
             R"#(Initialize the algorithm to explore the adjacency data of nodes or triangles for the triangulation theTriangulation.)#"  , py::arg("theTriangulation"))
        .def("Triangulation",
             (const opencascade::handle<Poly_Triangulation> & (Poly_Connect::*)() const) static_cast<const opencascade::handle<Poly_Triangulation> & (Poly_Connect::*)() const>(&Poly_Connect::Triangulation),
             R"#(Returns the triangulation analyzed by this tool.)#" )
        .def("Triangle",
             (Standard_Integer (Poly_Connect::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Poly_Connect::*)( const Standard_Integer  ) const>(&Poly_Connect::Triangle),
             R"#(Returns the index of a triangle containing the node at index N in the nodes table specific to the triangulation analyzed by this tool)#"  , py::arg("N"))
        .def("Triangles",
             (void (Poly_Connect::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (Poly_Connect::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&Poly_Connect::Triangles),
             R"#(Returns in t1, t2 and t3, the indices of the 3 triangles adjacent to the triangle at index T in the triangles table specific to the triangulation analyzed by this tool. Warning Null indices are returned when there are fewer than 3 adjacent triangles.)#"  , py::arg("T"),  py::arg("t1"),  py::arg("t2"),  py::arg("t3"))
        .def("Nodes",
             (void (Poly_Connect::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (Poly_Connect::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&Poly_Connect::Nodes),
             R"#(Returns, in n1, n2 and n3, the indices of the 3 nodes adjacent to the triangle referenced at index T in the triangles table specific to the triangulation analyzed by this tool. Warning Null indices are returned when there are fewer than 3 adjacent nodes.)#"  , py::arg("T"),  py::arg("n1"),  py::arg("n2"),  py::arg("n3"))
        .def("Initialize",
             (void (Poly_Connect::*)( const Standard_Integer  ) ) static_cast<void (Poly_Connect::*)( const Standard_Integer  ) >(&Poly_Connect::Initialize),
             R"#(Initializes an iterator to search for all the triangles containing the node referenced at index N in the nodes table, for the triangulation analyzed by this tool. The iterator is managed by the following functions: - More, which checks if there are still elements in the iterator - Next, which positions the iterator on the next element - Value, which returns the current element. The use of such an iterator provides direct access to the triangles around a particular node, i.e. it avoids iterating on all the component triangles of a triangulation. Example Poly_Connect C(Tr); for (C.Initialize(n1);C.More();C.Next()) { t = C.Value(); })#"  , py::arg("N"))
        .def("More",
             (Standard_Boolean (Poly_Connect::*)() const) static_cast<Standard_Boolean (Poly_Connect::*)() const>(&Poly_Connect::More),
             R"#(Returns true if there is another element in the iterator defined with the function Initialize (i.e. if there is another triangle containing the given node).)#" )
        .def("Next",
             (void (Poly_Connect::*)() ) static_cast<void (Poly_Connect::*)() >(&Poly_Connect::Next),
             R"#(Advances the iterator defined with the function Initialize to access the next triangle. Note: There is no action if the iterator is empty (i.e. if the function More returns false).-)#" )
        .def("Value",
             (Standard_Integer (Poly_Connect::*)() const) static_cast<Standard_Integer (Poly_Connect::*)() const>(&Poly_Connect::Value),
             R"#(Returns the index of the current triangle to which the iterator, defined with the function Initialize, points. This is an index in the triangles table specific to the triangulation analyzed by this tool)#" )
;


    static_cast<py::class_<Poly_CoherentTriangulation ,opencascade::handle<Poly_CoherentTriangulation>  , Standard_Transient >>(m.attr("Poly_CoherentTriangulation"))
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAlloc")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(0L) )
        .def(py::init< const opencascade::handle<Poly_Triangulation> &,const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theTriangulation"),  py::arg("theAlloc")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(0L) )
        .def("GetTriangulation",
             (opencascade::handle<Poly_Triangulation> (Poly_CoherentTriangulation::*)() const) static_cast<opencascade::handle<Poly_Triangulation> (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::GetTriangulation),
             R"#(Create an instance of Poly_Triangulation from this object.)#" )
        .def("GetFreeNodes",
             (Standard_Boolean (Poly_CoherentTriangulation::*)( NCollection_List<Standard_Integer> &  ) const) static_cast<Standard_Boolean (Poly_CoherentTriangulation::*)( NCollection_List<Standard_Integer> &  ) const>(&Poly_CoherentTriangulation::GetFreeNodes),
             R"#(Create a list of free nodes. These nodes may appear as a result of any custom mesh decimation or RemoveDegenerated() call. This analysis is necessary if you support additional data structures based on the triangulation (e.g., edges on the surface boundary).)#"  , py::arg("lstNodes"))
        .def("MaxNode",
             (Standard_Integer (Poly_CoherentTriangulation::*)() const) static_cast<Standard_Integer (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::MaxNode),
             R"#(Query the index of the last node in the triangulation)#" )
        .def("MaxTriangle",
             (Standard_Integer (Poly_CoherentTriangulation::*)() const) static_cast<Standard_Integer (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::MaxTriangle),
             R"#(Query the index of the last triangle in the triangulation)#" )
        .def("SetDeflection",
             (void (Poly_CoherentTriangulation::*)( const Standard_Real  ) ) static_cast<void (Poly_CoherentTriangulation::*)( const Standard_Real  ) >(&Poly_CoherentTriangulation::SetDeflection),
             R"#(Set the Deflection value as the parameter of the given triangulation.)#"  , py::arg("theDefl"))
        .def("Deflection",
             (Standard_Real (Poly_CoherentTriangulation::*)() const) static_cast<Standard_Real (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::Deflection),
             R"#(Query the Deflection parameter (default value 0. -- if never initialized))#" )
        .def("SetNode",
             (Standard_Integer (Poly_CoherentTriangulation::*)( const gp_XYZ & ,  const Standard_Integer  ) ) static_cast<Standard_Integer (Poly_CoherentTriangulation::*)( const gp_XYZ & ,  const Standard_Integer  ) >(&Poly_CoherentTriangulation::SetNode),
             R"#(Initialize a node)#"  , py::arg("thePnt"),  py::arg("iN")=static_cast<const Standard_Integer>(- 1))
        .def("Node",
             (const Poly_CoherentNode & (Poly_CoherentTriangulation::*)( const Standard_Integer  ) const) static_cast<const Poly_CoherentNode & (Poly_CoherentTriangulation::*)( const Standard_Integer  ) const>(&Poly_CoherentTriangulation::Node),
             R"#(Get the node at the given index 'i'.)#"  , py::arg("i"))
        .def("ChangeNode",
             (Poly_CoherentNode & (Poly_CoherentTriangulation::*)( const Standard_Integer  ) ) static_cast<Poly_CoherentNode & (Poly_CoherentTriangulation::*)( const Standard_Integer  ) >(&Poly_CoherentTriangulation::ChangeNode),
             R"#(Get the node at the given index 'i'.)#"  , py::arg("i"))
        .def("NNodes",
             (Standard_Integer (Poly_CoherentTriangulation::*)() const) static_cast<Standard_Integer (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::NNodes),
             R"#(Query the total number of active nodes (i.e. nodes used by 1 or more triangles))#" )
        .def("Triangle",
             (const Poly_CoherentTriangle & (Poly_CoherentTriangulation::*)( const Standard_Integer  ) const) static_cast<const Poly_CoherentTriangle & (Poly_CoherentTriangulation::*)( const Standard_Integer  ) const>(&Poly_CoherentTriangulation::Triangle),
             R"#(Get the triangle at the given index 'i'.)#"  , py::arg("i"))
        .def("NTriangles",
             (Standard_Integer (Poly_CoherentTriangulation::*)() const) static_cast<Standard_Integer (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::NTriangles),
             R"#(Query the total number of active triangles (i.e. triangles that refer nodes, non-empty ones))#" )
        .def("NLinks",
             (Standard_Integer (Poly_CoherentTriangulation::*)() const) static_cast<Standard_Integer (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::NLinks),
             R"#(Query the total number of active Links.)#" )
        .def("RemoveTriangle",
             (Standard_Boolean (Poly_CoherentTriangulation::*)( Poly_CoherentTriangle &  ) ) static_cast<Standard_Boolean (Poly_CoherentTriangulation::*)( Poly_CoherentTriangle &  ) >(&Poly_CoherentTriangulation::RemoveTriangle),
             R"#(Removal of a single triangle from the triangulation.)#"  , py::arg("theTr"))
        .def("RemoveLink",
             (void (Poly_CoherentTriangulation::*)( Poly_CoherentLink &  ) ) static_cast<void (Poly_CoherentTriangulation::*)( Poly_CoherentLink &  ) >(&Poly_CoherentTriangulation::RemoveLink),
             R"#(Removal of a single link from the triangulation.)#"  , py::arg("theLink"))
        .def("AddTriangle",
             (Poly_CoherentTriangle * (Poly_CoherentTriangulation::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Poly_CoherentTriangle * (Poly_CoherentTriangulation::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Poly_CoherentTriangulation::AddTriangle),
             R"#(Add a triangle to the triangulation.)#"  , py::arg("iNode0"),  py::arg("iNode1"),  py::arg("iNode2"))
        .def("ReplaceNodes",
             (Standard_Boolean (Poly_CoherentTriangulation::*)( Poly_CoherentTriangle & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (Poly_CoherentTriangulation::*)( Poly_CoherentTriangle & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Poly_CoherentTriangulation::ReplaceNodes),
             R"#(Replace nodes in the given triangle.)#"  , py::arg("theTriangle"),  py::arg("iNode0"),  py::arg("iNode1"),  py::arg("iNode2"))
        .def("AddLink",
             (Poly_CoherentLink * (Poly_CoherentTriangulation::*)( const Poly_CoherentTriangle & ,  const Standard_Integer  ) ) static_cast<Poly_CoherentLink * (Poly_CoherentTriangulation::*)( const Poly_CoherentTriangle & ,  const Standard_Integer  ) >(&Poly_CoherentTriangulation::AddLink),
             R"#(Add a single link to triangulation, based on a triangle and its side index. This method does not check for coincidence with already present links.)#"  , py::arg("theTri"),  py::arg("theConn"))
        .def("ComputeLinks",
             (Standard_Integer (Poly_CoherentTriangulation::*)() ) static_cast<Standard_Integer (Poly_CoherentTriangulation::*)() >(&Poly_CoherentTriangulation::ComputeLinks),
             R"#((Re)Calculate all links in this Triangulation.)#" )
        .def("ClearLinks",
             (void (Poly_CoherentTriangulation::*)() ) static_cast<void (Poly_CoherentTriangulation::*)() >(&Poly_CoherentTriangulation::ClearLinks),
             R"#(Clear all Links data from the Triangulation data.)#" )
        .def("Allocator",
             (const opencascade::handle<NCollection_BaseAllocator> & (Poly_CoherentTriangulation::*)() const) static_cast<const opencascade::handle<NCollection_BaseAllocator> & (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::Allocator),
             R"#(Query the allocator of elements, this allocator can be used for other objects)#" )
        .def("Clone",
             (opencascade::handle<Poly_CoherentTriangulation> (Poly_CoherentTriangulation::*)( const opencascade::handle<NCollection_BaseAllocator> &  ) const) static_cast<opencascade::handle<Poly_CoherentTriangulation> (Poly_CoherentTriangulation::*)( const opencascade::handle<NCollection_BaseAllocator> &  ) const>(&Poly_CoherentTriangulation::Clone),
             R"#(Create a copy of this Triangulation, using the given allocator.)#"  , py::arg("theAlloc"))
        .def("Dump",
             (void (Poly_CoherentTriangulation::*)( std::ostream &  ) const) static_cast<void (Poly_CoherentTriangulation::*)( std::ostream &  ) const>(&Poly_CoherentTriangulation::Dump),
             R"#(Debugging output.)#"  , py::arg(""))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Poly_CoherentTriangulation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Poly_CoherentTriangulation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Poly_CoherentTriangulation::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<Poly_Triangulation ,opencascade::handle<Poly_Triangulation>  , Standard_Transient >>(m.attr("Poly_Triangulation"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Boolean >()  , py::arg("nbNodes"),  py::arg("nbTriangles"),  py::arg("UVNodes") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<Poly_Triangle> & >()  , py::arg("Nodes"),  py::arg("Triangles") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<gp_Pnt2d> &, const NCollection_Array1<Poly_Triangle> & >()  , py::arg("Nodes"),  py::arg("UVNodes"),  py::arg("Triangles") )
        .def(py::init< const opencascade::handle<Poly_Triangulation> & >()  , py::arg("theTriangulation") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Poly_Triangulation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Poly_Triangulation::*)() const>(&Poly_Triangulation::DynamicType),
             R"#(None)#" )
        .def("Copy",
             (opencascade::handle<Poly_Triangulation> (Poly_Triangulation::*)() const) static_cast<opencascade::handle<Poly_Triangulation> (Poly_Triangulation::*)() const>(&Poly_Triangulation::Copy),
             R"#(Creates full copy of current triangulation)#" )
        .def("Deflection",
             (Standard_Real (Poly_Triangulation::*)() const) static_cast<Standard_Real (Poly_Triangulation::*)() const>(&Poly_Triangulation::Deflection),
             R"#(Returns the deflection of this triangulation.)#" )
        .def("Deflection",
             (void (Poly_Triangulation::*)( const Standard_Real  ) ) static_cast<void (Poly_Triangulation::*)( const Standard_Real  ) >(&Poly_Triangulation::Deflection),
             R"#(Sets the deflection of this triangulation to theDeflection. See more on deflection in Polygon2D)#"  , py::arg("theDeflection"))
        .def("RemoveUVNodes",
             (void (Poly_Triangulation::*)() ) static_cast<void (Poly_Triangulation::*)() >(&Poly_Triangulation::RemoveUVNodes),
             R"#(Deallocates the UV nodes.)#" )
        .def("NbNodes",
             (Standard_Integer (Poly_Triangulation::*)() const) static_cast<Standard_Integer (Poly_Triangulation::*)() const>(&Poly_Triangulation::NbNodes),
             R"#(Returns the number of nodes for this triangulation.)#" )
        .def("NbTriangles",
             (Standard_Integer (Poly_Triangulation::*)() const) static_cast<Standard_Integer (Poly_Triangulation::*)() const>(&Poly_Triangulation::NbTriangles),
             R"#(Returns the number of triangles for this triangulation.)#" )
        .def("HasUVNodes",
             (Standard_Boolean (Poly_Triangulation::*)() const) static_cast<Standard_Boolean (Poly_Triangulation::*)() const>(&Poly_Triangulation::HasUVNodes),
             R"#(Returns Standard_True if 2D nodes are associated with 3D nodes for this triangulation.)#" )
        .def("Nodes",
             (const TColgp_Array1OfPnt & (Poly_Triangulation::*)() const) static_cast<const TColgp_Array1OfPnt & (Poly_Triangulation::*)() const>(&Poly_Triangulation::Nodes),
             R"#(Returns the table of 3D nodes (3D points) for this triangulation.)#" )
        .def("ChangeNodes",
             (TColgp_Array1OfPnt & (Poly_Triangulation::*)() ) static_cast<TColgp_Array1OfPnt & (Poly_Triangulation::*)() >(&Poly_Triangulation::ChangeNodes),
             R"#(Returns the table of 3D nodes (3D points) for this triangulation. The returned array is shared. Therefore if the table is selected by reference, you can, by simply modifying it, directly modify the data structure of this triangulation.)#" )
        .def("Node",
             (const gp_Pnt & (Poly_Triangulation::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt & (Poly_Triangulation::*)( const Standard_Integer  ) const>(&Poly_Triangulation::Node),
             R"#(Returns node at the given index. Raises Standard_OutOfRange exception if theIndex is less than 1 or greater than NbNodes.)#"  , py::arg("theIndex"))
        .def("ChangeNode",
             (gp_Pnt & (Poly_Triangulation::*)( const Standard_Integer  ) ) static_cast<gp_Pnt & (Poly_Triangulation::*)( const Standard_Integer  ) >(&Poly_Triangulation::ChangeNode),
             R"#(Give access to the node at the given index. Raises Standard_OutOfRange exception if theIndex is less than 1 or greater than NbNodes.)#"  , py::arg("theIndex"))
        .def("UVNodes",
             (const TColgp_Array1OfPnt2d & (Poly_Triangulation::*)() const) static_cast<const TColgp_Array1OfPnt2d & (Poly_Triangulation::*)() const>(&Poly_Triangulation::UVNodes),
             R"#(Returns the table of 2D nodes (2D points) associated with each 3D node of this triangulation. The function HasUVNodes checks if 2D nodes are associated with the 3D nodes of this triangulation. Const reference on the 2d nodes values.)#" )
        .def("ChangeUVNodes",
             (TColgp_Array1OfPnt2d & (Poly_Triangulation::*)() ) static_cast<TColgp_Array1OfPnt2d & (Poly_Triangulation::*)() >(&Poly_Triangulation::ChangeUVNodes),
             R"#(Returns the table of 2D nodes (2D points) associated with each 3D node of this triangulation. Function ChangeUVNodes shares the returned array. Therefore if the table is selected by reference, you can, by simply modifying it, directly modify the data structure of this triangulation.)#" )
        .def("UVNode",
             (const gp_Pnt2d & (Poly_Triangulation::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt2d & (Poly_Triangulation::*)( const Standard_Integer  ) const>(&Poly_Triangulation::UVNode),
             R"#(Returns UVNode at the given index. Raises Standard_OutOfRange exception if theIndex is less than 1 or greater than NbNodes.)#"  , py::arg("theIndex"))
        .def("ChangeUVNode",
             (gp_Pnt2d & (Poly_Triangulation::*)( const Standard_Integer  ) ) static_cast<gp_Pnt2d & (Poly_Triangulation::*)( const Standard_Integer  ) >(&Poly_Triangulation::ChangeUVNode),
             R"#(Give access to the UVNode at the given index. Raises Standard_OutOfRange exception if theIndex is less than 1 or greater than NbNodes.)#"  , py::arg("theIndex"))
        .def("Triangles",
             (const Poly_Array1OfTriangle & (Poly_Triangulation::*)() const) static_cast<const Poly_Array1OfTriangle & (Poly_Triangulation::*)() const>(&Poly_Triangulation::Triangles),
             R"#(Returns the table of triangles for this triangulation.)#" )
        .def("ChangeTriangles",
             (Poly_Array1OfTriangle & (Poly_Triangulation::*)() ) static_cast<Poly_Array1OfTriangle & (Poly_Triangulation::*)() >(&Poly_Triangulation::ChangeTriangles),
             R"#(Returns the table of triangles for this triangulation. Function ChangeUVNodes shares the returned array. Therefore if the table is selected by reference, you can, by simply modifying it, directly modify the data structure of this triangulation.)#" )
        .def("Triangle",
             (const Poly_Triangle & (Poly_Triangulation::*)( const Standard_Integer  ) const) static_cast<const Poly_Triangle & (Poly_Triangulation::*)( const Standard_Integer  ) const>(&Poly_Triangulation::Triangle),
             R"#(Returns triangle at the given index. Raises Standard_OutOfRange exception if theIndex is less than 1 or greater than NbTriangles.)#"  , py::arg("theIndex"))
        .def("ChangeTriangle",
             (Poly_Triangle & (Poly_Triangulation::*)( const Standard_Integer  ) ) static_cast<Poly_Triangle & (Poly_Triangulation::*)( const Standard_Integer  ) >(&Poly_Triangulation::ChangeTriangle),
             R"#(Give access to the triangle at the given index. Raises Standard_OutOfRange exception if theIndex is less than 1 or greater than NbTriangles.)#"  , py::arg("theIndex"))
        .def("SetNormals",
             (void (Poly_Triangulation::*)( const opencascade::handle<TShort_HArray1OfShortReal> &  ) ) static_cast<void (Poly_Triangulation::*)( const opencascade::handle<TShort_HArray1OfShortReal> &  ) >(&Poly_Triangulation::SetNormals),
             R"#(Sets the table of node normals. raises exception if length of theNormals != 3*NbNodes)#"  , py::arg("theNormals"))
        .def("Normals",
             (const TShort_Array1OfShortReal & (Poly_Triangulation::*)() const) static_cast<const TShort_Array1OfShortReal & (Poly_Triangulation::*)() const>(&Poly_Triangulation::Normals),
             R"#(Returns the table of node normals.)#" )
        .def("ChangeNormals",
             (TShort_Array1OfShortReal & (Poly_Triangulation::*)() ) static_cast<TShort_Array1OfShortReal & (Poly_Triangulation::*)() >(&Poly_Triangulation::ChangeNormals),
             R"#(Gives access to the table of node normals.)#" )
        .def("HasNormals",
             (Standard_Boolean (Poly_Triangulation::*)() const) static_cast<Standard_Boolean (Poly_Triangulation::*)() const>(&Poly_Triangulation::HasNormals),
             R"#(Returns Standard_True if nodal normals are defined.)#" )
        .def("Normal",
             (gp_Dir (Poly_Triangulation::*)( const Standard_Integer  ) const) static_cast<gp_Dir (Poly_Triangulation::*)( const Standard_Integer  ) const>(&Poly_Triangulation::Normal),
             R"#(Returns normal at the given index. Raises Standard_OutOfRange exception.)#"  , py::arg("theIndex"))
        .def("SetNormal",
             (void (Poly_Triangulation::*)( const Standard_Integer ,  const gp_Dir &  ) ) static_cast<void (Poly_Triangulation::*)( const Standard_Integer ,  const gp_Dir &  ) >(&Poly_Triangulation::SetNormal),
             R"#(Changes normal at the given index. Raises Standard_OutOfRange exception.)#"  , py::arg("theIndex"),  py::arg("theNormal"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Poly_Triangulation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Poly_Triangulation::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<Poly_PolygonOnTriangulation ,opencascade::handle<Poly_PolygonOnTriangulation>  , Standard_Transient >>(m.attr("Poly_PolygonOnTriangulation"))
        .def(py::init<  const NCollection_Array1<Standard_Integer> & >()  , py::arg("Nodes") )
        .def(py::init<  const NCollection_Array1<Standard_Integer> &, const NCollection_Array1<Standard_Real> & >()  , py::arg("Nodes"),  py::arg("Parameters") )
        .def("Copy",
             (opencascade::handle<Poly_PolygonOnTriangulation> (Poly_PolygonOnTriangulation::*)() const) static_cast<opencascade::handle<Poly_PolygonOnTriangulation> (Poly_PolygonOnTriangulation::*)() const>(&Poly_PolygonOnTriangulation::Copy),
             R"#(Creates a copy of current polygon)#" )
        .def("Deflection",
             (Standard_Real (Poly_PolygonOnTriangulation::*)() const) static_cast<Standard_Real (Poly_PolygonOnTriangulation::*)() const>(&Poly_PolygonOnTriangulation::Deflection),
             R"#(Returns the deflection of this polygon)#" )
        .def("Deflection",
             (void (Poly_PolygonOnTriangulation::*)( const Standard_Real  ) ) static_cast<void (Poly_PolygonOnTriangulation::*)( const Standard_Real  ) >(&Poly_PolygonOnTriangulation::Deflection),
             R"#(Sets the deflection of this polygon to D. See more on deflection in Poly_Polygones2D.)#"  , py::arg("D"))
        .def("NbNodes",
             (Standard_Integer (Poly_PolygonOnTriangulation::*)() const) static_cast<Standard_Integer (Poly_PolygonOnTriangulation::*)() const>(&Poly_PolygonOnTriangulation::NbNodes),
             R"#(Returns the number of nodes for this polygon. Note: If the polygon is closed, the point of closure is repeated at the end of its table of nodes. Thus, on a closed triangle, the function NbNodes returns 4.)#" )
        .def("Nodes",
             (const TColStd_Array1OfInteger & (Poly_PolygonOnTriangulation::*)() const) static_cast<const TColStd_Array1OfInteger & (Poly_PolygonOnTriangulation::*)() const>(&Poly_PolygonOnTriangulation::Nodes),
             R"#(Returns the table of nodes for this polygon. A node value is an index in the table of nodes specific to an existing triangulation of a shape.)#" )
        .def("HasParameters",
             (Standard_Boolean (Poly_PolygonOnTriangulation::*)() const) static_cast<Standard_Boolean (Poly_PolygonOnTriangulation::*)() const>(&Poly_PolygonOnTriangulation::HasParameters),
             R"#(Returns true if parameters are associated with the nodes in this polygon.)#" )
        .def("Parameters",
             (opencascade::handle<TColStd_HArray1OfReal> (Poly_PolygonOnTriangulation::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (Poly_PolygonOnTriangulation::*)() const>(&Poly_PolygonOnTriangulation::Parameters),
             R"#(Returns the table of the parameters associated with each node in this polygon. Warning Use the function HasParameters to check if parameters are associated with the nodes in this polygon.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Poly_PolygonOnTriangulation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Poly_PolygonOnTriangulation::*)() const>(&Poly_PolygonOnTriangulation::DynamicType),
             R"#(None)#" )
        .def("NbNodes",
             (Standard_Integer (Poly_PolygonOnTriangulation::*)() const) static_cast<Standard_Integer (Poly_PolygonOnTriangulation::*)() const>(&Poly_PolygonOnTriangulation::NbNodes),
             R"#(Returns the number of nodes for this polygon. Note: If the polygon is closed, the point of closure is repeated at the end of its table of nodes. Thus, on a closed triangle, the function NbNodes returns 4.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Poly_PolygonOnTriangulation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Poly_PolygonOnTriangulation::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<Poly_Polygon2D ,opencascade::handle<Poly_Polygon2D>  , Standard_Transient >>(m.attr("Poly_Polygon2D"))
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> & >()  , py::arg("Nodes") )
        .def("Deflection",
             (Standard_Real (Poly_Polygon2D::*)() const) static_cast<Standard_Real (Poly_Polygon2D::*)() const>(&Poly_Polygon2D::Deflection),
             R"#(Returns the deflection of this polygon. Deflection is used in cases where the polygon is an approximate representation of a curve. Deflection represents the maximum distance permitted between any point on the curve and the corresponding point on the polygon. By default the deflection value is equal to 0. An algorithm using this 2D polygon with a deflection value equal to 0 considers that it is working with a true polygon and not with an approximate representation of a curve. The Deflection function is used to modify the deflection value of this polygon. The deflection value can be used by any algorithm working with 2D polygons. For example: - An algorithm may use a unique deflection value for all its polygons. In this case it is not necessary to use the Deflection function. - Or an algorithm may want to attach a different deflection to each polygon. In this case, the Deflection function is used to set a value on each polygon, and later to fetch the value.)#" )
        .def("Deflection",
             (void (Poly_Polygon2D::*)( const Standard_Real  ) ) static_cast<void (Poly_Polygon2D::*)( const Standard_Real  ) >(&Poly_Polygon2D::Deflection),
             R"#(Sets the deflection of this polygon to D)#"  , py::arg("D"))
        .def("NbNodes",
             (Standard_Integer (Poly_Polygon2D::*)() const) static_cast<Standard_Integer (Poly_Polygon2D::*)() const>(&Poly_Polygon2D::NbNodes),
             R"#(Returns the number of nodes in this polygon. Note: If the polygon is closed, the point of closure is repeated at the end of its table of nodes. Thus, on a closed triangle, the function NbNodes returns 4.)#" )
        .def("Nodes",
             (const TColgp_Array1OfPnt2d & (Poly_Polygon2D::*)() const) static_cast<const TColgp_Array1OfPnt2d & (Poly_Polygon2D::*)() const>(&Poly_Polygon2D::Nodes),
             R"#(Returns the table of nodes for this polygon.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Poly_Polygon2D::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Poly_Polygon2D::*)() const>(&Poly_Polygon2D::DynamicType),
             R"#(None)#" )
        .def("NbNodes",
             (Standard_Integer (Poly_Polygon2D::*)() const) static_cast<Standard_Integer (Poly_Polygon2D::*)() const>(&Poly_Polygon2D::NbNodes),
             R"#(Returns the number of nodes in this polygon. Note: If the polygon is closed, the point of closure is repeated at the end of its table of nodes. Thus, on a closed triangle, the function NbNodes returns 4.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Poly_Polygon2D::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Poly_Polygon2D::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<Poly_Triangle ,std::unique_ptr<Poly_Triangle>  >>(m.attr("Poly_Triangle"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("N1"),  py::arg("N2"),  py::arg("N3") )
        .def("Set",
             (void (Poly_Triangle::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Poly_Triangle::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Poly_Triangle::Set),
             R"#(Sets the value of the three nodes of this triangle to N1, N2 and N3 respectively.)#"  , py::arg("N1"),  py::arg("N2"),  py::arg("N3"))
        .def("Set",
             (void (Poly_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Poly_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Poly_Triangle::Set),
             R"#(Sets the value of the Indexth node of this triangle to Node. Raises OutOfRange if Index is not in 1,2,3)#"  , py::arg("Index"),  py::arg("Node"))
        .def("Get",
             (void (Poly_Triangle::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (Poly_Triangle::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&Poly_Triangle::Get),
             R"#(Returns the node indices of this triangle in N1, N2 and N3.)#"  , py::arg("N1"),  py::arg("N2"),  py::arg("N3"))
        .def("Value",
             (Standard_Integer (Poly_Triangle::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Poly_Triangle::*)( const Standard_Integer  ) const>(&Poly_Triangle::Value),
             R"#(Get the node of given Index. Raises OutOfRange from Standard if Index is not in 1,2,3)#"  , py::arg("Index"))
        .def("ChangeValue",
             (Standard_Integer & (Poly_Triangle::*)( const Standard_Integer  ) ) static_cast<Standard_Integer & (Poly_Triangle::*)( const Standard_Integer  ) >(&Poly_Triangle::ChangeValue),
             R"#(Get the node of given Index. Raises OutOfRange if Index is not in 1,2,3)#"  , py::arg("Index"))
        .def("Set",
             (void (Poly_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Poly_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Poly_Triangle::Set),
             R"#(Sets the value of the Indexth node of this triangle to Node. Raises OutOfRange if Index is not in 1,2,3)#"  , py::arg("Index"),  py::arg("Node"))
        .def("Value",
             (Standard_Integer (Poly_Triangle::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Poly_Triangle::*)( const Standard_Integer  ) const>(&Poly_Triangle::Value),
             R"#(Get the node of given Index. Raises OutOfRange from Standard if Index is not in 1,2,3)#"  , py::arg("Index"))
        .def("ChangeValue",
             (Standard_Integer & (Poly_Triangle::*)( const Standard_Integer  ) ) static_cast<Standard_Integer & (Poly_Triangle::*)( const Standard_Integer  ) >(&Poly_Triangle::ChangeValue),
             R"#(Get the node of given Index. Raises OutOfRange if Index is not in 1,2,3)#"  , py::arg("Index"))
;

// functions
// ./opencascade/Poly_CoherentNode.hxx
// ./opencascade/Poly_CoherentTriPtr.hxx
// ./opencascade/Poly_Array1OfTriangle.hxx
// ./opencascade/Poly_MakeLoops.hxx
    m.def("HashCode", 
          (Standard_Integer (*)( const Poly_MakeLoops::Link & ,  int  ))  static_cast<Standard_Integer (*)( const Poly_MakeLoops::Link & ,  int  )>(&HashCode),
          R"#(HashCode method is needed for maps)#"  , py::arg("theKey"),  py::arg("theLimit"));
    m.def("IsEqual", 
          (Standard_Boolean (*)( const Poly_MakeLoops::Link & ,  const Poly_MakeLoops::Link &  ))  static_cast<Standard_Boolean (*)( const Poly_MakeLoops::Link & ,  const Poly_MakeLoops::Link &  )>(&IsEqual),
          R"#(IsEqual method is needed for maps)#"  , py::arg("theKey1"),  py::arg("theKey2"));
// ./opencascade/Poly_CoherentLink.hxx
// ./opencascade/Poly_Triangulation.hxx
// ./opencascade/Poly_Polygon3D.hxx
// ./opencascade/Poly_Triangle.hxx
// ./opencascade/Poly_HArray1OfTriangle.hxx
// ./opencascade/Poly_ListOfTriangulation.hxx
// ./opencascade/Poly_PolygonOnTriangulation.hxx
// ./opencascade/Poly_Connect.hxx
// ./opencascade/Poly_Polygon2D.hxx
// ./opencascade/Poly_CoherentTriangulation.hxx
// ./opencascade/Poly.hxx
// ./opencascade/Poly_CoherentTriangle.hxx

// operators

// register typdefs
// ./opencascade/Poly_CoherentNode.hxx
// ./opencascade/Poly_CoherentTriPtr.hxx
// ./opencascade/Poly_Array1OfTriangle.hxx
    register_template_NCollection_Array1<Poly_Triangle>(m,"Poly_Array1OfTriangle");  
// ./opencascade/Poly_MakeLoops.hxx
// ./opencascade/Poly_CoherentLink.hxx
// ./opencascade/Poly_Triangulation.hxx
// ./opencascade/Poly_Polygon3D.hxx
// ./opencascade/Poly_Triangle.hxx
// ./opencascade/Poly_HArray1OfTriangle.hxx
// ./opencascade/Poly_ListOfTriangulation.hxx
    register_template_NCollection_List<opencascade::handle<Poly_Triangulation> >(m,"Poly_ListOfTriangulation");  
// ./opencascade/Poly_PolygonOnTriangulation.hxx
// ./opencascade/Poly_Connect.hxx
// ./opencascade/Poly_Polygon2D.hxx
// ./opencascade/Poly_CoherentTriangulation.hxx
// ./opencascade/Poly.hxx
// ./opencascade/Poly_CoherentTriangle.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

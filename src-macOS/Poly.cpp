
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NullObject.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_CoherentLink.hxx>
#include <Standard_NullObject.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_Polygon2D.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_Polygon2D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Connect.hxx>
#include <Poly_CoherentTriangle.hxx>
#include <Poly_CoherentTriangle.hxx>
#include <Poly_CoherentTriangulation.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_NullObject.hxx>
#include <gp_Dir.hxx>
#include <gp_Dir2d.hxx>

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
// ./opencascade/Poly_ListOfTriangulation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Poly_Array1OfTriangle.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Poly_CoherentTriangulation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Poly_CoherentTriangulation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Poly_CoherentTriangulation.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Poly(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Poly"));


//Python trampoline classes

// classes


    static_cast<py::class_<Poly_CoherentLink , shared_ptr<Poly_CoherentLink> >>(m.attr("Poly_CoherentLink"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("iNode0"),  py::arg("iNode1") )
    // custom constructors
    // methods
        .def("Node",
             (Standard_Integer (Poly_CoherentLink::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Poly_CoherentLink::*)( const Standard_Integer ) const>(&Poly_CoherentLink::Node),
             R"#(Return the node index in the current triangulation.)#"  , py::arg("ind"))
        .def("OppositeNode",
             (Standard_Integer (Poly_CoherentLink::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Poly_CoherentLink::*)( const Standard_Integer ) const>(&Poly_CoherentLink::OppositeNode),
             R"#(Return the opposite node (belonging to the left or right incident triangle) index in the current triangulation.)#"  , py::arg("ind"))
        .def("GetAttribute",
             (Standard_Address (Poly_CoherentLink::*)() const) static_cast<Standard_Address (Poly_CoherentLink::*)() const>(&Poly_CoherentLink::GetAttribute),
             R"#(Query the attribute of the Link.)#" )
        .def("SetAttribute",
             (void (Poly_CoherentLink::*)( const Standard_Address ) ) static_cast<void (Poly_CoherentLink::*)( const Standard_Address ) >(&Poly_CoherentLink::SetAttribute),
             R"#(Set the attribute of the Link.)#"  , py::arg("theAtt"))
        .def("IsEmpty",
             (Standard_Boolean (Poly_CoherentLink::*)() const) static_cast<Standard_Boolean (Poly_CoherentLink::*)() const>(&Poly_CoherentLink::IsEmpty),
             R"#(Query the status of the link - if it is an invalid one. An invalid link has Node members equal to -1.)#" )
        .def("Nullify",
             (void (Poly_CoherentLink::*)() ) static_cast<void (Poly_CoherentLink::*)() >(&Poly_CoherentLink::Nullify),
             R"#(Invalidate this Link.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Poly_CoherentNode , shared_ptr<Poly_CoherentNode> , gp_XYZ>>(m.attr("Poly_CoherentNode"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_XYZ & >()  , py::arg("thePnt") )
    // custom constructors
    // methods
        .def("SetUV",
             (void (Poly_CoherentNode::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Poly_CoherentNode::*)( const Standard_Real , const Standard_Real ) >(&Poly_CoherentNode::SetUV),
             R"#(Set the UV coordinates of the Node.)#"  , py::arg("theU"),  py::arg("theV"))
        .def("GetU",
             (Standard_Real (Poly_CoherentNode::*)() const) static_cast<Standard_Real (Poly_CoherentNode::*)() const>(&Poly_CoherentNode::GetU),
             R"#(Get U coordinate of the Node.)#" )
        .def("GetV",
             (Standard_Real (Poly_CoherentNode::*)() const) static_cast<Standard_Real (Poly_CoherentNode::*)() const>(&Poly_CoherentNode::GetV),
             R"#(Get V coordinate of the Node.)#" )
        .def("HasNormal",
             (Standard_Boolean (Poly_CoherentNode::*)() const) static_cast<Standard_Boolean (Poly_CoherentNode::*)() const>(&Poly_CoherentNode::HasNormal),
             R"#(Query if the Node contains a normal vector.)#" )
        .def("GetNormal",
             (gp_XYZ (Poly_CoherentNode::*)() const) static_cast<gp_XYZ (Poly_CoherentNode::*)() const>(&Poly_CoherentNode::GetNormal),
             R"#(Get the stored normal in the node.)#" )
        .def("SetIndex",
             (void (Poly_CoherentNode::*)( const Standard_Integer ) ) static_cast<void (Poly_CoherentNode::*)( const Standard_Integer ) >(&Poly_CoherentNode::SetIndex),
             R"#(Set the value of node Index.)#"  , py::arg("theIndex"))
        .def("GetIndex",
             (Standard_Integer (Poly_CoherentNode::*)() const) static_cast<Standard_Integer (Poly_CoherentNode::*)() const>(&Poly_CoherentNode::GetIndex),
             R"#(Get the value of node Index.)#" )
        .def("IsFreeNode",
             (Standard_Boolean (Poly_CoherentNode::*)() const) static_cast<Standard_Boolean (Poly_CoherentNode::*)() const>(&Poly_CoherentNode::IsFreeNode),
             R"#(Check if this is a free node, i.e., a node without a single incident triangle.)#" )
        .def("TriangleIterator",
             (Poly_CoherentTriPtr::Iterator (Poly_CoherentNode::*)() const) static_cast<Poly_CoherentTriPtr::Iterator (Poly_CoherentNode::*)() const>(&Poly_CoherentNode::TriangleIterator),
             R"#(Create an iterator of incident triangles.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Poly_CoherentTriangle , shared_ptr<Poly_CoherentTriangle> >>(m.attr("Poly_CoherentTriangle"))
    // constructors
    // custom constructors
    // methods
        .def("Node",
             (Standard_Integer (Poly_CoherentTriangle::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Poly_CoherentTriangle::*)( const Standard_Integer ) const>(&Poly_CoherentTriangle::Node),
             R"#(Query the node index in the position given by the parameter 'ind')#"  , py::arg("ind"))
        .def("IsEmpty",
             (Standard_Boolean (Poly_CoherentTriangle::*)() const) static_cast<Standard_Boolean (Poly_CoherentTriangle::*)() const>(&Poly_CoherentTriangle::IsEmpty),
             R"#(Query if this is a valid triangle.)#" )
        .def("NConnections",
             (Standard_Integer (Poly_CoherentTriangle::*)() const) static_cast<Standard_Integer (Poly_CoherentTriangle::*)() const>(&Poly_CoherentTriangle::NConnections),
             R"#(Query the number of connected triangles.)#" )
        .def("GetConnectedNode",
             (Standard_Integer (Poly_CoherentTriangle::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Poly_CoherentTriangle::*)( const Standard_Integer ) const>(&Poly_CoherentTriangle::GetConnectedNode),
             R"#(Query the connected node on the given side. Returns -1 if there is no connection on the specified side.)#"  , py::arg("iConn"))
        .def("GetConnectedTri",
             (const Poly_CoherentTriangle * (Poly_CoherentTriangle::*)( const Standard_Integer ) const) static_cast<const Poly_CoherentTriangle * (Poly_CoherentTriangle::*)( const Standard_Integer ) const>(&Poly_CoherentTriangle::GetConnectedTri),
             R"#(Query the connected triangle on the given side. Returns NULL if there is no connection on the specified side.)#"  , py::arg("iConn"))
        .def("GetLink",
             (const Poly_CoherentLink * (Poly_CoherentTriangle::*)( const Standard_Integer ) const) static_cast<const Poly_CoherentLink * (Poly_CoherentTriangle::*)( const Standard_Integer ) const>(&Poly_CoherentTriangle::GetLink),
             R"#(Query the Link associate with the given side of the Triangle. May return NULL if there are no links in the triangulation.)#"  , py::arg("iLink"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Poly_CoherentTriangulation ,opencascade::handle<Poly_CoherentTriangulation> , Standard_Transient>>(m.attr("Poly_CoherentTriangulation"))
    // constructors
    // custom constructors
    // methods
        .def("MaxNode",
             (Standard_Integer (Poly_CoherentTriangulation::*)() const) static_cast<Standard_Integer (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::MaxNode),
             R"#(Query the index of the last node in the triangulation)#" )
        .def("MaxTriangle",
             (Standard_Integer (Poly_CoherentTriangulation::*)() const) static_cast<Standard_Integer (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::MaxTriangle),
             R"#(Query the index of the last triangle in the triangulation)#" )
        .def("SetDeflection",
             (void (Poly_CoherentTriangulation::*)( const Standard_Real ) ) static_cast<void (Poly_CoherentTriangulation::*)( const Standard_Real ) >(&Poly_CoherentTriangulation::SetDeflection),
             R"#(Set the Deflection value as the parameter of the given triangulation.)#"  , py::arg("theDefl"))
        .def("Deflection",
             (Standard_Real (Poly_CoherentTriangulation::*)() const) static_cast<Standard_Real (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::Deflection),
             R"#(Query the Deflection parameter (default value 0. -- if never initialized))#" )
        .def("Node",
             (const Poly_CoherentNode & (Poly_CoherentTriangulation::*)( const Standard_Integer ) const) static_cast<const Poly_CoherentNode & (Poly_CoherentTriangulation::*)( const Standard_Integer ) const>(&Poly_CoherentTriangulation::Node),
             R"#(Get the node at the given index 'i'.)#"  , py::arg("i"))
        .def("ChangeNode",
             (Poly_CoherentNode & (Poly_CoherentTriangulation::*)( const Standard_Integer ) ) static_cast<Poly_CoherentNode & (Poly_CoherentTriangulation::*)( const Standard_Integer ) >(&Poly_CoherentTriangulation::ChangeNode),
             R"#(Get the node at the given index 'i'.)#"  , py::arg("i"))
        .def("Triangle",
             (const Poly_CoherentTriangle & (Poly_CoherentTriangulation::*)( const Standard_Integer ) const) static_cast<const Poly_CoherentTriangle & (Poly_CoherentTriangulation::*)( const Standard_Integer ) const>(&Poly_CoherentTriangulation::Triangle),
             R"#(Get the triangle at the given index 'i'.)#"  , py::arg("i"))
        .def("Allocator",
             (const opencascade::handle<NCollection_BaseAllocator> & (Poly_CoherentTriangulation::*)() const) static_cast<const opencascade::handle<NCollection_BaseAllocator> & (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::Allocator),
             R"#(Query the allocator of elements, this allocator can be used for other objects)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Poly_CoherentTriangulation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Poly_CoherentTriangulation::*)() const>(&Poly_CoherentTriangulation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Poly_CoherentTriangulation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Poly_Connect , shared_ptr<Poly_Connect> >>(m.attr("Poly_Connect"))
    // constructors
    // custom constructors
    // methods
        .def("Triangulation",
             (const opencascade::handle<Poly_Triangulation> & (Poly_Connect::*)() const) static_cast<const opencascade::handle<Poly_Triangulation> & (Poly_Connect::*)() const>(&Poly_Connect::Triangulation),
             R"#(Returns the triangulation analyzed by this tool.)#" )
        .def("Triangle",
             (Standard_Integer (Poly_Connect::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Poly_Connect::*)( const Standard_Integer ) const>(&Poly_Connect::Triangle),
             R"#(Returns the index of a triangle containing the node at index N in the nodes table specific to the triangulation analyzed by this tool)#"  , py::arg("N"))
        .def("More",
             (Standard_Boolean (Poly_Connect::*)() const) static_cast<Standard_Boolean (Poly_Connect::*)() const>(&Poly_Connect::More),
             R"#(Returns true if there is another element in the iterator defined with the function Initialize (i.e. if there is another triangle containing the given node).)#" )
        .def("Value",
             (Standard_Integer (Poly_Connect::*)() const) static_cast<Standard_Integer (Poly_Connect::*)() const>(&Poly_Connect::Value),
             R"#(Returns the index of the current triangle to which the iterator, defined with the function Initialize, points. This is an index in the triangles table specific to the triangulation analyzed by this tool)#" )
    // methods using call by reference i.s.o. return
        .def("Triangles",
             []( Poly_Connect &self , const Standard_Integer T ){ Standard_Integer  t1; Standard_Integer  t2; Standard_Integer  t3; self.Triangles(T,t1,t2,t3); return std::make_tuple(t1,t2,t3); },
             R"#(Returns in t1, t2 and t3, the indices of the 3 triangles adjacent to the triangle at index T in the triangles table specific to the triangulation analyzed by this tool. Warning Null indices are returned when there are fewer than 3 adjacent triangles.)#"  , py::arg("T"))
        .def("Nodes",
             []( Poly_Connect &self , const Standard_Integer T ){ Standard_Integer  n1; Standard_Integer  n2; Standard_Integer  n3; self.Nodes(T,n1,n2,n3); return std::make_tuple(n1,n2,n3); },
             R"#(Returns, in n1, n2 and n3, the indices of the 3 nodes adjacent to the triangle referenced at index T in the triangles table specific to the triangulation analyzed by this tool. Warning Null indices are returned when there are fewer than 3 adjacent nodes.)#"  , py::arg("T"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Poly_HArray1OfTriangle ,opencascade::handle<Poly_HArray1OfTriangle> , Poly_Array1OfTriangle, Standard_Transient>>(m.attr("Poly_HArray1OfTriangle"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const Poly_Triangle & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Poly_Triangle> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Poly_Array1OfTriangle & (Poly_HArray1OfTriangle::*)() const) static_cast<const Poly_Array1OfTriangle & (Poly_HArray1OfTriangle::*)() const>(&Poly_HArray1OfTriangle::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Poly_Array1OfTriangle & (Poly_HArray1OfTriangle::*)() ) static_cast<Poly_Array1OfTriangle & (Poly_HArray1OfTriangle::*)() >(&Poly_HArray1OfTriangle::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Poly_HArray1OfTriangle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Poly_HArray1OfTriangle::*)() const>(&Poly_HArray1OfTriangle::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Poly_HArray1OfTriangle::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Poly_HArray1OfTriangle::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Poly_Polygon2D ,opencascade::handle<Poly_Polygon2D> , Standard_Transient>>(m.attr("Poly_Polygon2D"))
    // constructors
    // custom constructors
    // methods
        .def("NbNodes",
             (Standard_Integer (Poly_Polygon2D::*)() const) static_cast<Standard_Integer (Poly_Polygon2D::*)() const>(&Poly_Polygon2D::NbNodes),
             R"#(Returns the number of nodes in this polygon. Note: If the polygon is closed, the point of closure is repeated at the end of its table of nodes. Thus, on a closed triangle, the function NbNodes returns 4.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Poly_Polygon2D::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Poly_Polygon2D::*)() const>(&Poly_Polygon2D::DynamicType),
             R"#(None)#" )
        .def("NbNodes",
             (Standard_Integer (Poly_Polygon2D::*)() const) static_cast<Standard_Integer (Poly_Polygon2D::*)() const>(&Poly_Polygon2D::NbNodes),
             R"#(Returns the number of nodes in this polygon. Note: If the polygon is closed, the point of closure is repeated at the end of its table of nodes. Thus, on a closed triangle, the function NbNodes returns 4.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Poly_Polygon2D::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Poly_Polygon3D ,opencascade::handle<Poly_Polygon3D> , Standard_Transient>>(m.attr("Poly_Polygon3D"))
    // constructors
    // custom constructors
    // methods
        .def("Copy",
             (opencascade::handle<Poly_Polygon3D> (Poly_Polygon3D::*)() const) static_cast<opencascade::handle<Poly_Polygon3D> (Poly_Polygon3D::*)() const>(&Poly_Polygon3D::Copy),
             R"#(Creates a copy of current polygon)#" )
        .def("NbNodes",
             (Standard_Integer (Poly_Polygon3D::*)() const) static_cast<Standard_Integer (Poly_Polygon3D::*)() const>(&Poly_Polygon3D::NbNodes),
             R"#(Returns the number of nodes in this polygon. Note: If the polygon is closed, the point of closure is repeated at the end of its table of nodes. Thus, on a closed triangle the function NbNodes returns 4.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Poly_Polygon3D::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Poly_Polygon3D::*)() const>(&Poly_Polygon3D::DynamicType),
             R"#(None)#" )
        .def("NbNodes",
             (Standard_Integer (Poly_Polygon3D::*)() const) static_cast<Standard_Integer (Poly_Polygon3D::*)() const>(&Poly_Polygon3D::NbNodes),
             R"#(Returns the number of nodes in this polygon. Note: If the polygon is closed, the point of closure is repeated at the end of its table of nodes. Thus, on a closed triangle the function NbNodes returns 4.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Poly_Polygon3D::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Poly_PolygonOnTriangulation ,opencascade::handle<Poly_PolygonOnTriangulation> , Standard_Transient>>(m.attr("Poly_PolygonOnTriangulation"))
    // constructors
    // custom constructors
    // methods
        .def("Copy",
             (opencascade::handle<Poly_PolygonOnTriangulation> (Poly_PolygonOnTriangulation::*)() const) static_cast<opencascade::handle<Poly_PolygonOnTriangulation> (Poly_PolygonOnTriangulation::*)() const>(&Poly_PolygonOnTriangulation::Copy),
             R"#(Creates a copy of current polygon)#" )
        .def("NbNodes",
             (Standard_Integer (Poly_PolygonOnTriangulation::*)() const) static_cast<Standard_Integer (Poly_PolygonOnTriangulation::*)() const>(&Poly_PolygonOnTriangulation::NbNodes),
             R"#(Returns the number of nodes for this polygon. Note: If the polygon is closed, the point of closure is repeated at the end of its table of nodes. Thus, on a closed triangle, the function NbNodes returns 4.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Poly_PolygonOnTriangulation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Poly_PolygonOnTriangulation::*)() const>(&Poly_PolygonOnTriangulation::DynamicType),
             R"#(None)#" )
        .def("NbNodes",
             (Standard_Integer (Poly_PolygonOnTriangulation::*)() const) static_cast<Standard_Integer (Poly_PolygonOnTriangulation::*)() const>(&Poly_PolygonOnTriangulation::NbNodes),
             R"#(Returns the number of nodes for this polygon. Note: If the polygon is closed, the point of closure is repeated at the end of its table of nodes. Thus, on a closed triangle, the function NbNodes returns 4.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Poly_PolygonOnTriangulation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Poly_Triangle , shared_ptr<Poly_Triangle> >>(m.attr("Poly_Triangle"))
    // constructors
    // custom constructors
    // methods
        .def("Set",
             (void (Poly_Triangle::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Poly_Triangle::*)( const Standard_Integer , const Standard_Integer ) >(&Poly_Triangle::Set),
             R"#(Sets the value of the Indexth node of this triangle to Node. Raises OutOfRange if Index is not in 1,2,3)#"  , py::arg("Index"),  py::arg("Node"))
        .def("Value",
             (Standard_Integer (Poly_Triangle::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Poly_Triangle::*)( const Standard_Integer ) const>(&Poly_Triangle::Value),
             R"#(Get the node of given Index. Raises OutOfRange from Standard if Index is not in 1,2,3)#"  , py::arg("Index"))
        .def("ChangeValue",
             (Standard_Integer & (Poly_Triangle::*)( const Standard_Integer ) ) static_cast<Standard_Integer & (Poly_Triangle::*)( const Standard_Integer ) >(&Poly_Triangle::ChangeValue),
             R"#(Get the node of given Index. Raises OutOfRange if Index is not in 1,2,3)#"  , py::arg("Index"))
        .def("Set",
             (void (Poly_Triangle::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Poly_Triangle::*)( const Standard_Integer , const Standard_Integer ) >(&Poly_Triangle::Set),
             R"#(Sets the value of the Indexth node of this triangle to Node. Raises OutOfRange if Index is not in 1,2,3)#"  , py::arg("Index"),  py::arg("Node"))
        .def("Value",
             (Standard_Integer (Poly_Triangle::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Poly_Triangle::*)( const Standard_Integer ) const>(&Poly_Triangle::Value),
             R"#(Get the node of given Index. Raises OutOfRange from Standard if Index is not in 1,2,3)#"  , py::arg("Index"))
        .def("ChangeValue",
             (Standard_Integer & (Poly_Triangle::*)( const Standard_Integer ) ) static_cast<Standard_Integer & (Poly_Triangle::*)( const Standard_Integer ) >(&Poly_Triangle::ChangeValue),
             R"#(Get the node of given Index. Raises OutOfRange if Index is not in 1,2,3)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Poly_Triangulation ,opencascade::handle<Poly_Triangulation> , Standard_Transient>>(m.attr("Poly_Triangulation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Poly_Triangulation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Poly_Triangulation::*)() const>(&Poly_Triangulation::DynamicType),
             R"#(None)#" )
        .def("Copy",
             (opencascade::handle<Poly_Triangulation> (Poly_Triangulation::*)() const) static_cast<opencascade::handle<Poly_Triangulation> (Poly_Triangulation::*)() const>(&Poly_Triangulation::Copy),
             R"#(Creates full copy of current triangulation)#" )
        .def("Deflection",
             (Standard_Real (Poly_Triangulation::*)() const) static_cast<Standard_Real (Poly_Triangulation::*)() const>(&Poly_Triangulation::Deflection),
             R"#(Returns the deflection of this triangulation.)#" )
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
        .def("UVNodes",
             (const TColgp_Array1OfPnt2d & (Poly_Triangulation::*)() const) static_cast<const TColgp_Array1OfPnt2d & (Poly_Triangulation::*)() const>(&Poly_Triangulation::UVNodes),
             R"#(Returns the table of 2D nodes (2D points) associated with each 3D node of this triangulation. The function HasUVNodes checks if 2D nodes are associated with the 3D nodes of this triangulation. Const reference on the 2d nodes values.)#" )
        .def("ChangeUVNodes",
             (TColgp_Array1OfPnt2d & (Poly_Triangulation::*)() ) static_cast<TColgp_Array1OfPnt2d & (Poly_Triangulation::*)() >(&Poly_Triangulation::ChangeUVNodes),
             R"#(Returns the table of 2D nodes (2D points) associated with each 3D node of this triangulation. Function ChangeUVNodes shares the returned array. Therefore if the table is selected by reference, you can, by simply modifying it, directly modify the data structure of this triangulation.)#" )
        .def("Triangles",
             (const Poly_Array1OfTriangle & (Poly_Triangulation::*)() const) static_cast<const Poly_Array1OfTriangle & (Poly_Triangulation::*)() const>(&Poly_Triangulation::Triangles),
             R"#(Returns the table of triangles for this triangulation.)#" )
        .def("ChangeTriangles",
             (Poly_Array1OfTriangle & (Poly_Triangulation::*)() ) static_cast<Poly_Array1OfTriangle & (Poly_Triangulation::*)() >(&Poly_Triangulation::ChangeTriangles),
             R"#(Returns the table of triangles for this triangulation. Function ChangeUVNodes shares the returned array. Therefore if the table is selected by reference, you can, by simply modifying it, directly modify the data structure of this triangulation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Poly_Triangulation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Poly_MakeLoops2D , shared_ptr<Poly_MakeLoops2D> >>(m.attr("Poly_MakeLoops2D"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Poly_MakeLoops3D , shared_ptr<Poly_MakeLoops3D> >>(m.attr("Poly_MakeLoops3D"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Poly_PolygonOnTriangulation.hxx
// ./opencascade/Poly_Triangle.hxx
// ./opencascade/Poly_ListOfTriangulation.hxx
// ./opencascade/Poly_Connect.hxx
// ./opencascade/Poly_CoherentTriangle.hxx
// ./opencascade/Poly_Polygon3D.hxx
// ./opencascade/Poly.hxx
// ./opencascade/Poly_CoherentTriPtr.hxx
// ./opencascade/Poly_CoherentNode.hxx
// ./opencascade/Poly_CoherentLink.hxx
// ./opencascade/Poly_Array1OfTriangle.hxx
// ./opencascade/Poly_Triangulation.hxx
// ./opencascade/Poly_Polygon2D.hxx
// ./opencascade/Poly_HArray1OfTriangle.hxx
// ./opencascade/Poly_CoherentTriangulation.hxx
// ./opencascade/Poly_MakeLoops.hxx
    m.def("HashCode",
          (Standard_Integer (*)( const Poly_MakeLoops::Link & , const Standard_Integer ))  static_cast<Standard_Integer (*)( const Poly_MakeLoops::Link & , const Standard_Integer )>(&HashCode),
          R"#(Computes a hash code for the given link, in the range [1, theUpperBound])#"  , py::arg("theLink"),  py::arg("theUpperBound"));
    m.def("IsEqual",
          (Standard_Boolean (*)( const Poly_MakeLoops::Link & , const Poly_MakeLoops::Link & ))  static_cast<Standard_Boolean (*)( const Poly_MakeLoops::Link & , const Poly_MakeLoops::Link & )>(&IsEqual),
          R"#(IsEqual method is needed for maps)#"  , py::arg("theKey1"),  py::arg("theKey2"));

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<Poly_Triangulation> >(m,"Poly_ListOfTriangulation");
    register_template_NCollection_Array1<Poly_Triangle>(m,"Poly_Array1OfTriangle");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

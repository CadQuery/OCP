
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <MAT_TListNodeOfListOfEdge.hxx>
#include <MAT_Edge.hxx>
#include <MAT_Bisector.hxx>
#include <MAT_Edge.hxx>
#include <MAT_ListOfEdge.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT_BasicElt.hxx>
#include <MAT_Node.hxx>
#include <MAT_BasicElt.hxx>
#include <MAT_Node.hxx>
#include <Standard_DomainError.hxx>
#include <MAT_TListNodeOfListOfBisector.hxx>
#include <MAT_Bisector.hxx>
#include <MAT_Bisector.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT_Arc.hxx>
#include <MAT_Edge.hxx>
#include <MAT_ListOfBisector.hxx>

// module includes
#include <MAT_Arc.hxx>
#include <MAT_BasicElt.hxx>
#include <MAT_Bisector.hxx>
#include <MAT_DataMapIteratorOfDataMapOfIntegerArc.hxx>
#include <MAT_DataMapIteratorOfDataMapOfIntegerBasicElt.hxx>
#include <MAT_DataMapIteratorOfDataMapOfIntegerBisector.hxx>
#include <MAT_DataMapIteratorOfDataMapOfIntegerNode.hxx>
#include <MAT_DataMapOfIntegerArc.hxx>
#include <MAT_DataMapOfIntegerBasicElt.hxx>
#include <MAT_DataMapOfIntegerBisector.hxx>
#include <MAT_DataMapOfIntegerNode.hxx>
#include <MAT_Edge.hxx>
#include <MAT_Graph.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT_ListOfEdge.hxx>
#include <MAT_Node.hxx>
#include <MAT_SequenceOfArc.hxx>
#include <MAT_SequenceOfBasicElt.hxx>
#include <MAT_Side.hxx>
#include <MAT_TListNodeOfListOfBisector.hxx>
#include <MAT_TListNodeOfListOfEdge.hxx>
#include <MAT_Zone.hxx>

// template related includes
// ./opencascade/MAT_DataMapOfIntegerBasicElt.hxx
#include "NCollection.hxx"
// ./opencascade/MAT_SequenceOfArc.hxx
#include "NCollection.hxx"
// ./opencascade/MAT_SequenceOfBasicElt.hxx
#include "NCollection.hxx"
// ./opencascade/MAT_DataMapOfIntegerBisector.hxx
#include "NCollection.hxx"
// ./opencascade/MAT_DataMapOfIntegerArc.hxx
#include "NCollection.hxx"
// ./opencascade/MAT_DataMapOfIntegerNode.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_MAT(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("MAT"));


//Python trampoline classes

// classes


    static_cast<py::class_<MAT_ListOfEdge ,opencascade::handle<MAT_ListOfEdge>  , Standard_Transient >>(m.attr("MAT_ListOfEdge"))
        .def(py::init<  >()  )
        .def("First",
             (void (MAT_ListOfEdge::*)() ) static_cast<void (MAT_ListOfEdge::*)() >(&MAT_ListOfEdge::First),
             R"#(None)#" )
        .def("Last",
             (void (MAT_ListOfEdge::*)() ) static_cast<void (MAT_ListOfEdge::*)() >(&MAT_ListOfEdge::Last),
             R"#(None)#" )
        .def("Init",
             (void (MAT_ListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) ) static_cast<void (MAT_ListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) >(&MAT_ListOfEdge::Init),
             R"#(None)#"  , py::arg("aniten"))
        .def("Next",
             (void (MAT_ListOfEdge::*)() ) static_cast<void (MAT_ListOfEdge::*)() >(&MAT_ListOfEdge::Next),
             R"#(None)#" )
        .def("Previous",
             (void (MAT_ListOfEdge::*)() ) static_cast<void (MAT_ListOfEdge::*)() >(&MAT_ListOfEdge::Previous),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (MAT_ListOfEdge::*)() const) static_cast<Standard_Boolean (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::More),
             R"#(None)#" )
        .def("Current",
             (opencascade::handle<MAT_Edge> (MAT_ListOfEdge::*)() const) static_cast<opencascade::handle<MAT_Edge> (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::Current),
             R"#(None)#" )
        .def("Current",
             (void (MAT_ListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) const) static_cast<void (MAT_ListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) const>(&MAT_ListOfEdge::Current),
             R"#(None)#"  , py::arg("anitem"))
        .def("FirstItem",
             (opencascade::handle<MAT_Edge> (MAT_ListOfEdge::*)() const) static_cast<opencascade::handle<MAT_Edge> (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::FirstItem),
             R"#(None)#" )
        .def("LastItem",
             (opencascade::handle<MAT_Edge> (MAT_ListOfEdge::*)() const) static_cast<opencascade::handle<MAT_Edge> (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::LastItem),
             R"#(None)#" )
        .def("PreviousItem",
             (opencascade::handle<MAT_Edge> (MAT_ListOfEdge::*)() const) static_cast<opencascade::handle<MAT_Edge> (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::PreviousItem),
             R"#(None)#" )
        .def("NextItem",
             (opencascade::handle<MAT_Edge> (MAT_ListOfEdge::*)() const) static_cast<opencascade::handle<MAT_Edge> (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::NextItem),
             R"#(None)#" )
        .def("Number",
             (Standard_Integer (MAT_ListOfEdge::*)() const) static_cast<Standard_Integer (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::Number),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (MAT_ListOfEdge::*)() const) static_cast<Standard_Integer (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::Index),
             R"#(None)#" )
        .def("Brackets",
             (opencascade::handle<MAT_Edge> (MAT_ListOfEdge::*)( const Standard_Integer  ) ) static_cast<opencascade::handle<MAT_Edge> (MAT_ListOfEdge::*)( const Standard_Integer  ) >(&MAT_ListOfEdge::Brackets),
             R"#(None)#"  , py::arg("anindex"))
        .def("Unlink",
             (void (MAT_ListOfEdge::*)() ) static_cast<void (MAT_ListOfEdge::*)() >(&MAT_ListOfEdge::Unlink),
             R"#(None)#" )
        .def("LinkBefore",
             (void (MAT_ListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) ) static_cast<void (MAT_ListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) >(&MAT_ListOfEdge::LinkBefore),
             R"#(None)#"  , py::arg("anitem"))
        .def("LinkAfter",
             (void (MAT_ListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) ) static_cast<void (MAT_ListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) >(&MAT_ListOfEdge::LinkAfter),
             R"#(None)#"  , py::arg("anitem"))
        .def("FrontAdd",
             (void (MAT_ListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) ) static_cast<void (MAT_ListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) >(&MAT_ListOfEdge::FrontAdd),
             R"#(None)#"  , py::arg("anitem"))
        .def("BackAdd",
             (void (MAT_ListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) ) static_cast<void (MAT_ListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) >(&MAT_ListOfEdge::BackAdd),
             R"#(None)#"  , py::arg("anitem"))
        .def("Permute",
             (void (MAT_ListOfEdge::*)() ) static_cast<void (MAT_ListOfEdge::*)() >(&MAT_ListOfEdge::Permute),
             R"#(None)#" )
        .def("Loop",
             (void (MAT_ListOfEdge::*)() const) static_cast<void (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::Loop),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (MAT_ListOfEdge::*)() const) static_cast<Standard_Boolean (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::IsEmpty),
             R"#(None)#" )
        .def("Dump",
             (void (MAT_ListOfEdge::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (MAT_ListOfEdge::*)( const Standard_Integer ,  const Standard_Integer  ) >(&MAT_ListOfEdge::Dump),
             R"#(None)#"  , py::arg("ashift"),  py::arg("alevel"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_ListOfEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_ListOfEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_ListOfEdge::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<MAT_Node ,opencascade::handle<MAT_Node>  , Standard_Transient >>(m.attr("MAT_Node"))
        .def(py::init< const Standard_Integer,const opencascade::handle<MAT_Arc> &,const Standard_Real >()  , py::arg("GeomIndex"),  py::arg("LinkedArc"),  py::arg("Distance") )
        .def("GeomIndex",
             (Standard_Integer (MAT_Node::*)() const) static_cast<Standard_Integer (MAT_Node::*)() const>(&MAT_Node::GeomIndex),
             R"#(Returns the index associated of the geometric representation of <me>.)#" )
        .def("Index",
             (Standard_Integer (MAT_Node::*)() const) static_cast<Standard_Integer (MAT_Node::*)() const>(&MAT_Node::Index),
             R"#(Returns the index associated of the node)#" )
        .def("LinkedArcs",
             (void (MAT_Node::*)( NCollection_Sequence<opencascade::handle<MAT_Arc> > &  ) const) static_cast<void (MAT_Node::*)( NCollection_Sequence<opencascade::handle<MAT_Arc> > &  ) const>(&MAT_Node::LinkedArcs),
             R"#(Returns in <S> the Arcs linked to <me>.)#"  , py::arg("S"))
        .def("NearElts",
             (void (MAT_Node::*)( NCollection_Sequence<opencascade::handle<MAT_BasicElt> > &  ) const) static_cast<void (MAT_Node::*)( NCollection_Sequence<opencascade::handle<MAT_BasicElt> > &  ) const>(&MAT_Node::NearElts),
             R"#(Returns in <S> the BasicElts equidistant to <me>.)#"  , py::arg("S"))
        .def("Distance",
             (Standard_Real (MAT_Node::*)() const) static_cast<Standard_Real (MAT_Node::*)() const>(&MAT_Node::Distance),
             R"#(None)#" )
        .def("PendingNode",
             (Standard_Boolean (MAT_Node::*)() const) static_cast<Standard_Boolean (MAT_Node::*)() const>(&MAT_Node::PendingNode),
             R"#(Returns True if <me> is a pending Node. (ie : the number of Arc Linked = 1))#" )
        .def("OnBasicElt",
             (Standard_Boolean (MAT_Node::*)() const) static_cast<Standard_Boolean (MAT_Node::*)() const>(&MAT_Node::OnBasicElt),
             R"#(Returns True if <me> belongs to the figure.)#" )
        .def("Infinite",
             (Standard_Boolean (MAT_Node::*)() const) static_cast<Standard_Boolean (MAT_Node::*)() const>(&MAT_Node::Infinite),
             R"#(Returns True if the distance of <me> is Infinite)#" )
        .def("SetIndex",
             (void (MAT_Node::*)( const Standard_Integer  ) ) static_cast<void (MAT_Node::*)( const Standard_Integer  ) >(&MAT_Node::SetIndex),
             R"#(Set the index associated of the node)#"  , py::arg("anIndex"))
        .def("SetLinkedArc",
             (void (MAT_Node::*)( const opencascade::handle<MAT_Arc> &  ) ) static_cast<void (MAT_Node::*)( const opencascade::handle<MAT_Arc> &  ) >(&MAT_Node::SetLinkedArc),
             R"#(None)#"  , py::arg("anArc"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_Node::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_Node::*)() const>(&MAT_Node::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_Node::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_Node::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<MAT_Graph ,opencascade::handle<MAT_Graph>  , Standard_Transient >>(m.attr("MAT_Graph"))
        .def(py::init<  >()  )
        .def("Perform",
             (void (MAT_Graph::*)( const Standard_Boolean ,  const opencascade::handle<MAT_ListOfBisector> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (MAT_Graph::*)( const Standard_Boolean ,  const opencascade::handle<MAT_ListOfBisector> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&MAT_Graph::Perform),
             R"#(Construct <me> from the result of the method <CreateMat> of the class <MAT> from <MAT>.)#"  , py::arg("SemiInfinite"),  py::arg("TheRoots"),  py::arg("NbBasicElts"),  py::arg("NbArcs"))
        .def("Arc",
             (opencascade::handle<MAT_Arc> (MAT_Graph::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<MAT_Arc> (MAT_Graph::*)( const Standard_Integer  ) const>(&MAT_Graph::Arc),
             R"#(Return the Arc of index <Index> in <theArcs>.)#"  , py::arg("Index"))
        .def("BasicElt",
             (opencascade::handle<MAT_BasicElt> (MAT_Graph::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<MAT_BasicElt> (MAT_Graph::*)( const Standard_Integer  ) const>(&MAT_Graph::BasicElt),
             R"#(Return the BasicElt of index <Index> in <theBasicElts>.)#"  , py::arg("Index"))
        .def("Node",
             (opencascade::handle<MAT_Node> (MAT_Graph::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<MAT_Node> (MAT_Graph::*)( const Standard_Integer  ) const>(&MAT_Graph::Node),
             R"#(Return the Node of index <Index> in <theNodes>.)#"  , py::arg("Index"))
        .def("NumberOfArcs",
             (Standard_Integer (MAT_Graph::*)() const) static_cast<Standard_Integer (MAT_Graph::*)() const>(&MAT_Graph::NumberOfArcs),
             R"#(Return the number of arcs of <me>.)#" )
        .def("NumberOfNodes",
             (Standard_Integer (MAT_Graph::*)() const) static_cast<Standard_Integer (MAT_Graph::*)() const>(&MAT_Graph::NumberOfNodes),
             R"#(Return the number of nodes of <me>.)#" )
        .def("NumberOfBasicElts",
             (Standard_Integer (MAT_Graph::*)() const) static_cast<Standard_Integer (MAT_Graph::*)() const>(&MAT_Graph::NumberOfBasicElts),
             R"#(Return the number of basic elements of <me>.)#" )
        .def("NumberOfInfiniteNodes",
             (Standard_Integer (MAT_Graph::*)() const) static_cast<Standard_Integer (MAT_Graph::*)() const>(&MAT_Graph::NumberOfInfiniteNodes),
             R"#(Return the number of infinites nodes of <me>.)#" )
        .def("FusionOfBasicElts",
             (void (MAT_Graph::*)( const Standard_Integer ,  const Standard_Integer ,  Standard_Boolean & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Boolean & ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<void (MAT_Graph::*)( const Standard_Integer ,  const Standard_Integer ,  Standard_Boolean & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Boolean & ,  Standard_Integer & ,  Standard_Integer &  ) >(&MAT_Graph::FusionOfBasicElts),
             R"#(Merge two BasicElts. The End of the BasicElt Elt1 of IndexElt1 becomes The End of the BasicElt Elt2 of IndexElt2. Elt2 is replaced in the arcs by Elt1, Elt2 is eliminated.)#"  , py::arg("IndexElt1"),  py::arg("IndexElt2"),  py::arg("MergeArc1"),  py::arg("GeomIndexArc1"),  py::arg("GeomIndexArc2"),  py::arg("MergeArc2"),  py::arg("GeomIndexArc3"),  py::arg("GeomIndexArc4"))
        .def("CompactArcs",
             (void (MAT_Graph::*)() ) static_cast<void (MAT_Graph::*)() >(&MAT_Graph::CompactArcs),
             R"#(None)#" )
        .def("CompactNodes",
             (void (MAT_Graph::*)() ) static_cast<void (MAT_Graph::*)() >(&MAT_Graph::CompactNodes),
             R"#(None)#" )
        .def("ChangeBasicElts",
             (void (MAT_Graph::*)(  const NCollection_DataMap<Standard_Integer, opencascade::handle<MAT_BasicElt>, TColStd_MapIntegerHasher> &  ) ) static_cast<void (MAT_Graph::*)(  const NCollection_DataMap<Standard_Integer, opencascade::handle<MAT_BasicElt>, TColStd_MapIntegerHasher> &  ) >(&MAT_Graph::ChangeBasicElts),
             R"#(None)#"  , py::arg("NewMap"))
        .def("ChangeBasicElt",
             (opencascade::handle<MAT_BasicElt> (MAT_Graph::*)( const Standard_Integer  ) ) static_cast<opencascade::handle<MAT_BasicElt> (MAT_Graph::*)( const Standard_Integer  ) >(&MAT_Graph::ChangeBasicElt),
             R"#(None)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_Graph::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_Graph::*)() const>(&MAT_Graph::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_Graph::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_Graph::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<MAT_Arc ,opencascade::handle<MAT_Arc>  , Standard_Transient >>(m.attr("MAT_Arc"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const opencascade::handle<MAT_BasicElt> &,const opencascade::handle<MAT_BasicElt> & >()  , py::arg("ArcIndex"),  py::arg("GeomIndex"),  py::arg("FirstElement"),  py::arg("SecondElement") )
        .def("Index",
             (Standard_Integer (MAT_Arc::*)() const) static_cast<Standard_Integer (MAT_Arc::*)() const>(&MAT_Arc::Index),
             R"#(Returns the index of <me> in Graph.theArcs.)#" )
        .def("GeomIndex",
             (Standard_Integer (MAT_Arc::*)() const) static_cast<Standard_Integer (MAT_Arc::*)() const>(&MAT_Arc::GeomIndex),
             R"#(Returns the index associated of the geometric representation of <me>.)#" )
        .def("FirstElement",
             (opencascade::handle<MAT_BasicElt> (MAT_Arc::*)() const) static_cast<opencascade::handle<MAT_BasicElt> (MAT_Arc::*)() const>(&MAT_Arc::FirstElement),
             R"#(Returns one of the BasicElt equidistant from <me>.)#" )
        .def("SecondElement",
             (opencascade::handle<MAT_BasicElt> (MAT_Arc::*)() const) static_cast<opencascade::handle<MAT_BasicElt> (MAT_Arc::*)() const>(&MAT_Arc::SecondElement),
             R"#(Returns the other BasicElt equidistant from <me>.)#" )
        .def("FirstNode",
             (opencascade::handle<MAT_Node> (MAT_Arc::*)() const) static_cast<opencascade::handle<MAT_Node> (MAT_Arc::*)() const>(&MAT_Arc::FirstNode),
             R"#(Returns one Node extremity of <me>.)#" )
        .def("SecondNode",
             (opencascade::handle<MAT_Node> (MAT_Arc::*)() const) static_cast<opencascade::handle<MAT_Node> (MAT_Arc::*)() const>(&MAT_Arc::SecondNode),
             R"#(Returns the other Node extremity of <me>.)#" )
        .def("TheOtherNode",
             (opencascade::handle<MAT_Node> (MAT_Arc::*)( const opencascade::handle<MAT_Node> &  ) const) static_cast<opencascade::handle<MAT_Node> (MAT_Arc::*)( const opencascade::handle<MAT_Node> &  ) const>(&MAT_Arc::TheOtherNode),
             R"#(an Arc has two Node, if <aNode> egal one Returns the other.)#"  , py::arg("aNode"))
        .def("HasNeighbour",
             (Standard_Boolean (MAT_Arc::*)( const opencascade::handle<MAT_Node> & ,  const MAT_Side  ) const) static_cast<Standard_Boolean (MAT_Arc::*)( const opencascade::handle<MAT_Node> & ,  const MAT_Side  ) const>(&MAT_Arc::HasNeighbour),
             R"#(Returnst True is there is an arc linked to the Node <aNode> located on the side <aSide> of <me>; if <aNode> is not on <me>)#"  , py::arg("aNode"),  py::arg("aSide"))
        .def("Neighbour",
             (opencascade::handle<MAT_Arc> (MAT_Arc::*)( const opencascade::handle<MAT_Node> & ,  const MAT_Side  ) const) static_cast<opencascade::handle<MAT_Arc> (MAT_Arc::*)( const opencascade::handle<MAT_Node> & ,  const MAT_Side  ) const>(&MAT_Arc::Neighbour),
             R"#(Returns the first arc linked to the Node <aNode> located on the side <aSide> of <me>; if HasNeighbour() returns FALSE.)#"  , py::arg("aNode"),  py::arg("aSide"))
        .def("SetIndex",
             (void (MAT_Arc::*)( const Standard_Integer  ) ) static_cast<void (MAT_Arc::*)( const Standard_Integer  ) >(&MAT_Arc::SetIndex),
             R"#(None)#"  , py::arg("anInteger"))
        .def("SetGeomIndex",
             (void (MAT_Arc::*)( const Standard_Integer  ) ) static_cast<void (MAT_Arc::*)( const Standard_Integer  ) >(&MAT_Arc::SetGeomIndex),
             R"#(None)#"  , py::arg("anInteger"))
        .def("SetFirstElement",
             (void (MAT_Arc::*)( const opencascade::handle<MAT_BasicElt> &  ) ) static_cast<void (MAT_Arc::*)( const opencascade::handle<MAT_BasicElt> &  ) >(&MAT_Arc::SetFirstElement),
             R"#(None)#"  , py::arg("aBasicElt"))
        .def("SetSecondElement",
             (void (MAT_Arc::*)( const opencascade::handle<MAT_BasicElt> &  ) ) static_cast<void (MAT_Arc::*)( const opencascade::handle<MAT_BasicElt> &  ) >(&MAT_Arc::SetSecondElement),
             R"#(None)#"  , py::arg("aBasicElt"))
        .def("SetFirstNode",
             (void (MAT_Arc::*)( const opencascade::handle<MAT_Node> &  ) ) static_cast<void (MAT_Arc::*)( const opencascade::handle<MAT_Node> &  ) >(&MAT_Arc::SetFirstNode),
             R"#(None)#"  , py::arg("aNode"))
        .def("SetSecondNode",
             (void (MAT_Arc::*)( const opencascade::handle<MAT_Node> &  ) ) static_cast<void (MAT_Arc::*)( const opencascade::handle<MAT_Node> &  ) >(&MAT_Arc::SetSecondNode),
             R"#(None)#"  , py::arg("aNode"))
        .def("SetFirstArc",
             (void (MAT_Arc::*)( const MAT_Side ,  const opencascade::handle<MAT_Arc> &  ) ) static_cast<void (MAT_Arc::*)( const MAT_Side ,  const opencascade::handle<MAT_Arc> &  ) >(&MAT_Arc::SetFirstArc),
             R"#(None)#"  , py::arg("aSide"),  py::arg("anArc"))
        .def("SetSecondArc",
             (void (MAT_Arc::*)( const MAT_Side ,  const opencascade::handle<MAT_Arc> &  ) ) static_cast<void (MAT_Arc::*)( const MAT_Side ,  const opencascade::handle<MAT_Arc> &  ) >(&MAT_Arc::SetSecondArc),
             R"#(None)#"  , py::arg("aSide"),  py::arg("anArc"))
        .def("SetNeighbour",
             (void (MAT_Arc::*)( const MAT_Side ,  const opencascade::handle<MAT_Node> & ,  const opencascade::handle<MAT_Arc> &  ) ) static_cast<void (MAT_Arc::*)( const MAT_Side ,  const opencascade::handle<MAT_Node> & ,  const opencascade::handle<MAT_Arc> &  ) >(&MAT_Arc::SetNeighbour),
             R"#(None)#"  , py::arg("aSide"),  py::arg("aNode"),  py::arg("anArc"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_Arc::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_Arc::*)() const>(&MAT_Arc::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_Arc::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_Arc::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<MAT_TListNodeOfListOfBisector ,opencascade::handle<MAT_TListNodeOfListOfBisector>  , Standard_Transient >>(m.attr("MAT_TListNodeOfListOfBisector"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<MAT_Bisector> & >()  , py::arg("anitem") )
        .def("GetItem",
             (opencascade::handle<MAT_Bisector> (MAT_TListNodeOfListOfBisector::*)() const) static_cast<opencascade::handle<MAT_Bisector> (MAT_TListNodeOfListOfBisector::*)() const>(&MAT_TListNodeOfListOfBisector::GetItem),
             R"#(None)#" )
        .def("Next",
             (opencascade::handle<MAT_TListNodeOfListOfBisector> (MAT_TListNodeOfListOfBisector::*)() const) static_cast<opencascade::handle<MAT_TListNodeOfListOfBisector> (MAT_TListNodeOfListOfBisector::*)() const>(&MAT_TListNodeOfListOfBisector::Next),
             R"#(None)#" )
        .def("Previous",
             (opencascade::handle<MAT_TListNodeOfListOfBisector> (MAT_TListNodeOfListOfBisector::*)() const) static_cast<opencascade::handle<MAT_TListNodeOfListOfBisector> (MAT_TListNodeOfListOfBisector::*)() const>(&MAT_TListNodeOfListOfBisector::Previous),
             R"#(None)#" )
        .def("SetItem",
             (void (MAT_TListNodeOfListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) ) static_cast<void (MAT_TListNodeOfListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) >(&MAT_TListNodeOfListOfBisector::SetItem),
             R"#(None)#"  , py::arg("anitem"))
        .def("Next",
             (void (MAT_TListNodeOfListOfBisector::*)( const opencascade::handle<MAT_TListNodeOfListOfBisector> &  ) ) static_cast<void (MAT_TListNodeOfListOfBisector::*)( const opencascade::handle<MAT_TListNodeOfListOfBisector> &  ) >(&MAT_TListNodeOfListOfBisector::Next),
             R"#(None)#"  , py::arg("atlistnode"))
        .def("Previous",
             (void (MAT_TListNodeOfListOfBisector::*)( const opencascade::handle<MAT_TListNodeOfListOfBisector> &  ) ) static_cast<void (MAT_TListNodeOfListOfBisector::*)( const opencascade::handle<MAT_TListNodeOfListOfBisector> &  ) >(&MAT_TListNodeOfListOfBisector::Previous),
             R"#(None)#"  , py::arg("atlistnode"))
        .def("Dummy",
             (void (MAT_TListNodeOfListOfBisector::*)() const) static_cast<void (MAT_TListNodeOfListOfBisector::*)() const>(&MAT_TListNodeOfListOfBisector::Dummy),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_TListNodeOfListOfBisector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_TListNodeOfListOfBisector::*)() const>(&MAT_TListNodeOfListOfBisector::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_TListNodeOfListOfBisector::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_TListNodeOfListOfBisector::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<MAT_Bisector ,opencascade::handle<MAT_Bisector>  , Standard_Transient >>(m.attr("MAT_Bisector"))
        .def(py::init<  >()  )
        .def("AddBisector",
             (void (MAT_Bisector::*)( const opencascade::handle<MAT_Bisector> &  ) const) static_cast<void (MAT_Bisector::*)( const opencascade::handle<MAT_Bisector> &  ) const>(&MAT_Bisector::AddBisector),
             R"#(None)#"  , py::arg("abisector"))
        .def("List",
             (opencascade::handle<MAT_ListOfBisector> (MAT_Bisector::*)() const) static_cast<opencascade::handle<MAT_ListOfBisector> (MAT_Bisector::*)() const>(&MAT_Bisector::List),
             R"#(None)#" )
        .def("FirstBisector",
             (opencascade::handle<MAT_Bisector> (MAT_Bisector::*)() const) static_cast<opencascade::handle<MAT_Bisector> (MAT_Bisector::*)() const>(&MAT_Bisector::FirstBisector),
             R"#(None)#" )
        .def("LastBisector",
             (opencascade::handle<MAT_Bisector> (MAT_Bisector::*)() const) static_cast<opencascade::handle<MAT_Bisector> (MAT_Bisector::*)() const>(&MAT_Bisector::LastBisector),
             R"#(None)#" )
        .def("BisectorNumber",
             (void (MAT_Bisector::*)( const Standard_Integer  ) ) static_cast<void (MAT_Bisector::*)( const Standard_Integer  ) >(&MAT_Bisector::BisectorNumber),
             R"#(None)#"  , py::arg("anumber"))
        .def("IndexNumber",
             (void (MAT_Bisector::*)( const Standard_Integer  ) ) static_cast<void (MAT_Bisector::*)( const Standard_Integer  ) >(&MAT_Bisector::IndexNumber),
             R"#(None)#"  , py::arg("anumber"))
        .def("FirstEdge",
             (void (MAT_Bisector::*)( const opencascade::handle<MAT_Edge> &  ) ) static_cast<void (MAT_Bisector::*)( const opencascade::handle<MAT_Edge> &  ) >(&MAT_Bisector::FirstEdge),
             R"#(None)#"  , py::arg("anedge"))
        .def("SecondEdge",
             (void (MAT_Bisector::*)( const opencascade::handle<MAT_Edge> &  ) ) static_cast<void (MAT_Bisector::*)( const opencascade::handle<MAT_Edge> &  ) >(&MAT_Bisector::SecondEdge),
             R"#(None)#"  , py::arg("anedge"))
        .def("IssuePoint",
             (void (MAT_Bisector::*)( const Standard_Integer  ) ) static_cast<void (MAT_Bisector::*)( const Standard_Integer  ) >(&MAT_Bisector::IssuePoint),
             R"#(None)#"  , py::arg("apoint"))
        .def("EndPoint",
             (void (MAT_Bisector::*)( const Standard_Integer  ) ) static_cast<void (MAT_Bisector::*)( const Standard_Integer  ) >(&MAT_Bisector::EndPoint),
             R"#(None)#"  , py::arg("apoint"))
        .def("DistIssuePoint",
             (void (MAT_Bisector::*)( const Standard_Real  ) ) static_cast<void (MAT_Bisector::*)( const Standard_Real  ) >(&MAT_Bisector::DistIssuePoint),
             R"#(None)#"  , py::arg("areal"))
        .def("FirstVector",
             (void (MAT_Bisector::*)( const Standard_Integer  ) ) static_cast<void (MAT_Bisector::*)( const Standard_Integer  ) >(&MAT_Bisector::FirstVector),
             R"#(None)#"  , py::arg("avector"))
        .def("SecondVector",
             (void (MAT_Bisector::*)( const Standard_Integer  ) ) static_cast<void (MAT_Bisector::*)( const Standard_Integer  ) >(&MAT_Bisector::SecondVector),
             R"#(None)#"  , py::arg("avector"))
        .def("Sense",
             (void (MAT_Bisector::*)( const Standard_Real  ) ) static_cast<void (MAT_Bisector::*)( const Standard_Real  ) >(&MAT_Bisector::Sense),
             R"#(None)#"  , py::arg("asense"))
        .def("FirstParameter",
             (void (MAT_Bisector::*)( const Standard_Real  ) ) static_cast<void (MAT_Bisector::*)( const Standard_Real  ) >(&MAT_Bisector::FirstParameter),
             R"#(None)#"  , py::arg("aparameter"))
        .def("SecondParameter",
             (void (MAT_Bisector::*)( const Standard_Real  ) ) static_cast<void (MAT_Bisector::*)( const Standard_Real  ) >(&MAT_Bisector::SecondParameter),
             R"#(None)#"  , py::arg("aparameter"))
        .def("BisectorNumber",
             (Standard_Integer (MAT_Bisector::*)() const) static_cast<Standard_Integer (MAT_Bisector::*)() const>(&MAT_Bisector::BisectorNumber),
             R"#(None)#" )
        .def("IndexNumber",
             (Standard_Integer (MAT_Bisector::*)() const) static_cast<Standard_Integer (MAT_Bisector::*)() const>(&MAT_Bisector::IndexNumber),
             R"#(None)#" )
        .def("FirstEdge",
             (opencascade::handle<MAT_Edge> (MAT_Bisector::*)() const) static_cast<opencascade::handle<MAT_Edge> (MAT_Bisector::*)() const>(&MAT_Bisector::FirstEdge),
             R"#(None)#" )
        .def("SecondEdge",
             (opencascade::handle<MAT_Edge> (MAT_Bisector::*)() const) static_cast<opencascade::handle<MAT_Edge> (MAT_Bisector::*)() const>(&MAT_Bisector::SecondEdge),
             R"#(None)#" )
        .def("IssuePoint",
             (Standard_Integer (MAT_Bisector::*)() const) static_cast<Standard_Integer (MAT_Bisector::*)() const>(&MAT_Bisector::IssuePoint),
             R"#(None)#" )
        .def("EndPoint",
             (Standard_Integer (MAT_Bisector::*)() const) static_cast<Standard_Integer (MAT_Bisector::*)() const>(&MAT_Bisector::EndPoint),
             R"#(None)#" )
        .def("DistIssuePoint",
             (Standard_Real (MAT_Bisector::*)() const) static_cast<Standard_Real (MAT_Bisector::*)() const>(&MAT_Bisector::DistIssuePoint),
             R"#(None)#" )
        .def("FirstVector",
             (Standard_Integer (MAT_Bisector::*)() const) static_cast<Standard_Integer (MAT_Bisector::*)() const>(&MAT_Bisector::FirstVector),
             R"#(None)#" )
        .def("SecondVector",
             (Standard_Integer (MAT_Bisector::*)() const) static_cast<Standard_Integer (MAT_Bisector::*)() const>(&MAT_Bisector::SecondVector),
             R"#(None)#" )
        .def("Sense",
             (Standard_Real (MAT_Bisector::*)() const) static_cast<Standard_Real (MAT_Bisector::*)() const>(&MAT_Bisector::Sense),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (MAT_Bisector::*)() const) static_cast<Standard_Real (MAT_Bisector::*)() const>(&MAT_Bisector::FirstParameter),
             R"#(None)#" )
        .def("SecondParameter",
             (Standard_Real (MAT_Bisector::*)() const) static_cast<Standard_Real (MAT_Bisector::*)() const>(&MAT_Bisector::SecondParameter),
             R"#(None)#" )
        .def("Dump",
             (void (MAT_Bisector::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (MAT_Bisector::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&MAT_Bisector::Dump),
             R"#(None)#"  , py::arg("ashift"),  py::arg("alevel"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_Bisector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_Bisector::*)() const>(&MAT_Bisector::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_Bisector::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_Bisector::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<MAT_Edge ,opencascade::handle<MAT_Edge>  , Standard_Transient >>(m.attr("MAT_Edge"))
        .def(py::init<  >()  )
        .def("EdgeNumber",
             (void (MAT_Edge::*)( const Standard_Integer  ) ) static_cast<void (MAT_Edge::*)( const Standard_Integer  ) >(&MAT_Edge::EdgeNumber),
             R"#(None)#"  , py::arg("anumber"))
        .def("FirstBisector",
             (void (MAT_Edge::*)( const opencascade::handle<MAT_Bisector> &  ) ) static_cast<void (MAT_Edge::*)( const opencascade::handle<MAT_Bisector> &  ) >(&MAT_Edge::FirstBisector),
             R"#(None)#"  , py::arg("abisector"))
        .def("SecondBisector",
             (void (MAT_Edge::*)( const opencascade::handle<MAT_Bisector> &  ) ) static_cast<void (MAT_Edge::*)( const opencascade::handle<MAT_Bisector> &  ) >(&MAT_Edge::SecondBisector),
             R"#(None)#"  , py::arg("abisector"))
        .def("Distance",
             (void (MAT_Edge::*)( const Standard_Real  ) ) static_cast<void (MAT_Edge::*)( const Standard_Real  ) >(&MAT_Edge::Distance),
             R"#(None)#"  , py::arg("adistance"))
        .def("IntersectionPoint",
             (void (MAT_Edge::*)( const Standard_Integer  ) ) static_cast<void (MAT_Edge::*)( const Standard_Integer  ) >(&MAT_Edge::IntersectionPoint),
             R"#(None)#"  , py::arg("apoint"))
        .def("EdgeNumber",
             (Standard_Integer (MAT_Edge::*)() const) static_cast<Standard_Integer (MAT_Edge::*)() const>(&MAT_Edge::EdgeNumber),
             R"#(None)#" )
        .def("FirstBisector",
             (opencascade::handle<MAT_Bisector> (MAT_Edge::*)() const) static_cast<opencascade::handle<MAT_Bisector> (MAT_Edge::*)() const>(&MAT_Edge::FirstBisector),
             R"#(None)#" )
        .def("SecondBisector",
             (opencascade::handle<MAT_Bisector> (MAT_Edge::*)() const) static_cast<opencascade::handle<MAT_Bisector> (MAT_Edge::*)() const>(&MAT_Edge::SecondBisector),
             R"#(None)#" )
        .def("Distance",
             (Standard_Real (MAT_Edge::*)() const) static_cast<Standard_Real (MAT_Edge::*)() const>(&MAT_Edge::Distance),
             R"#(None)#" )
        .def("IntersectionPoint",
             (Standard_Integer (MAT_Edge::*)() const) static_cast<Standard_Integer (MAT_Edge::*)() const>(&MAT_Edge::IntersectionPoint),
             R"#(None)#" )
        .def("Dump",
             (void (MAT_Edge::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (MAT_Edge::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&MAT_Edge::Dump),
             R"#(None)#"  , py::arg("ashift"),  py::arg("alevel"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_Edge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_Edge::*)() const>(&MAT_Edge::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_Edge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_Edge::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<MAT_Zone ,opencascade::handle<MAT_Zone>  , Standard_Transient >>(m.attr("MAT_Zone"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<MAT_BasicElt> & >()  , py::arg("aBasicElt") )
        .def("Perform",
             (void (MAT_Zone::*)( const opencascade::handle<MAT_BasicElt> &  ) ) static_cast<void (MAT_Zone::*)( const opencascade::handle<MAT_BasicElt> &  ) >(&MAT_Zone::Perform),
             R"#(Compute the frontier of the Zone of proximity.)#"  , py::arg("aBasicElt"))
        .def("NumberOfArcs",
             (Standard_Integer (MAT_Zone::*)() const) static_cast<Standard_Integer (MAT_Zone::*)() const>(&MAT_Zone::NumberOfArcs),
             R"#(Return the number Of Arcs On the frontier of <me>.)#" )
        .def("ArcOnFrontier",
             (opencascade::handle<MAT_Arc> (MAT_Zone::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<MAT_Arc> (MAT_Zone::*)( const Standard_Integer  ) const>(&MAT_Zone::ArcOnFrontier),
             R"#(Return the Arc number <Index> on the frontier. of <me>.)#"  , py::arg("Index"))
        .def("NoEmptyZone",
             (Standard_Boolean (MAT_Zone::*)() const) static_cast<Standard_Boolean (MAT_Zone::*)() const>(&MAT_Zone::NoEmptyZone),
             R"#(Return TRUE if <me> is not empty .)#" )
        .def("Limited",
             (Standard_Boolean (MAT_Zone::*)() const) static_cast<Standard_Boolean (MAT_Zone::*)() const>(&MAT_Zone::Limited),
             R"#(Return TRUE if <me> is Limited.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_Zone::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_Zone::*)() const>(&MAT_Zone::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_Zone::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_Zone::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<MAT_BasicElt ,opencascade::handle<MAT_BasicElt>  , Standard_Transient >>(m.attr("MAT_BasicElt"))
        .def(py::init< const Standard_Integer >()  , py::arg("anInteger") )
        .def("StartArc",
             (opencascade::handle<MAT_Arc> (MAT_BasicElt::*)() const) static_cast<opencascade::handle<MAT_Arc> (MAT_BasicElt::*)() const>(&MAT_BasicElt::StartArc),
             R"#(Return <startArcLeft> or <startArcRight> corresponding to <aSide>.)#" )
        .def("EndArc",
             (opencascade::handle<MAT_Arc> (MAT_BasicElt::*)() const) static_cast<opencascade::handle<MAT_Arc> (MAT_BasicElt::*)() const>(&MAT_BasicElt::EndArc),
             R"#(Return <endArcLeft> or <endArcRight> corresponding to <aSide>.)#" )
        .def("Index",
             (Standard_Integer (MAT_BasicElt::*)() const) static_cast<Standard_Integer (MAT_BasicElt::*)() const>(&MAT_BasicElt::Index),
             R"#(Return the <index> of <me> in Graph.TheBasicElts.)#" )
        .def("GeomIndex",
             (Standard_Integer (MAT_BasicElt::*)() const) static_cast<Standard_Integer (MAT_BasicElt::*)() const>(&MAT_BasicElt::GeomIndex),
             R"#(Return the <GeomIndex> of <me>.)#" )
        .def("SetStartArc",
             (void (MAT_BasicElt::*)( const opencascade::handle<MAT_Arc> &  ) ) static_cast<void (MAT_BasicElt::*)( const opencascade::handle<MAT_Arc> &  ) >(&MAT_BasicElt::SetStartArc),
             R"#(None)#"  , py::arg("anArc"))
        .def("SetEndArc",
             (void (MAT_BasicElt::*)( const opencascade::handle<MAT_Arc> &  ) ) static_cast<void (MAT_BasicElt::*)( const opencascade::handle<MAT_Arc> &  ) >(&MAT_BasicElt::SetEndArc),
             R"#(None)#"  , py::arg("anArc"))
        .def("SetIndex",
             (void (MAT_BasicElt::*)( const Standard_Integer  ) ) static_cast<void (MAT_BasicElt::*)( const Standard_Integer  ) >(&MAT_BasicElt::SetIndex),
             R"#(None)#"  , py::arg("anInteger"))
        .def("SetGeomIndex",
             (void (MAT_BasicElt::*)( const Standard_Integer  ) ) static_cast<void (MAT_BasicElt::*)( const Standard_Integer  ) >(&MAT_BasicElt::SetGeomIndex),
             R"#(None)#"  , py::arg("anInteger"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_BasicElt::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_BasicElt::*)() const>(&MAT_BasicElt::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_BasicElt::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_BasicElt::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<MAT_TListNodeOfListOfEdge ,opencascade::handle<MAT_TListNodeOfListOfEdge>  , Standard_Transient >>(m.attr("MAT_TListNodeOfListOfEdge"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<MAT_Edge> & >()  , py::arg("anitem") )
        .def("GetItem",
             (opencascade::handle<MAT_Edge> (MAT_TListNodeOfListOfEdge::*)() const) static_cast<opencascade::handle<MAT_Edge> (MAT_TListNodeOfListOfEdge::*)() const>(&MAT_TListNodeOfListOfEdge::GetItem),
             R"#(None)#" )
        .def("Next",
             (opencascade::handle<MAT_TListNodeOfListOfEdge> (MAT_TListNodeOfListOfEdge::*)() const) static_cast<opencascade::handle<MAT_TListNodeOfListOfEdge> (MAT_TListNodeOfListOfEdge::*)() const>(&MAT_TListNodeOfListOfEdge::Next),
             R"#(None)#" )
        .def("Previous",
             (opencascade::handle<MAT_TListNodeOfListOfEdge> (MAT_TListNodeOfListOfEdge::*)() const) static_cast<opencascade::handle<MAT_TListNodeOfListOfEdge> (MAT_TListNodeOfListOfEdge::*)() const>(&MAT_TListNodeOfListOfEdge::Previous),
             R"#(None)#" )
        .def("SetItem",
             (void (MAT_TListNodeOfListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) ) static_cast<void (MAT_TListNodeOfListOfEdge::*)( const opencascade::handle<MAT_Edge> &  ) >(&MAT_TListNodeOfListOfEdge::SetItem),
             R"#(None)#"  , py::arg("anitem"))
        .def("Next",
             (void (MAT_TListNodeOfListOfEdge::*)( const opencascade::handle<MAT_TListNodeOfListOfEdge> &  ) ) static_cast<void (MAT_TListNodeOfListOfEdge::*)( const opencascade::handle<MAT_TListNodeOfListOfEdge> &  ) >(&MAT_TListNodeOfListOfEdge::Next),
             R"#(None)#"  , py::arg("atlistnode"))
        .def("Previous",
             (void (MAT_TListNodeOfListOfEdge::*)( const opencascade::handle<MAT_TListNodeOfListOfEdge> &  ) ) static_cast<void (MAT_TListNodeOfListOfEdge::*)( const opencascade::handle<MAT_TListNodeOfListOfEdge> &  ) >(&MAT_TListNodeOfListOfEdge::Previous),
             R"#(None)#"  , py::arg("atlistnode"))
        .def("Dummy",
             (void (MAT_TListNodeOfListOfEdge::*)() const) static_cast<void (MAT_TListNodeOfListOfEdge::*)() const>(&MAT_TListNodeOfListOfEdge::Dummy),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_TListNodeOfListOfEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_TListNodeOfListOfEdge::*)() const>(&MAT_TListNodeOfListOfEdge::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_TListNodeOfListOfEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_TListNodeOfListOfEdge::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<MAT_ListOfBisector ,opencascade::handle<MAT_ListOfBisector>  , Standard_Transient >>(m.attr("MAT_ListOfBisector"))
        .def(py::init<  >()  )
        .def("First",
             (void (MAT_ListOfBisector::*)() ) static_cast<void (MAT_ListOfBisector::*)() >(&MAT_ListOfBisector::First),
             R"#(None)#" )
        .def("Last",
             (void (MAT_ListOfBisector::*)() ) static_cast<void (MAT_ListOfBisector::*)() >(&MAT_ListOfBisector::Last),
             R"#(None)#" )
        .def("Init",
             (void (MAT_ListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) ) static_cast<void (MAT_ListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) >(&MAT_ListOfBisector::Init),
             R"#(None)#"  , py::arg("aniten"))
        .def("Next",
             (void (MAT_ListOfBisector::*)() ) static_cast<void (MAT_ListOfBisector::*)() >(&MAT_ListOfBisector::Next),
             R"#(None)#" )
        .def("Previous",
             (void (MAT_ListOfBisector::*)() ) static_cast<void (MAT_ListOfBisector::*)() >(&MAT_ListOfBisector::Previous),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (MAT_ListOfBisector::*)() const) static_cast<Standard_Boolean (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::More),
             R"#(None)#" )
        .def("Current",
             (opencascade::handle<MAT_Bisector> (MAT_ListOfBisector::*)() const) static_cast<opencascade::handle<MAT_Bisector> (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::Current),
             R"#(None)#" )
        .def("Current",
             (void (MAT_ListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) const) static_cast<void (MAT_ListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) const>(&MAT_ListOfBisector::Current),
             R"#(None)#"  , py::arg("anitem"))
        .def("FirstItem",
             (opencascade::handle<MAT_Bisector> (MAT_ListOfBisector::*)() const) static_cast<opencascade::handle<MAT_Bisector> (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::FirstItem),
             R"#(None)#" )
        .def("LastItem",
             (opencascade::handle<MAT_Bisector> (MAT_ListOfBisector::*)() const) static_cast<opencascade::handle<MAT_Bisector> (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::LastItem),
             R"#(None)#" )
        .def("PreviousItem",
             (opencascade::handle<MAT_Bisector> (MAT_ListOfBisector::*)() const) static_cast<opencascade::handle<MAT_Bisector> (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::PreviousItem),
             R"#(None)#" )
        .def("NextItem",
             (opencascade::handle<MAT_Bisector> (MAT_ListOfBisector::*)() const) static_cast<opencascade::handle<MAT_Bisector> (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::NextItem),
             R"#(None)#" )
        .def("Number",
             (Standard_Integer (MAT_ListOfBisector::*)() const) static_cast<Standard_Integer (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::Number),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (MAT_ListOfBisector::*)() const) static_cast<Standard_Integer (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::Index),
             R"#(None)#" )
        .def("Brackets",
             (opencascade::handle<MAT_Bisector> (MAT_ListOfBisector::*)( const Standard_Integer  ) ) static_cast<opencascade::handle<MAT_Bisector> (MAT_ListOfBisector::*)( const Standard_Integer  ) >(&MAT_ListOfBisector::Brackets),
             R"#(None)#"  , py::arg("anindex"))
        .def("Unlink",
             (void (MAT_ListOfBisector::*)() ) static_cast<void (MAT_ListOfBisector::*)() >(&MAT_ListOfBisector::Unlink),
             R"#(None)#" )
        .def("LinkBefore",
             (void (MAT_ListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) ) static_cast<void (MAT_ListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) >(&MAT_ListOfBisector::LinkBefore),
             R"#(None)#"  , py::arg("anitem"))
        .def("LinkAfter",
             (void (MAT_ListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) ) static_cast<void (MAT_ListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) >(&MAT_ListOfBisector::LinkAfter),
             R"#(None)#"  , py::arg("anitem"))
        .def("FrontAdd",
             (void (MAT_ListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) ) static_cast<void (MAT_ListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) >(&MAT_ListOfBisector::FrontAdd),
             R"#(None)#"  , py::arg("anitem"))
        .def("BackAdd",
             (void (MAT_ListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) ) static_cast<void (MAT_ListOfBisector::*)( const opencascade::handle<MAT_Bisector> &  ) >(&MAT_ListOfBisector::BackAdd),
             R"#(None)#"  , py::arg("anitem"))
        .def("Permute",
             (void (MAT_ListOfBisector::*)() ) static_cast<void (MAT_ListOfBisector::*)() >(&MAT_ListOfBisector::Permute),
             R"#(None)#" )
        .def("Loop",
             (void (MAT_ListOfBisector::*)() const) static_cast<void (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::Loop),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (MAT_ListOfBisector::*)() const) static_cast<Standard_Boolean (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::IsEmpty),
             R"#(None)#" )
        .def("Dump",
             (void (MAT_ListOfBisector::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (MAT_ListOfBisector::*)( const Standard_Integer ,  const Standard_Integer  ) >(&MAT_ListOfBisector::Dump),
             R"#(None)#"  , py::arg("ashift"),  py::arg("alevel"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_ListOfBisector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_ListOfBisector::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_ListOfBisector::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/MAT_DataMapOfIntegerBasicElt.hxx
// ./opencascade/MAT_SequenceOfArc.hxx
// ./opencascade/MAT_ListOfEdge.hxx
// ./opencascade/MAT_DataMapIteratorOfDataMapOfIntegerBisector.hxx
// ./opencascade/MAT_Edge.hxx
// ./opencascade/MAT_Node.hxx
// ./opencascade/MAT_TListNodeOfListOfEdge.hxx
// ./opencascade/MAT_Graph.hxx
// ./opencascade/MAT_DataMapIteratorOfDataMapOfIntegerNode.hxx
// ./opencascade/MAT_SequenceOfBasicElt.hxx
// ./opencascade/MAT_Zone.hxx
// ./opencascade/MAT_Side.hxx
// ./opencascade/MAT_Arc.hxx
// ./opencascade/MAT_DataMapOfIntegerBisector.hxx
// ./opencascade/MAT_DataMapIteratorOfDataMapOfIntegerBasicElt.hxx
// ./opencascade/MAT_ListOfBisector.hxx
// ./opencascade/MAT_DataMapOfIntegerArc.hxx
// ./opencascade/MAT_DataMapOfIntegerNode.hxx
// ./opencascade/MAT_TListNodeOfListOfBisector.hxx
// ./opencascade/MAT_BasicElt.hxx
// ./opencascade/MAT_Bisector.hxx
// ./opencascade/MAT_DataMapIteratorOfDataMapOfIntegerArc.hxx

// operators

// register typdefs
// ./opencascade/MAT_DataMapOfIntegerBasicElt.hxx
// ./opencascade/MAT_SequenceOfArc.hxx
    register_template_NCollection_Sequence<opencascade::handle<MAT_Arc> >(m,"MAT_SequenceOfArc");  
// ./opencascade/MAT_ListOfEdge.hxx
// ./opencascade/MAT_DataMapIteratorOfDataMapOfIntegerBisector.hxx
// ./opencascade/MAT_Edge.hxx
// ./opencascade/MAT_Node.hxx
// ./opencascade/MAT_TListNodeOfListOfEdge.hxx
// ./opencascade/MAT_Graph.hxx
// ./opencascade/MAT_DataMapIteratorOfDataMapOfIntegerNode.hxx
// ./opencascade/MAT_SequenceOfBasicElt.hxx
    register_template_NCollection_Sequence<opencascade::handle<MAT_BasicElt> >(m,"MAT_SequenceOfBasicElt");  
// ./opencascade/MAT_Zone.hxx
// ./opencascade/MAT_Side.hxx
// ./opencascade/MAT_Arc.hxx
// ./opencascade/MAT_DataMapOfIntegerBisector.hxx
// ./opencascade/MAT_DataMapIteratorOfDataMapOfIntegerBasicElt.hxx
// ./opencascade/MAT_ListOfBisector.hxx
// ./opencascade/MAT_DataMapOfIntegerArc.hxx
// ./opencascade/MAT_DataMapOfIntegerNode.hxx
// ./opencascade/MAT_TListNodeOfListOfBisector.hxx
// ./opencascade/MAT_BasicElt.hxx
// ./opencascade/MAT_Bisector.hxx
// ./opencascade/MAT_DataMapIteratorOfDataMapOfIntegerArc.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

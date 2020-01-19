
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <ChFi2d_Builder.hxx>

// module includes
#include <ChFi2d.hxx>
#include <ChFi2d_AnaFilletAlgo.hxx>
#include <ChFi2d_Builder.hxx>
#include <ChFi2d_ChamferAPI.hxx>
#include <ChFi2d_ConstructionError.hxx>
#include <ChFi2d_FilletAlgo.hxx>
#include <ChFi2d_FilletAPI.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ChFi2d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ChFi2d"));


//Python trampoline classes

// classes

    register_default_constructor<ChFi2d , shared_ptr<ChFi2d>>(m,"ChFi2d");

    static_cast<py::class_<ChFi2d , shared_ptr<ChFi2d>  >>(m.attr("ChFi2d"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ChFi2d_AnaFilletAlgo , shared_ptr<ChFi2d_AnaFilletAlgo>  >>(m.attr("ChFi2d_AnaFilletAlgo"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire &,const gp_Pln & >()  , py::arg("theWire"),  py::arg("thePlane") )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge &,const gp_Pln & >()  , py::arg("theEdge1"),  py::arg("theEdge2"),  py::arg("thePlane") )
    // methods
        .def("Init",
             (void (ChFi2d_AnaFilletAlgo::*)( const TopoDS_Wire & ,  const gp_Pln &  ) ) static_cast<void (ChFi2d_AnaFilletAlgo::*)( const TopoDS_Wire & ,  const gp_Pln &  ) >(&ChFi2d_AnaFilletAlgo::Init),
             R"#(Initializes the class by a wire consisting of two edges.)#"  , py::arg("theWire"),  py::arg("thePlane"))
        .def("Init",
             (void (ChFi2d_AnaFilletAlgo::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const gp_Pln &  ) ) static_cast<void (ChFi2d_AnaFilletAlgo::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const gp_Pln &  ) >(&ChFi2d_AnaFilletAlgo::Init),
             R"#(Initializes the class by two edges.)#"  , py::arg("theEdge1"),  py::arg("theEdge2"),  py::arg("thePlane"))
        .def("Perform",
             (Standard_Boolean (ChFi2d_AnaFilletAlgo::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (ChFi2d_AnaFilletAlgo::*)( const Standard_Real  ) >(&ChFi2d_AnaFilletAlgo::Perform),
             R"#(Calculates a fillet.)#"  , py::arg("radius"))
        .def("Result",
             (const TopoDS_Edge & (ChFi2d_AnaFilletAlgo::*)( TopoDS_Edge & ,  TopoDS_Edge &  ) ) static_cast<const TopoDS_Edge & (ChFi2d_AnaFilletAlgo::*)( TopoDS_Edge & ,  TopoDS_Edge &  ) >(&ChFi2d_AnaFilletAlgo::Result),
             R"#(Retrieves a result (fillet and shrinked neighbours).)#"  , py::arg("e1"),  py::arg("e2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ChFi2d_Builder , shared_ptr<ChFi2d_Builder>  >>(m.attr("ChFi2d_Builder"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face & >()  , py::arg("F") )
    // methods
        .def("Init",
             (void (ChFi2d_Builder::*)( const TopoDS_Face &  ) ) static_cast<void (ChFi2d_Builder::*)( const TopoDS_Face &  ) >(&ChFi2d_Builder::Init),
             R"#(None)#"  , py::arg("F"))
        .def("Init",
             (void (ChFi2d_Builder::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<void (ChFi2d_Builder::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) >(&ChFi2d_Builder::Init),
             R"#(None)#"  , py::arg("RefFace"),  py::arg("ModFace"))
        .def("AddFillet",
             (TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Vertex & ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Vertex & ,  const Standard_Real  ) >(&ChFi2d_Builder::AddFillet),
             R"#(Add a fillet of radius <Radius> on the wire between the two edges connected to the vertex <V>. <AddFillet> returns the fillet edge. The returned edge has sense only if the status <status> is <IsDone>)#"  , py::arg("V"),  py::arg("Radius"))
        .def("ModifyFillet",
             (TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const Standard_Real  ) >(&ChFi2d_Builder::ModifyFillet),
             R"#(modify the fillet radius and return the new fillet edge. this edge has sense only if the status <status> is <IsDone>.)#"  , py::arg("Fillet"),  py::arg("Radius"))
        .def("RemoveFillet",
             (TopoDS_Vertex (ChFi2d_Builder::*)( const TopoDS_Edge &  ) ) static_cast<TopoDS_Vertex (ChFi2d_Builder::*)( const TopoDS_Edge &  ) >(&ChFi2d_Builder::RemoveFillet),
             R"#(removes the fillet <Fillet> and returns the vertex connecting the two adjacent edges to this fillet.)#"  , py::arg("Fillet"))
        .def("AddChamfer",
             (TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&ChFi2d_Builder::AddChamfer),
             R"#(Add a chamfer on the wire between the two edges connected <E1> and <E2>. <AddChamfer> returns the chamfer edge. This edge has sense only if the status <status> is <IsDone>.)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("D1"),  py::arg("D2"))
        .def("AddChamfer",
             (TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real  ) >(&ChFi2d_Builder::AddChamfer),
             R"#(Add a chamfer on the wire between the two edges connected to the vertex <V>. The chamfer will make an angle <Ang> with the edge <E>, and one of its extremities will be on <E> at distance <D>. The returned edge has sense only if the status <status> is <IsDone>. Warning: The value of <Ang> must be expressed in Radian.)#"  , py::arg("E"),  py::arg("V"),  py::arg("D"),  py::arg("Ang"))
        .def("ModifyChamfer",
             (TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&ChFi2d_Builder::ModifyChamfer),
             R"#(modify the chamfer <Chamfer> and returns the new chamfer edge. This edge as sense only if the status <status> is <IsDone>.)#"  , py::arg("Chamfer"),  py::arg("E1"),  py::arg("E2"),  py::arg("D1"),  py::arg("D2"))
        .def("ModifyChamfer",
             (TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&ChFi2d_Builder::ModifyChamfer),
             R"#(modify the chamfer <Chamfer> and returns the new chamfer edge. This edge as sense only if the status <status> is <IsDone>. Warning: The value of <Ang> must be expressed in Radian.)#"  , py::arg("Chamfer"),  py::arg("E"),  py::arg("D"),  py::arg("Ang"))
        .def("RemoveChamfer",
             (TopoDS_Vertex (ChFi2d_Builder::*)( const TopoDS_Edge &  ) ) static_cast<TopoDS_Vertex (ChFi2d_Builder::*)( const TopoDS_Edge &  ) >(&ChFi2d_Builder::RemoveChamfer),
             R"#(removes the chamfer <Chamfer> and returns the vertex connecting the two adjacent edges to this chamfer.)#"  , py::arg("Chamfer"))
        .def("Result",
             (TopoDS_Face (ChFi2d_Builder::*)() const) static_cast<TopoDS_Face (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::Result),
             R"#(returns the modified face)#" )
        .def("IsModified",
             (Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::IsModified),
             R"#(None)#"  , py::arg("E"))
        .def("FilletEdges",
             (const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const) static_cast<const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::FilletEdges),
             R"#(returns the list of new edges)#" )
        .def("NbFillet",
             (Standard_Integer (ChFi2d_Builder::*)() const) static_cast<Standard_Integer (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::NbFillet),
             R"#(None)#" )
        .def("ChamferEdges",
             (const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const) static_cast<const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::ChamferEdges),
             R"#(returns the list of new edges)#" )
        .def("NbChamfer",
             (Standard_Integer (ChFi2d_Builder::*)() const) static_cast<Standard_Integer (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::NbChamfer),
             R"#(None)#" )
        .def("HasDescendant",
             (Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::HasDescendant),
             R"#(None)#"  , py::arg("E"))
        .def("DescendantEdge",
             (const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::DescendantEdge),
             R"#(returns the modified edge if <E> has descendant or <E> in the other case.)#"  , py::arg("E"))
        .def("BasisEdge",
             (const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::BasisEdge),
             R"#(Returns the parent edge of <E> Warning: If <E>is a basis edge, the returned edge would be equal to <E>)#"  , py::arg("E"))
        .def("Status",
             (ChFi2d_ConstructionError (ChFi2d_Builder::*)() const) static_cast<ChFi2d_ConstructionError (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::Status),
             R"#(None)#" )
        .def("Result",
             (TopoDS_Face (ChFi2d_Builder::*)() const) static_cast<TopoDS_Face (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::Result),
             R"#(returns the modified face)#" )
        .def("IsModified",
             (Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::IsModified),
             R"#(None)#"  , py::arg("E"))
        .def("FilletEdges",
             (const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const) static_cast<const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::FilletEdges),
             R"#(returns the list of new edges)#" )
        .def("ChamferEdges",
             (const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const) static_cast<const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::ChamferEdges),
             R"#(returns the list of new edges)#" )
        .def("NbFillet",
             (Standard_Integer (ChFi2d_Builder::*)() const) static_cast<Standard_Integer (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::NbFillet),
             R"#(None)#" )
        .def("NbChamfer",
             (Standard_Integer (ChFi2d_Builder::*)() const) static_cast<Standard_Integer (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::NbChamfer),
             R"#(None)#" )
        .def("HasDescendant",
             (Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::HasDescendant),
             R"#(None)#"  , py::arg("E"))
        .def("DescendantEdge",
             (const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::DescendantEdge),
             R"#(returns the modified edge if <E> has descendant or <E> in the other case.)#"  , py::arg("E"))
        .def("Status",
             (ChFi2d_ConstructionError (ChFi2d_Builder::*)() const) static_cast<ChFi2d_ConstructionError (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::Status),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ChFi2d_ChamferAPI , shared_ptr<ChFi2d_ChamferAPI>  >>(m.attr("ChFi2d_ChamferAPI"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire & >()  , py::arg("theWire") )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge & >()  , py::arg("theEdge1"),  py::arg("theEdge2") )
    // methods
        .def("Init",
             (void (ChFi2d_ChamferAPI::*)( const TopoDS_Wire &  ) ) static_cast<void (ChFi2d_ChamferAPI::*)( const TopoDS_Wire &  ) >(&ChFi2d_ChamferAPI::Init),
             R"#(Initializes the class by a wire consisting of two libear edges.)#"  , py::arg("theWire"))
        .def("Init",
             (void (ChFi2d_ChamferAPI::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) ) static_cast<void (ChFi2d_ChamferAPI::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) >(&ChFi2d_ChamferAPI::Init),
             R"#(Initializes the class by two linear edges.)#"  , py::arg("theEdge1"),  py::arg("theEdge2"))
        .def("Perform",
             (Standard_Boolean (ChFi2d_ChamferAPI::*)() ) static_cast<Standard_Boolean (ChFi2d_ChamferAPI::*)() >(&ChFi2d_ChamferAPI::Perform),
             R"#(Constructs a chamfer edge. Returns true if the edge is constructed.)#" )
        .def("Result",
             (TopoDS_Edge (ChFi2d_ChamferAPI::*)( TopoDS_Edge & ,  TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (ChFi2d_ChamferAPI::*)( TopoDS_Edge & ,  TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&ChFi2d_ChamferAPI::Result),
             R"#(None)#"  , py::arg("theEdge1"),  py::arg("theEdge2"),  py::arg("theLength1"),  py::arg("theLength2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ChFi2d_FilletAPI , shared_ptr<ChFi2d_FilletAPI>  >>(m.attr("ChFi2d_FilletAPI"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire &,const gp_Pln & >()  , py::arg("theWire"),  py::arg("thePlane") )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge &,const gp_Pln & >()  , py::arg("theEdge1"),  py::arg("theEdge2"),  py::arg("thePlane") )
    // methods
        .def("Init",
             (void (ChFi2d_FilletAPI::*)( const TopoDS_Wire & ,  const gp_Pln &  ) ) static_cast<void (ChFi2d_FilletAPI::*)( const TopoDS_Wire & ,  const gp_Pln &  ) >(&ChFi2d_FilletAPI::Init),
             R"#(Initializes a fillet algorithm: accepts a wire consisting of two edges in a plane.)#"  , py::arg("theWire"),  py::arg("thePlane"))
        .def("Init",
             (void (ChFi2d_FilletAPI::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const gp_Pln &  ) ) static_cast<void (ChFi2d_FilletAPI::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const gp_Pln &  ) >(&ChFi2d_FilletAPI::Init),
             R"#(Initializes a fillet algorithm: accepts two edges in a plane.)#"  , py::arg("theEdge1"),  py::arg("theEdge2"),  py::arg("thePlane"))
        .def("Perform",
             (Standard_Boolean (ChFi2d_FilletAPI::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (ChFi2d_FilletAPI::*)( const Standard_Real  ) >(&ChFi2d_FilletAPI::Perform),
             R"#(Constructs a fillet edge. Returns true if at least one result was found.)#"  , py::arg("theRadius"))
        .def("NbResults",
             (Standard_Integer (ChFi2d_FilletAPI::*)( const gp_Pnt &  ) ) static_cast<Standard_Integer (ChFi2d_FilletAPI::*)( const gp_Pnt &  ) >(&ChFi2d_FilletAPI::NbResults),
             R"#(Returns number of possible solutions. <thePoint> chooses a particular fillet in case of several fillets may be constructed (for example, a circle intersecting a segment in 2 points). Put the intersecting (or common) point of the edges.)#"  , py::arg("thePoint"))
        .def("Result",
             (TopoDS_Edge (ChFi2d_FilletAPI::*)( const gp_Pnt & ,  TopoDS_Edge & ,  TopoDS_Edge & ,  const Standard_Integer  ) ) static_cast<TopoDS_Edge (ChFi2d_FilletAPI::*)( const gp_Pnt & ,  TopoDS_Edge & ,  TopoDS_Edge & ,  const Standard_Integer  ) >(&ChFi2d_FilletAPI::Result),
             R"#(Returns result (fillet edge, modified edge1, modified edge2), nearest to the given point <thePoint> if iSolution == -1 <thePoint> chooses a particular fillet in case of several fillets may be constructed (for example, a circle intersecting a segment in 2 points). Put the intersecting (or common) point of the edges.)#"  , py::arg("thePoint"),  py::arg("theEdge1"),  py::arg("theEdge2"),  py::arg("iSolution")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ChFi2d_FilletAlgo , shared_ptr<ChFi2d_FilletAlgo>  >>(m.attr("ChFi2d_FilletAlgo"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire &,const gp_Pln & >()  , py::arg("theWire"),  py::arg("thePlane") )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge &,const gp_Pln & >()  , py::arg("theEdge1"),  py::arg("theEdge2"),  py::arg("thePlane") )
    // methods
        .def("Init",
             (void (ChFi2d_FilletAlgo::*)( const TopoDS_Wire & ,  const gp_Pln &  ) ) static_cast<void (ChFi2d_FilletAlgo::*)( const TopoDS_Wire & ,  const gp_Pln &  ) >(&ChFi2d_FilletAlgo::Init),
             R"#(Initializes a fillet algorithm: accepts a wire consisting of two edges in a plane.)#"  , py::arg("theWire"),  py::arg("thePlane"))
        .def("Init",
             (void (ChFi2d_FilletAlgo::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const gp_Pln &  ) ) static_cast<void (ChFi2d_FilletAlgo::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const gp_Pln &  ) >(&ChFi2d_FilletAlgo::Init),
             R"#(Initializes a fillet algorithm: accepts two edges in a plane.)#"  , py::arg("theEdge1"),  py::arg("theEdge2"),  py::arg("thePlane"))
        .def("Perform",
             (Standard_Boolean (ChFi2d_FilletAlgo::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (ChFi2d_FilletAlgo::*)( const Standard_Real  ) >(&ChFi2d_FilletAlgo::Perform),
             R"#(Constructs a fillet edge. Returns true, if at least one result was found)#"  , py::arg("theRadius"))
        .def("NbResults",
             (Standard_Integer (ChFi2d_FilletAlgo::*)( const gp_Pnt &  ) ) static_cast<Standard_Integer (ChFi2d_FilletAlgo::*)( const gp_Pnt &  ) >(&ChFi2d_FilletAlgo::NbResults),
             R"#(Returns number of possible solutions. <thePoint> chooses a particular fillet in case of several fillets may be constructed (for example, a circle intersecting a segment in 2 points). Put the intersecting (or common) point of the edges.)#"  , py::arg("thePoint"))
        .def("Result",
             (TopoDS_Edge (ChFi2d_FilletAlgo::*)( const gp_Pnt & ,  TopoDS_Edge & ,  TopoDS_Edge & ,  const Standard_Integer  ) ) static_cast<TopoDS_Edge (ChFi2d_FilletAlgo::*)( const gp_Pnt & ,  TopoDS_Edge & ,  TopoDS_Edge & ,  const Standard_Integer  ) >(&ChFi2d_FilletAlgo::Result),
             R"#(Returns result (fillet edge, modified edge1, modified edge2), neares to the given point <thePoint> if iSolution == -1. <thePoint> chooses a particular fillet in case of several fillets may be constructed (for example, a circle intersecting a segment in 2 points). Put the intersecting (or common) point of the edges.)#"  , py::arg("thePoint"),  py::arg("theEdge1"),  py::arg("theEdge2"),  py::arg("iSolution")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<FilletPoint , shared_ptr<FilletPoint>  >>(m.attr("FilletPoint"))
        .def(py::init< const Standard_Real >()  , py::arg("theParam") )
    // methods
        .def("setParam",
             (void (FilletPoint::*)( Standard_Real  ) ) static_cast<void (FilletPoint::*)( Standard_Real  ) >(&FilletPoint::setParam),
             R"#(Changes the point position by changing point parameter on the first curve.)#"  , py::arg("theParam"))
        .def("getParam",
             (Standard_Real (FilletPoint::*)() const) static_cast<Standard_Real (FilletPoint::*)() const>(&FilletPoint::getParam),
             R"#(Returns the point parameter on the first curve.)#" )
        .def("getNBValues",
             (Standard_Integer (FilletPoint::*)() ) static_cast<Standard_Integer (FilletPoint::*)() >(&FilletPoint::getNBValues),
             R"#(Returns number of found values of function in this point.)#" )
        .def("getValue",
             (Standard_Real (FilletPoint::*)( int  ) ) static_cast<Standard_Real (FilletPoint::*)( int  ) >(&FilletPoint::getValue),
             R"#(Returns value of function in this point.)#"  , py::arg("theIndex"))
        .def("getDiff",
             (Standard_Real (FilletPoint::*)( int  ) ) static_cast<Standard_Real (FilletPoint::*)( int  ) >(&FilletPoint::getDiff),
             R"#(Returns derivatives of function in this point.)#"  , py::arg("theIndex"))
        .def("isValid",
             (Standard_Boolean (FilletPoint::*)( int  ) ) static_cast<Standard_Boolean (FilletPoint::*)( int  ) >(&FilletPoint::isValid),
             R"#(Returns true if function is valid (rediuses vectors of fillet do not intersect any curve).)#"  , py::arg("theIndex"))
        .def("getNear",
             (int (FilletPoint::*)( int  ) ) static_cast<int (FilletPoint::*)( int  ) >(&FilletPoint::getNear),
             R"#(Returns the index of the nearest value)#"  , py::arg("theIndex"))
        .def("setParam2",
             (void (FilletPoint::*)( const Standard_Real  ) ) static_cast<void (FilletPoint::*)( const Standard_Real  ) >(&FilletPoint::setParam2),
             R"#(Defines the parameter of the projected point on the second curve.)#"  , py::arg("theParam2"))
        .def("getParam2",
             (Standard_Real (FilletPoint::*)() ) static_cast<Standard_Real (FilletPoint::*)() >(&FilletPoint::getParam2),
             R"#(Returns the parameter of the projected point on the second curve.)#" )
        .def("setCenter",
             (void (FilletPoint::*)( const gp_Pnt2d  ) ) static_cast<void (FilletPoint::*)( const gp_Pnt2d  ) >(&FilletPoint::setCenter),
             R"#(Center of the fillet.)#"  , py::arg("thePoint"))
        .def("getCenter",
             (const gp_Pnt2d (FilletPoint::*)() ) static_cast<const gp_Pnt2d (FilletPoint::*)() >(&FilletPoint::getCenter),
             R"#(Center of the fillet.)#" )
        .def("appendValue",
             (void (FilletPoint::*)( Standard_Real ,  Standard_Boolean  ) ) static_cast<void (FilletPoint::*)( Standard_Real ,  Standard_Boolean  ) >(&FilletPoint::appendValue),
             R"#(Appends value of the function.)#"  , py::arg("theValue"),  py::arg("theValid"))
        .def("calculateDiff",
             (Standard_Boolean (FilletPoint::*)( FilletPoint *  ) ) static_cast<Standard_Boolean (FilletPoint::*)( FilletPoint *  ) >(&FilletPoint::calculateDiff),
             R"#(Computes difference between this point and the given. Stores difference in myD.)#"  , py::arg(""))
        .def("FilterPoints",
             (void (FilletPoint::*)( FilletPoint *  ) ) static_cast<void (FilletPoint::*)( FilletPoint *  ) >(&FilletPoint::FilterPoints),
             R"#(Filters out the values and leaves the most optimal one.)#"  , py::arg(""))
        .def("Copy",
             (FilletPoint * (FilletPoint::*)() ) static_cast<FilletPoint * (FilletPoint::*)() >(&FilletPoint::Copy),
             R"#(Returns a pointer to created copy of the point warning: this is not the full copy! Copies only: myParam, myV, myD, myValid)#" )
        .def("hasSolution",
             (Standard_Integer (FilletPoint::*)( Standard_Real  ) ) static_cast<Standard_Integer (FilletPoint::*)( Standard_Real  ) >(&FilletPoint::hasSolution),
             R"#(Returns the index of the solution or zero if there is no solution)#"  , py::arg("theRadius"))
        .def("LowerValue",
             (Standard_Real (FilletPoint::*)() ) static_cast<Standard_Real (FilletPoint::*)() >(&FilletPoint::LowerValue),
             R"#(For debug only)#" )
        .def("remove",
             (void (FilletPoint::*)( Standard_Integer  ) ) static_cast<void (FilletPoint::*)( Standard_Integer  ) >(&FilletPoint::remove),
             R"#(Removes the found value by the given index.)#"  , py::arg("theIndex"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/ChFi2d_Builder.hxx
// ./opencascade/ChFi2d_FilletAPI.hxx
// ./opencascade/ChFi2d.hxx
// ./opencascade/ChFi2d_ConstructionError.hxx
// ./opencascade/ChFi2d_AnaFilletAlgo.hxx
// ./opencascade/ChFi2d_FilletAlgo.hxx
// ./opencascade/ChFi2d_ChamferAPI.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

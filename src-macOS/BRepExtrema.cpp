
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Vertex.hxx>
#include <Bnd_Box.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Shape.hxx>
#include <gp_Pnt.hxx>
#include <TopoDS_Edge.hxx>

// module includes
#include <BRepExtrema_DistanceSS.hxx>
#include <BRepExtrema_DistShapeShape.hxx>
#include <BRepExtrema_ElementFilter.hxx>
#include <BRepExtrema_ExtCC.hxx>
#include <BRepExtrema_ExtCF.hxx>
#include <BRepExtrema_ExtFF.hxx>
#include <BRepExtrema_ExtPC.hxx>
#include <BRepExtrema_ExtPF.hxx>
#include <BRepExtrema_MapOfIntegerPackedMapOfInteger.hxx>
#include <BRepExtrema_OverlapTool.hxx>
#include <BRepExtrema_Poly.hxx>
#include <BRepExtrema_SelfIntersection.hxx>
#include <BRepExtrema_SeqOfSolution.hxx>
#include <BRepExtrema_ShapeProximity.hxx>
#include <BRepExtrema_SolutionElem.hxx>
#include <BRepExtrema_SupportType.hxx>
#include <BRepExtrema_TriangleSet.hxx>
#include <BRepExtrema_UnCompatibleShape.hxx>

// template related includes
// ./opencascade/BRepExtrema_TriangleSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepExtrema_SeqOfSolution.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepExtrema(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepExtrema"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepExtrema_DistShapeShape , shared_ptr<BRepExtrema_DistShapeShape> >>(m.attr("BRepExtrema_DistShapeShape"))
    // constructors
    // custom constructors
    // methods
        .def("SetDeflection",
             (void (BRepExtrema_DistShapeShape::*)( const Standard_Real ) ) static_cast<void (BRepExtrema_DistShapeShape::*)( const Standard_Real ) >(&BRepExtrema_DistShapeShape::SetDeflection),
             R"#(None)#"  , py::arg("theDeflection"))
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_DistShapeShape::*)() const) static_cast<Standard_Boolean (BRepExtrema_DistShapeShape::*)() const>(&BRepExtrema_DistShapeShape::IsDone),
             R"#(True if the minimum distance is found.)#" )
        .def("NbSolution",
             (Standard_Integer (BRepExtrema_DistShapeShape::*)() const) static_cast<Standard_Integer (BRepExtrema_DistShapeShape::*)() const>(&BRepExtrema_DistShapeShape::NbSolution),
             R"#(Returns the number of solutions satisfying the minimum distance.)#" )
        .def("InnerSolution",
             (Standard_Boolean (BRepExtrema_DistShapeShape::*)() const) static_cast<Standard_Boolean (BRepExtrema_DistShapeShape::*)() const>(&BRepExtrema_DistShapeShape::InnerSolution),
             R"#(True if one of the shapes is a solid and the other shape is completely or partially inside the solid.)#" )
        .def("PointOnShape1",
             (const gp_Pnt & (BRepExtrema_DistShapeShape::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (BRepExtrema_DistShapeShape::*)( const Standard_Integer ) const>(&BRepExtrema_DistShapeShape::PointOnShape1),
             R"#(Returns the Point corresponding to the <N>th solution on the first Shape)#"  , py::arg("N"))
        .def("PointOnShape2",
             (const gp_Pnt & (BRepExtrema_DistShapeShape::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (BRepExtrema_DistShapeShape::*)( const Standard_Integer ) const>(&BRepExtrema_DistShapeShape::PointOnShape2),
             R"#(Returns the Point corresponding to the <N>th solution on the second Shape)#"  , py::arg("N"))
        .def("SupportTypeShape1",
             (BRepExtrema_SupportType (BRepExtrema_DistShapeShape::*)( const Standard_Integer ) const) static_cast<BRepExtrema_SupportType (BRepExtrema_DistShapeShape::*)( const Standard_Integer ) const>(&BRepExtrema_DistShapeShape::SupportTypeShape1),
             R"#(gives the type of the support where the Nth solution on the first shape is situated: IsVertex => the Nth solution on the first shape is a Vertex IsOnEdge => the Nth soluion on the first shape is on a Edge IsInFace => the Nth solution on the first shape is inside a face the corresponding support is obtained by the method SupportOnShape1)#"  , py::arg("N"))
        .def("SupportTypeShape2",
             (BRepExtrema_SupportType (BRepExtrema_DistShapeShape::*)( const Standard_Integer ) const) static_cast<BRepExtrema_SupportType (BRepExtrema_DistShapeShape::*)( const Standard_Integer ) const>(&BRepExtrema_DistShapeShape::SupportTypeShape2),
             R"#(gives the type of the support where the Nth solution on the second shape is situated: IsVertex => the Nth solution on the second shape is a Vertex IsOnEdge => the Nth soluion on the secondt shape is on a Edge IsInFace => the Nth solution on the second shape is inside a face the corresponding support is obtained by the method SupportOnShape2)#"  , py::arg("N"))
        .def("SetFlag",
             (void (BRepExtrema_DistShapeShape::*)( const Extrema_ExtFlag ) ) static_cast<void (BRepExtrema_DistShapeShape::*)( const Extrema_ExtFlag ) >(&BRepExtrema_DistShapeShape::SetFlag),
             R"#(None)#"  , py::arg("F"))
        .def("SetAlgo",
             (void (BRepExtrema_DistShapeShape::*)( const Extrema_ExtAlgo ) ) static_cast<void (BRepExtrema_DistShapeShape::*)( const Extrema_ExtAlgo ) >(&BRepExtrema_DistShapeShape::SetAlgo),
             R"#(None)#"  , py::arg("A"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepExtrema_DistanceSS , shared_ptr<BRepExtrema_DistanceSS> >>(m.attr("BRepExtrema_DistanceSS"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const Bnd_Box &,const Bnd_Box &,const Standard_Real,const Extrema_ExtFlag,const Extrema_ExtAlgo >()  , py::arg("S1"),  py::arg("S2"),  py::arg("B1"),  py::arg("B2"),  py::arg("DstRef"),  py::arg("F")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("A")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const Bnd_Box &,const Bnd_Box &,const Standard_Real,const Standard_Real,const Extrema_ExtFlag,const Extrema_ExtAlgo >()  , py::arg("S1"),  py::arg("S2"),  py::arg("B1"),  py::arg("B2"),  py::arg("DstRef"),  py::arg("aDeflection"),  py::arg("F")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("A")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_DistanceSS::*)() const) static_cast<Standard_Boolean (BRepExtrema_DistanceSS::*)() const>(&BRepExtrema_DistanceSS::IsDone),
             R"#(True if the distance has been computed)#" )
        .def("DistValue",
             (Standard_Real (BRepExtrema_DistanceSS::*)() const) static_cast<Standard_Real (BRepExtrema_DistanceSS::*)() const>(&BRepExtrema_DistanceSS::DistValue),
             R"#(returns the distance value)#" )
        .def("Seq1Value",
             (const BRepExtrema_SeqOfSolution & (BRepExtrema_DistanceSS::*)() const) static_cast<const BRepExtrema_SeqOfSolution & (BRepExtrema_DistanceSS::*)() const>(&BRepExtrema_DistanceSS::Seq1Value),
             R"#(returns the list of solutions on the first shape)#" )
        .def("Seq2Value",
             (const BRepExtrema_SeqOfSolution & (BRepExtrema_DistanceSS::*)() const) static_cast<const BRepExtrema_SeqOfSolution & (BRepExtrema_DistanceSS::*)() const>(&BRepExtrema_DistanceSS::Seq2Value),
             R"#(returns the list of solutions on the second shape)#" )
        .def("SetFlag",
             (void (BRepExtrema_DistanceSS::*)( const Extrema_ExtFlag ) ) static_cast<void (BRepExtrema_DistanceSS::*)( const Extrema_ExtFlag ) >(&BRepExtrema_DistanceSS::SetFlag),
             R"#(sets the flag controlling minimum and maximum search)#"  , py::arg("F"))
        .def("SetAlgo",
             (void (BRepExtrema_DistanceSS::*)( const Extrema_ExtAlgo ) ) static_cast<void (BRepExtrema_DistanceSS::*)( const Extrema_ExtAlgo ) >(&BRepExtrema_DistanceSS::SetAlgo),
             R"#(sets the flag controlling ...)#"  , py::arg("A"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepExtrema_ElementFilter , shared_ptr<BRepExtrema_ElementFilter>>(m,"BRepExtrema_ElementFilter");

    static_cast<py::class_<BRepExtrema_ElementFilter , shared_ptr<BRepExtrema_ElementFilter> >>(m.attr("BRepExtrema_ElementFilter"))
    // constructors
    // custom constructors
    // methods
        .def("PreCheckElements",
             (BRepExtrema_ElementFilter::FilterResult (BRepExtrema_ElementFilter::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<BRepExtrema_ElementFilter::FilterResult (BRepExtrema_ElementFilter::*)( const Standard_Integer , const Standard_Integer ) >(&BRepExtrema_ElementFilter::PreCheckElements),
             R"#(Checks if two mesh elements should be tested for overlapping/intersection (used for detection correct/incorrect cases of shared edges and vertices).)#"  , py::arg(""),  py::arg(""))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepExtrema_ExtCC , shared_ptr<BRepExtrema_ExtCC> >>(m.attr("BRepExtrema_ExtCC"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_ExtCC::*)() const) static_cast<Standard_Boolean (BRepExtrema_ExtCC::*)() const>(&BRepExtrema_ExtCC::IsDone),
             R"#(True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (BRepExtrema_ExtCC::*)() const) static_cast<Standard_Integer (BRepExtrema_ExtCC::*)() const>(&BRepExtrema_ExtCC::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("IsParallel",
             (Standard_Boolean (BRepExtrema_ExtCC::*)() const) static_cast<Standard_Boolean (BRepExtrema_ExtCC::*)() const>(&BRepExtrema_ExtCC::IsParallel),
             R"#(Returns True if E1 and E2 are parallel.)#" )
        .def("SquareDistance",
             (Standard_Real (BRepExtrema_ExtCC::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepExtrema_ExtCC::*)( const Standard_Integer ) const>(&BRepExtrema_ExtCC::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepExtrema_ExtCF , shared_ptr<BRepExtrema_ExtCF> >>(m.attr("BRepExtrema_ExtCF"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_ExtCF::*)() const) static_cast<Standard_Boolean (BRepExtrema_ExtCF::*)() const>(&BRepExtrema_ExtCF::IsDone),
             R"#(True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (BRepExtrema_ExtCF::*)() const) static_cast<Standard_Integer (BRepExtrema_ExtCF::*)() const>(&BRepExtrema_ExtCF::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (BRepExtrema_ExtCF::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepExtrema_ExtCF::*)( const Standard_Integer ) const>(&BRepExtrema_ExtCF::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
        .def("IsParallel",
             (Standard_Boolean (BRepExtrema_ExtCF::*)() const) static_cast<Standard_Boolean (BRepExtrema_ExtCF::*)() const>(&BRepExtrema_ExtCF::IsParallel),
             R"#(Returns True if the curve is on a parallel surface.)#" )
        .def("ParameterOnEdge",
             (Standard_Real (BRepExtrema_ExtCF::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepExtrema_ExtCF::*)( const Standard_Integer ) const>(&BRepExtrema_ExtCF::ParameterOnEdge),
             R"#(Returns the parameters on the Edge of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("PointOnEdge",
             (gp_Pnt (BRepExtrema_ExtCF::*)( const Standard_Integer ) const) static_cast<gp_Pnt (BRepExtrema_ExtCF::*)( const Standard_Integer ) const>(&BRepExtrema_ExtCF::PointOnEdge),
             R"#(Returns the Point of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("PointOnFace",
             (gp_Pnt (BRepExtrema_ExtCF::*)( const Standard_Integer ) const) static_cast<gp_Pnt (BRepExtrema_ExtCF::*)( const Standard_Integer ) const>(&BRepExtrema_ExtCF::PointOnFace),
             R"#(Returns the Point of the <N>th extremum distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
        .def("ParameterOnFace",
             []( BRepExtrema_ExtCF &self , const Standard_Integer N ){ Standard_Real  U; Standard_Real  V; self.ParameterOnFace(N,U,V); return std::make_tuple(U,V); },
             R"#(Returns the parameters on the Face of the <N>th extremum distance.)#"  , py::arg("N"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepExtrema_ExtFF , shared_ptr<BRepExtrema_ExtFF> >>(m.attr("BRepExtrema_ExtFF"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_ExtFF::*)() const) static_cast<Standard_Boolean (BRepExtrema_ExtFF::*)() const>(&BRepExtrema_ExtFF::IsDone),
             R"#(True if the distances are found.)#" )
        .def("IsParallel",
             (Standard_Boolean (BRepExtrema_ExtFF::*)() const) static_cast<Standard_Boolean (BRepExtrema_ExtFF::*)() const>(&BRepExtrema_ExtFF::IsParallel),
             R"#(Returns True if the surfaces are parallel.)#" )
        .def("NbExt",
             (Standard_Integer (BRepExtrema_ExtFF::*)() const) static_cast<Standard_Integer (BRepExtrema_ExtFF::*)() const>(&BRepExtrema_ExtFF::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (BRepExtrema_ExtFF::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepExtrema_ExtFF::*)( const Standard_Integer ) const>(&BRepExtrema_ExtFF::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
        .def("PointOnFace1",
             (gp_Pnt (BRepExtrema_ExtFF::*)( const Standard_Integer ) const) static_cast<gp_Pnt (BRepExtrema_ExtFF::*)( const Standard_Integer ) const>(&BRepExtrema_ExtFF::PointOnFace1),
             R"#(Returns the Point of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("PointOnFace2",
             (gp_Pnt (BRepExtrema_ExtFF::*)( const Standard_Integer ) const) static_cast<gp_Pnt (BRepExtrema_ExtFF::*)( const Standard_Integer ) const>(&BRepExtrema_ExtFF::PointOnFace2),
             R"#(Returns the Point of the <N>th extremum distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
        .def("ParameterOnFace1",
             []( BRepExtrema_ExtFF &self , const Standard_Integer N ){ Standard_Real  U; Standard_Real  V; self.ParameterOnFace1(N,U,V); return std::make_tuple(U,V); },
             R"#(Returns the parameters on the Face F1 of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("ParameterOnFace2",
             []( BRepExtrema_ExtFF &self , const Standard_Integer N ){ Standard_Real  U; Standard_Real  V; self.ParameterOnFace2(N,U,V); return std::make_tuple(U,V); },
             R"#(Returns the parameters on the Face F2 of the <N>th extremum distance.)#"  , py::arg("N"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepExtrema_ExtPC , shared_ptr<BRepExtrema_ExtPC> >>(m.attr("BRepExtrema_ExtPC"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_ExtPC::*)() const) static_cast<Standard_Boolean (BRepExtrema_ExtPC::*)() const>(&BRepExtrema_ExtPC::IsDone),
             R"#(True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (BRepExtrema_ExtPC::*)() const) static_cast<Standard_Integer (BRepExtrema_ExtPC::*)() const>(&BRepExtrema_ExtPC::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("IsMin",
             (Standard_Boolean (BRepExtrema_ExtPC::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (BRepExtrema_ExtPC::*)( const Standard_Integer ) const>(&BRepExtrema_ExtPC::IsMin),
             R"#(Returns True if the <N>th extremum distance is a minimum.)#"  , py::arg("N"))
        .def("SquareDistance",
             (Standard_Real (BRepExtrema_ExtPC::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepExtrema_ExtPC::*)( const Standard_Integer ) const>(&BRepExtrema_ExtPC::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
        .def("Parameter",
             (Standard_Real (BRepExtrema_ExtPC::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepExtrema_ExtPC::*)( const Standard_Integer ) const>(&BRepExtrema_ExtPC::Parameter),
             R"#(Returns the parameter on the edge of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("Point",
             (gp_Pnt (BRepExtrema_ExtPC::*)( const Standard_Integer ) const) static_cast<gp_Pnt (BRepExtrema_ExtPC::*)( const Standard_Integer ) const>(&BRepExtrema_ExtPC::Point),
             R"#(Returns the Point of the <N>th extremum distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
        .def("TrimmedSquareDistances",
             []( BRepExtrema_ExtPC &self , gp_Pnt & pnt1,gp_Pnt & pnt2 ){ Standard_Real  dist1; Standard_Real  dist2; self.TrimmedSquareDistances(dist1,dist2,pnt1,pnt2); return std::make_tuple(dist1,dist2); },
             R"#(if the curve is a trimmed curve, dist1 is a square distance between <P> and the point of parameter FirstParameter <pnt1> and dist2 is a square distance between <P> and the point of parameter LastParameter <pnt2>.)#"  , py::arg("pnt1"),  py::arg("pnt2"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepExtrema_ExtPF , shared_ptr<BRepExtrema_ExtPF> >>(m.attr("BRepExtrema_ExtPF"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_ExtPF::*)() const) static_cast<Standard_Boolean (BRepExtrema_ExtPF::*)() const>(&BRepExtrema_ExtPF::IsDone),
             R"#(True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (BRepExtrema_ExtPF::*)() const) static_cast<Standard_Integer (BRepExtrema_ExtPF::*)() const>(&BRepExtrema_ExtPF::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (BRepExtrema_ExtPF::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepExtrema_ExtPF::*)( const Standard_Integer ) const>(&BRepExtrema_ExtPF::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
        .def("Point",
             (gp_Pnt (BRepExtrema_ExtPF::*)( const Standard_Integer ) const) static_cast<gp_Pnt (BRepExtrema_ExtPF::*)( const Standard_Integer ) const>(&BRepExtrema_ExtPF::Point),
             R"#(Returns the Point of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("SetFlag",
             (void (BRepExtrema_ExtPF::*)( const Extrema_ExtFlag ) ) static_cast<void (BRepExtrema_ExtPF::*)( const Extrema_ExtFlag ) >(&BRepExtrema_ExtPF::SetFlag),
             R"#(None)#"  , py::arg("F"))
        .def("SetAlgo",
             (void (BRepExtrema_ExtPF::*)( const Extrema_ExtAlgo ) ) static_cast<void (BRepExtrema_ExtPF::*)( const Extrema_ExtAlgo ) >(&BRepExtrema_ExtPF::SetAlgo),
             R"#(None)#"  , py::arg("A"))
    // methods using call by reference i.s.o. return
        .def("Parameter",
             []( BRepExtrema_ExtPF &self , const Standard_Integer N ){ Standard_Real  U; Standard_Real  V; self.Parameter(N,U,V); return std::make_tuple(U,V); },
             R"#(Returns the parameters on the Face of the <N>th extremum distance.)#"  , py::arg("N"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepExtrema_OverlapTool , shared_ptr<BRepExtrema_OverlapTool> >>(m.attr("BRepExtrema_OverlapTool"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_OverlapTool::*)() const) static_cast<Standard_Boolean (BRepExtrema_OverlapTool::*)() const>(&BRepExtrema_OverlapTool::IsDone),
             R"#(Is overlap test completed?)#" )
        .def("MarkDirty",
             (void (BRepExtrema_OverlapTool::*)() ) static_cast<void (BRepExtrema_OverlapTool::*)() >(&BRepExtrema_OverlapTool::MarkDirty),
             R"#(Marks test results as outdated.)#" )
        .def("OverlapSubShapes1",
             (const BRepExtrema_MapOfIntegerPackedMapOfInteger & (BRepExtrema_OverlapTool::*)() const) static_cast<const BRepExtrema_MapOfIntegerPackedMapOfInteger & (BRepExtrema_OverlapTool::*)() const>(&BRepExtrema_OverlapTool::OverlapSubShapes1),
             R"#(Returns set of overlapped sub-shapes of 1st shape (currently only faces are detected).)#" )
        .def("OverlapSubShapes2",
             (const BRepExtrema_MapOfIntegerPackedMapOfInteger & (BRepExtrema_OverlapTool::*)() const) static_cast<const BRepExtrema_MapOfIntegerPackedMapOfInteger & (BRepExtrema_OverlapTool::*)() const>(&BRepExtrema_OverlapTool::OverlapSubShapes2),
             R"#(Returns set of overlapped sub-shapes of 2nd shape (currently only faces are detected).)#" )
        .def("SetElementFilter",
             (void (BRepExtrema_OverlapTool::*)( BRepExtrema_ElementFilter * ) ) static_cast<void (BRepExtrema_OverlapTool::*)( BRepExtrema_ElementFilter * ) >(&BRepExtrema_OverlapTool::SetElementFilter),
             R"#(Sets filtering tool for preliminary checking pairs of mesh elements.)#"  , py::arg("theFilter"))
        .def("RejectNode",
             (Standard_Boolean (BRepExtrema_OverlapTool::*)(  const BVH::VectorType<Standard_Real, 3>::Type & ,  const BVH::VectorType<Standard_Real, 3>::Type & ,  const BVH::VectorType<Standard_Real, 3>::Type & ,  const BVH::VectorType<Standard_Real, 3>::Type & , Standard_Real & ) const) static_cast<Standard_Boolean (BRepExtrema_OverlapTool::*)(  const BVH::VectorType<Standard_Real, 3>::Type & ,  const BVH::VectorType<Standard_Real, 3>::Type & ,  const BVH::VectorType<Standard_Real, 3>::Type & ,  const BVH::VectorType<Standard_Real, 3>::Type & , Standard_Real & ) const>(&BRepExtrema_OverlapTool::RejectNode),
             R"#(Defines the rules for node rejection by bounding box)#"  , py::arg("theCornerMin1"),  py::arg("theCornerMax1"),  py::arg("theCornerMin2"),  py::arg("theCornerMax2"),  py::arg(""))
        .def("Accept",
             (Standard_Boolean (BRepExtrema_OverlapTool::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (BRepExtrema_OverlapTool::*)( const Standard_Integer , const Standard_Integer ) >(&BRepExtrema_OverlapTool::Accept),
             R"#(Defines the rules for leaf acceptance)#"  , py::arg("theLeaf1"),  py::arg("theLeaf2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepExtrema_Poly , shared_ptr<BRepExtrema_Poly>>(m,"BRepExtrema_Poly");

    static_cast<py::class_<BRepExtrema_Poly , shared_ptr<BRepExtrema_Poly> >>(m.attr("BRepExtrema_Poly"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepExtrema_ShapeProximity , shared_ptr<BRepExtrema_ShapeProximity> >>(m.attr("BRepExtrema_ShapeProximity"))
    // constructors
    // custom constructors
    // methods
        .def("Tolerance",
             (Standard_Real (BRepExtrema_ShapeProximity::*)() const) static_cast<Standard_Real (BRepExtrema_ShapeProximity::*)() const>(&BRepExtrema_ShapeProximity::Tolerance),
             R"#(Returns tolerance value for overlap test (distance between shapes).)#" )
        .def("SetTolerance",
             (void (BRepExtrema_ShapeProximity::*)( const Standard_Real ) ) static_cast<void (BRepExtrema_ShapeProximity::*)( const Standard_Real ) >(&BRepExtrema_ShapeProximity::SetTolerance),
             R"#(Sets tolerance value for overlap test (distance between shapes).)#"  , py::arg("theTolerance"))
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_ShapeProximity::*)() const) static_cast<Standard_Boolean (BRepExtrema_ShapeProximity::*)() const>(&BRepExtrema_ShapeProximity::IsDone),
             R"#(True if the search is completed.)#" )
        .def("OverlapSubShapes1",
             (const BRepExtrema_MapOfIntegerPackedMapOfInteger & (BRepExtrema_ShapeProximity::*)() const) static_cast<const BRepExtrema_MapOfIntegerPackedMapOfInteger & (BRepExtrema_ShapeProximity::*)() const>(&BRepExtrema_ShapeProximity::OverlapSubShapes1),
             R"#(Returns set of IDs of overlapped faces of 1st shape (started from 0).)#" )
        .def("OverlapSubShapes2",
             (const BRepExtrema_MapOfIntegerPackedMapOfInteger & (BRepExtrema_ShapeProximity::*)() const) static_cast<const BRepExtrema_MapOfIntegerPackedMapOfInteger & (BRepExtrema_ShapeProximity::*)() const>(&BRepExtrema_ShapeProximity::OverlapSubShapes2),
             R"#(Returns set of IDs of overlapped faces of 2nd shape (started from 0).)#" )
        .def("GetSubShape1",
             (const TopoDS_Face & (BRepExtrema_ShapeProximity::*)( const Standard_Integer ) const) static_cast<const TopoDS_Face & (BRepExtrema_ShapeProximity::*)( const Standard_Integer ) const>(&BRepExtrema_ShapeProximity::GetSubShape1),
             R"#(Returns sub-shape from 1st shape with the given index (started from 0).)#"  , py::arg("theID"))
        .def("GetSubShape2",
             (const TopoDS_Face & (BRepExtrema_ShapeProximity::*)( const Standard_Integer ) const) static_cast<const TopoDS_Face & (BRepExtrema_ShapeProximity::*)( const Standard_Integer ) const>(&BRepExtrema_ShapeProximity::GetSubShape2),
             R"#(Returns sub-shape from 1st shape with the given index (started from 0).)#"  , py::arg("theID"))
        .def("ElementSet1",
             (const opencascade::handle<BRepExtrema_TriangleSet> & (BRepExtrema_ShapeProximity::*)() const) static_cast<const opencascade::handle<BRepExtrema_TriangleSet> & (BRepExtrema_ShapeProximity::*)() const>(&BRepExtrema_ShapeProximity::ElementSet1),
             R"#(Returns set of all the face triangles of the 1st shape.)#" )
        .def("ElementSet2",
             (const opencascade::handle<BRepExtrema_TriangleSet> & (BRepExtrema_ShapeProximity::*)() const) static_cast<const opencascade::handle<BRepExtrema_TriangleSet> & (BRepExtrema_ShapeProximity::*)() const>(&BRepExtrema_ShapeProximity::ElementSet2),
             R"#(Returns set of all the face triangles of the 2nd shape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepExtrema_SolutionElem , shared_ptr<BRepExtrema_SolutionElem> >>(m.attr("BRepExtrema_SolutionElem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const gp_Pnt &,const BRepExtrema_SupportType,const TopoDS_Vertex & >()  , py::arg("theDist"),  py::arg("thePoint"),  py::arg("theSolType"),  py::arg("theVertex") )
        .def(py::init< const Standard_Real,const gp_Pnt &,const BRepExtrema_SupportType,const TopoDS_Edge &,const Standard_Real >()  , py::arg("theDist"),  py::arg("thePoint"),  py::arg("theSolType"),  py::arg("theEdge"),  py::arg("theParam") )
        .def(py::init< const Standard_Real,const gp_Pnt &,const BRepExtrema_SupportType,const TopoDS_Face &,const Standard_Real,const Standard_Real >()  , py::arg("theDist"),  py::arg("thePoint"),  py::arg("theSolType"),  py::arg("theFace"),  py::arg("theU"),  py::arg("theV") )
    // custom constructors
    // methods
        .def("Dist",
             (Standard_Real (BRepExtrema_SolutionElem::*)() const) static_cast<Standard_Real (BRepExtrema_SolutionElem::*)() const>(&BRepExtrema_SolutionElem::Dist),
             R"#(Returns the value of the minimum distance.)#" )
        .def("Point",
             (const gp_Pnt & (BRepExtrema_SolutionElem::*)() const) static_cast<const gp_Pnt & (BRepExtrema_SolutionElem::*)() const>(&BRepExtrema_SolutionElem::Point),
             R"#(Returns the solution point.)#" )
        .def("SupportKind",
             (BRepExtrema_SupportType (BRepExtrema_SolutionElem::*)() const) static_cast<BRepExtrema_SupportType (BRepExtrema_SolutionElem::*)() const>(&BRepExtrema_SolutionElem::SupportKind),
             R"#(Returns the Support type: IsVertex => The solution is a vertex. IsOnEdge => The solution belongs to an Edge. IsInFace => The solution is inside a Face.)#" )
        .def("Vertex",
             (const TopoDS_Vertex & (BRepExtrema_SolutionElem::*)() const) static_cast<const TopoDS_Vertex & (BRepExtrema_SolutionElem::*)() const>(&BRepExtrema_SolutionElem::Vertex),
             R"#(Returns the vertex if the solution is a Vertex.)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepExtrema_SolutionElem::*)() const) static_cast<const TopoDS_Edge & (BRepExtrema_SolutionElem::*)() const>(&BRepExtrema_SolutionElem::Edge),
             R"#(Returns the vertex if the solution is an Edge.)#" )
        .def("Face",
             (const TopoDS_Face & (BRepExtrema_SolutionElem::*)() const) static_cast<const TopoDS_Face & (BRepExtrema_SolutionElem::*)() const>(&BRepExtrema_SolutionElem::Face),
             R"#(Returns the vertex if the solution is an Face.)#" )
    // methods using call by reference i.s.o. return
        .def("EdgeParameter",
             []( BRepExtrema_SolutionElem &self   ){ Standard_Real  theParam; self.EdgeParameter(theParam); return std::make_tuple(theParam); },
             R"#(Returns the parameter value if the solution is on Edge.)#" )
        .def("FaceParameter",
             []( BRepExtrema_SolutionElem &self   ){ Standard_Real  theU; Standard_Real  theV; self.FaceParameter(theU,theV); return std::make_tuple(theU,theV); },
             R"#(Returns the parameters U and V if the solution is in a Face.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepExtrema_TriangleSet , shared_ptr<BRepExtrema_TriangleSet> >>(m.attr("BRepExtrema_TriangleSet"))
    // constructors
    // custom constructors
    // methods
        .def("Size",
             (Standard_Integer (BRepExtrema_TriangleSet::*)() const) static_cast<Standard_Integer (BRepExtrema_TriangleSet::*)() const>(&BRepExtrema_TriangleSet::Size),
             R"#(Returns total number of triangles.)#" )
        .def("Box",
             (BVH_Box<Standard_Real, 3> (BRepExtrema_TriangleSet::*)( const Standard_Integer ) const) static_cast<BVH_Box<Standard_Real, 3> (BRepExtrema_TriangleSet::*)( const Standard_Integer ) const>(&BRepExtrema_TriangleSet::Box),
             R"#(Returns AABB of the given triangle.)#"  , py::arg("theIndex"))
        .def("Center",
             (Standard_Real (BRepExtrema_TriangleSet::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (BRepExtrema_TriangleSet::*)( const Standard_Integer , const Standard_Integer ) const>(&BRepExtrema_TriangleSet::Center),
             R"#(Returns centroid position along specified axis.)#"  , py::arg("theIndex"),  py::arg("theAxis"))
        .def("Swap",
             (void (BRepExtrema_TriangleSet::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (BRepExtrema_TriangleSet::*)( const Standard_Integer , const Standard_Integer ) >(&BRepExtrema_TriangleSet::Swap),
             R"#(Swaps indices of two specified triangles.)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepExtrema_TriangleSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepExtrema_TriangleSet::*)() const>(&BRepExtrema_TriangleSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepExtrema_TriangleSet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepExtrema_SelfIntersection , shared_ptr<BRepExtrema_SelfIntersection> , BRepExtrema_ElementFilter>>(m.attr("BRepExtrema_SelfIntersection"))
    // constructors
    // custom constructors
    // methods
        .def("Tolerance",
             (Standard_Real (BRepExtrema_SelfIntersection::*)() const) static_cast<Standard_Real (BRepExtrema_SelfIntersection::*)() const>(&BRepExtrema_SelfIntersection::Tolerance),
             R"#(Returns tolerance value used for self-intersection test.)#" )
        .def("SetTolerance",
             (void (BRepExtrema_SelfIntersection::*)( const Standard_Real ) ) static_cast<void (BRepExtrema_SelfIntersection::*)( const Standard_Real ) >(&BRepExtrema_SelfIntersection::SetTolerance),
             R"#(Sets tolerance value used for self-intersection test.)#"  , py::arg("theTolerance"))
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_SelfIntersection::*)() const) static_cast<Standard_Boolean (BRepExtrema_SelfIntersection::*)() const>(&BRepExtrema_SelfIntersection::IsDone),
             R"#(True if the detection is completed.)#" )
        .def("OverlapElements",
             (const BRepExtrema_MapOfIntegerPackedMapOfInteger & (BRepExtrema_SelfIntersection::*)() const) static_cast<const BRepExtrema_MapOfIntegerPackedMapOfInteger & (BRepExtrema_SelfIntersection::*)() const>(&BRepExtrema_SelfIntersection::OverlapElements),
             R"#(Returns set of IDs of overlapped sub-shapes (started from 0).)#" )
        .def("GetSubShape",
             (const TopoDS_Face & (BRepExtrema_SelfIntersection::*)( const Standard_Integer ) const) static_cast<const TopoDS_Face & (BRepExtrema_SelfIntersection::*)( const Standard_Integer ) const>(&BRepExtrema_SelfIntersection::GetSubShape),
             R"#(Returns sub-shape from the shape for the given index (started from 0).)#"  , py::arg("theID"))
        .def("ElementSet",
             (const opencascade::handle<BRepExtrema_TriangleSet> & (BRepExtrema_SelfIntersection::*)() const) static_cast<const opencascade::handle<BRepExtrema_TriangleSet> & (BRepExtrema_SelfIntersection::*)() const>(&BRepExtrema_SelfIntersection::ElementSet),
             R"#(Returns set of all the face triangles of the shape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepExtrema_ExtPC.hxx
// ./opencascade/BRepExtrema_DistanceSS.hxx
// ./opencascade/BRepExtrema_ExtCC.hxx
// ./opencascade/BRepExtrema_SolutionElem.hxx
// ./opencascade/BRepExtrema_ShapeProximity.hxx
// ./opencascade/BRepExtrema_UnCompatibleShape.hxx
// ./opencascade/BRepExtrema_OverlapTool.hxx
// ./opencascade/BRepExtrema_TriangleSet.hxx
// ./opencascade/BRepExtrema_ExtFF.hxx
// ./opencascade/BRepExtrema_ExtPF.hxx
// ./opencascade/BRepExtrema_MapOfIntegerPackedMapOfInteger.hxx
// ./opencascade/BRepExtrema_ElementFilter.hxx
// ./opencascade/BRepExtrema_Poly.hxx
// ./opencascade/BRepExtrema_ExtCF.hxx
// ./opencascade/BRepExtrema_SeqOfSolution.hxx
// ./opencascade/BRepExtrema_SelfIntersection.hxx
// ./opencascade/BRepExtrema_SupportType.hxx
// ./opencascade/BRepExtrema_DistShapeShape.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Vector<TopoDS_Face>(m,"BRepExtrema_ShapeList");
    register_template_NCollection_Sequence<BRepExtrema_SolutionElem>(m,"BRepExtrema_SeqOfSolution");


// exceptions
register_occ_exception<BRepExtrema_UnCompatibleShape>(m, "BRepExtrema_UnCompatibleShape");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

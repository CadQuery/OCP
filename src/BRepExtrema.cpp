
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Bnd_Box.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <gp_Pnt.hxx>

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
// ./opencascade/BRepExtrema_SeqOfSolution.hxx
#include "NCollection.hxx"
// ./opencascade/BRepExtrema_TriangleSet.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepExtrema(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepExtrema"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepExtrema_DistanceSS ,std::unique_ptr<BRepExtrema_DistanceSS>  >>(m.attr("BRepExtrema_DistanceSS"))
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const Bnd_Box &,const Bnd_Box &,const Standard_Real,const Extrema_ExtFlag,const Extrema_ExtAlgo >()  , py::arg("S1"),  py::arg("S2"),  py::arg("B1"),  py::arg("B2"),  py::arg("DstRef"),  py::arg("F")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("A")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const Bnd_Box &,const Bnd_Box &,const Standard_Real,const Standard_Real,const Extrema_ExtFlag,const Extrema_ExtAlgo >()  , py::arg("S1"),  py::arg("S2"),  py::arg("B1"),  py::arg("B2"),  py::arg("DstRef"),  py::arg("aDeflection"),  py::arg("F")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("A")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
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
             (void (BRepExtrema_DistanceSS::*)( const Extrema_ExtFlag  ) ) static_cast<void (BRepExtrema_DistanceSS::*)( const Extrema_ExtFlag  ) >(&BRepExtrema_DistanceSS::SetFlag),
             R"#(sets the flag controlling minimum and maximum search)#"  , py::arg("F"))
        .def("SetAlgo",
             (void (BRepExtrema_DistanceSS::*)( const Extrema_ExtAlgo  ) ) static_cast<void (BRepExtrema_DistanceSS::*)( const Extrema_ExtAlgo  ) >(&BRepExtrema_DistanceSS::SetAlgo),
             R"#(sets the flag controlling ...)#"  , py::arg("A"))
;


    static_cast<py::class_<BRepExtrema_ExtPC ,std::unique_ptr<BRepExtrema_ExtPC>  >>(m.attr("BRepExtrema_ExtPC"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Vertex &,const TopoDS_Edge & >()  , py::arg("V"),  py::arg("E") )
        .def("Initialize",
             (void (BRepExtrema_ExtPC::*)( const TopoDS_Edge &  ) ) static_cast<void (BRepExtrema_ExtPC::*)( const TopoDS_Edge &  ) >(&BRepExtrema_ExtPC::Initialize),
             R"#(None)#"  , py::arg("E"))
        .def("Perform",
             (void (BRepExtrema_ExtPC::*)( const TopoDS_Vertex &  ) ) static_cast<void (BRepExtrema_ExtPC::*)( const TopoDS_Vertex &  ) >(&BRepExtrema_ExtPC::Perform),
             R"#(An exception is raised if the fields have not been initialized.)#"  , py::arg("V"))
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_ExtPC::*)() const) static_cast<Standard_Boolean (BRepExtrema_ExtPC::*)() const>(&BRepExtrema_ExtPC::IsDone),
             R"#(True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (BRepExtrema_ExtPC::*)() const) static_cast<Standard_Integer (BRepExtrema_ExtPC::*)() const>(&BRepExtrema_ExtPC::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("IsMin",
             (Standard_Boolean (BRepExtrema_ExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BRepExtrema_ExtPC::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtPC::IsMin),
             R"#(Returns True if the <N>th extremum distance is a minimum.)#"  , py::arg("N"))
        .def("SquareDistance",
             (Standard_Real (BRepExtrema_ExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (BRepExtrema_ExtPC::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtPC::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
        .def("Parameter",
             (Standard_Real (BRepExtrema_ExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (BRepExtrema_ExtPC::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtPC::Parameter),
             R"#(Returns the parameter on the edge of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("Point",
             (gp_Pnt (BRepExtrema_ExtPC::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (BRepExtrema_ExtPC::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtPC::Point),
             R"#(Returns the Point of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("TrimmedSquareDistances",
             (void (BRepExtrema_ExtPC::*)( Standard_Real & ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt &  ) const) static_cast<void (BRepExtrema_ExtPC::*)( Standard_Real & ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt &  ) const>(&BRepExtrema_ExtPC::TrimmedSquareDistances),
             R"#(if the curve is a trimmed curve, dist1 is a square distance between <P> and the point of parameter FirstParameter <pnt1> and dist2 is a square distance between <P> and the point of parameter LastParameter <pnt2>.)#"  , py::arg("dist1"),  py::arg("dist2"),  py::arg("pnt1"),  py::arg("pnt2"))
;


    static_cast<py::class_<BRepExtrema_ExtPF ,std::unique_ptr<BRepExtrema_ExtPF>  >>(m.attr("BRepExtrema_ExtPF"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Vertex &,const TopoDS_Face &,const Extrema_ExtFlag,const Extrema_ExtAlgo >()  , py::arg("TheVertex"),  py::arg("TheFace"),  py::arg("TheFlag")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("TheAlgo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
        .def("Initialize",
             (void (BRepExtrema_ExtPF::*)( const TopoDS_Face & ,  const Extrema_ExtFlag ,  const Extrema_ExtAlgo  ) ) static_cast<void (BRepExtrema_ExtPF::*)( const TopoDS_Face & ,  const Extrema_ExtFlag ,  const Extrema_ExtAlgo  ) >(&BRepExtrema_ExtPF::Initialize),
             R"#(None)#"  , py::arg("TheFace"),  py::arg("TheFlag")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("TheAlgo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad))
        .def("Perform",
             (void (BRepExtrema_ExtPF::*)( const TopoDS_Vertex & ,  const TopoDS_Face &  ) ) static_cast<void (BRepExtrema_ExtPF::*)( const TopoDS_Vertex & ,  const TopoDS_Face &  ) >(&BRepExtrema_ExtPF::Perform),
             R"#(An exception is raised if the fields have not been initialized. Be careful: this method uses the Face only for classify not for the fields.)#"  , py::arg("TheVertex"),  py::arg("TheFace"))
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_ExtPF::*)() const) static_cast<Standard_Boolean (BRepExtrema_ExtPF::*)() const>(&BRepExtrema_ExtPF::IsDone),
             R"#(True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (BRepExtrema_ExtPF::*)() const) static_cast<Standard_Integer (BRepExtrema_ExtPF::*)() const>(&BRepExtrema_ExtPF::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (BRepExtrema_ExtPF::*)( const Standard_Integer  ) const) static_cast<Standard_Real (BRepExtrema_ExtPF::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtPF::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
        .def("Parameter",
             (void (BRepExtrema_ExtPF::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BRepExtrema_ExtPF::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&BRepExtrema_ExtPF::Parameter),
             R"#(Returns the parameters on the Face of the <N>th extremum distance.)#"  , py::arg("N"),  py::arg("U"),  py::arg("V"))
        .def("Point",
             (gp_Pnt (BRepExtrema_ExtPF::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (BRepExtrema_ExtPF::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtPF::Point),
             R"#(Returns the Point of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("SetFlag",
             (void (BRepExtrema_ExtPF::*)( const Extrema_ExtFlag  ) ) static_cast<void (BRepExtrema_ExtPF::*)( const Extrema_ExtFlag  ) >(&BRepExtrema_ExtPF::SetFlag),
             R"#(None)#"  , py::arg("F"))
        .def("SetAlgo",
             (void (BRepExtrema_ExtPF::*)( const Extrema_ExtAlgo  ) ) static_cast<void (BRepExtrema_ExtPF::*)( const Extrema_ExtAlgo  ) >(&BRepExtrema_ExtPF::SetAlgo),
             R"#(None)#"  , py::arg("A"))
;


    static_cast<py::class_<BRepExtrema_ExtFF ,std::unique_ptr<BRepExtrema_ExtFF>  >>(m.attr("BRepExtrema_ExtFF"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face &,const TopoDS_Face & >()  , py::arg("F1"),  py::arg("F2") )
        .def("Initialize",
             (void (BRepExtrema_ExtFF::*)( const TopoDS_Face &  ) ) static_cast<void (BRepExtrema_ExtFF::*)( const TopoDS_Face &  ) >(&BRepExtrema_ExtFF::Initialize),
             R"#(None)#"  , py::arg("F2"))
        .def("Perform",
             (void (BRepExtrema_ExtFF::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<void (BRepExtrema_ExtFF::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) >(&BRepExtrema_ExtFF::Perform),
             R"#(An exception is raised if the fields have not been initialized. Be careful: this method uses the Face F2 only for classify, not for the fields.)#"  , py::arg("F1"),  py::arg("F2"))
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
             (Standard_Real (BRepExtrema_ExtFF::*)( const Standard_Integer  ) const) static_cast<Standard_Real (BRepExtrema_ExtFF::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtFF::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
        .def("ParameterOnFace1",
             (void (BRepExtrema_ExtFF::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BRepExtrema_ExtFF::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&BRepExtrema_ExtFF::ParameterOnFace1),
             R"#(Returns the parameters on the Face F1 of the <N>th extremum distance.)#"  , py::arg("N"),  py::arg("U"),  py::arg("V"))
        .def("ParameterOnFace2",
             (void (BRepExtrema_ExtFF::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BRepExtrema_ExtFF::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&BRepExtrema_ExtFF::ParameterOnFace2),
             R"#(Returns the parameters on the Face F2 of the <N>th extremum distance.)#"  , py::arg("N"),  py::arg("U"),  py::arg("V"))
        .def("PointOnFace1",
             (gp_Pnt (BRepExtrema_ExtFF::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (BRepExtrema_ExtFF::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtFF::PointOnFace1),
             R"#(Returns the Point of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("PointOnFace2",
             (gp_Pnt (BRepExtrema_ExtFF::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (BRepExtrema_ExtFF::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtFF::PointOnFace2),
             R"#(Returns the Point of the <N>th extremum distance.)#"  , py::arg("N"))
;


    static_cast<py::class_<BRepExtrema_DistShapeShape ,std::unique_ptr<BRepExtrema_DistShapeShape>  >>(m.attr("BRepExtrema_DistShapeShape"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const Extrema_ExtFlag,const Extrema_ExtAlgo >()  , py::arg("Shape1"),  py::arg("Shape2"),  py::arg("F")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("A")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const Standard_Real,const Extrema_ExtFlag,const Extrema_ExtAlgo >()  , py::arg("Shape1"),  py::arg("Shape2"),  py::arg("theDeflection"),  py::arg("F")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("A")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
        .def("SetDeflection",
             (void (BRepExtrema_DistShapeShape::*)( const Standard_Real  ) ) static_cast<void (BRepExtrema_DistShapeShape::*)( const Standard_Real  ) >(&BRepExtrema_DistShapeShape::SetDeflection),
             R"#(None)#"  , py::arg("theDeflection"))
        .def("LoadS1",
             (void (BRepExtrema_DistShapeShape::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepExtrema_DistShapeShape::*)( const TopoDS_Shape &  ) >(&BRepExtrema_DistShapeShape::LoadS1),
             R"#(load first shape into extrema)#"  , py::arg("Shape1"))
        .def("LoadS2",
             (void (BRepExtrema_DistShapeShape::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepExtrema_DistShapeShape::*)( const TopoDS_Shape &  ) >(&BRepExtrema_DistShapeShape::LoadS2),
             R"#(load second shape into extrema)#"  , py::arg("Shape1"))
        .def("Perform",
             (Standard_Boolean (BRepExtrema_DistShapeShape::*)() ) static_cast<Standard_Boolean (BRepExtrema_DistShapeShape::*)() >(&BRepExtrema_DistShapeShape::Perform),
             R"#(computation of the minimum distance (value and couple of points). Parameter theDeflection is used to specify a maximum deviation of extreme distances from the minimum one. Returns IsDone status.)#" )
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_DistShapeShape::*)() const) static_cast<Standard_Boolean (BRepExtrema_DistShapeShape::*)() const>(&BRepExtrema_DistShapeShape::IsDone),
             R"#(True if the minimum distance is found.)#" )
        .def("NbSolution",
             (Standard_Integer (BRepExtrema_DistShapeShape::*)() const) static_cast<Standard_Integer (BRepExtrema_DistShapeShape::*)() const>(&BRepExtrema_DistShapeShape::NbSolution),
             R"#(Returns the number of solutions satisfying the minimum distance.)#" )
        .def("Value",
             (Standard_Real (BRepExtrema_DistShapeShape::*)() const) static_cast<Standard_Real (BRepExtrema_DistShapeShape::*)() const>(&BRepExtrema_DistShapeShape::Value),
             R"#(Returns the value of the minimum distance.)#" )
        .def("InnerSolution",
             (Standard_Boolean (BRepExtrema_DistShapeShape::*)() const) static_cast<Standard_Boolean (BRepExtrema_DistShapeShape::*)() const>(&BRepExtrema_DistShapeShape::InnerSolution),
             R"#(True if one of the shapes is a solid and the other shape is completely or partially inside the solid.)#" )
        .def("PointOnShape1",
             (const gp_Pnt & (BRepExtrema_DistShapeShape::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt & (BRepExtrema_DistShapeShape::*)( const Standard_Integer  ) const>(&BRepExtrema_DistShapeShape::PointOnShape1),
             R"#(Returns the Point corresponding to the <N>th solution on the first Shape)#"  , py::arg("N"))
        .def("PointOnShape2",
             (const gp_Pnt & (BRepExtrema_DistShapeShape::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt & (BRepExtrema_DistShapeShape::*)( const Standard_Integer  ) const>(&BRepExtrema_DistShapeShape::PointOnShape2),
             R"#(Returns the Point corresponding to the <N>th solution on the second Shape)#"  , py::arg("N"))
        .def("SupportTypeShape1",
             (BRepExtrema_SupportType (BRepExtrema_DistShapeShape::*)( const Standard_Integer  ) const) static_cast<BRepExtrema_SupportType (BRepExtrema_DistShapeShape::*)( const Standard_Integer  ) const>(&BRepExtrema_DistShapeShape::SupportTypeShape1),
             R"#(gives the type of the support where the Nth solution on the first shape is situated: IsVertex => the Nth solution on the first shape is a Vertex IsOnEdge => the Nth soluion on the first shape is on a Edge IsInFace => the Nth solution on the first shape is inside a face the corresponding support is obtained by the method SupportOnShape1)#"  , py::arg("N"))
        .def("SupportTypeShape2",
             (BRepExtrema_SupportType (BRepExtrema_DistShapeShape::*)( const Standard_Integer  ) const) static_cast<BRepExtrema_SupportType (BRepExtrema_DistShapeShape::*)( const Standard_Integer  ) const>(&BRepExtrema_DistShapeShape::SupportTypeShape2),
             R"#(gives the type of the support where the Nth solution on the second shape is situated: IsVertex => the Nth solution on the second shape is a Vertex IsOnEdge => the Nth soluion on the secondt shape is on a Edge IsInFace => the Nth solution on the second shape is inside a face the corresponding support is obtained by the method SupportOnShape2)#"  , py::arg("N"))
        .def("SupportOnShape1",
             (TopoDS_Shape (BRepExtrema_DistShapeShape::*)( const Standard_Integer  ) const) static_cast<TopoDS_Shape (BRepExtrema_DistShapeShape::*)( const Standard_Integer  ) const>(&BRepExtrema_DistShapeShape::SupportOnShape1),
             R"#(gives the support where the Nth solution on the first shape is situated. This support can be a Vertex, an Edge or a Face.)#"  , py::arg("N"))
        .def("SupportOnShape2",
             (TopoDS_Shape (BRepExtrema_DistShapeShape::*)( const Standard_Integer  ) const) static_cast<TopoDS_Shape (BRepExtrema_DistShapeShape::*)( const Standard_Integer  ) const>(&BRepExtrema_DistShapeShape::SupportOnShape2),
             R"#(gives the support where the Nth solution on the second shape is situated. This support can be a Vertex, an Edge or a Face.)#"  , py::arg("N"))
        .def("ParOnEdgeS1",
             (void (BRepExtrema_DistShapeShape::*)( const Standard_Integer ,  Standard_Real &  ) const) static_cast<void (BRepExtrema_DistShapeShape::*)( const Standard_Integer ,  Standard_Real &  ) const>(&BRepExtrema_DistShapeShape::ParOnEdgeS1),
             R"#(gives the corresponding parameter t if the Nth solution is situated on an Egde of the first shape)#"  , py::arg("N"),  py::arg("t"))
        .def("ParOnEdgeS2",
             (void (BRepExtrema_DistShapeShape::*)( const Standard_Integer ,  Standard_Real &  ) const) static_cast<void (BRepExtrema_DistShapeShape::*)( const Standard_Integer ,  Standard_Real &  ) const>(&BRepExtrema_DistShapeShape::ParOnEdgeS2),
             R"#(gives the corresponding parameter t if the Nth solution is situated on an Egde of the first shape)#"  , py::arg("N"),  py::arg("t"))
        .def("ParOnFaceS1",
             (void (BRepExtrema_DistShapeShape::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BRepExtrema_DistShapeShape::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&BRepExtrema_DistShapeShape::ParOnFaceS1),
             R"#(gives the corresponding parameters (U,V) if the Nth solution is situated on an face of the first shape)#"  , py::arg("N"),  py::arg("u"),  py::arg("v"))
        .def("ParOnFaceS2",
             (void (BRepExtrema_DistShapeShape::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BRepExtrema_DistShapeShape::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&BRepExtrema_DistShapeShape::ParOnFaceS2),
             R"#(gives the corresponding parameters (U,V) if the Nth solution is situated on an Face of the second shape)#"  , py::arg("N"),  py::arg("u"),  py::arg("v"))
        .def("Dump",
             (void (BRepExtrema_DistShapeShape::*)( std::ostream &  ) const) static_cast<void (BRepExtrema_DistShapeShape::*)( std::ostream &  ) const>(&BRepExtrema_DistShapeShape::Dump),
             R"#(Prints on the stream o information on the current state of the object.)#"  , py::arg("o"))
        .def("SetFlag",
             (void (BRepExtrema_DistShapeShape::*)( const Extrema_ExtFlag  ) ) static_cast<void (BRepExtrema_DistShapeShape::*)( const Extrema_ExtFlag  ) >(&BRepExtrema_DistShapeShape::SetFlag),
             R"#(None)#"  , py::arg("F"))
        .def("SetAlgo",
             (void (BRepExtrema_DistShapeShape::*)( const Extrema_ExtAlgo  ) ) static_cast<void (BRepExtrema_DistShapeShape::*)( const Extrema_ExtAlgo  ) >(&BRepExtrema_DistShapeShape::SetAlgo),
             R"#(None)#"  , py::arg("A"))
;


    static_cast<py::class_<BRepExtrema_SolutionElem ,std::unique_ptr<BRepExtrema_SolutionElem>  >>(m.attr("BRepExtrema_SolutionElem"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const gp_Pnt &,const BRepExtrema_SupportType,const TopoDS_Vertex & >()  , py::arg("theDist"),  py::arg("thePoint"),  py::arg("theSolType"),  py::arg("theVertex") )
        .def(py::init< const Standard_Real,const gp_Pnt &,const BRepExtrema_SupportType,const TopoDS_Edge &,const Standard_Real >()  , py::arg("theDist"),  py::arg("thePoint"),  py::arg("theSolType"),  py::arg("theEdge"),  py::arg("theParam") )
        .def(py::init< const Standard_Real,const gp_Pnt &,const BRepExtrema_SupportType,const TopoDS_Face &,const Standard_Real,const Standard_Real >()  , py::arg("theDist"),  py::arg("thePoint"),  py::arg("theSolType"),  py::arg("theFace"),  py::arg("theU"),  py::arg("theV") )
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
        .def("EdgeParameter",
             (void (BRepExtrema_SolutionElem::*)( Standard_Real &  ) const) static_cast<void (BRepExtrema_SolutionElem::*)( Standard_Real &  ) const>(&BRepExtrema_SolutionElem::EdgeParameter),
             R"#(Returns the parameter value if the solution is on Edge.)#"  , py::arg("theParam"))
        .def("FaceParameter",
             (void (BRepExtrema_SolutionElem::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BRepExtrema_SolutionElem::*)( Standard_Real & ,  Standard_Real &  ) const>(&BRepExtrema_SolutionElem::FaceParameter),
             R"#(Returns the parameters U and V if the solution is in a Face.)#"  , py::arg("theU"),  py::arg("theV"))
;


    static_cast<py::class_<BRepExtrema_ExtCF ,std::unique_ptr<BRepExtrema_ExtCF>  >>(m.attr("BRepExtrema_ExtCF"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Face & >()  , py::arg("E"),  py::arg("F") )
        .def("Initialize",
             (void (BRepExtrema_ExtCF::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepExtrema_ExtCF::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepExtrema_ExtCF::Initialize),
             R"#(None)#"  , py::arg("E"),  py::arg("F"))
        .def("Perform",
             (void (BRepExtrema_ExtCF::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepExtrema_ExtCF::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepExtrema_ExtCF::Perform),
             R"#(An exception is raised if the fields have not been initialized. Be careful: this method uses the Face only for classify not for the fields.)#"  , py::arg("E"),  py::arg("F"))
        .def("IsDone",
             (Standard_Boolean (BRepExtrema_ExtCF::*)() const) static_cast<Standard_Boolean (BRepExtrema_ExtCF::*)() const>(&BRepExtrema_ExtCF::IsDone),
             R"#(True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (BRepExtrema_ExtCF::*)() const) static_cast<Standard_Integer (BRepExtrema_ExtCF::*)() const>(&BRepExtrema_ExtCF::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (BRepExtrema_ExtCF::*)( const Standard_Integer  ) const) static_cast<Standard_Real (BRepExtrema_ExtCF::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtCF::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
        .def("IsParallel",
             (Standard_Boolean (BRepExtrema_ExtCF::*)() const) static_cast<Standard_Boolean (BRepExtrema_ExtCF::*)() const>(&BRepExtrema_ExtCF::IsParallel),
             R"#(Returns True if the curve is on a parallel surface.)#" )
        .def("ParameterOnEdge",
             (Standard_Real (BRepExtrema_ExtCF::*)( const Standard_Integer  ) const) static_cast<Standard_Real (BRepExtrema_ExtCF::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtCF::ParameterOnEdge),
             R"#(Returns the parameters on the Edge of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("ParameterOnFace",
             (void (BRepExtrema_ExtCF::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BRepExtrema_ExtCF::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&BRepExtrema_ExtCF::ParameterOnFace),
             R"#(Returns the parameters on the Face of the <N>th extremum distance.)#"  , py::arg("N"),  py::arg("U"),  py::arg("V"))
        .def("PointOnEdge",
             (gp_Pnt (BRepExtrema_ExtCF::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (BRepExtrema_ExtCF::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtCF::PointOnEdge),
             R"#(Returns the Point of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("PointOnFace",
             (gp_Pnt (BRepExtrema_ExtCF::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (BRepExtrema_ExtCF::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtCF::PointOnFace),
             R"#(Returns the Point of the <N>th extremum distance.)#"  , py::arg("N"))
;


    static_cast<py::class_<BRepExtrema_ExtCC ,std::unique_ptr<BRepExtrema_ExtCC>  >>(m.attr("BRepExtrema_ExtCC"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge & >()  , py::arg("E1"),  py::arg("E2") )
        .def("Initialize",
             (void (BRepExtrema_ExtCC::*)( const TopoDS_Edge &  ) ) static_cast<void (BRepExtrema_ExtCC::*)( const TopoDS_Edge &  ) >(&BRepExtrema_ExtCC::Initialize),
             R"#(None)#"  , py::arg("E2"))
        .def("Perform",
             (void (BRepExtrema_ExtCC::*)( const TopoDS_Edge &  ) ) static_cast<void (BRepExtrema_ExtCC::*)( const TopoDS_Edge &  ) >(&BRepExtrema_ExtCC::Perform),
             R"#(An exception is raised if the fields have not been initialized.)#"  , py::arg("E1"))
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
             (Standard_Real (BRepExtrema_ExtCC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (BRepExtrema_ExtCC::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtCC::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
        .def("ParameterOnE1",
             (Standard_Real (BRepExtrema_ExtCC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (BRepExtrema_ExtCC::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtCC::ParameterOnE1),
             R"#(Returns the parameter on the first edge of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("PointOnE1",
             (gp_Pnt (BRepExtrema_ExtCC::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (BRepExtrema_ExtCC::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtCC::PointOnE1),
             R"#(Returns the Point of the <N>th extremum distance on the edge E1.)#"  , py::arg("N"))
        .def("ParameterOnE2",
             (Standard_Real (BRepExtrema_ExtCC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (BRepExtrema_ExtCC::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtCC::ParameterOnE2),
             R"#(Returns the parameter on the second edge of the <N>th extremum distance.)#"  , py::arg("N"))
        .def("PointOnE2",
             (gp_Pnt (BRepExtrema_ExtCC::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (BRepExtrema_ExtCC::*)( const Standard_Integer  ) const>(&BRepExtrema_ExtCC::PointOnE2),
             R"#(Returns the Point of the <N>th extremum distance on the edge E2.)#"  , py::arg("N"))
        .def("TrimmedSquareDistances",
             (void (BRepExtrema_ExtCC::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt &  ) const) static_cast<void (BRepExtrema_ExtCC::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt &  ) const>(&BRepExtrema_ExtCC::TrimmedSquareDistances),
             R"#(if the edges is a trimmed curve, dist11 is a square distance between the point on E1 of parameter FirstParameter and the point of parameter FirstParameter on E2.)#"  , py::arg("dist11"),  py::arg("distP12"),  py::arg("distP21"),  py::arg("distP22"),  py::arg("P11"),  py::arg("P12"),  py::arg("P21"),  py::arg("P22"))
;

// functions
// ./opencascade/BRepExtrema_DistanceSS.hxx
// ./opencascade/BRepExtrema_DistShapeShape.hxx
// ./opencascade/BRepExtrema_SeqOfSolution.hxx
// ./opencascade/BRepExtrema_OverlapTool.hxx
// ./opencascade/BRepExtrema_SelfIntersection.hxx
// ./opencascade/BRepExtrema_ShapeProximity.hxx
// ./opencascade/BRepExtrema_SolutionElem.hxx
// ./opencascade/BRepExtrema_ExtPC.hxx
// ./opencascade/BRepExtrema_ExtCC.hxx
// ./opencascade/BRepExtrema_ExtPF.hxx
// ./opencascade/BRepExtrema_ExtCF.hxx
// ./opencascade/BRepExtrema_ExtFF.hxx
// ./opencascade/BRepExtrema_TriangleSet.hxx
// ./opencascade/BRepExtrema_UnCompatibleShape.hxx
// ./opencascade/BRepExtrema_ElementFilter.hxx
// ./opencascade/BRepExtrema_SupportType.hxx
// ./opencascade/BRepExtrema_MapOfIntegerPackedMapOfInteger.hxx
// ./opencascade/BRepExtrema_Poly.hxx

// operators

// register typdefs
// ./opencascade/BRepExtrema_DistanceSS.hxx
// ./opencascade/BRepExtrema_DistShapeShape.hxx
// ./opencascade/BRepExtrema_SeqOfSolution.hxx
    register_template_NCollection_Sequence<BRepExtrema_SolutionElem>(m,"BRepExtrema_SeqOfSolution");  
// ./opencascade/BRepExtrema_OverlapTool.hxx
// ./opencascade/BRepExtrema_SelfIntersection.hxx
// ./opencascade/BRepExtrema_ShapeProximity.hxx
// ./opencascade/BRepExtrema_SolutionElem.hxx
// ./opencascade/BRepExtrema_ExtPC.hxx
// ./opencascade/BRepExtrema_ExtCC.hxx
// ./opencascade/BRepExtrema_ExtPF.hxx
// ./opencascade/BRepExtrema_ExtCF.hxx
// ./opencascade/BRepExtrema_ExtFF.hxx
// ./opencascade/BRepExtrema_TriangleSet.hxx
    register_template_NCollection_Vector<TopoDS_Face>(m,"BRepExtrema_ShapeList");  
// ./opencascade/BRepExtrema_UnCompatibleShape.hxx
// ./opencascade/BRepExtrema_ElementFilter.hxx
// ./opencascade/BRepExtrema_SupportType.hxx
// ./opencascade/BRepExtrema_MapOfIntegerPackedMapOfInteger.hxx
// ./opencascade/BRepExtrema_Poly.hxx


// exceptions
register_occ_exception<BRepExtrema_UnCompatibleShape>(m, "BRepExtrema_UnCompatibleShape");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

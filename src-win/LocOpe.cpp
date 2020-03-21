
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NullObject.hxx>
#include <LocOpe_WiresOnShape.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <StdFail_NotDone.hxx>
#include <LocOpe_GeneratedShape.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Ax1.hxx>
#include <gp_Circ.hxx>
#include <StdFail_NotDone.hxx>
#include <LocOpe_PntFace.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <LocOpe_SplitShape.hxx>
#include <LocOpe_WiresOnShape.hxx>
#include <LocOpe_Spliter.hxx>
#include <LocOpe_Generator.hxx>
#include <LocOpe_GeneratedShape.hxx>
#include <LocOpe_GluedShape.hxx>
#include <LocOpe_Prism.hxx>
#include <LocOpe_Revol.hxx>
#include <LocOpe_Pipe.hxx>
#include <LocOpe_DPrism.hxx>
#include <LocOpe_LinearForm.hxx>
#include <LocOpe_RevolutionForm.hxx>
#include <LocOpe_Gluer.hxx>
#include <LocOpe_FindEdges.hxx>
#include <LocOpe_FindEdgesInFace.hxx>
#include <LocOpe_PntFace.hxx>
#include <LocOpe_CurveShapeIntersector.hxx>
#include <LocOpe_CSIntersector.hxx>
#include <LocOpe_BuildShape.hxx>
#include <LocOpe_SplitDrafts.hxx>
#include <LocOpe_BuildWires.hxx>
#include <StdFail_NotDone.hxx>
#include <LocOpe_WiresOnShape.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <gp_Pln.hxx>

// module includes
#include <LocOpe.hxx>
#include <LocOpe_BuildShape.hxx>
#include <LocOpe_BuildWires.hxx>
#include <LocOpe_CSIntersector.hxx>
#include <LocOpe_CurveShapeIntersector.hxx>
#include <LocOpe_DataMapIteratorOfDataMapOfShapePnt.hxx>
#include <LocOpe_DataMapOfShapePnt.hxx>
#include <LocOpe_DPrism.hxx>
#include <LocOpe_FindEdges.hxx>
#include <LocOpe_FindEdgesInFace.hxx>
#include <LocOpe_GeneratedShape.hxx>
#include <LocOpe_Generator.hxx>
#include <LocOpe_GluedShape.hxx>
#include <LocOpe_Gluer.hxx>
#include <LocOpe_LinearForm.hxx>
#include <LocOpe_Operation.hxx>
#include <LocOpe_Pipe.hxx>
#include <LocOpe_PntFace.hxx>
#include <LocOpe_Prism.hxx>
#include <LocOpe_Revol.hxx>
#include <LocOpe_RevolutionForm.hxx>
#include <LocOpe_SequenceOfCirc.hxx>
#include <LocOpe_SequenceOfLin.hxx>
#include <LocOpe_SequenceOfPntFace.hxx>
#include <LocOpe_SplitDrafts.hxx>
#include <LocOpe_Spliter.hxx>
#include <LocOpe_SplitShape.hxx>
#include <LocOpe_WiresOnShape.hxx>

// template related includes
// ./opencascade\LocOpe_SequenceOfLin.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\LocOpe_SequenceOfPntFace.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\LocOpe_DataMapOfShapePnt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\LocOpe_DataMapOfShapePnt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\LocOpe_SequenceOfCirc.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_LocOpe(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("LocOpe"));


//Python trampoline classes
    class Py_LocOpe_GeneratedShape : public LocOpe_GeneratedShape{
    public:
        using LocOpe_GeneratedShape::LocOpe_GeneratedShape;


        // public pure virtual
        const TopTools_ListOfShape & GeneratingEdges() override { PYBIND11_OVERLOAD_PURE(const TopTools_ListOfShape &,LocOpe_GeneratedShape,GeneratingEdges,) };
        TopoDS_Edge Generated(const TopoDS_Vertex & V) override { PYBIND11_OVERLOAD_PURE(TopoDS_Edge,LocOpe_GeneratedShape,Generated,V) };
        TopoDS_Face Generated(const TopoDS_Edge & E) override { PYBIND11_OVERLOAD_PURE(TopoDS_Face,LocOpe_GeneratedShape,Generated,E) };
        const TopTools_ListOfShape & OrientedFaces() override { PYBIND11_OVERLOAD_PURE(const TopTools_ListOfShape &,LocOpe_GeneratedShape,OrientedFaces,) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<LocOpe , shared_ptr<LocOpe>>(m,"LocOpe");

    static_cast<py::class_<LocOpe , shared_ptr<LocOpe> >>(m.attr("LocOpe"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Closed_s",
                    (Standard_Boolean (*)( const TopoDS_Wire & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Wire & , const TopoDS_Face & ) >(&LocOpe::Closed),
                    R"#(Returns Standard_True when the wire <W> is closed on the face <OnF>.)#"  , py::arg("W"),  py::arg("OnF"))
        .def_static("Closed_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&LocOpe::Closed),
                    R"#(Returns Standard_True when the edge <E> is closed on the face <OnF>.)#"  , py::arg("E"),  py::arg("OnF"))
        .def_static("TgtFaces_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&LocOpe::TgtFaces),
                    R"#(Returns Standard_True when the faces are tangent)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"))
        .def_static("SampleEdges_s",
                    (void (*)( const TopoDS_Shape & , NCollection_Sequence<gp_Pnt> & ) ) static_cast<void (*)( const TopoDS_Shape & , NCollection_Sequence<gp_Pnt> & ) >(&LocOpe::SampleEdges),
                    R"#(None)#"  , py::arg("S"),  py::arg("Pt"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_BuildShape , shared_ptr<LocOpe_BuildShape> >>(m.attr("LocOpe_BuildShape"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_List<TopoDS_Shape> & >()  , py::arg("L") )
    // custom constructors
    // methods
        .def("Perform",
             (void (LocOpe_BuildShape::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (LocOpe_BuildShape::*)(  const NCollection_List<TopoDS_Shape> & ) >(&LocOpe_BuildShape::Perform),
             R"#(Builds shape(s) from the list <L>. Uses only the faces of <L>.)#"  , py::arg("L"))
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_BuildShape::*)() const) static_cast<const TopoDS_Shape & (LocOpe_BuildShape::*)() const>(&LocOpe_BuildShape::Shape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_BuildShape::*)() const) static_cast<const TopoDS_Shape & (LocOpe_BuildShape::*)() const>(&LocOpe_BuildShape::Shape),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_BuildWires , shared_ptr<LocOpe_BuildWires> >>(m.attr("LocOpe_BuildWires"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_List<TopoDS_Shape> &,const opencascade::handle<LocOpe_WiresOnShape> & >()  , py::arg("Ledges"),  py::arg("PW") )
    // custom constructors
    // methods
        .def("Perform",
             (void (LocOpe_BuildWires::*)(  const NCollection_List<TopoDS_Shape> & , const opencascade::handle<LocOpe_WiresOnShape> & ) ) static_cast<void (LocOpe_BuildWires::*)(  const NCollection_List<TopoDS_Shape> & , const opencascade::handle<LocOpe_WiresOnShape> & ) >(&LocOpe_BuildWires::Perform),
             R"#(None)#"  , py::arg("Ledges"),  py::arg("PW"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_BuildWires::*)() const) static_cast<Standard_Boolean (LocOpe_BuildWires::*)() const>(&LocOpe_BuildWires::IsDone),
             R"#(None)#" )
        .def("Result",
             (const TopTools_ListOfShape & (LocOpe_BuildWires::*)() const) static_cast<const TopTools_ListOfShape & (LocOpe_BuildWires::*)() const>(&LocOpe_BuildWires::Result),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_CSIntersector , shared_ptr<LocOpe_CSIntersector> >>(m.attr("LocOpe_CSIntersector"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Init",
             (void (LocOpe_CSIntersector::*)( const TopoDS_Shape & ) ) static_cast<void (LocOpe_CSIntersector::*)( const TopoDS_Shape & ) >(&LocOpe_CSIntersector::Init),
             R"#(Performs the intersection between <Ax1 and <S>.)#"  , py::arg("S"))
        .def("Perform",
             (void (LocOpe_CSIntersector::*)(  const NCollection_Sequence<gp_Lin> & ) ) static_cast<void (LocOpe_CSIntersector::*)(  const NCollection_Sequence<gp_Lin> & ) >(&LocOpe_CSIntersector::Perform),
             R"#(None)#"  , py::arg("Slin"))
        .def("Perform",
             (void (LocOpe_CSIntersector::*)(  const NCollection_Sequence<gp_Circ> & ) ) static_cast<void (LocOpe_CSIntersector::*)(  const NCollection_Sequence<gp_Circ> & ) >(&LocOpe_CSIntersector::Perform),
             R"#(None)#"  , py::arg("Scir"))
        .def("Perform",
             (void (LocOpe_CSIntersector::*)(  const NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) ) static_cast<void (LocOpe_CSIntersector::*)(  const NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) >(&LocOpe_CSIntersector::Perform),
             R"#(None)#"  , py::arg("Scur"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_CSIntersector::*)() const) static_cast<Standard_Boolean (LocOpe_CSIntersector::*)() const>(&LocOpe_CSIntersector::IsDone),
             R"#(Returns <Standard_True> if the intersection has been done.)#" )
        .def("NbPoints",
             (Standard_Integer (LocOpe_CSIntersector::*)( const Standard_Integer ) const) static_cast<Standard_Integer (LocOpe_CSIntersector::*)( const Standard_Integer ) const>(&LocOpe_CSIntersector::NbPoints),
             R"#(Returns the number of intersection point on the element of range <I>.)#"  , py::arg("I"))
        .def("Point",
             (const LocOpe_PntFace & (LocOpe_CSIntersector::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const LocOpe_PntFace & (LocOpe_CSIntersector::*)( const Standard_Integer , const Standard_Integer ) const>(&LocOpe_CSIntersector::Point),
             R"#(Returns the intersection point of range <Index> on element of range <I>. The points are sorted in increasing order of parameter along the axis.)#"  , py::arg("I"),  py::arg("Index"))
        .def("LocalizeAfter",
             (Standard_Boolean (LocOpe_CSIntersector::*)( const Standard_Integer , const Standard_Real , const Standard_Real , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const) static_cast<Standard_Boolean (LocOpe_CSIntersector::*)( const Standard_Integer , const Standard_Real , const Standard_Real , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const>(&LocOpe_CSIntersector::LocalizeAfter),
             R"#(On the element of range <I>, searches the first intersection point located after the parameter <From>, wich orientation is not TopAbs_EXTERNAL. If found, returns <Standard_True>. <Or> contains the orientation of the point, <IndFrom> and <IndTo> represents the interval of index in the sequence of intersection point corresponding to the point. (IndFrom <= IndTo). <Tol> is used to determine if 2 parameters are equal.)#"  , py::arg("I"),  py::arg("From"),  py::arg("Tol"),  py::arg("Or"),  py::arg("IndFrom"),  py::arg("IndTo"))
        .def("LocalizeBefore",
             (Standard_Boolean (LocOpe_CSIntersector::*)( const Standard_Integer , const Standard_Real , const Standard_Real , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const) static_cast<Standard_Boolean (LocOpe_CSIntersector::*)( const Standard_Integer , const Standard_Real , const Standard_Real , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const>(&LocOpe_CSIntersector::LocalizeBefore),
             R"#(On the element of range <I>, searches the first intersection point located before the parameter <From>, wich orientation is not TopAbs_EXTERNAL. If found, returns <Standard_True>. <Or> contains the orientation of the point, <IndFrom> and <IndTo> represents the interval of index in the sequence of intersection point corresponding to the point (IndFrom <= IndTo). <Tol> is used to determine if 2 parameters are equal.)#"  , py::arg("I"),  py::arg("From"),  py::arg("Tol"),  py::arg("Or"),  py::arg("IndFrom"),  py::arg("IndTo"))
        .def("LocalizeAfter",
             (Standard_Boolean (LocOpe_CSIntersector::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const) static_cast<Standard_Boolean (LocOpe_CSIntersector::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const>(&LocOpe_CSIntersector::LocalizeAfter),
             R"#(On the element of range <I>, searches the first intersection point located after the index <FromInd> ( >= FromInd + 1), wich orientation is not TopAbs_EXTERNAL. If found, returns <Standard_True>. <Or> contains the orientation of the point, <IndFrom> and <IndTo> represents the interval of index in the sequence of intersection point corresponding to the point. (IndFrom <= IndTo). <Tol> is used to determine if 2 parameters are equal.)#"  , py::arg("I"),  py::arg("FromInd"),  py::arg("Tol"),  py::arg("Or"),  py::arg("IndFrom"),  py::arg("IndTo"))
        .def("LocalizeBefore",
             (Standard_Boolean (LocOpe_CSIntersector::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const) static_cast<Standard_Boolean (LocOpe_CSIntersector::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const>(&LocOpe_CSIntersector::LocalizeBefore),
             R"#(On the element of range <I>, searches the first intersection point located before the index <FromInd> ( <= FromInd -1), wich orientation is not TopAbs_EXTERNAL. If found, returns <Standard_True>. <Or> contains the orientation of the point, <IndFrom> and <IndTo> represents the interval of index in the sequence of intersection point corresponding to the point (IndFrom <= IndTo). <Tol> is used to determine if 2 parameters are equal.)#"  , py::arg("I"),  py::arg("FromInd"),  py::arg("Tol"),  py::arg("Or"),  py::arg("IndFrom"),  py::arg("IndTo"))
        .def("Destroy",
             (void (LocOpe_CSIntersector::*)() ) static_cast<void (LocOpe_CSIntersector::*)() >(&LocOpe_CSIntersector::Destroy),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (LocOpe_CSIntersector::*)() const) static_cast<Standard_Boolean (LocOpe_CSIntersector::*)() const>(&LocOpe_CSIntersector::IsDone),
             R"#(Returns <Standard_True> if the intersection has been done.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_CurveShapeIntersector , shared_ptr<LocOpe_CurveShapeIntersector> >>(m.attr("LocOpe_CurveShapeIntersector"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax1 &,const TopoDS_Shape & >()  , py::arg("Axis"),  py::arg("S") )
        .def(py::init< const gp_Circ &,const TopoDS_Shape & >()  , py::arg("C"),  py::arg("S") )
    // custom constructors
    // methods
        .def("Init",
             (void (LocOpe_CurveShapeIntersector::*)( const gp_Ax1 & , const TopoDS_Shape & ) ) static_cast<void (LocOpe_CurveShapeIntersector::*)( const gp_Ax1 & , const TopoDS_Shape & ) >(&LocOpe_CurveShapeIntersector::Init),
             R"#(Performs the intersection between <Ax1 and <S>.)#"  , py::arg("Axis"),  py::arg("S"))
        .def("Init",
             (void (LocOpe_CurveShapeIntersector::*)( const gp_Circ & , const TopoDS_Shape & ) ) static_cast<void (LocOpe_CurveShapeIntersector::*)( const gp_Circ & , const TopoDS_Shape & ) >(&LocOpe_CurveShapeIntersector::Init),
             R"#(Performs the intersection between <Ax1 and <S>.)#"  , py::arg("C"),  py::arg("S"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_CurveShapeIntersector::*)() const) static_cast<Standard_Boolean (LocOpe_CurveShapeIntersector::*)() const>(&LocOpe_CurveShapeIntersector::IsDone),
             R"#(Returns <Standard_True> if the intersection has been done.)#" )
        .def("NbPoints",
             (Standard_Integer (LocOpe_CurveShapeIntersector::*)() const) static_cast<Standard_Integer (LocOpe_CurveShapeIntersector::*)() const>(&LocOpe_CurveShapeIntersector::NbPoints),
             R"#(Returns the number of intersection point.)#" )
        .def("Point",
             (const LocOpe_PntFace & (LocOpe_CurveShapeIntersector::*)( const Standard_Integer ) const) static_cast<const LocOpe_PntFace & (LocOpe_CurveShapeIntersector::*)( const Standard_Integer ) const>(&LocOpe_CurveShapeIntersector::Point),
             R"#(Returns the intersection point of range <Index>. The points are sorted in increasing order of parameter along the axis.)#"  , py::arg("Index"))
        .def("LocalizeAfter",
             (Standard_Boolean (LocOpe_CurveShapeIntersector::*)( const Standard_Real , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const) static_cast<Standard_Boolean (LocOpe_CurveShapeIntersector::*)( const Standard_Real , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const>(&LocOpe_CurveShapeIntersector::LocalizeAfter),
             R"#(Searches the first intersection point located after the parameter <From>, wich orientation is not TopAbs_EXTERNAL. If found, returns <Standard_True>. <Or> contains the orientation of the point, <IndFrom> and <IndTo> represents the interval of index in the sequence of intersection point corresponding to the point. (IndFrom <= IndTo).)#"  , py::arg("From"),  py::arg("Or"),  py::arg("IndFrom"),  py::arg("IndTo"))
        .def("LocalizeBefore",
             (Standard_Boolean (LocOpe_CurveShapeIntersector::*)( const Standard_Real , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const) static_cast<Standard_Boolean (LocOpe_CurveShapeIntersector::*)( const Standard_Real , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const>(&LocOpe_CurveShapeIntersector::LocalizeBefore),
             R"#(Searches the first intersection point located before the parameter <From>, wich orientation is not TopAbs_EXTERNAL. If found, returns <Standard_True>. <Or> contains the orientation of the point, <IndFrom> and <IndTo> represents the interval of index in the sequence of intersection point corresponding to the point (IndFrom <= IndTo).)#"  , py::arg("From"),  py::arg("Or"),  py::arg("IndFrom"),  py::arg("IndTo"))
        .def("LocalizeAfter",
             (Standard_Boolean (LocOpe_CurveShapeIntersector::*)( const Standard_Integer , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const) static_cast<Standard_Boolean (LocOpe_CurveShapeIntersector::*)( const Standard_Integer , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const>(&LocOpe_CurveShapeIntersector::LocalizeAfter),
             R"#(Searches the first intersection point located after the index <FromInd> ( >= FromInd + 1), wich orientation is not TopAbs_EXTERNAL. If found, returns <Standard_True>. <Or> contains the orientation of the point, <IndFrom> and <IndTo> represents the interval of index in the sequence of intersection point corresponding to the point. (IndFrom <= IndTo).)#"  , py::arg("FromInd"),  py::arg("Or"),  py::arg("IndFrom"),  py::arg("IndTo"))
        .def("LocalizeBefore",
             (Standard_Boolean (LocOpe_CurveShapeIntersector::*)( const Standard_Integer , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const) static_cast<Standard_Boolean (LocOpe_CurveShapeIntersector::*)( const Standard_Integer , TopAbs_Orientation & , Standard_Integer & , Standard_Integer & ) const>(&LocOpe_CurveShapeIntersector::LocalizeBefore),
             R"#(Searches the first intersection point located before the index <FromInd> ( <= FromInd -1), wich orientation is not TopAbs_EXTERNAL. If found, returns <Standard_True>. <Or> contains the orientation of the point, <IndFrom> and <IndTo> represents the interval of index in the sequence of intersection point corresponding to the point (IndFrom <= IndTo).)#"  , py::arg("FromInd"),  py::arg("Or"),  py::arg("IndFrom"),  py::arg("IndTo"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_CurveShapeIntersector::*)() const) static_cast<Standard_Boolean (LocOpe_CurveShapeIntersector::*)() const>(&LocOpe_CurveShapeIntersector::IsDone),
             R"#(Returns <Standard_True> if the intersection has been done.)#" )
        .def("NbPoints",
             (Standard_Integer (LocOpe_CurveShapeIntersector::*)() const) static_cast<Standard_Integer (LocOpe_CurveShapeIntersector::*)() const>(&LocOpe_CurveShapeIntersector::NbPoints),
             R"#(Returns the number of intersection point.)#" )
        .def("Point",
             (const LocOpe_PntFace & (LocOpe_CurveShapeIntersector::*)( const Standard_Integer ) const) static_cast<const LocOpe_PntFace & (LocOpe_CurveShapeIntersector::*)( const Standard_Integer ) const>(&LocOpe_CurveShapeIntersector::Point),
             R"#(Returns the intersection point of range <Index>. The points are sorted in increasing order of parameter along the axis.)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_DPrism , shared_ptr<LocOpe_DPrism> >>(m.attr("LocOpe_DPrism"))
    // constructors
        .def(py::init< const TopoDS_Face &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Spine"),  py::arg("Height1"),  py::arg("Height2"),  py::arg("Angle") )
        .def(py::init< const TopoDS_Face &,const Standard_Real,const Standard_Real >()  , py::arg("Spine"),  py::arg("Height"),  py::arg("Angle") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (LocOpe_DPrism::*)() const) static_cast<Standard_Boolean (LocOpe_DPrism::*)() const>(&LocOpe_DPrism::IsDone),
             R"#(None)#" )
        .def("Spine",
             (const TopoDS_Shape & (LocOpe_DPrism::*)() const) static_cast<const TopoDS_Shape & (LocOpe_DPrism::*)() const>(&LocOpe_DPrism::Spine),
             R"#(None)#" )
        .def("Profile",
             (const TopoDS_Shape & (LocOpe_DPrism::*)() const) static_cast<const TopoDS_Shape & (LocOpe_DPrism::*)() const>(&LocOpe_DPrism::Profile),
             R"#(None)#" )
        .def("FirstShape",
             (const TopoDS_Shape & (LocOpe_DPrism::*)() const) static_cast<const TopoDS_Shape & (LocOpe_DPrism::*)() const>(&LocOpe_DPrism::FirstShape),
             R"#(None)#" )
        .def("LastShape",
             (const TopoDS_Shape & (LocOpe_DPrism::*)() const) static_cast<const TopoDS_Shape & (LocOpe_DPrism::*)() const>(&LocOpe_DPrism::LastShape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_DPrism::*)() const) static_cast<const TopoDS_Shape & (LocOpe_DPrism::*)() const>(&LocOpe_DPrism::Shape),
             R"#(None)#" )
        .def("Shapes",
             (const TopTools_ListOfShape & (LocOpe_DPrism::*)( const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (LocOpe_DPrism::*)( const TopoDS_Shape & ) const>(&LocOpe_DPrism::Shapes),
             R"#(None)#"  , py::arg("S"))
        .def("Curves",
             (void (LocOpe_DPrism::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) const) static_cast<void (LocOpe_DPrism::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) const>(&LocOpe_DPrism::Curves),
             R"#(None)#"  , py::arg("SCurves"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (LocOpe_DPrism::*)() const) static_cast<opencascade::handle<Geom_Curve> (LocOpe_DPrism::*)() const>(&LocOpe_DPrism::BarycCurve),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_FindEdges , shared_ptr<LocOpe_FindEdges> >>(m.attr("LocOpe_FindEdges"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("FFrom"),  py::arg("FTo") )
    // custom constructors
    // methods
        .def("Set",
             (void (LocOpe_FindEdges::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (LocOpe_FindEdges::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&LocOpe_FindEdges::Set),
             R"#(None)#"  , py::arg("FFrom"),  py::arg("FTo"))
        .def("InitIterator",
             (void (LocOpe_FindEdges::*)() ) static_cast<void (LocOpe_FindEdges::*)() >(&LocOpe_FindEdges::InitIterator),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (LocOpe_FindEdges::*)() const) static_cast<Standard_Boolean (LocOpe_FindEdges::*)() const>(&LocOpe_FindEdges::More),
             R"#(None)#" )
        .def("EdgeFrom",
             (const TopoDS_Edge & (LocOpe_FindEdges::*)() const) static_cast<const TopoDS_Edge & (LocOpe_FindEdges::*)() const>(&LocOpe_FindEdges::EdgeFrom),
             R"#(None)#" )
        .def("EdgeTo",
             (const TopoDS_Edge & (LocOpe_FindEdges::*)() const) static_cast<const TopoDS_Edge & (LocOpe_FindEdges::*)() const>(&LocOpe_FindEdges::EdgeTo),
             R"#(None)#" )
        .def("Next",
             (void (LocOpe_FindEdges::*)() ) static_cast<void (LocOpe_FindEdges::*)() >(&LocOpe_FindEdges::Next),
             R"#(None)#" )
        .def("InitIterator",
             (void (LocOpe_FindEdges::*)() ) static_cast<void (LocOpe_FindEdges::*)() >(&LocOpe_FindEdges::InitIterator),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (LocOpe_FindEdges::*)() const) static_cast<Standard_Boolean (LocOpe_FindEdges::*)() const>(&LocOpe_FindEdges::More),
             R"#(None)#" )
        .def("EdgeFrom",
             (const TopoDS_Edge & (LocOpe_FindEdges::*)() const) static_cast<const TopoDS_Edge & (LocOpe_FindEdges::*)() const>(&LocOpe_FindEdges::EdgeFrom),
             R"#(None)#" )
        .def("EdgeTo",
             (const TopoDS_Edge & (LocOpe_FindEdges::*)() const) static_cast<const TopoDS_Edge & (LocOpe_FindEdges::*)() const>(&LocOpe_FindEdges::EdgeTo),
             R"#(None)#" )
        .def("Next",
             (void (LocOpe_FindEdges::*)() ) static_cast<void (LocOpe_FindEdges::*)() >(&LocOpe_FindEdges::Next),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_FindEdgesInFace , shared_ptr<LocOpe_FindEdgesInFace> >>(m.attr("LocOpe_FindEdgesInFace"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Face & >()  , py::arg("S"),  py::arg("F") )
    // custom constructors
    // methods
        .def("Set",
             (void (LocOpe_FindEdgesInFace::*)( const TopoDS_Shape & , const TopoDS_Face & ) ) static_cast<void (LocOpe_FindEdgesInFace::*)( const TopoDS_Shape & , const TopoDS_Face & ) >(&LocOpe_FindEdgesInFace::Set),
             R"#(None)#"  , py::arg("S"),  py::arg("F"))
        .def("Init",
             (void (LocOpe_FindEdgesInFace::*)() ) static_cast<void (LocOpe_FindEdgesInFace::*)() >(&LocOpe_FindEdgesInFace::Init),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (LocOpe_FindEdgesInFace::*)() const) static_cast<Standard_Boolean (LocOpe_FindEdgesInFace::*)() const>(&LocOpe_FindEdgesInFace::More),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (LocOpe_FindEdgesInFace::*)() const) static_cast<const TopoDS_Edge & (LocOpe_FindEdgesInFace::*)() const>(&LocOpe_FindEdgesInFace::Edge),
             R"#(None)#" )
        .def("Next",
             (void (LocOpe_FindEdgesInFace::*)() ) static_cast<void (LocOpe_FindEdgesInFace::*)() >(&LocOpe_FindEdgesInFace::Next),
             R"#(None)#" )
        .def("Init",
             (void (LocOpe_FindEdgesInFace::*)() ) static_cast<void (LocOpe_FindEdgesInFace::*)() >(&LocOpe_FindEdgesInFace::Init),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (LocOpe_FindEdgesInFace::*)() const) static_cast<Standard_Boolean (LocOpe_FindEdgesInFace::*)() const>(&LocOpe_FindEdgesInFace::More),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (LocOpe_FindEdgesInFace::*)() const) static_cast<const TopoDS_Edge & (LocOpe_FindEdgesInFace::*)() const>(&LocOpe_FindEdgesInFace::Edge),
             R"#(None)#" )
        .def("Next",
             (void (LocOpe_FindEdgesInFace::*)() ) static_cast<void (LocOpe_FindEdgesInFace::*)() >(&LocOpe_FindEdgesInFace::Next),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_GeneratedShape ,opencascade::handle<LocOpe_GeneratedShape>,Py_LocOpe_GeneratedShape , Standard_Transient>>(m.attr("LocOpe_GeneratedShape"))
    // constructors
    // custom constructors
    // methods
        .def("GeneratingEdges",
             (const TopTools_ListOfShape & (LocOpe_GeneratedShape::*)() ) static_cast<const TopTools_ListOfShape & (LocOpe_GeneratedShape::*)() >(&LocOpe_GeneratedShape::GeneratingEdges),
             R"#(None)#" )
        .def("Generated",
             (TopoDS_Edge (LocOpe_GeneratedShape::*)( const TopoDS_Vertex & ) ) static_cast<TopoDS_Edge (LocOpe_GeneratedShape::*)( const TopoDS_Vertex & ) >(&LocOpe_GeneratedShape::Generated),
             R"#(Returns the edge created by the vertex <V>. If none, must return a null shape.)#"  , py::arg("V"))
        .def("Generated",
             (TopoDS_Face (LocOpe_GeneratedShape::*)( const TopoDS_Edge & ) ) static_cast<TopoDS_Face (LocOpe_GeneratedShape::*)( const TopoDS_Edge & ) >(&LocOpe_GeneratedShape::Generated),
             R"#(Returns the face created by the edge <E>. If none, must return a null shape.)#"  , py::arg("E"))
        .def("OrientedFaces",
             (const TopTools_ListOfShape & (LocOpe_GeneratedShape::*)() ) static_cast<const TopTools_ListOfShape & (LocOpe_GeneratedShape::*)() >(&LocOpe_GeneratedShape::OrientedFaces),
             R"#(Returns the list of correctly oriented generated faces.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (LocOpe_GeneratedShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (LocOpe_GeneratedShape::*)() const>(&LocOpe_GeneratedShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&LocOpe_GeneratedShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&LocOpe_GeneratedShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_Generator , shared_ptr<LocOpe_Generator> >>(m.attr("LocOpe_Generator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Init",
             (void (LocOpe_Generator::*)( const TopoDS_Shape & ) ) static_cast<void (LocOpe_Generator::*)( const TopoDS_Shape & ) >(&LocOpe_Generator::Init),
             R"#(Initializes the algorithm on the shape <S>.)#"  , py::arg("S"))
        .def("Perform",
             (void (LocOpe_Generator::*)( const opencascade::handle<LocOpe_GeneratedShape> & ) ) static_cast<void (LocOpe_Generator::*)( const opencascade::handle<LocOpe_GeneratedShape> & ) >(&LocOpe_Generator::Perform),
             R"#(None)#"  , py::arg("G"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_Generator::*)() const) static_cast<Standard_Boolean (LocOpe_Generator::*)() const>(&LocOpe_Generator::IsDone),
             R"#(None)#" )
        .def("ResultingShape",
             (const TopoDS_Shape & (LocOpe_Generator::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Generator::*)() const>(&LocOpe_Generator::ResultingShape),
             R"#(Returns the new shape)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_Generator::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Generator::*)() const>(&LocOpe_Generator::Shape),
             R"#(Returns the initial shape)#" )
        .def("DescendantFace",
             (const TopTools_ListOfShape & (LocOpe_Generator::*)( const TopoDS_Face & ) ) static_cast<const TopTools_ListOfShape & (LocOpe_Generator::*)( const TopoDS_Face & ) >(&LocOpe_Generator::DescendantFace),
             R"#(Returns the descendant face of <F>. <F> may belong to the original shape or to the "generated" shape. The returned face may be a null shape (when <F> disappears).)#"  , py::arg("F"))
        .def("Init",
             (void (LocOpe_Generator::*)( const TopoDS_Shape & ) ) static_cast<void (LocOpe_Generator::*)( const TopoDS_Shape & ) >(&LocOpe_Generator::Init),
             R"#(Initializes the algorithm on the shape <S>.)#"  , py::arg("S"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_Generator::*)() const) static_cast<Standard_Boolean (LocOpe_Generator::*)() const>(&LocOpe_Generator::IsDone),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_Generator::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Generator::*)() const>(&LocOpe_Generator::Shape),
             R"#(Returns the initial shape)#" )
        .def("ResultingShape",
             (const TopoDS_Shape & (LocOpe_Generator::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Generator::*)() const>(&LocOpe_Generator::ResultingShape),
             R"#(Returns the new shape)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_Gluer , shared_ptr<LocOpe_Gluer> >>(m.attr("LocOpe_Gluer"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("Sbase"),  py::arg("Snew") )
    // custom constructors
    // methods
        .def("Init",
             (void (LocOpe_Gluer::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (LocOpe_Gluer::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&LocOpe_Gluer::Init),
             R"#(None)#"  , py::arg("Sbase"),  py::arg("Snew"))
        .def("Bind",
             (void (LocOpe_Gluer::*)( const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<void (LocOpe_Gluer::*)( const TopoDS_Face & , const TopoDS_Face & ) >(&LocOpe_Gluer::Bind),
             R"#(None)#"  , py::arg("Fnew"),  py::arg("Fbase"))
        .def("Bind",
             (void (LocOpe_Gluer::*)( const TopoDS_Edge & , const TopoDS_Edge & ) ) static_cast<void (LocOpe_Gluer::*)( const TopoDS_Edge & , const TopoDS_Edge & ) >(&LocOpe_Gluer::Bind),
             R"#(None)#"  , py::arg("Enew"),  py::arg("Ebase"))
        .def("OpeType",
             (LocOpe_Operation (LocOpe_Gluer::*)() const) static_cast<LocOpe_Operation (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::OpeType),
             R"#(None)#" )
        .def("Perform",
             (void (LocOpe_Gluer::*)() ) static_cast<void (LocOpe_Gluer::*)() >(&LocOpe_Gluer::Perform),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (LocOpe_Gluer::*)() const) static_cast<Standard_Boolean (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::IsDone),
             R"#(None)#" )
        .def("ResultingShape",
             (const TopoDS_Shape & (LocOpe_Gluer::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::ResultingShape),
             R"#(None)#" )
        .def("DescendantFaces",
             (const TopTools_ListOfShape & (LocOpe_Gluer::*)( const TopoDS_Face & ) const) static_cast<const TopTools_ListOfShape & (LocOpe_Gluer::*)( const TopoDS_Face & ) const>(&LocOpe_Gluer::DescendantFaces),
             R"#(None)#"  , py::arg("F"))
        .def("BasisShape",
             (const TopoDS_Shape & (LocOpe_Gluer::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::BasisShape),
             R"#(None)#" )
        .def("GluedShape",
             (const TopoDS_Shape & (LocOpe_Gluer::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::GluedShape),
             R"#(None)#" )
        .def("Edges",
             (const TopTools_ListOfShape & (LocOpe_Gluer::*)() const) static_cast<const TopTools_ListOfShape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::Edges),
             R"#(None)#" )
        .def("TgtEdges",
             (const TopTools_ListOfShape & (LocOpe_Gluer::*)() const) static_cast<const TopTools_ListOfShape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::TgtEdges),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (LocOpe_Gluer::*)() const) static_cast<Standard_Boolean (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::IsDone),
             R"#(None)#" )
        .def("ResultingShape",
             (const TopoDS_Shape & (LocOpe_Gluer::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::ResultingShape),
             R"#(None)#" )
        .def("BasisShape",
             (const TopoDS_Shape & (LocOpe_Gluer::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::BasisShape),
             R"#(None)#" )
        .def("GluedShape",
             (const TopoDS_Shape & (LocOpe_Gluer::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::GluedShape),
             R"#(None)#" )
        .def("OpeType",
             (LocOpe_Operation (LocOpe_Gluer::*)() const) static_cast<LocOpe_Operation (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::OpeType),
             R"#(None)#" )
        .def("Edges",
             (const TopTools_ListOfShape & (LocOpe_Gluer::*)() const) static_cast<const TopTools_ListOfShape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::Edges),
             R"#(None)#" )
        .def("TgtEdges",
             (const TopTools_ListOfShape & (LocOpe_Gluer::*)() const) static_cast<const TopTools_ListOfShape & (LocOpe_Gluer::*)() const>(&LocOpe_Gluer::TgtEdges),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_LinearForm , shared_ptr<LocOpe_LinearForm> >>(m.attr("LocOpe_LinearForm"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const gp_Vec &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("Base"),  py::arg("V"),  py::arg("Pnt1"),  py::arg("Pnt2") )
        .def(py::init< const TopoDS_Shape &,const gp_Vec &,const gp_Vec &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("Base"),  py::arg("V"),  py::arg("Vectra"),  py::arg("Pnt1"),  py::arg("Pnt2") )
    // custom constructors
    // methods
        .def("Perform",
             (void (LocOpe_LinearForm::*)( const TopoDS_Shape & , const gp_Vec & , const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (LocOpe_LinearForm::*)( const TopoDS_Shape & , const gp_Vec & , const gp_Pnt & , const gp_Pnt & ) >(&LocOpe_LinearForm::Perform),
             R"#(None)#"  , py::arg("Base"),  py::arg("V"),  py::arg("Pnt1"),  py::arg("Pnt2"))
        .def("Perform",
             (void (LocOpe_LinearForm::*)( const TopoDS_Shape & , const gp_Vec & , const gp_Vec & , const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (LocOpe_LinearForm::*)( const TopoDS_Shape & , const gp_Vec & , const gp_Vec & , const gp_Pnt & , const gp_Pnt & ) >(&LocOpe_LinearForm::Perform),
             R"#(None)#"  , py::arg("Base"),  py::arg("V"),  py::arg("Vectra"),  py::arg("Pnt1"),  py::arg("Pnt2"))
        .def("FirstShape",
             (const TopoDS_Shape & (LocOpe_LinearForm::*)() const) static_cast<const TopoDS_Shape & (LocOpe_LinearForm::*)() const>(&LocOpe_LinearForm::FirstShape),
             R"#(None)#" )
        .def("LastShape",
             (const TopoDS_Shape & (LocOpe_LinearForm::*)() const) static_cast<const TopoDS_Shape & (LocOpe_LinearForm::*)() const>(&LocOpe_LinearForm::LastShape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_LinearForm::*)() const) static_cast<const TopoDS_Shape & (LocOpe_LinearForm::*)() const>(&LocOpe_LinearForm::Shape),
             R"#(None)#" )
        .def("Shapes",
             (const TopTools_ListOfShape & (LocOpe_LinearForm::*)( const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (LocOpe_LinearForm::*)( const TopoDS_Shape & ) const>(&LocOpe_LinearForm::Shapes),
             R"#(None)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_Pipe , shared_ptr<LocOpe_Pipe> >>(m.attr("LocOpe_Pipe"))
    // constructors
        .def(py::init< const TopoDS_Wire &,const TopoDS_Shape & >()  , py::arg("Spine"),  py::arg("Profile") )
    // custom constructors
    // methods
        .def("Spine",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::Spine),
             R"#(None)#" )
        .def("Profile",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::Profile),
             R"#(None)#" )
        .def("FirstShape",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::FirstShape),
             R"#(None)#" )
        .def("LastShape",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::LastShape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::Shape),
             R"#(None)#" )
        .def("Shapes",
             (const TopTools_ListOfShape & (LocOpe_Pipe::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (LocOpe_Pipe::*)( const TopoDS_Shape & ) >(&LocOpe_Pipe::Shapes),
             R"#(None)#"  , py::arg("S"))
        .def("Curves",
             (const TColGeom_SequenceOfCurve & (LocOpe_Pipe::*)(  const NCollection_Sequence<gp_Pnt> & ) ) static_cast<const TColGeom_SequenceOfCurve & (LocOpe_Pipe::*)(  const NCollection_Sequence<gp_Pnt> & ) >(&LocOpe_Pipe::Curves),
             R"#(None)#"  , py::arg("Spt"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (LocOpe_Pipe::*)() ) static_cast<opencascade::handle<Geom_Curve> (LocOpe_Pipe::*)() >(&LocOpe_Pipe::BarycCurve),
             R"#(None)#" )
        .def("Spine",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::Spine),
             R"#(None)#" )
        .def("Profile",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::Profile),
             R"#(None)#" )
        .def("FirstShape",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::FirstShape),
             R"#(None)#" )
        .def("LastShape",
             (const TopoDS_Shape & (LocOpe_Pipe::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Pipe::*)() const>(&LocOpe_Pipe::LastShape),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_PntFace , shared_ptr<LocOpe_PntFace> >>(m.attr("LocOpe_PntFace"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const TopoDS_Face &,const TopAbs_Orientation,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("F"),  py::arg("Or"),  py::arg("Param"),  py::arg("UPar"),  py::arg("VPar") )
    // custom constructors
    // methods
        .def("Pnt",
             (const gp_Pnt & (LocOpe_PntFace::*)() const) static_cast<const gp_Pnt & (LocOpe_PntFace::*)() const>(&LocOpe_PntFace::Pnt),
             R"#(None)#" )
        .def("Face",
             (const TopoDS_Face & (LocOpe_PntFace::*)() const) static_cast<const TopoDS_Face & (LocOpe_PntFace::*)() const>(&LocOpe_PntFace::Face),
             R"#(None)#" )
        .def("Orientation",
             (TopAbs_Orientation (LocOpe_PntFace::*)() const) static_cast<TopAbs_Orientation (LocOpe_PntFace::*)() const>(&LocOpe_PntFace::Orientation),
             R"#(None)#" )
        .def("ChangeOrientation",
             (TopAbs_Orientation & (LocOpe_PntFace::*)() ) static_cast<TopAbs_Orientation & (LocOpe_PntFace::*)() >(&LocOpe_PntFace::ChangeOrientation),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (LocOpe_PntFace::*)() const) static_cast<Standard_Real (LocOpe_PntFace::*)() const>(&LocOpe_PntFace::Parameter),
             R"#(None)#" )
        .def("UParameter",
             (Standard_Real (LocOpe_PntFace::*)() const) static_cast<Standard_Real (LocOpe_PntFace::*)() const>(&LocOpe_PntFace::UParameter),
             R"#(None)#" )
        .def("VParameter",
             (Standard_Real (LocOpe_PntFace::*)() const) static_cast<Standard_Real (LocOpe_PntFace::*)() const>(&LocOpe_PntFace::VParameter),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_Prism , shared_ptr<LocOpe_Prism> >>(m.attr("LocOpe_Prism"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const gp_Vec & >()  , py::arg("Base"),  py::arg("V") )
        .def(py::init< const TopoDS_Shape &,const gp_Vec &,const gp_Vec & >()  , py::arg("Base"),  py::arg("V"),  py::arg("Vectra") )
    // custom constructors
    // methods
        .def("Perform",
             (void (LocOpe_Prism::*)( const TopoDS_Shape & , const gp_Vec & ) ) static_cast<void (LocOpe_Prism::*)( const TopoDS_Shape & , const gp_Vec & ) >(&LocOpe_Prism::Perform),
             R"#(None)#"  , py::arg("Base"),  py::arg("V"))
        .def("Perform",
             (void (LocOpe_Prism::*)( const TopoDS_Shape & , const gp_Vec & , const gp_Vec & ) ) static_cast<void (LocOpe_Prism::*)( const TopoDS_Shape & , const gp_Vec & , const gp_Vec & ) >(&LocOpe_Prism::Perform),
             R"#(None)#"  , py::arg("Base"),  py::arg("V"),  py::arg("Vtra"))
        .def("FirstShape",
             (const TopoDS_Shape & (LocOpe_Prism::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Prism::*)() const>(&LocOpe_Prism::FirstShape),
             R"#(None)#" )
        .def("LastShape",
             (const TopoDS_Shape & (LocOpe_Prism::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Prism::*)() const>(&LocOpe_Prism::LastShape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_Prism::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Prism::*)() const>(&LocOpe_Prism::Shape),
             R"#(None)#" )
        .def("Shapes",
             (const TopTools_ListOfShape & (LocOpe_Prism::*)( const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (LocOpe_Prism::*)( const TopoDS_Shape & ) const>(&LocOpe_Prism::Shapes),
             R"#(None)#"  , py::arg("S"))
        .def("Curves",
             (void (LocOpe_Prism::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) const) static_cast<void (LocOpe_Prism::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) const>(&LocOpe_Prism::Curves),
             R"#(None)#"  , py::arg("SCurves"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (LocOpe_Prism::*)() const) static_cast<opencascade::handle<Geom_Curve> (LocOpe_Prism::*)() const>(&LocOpe_Prism::BarycCurve),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_Revol , shared_ptr<LocOpe_Revol> >>(m.attr("LocOpe_Revol"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (void (LocOpe_Revol::*)( const TopoDS_Shape & , const gp_Ax1 & , const Standard_Real , const Standard_Real ) ) static_cast<void (LocOpe_Revol::*)( const TopoDS_Shape & , const gp_Ax1 & , const Standard_Real , const Standard_Real ) >(&LocOpe_Revol::Perform),
             R"#(None)#"  , py::arg("Base"),  py::arg("Axis"),  py::arg("Angle"),  py::arg("angledec"))
        .def("Perform",
             (void (LocOpe_Revol::*)( const TopoDS_Shape & , const gp_Ax1 & , const Standard_Real ) ) static_cast<void (LocOpe_Revol::*)( const TopoDS_Shape & , const gp_Ax1 & , const Standard_Real ) >(&LocOpe_Revol::Perform),
             R"#(None)#"  , py::arg("Base"),  py::arg("Axis"),  py::arg("Angle"))
        .def("FirstShape",
             (const TopoDS_Shape & (LocOpe_Revol::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Revol::*)() const>(&LocOpe_Revol::FirstShape),
             R"#(None)#" )
        .def("LastShape",
             (const TopoDS_Shape & (LocOpe_Revol::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Revol::*)() const>(&LocOpe_Revol::LastShape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_Revol::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Revol::*)() const>(&LocOpe_Revol::Shape),
             R"#(None)#" )
        .def("Shapes",
             (const TopTools_ListOfShape & (LocOpe_Revol::*)( const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (LocOpe_Revol::*)( const TopoDS_Shape & ) const>(&LocOpe_Revol::Shapes),
             R"#(None)#"  , py::arg("S"))
        .def("Curves",
             (void (LocOpe_Revol::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) const) static_cast<void (LocOpe_Revol::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) const>(&LocOpe_Revol::Curves),
             R"#(None)#"  , py::arg("SCurves"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (LocOpe_Revol::*)() const) static_cast<opencascade::handle<Geom_Curve> (LocOpe_Revol::*)() const>(&LocOpe_Revol::BarycCurve),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_RevolutionForm , shared_ptr<LocOpe_RevolutionForm> >>(m.attr("LocOpe_RevolutionForm"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (void (LocOpe_RevolutionForm::*)( const TopoDS_Shape & , const gp_Ax1 & , const Standard_Real ) ) static_cast<void (LocOpe_RevolutionForm::*)( const TopoDS_Shape & , const gp_Ax1 & , const Standard_Real ) >(&LocOpe_RevolutionForm::Perform),
             R"#(None)#"  , py::arg("Base"),  py::arg("Axe"),  py::arg("Angle"))
        .def("FirstShape",
             (const TopoDS_Shape & (LocOpe_RevolutionForm::*)() const) static_cast<const TopoDS_Shape & (LocOpe_RevolutionForm::*)() const>(&LocOpe_RevolutionForm::FirstShape),
             R"#(None)#" )
        .def("LastShape",
             (const TopoDS_Shape & (LocOpe_RevolutionForm::*)() const) static_cast<const TopoDS_Shape & (LocOpe_RevolutionForm::*)() const>(&LocOpe_RevolutionForm::LastShape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_RevolutionForm::*)() const) static_cast<const TopoDS_Shape & (LocOpe_RevolutionForm::*)() const>(&LocOpe_RevolutionForm::Shape),
             R"#(None)#" )
        .def("Shapes",
             (const TopTools_ListOfShape & (LocOpe_RevolutionForm::*)( const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (LocOpe_RevolutionForm::*)( const TopoDS_Shape & ) const>(&LocOpe_RevolutionForm::Shapes),
             R"#(None)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_SplitDrafts , shared_ptr<LocOpe_SplitDrafts> >>(m.attr("LocOpe_SplitDrafts"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Init",
             (void (LocOpe_SplitDrafts::*)( const TopoDS_Shape & ) ) static_cast<void (LocOpe_SplitDrafts::*)( const TopoDS_Shape & ) >(&LocOpe_SplitDrafts::Init),
             R"#(Initializes the algoritm with the shape <S>.)#"  , py::arg("S"))
        .def("Perform",
             (void (LocOpe_SplitDrafts::*)( const TopoDS_Face & , const TopoDS_Wire & , const gp_Dir & , const gp_Pln & , const Standard_Real , const gp_Dir & , const gp_Pln & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (LocOpe_SplitDrafts::*)( const TopoDS_Face & , const TopoDS_Wire & , const gp_Dir & , const gp_Pln & , const Standard_Real , const gp_Dir & , const gp_Pln & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) >(&LocOpe_SplitDrafts::Perform),
             R"#(Splits the face <F> of the former given shape with the wire <W>. The wire is assumed to lie on the face. Puts a draft angle on both parts of the wire. <Extractg>, <Nplg>, <Angleg> define the arguments for the left part of the wire. <Extractd>, <Npld>, <Angled> define the arguments for the right part of the wire. The draft angle is measured with the direction <Extract>. <Npl> defines the neutral plane (points belonging to the neutral plane are not modified). <Angle> is the value of the draft angle. If <ModifyLeft> is set to <Standard_False>, no draft angle is applied to the left part of the wire. If <ModifyRight> is set to <Standard_False>,no draft angle is applied to the right part of the wire.)#"  , py::arg("F"),  py::arg("W"),  py::arg("Extractg"),  py::arg("NPlg"),  py::arg("Angleg"),  py::arg("Extractd"),  py::arg("NPld"),  py::arg("Angled"),  py::arg("ModifyLeft")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ModifyRight")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (LocOpe_SplitDrafts::*)( const TopoDS_Face & , const TopoDS_Wire & , const gp_Dir & , const gp_Pln & , const Standard_Real ) ) static_cast<void (LocOpe_SplitDrafts::*)( const TopoDS_Face & , const TopoDS_Wire & , const gp_Dir & , const gp_Pln & , const Standard_Real ) >(&LocOpe_SplitDrafts::Perform),
             R"#(Splits the face <F> of the former given shape with the wire <W>. The wire is assumed to lie on the face. Puts a draft angle on the left part of the wire. The draft angle is measured with the direction <Extract>. <Npl> defines the neutral plane (points belonging to the neutral plane are not modified). <Angle> is the value of the draft angle.)#"  , py::arg("F"),  py::arg("W"),  py::arg("Extract"),  py::arg("NPl"),  py::arg("Angle"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_SplitDrafts::*)() const) static_cast<Standard_Boolean (LocOpe_SplitDrafts::*)() const>(&LocOpe_SplitDrafts::IsDone),
             R"#(Returns <Standard_True> if the modification has been succesfully performed.)#" )
        .def("OriginalShape",
             (const TopoDS_Shape & (LocOpe_SplitDrafts::*)() const) static_cast<const TopoDS_Shape & (LocOpe_SplitDrafts::*)() const>(&LocOpe_SplitDrafts::OriginalShape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_SplitDrafts::*)() const) static_cast<const TopoDS_Shape & (LocOpe_SplitDrafts::*)() const>(&LocOpe_SplitDrafts::Shape),
             R"#(Returns the modified shape.)#" )
        .def("ShapesFromShape",
             (const TopTools_ListOfShape & (LocOpe_SplitDrafts::*)( const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (LocOpe_SplitDrafts::*)( const TopoDS_Shape & ) const>(&LocOpe_SplitDrafts::ShapesFromShape),
             R"#(Manages the descendant shapes.)#"  , py::arg("S"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_SplitDrafts::*)() const) static_cast<Standard_Boolean (LocOpe_SplitDrafts::*)() const>(&LocOpe_SplitDrafts::IsDone),
             R"#(Returns <Standard_True> if the modification has been succesfully performed.)#" )
        .def("OriginalShape",
             (const TopoDS_Shape & (LocOpe_SplitDrafts::*)() const) static_cast<const TopoDS_Shape & (LocOpe_SplitDrafts::*)() const>(&LocOpe_SplitDrafts::OriginalShape),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_SplitShape , shared_ptr<LocOpe_SplitShape> >>(m.attr("LocOpe_SplitShape"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Init",
             (void (LocOpe_SplitShape::*)( const TopoDS_Shape & ) ) static_cast<void (LocOpe_SplitShape::*)( const TopoDS_Shape & ) >(&LocOpe_SplitShape::Init),
             R"#(Initializes the process on the shape <S>.)#"  , py::arg("S"))
        .def("CanSplit",
             (Standard_Boolean (LocOpe_SplitShape::*)( const TopoDS_Edge & ) const) static_cast<Standard_Boolean (LocOpe_SplitShape::*)( const TopoDS_Edge & ) const>(&LocOpe_SplitShape::CanSplit),
             R"#(Tests if it is possible to split the edge <E>.)#"  , py::arg("E"))
        .def("Add",
             (void (LocOpe_SplitShape::*)( const TopoDS_Vertex & , const Standard_Real , const TopoDS_Edge & ) ) static_cast<void (LocOpe_SplitShape::*)( const TopoDS_Vertex & , const Standard_Real , const TopoDS_Edge & ) >(&LocOpe_SplitShape::Add),
             R"#(Adds the vertex <V> on the edge <E>, at parameter <P>.)#"  , py::arg("V"),  py::arg("P"),  py::arg("E"))
        .def("Add",
             (Standard_Boolean (LocOpe_SplitShape::*)( const TopoDS_Wire & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (LocOpe_SplitShape::*)( const TopoDS_Wire & , const TopoDS_Face & ) >(&LocOpe_SplitShape::Add),
             R"#(Adds the wire <W> on the face <F>.)#"  , py::arg("W"),  py::arg("F"))
        .def("Add",
             (Standard_Boolean (LocOpe_SplitShape::*)(  const NCollection_List<TopoDS_Shape> & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (LocOpe_SplitShape::*)(  const NCollection_List<TopoDS_Shape> & , const TopoDS_Face & ) >(&LocOpe_SplitShape::Add),
             R"#(Adds the list of wires <Lwires> on the face <F>.)#"  , py::arg("Lwires"),  py::arg("F"))
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_SplitShape::*)() const) static_cast<const TopoDS_Shape & (LocOpe_SplitShape::*)() const>(&LocOpe_SplitShape::Shape),
             R"#(Returns the "original" shape.)#" )
        .def("DescendantShapes",
             (const TopTools_ListOfShape & (LocOpe_SplitShape::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (LocOpe_SplitShape::*)( const TopoDS_Shape & ) >(&LocOpe_SplitShape::DescendantShapes),
             R"#(Returns the list of descendant shapes of <S>.)#"  , py::arg("S"))
        .def("LeftOf",
             (const TopTools_ListOfShape & (LocOpe_SplitShape::*)( const TopoDS_Wire & , const TopoDS_Face & ) ) static_cast<const TopTools_ListOfShape & (LocOpe_SplitShape::*)( const TopoDS_Wire & , const TopoDS_Face & ) >(&LocOpe_SplitShape::LeftOf),
             R"#(Returns the "left" part defined by the wire <W> on the face <F>. The returned list of shape is in fact a list of faces. The face <F> is considered with its topological orientation in the original shape. <W> is considered with its orientation.)#"  , py::arg("W"),  py::arg("F"))
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_SplitShape::*)() const) static_cast<const TopoDS_Shape & (LocOpe_SplitShape::*)() const>(&LocOpe_SplitShape::Shape),
             R"#(Returns the "original" shape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_Spliter , shared_ptr<LocOpe_Spliter> >>(m.attr("LocOpe_Spliter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Init",
             (void (LocOpe_Spliter::*)( const TopoDS_Shape & ) ) static_cast<void (LocOpe_Spliter::*)( const TopoDS_Shape & ) >(&LocOpe_Spliter::Init),
             R"#(Initializes the algorithm on the shape <S>.)#"  , py::arg("S"))
        .def("Perform",
             (void (LocOpe_Spliter::*)( const opencascade::handle<LocOpe_WiresOnShape> & ) ) static_cast<void (LocOpe_Spliter::*)( const opencascade::handle<LocOpe_WiresOnShape> & ) >(&LocOpe_Spliter::Perform),
             R"#(None)#"  , py::arg("PW"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_Spliter::*)() const) static_cast<Standard_Boolean (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::IsDone),
             R"#(None)#" )
        .def("ResultingShape",
             (const TopoDS_Shape & (LocOpe_Spliter::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::ResultingShape),
             R"#(Returns the new shape)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_Spliter::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::Shape),
             R"#(Returns the initial shape)#" )
        .def("DirectLeft",
             (const TopTools_ListOfShape & (LocOpe_Spliter::*)() const) static_cast<const TopTools_ListOfShape & (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::DirectLeft),
             R"#(Returns the faces which are the left of the projected wires and which are)#" )
        .def("Left",
             (const TopTools_ListOfShape & (LocOpe_Spliter::*)() const) static_cast<const TopTools_ListOfShape & (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::Left),
             R"#(Returns the faces of the "left" part on the shape. (It is build from DirectLeft, with the faces connected to this set, and so on...).)#" )
        .def("DescendantShapes",
             (const TopTools_ListOfShape & (LocOpe_Spliter::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (LocOpe_Spliter::*)( const TopoDS_Shape & ) >(&LocOpe_Spliter::DescendantShapes),
             R"#(Returns the list of descendant shapes of <S>.)#"  , py::arg("S"))
        .def("Init",
             (void (LocOpe_Spliter::*)( const TopoDS_Shape & ) ) static_cast<void (LocOpe_Spliter::*)( const TopoDS_Shape & ) >(&LocOpe_Spliter::Init),
             R"#(Initializes the algorithm on the shape <S>.)#"  , py::arg("S"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_Spliter::*)() const) static_cast<Standard_Boolean (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::IsDone),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (LocOpe_Spliter::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::Shape),
             R"#(Returns the initial shape)#" )
        .def("ResultingShape",
             (const TopoDS_Shape & (LocOpe_Spliter::*)() const) static_cast<const TopoDS_Shape & (LocOpe_Spliter::*)() const>(&LocOpe_Spliter::ResultingShape),
             R"#(Returns the new shape)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_WiresOnShape ,opencascade::handle<LocOpe_WiresOnShape> , Standard_Transient>>(m.attr("LocOpe_WiresOnShape"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Init",
             (void (LocOpe_WiresOnShape::*)( const TopoDS_Shape & ) ) static_cast<void (LocOpe_WiresOnShape::*)( const TopoDS_Shape & ) >(&LocOpe_WiresOnShape::Init),
             R"#(None)#"  , py::arg("S"))
        .def("Add",
             (Standard_Boolean (LocOpe_WiresOnShape::*)(  const NCollection_Sequence<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)(  const NCollection_Sequence<TopoDS_Shape> & ) >(&LocOpe_WiresOnShape::Add),
             R"#(Add splitting edges or wires for whole initial shape withot additional specification edge->face, edge->edge This method puts edge on the corresponding faces from initial shape)#"  , py::arg("theEdges"))
        .def("SetCheckInterior",
             (void (LocOpe_WiresOnShape::*)( const Standard_Boolean ) ) static_cast<void (LocOpe_WiresOnShape::*)( const Standard_Boolean ) >(&LocOpe_WiresOnShape::SetCheckInterior),
             R"#(Set the flag of check internal intersections default value is True (to check))#"  , py::arg("ToCheckInterior"))
        .def("Bind",
             (void (LocOpe_WiresOnShape::*)( const TopoDS_Wire & , const TopoDS_Face & ) ) static_cast<void (LocOpe_WiresOnShape::*)( const TopoDS_Wire & , const TopoDS_Face & ) >(&LocOpe_WiresOnShape::Bind),
             R"#(None)#"  , py::arg("W"),  py::arg("F"))
        .def("Bind",
             (void (LocOpe_WiresOnShape::*)( const TopoDS_Compound & , const TopoDS_Face & ) ) static_cast<void (LocOpe_WiresOnShape::*)( const TopoDS_Compound & , const TopoDS_Face & ) >(&LocOpe_WiresOnShape::Bind),
             R"#(None)#"  , py::arg("Comp"),  py::arg("F"))
        .def("Bind",
             (void (LocOpe_WiresOnShape::*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<void (LocOpe_WiresOnShape::*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&LocOpe_WiresOnShape::Bind),
             R"#(None)#"  , py::arg("E"),  py::arg("F"))
        .def("Bind",
             (void (LocOpe_WiresOnShape::*)( const TopoDS_Edge & , const TopoDS_Edge & ) ) static_cast<void (LocOpe_WiresOnShape::*)( const TopoDS_Edge & , const TopoDS_Edge & ) >(&LocOpe_WiresOnShape::Bind),
             R"#(None)#"  , py::arg("EfromW"),  py::arg("EonFace"))
        .def("BindAll",
             (void (LocOpe_WiresOnShape::*)() ) static_cast<void (LocOpe_WiresOnShape::*)() >(&LocOpe_WiresOnShape::BindAll),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (LocOpe_WiresOnShape::*)() const) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)() const>(&LocOpe_WiresOnShape::IsDone),
             R"#(None)#" )
        .def("InitEdgeIterator",
             (void (LocOpe_WiresOnShape::*)() ) static_cast<void (LocOpe_WiresOnShape::*)() >(&LocOpe_WiresOnShape::InitEdgeIterator),
             R"#(None)#" )
        .def("MoreEdge",
             (Standard_Boolean (LocOpe_WiresOnShape::*)() ) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)() >(&LocOpe_WiresOnShape::MoreEdge),
             R"#(None)#" )
        .def("Edge",
             (TopoDS_Edge (LocOpe_WiresOnShape::*)() ) static_cast<TopoDS_Edge (LocOpe_WiresOnShape::*)() >(&LocOpe_WiresOnShape::Edge),
             R"#(None)#" )
        .def("OnFace",
             (TopoDS_Face (LocOpe_WiresOnShape::*)() ) static_cast<TopoDS_Face (LocOpe_WiresOnShape::*)() >(&LocOpe_WiresOnShape::OnFace),
             R"#(Returns the face of the shape on which the current edge is projected.)#" )
        .def("OnEdge",
             (Standard_Boolean (LocOpe_WiresOnShape::*)( TopoDS_Edge & ) ) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)( TopoDS_Edge & ) >(&LocOpe_WiresOnShape::OnEdge),
             R"#(If the current edge is projected on an edge, returns <Standard_True> and sets the value of <E>. Otherwise, returns <Standard_False>.)#"  , py::arg("E"))
        .def("NextEdge",
             (void (LocOpe_WiresOnShape::*)() ) static_cast<void (LocOpe_WiresOnShape::*)() >(&LocOpe_WiresOnShape::NextEdge),
             R"#(None)#" )
        .def("OnVertex",
             (Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Vertex & , TopoDS_Vertex & ) ) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Vertex & , TopoDS_Vertex & ) >(&LocOpe_WiresOnShape::OnVertex),
             R"#(None)#"  , py::arg("Vwire"),  py::arg("Vshape"))
        .def("OnEdge",
             (Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Vertex & , TopoDS_Edge & , Standard_Real & ) ) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Vertex & , TopoDS_Edge & , Standard_Real & ) >(&LocOpe_WiresOnShape::OnEdge),
             R"#(If the vertex <V> lies on an edge of the original shape, returns <Standard_True> and sets the concerned edge in <E>, and the parameter on the edge in <P>. Else returns <Standard_False>.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"))
        .def("OnEdge",
             (Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Vertex & , const TopoDS_Edge & , TopoDS_Edge & , Standard_Real & ) ) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Vertex & , const TopoDS_Edge & , TopoDS_Edge & , Standard_Real & ) >(&LocOpe_WiresOnShape::OnEdge),
             R"#(If the vertex <V> lies on an edge of the original shape, returns <Standard_True> and sets the concerned edge in <E>, and the parameter on the edge in <P>. Else returns <Standard_False>.)#"  , py::arg("V"),  py::arg("EdgeFrom"),  py::arg("E"),  py::arg("P"))
        .def("IsFaceWithSection",
             (Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Shape & ) const>(&LocOpe_WiresOnShape::IsFaceWithSection),
             R"#(tells is the face to be split by section or not)#"  , py::arg("aFace"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (LocOpe_WiresOnShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (LocOpe_WiresOnShape::*)() const>(&LocOpe_WiresOnShape::DynamicType),
             R"#(None)#" )
        .def("SetCheckInterior",
             (void (LocOpe_WiresOnShape::*)( const Standard_Boolean ) ) static_cast<void (LocOpe_WiresOnShape::*)( const Standard_Boolean ) >(&LocOpe_WiresOnShape::SetCheckInterior),
             R"#(Set the flag of check internal intersections default value is True (to check))#"  , py::arg("ToCheckInterior"))
        .def("IsDone",
             (Standard_Boolean (LocOpe_WiresOnShape::*)() const) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)() const>(&LocOpe_WiresOnShape::IsDone),
             R"#(None)#" )
        .def("IsFaceWithSection",
             (Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (LocOpe_WiresOnShape::*)( const TopoDS_Shape & ) const>(&LocOpe_WiresOnShape::IsFaceWithSection),
             R"#(tells is the face to be split by section or not)#"  , py::arg("aFace"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&LocOpe_WiresOnShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&LocOpe_WiresOnShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocOpe_GluedShape ,opencascade::handle<LocOpe_GluedShape> , LocOpe_GeneratedShape>>(m.attr("LocOpe_GluedShape"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Init",
             (void (LocOpe_GluedShape::*)( const TopoDS_Shape & ) ) static_cast<void (LocOpe_GluedShape::*)( const TopoDS_Shape & ) >(&LocOpe_GluedShape::Init),
             R"#(None)#"  , py::arg("S"))
        .def("GlueOnFace",
             (void (LocOpe_GluedShape::*)( const TopoDS_Face & ) ) static_cast<void (LocOpe_GluedShape::*)( const TopoDS_Face & ) >(&LocOpe_GluedShape::GlueOnFace),
             R"#(None)#"  , py::arg("F"))
        .def("GeneratingEdges",
             (const TopTools_ListOfShape & (LocOpe_GluedShape::*)() ) static_cast<const TopTools_ListOfShape & (LocOpe_GluedShape::*)() >(&LocOpe_GluedShape::GeneratingEdges),
             R"#(None)#" )
        .def("Generated",
             (TopoDS_Edge (LocOpe_GluedShape::*)( const TopoDS_Vertex & ) ) static_cast<TopoDS_Edge (LocOpe_GluedShape::*)( const TopoDS_Vertex & ) >(&LocOpe_GluedShape::Generated),
             R"#(Returns the edge created by the vertex <V>. If none, must return a null shape.)#"  , py::arg("V"))
        .def("Generated",
             (TopoDS_Face (LocOpe_GluedShape::*)( const TopoDS_Edge & ) ) static_cast<TopoDS_Face (LocOpe_GluedShape::*)( const TopoDS_Edge & ) >(&LocOpe_GluedShape::Generated),
             R"#(Returns the face created by the edge <E>. If none, must return a null shape.)#"  , py::arg("E"))
        .def("OrientedFaces",
             (const TopTools_ListOfShape & (LocOpe_GluedShape::*)() ) static_cast<const TopTools_ListOfShape & (LocOpe_GluedShape::*)() >(&LocOpe_GluedShape::OrientedFaces),
             R"#(Returns the list of correctly oriented generated faces.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (LocOpe_GluedShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (LocOpe_GluedShape::*)() const>(&LocOpe_GluedShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&LocOpe_GluedShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&LocOpe_GluedShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\LocOpe_Spliter.hxx
// ./opencascade\LocOpe_Revol.hxx
// ./opencascade\LocOpe_DPrism.hxx
// ./opencascade\LocOpe_FindEdges.hxx
// ./opencascade\LocOpe_Prism.hxx
// ./opencascade\LocOpe_GluedShape.hxx
// ./opencascade\LocOpe_GeneratedShape.hxx
// ./opencascade\LocOpe_FindEdgesInFace.hxx
// ./opencascade\LocOpe_SplitShape.hxx
// ./opencascade\LocOpe_LinearForm.hxx
// ./opencascade\LocOpe_BuildShape.hxx
// ./opencascade\LocOpe_SequenceOfLin.hxx
// ./opencascade\LocOpe_Generator.hxx
// ./opencascade\LocOpe_CurveShapeIntersector.hxx
// ./opencascade\LocOpe_RevolutionForm.hxx
// ./opencascade\LocOpe_CSIntersector.hxx
// ./opencascade\LocOpe_SequenceOfPntFace.hxx
// ./opencascade\LocOpe_Gluer.hxx
// ./opencascade\LocOpe_Operation.hxx
// ./opencascade\LocOpe.hxx
// ./opencascade\LocOpe_DataMapIteratorOfDataMapOfShapePnt.hxx
// ./opencascade\LocOpe_Pipe.hxx
// ./opencascade\LocOpe_BuildWires.hxx
// ./opencascade\LocOpe_WiresOnShape.hxx
// ./opencascade\LocOpe_DataMapOfShapePnt.hxx
// ./opencascade\LocOpe_SplitDrafts.hxx
// ./opencascade\LocOpe_PntFace.hxx
// ./opencascade\LocOpe_SequenceOfCirc.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<gp_Lin>(m,"LocOpe_SequenceOfLin");
    register_template_NCollection_Sequence<LocOpe_PntFace>(m,"LocOpe_SequenceOfPntFace");
    register_template_NCollection_DataMap<TopoDS_Shape, gp_Pnt, TopTools_ShapeMapHasher>(m,"LocOpe_DataMapOfShapePnt");
    register_template_NCollection_Sequence<gp_Circ>(m,"LocOpe_SequenceOfCirc");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

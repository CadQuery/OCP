
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
#include <HLRAlgo_Projector.hxx>
#include <Contap_Contour.hxx>
#include <HLRTopoBRep_Data.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Vertex.hxx>
#include <Contap_Point.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <HLRTopoBRep_Data.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Line.hxx>

// module includes
#include <HLRTopoBRep_Data.hxx>
#include <HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData.hxx>
#include <HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData.hxx>
#include <HLRTopoBRep_DataMapOfShapeFaceData.hxx>
#include <HLRTopoBRep_DSFiller.hxx>
#include <HLRTopoBRep_FaceData.hxx>
#include <HLRTopoBRep_FaceIsoLiner.hxx>
#include <HLRTopoBRep_ListIteratorOfListOfVData.hxx>
#include <HLRTopoBRep_ListOfVData.hxx>
#include <HLRTopoBRep_MapOfShapeListOfVData.hxx>
#include <HLRTopoBRep_OutLiner.hxx>
#include <HLRTopoBRep_VData.hxx>

// template related includes
// ./opencascade\HLRTopoBRep_ListOfVData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRTopoBRep_ListOfVData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRTopoBRep_DataMapOfShapeFaceData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRTopoBRep_DataMapOfShapeFaceData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRTopoBRep_MapOfShapeListOfVData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRTopoBRep_MapOfShapeListOfVData.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_HLRTopoBRep(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("HLRTopoBRep"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<HLRTopoBRep_DSFiller , shared_ptr<HLRTopoBRep_DSFiller>>(m,"HLRTopoBRep_DSFiller");

    static_cast<py::class_<HLRTopoBRep_DSFiller , shared_ptr<HLRTopoBRep_DSFiller> >>(m.attr("HLRTopoBRep_DSFiller"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Insert_s",
                    (void (*)( const TopoDS_Shape & , Contap_Contour & , HLRTopoBRep_Data & , NCollection_DataMap<TopoDS_Shape, BRepTopAdaptor_Tool, TopTools_ShapeMapHasher> & , const Standard_Integer ) ) static_cast<void (*)( const TopoDS_Shape & , Contap_Contour & , HLRTopoBRep_Data & , NCollection_DataMap<TopoDS_Shape, BRepTopAdaptor_Tool, TopTools_ShapeMapHasher> & , const Standard_Integer ) >(&HLRTopoBRep_DSFiller::Insert),
                    R"#(Stores in <DS> the outlines of <S> using the current outliner and stores the isolines in <DS> using a Hatcher.)#"  , py::arg("S"),  py::arg("FO"),  py::arg("DS"),  py::arg("MST"),  py::arg("nbIso"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRTopoBRep_Data , shared_ptr<HLRTopoBRep_Data> >>(m.attr("HLRTopoBRep_Data"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (HLRTopoBRep_Data::*)() ) static_cast<void (HLRTopoBRep_Data::*)() >(&HLRTopoBRep_Data::Clear),
             R"#(Clear of all the maps.)#" )
        .def("Clean",
             (void (HLRTopoBRep_Data::*)() ) static_cast<void (HLRTopoBRep_Data::*)() >(&HLRTopoBRep_Data::Clean),
             R"#(Clear of all the data not needed during and after the hiding process.)#" )
        .def("EdgeHasSplE",
             (Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Edge & ) const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Edge & ) const>(&HLRTopoBRep_Data::EdgeHasSplE),
             R"#(Returns True if the Edge is split.)#"  , py::arg("E"))
        .def("FaceHasIntL",
             (Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const>(&HLRTopoBRep_Data::FaceHasIntL),
             R"#(Returns True if the Face has internal outline.)#"  , py::arg("F"))
        .def("FaceHasOutL",
             (Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const>(&HLRTopoBRep_Data::FaceHasOutL),
             R"#(Returns True if the Face has outlines on restriction.)#"  , py::arg("F"))
        .def("FaceHasIsoL",
             (Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const>(&HLRTopoBRep_Data::FaceHasIsoL),
             R"#(Returns True if the Face has isolines.)#"  , py::arg("F"))
        .def("IsSplEEdgeEdge",
             (Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Edge & , const TopoDS_Edge & ) const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Edge & , const TopoDS_Edge & ) const>(&HLRTopoBRep_Data::IsSplEEdgeEdge),
             R"#(None)#"  , py::arg("E1"),  py::arg("E2"))
        .def("IsIntLFaceEdge",
             (Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Face & , const TopoDS_Edge & ) const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Face & , const TopoDS_Edge & ) const>(&HLRTopoBRep_Data::IsIntLFaceEdge),
             R"#(None)#"  , py::arg("F"),  py::arg("E"))
        .def("IsOutLFaceEdge",
             (Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Face & , const TopoDS_Edge & ) const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Face & , const TopoDS_Edge & ) const>(&HLRTopoBRep_Data::IsOutLFaceEdge),
             R"#(None)#"  , py::arg("F"),  py::arg("E"))
        .def("IsIsoLFaceEdge",
             (Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Face & , const TopoDS_Edge & ) const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Face & , const TopoDS_Edge & ) const>(&HLRTopoBRep_Data::IsIsoLFaceEdge),
             R"#(None)#"  , py::arg("F"),  py::arg("E"))
        .def("NewSOldS",
             (TopoDS_Shape (HLRTopoBRep_Data::*)( const TopoDS_Shape & ) const) static_cast<TopoDS_Shape (HLRTopoBRep_Data::*)( const TopoDS_Shape & ) const>(&HLRTopoBRep_Data::NewSOldS),
             R"#(None)#"  , py::arg("New"))
        .def("EdgeSplE",
             (const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Edge & ) const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Edge & ) const>(&HLRTopoBRep_Data::EdgeSplE),
             R"#(Returns the list of the edges.)#"  , py::arg("E"))
        .def("FaceIntL",
             (const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const>(&HLRTopoBRep_Data::FaceIntL),
             R"#(Returns the list of the internal OutLines.)#"  , py::arg("F"))
        .def("FaceOutL",
             (const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const>(&HLRTopoBRep_Data::FaceOutL),
             R"#(Returns the list of the OutLines on restriction.)#"  , py::arg("F"))
        .def("FaceIsoL",
             (const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const>(&HLRTopoBRep_Data::FaceIsoL),
             R"#(Returns the list of the IsoLines.)#"  , py::arg("F"))
        .def("IsOutV",
             (Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) const>(&HLRTopoBRep_Data::IsOutV),
             R"#(Returns True if V is an outline vertex on a restriction.)#"  , py::arg("V"))
        .def("IsIntV",
             (Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) const>(&HLRTopoBRep_Data::IsIntV),
             R"#(Returns True if V is an internal outline vertex.)#"  , py::arg("V"))
        .def("AddOldS",
             (void (HLRTopoBRep_Data::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (HLRTopoBRep_Data::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&HLRTopoBRep_Data::AddOldS),
             R"#(None)#"  , py::arg("NewS"),  py::arg("OldS"))
        .def("AddSplE",
             (TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Edge & ) ) static_cast<TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Edge & ) >(&HLRTopoBRep_Data::AddSplE),
             R"#(None)#"  , py::arg("E"))
        .def("AddIntL",
             (TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) ) static_cast<TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) >(&HLRTopoBRep_Data::AddIntL),
             R"#(None)#"  , py::arg("F"))
        .def("AddOutL",
             (TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) ) static_cast<TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) >(&HLRTopoBRep_Data::AddOutL),
             R"#(None)#"  , py::arg("F"))
        .def("AddIsoL",
             (TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) ) static_cast<TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) >(&HLRTopoBRep_Data::AddIsoL),
             R"#(None)#"  , py::arg("F"))
        .def("AddOutV",
             (void (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) ) static_cast<void (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) >(&HLRTopoBRep_Data::AddOutV),
             R"#(None)#"  , py::arg("V"))
        .def("AddIntV",
             (void (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) ) static_cast<void (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) >(&HLRTopoBRep_Data::AddIntV),
             R"#(None)#"  , py::arg("V"))
        .def("InitEdge",
             (void (HLRTopoBRep_Data::*)() ) static_cast<void (HLRTopoBRep_Data::*)() >(&HLRTopoBRep_Data::InitEdge),
             R"#(None)#" )
        .def("MoreEdge",
             (Standard_Boolean (HLRTopoBRep_Data::*)() const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)() const>(&HLRTopoBRep_Data::MoreEdge),
             R"#(None)#" )
        .def("NextEdge",
             (void (HLRTopoBRep_Data::*)() ) static_cast<void (HLRTopoBRep_Data::*)() >(&HLRTopoBRep_Data::NextEdge),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (HLRTopoBRep_Data::*)() const) static_cast<const TopoDS_Edge & (HLRTopoBRep_Data::*)() const>(&HLRTopoBRep_Data::Edge),
             R"#(None)#" )
        .def("InitVertex",
             (void (HLRTopoBRep_Data::*)( const TopoDS_Edge & ) ) static_cast<void (HLRTopoBRep_Data::*)( const TopoDS_Edge & ) >(&HLRTopoBRep_Data::InitVertex),
             R"#(Start an iteration on the vertices of E.)#"  , py::arg("E"))
        .def("MoreVertex",
             (Standard_Boolean (HLRTopoBRep_Data::*)() const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)() const>(&HLRTopoBRep_Data::MoreVertex),
             R"#(None)#" )
        .def("NextVertex",
             (void (HLRTopoBRep_Data::*)() ) static_cast<void (HLRTopoBRep_Data::*)() >(&HLRTopoBRep_Data::NextVertex),
             R"#(None)#" )
        .def("Vertex",
             (const TopoDS_Vertex & (HLRTopoBRep_Data::*)() const) static_cast<const TopoDS_Vertex & (HLRTopoBRep_Data::*)() const>(&HLRTopoBRep_Data::Vertex),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (HLRTopoBRep_Data::*)() const) static_cast<Standard_Real (HLRTopoBRep_Data::*)() const>(&HLRTopoBRep_Data::Parameter),
             R"#(None)#" )
        .def("InsertBefore",
             (void (HLRTopoBRep_Data::*)( const TopoDS_Vertex & , const Standard_Real ) ) static_cast<void (HLRTopoBRep_Data::*)( const TopoDS_Vertex & , const Standard_Real ) >(&HLRTopoBRep_Data::InsertBefore),
             R"#(Insert before the current position.)#"  , py::arg("V"),  py::arg("P"))
        .def("Append",
             (void (HLRTopoBRep_Data::*)( const TopoDS_Vertex & , const Standard_Real ) ) static_cast<void (HLRTopoBRep_Data::*)( const TopoDS_Vertex & , const Standard_Real ) >(&HLRTopoBRep_Data::Append),
             R"#(None)#"  , py::arg("V"),  py::arg("P"))
        .def("EdgeSplE",
             (const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Edge & ) const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Edge & ) const>(&HLRTopoBRep_Data::EdgeSplE),
             R"#(Returns the list of the edges.)#"  , py::arg("E"))
        .def("FaceIntL",
             (const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const>(&HLRTopoBRep_Data::FaceIntL),
             R"#(Returns the list of the internal OutLines.)#"  , py::arg("F"))
        .def("FaceOutL",
             (const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const>(&HLRTopoBRep_Data::FaceOutL),
             R"#(Returns the list of the OutLines on restriction.)#"  , py::arg("F"))
        .def("FaceIsoL",
             (const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_Data::*)( const TopoDS_Face & ) const>(&HLRTopoBRep_Data::FaceIsoL),
             R"#(Returns the list of the IsoLines.)#"  , py::arg("F"))
        .def("IsOutV",
             (Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) const>(&HLRTopoBRep_Data::IsOutV),
             R"#(Returns True if V is an outline vertex on a restriction.)#"  , py::arg("V"))
        .def("IsIntV",
             (Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) const>(&HLRTopoBRep_Data::IsIntV),
             R"#(Returns True if V is an internal outline vertex.)#"  , py::arg("V"))
        .def("AddOutV",
             (void (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) ) static_cast<void (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) >(&HLRTopoBRep_Data::AddOutV),
             R"#(None)#"  , py::arg("V"))
        .def("AddIntV",
             (void (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) ) static_cast<void (HLRTopoBRep_Data::*)( const TopoDS_Vertex & ) >(&HLRTopoBRep_Data::AddIntV),
             R"#(None)#"  , py::arg("V"))
        .def("MoreEdge",
             (Standard_Boolean (HLRTopoBRep_Data::*)() const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)() const>(&HLRTopoBRep_Data::MoreEdge),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (HLRTopoBRep_Data::*)() const) static_cast<const TopoDS_Edge & (HLRTopoBRep_Data::*)() const>(&HLRTopoBRep_Data::Edge),
             R"#(None)#" )
        .def("MoreVertex",
             (Standard_Boolean (HLRTopoBRep_Data::*)() const) static_cast<Standard_Boolean (HLRTopoBRep_Data::*)() const>(&HLRTopoBRep_Data::MoreVertex),
             R"#(None)#" )
        .def("NextVertex",
             (void (HLRTopoBRep_Data::*)() ) static_cast<void (HLRTopoBRep_Data::*)() >(&HLRTopoBRep_Data::NextVertex),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRTopoBRep_FaceData , shared_ptr<HLRTopoBRep_FaceData> >>(m.attr("HLRTopoBRep_FaceData"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("FaceIntL",
             (const TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() const>(&HLRTopoBRep_FaceData::FaceIntL),
             R"#(None)#" )
        .def("FaceOutL",
             (const TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() const>(&HLRTopoBRep_FaceData::FaceOutL),
             R"#(None)#" )
        .def("FaceIsoL",
             (const TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() const>(&HLRTopoBRep_FaceData::FaceIsoL),
             R"#(None)#" )
        .def("AddIntL",
             (TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() ) static_cast<TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() >(&HLRTopoBRep_FaceData::AddIntL),
             R"#(None)#" )
        .def("AddOutL",
             (TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() ) static_cast<TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() >(&HLRTopoBRep_FaceData::AddOutL),
             R"#(None)#" )
        .def("AddIsoL",
             (TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() ) static_cast<TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() >(&HLRTopoBRep_FaceData::AddIsoL),
             R"#(None)#" )
        .def("FaceIntL",
             (const TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() const>(&HLRTopoBRep_FaceData::FaceIntL),
             R"#(None)#" )
        .def("FaceOutL",
             (const TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() const>(&HLRTopoBRep_FaceData::FaceOutL),
             R"#(None)#" )
        .def("FaceIsoL",
             (const TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() const) static_cast<const TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() const>(&HLRTopoBRep_FaceData::FaceIsoL),
             R"#(None)#" )
        .def("AddIntL",
             (TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() ) static_cast<TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() >(&HLRTopoBRep_FaceData::AddIntL),
             R"#(None)#" )
        .def("AddOutL",
             (TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() ) static_cast<TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() >(&HLRTopoBRep_FaceData::AddOutL),
             R"#(None)#" )
        .def("AddIsoL",
             (TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() ) static_cast<TopTools_ListOfShape & (HLRTopoBRep_FaceData::*)() >(&HLRTopoBRep_FaceData::AddIsoL),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRTopoBRep_FaceIsoLiner , shared_ptr<HLRTopoBRep_FaceIsoLiner>>(m,"HLRTopoBRep_FaceIsoLiner");

    static_cast<py::class_<HLRTopoBRep_FaceIsoLiner , shared_ptr<HLRTopoBRep_FaceIsoLiner> >>(m.attr("HLRTopoBRep_FaceIsoLiner"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Perform_s",
                    (void (*)( const Standard_Integer , const TopoDS_Face & , HLRTopoBRep_Data & , const Standard_Integer ) ) static_cast<void (*)( const Standard_Integer , const TopoDS_Face & , HLRTopoBRep_Data & , const Standard_Integer ) >(&HLRTopoBRep_FaceIsoLiner::Perform),
                    R"#(None)#"  , py::arg("FI"),  py::arg("F"),  py::arg("DS"),  py::arg("nbIsos"))
        .def_static("MakeVertex_s",
                    (TopoDS_Vertex (*)( const TopoDS_Edge & , const gp_Pnt & , const Standard_Real , const Standard_Real , HLRTopoBRep_Data & ) ) static_cast<TopoDS_Vertex (*)( const TopoDS_Edge & , const gp_Pnt & , const Standard_Real , const Standard_Real , HLRTopoBRep_Data & ) >(&HLRTopoBRep_FaceIsoLiner::MakeVertex),
                    R"#(None)#"  , py::arg("E"),  py::arg("P"),  py::arg("Par"),  py::arg("Tol"),  py::arg("DS"))
        .def_static("MakeIsoLine_s",
                    (void (*)( const TopoDS_Face & , const opencascade::handle<Geom2d_Line> & , TopoDS_Vertex & , TopoDS_Vertex & , const Standard_Real , const Standard_Real , const Standard_Real , HLRTopoBRep_Data & ) ) static_cast<void (*)( const TopoDS_Face & , const opencascade::handle<Geom2d_Line> & , TopoDS_Vertex & , TopoDS_Vertex & , const Standard_Real , const Standard_Real , const Standard_Real , HLRTopoBRep_Data & ) >(&HLRTopoBRep_FaceIsoLiner::MakeIsoLine),
                    R"#(None)#"  , py::arg("F"),  py::arg("Iso"),  py::arg("V1"),  py::arg("V2"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"),  py::arg("DS"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRTopoBRep_OutLiner ,opencascade::handle<HLRTopoBRep_OutLiner> , Standard_Transient>>(m.attr("HLRTopoBRep_OutLiner"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("OriSh") )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("OriS"),  py::arg("OutS") )
    // custom constructors
    // methods
        .def("OriginalShape",
             (void (HLRTopoBRep_OutLiner::*)( const TopoDS_Shape & ) ) static_cast<void (HLRTopoBRep_OutLiner::*)( const TopoDS_Shape & ) >(&HLRTopoBRep_OutLiner::OriginalShape),
             R"#(None)#"  , py::arg("OriS"))
        .def("OriginalShape",
             (TopoDS_Shape & (HLRTopoBRep_OutLiner::*)() ) static_cast<TopoDS_Shape & (HLRTopoBRep_OutLiner::*)() >(&HLRTopoBRep_OutLiner::OriginalShape),
             R"#(None)#" )
        .def("OutLinedShape",
             (void (HLRTopoBRep_OutLiner::*)( const TopoDS_Shape & ) ) static_cast<void (HLRTopoBRep_OutLiner::*)( const TopoDS_Shape & ) >(&HLRTopoBRep_OutLiner::OutLinedShape),
             R"#(None)#"  , py::arg("OutS"))
        .def("OutLinedShape",
             (TopoDS_Shape & (HLRTopoBRep_OutLiner::*)() ) static_cast<TopoDS_Shape & (HLRTopoBRep_OutLiner::*)() >(&HLRTopoBRep_OutLiner::OutLinedShape),
             R"#(None)#" )
        .def("DataStructure",
             (HLRTopoBRep_Data & (HLRTopoBRep_OutLiner::*)() ) static_cast<HLRTopoBRep_Data & (HLRTopoBRep_OutLiner::*)() >(&HLRTopoBRep_OutLiner::DataStructure),
             R"#(None)#" )
        .def("Fill",
             (void (HLRTopoBRep_OutLiner::*)( const HLRAlgo_Projector & , NCollection_DataMap<TopoDS_Shape, BRepTopAdaptor_Tool, TopTools_ShapeMapHasher> & , const Standard_Integer ) ) static_cast<void (HLRTopoBRep_OutLiner::*)( const HLRAlgo_Projector & , NCollection_DataMap<TopoDS_Shape, BRepTopAdaptor_Tool, TopTools_ShapeMapHasher> & , const Standard_Integer ) >(&HLRTopoBRep_OutLiner::Fill),
             R"#(None)#"  , py::arg("P"),  py::arg("MST"),  py::arg("nbIso"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRTopoBRep_OutLiner::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRTopoBRep_OutLiner::*)() const>(&HLRTopoBRep_OutLiner::DynamicType),
             R"#(None)#" )
        .def("OriginalShape",
             (void (HLRTopoBRep_OutLiner::*)( const TopoDS_Shape & ) ) static_cast<void (HLRTopoBRep_OutLiner::*)( const TopoDS_Shape & ) >(&HLRTopoBRep_OutLiner::OriginalShape),
             R"#(None)#"  , py::arg("OriS"))
        .def("OriginalShape",
             (TopoDS_Shape & (HLRTopoBRep_OutLiner::*)() ) static_cast<TopoDS_Shape & (HLRTopoBRep_OutLiner::*)() >(&HLRTopoBRep_OutLiner::OriginalShape),
             R"#(None)#" )
        .def("OutLinedShape",
             (void (HLRTopoBRep_OutLiner::*)( const TopoDS_Shape & ) ) static_cast<void (HLRTopoBRep_OutLiner::*)( const TopoDS_Shape & ) >(&HLRTopoBRep_OutLiner::OutLinedShape),
             R"#(None)#"  , py::arg("OutS"))
        .def("OutLinedShape",
             (TopoDS_Shape & (HLRTopoBRep_OutLiner::*)() ) static_cast<TopoDS_Shape & (HLRTopoBRep_OutLiner::*)() >(&HLRTopoBRep_OutLiner::OutLinedShape),
             R"#(None)#" )
        .def("DataStructure",
             (HLRTopoBRep_Data & (HLRTopoBRep_OutLiner::*)() ) static_cast<HLRTopoBRep_Data & (HLRTopoBRep_OutLiner::*)() >(&HLRTopoBRep_OutLiner::DataStructure),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRTopoBRep_OutLiner::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&HLRTopoBRep_OutLiner::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRTopoBRep_VData , shared_ptr<HLRTopoBRep_VData> >>(m.attr("HLRTopoBRep_VData"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const TopoDS_Shape & >()  , py::arg("P"),  py::arg("V") )
    // custom constructors
    // methods
        .def("Parameter",
             (Standard_Real (HLRTopoBRep_VData::*)() const) static_cast<Standard_Real (HLRTopoBRep_VData::*)() const>(&HLRTopoBRep_VData::Parameter),
             R"#(None)#" )
        .def("Vertex",
             (const TopoDS_Shape & (HLRTopoBRep_VData::*)() const) static_cast<const TopoDS_Shape & (HLRTopoBRep_VData::*)() const>(&HLRTopoBRep_VData::Vertex),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (HLRTopoBRep_VData::*)() const) static_cast<Standard_Real (HLRTopoBRep_VData::*)() const>(&HLRTopoBRep_VData::Parameter),
             R"#(None)#" )
        .def("Vertex",
             (const TopoDS_Shape & (HLRTopoBRep_VData::*)() const) static_cast<const TopoDS_Shape & (HLRTopoBRep_VData::*)() const>(&HLRTopoBRep_VData::Vertex),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\HLRTopoBRep_ListOfVData.hxx
// ./opencascade\HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData.hxx
// ./opencascade\HLRTopoBRep_Data.hxx
// ./opencascade\HLRTopoBRep_OutLiner.hxx
// ./opencascade\HLRTopoBRep_ListIteratorOfListOfVData.hxx
// ./opencascade\HLRTopoBRep_FaceData.hxx
// ./opencascade\HLRTopoBRep_DSFiller.hxx
// ./opencascade\HLRTopoBRep_DataMapOfShapeFaceData.hxx
// ./opencascade\HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData.hxx
// ./opencascade\HLRTopoBRep_MapOfShapeListOfVData.hxx
// ./opencascade\HLRTopoBRep_VData.hxx
// ./opencascade\HLRTopoBRep_FaceIsoLiner.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<HLRTopoBRep_VData>(m,"HLRTopoBRep_ListOfVData");
    register_template_NCollection_DataMap<TopoDS_Shape, HLRTopoBRep_FaceData, TopTools_ShapeMapHasher>(m,"HLRTopoBRep_DataMapOfShapeFaceData");
    register_template_NCollection_DataMap<TopoDS_Shape, HLRTopoBRep_ListOfVData, TopTools_ShapeMapHasher>(m,"HLRTopoBRep_MapOfShapeListOfVData");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

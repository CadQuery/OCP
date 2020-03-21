
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
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
#include <HLRAlgo_Projector.hxx>

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
// ./opencascade/HLRTopoBRep_ListOfVData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRTopoBRep_ListOfVData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRTopoBRep_MapOfShapeListOfVData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRTopoBRep_MapOfShapeListOfVData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRTopoBRep_DataMapOfShapeFaceData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRTopoBRep_DataMapOfShapeFaceData.hxx
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRTopoBRep_Data , shared_ptr<HLRTopoBRep_Data> >>(m.attr("HLRTopoBRep_Data"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRTopoBRep_OutLiner ,opencascade::handle<HLRTopoBRep_OutLiner> , Standard_Transient>>(m.attr("HLRTopoBRep_OutLiner"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRTopoBRep_VData , shared_ptr<HLRTopoBRep_VData> >>(m.attr("HLRTopoBRep_VData"))
    // constructors
        .def(py::init<  >()  )
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
// ./opencascade/HLRTopoBRep_ListOfVData.hxx
// ./opencascade/HLRTopoBRep_VData.hxx
// ./opencascade/HLRTopoBRep_Data.hxx
// ./opencascade/HLRTopoBRep_DSFiller.hxx
// ./opencascade/HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData.hxx
// ./opencascade/HLRTopoBRep_MapOfShapeListOfVData.hxx
// ./opencascade/HLRTopoBRep_DataMapOfShapeFaceData.hxx
// ./opencascade/HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData.hxx
// ./opencascade/HLRTopoBRep_ListIteratorOfListOfVData.hxx
// ./opencascade/HLRTopoBRep_FaceIsoLiner.hxx
// ./opencascade/HLRTopoBRep_OutLiner.hxx
// ./opencascade/HLRTopoBRep_FaceData.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<HLRTopoBRep_VData>(m,"HLRTopoBRep_ListOfVData");
    register_template_NCollection_DataMap<TopoDS_Shape, HLRTopoBRep_ListOfVData, TopTools_ShapeMapHasher>(m,"HLRTopoBRep_MapOfShapeListOfVData");
    register_template_NCollection_DataMap<TopoDS_Shape, HLRTopoBRep_FaceData, TopTools_ShapeMapHasher>(m,"HLRTopoBRep_DataMapOfShapeFaceData");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

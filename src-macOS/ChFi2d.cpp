
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

    // default constructor
    register_default_constructor<ChFi2d , shared_ptr<ChFi2d>>(m,"ChFi2d");

    static_cast<py::class_<ChFi2d , shared_ptr<ChFi2d> >>(m.attr("ChFi2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFi2d_AnaFilletAlgo , shared_ptr<ChFi2d_AnaFilletAlgo> >>(m.attr("ChFi2d_AnaFilletAlgo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFi2d_Builder , shared_ptr<ChFi2d_Builder> >>(m.attr("ChFi2d_Builder"))
    // constructors
    // custom constructors
    // methods
        .def("Result",
             (TopoDS_Face (ChFi2d_Builder::*)() const) static_cast<TopoDS_Face (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::Result),
             R"#(returns the modified face)#" )
        .def("IsModified",
             (Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge & ) const) static_cast<Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge & ) const>(&ChFi2d_Builder::IsModified),
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
             (Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge & ) const) static_cast<Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge & ) const>(&ChFi2d_Builder::HasDescendant),
             R"#(None)#"  , py::arg("E"))
        .def("DescendantEdge",
             (const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge & ) const) static_cast<const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge & ) const>(&ChFi2d_Builder::DescendantEdge),
             R"#(returns the modified edge if <E> has descendant or <E> in the other case.)#"  , py::arg("E"))
        .def("Status",
             (ChFi2d_ConstructionError (ChFi2d_Builder::*)() const) static_cast<ChFi2d_ConstructionError (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::Status),
             R"#(None)#" )
        .def("Result",
             (TopoDS_Face (ChFi2d_Builder::*)() const) static_cast<TopoDS_Face (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::Result),
             R"#(returns the modified face)#" )
        .def("IsModified",
             (Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge & ) const) static_cast<Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge & ) const>(&ChFi2d_Builder::IsModified),
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
             (Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge & ) const) static_cast<Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge & ) const>(&ChFi2d_Builder::HasDescendant),
             R"#(None)#"  , py::arg("E"))
        .def("DescendantEdge",
             (const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge & ) const) static_cast<const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge & ) const>(&ChFi2d_Builder::DescendantEdge),
             R"#(returns the modified edge if <E> has descendant or <E> in the other case.)#"  , py::arg("E"))
        .def("Status",
             (ChFi2d_ConstructionError (ChFi2d_Builder::*)() const) static_cast<ChFi2d_ConstructionError (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::Status),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFi2d_ChamferAPI , shared_ptr<ChFi2d_ChamferAPI> >>(m.attr("ChFi2d_ChamferAPI"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFi2d_FilletAPI , shared_ptr<ChFi2d_FilletAPI> >>(m.attr("ChFi2d_FilletAPI"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFi2d_FilletAlgo , shared_ptr<ChFi2d_FilletAlgo> >>(m.attr("ChFi2d_FilletAlgo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FilletPoint , shared_ptr<FilletPoint> >>(m.attr("FilletPoint"))
    // constructors
    // custom constructors
    // methods
        .def("setParam",
             (void (FilletPoint::*)( Standard_Real ) ) static_cast<void (FilletPoint::*)( Standard_Real ) >(&FilletPoint::setParam),
             R"#(Changes the point position by changing point parameter on the first curve.)#"  , py::arg("theParam"))
        .def("getParam",
             (Standard_Real (FilletPoint::*)() const) static_cast<Standard_Real (FilletPoint::*)() const>(&FilletPoint::getParam),
             R"#(Returns the point parameter on the first curve.)#" )
        .def("getNBValues",
             (Standard_Integer (FilletPoint::*)() ) static_cast<Standard_Integer (FilletPoint::*)() >(&FilletPoint::getNBValues),
             R"#(Returns number of found values of function in this point.)#" )
        .def("getValue",
             (Standard_Real (FilletPoint::*)( int ) ) static_cast<Standard_Real (FilletPoint::*)( int ) >(&FilletPoint::getValue),
             R"#(Returns value of function in this point.)#"  , py::arg("theIndex"))
        .def("getDiff",
             (Standard_Real (FilletPoint::*)( int ) ) static_cast<Standard_Real (FilletPoint::*)( int ) >(&FilletPoint::getDiff),
             R"#(Returns derivatives of function in this point.)#"  , py::arg("theIndex"))
        .def("isValid",
             (Standard_Boolean (FilletPoint::*)( int ) ) static_cast<Standard_Boolean (FilletPoint::*)( int ) >(&FilletPoint::isValid),
             R"#(Returns true if function is valid (rediuses vectors of fillet do not intersect any curve).)#"  , py::arg("theIndex"))
        .def("getNear",
             (int (FilletPoint::*)( int ) ) static_cast<int (FilletPoint::*)( int ) >(&FilletPoint::getNear),
             R"#(Returns the index of the nearest value)#"  , py::arg("theIndex"))
        .def("setParam2",
             (void (FilletPoint::*)( const Standard_Real ) ) static_cast<void (FilletPoint::*)( const Standard_Real ) >(&FilletPoint::setParam2),
             R"#(Defines the parameter of the projected point on the second curve.)#"  , py::arg("theParam2"))
        .def("getParam2",
             (Standard_Real (FilletPoint::*)() ) static_cast<Standard_Real (FilletPoint::*)() >(&FilletPoint::getParam2),
             R"#(Returns the parameter of the projected point on the second curve.)#" )
        .def("setCenter",
             (void (FilletPoint::*)( const gp_Pnt2d ) ) static_cast<void (FilletPoint::*)( const gp_Pnt2d ) >(&FilletPoint::setCenter),
             R"#(Center of the fillet.)#"  , py::arg("thePoint"))
        .def("getCenter",
             (const gp_Pnt2d (FilletPoint::*)() ) static_cast<const gp_Pnt2d (FilletPoint::*)() >(&FilletPoint::getCenter),
             R"#(Center of the fillet.)#" )
        .def("LowerValue",
             (Standard_Real (FilletPoint::*)() ) static_cast<Standard_Real (FilletPoint::*)() >(&FilletPoint::LowerValue),
             R"#(For debug only)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ChFi2d.hxx
// ./opencascade/ChFi2d_Builder.hxx
// ./opencascade/ChFi2d_ConstructionError.hxx
// ./opencascade/ChFi2d_FilletAPI.hxx
// ./opencascade/ChFi2d_AnaFilletAlgo.hxx
// ./opencascade/ChFi2d_FilletAlgo.hxx
// ./opencascade/ChFi2d_ChamferAPI.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

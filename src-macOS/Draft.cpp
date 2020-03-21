
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <gp_Dir.hxx>
#include <Draft_Modification.hxx>
#include <Draft_FaceInfo.hxx>
#include <Draft_EdgeInfo.hxx>
#include <Draft_VertexInfo.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <Draft.hxx>
#include <Draft_EdgeInfo.hxx>
#include <Draft_ErrorStatus.hxx>
#include <Draft_FaceInfo.hxx>
#include <Draft_IndexedDataMapOfEdgeEdgeInfo.hxx>
#include <Draft_IndexedDataMapOfFaceFaceInfo.hxx>
#include <Draft_IndexedDataMapOfVertexVertexInfo.hxx>
#include <Draft_Modification.hxx>
#include <Draft_VertexInfo.hxx>

// template related includes
// ./opencascade/Draft_IndexedDataMapOfEdgeEdgeInfo.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Draft_IndexedDataMapOfVertexVertexInfo.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Draft_IndexedDataMapOfFaceFaceInfo.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Draft(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Draft"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<Draft , shared_ptr<Draft>>(m,"Draft");

    static_cast<py::class_<Draft , shared_ptr<Draft> >>(m.attr("Draft"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Draft_EdgeInfo , shared_ptr<Draft_EdgeInfo> >>(m.attr("Draft_EdgeInfo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Draft_FaceInfo , shared_ptr<Draft_FaceInfo> >>(m.attr("Draft_FaceInfo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Draft_Modification ,opencascade::handle<Draft_Modification> , BRepTools_Modification>>(m.attr("Draft_Modification"))
    // constructors
    // custom constructors
    // methods
        .def("NewSurface",
             (Standard_Boolean (Draft_Modification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (Draft_Modification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) >(&Draft_Modification::NewSurface),
             R"#(Returns Standard_True if the face <F> has been modified. In this case, <S> is the new geometric support of the face, <L> the new location,<Tol> the new tolerance.<RevWires> has to be set to Standard_True when the modification reverses the normal of the surface.(the wires have to be reversed). <RevFace> has to be set to Standard_True if the orientation of the modified face changes in the shells which contain it. Here it will be set to Standard_False.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (Draft_Modification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) ) static_cast<Standard_Boolean (Draft_Modification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) >(&Draft_Modification::NewCurve),
             R"#(Returns Standard_True if the edge <E> has been modified. In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (Draft_Modification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (Draft_Modification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) >(&Draft_Modification::NewPoint),
             R"#(Returns Standard_True if the vertex <V> has been modified. In this case, <P> is the new geometric support of the vertex, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (Draft_Modification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) ) static_cast<Standard_Boolean (Draft_Modification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) >(&Draft_Modification::NewCurve2d),
             R"#(Returns Standard_True if the edge <E> has a new curve on surface on the face <F>.In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (Draft_Modification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Draft_Modification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&Draft_Modification::NewParameter),
             R"#(Returns Standard_True if the Vertex <V> has a new parameter on the edge <E>. In this case, <P> is the parameter, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (Draft_Modification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<GeomAbs_Shape (Draft_Modification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&Draft_Modification::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Draft_Modification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Draft_Modification::*)() const>(&Draft_Modification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Draft_Modification::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Draft_VertexInfo , shared_ptr<Draft_VertexInfo> >>(m.attr("Draft_VertexInfo"))
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
// ./opencascade/Draft_IndexedDataMapOfEdgeEdgeInfo.hxx
// ./opencascade/Draft.hxx
// ./opencascade/Draft_IndexedDataMapOfVertexVertexInfo.hxx
// ./opencascade/Draft_VertexInfo.hxx
// ./opencascade/Draft_Modification.hxx
// ./opencascade/Draft_ErrorStatus.hxx
// ./opencascade/Draft_FaceInfo.hxx
// ./opencascade/Draft_IndexedDataMapOfFaceFaceInfo.hxx
// ./opencascade/Draft_EdgeInfo.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_IndexedDataMap<TopoDS_Edge, Draft_EdgeInfo, TopTools_ShapeMapHasher>(m,"Draft_IndexedDataMapOfEdgeEdgeInfo");
    register_template_NCollection_IndexedDataMap<TopoDS_Vertex, Draft_VertexInfo, TopTools_ShapeMapHasher>(m,"Draft_IndexedDataMapOfVertexVertexInfo");
    register_template_NCollection_IndexedDataMap<TopoDS_Face, Draft_FaceInfo, TopTools_ShapeMapHasher>(m,"Draft_IndexedDataMapOfFaceFaceInfo");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

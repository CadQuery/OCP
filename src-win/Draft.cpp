
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
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Dir.hxx>
#include <Draft_Modification.hxx>
#include <Draft_FaceInfo.hxx>
#include <Draft_EdgeInfo.hxx>
#include <Draft_VertexInfo.hxx>

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
// ./opencascade\Draft_IndexedDataMapOfVertexVertexInfo.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Draft_IndexedDataMapOfFaceFaceInfo.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Draft_IndexedDataMapOfEdgeEdgeInfo.hxx
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
        .def_static("Angle_s",
                    (Standard_Real (*)( const TopoDS_Face & , const gp_Dir & ) ) static_cast<Standard_Real (*)( const TopoDS_Face & , const gp_Dir & ) >(&Draft::Angle),
                    R"#(Returns the draft angle of the face <F> using the direction <Direction>. The method is valid for : - Plane faces, - Cylindrical or conical faces, when the direction of the axis of the surface is colinear with the direction. Otherwise, the exception DomainError is raised.)#"  , py::arg("F"),  py::arg("Direction"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Draft_EdgeInfo , shared_ptr<Draft_EdgeInfo> >>(m.attr("Draft_EdgeInfo"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Boolean >()  , py::arg("HasNewGeometry") )
    // custom constructors
    // methods
        .def("Add",
             (void (Draft_EdgeInfo::*)( const TopoDS_Face & ) ) static_cast<void (Draft_EdgeInfo::*)( const TopoDS_Face & ) >(&Draft_EdgeInfo::Add),
             R"#(None)#"  , py::arg("F"))
        .def("RootFace",
             (void (Draft_EdgeInfo::*)( const TopoDS_Face & ) ) static_cast<void (Draft_EdgeInfo::*)( const TopoDS_Face & ) >(&Draft_EdgeInfo::RootFace),
             R"#(None)#"  , py::arg("F"))
        .def("Tangent",
             (void (Draft_EdgeInfo::*)( const gp_Pnt & ) ) static_cast<void (Draft_EdgeInfo::*)( const gp_Pnt & ) >(&Draft_EdgeInfo::Tangent),
             R"#(None)#"  , py::arg("P"))
        .def("IsTangent",
             (Standard_Boolean (Draft_EdgeInfo::*)( gp_Pnt & ) const) static_cast<Standard_Boolean (Draft_EdgeInfo::*)( gp_Pnt & ) const>(&Draft_EdgeInfo::IsTangent),
             R"#(None)#"  , py::arg("P"))
        .def("NewGeometry",
             (Standard_Boolean (Draft_EdgeInfo::*)() const) static_cast<Standard_Boolean (Draft_EdgeInfo::*)() const>(&Draft_EdgeInfo::NewGeometry),
             R"#(None)#" )
        .def("SetNewGeometry",
             (void (Draft_EdgeInfo::*)( const Standard_Boolean ) ) static_cast<void (Draft_EdgeInfo::*)( const Standard_Boolean ) >(&Draft_EdgeInfo::SetNewGeometry),
             R"#(None)#"  , py::arg("NewGeom"))
        .def("Geometry",
             (const opencascade::handle<Geom_Curve> & (Draft_EdgeInfo::*)() const) static_cast<const opencascade::handle<Geom_Curve> & (Draft_EdgeInfo::*)() const>(&Draft_EdgeInfo::Geometry),
             R"#(None)#" )
        .def("FirstFace",
             (const TopoDS_Face & (Draft_EdgeInfo::*)() const) static_cast<const TopoDS_Face & (Draft_EdgeInfo::*)() const>(&Draft_EdgeInfo::FirstFace),
             R"#(None)#" )
        .def("SecondFace",
             (const TopoDS_Face & (Draft_EdgeInfo::*)() const) static_cast<const TopoDS_Face & (Draft_EdgeInfo::*)() const>(&Draft_EdgeInfo::SecondFace),
             R"#(None)#" )
        .def("FirstPC",
             (const opencascade::handle<Geom2d_Curve> & (Draft_EdgeInfo::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (Draft_EdgeInfo::*)() const>(&Draft_EdgeInfo::FirstPC),
             R"#(None)#" )
        .def("SecondPC",
             (const opencascade::handle<Geom2d_Curve> & (Draft_EdgeInfo::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (Draft_EdgeInfo::*)() const>(&Draft_EdgeInfo::SecondPC),
             R"#(None)#" )
        .def("ChangeGeometry",
             (opencascade::handle<Geom_Curve> & (Draft_EdgeInfo::*)() ) static_cast<opencascade::handle<Geom_Curve> & (Draft_EdgeInfo::*)() >(&Draft_EdgeInfo::ChangeGeometry),
             R"#(None)#" )
        .def("ChangeFirstPC",
             (opencascade::handle<Geom2d_Curve> & (Draft_EdgeInfo::*)() ) static_cast<opencascade::handle<Geom2d_Curve> & (Draft_EdgeInfo::*)() >(&Draft_EdgeInfo::ChangeFirstPC),
             R"#(None)#" )
        .def("ChangeSecondPC",
             (opencascade::handle<Geom2d_Curve> & (Draft_EdgeInfo::*)() ) static_cast<opencascade::handle<Geom2d_Curve> & (Draft_EdgeInfo::*)() >(&Draft_EdgeInfo::ChangeSecondPC),
             R"#(None)#" )
        .def("RootFace",
             (const TopoDS_Face & (Draft_EdgeInfo::*)() const) static_cast<const TopoDS_Face & (Draft_EdgeInfo::*)() const>(&Draft_EdgeInfo::RootFace),
             R"#(None)#" )
        .def("Tolerance",
             (void (Draft_EdgeInfo::*)( const Standard_Real ) ) static_cast<void (Draft_EdgeInfo::*)( const Standard_Real ) >(&Draft_EdgeInfo::Tolerance),
             R"#(None)#"  , py::arg("tol"))
        .def("Tolerance",
             (Standard_Real (Draft_EdgeInfo::*)() const) static_cast<Standard_Real (Draft_EdgeInfo::*)() const>(&Draft_EdgeInfo::Tolerance),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Draft_FaceInfo , shared_ptr<Draft_FaceInfo> >>(m.attr("Draft_FaceInfo"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Boolean >()  , py::arg("S"),  py::arg("HasNewGeometry") )
    // custom constructors
    // methods
        .def("RootFace",
             (void (Draft_FaceInfo::*)( const TopoDS_Face & ) ) static_cast<void (Draft_FaceInfo::*)( const TopoDS_Face & ) >(&Draft_FaceInfo::RootFace),
             R"#(None)#"  , py::arg("F"))
        .def("NewGeometry",
             (Standard_Boolean (Draft_FaceInfo::*)() const) static_cast<Standard_Boolean (Draft_FaceInfo::*)() const>(&Draft_FaceInfo::NewGeometry),
             R"#(None)#" )
        .def("Add",
             (void (Draft_FaceInfo::*)( const TopoDS_Face & ) ) static_cast<void (Draft_FaceInfo::*)( const TopoDS_Face & ) >(&Draft_FaceInfo::Add),
             R"#(None)#"  , py::arg("F"))
        .def("FirstFace",
             (const TopoDS_Face & (Draft_FaceInfo::*)() const) static_cast<const TopoDS_Face & (Draft_FaceInfo::*)() const>(&Draft_FaceInfo::FirstFace),
             R"#(None)#" )
        .def("SecondFace",
             (const TopoDS_Face & (Draft_FaceInfo::*)() const) static_cast<const TopoDS_Face & (Draft_FaceInfo::*)() const>(&Draft_FaceInfo::SecondFace),
             R"#(None)#" )
        .def("Geometry",
             (const opencascade::handle<Geom_Surface> & (Draft_FaceInfo::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (Draft_FaceInfo::*)() const>(&Draft_FaceInfo::Geometry),
             R"#(None)#" )
        .def("ChangeGeometry",
             (opencascade::handle<Geom_Surface> & (Draft_FaceInfo::*)() ) static_cast<opencascade::handle<Geom_Surface> & (Draft_FaceInfo::*)() >(&Draft_FaceInfo::ChangeGeometry),
             R"#(None)#" )
        .def("RootFace",
             (const TopoDS_Face & (Draft_FaceInfo::*)() const) static_cast<const TopoDS_Face & (Draft_FaceInfo::*)() const>(&Draft_FaceInfo::RootFace),
             R"#(None)#" )
        .def("ChangeCurve",
             (opencascade::handle<Geom_Curve> & (Draft_FaceInfo::*)() ) static_cast<opencascade::handle<Geom_Curve> & (Draft_FaceInfo::*)() >(&Draft_FaceInfo::ChangeCurve),
             R"#(None)#" )
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (Draft_FaceInfo::*)() const) static_cast<const opencascade::handle<Geom_Curve> & (Draft_FaceInfo::*)() const>(&Draft_FaceInfo::Curve),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Draft_Modification ,opencascade::handle<Draft_Modification> , BRepTools_Modification>>(m.attr("Draft_Modification"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Clear",
             (void (Draft_Modification::*)() ) static_cast<void (Draft_Modification::*)() >(&Draft_Modification::Clear),
             R"#(Resets on the same shape.)#" )
        .def("Init",
             (void (Draft_Modification::*)( const TopoDS_Shape & ) ) static_cast<void (Draft_Modification::*)( const TopoDS_Shape & ) >(&Draft_Modification::Init),
             R"#(Changes the basis shape and resets.)#"  , py::arg("S"))
        .def("Add",
             (Standard_Boolean (Draft_Modification::*)( const TopoDS_Face & , const gp_Dir & , const Standard_Real , const gp_Pln & , const Standard_Boolean ) ) static_cast<Standard_Boolean (Draft_Modification::*)( const TopoDS_Face & , const gp_Dir & , const Standard_Real , const gp_Pln & , const Standard_Boolean ) >(&Draft_Modification::Add),
             R"#(Adds the face F and propagates the draft modification to its neighbour faces if they are tangent. If an error occurs, will return False and ProblematicShape will return the "bad" face.)#"  , py::arg("F"),  py::arg("Direction"),  py::arg("Angle"),  py::arg("NeutralPlane"),  py::arg("Flag")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Remove",
             (void (Draft_Modification::*)( const TopoDS_Face & ) ) static_cast<void (Draft_Modification::*)( const TopoDS_Face & ) >(&Draft_Modification::Remove),
             R"#(Removes the face F and the neighbour faces if they are tangent. It will be necessary to call this method if the method Add returns Standard_False, to unset ProblematicFace.)#"  , py::arg("F"))
        .def("Perform",
             (void (Draft_Modification::*)() ) static_cast<void (Draft_Modification::*)() >(&Draft_Modification::Perform),
             R"#(Performs the draft angle modification and sets the value returned by the method IsDone. If an error occurs, IsDone will return Standard_False, and an error status will be given by the method Error, and the shape on which the problem appeared will be given by ProblematicShape)#" )
        .def("IsDone",
             (Standard_Boolean (Draft_Modification::*)() const) static_cast<Standard_Boolean (Draft_Modification::*)() const>(&Draft_Modification::IsDone),
             R"#(Returns True if Perform has been succesfully called. Otherwise more information can be obtained using the methods Error() and ProblematicShape().)#" )
        .def("Error",
             (Draft_ErrorStatus (Draft_Modification::*)() const) static_cast<Draft_ErrorStatus (Draft_Modification::*)() const>(&Draft_Modification::Error),
             R"#(None)#" )
        .def("ProblematicShape",
             (const TopoDS_Shape & (Draft_Modification::*)() const) static_cast<const TopoDS_Shape & (Draft_Modification::*)() const>(&Draft_Modification::ProblematicShape),
             R"#(Returns the shape (Face, Edge or Vertex) on which an error occured.)#" )
        .def("ConnectedFaces",
             (const TopTools_ListOfShape & (Draft_Modification::*)( const TopoDS_Face & ) ) static_cast<const TopTools_ListOfShape & (Draft_Modification::*)( const TopoDS_Face & ) >(&Draft_Modification::ConnectedFaces),
             R"#(Returns all the faces which have been added together with the face <F>.)#"  , py::arg("F"))
        .def("ModifiedFaces",
             (const TopTools_ListOfShape & (Draft_Modification::*)() ) static_cast<const TopTools_ListOfShape & (Draft_Modification::*)() >(&Draft_Modification::ModifiedFaces),
             R"#(Returns all the faces on which a modification has been given.)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Draft_Modification::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Draft_VertexInfo , shared_ptr<Draft_VertexInfo> >>(m.attr("Draft_VertexInfo"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Add",
             (void (Draft_VertexInfo::*)( const TopoDS_Edge & ) ) static_cast<void (Draft_VertexInfo::*)( const TopoDS_Edge & ) >(&Draft_VertexInfo::Add),
             R"#(None)#"  , py::arg("E"))
        .def("Geometry",
             (const gp_Pnt & (Draft_VertexInfo::*)() const) static_cast<const gp_Pnt & (Draft_VertexInfo::*)() const>(&Draft_VertexInfo::Geometry),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (Draft_VertexInfo::*)( const TopoDS_Edge & ) ) static_cast<Standard_Real (Draft_VertexInfo::*)( const TopoDS_Edge & ) >(&Draft_VertexInfo::Parameter),
             R"#(None)#"  , py::arg("E"))
        .def("InitEdgeIterator",
             (void (Draft_VertexInfo::*)() ) static_cast<void (Draft_VertexInfo::*)() >(&Draft_VertexInfo::InitEdgeIterator),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (Draft_VertexInfo::*)() const) static_cast<const TopoDS_Edge & (Draft_VertexInfo::*)() const>(&Draft_VertexInfo::Edge),
             R"#(None)#" )
        .def("NextEdge",
             (void (Draft_VertexInfo::*)() ) static_cast<void (Draft_VertexInfo::*)() >(&Draft_VertexInfo::NextEdge),
             R"#(None)#" )
        .def("MoreEdge",
             (Standard_Boolean (Draft_VertexInfo::*)() const) static_cast<Standard_Boolean (Draft_VertexInfo::*)() const>(&Draft_VertexInfo::MoreEdge),
             R"#(None)#" )
        .def("ChangeGeometry",
             (gp_Pnt & (Draft_VertexInfo::*)() ) static_cast<gp_Pnt & (Draft_VertexInfo::*)() >(&Draft_VertexInfo::ChangeGeometry),
             R"#(None)#" )
        .def("ChangeParameter",
             (Standard_Real & (Draft_VertexInfo::*)( const TopoDS_Edge & ) ) static_cast<Standard_Real & (Draft_VertexInfo::*)( const TopoDS_Edge & ) >(&Draft_VertexInfo::ChangeParameter),
             R"#(None)#"  , py::arg("E"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\Draft_ErrorStatus.hxx
// ./opencascade\Draft_FaceInfo.hxx
// ./opencascade\Draft_EdgeInfo.hxx
// ./opencascade\Draft_IndexedDataMapOfVertexVertexInfo.hxx
// ./opencascade\Draft_VertexInfo.hxx
// ./opencascade\Draft_Modification.hxx
// ./opencascade\Draft.hxx
// ./opencascade\Draft_IndexedDataMapOfFaceFaceInfo.hxx
// ./opencascade\Draft_IndexedDataMapOfEdgeEdgeInfo.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_IndexedDataMap<TopoDS_Vertex, Draft_VertexInfo, TopTools_ShapeMapHasher>(m,"Draft_IndexedDataMapOfVertexVertexInfo");
    register_template_NCollection_IndexedDataMap<TopoDS_Face, Draft_FaceInfo, TopTools_ShapeMapHasher>(m,"Draft_IndexedDataMapOfFaceFaceInfo");
    register_template_NCollection_IndexedDataMap<TopoDS_Edge, Draft_EdgeInfo, TopTools_ShapeMapHasher>(m,"Draft_IndexedDataMapOfEdgeEdgeInfo");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BRepAlgo_AsDes.hxx>
#include <TopoDS_Face.hxx>
#include <BRepOffset_Offset.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Compound.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepOffset_Analyse.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepOffset_Inter3d.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepOffset_Analyse.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <BRepOffset_Analyse.hxx>
#include <TopoDS_Wire.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_Image.hxx>
#include <Geom_Curve.hxx>

// module includes
#include <BRepOffset.hxx>
#include <BRepOffset_Analyse.hxx>
#include <BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval.hxx>
#include <BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape.hxx>
#include <BRepOffset_DataMapIteratorOfDataMapOfShapeOffset.hxx>
#include <BRepOffset_DataMapOfShapeListOfInterval.hxx>
#include <BRepOffset_DataMapOfShapeMapOfShape.hxx>
#include <BRepOffset_DataMapOfShapeOffset.hxx>
#include <BRepOffset_Error.hxx>
#include <BRepOffset_Inter2d.hxx>
#include <BRepOffset_Inter3d.hxx>
#include <BRepOffset_Interval.hxx>
#include <BRepOffset_ListIteratorOfListOfInterval.hxx>
#include <BRepOffset_ListOfInterval.hxx>
#include <BRepOffset_MakeLoops.hxx>
#include <BRepOffset_MakeOffset.hxx>
#include <BRepOffset_MakeSimpleOffset.hxx>
#include <BRepOffset_Mode.hxx>
#include <BRepOffset_Offset.hxx>
#include <BRepOffset_SimpleOffset.hxx>
#include <BRepOffset_Status.hxx>
#include <BRepOffset_Tool.hxx>
#include <BRepOffset_Type.hxx>

// template related includes
// ./opencascade/BRepOffset_DataMapOfShapeOffset.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeOffset.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_ListOfInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_ListOfInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeListOfInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeListOfInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeMapOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeMapOfShape.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepOffset(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepOffset"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BRepOffset , shared_ptr<BRepOffset>>(m,"BRepOffset");

    static_cast<py::class_<BRepOffset , shared_ptr<BRepOffset> >>(m.attr("BRepOffset"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_Analyse , shared_ptr<BRepOffset_Analyse> >>(m.attr("BRepOffset_Analyse"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepOffset_Inter2d , shared_ptr<BRepOffset_Inter2d>>(m,"BRepOffset_Inter2d");

    static_cast<py::class_<BRepOffset_Inter2d , shared_ptr<BRepOffset_Inter2d> >>(m.attr("BRepOffset_Inter2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_Inter3d , shared_ptr<BRepOffset_Inter3d> >>(m.attr("BRepOffset_Inter3d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_Interval , shared_ptr<BRepOffset_Interval> >>(m.attr("BRepOffset_Interval"))
    // constructors
    // custom constructors
    // methods
        .def("First",
             (void (BRepOffset_Interval::*)( const Standard_Real ) ) static_cast<void (BRepOffset_Interval::*)( const Standard_Real ) >(&BRepOffset_Interval::First),
             R"#(None)#"  , py::arg("U"))
        .def("Last",
             (void (BRepOffset_Interval::*)( const Standard_Real ) ) static_cast<void (BRepOffset_Interval::*)( const Standard_Real ) >(&BRepOffset_Interval::Last),
             R"#(None)#"  , py::arg("U"))
        .def("Type",
             (void (BRepOffset_Interval::*)( const BRepOffset_Type ) ) static_cast<void (BRepOffset_Interval::*)( const BRepOffset_Type ) >(&BRepOffset_Interval::Type),
             R"#(None)#"  , py::arg("T"))
        .def("First",
             (Standard_Real (BRepOffset_Interval::*)() const) static_cast<Standard_Real (BRepOffset_Interval::*)() const>(&BRepOffset_Interval::First),
             R"#(None)#" )
        .def("Last",
             (Standard_Real (BRepOffset_Interval::*)() const) static_cast<Standard_Real (BRepOffset_Interval::*)() const>(&BRepOffset_Interval::Last),
             R"#(None)#" )
        .def("Type",
             (BRepOffset_Type (BRepOffset_Interval::*)() const) static_cast<BRepOffset_Type (BRepOffset_Interval::*)() const>(&BRepOffset_Interval::Type),
             R"#(None)#" )
        .def("First",
             (void (BRepOffset_Interval::*)( const Standard_Real ) ) static_cast<void (BRepOffset_Interval::*)( const Standard_Real ) >(&BRepOffset_Interval::First),
             R"#(None)#"  , py::arg("U"))
        .def("Last",
             (void (BRepOffset_Interval::*)( const Standard_Real ) ) static_cast<void (BRepOffset_Interval::*)( const Standard_Real ) >(&BRepOffset_Interval::Last),
             R"#(None)#"  , py::arg("U"))
        .def("Type",
             (void (BRepOffset_Interval::*)( const BRepOffset_Type ) ) static_cast<void (BRepOffset_Interval::*)( const BRepOffset_Type ) >(&BRepOffset_Interval::Type),
             R"#(None)#"  , py::arg("T"))
        .def("First",
             (Standard_Real (BRepOffset_Interval::*)() const) static_cast<Standard_Real (BRepOffset_Interval::*)() const>(&BRepOffset_Interval::First),
             R"#(None)#" )
        .def("Last",
             (Standard_Real (BRepOffset_Interval::*)() const) static_cast<Standard_Real (BRepOffset_Interval::*)() const>(&BRepOffset_Interval::Last),
             R"#(None)#" )
        .def("Type",
             (BRepOffset_Type (BRepOffset_Interval::*)() const) static_cast<BRepOffset_Type (BRepOffset_Interval::*)() const>(&BRepOffset_Interval::Type),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_MakeLoops , shared_ptr<BRepOffset_MakeLoops> >>(m.attr("BRepOffset_MakeLoops"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_MakeOffset , shared_ptr<BRepOffset_MakeOffset> >>(m.attr("BRepOffset_MakeOffset"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_MakeSimpleOffset , shared_ptr<BRepOffset_MakeSimpleOffset> >>(m.attr("BRepOffset_MakeSimpleOffset"))
    // constructors
    // custom constructors
    // methods
        .def("GetError",
             (BRepOffsetSimple_Status (BRepOffset_MakeSimpleOffset::*)() const) static_cast<BRepOffsetSimple_Status (BRepOffset_MakeSimpleOffset::*)() const>(&BRepOffset_MakeSimpleOffset::GetError),
             R"#(Gets error code.)#" )
        .def("GetBuildSolidFlag",
             (Standard_Boolean (BRepOffset_MakeSimpleOffset::*)() const) static_cast<Standard_Boolean (BRepOffset_MakeSimpleOffset::*)() const>(&BRepOffset_MakeSimpleOffset::GetBuildSolidFlag),
             R"#(Gets solid building flag.)#" )
        .def("SetBuildSolidFlag",
             (void (BRepOffset_MakeSimpleOffset::*)( const Standard_Boolean ) ) static_cast<void (BRepOffset_MakeSimpleOffset::*)( const Standard_Boolean ) >(&BRepOffset_MakeSimpleOffset::SetBuildSolidFlag),
             R"#(Sets solid building flag.)#"  , py::arg("theBuildFlag"))
        .def("GetOffsetValue",
             (Standard_Real (BRepOffset_MakeSimpleOffset::*)() const) static_cast<Standard_Real (BRepOffset_MakeSimpleOffset::*)() const>(&BRepOffset_MakeSimpleOffset::GetOffsetValue),
             R"#(Gets offset value.)#" )
        .def("SetOffsetValue",
             (void (BRepOffset_MakeSimpleOffset::*)( const Standard_Real ) ) static_cast<void (BRepOffset_MakeSimpleOffset::*)( const Standard_Real ) >(&BRepOffset_MakeSimpleOffset::SetOffsetValue),
             R"#(Sets offset value.)#"  , py::arg("theOffsetValue"))
        .def("GetTolerance",
             (Standard_Real (BRepOffset_MakeSimpleOffset::*)() const) static_cast<Standard_Real (BRepOffset_MakeSimpleOffset::*)() const>(&BRepOffset_MakeSimpleOffset::GetTolerance),
             R"#(Gets tolerance (used for handling singularities).)#" )
        .def("SetTolerance",
             (void (BRepOffset_MakeSimpleOffset::*)( const Standard_Real ) ) static_cast<void (BRepOffset_MakeSimpleOffset::*)( const Standard_Real ) >(&BRepOffset_MakeSimpleOffset::SetTolerance),
             R"#(Sets tolerance (used for handling singularities).)#"  , py::arg("theValue"))
        .def("IsDone",
             (Standard_Boolean (BRepOffset_MakeSimpleOffset::*)() const) static_cast<Standard_Boolean (BRepOffset_MakeSimpleOffset::*)() const>(&BRepOffset_MakeSimpleOffset::IsDone),
             R"#(Gets done state.)#" )
        .def("GetResultShape",
             (const TopoDS_Shape & (BRepOffset_MakeSimpleOffset::*)() const) static_cast<const TopoDS_Shape & (BRepOffset_MakeSimpleOffset::*)() const>(&BRepOffset_MakeSimpleOffset::GetResultShape),
             R"#(Returns result shape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_Offset , shared_ptr<BRepOffset_Offset> >>(m.attr("BRepOffset_Offset"))
    // constructors
    // custom constructors
    // methods
        .def("InitialShape",
             (const TopoDS_Shape & (BRepOffset_Offset::*)() const) static_cast<const TopoDS_Shape & (BRepOffset_Offset::*)() const>(&BRepOffset_Offset::InitialShape),
             R"#(None)#" )
        .def("InitialShape",
             (const TopoDS_Shape & (BRepOffset_Offset::*)() const) static_cast<const TopoDS_Shape & (BRepOffset_Offset::*)() const>(&BRepOffset_Offset::InitialShape),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_SimpleOffset ,opencascade::handle<BRepOffset_SimpleOffset> , BRepTools_Modification>>(m.attr("BRepOffset_SimpleOffset"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepOffset_SimpleOffset::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepOffset_SimpleOffset::*)() const>(&BRepOffset_SimpleOffset::DynamicType),
             R"#(None)#" )
        .def("NewSurface",
             (Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) >(&BRepOffset_SimpleOffset::NewSurface),
             R"#(Returns Standard_True if the face <F> has been modified. In this case, <S> is the new geometric support of the face, <L> the new location,<Tol> the new tolerance.<RevWires> has to be set to Standard_True when the modification reverses the normal of the surface.(the wires have to be reversed). <RevFace> has to be set to Standard_True if the orientation of the modified face changes in the shells which contain it. -- Here, <RevFace> will return Standard_True if the -- gp_Trsf is negative.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) >(&BRepOffset_SimpleOffset::NewCurve),
             R"#(Returns Standard_True if the edge <E> has been modified. In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) >(&BRepOffset_SimpleOffset::NewPoint),
             R"#(Returns Standard_True if the vertex <V> has been modified. In this case, <P> is the new geometric support of the vertex, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) >(&BRepOffset_SimpleOffset::NewCurve2d),
             R"#(Returns Standard_True if the edge <E> has a new curve on surface on the face <F>.In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&BRepOffset_SimpleOffset::NewParameter),
             R"#(Returns Standard_True if the Vertex <V> has a new parameter on the edge <E>. In this case, <P> is the parameter, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (BRepOffset_SimpleOffset::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<GeomAbs_Shape (BRepOffset_SimpleOffset::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&BRepOffset_SimpleOffset::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepOffset_SimpleOffset::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepOffset_SimpleOffset::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepOffset_Tool , shared_ptr<BRepOffset_Tool>>(m,"BRepOffset_Tool");

    static_cast<py::class_<BRepOffset_Tool , shared_ptr<BRepOffset_Tool> >>(m.attr("BRepOffset_Tool"))
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
// ./opencascade/BRepOffset_DataMapOfShapeOffset.hxx
// ./opencascade/BRepOffset_Inter2d.hxx
// ./opencascade/BRepOffset_Type.hxx
// ./opencascade/BRepOffset_Offset.hxx
// ./opencascade/BRepOffset_ListIteratorOfListOfInterval.hxx
// ./opencascade/BRepOffset_Analyse.hxx
// ./opencascade/BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape.hxx
// ./opencascade/BRepOffset_MakeSimpleOffset.hxx
// ./opencascade/BRepOffset_DataMapIteratorOfDataMapOfShapeOffset.hxx
// ./opencascade/BRepOffset_Status.hxx
// ./opencascade/BRepOffset.hxx
// ./opencascade/BRepOffset_Inter3d.hxx
// ./opencascade/BRepOffset_Error.hxx
// ./opencascade/BRepOffset_ListOfInterval.hxx
// ./opencascade/BRepOffset_DataMapOfShapeListOfInterval.hxx
// ./opencascade/BRepOffset_Interval.hxx
// ./opencascade/BRepOffset_MakeOffset.hxx
// ./opencascade/BRepOffset_DataMapOfShapeMapOfShape.hxx
// ./opencascade/BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval.hxx
// ./opencascade/BRepOffset_Mode.hxx
// ./opencascade/BRepOffset_MakeLoops.hxx
// ./opencascade/BRepOffset_Tool.hxx
// ./opencascade/BRepOffset_SimpleOffset.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<TopoDS_Shape, BRepOffset_Offset, TopTools_ShapeMapHasher>(m,"BRepOffset_DataMapOfShapeOffset");
    register_template_NCollection_List<BRepOffset_Interval>(m,"BRepOffset_ListOfInterval");
    register_template_NCollection_DataMap<TopoDS_Shape, BRepOffset_ListOfInterval, TopTools_ShapeMapHasher>(m,"BRepOffset_DataMapOfShapeListOfInterval");
    register_template_NCollection_DataMap<TopoDS_Shape, TopTools_MapOfShape, TopTools_ShapeMapHasher>(m,"BRepOffset_DataMapOfShapeMapOfShape");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

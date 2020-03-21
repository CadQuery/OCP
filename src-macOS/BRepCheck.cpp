
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Solid.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <BRepCheck_Result.hxx>
#include <BRepCheck_Vertex.hxx>
#include <BRepCheck_Edge.hxx>
#include <BRepCheck_Wire.hxx>
#include <BRepCheck_Face.hxx>
#include <BRepCheck_Shell.hxx>
#include <BRepCheck_Solid.hxx>
#include <BRepCheck_Analyzer.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <BRep_CurveRepresentation.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>

// module includes
#include <BRepCheck.hxx>
#include <BRepCheck_Analyzer.hxx>
#include <BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus.hxx>
#include <BRepCheck_DataMapIteratorOfDataMapOfShapeResult.hxx>
#include <BRepCheck_DataMapOfShapeListOfStatus.hxx>
#include <BRepCheck_DataMapOfShapeResult.hxx>
#include <BRepCheck_Edge.hxx>
#include <BRepCheck_Face.hxx>
#include <BRepCheck_ListIteratorOfListOfStatus.hxx>
#include <BRepCheck_ListOfStatus.hxx>
#include <BRepCheck_Result.hxx>
#include <BRepCheck_Shell.hxx>
#include <BRepCheck_Solid.hxx>
#include <BRepCheck_Status.hxx>
#include <BRepCheck_Vertex.hxx>
#include <BRepCheck_Wire.hxx>

// template related includes
// ./opencascade/BRepCheck_DataMapOfShapeListOfStatus.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepCheck_DataMapOfShapeListOfStatus.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepCheck_DataMapOfShapeResult.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepCheck_ListOfStatus.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepCheck_ListOfStatus.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepCheck(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepCheck"));


//Python trampoline classes
    class Py_BRepCheck_Result : public BRepCheck_Result{
    public:
        using BRepCheck_Result::BRepCheck_Result;


        // public pure virtual
        void InContext(const TopoDS_Shape & ContextShape) override { PYBIND11_OVERLOAD_PURE(void,BRepCheck_Result,InContext,ContextShape) };
        void Minimum() override { PYBIND11_OVERLOAD_PURE(void,BRepCheck_Result,Minimum,) };
        void Blind() override { PYBIND11_OVERLOAD_PURE(void,BRepCheck_Result,Blind,) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<BRepCheck , shared_ptr<BRepCheck>>(m,"BRepCheck");

    static_cast<py::class_<BRepCheck , shared_ptr<BRepCheck> >>(m.attr("BRepCheck"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Analyzer , shared_ptr<BRepCheck_Analyzer> >>(m.attr("BRepCheck_Analyzer"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("S"),  py::arg("GeomControls")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("IsValid",
             (Standard_Boolean (BRepCheck_Analyzer::*)() const) static_cast<Standard_Boolean (BRepCheck_Analyzer::*)() const>(&BRepCheck_Analyzer::IsValid),
             R"#(Returns true if no defect is detected on the shape S or any of its subshapes. Returns true if the shape S is valid. This function checks whether a given shape is valid by checking that: - the topology is correct - parameterization of edges in particular is correct. For the topology to be correct, the following conditions must be satisfied: - edges should have at least two vertices if they are not degenerate edges. The vertices should be within the range of the bounding edges at the tolerance specified in the vertex, - edges should share at least one face. The representation of the edges should be within the tolerance criterion assigned to them. - wires defining a face should not self-intersect and should be closed, - there should be one wire which contains all other wires inside a face, - wires should be correctly oriented with respect to each of the edges, - faces should be correctly oriented, in particular with respect to adjacent faces if these faces define a solid, - shells defining a solid should be closed. There should be one enclosing shell if the shape is a solid; To check parameterization of edge, there are 2 approaches depending on the edge?s contextual situation. - if the edge is either single, or it is in the context of a wire or a compound, its parameterization is defined by the parameterization of its 3D curve and is considered as valid. - If the edge is in the context of a face, it should have SameParameter and SameRange flags set to Standard_True. To check these flags, you should call the function BRep_Tool::SameParameter and BRep_Tool::SameRange for an edge. If at least one of these flags is set to Standard_False, the edge is considered as invalid without any additional check. If the edge is contained by a face, and it has SameParameter and SameRange flags set to Standard_True, IsValid checks whether representation of the edge on face, in context of which the edge is considered, has the same parameterization up to the tolerance value coded on the edge. For a given parameter t on the edge having C as a 3D curve and one PCurve P on a surface S (base surface of the reference face), this checks that |C(t) - S(P(t))| is less than or equal to tolerance, where tolerance is the tolerance value coded on the edge.)#" )
        .def("Result",
             (const opencascade::handle<BRepCheck_Result> & (BRepCheck_Analyzer::*)( const TopoDS_Shape & ) const) static_cast<const opencascade::handle<BRepCheck_Result> & (BRepCheck_Analyzer::*)( const TopoDS_Shape & ) const>(&BRepCheck_Analyzer::Result),
             R"#(None)#"  , py::arg("SubS"))
        .def("Result",
             (const opencascade::handle<BRepCheck_Result> & (BRepCheck_Analyzer::*)( const TopoDS_Shape & ) const) static_cast<const opencascade::handle<BRepCheck_Result> & (BRepCheck_Analyzer::*)( const TopoDS_Shape & ) const>(&BRepCheck_Analyzer::Result),
             R"#(None)#"  , py::arg("S"))
        .def("IsValid",
             (Standard_Boolean (BRepCheck_Analyzer::*)() const) static_cast<Standard_Boolean (BRepCheck_Analyzer::*)() const>(&BRepCheck_Analyzer::IsValid),
             R"#(Returns true if no defect is detected on the shape S or any of its subshapes. Returns true if the shape S is valid. This function checks whether a given shape is valid by checking that: - the topology is correct - parameterization of edges in particular is correct. For the topology to be correct, the following conditions must be satisfied: - edges should have at least two vertices if they are not degenerate edges. The vertices should be within the range of the bounding edges at the tolerance specified in the vertex, - edges should share at least one face. The representation of the edges should be within the tolerance criterion assigned to them. - wires defining a face should not self-intersect and should be closed, - there should be one wire which contains all other wires inside a face, - wires should be correctly oriented with respect to each of the edges, - faces should be correctly oriented, in particular with respect to adjacent faces if these faces define a solid, - shells defining a solid should be closed. There should be one enclosing shell if the shape is a solid; To check parameterization of edge, there are 2 approaches depending on the edge?s contextual situation. - if the edge is either single, or it is in the context of a wire or a compound, its parameterization is defined by the parameterization of its 3D curve and is considered as valid. - If the edge is in the context of a face, it should have SameParameter and SameRange flags set to Standard_True. To check these flags, you should call the function BRep_Tool::SameParameter and BRep_Tool::SameRange for an edge. If at least one of these flags is set to Standard_False, the edge is considered as invalid without any additional check. If the edge is contained by a face, and it has SameParameter and SameRange flags set to Standard_True, IsValid checks whether representation of the edge on face, in context of which the edge is considered, has the same parameterization up to the tolerance value coded on the edge. For a given parameter t on the edge having C as a 3D curve and one PCurve P on a surface S (base surface of the reference face), this checks that |C(t) - S(P(t))| is less than or equal to tolerance, where tolerance is the tolerance value coded on the edge.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Result ,opencascade::handle<BRepCheck_Result>,Py_BRepCheck_Result , Standard_Transient>>(m.attr("BRepCheck_Result"))
    // constructors
    // custom constructors
    // methods
        .def("InContext",
             (void (BRepCheck_Result::*)( const TopoDS_Shape & ) ) static_cast<void (BRepCheck_Result::*)( const TopoDS_Shape & ) >(&BRepCheck_Result::InContext),
             R"#(None)#"  , py::arg("ContextShape"))
        .def("Minimum",
             (void (BRepCheck_Result::*)() ) static_cast<void (BRepCheck_Result::*)() >(&BRepCheck_Result::Minimum),
             R"#(None)#" )
        .def("Blind",
             (void (BRepCheck_Result::*)() ) static_cast<void (BRepCheck_Result::*)() >(&BRepCheck_Result::Blind),
             R"#(None)#" )
        .def("Status",
             (const BRepCheck_ListOfStatus & (BRepCheck_Result::*)() const) static_cast<const BRepCheck_ListOfStatus & (BRepCheck_Result::*)() const>(&BRepCheck_Result::Status),
             R"#(None)#" )
        .def("IsMinimum",
             (Standard_Boolean (BRepCheck_Result::*)() const) static_cast<Standard_Boolean (BRepCheck_Result::*)() const>(&BRepCheck_Result::IsMinimum),
             R"#(None)#" )
        .def("IsBlind",
             (Standard_Boolean (BRepCheck_Result::*)() const) static_cast<Standard_Boolean (BRepCheck_Result::*)() const>(&BRepCheck_Result::IsBlind),
             R"#(None)#" )
        .def("MoreShapeInContext",
             (Standard_Boolean (BRepCheck_Result::*)() const) static_cast<Standard_Boolean (BRepCheck_Result::*)() const>(&BRepCheck_Result::MoreShapeInContext),
             R"#(None)#" )
        .def("ContextualShape",
             (const TopoDS_Shape & (BRepCheck_Result::*)() const) static_cast<const TopoDS_Shape & (BRepCheck_Result::*)() const>(&BRepCheck_Result::ContextualShape),
             R"#(None)#" )
        .def("StatusOnShape",
             (const BRepCheck_ListOfStatus & (BRepCheck_Result::*)() const) static_cast<const BRepCheck_ListOfStatus & (BRepCheck_Result::*)() const>(&BRepCheck_Result::StatusOnShape),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepCheck_Result::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepCheck_Result::*)() const>(&BRepCheck_Result::DynamicType),
             R"#(None)#" )
        .def("Status",
             (const BRepCheck_ListOfStatus & (BRepCheck_Result::*)() const) static_cast<const BRepCheck_ListOfStatus & (BRepCheck_Result::*)() const>(&BRepCheck_Result::Status),
             R"#(None)#" )
        .def("IsMinimum",
             (Standard_Boolean (BRepCheck_Result::*)() const) static_cast<Standard_Boolean (BRepCheck_Result::*)() const>(&BRepCheck_Result::IsMinimum),
             R"#(None)#" )
        .def("IsBlind",
             (Standard_Boolean (BRepCheck_Result::*)() const) static_cast<Standard_Boolean (BRepCheck_Result::*)() const>(&BRepCheck_Result::IsBlind),
             R"#(None)#" )
        .def("MoreShapeInContext",
             (Standard_Boolean (BRepCheck_Result::*)() const) static_cast<Standard_Boolean (BRepCheck_Result::*)() const>(&BRepCheck_Result::MoreShapeInContext),
             R"#(None)#" )
        .def("ContextualShape",
             (const TopoDS_Shape & (BRepCheck_Result::*)() const) static_cast<const TopoDS_Shape & (BRepCheck_Result::*)() const>(&BRepCheck_Result::ContextualShape),
             R"#(None)#" )
        .def("StatusOnShape",
             (const BRepCheck_ListOfStatus & (BRepCheck_Result::*)() const) static_cast<const BRepCheck_ListOfStatus & (BRepCheck_Result::*)() const>(&BRepCheck_Result::StatusOnShape),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepCheck_Result::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Edge ,opencascade::handle<BRepCheck_Edge> , BRepCheck_Result>>(m.attr("BRepCheck_Edge"))
    // constructors
    // custom constructors
    // methods
        .def("InContext",
             (void (BRepCheck_Edge::*)( const TopoDS_Shape & ) ) static_cast<void (BRepCheck_Edge::*)( const TopoDS_Shape & ) >(&BRepCheck_Edge::InContext),
             R"#(None)#"  , py::arg("ContextShape"))
        .def("Minimum",
             (void (BRepCheck_Edge::*)() ) static_cast<void (BRepCheck_Edge::*)() >(&BRepCheck_Edge::Minimum),
             R"#(None)#" )
        .def("Blind",
             (void (BRepCheck_Edge::*)() ) static_cast<void (BRepCheck_Edge::*)() >(&BRepCheck_Edge::Blind),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepCheck_Edge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepCheck_Edge::*)() const>(&BRepCheck_Edge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepCheck_Edge::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Face ,opencascade::handle<BRepCheck_Face> , BRepCheck_Result>>(m.attr("BRepCheck_Face"))
    // constructors
    // custom constructors
    // methods
        .def("InContext",
             (void (BRepCheck_Face::*)( const TopoDS_Shape & ) ) static_cast<void (BRepCheck_Face::*)( const TopoDS_Shape & ) >(&BRepCheck_Face::InContext),
             R"#(None)#"  , py::arg("ContextShape"))
        .def("Minimum",
             (void (BRepCheck_Face::*)() ) static_cast<void (BRepCheck_Face::*)() >(&BRepCheck_Face::Minimum),
             R"#(None)#" )
        .def("Blind",
             (void (BRepCheck_Face::*)() ) static_cast<void (BRepCheck_Face::*)() >(&BRepCheck_Face::Blind),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepCheck_Face::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepCheck_Face::*)() const>(&BRepCheck_Face::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepCheck_Face::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Shell ,opencascade::handle<BRepCheck_Shell> , BRepCheck_Result>>(m.attr("BRepCheck_Shell"))
    // constructors
    // custom constructors
    // methods
        .def("InContext",
             (void (BRepCheck_Shell::*)( const TopoDS_Shape & ) ) static_cast<void (BRepCheck_Shell::*)( const TopoDS_Shape & ) >(&BRepCheck_Shell::InContext),
             R"#(None)#"  , py::arg("ContextShape"))
        .def("Minimum",
             (void (BRepCheck_Shell::*)() ) static_cast<void (BRepCheck_Shell::*)() >(&BRepCheck_Shell::Minimum),
             R"#(None)#" )
        .def("Blind",
             (void (BRepCheck_Shell::*)() ) static_cast<void (BRepCheck_Shell::*)() >(&BRepCheck_Shell::Blind),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepCheck_Shell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepCheck_Shell::*)() const>(&BRepCheck_Shell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepCheck_Shell::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Solid ,opencascade::handle<BRepCheck_Solid> , BRepCheck_Result>>(m.attr("BRepCheck_Solid"))
    // constructors
    // custom constructors
    // methods
        .def("InContext",
             (void (BRepCheck_Solid::*)( const TopoDS_Shape & ) ) static_cast<void (BRepCheck_Solid::*)( const TopoDS_Shape & ) >(&BRepCheck_Solid::InContext),
             R"#(Checks the solid in context of the shape <theContextShape>)#"  , py::arg("theContextShape"))
        .def("Minimum",
             (void (BRepCheck_Solid::*)() ) static_cast<void (BRepCheck_Solid::*)() >(&BRepCheck_Solid::Minimum),
             R"#(Checks the solid per se.)#" )
        .def("Blind",
             (void (BRepCheck_Solid::*)() ) static_cast<void (BRepCheck_Solid::*)() >(&BRepCheck_Solid::Blind),
             R"#(see the parent class for more details)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepCheck_Solid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepCheck_Solid::*)() const>(&BRepCheck_Solid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepCheck_Solid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Vertex ,opencascade::handle<BRepCheck_Vertex> , BRepCheck_Result>>(m.attr("BRepCheck_Vertex"))
    // constructors
    // custom constructors
    // methods
        .def("InContext",
             (void (BRepCheck_Vertex::*)( const TopoDS_Shape & ) ) static_cast<void (BRepCheck_Vertex::*)( const TopoDS_Shape & ) >(&BRepCheck_Vertex::InContext),
             R"#(None)#"  , py::arg("ContextShape"))
        .def("Minimum",
             (void (BRepCheck_Vertex::*)() ) static_cast<void (BRepCheck_Vertex::*)() >(&BRepCheck_Vertex::Minimum),
             R"#(None)#" )
        .def("Blind",
             (void (BRepCheck_Vertex::*)() ) static_cast<void (BRepCheck_Vertex::*)() >(&BRepCheck_Vertex::Blind),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepCheck_Vertex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepCheck_Vertex::*)() const>(&BRepCheck_Vertex::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepCheck_Vertex::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Wire ,opencascade::handle<BRepCheck_Wire> , BRepCheck_Result>>(m.attr("BRepCheck_Wire"))
    // constructors
    // custom constructors
    // methods
        .def("InContext",
             (void (BRepCheck_Wire::*)( const TopoDS_Shape & ) ) static_cast<void (BRepCheck_Wire::*)( const TopoDS_Shape & ) >(&BRepCheck_Wire::InContext),
             R"#(if <ContextShape> is a face, consequently checks SelfIntersect(), Closed(), Orientation() and Closed2d until faulty is found)#"  , py::arg("ContextShape"))
        .def("Minimum",
             (void (BRepCheck_Wire::*)() ) static_cast<void (BRepCheck_Wire::*)() >(&BRepCheck_Wire::Minimum),
             R"#(checks that the wire is not empty and "connex". Called by constructor)#" )
        .def("Blind",
             (void (BRepCheck_Wire::*)() ) static_cast<void (BRepCheck_Wire::*)() >(&BRepCheck_Wire::Blind),
             R"#(Does nothing)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepCheck_Wire::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepCheck_Wire::*)() const>(&BRepCheck_Wire::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepCheck_Wire::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepCheck_Solid.hxx
// ./opencascade/BRepCheck.hxx
// ./opencascade/BRepCheck_DataMapOfShapeListOfStatus.hxx
// ./opencascade/BRepCheck_Analyzer.hxx
// ./opencascade/BRepCheck_Vertex.hxx
// ./opencascade/BRepCheck_Face.hxx
// ./opencascade/BRepCheck_Shell.hxx
// ./opencascade/BRepCheck_Status.hxx
// ./opencascade/BRepCheck_DataMapOfShapeResult.hxx
// ./opencascade/BRepCheck_DataMapIteratorOfDataMapOfShapeResult.hxx
// ./opencascade/BRepCheck_Edge.hxx
// ./opencascade/BRepCheck_ListIteratorOfListOfStatus.hxx
// ./opencascade/BRepCheck_Result.hxx
// ./opencascade/BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus.hxx
// ./opencascade/BRepCheck_ListOfStatus.hxx
// ./opencascade/BRepCheck_Wire.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<TopoDS_Shape, BRepCheck_ListOfStatus, TopTools_ShapeMapHasher>(m,"BRepCheck_DataMapOfShapeListOfStatus");
    register_template_NCollection_List<BRepCheck_Status>(m,"BRepCheck_ListOfStatus");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

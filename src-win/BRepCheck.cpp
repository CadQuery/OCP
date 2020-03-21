
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
#include <TopoDS_Vertex.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Shell.hxx>
#include <BRep_CurveRepresentation.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <TopoDS_Edge.hxx>
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
#include <TopoDS_Face.hxx>

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
// ./opencascade\BRepCheck_DataMapOfShapeResult.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepCheck_DataMapOfShapeListOfStatus.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepCheck_DataMapOfShapeListOfStatus.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepCheck_ListOfStatus.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepCheck_ListOfStatus.hxx
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
        .def_static("Add_s",
                    (void (*)( NCollection_List<BRepCheck_Status> & , const BRepCheck_Status ) ) static_cast<void (*)( NCollection_List<BRepCheck_Status> & , const BRepCheck_Status ) >(&BRepCheck::Add),
                    R"#(None)#"  , py::arg("List"),  py::arg("Stat"))
        .def_static("Print_s",
                    (void (*)( const BRepCheck_Status , std::ostream & ) ) static_cast<void (*)( const BRepCheck_Status , std::ostream & ) >(&BRepCheck::Print),
                    R"#(None)#"  , py::arg("Stat"),  py::arg("OS"))
        .def_static("SelfIntersection_s",
                    (Standard_Boolean (*)( const TopoDS_Wire & , const TopoDS_Face & , TopoDS_Edge & , TopoDS_Edge & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Wire & , const TopoDS_Face & , TopoDS_Edge & , TopoDS_Edge & ) >(&BRepCheck::SelfIntersection),
                    R"#(None)#"  , py::arg("W"),  py::arg("F"),  py::arg("E1"),  py::arg("E2"))
        .def_static("PrecCurve_s",
                    (Standard_Real (*)( const Adaptor3d_Curve & ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve & ) >(&BRepCheck::PrecCurve),
                    R"#(Returns the resolution on the 3d curve)#"  , py::arg("aAC3D"))
        .def_static("PrecSurface_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&BRepCheck::PrecSurface),
                    R"#(Returns the resolution on the surface)#"  , py::arg("aAHSurf"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Analyzer , shared_ptr<BRepCheck_Analyzer> >>(m.attr("BRepCheck_Analyzer"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("S"),  py::arg("GeomControls")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepCheck_Analyzer::*)( const TopoDS_Shape & , const Standard_Boolean ) ) static_cast<void (BRepCheck_Analyzer::*)( const TopoDS_Shape & , const Standard_Boolean ) >(&BRepCheck_Analyzer::Init),
             R"#(<S> is the shape to control. <GeomControls> If False only topological informaions are checked. The geometricals controls are For a Vertex : BRepCheck_InvalidTolerance NYI For an Edge : BRepCheck_InvalidCurveOnClosedSurface, BRepCheck_InvalidCurveOnSurface, BRepCheck_InvalidSameParameterFlag, BRepCheck_InvalidTolerance NYI For a face : BRepCheck_UnorientableShape, BRepCheck_IntersectingWires, BRepCheck_InvalidTolerance NYI For a wire : BRepCheck_SelfIntersectingWire)#"  , py::arg("S"),  py::arg("GeomControls")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsValid",
             (Standard_Boolean (BRepCheck_Analyzer::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (BRepCheck_Analyzer::*)( const TopoDS_Shape & ) const>(&BRepCheck_Analyzer::IsValid),
             R"#(<S> is a subshape of the original shape. Returns <STandard_True> if no default has been detected on <S> and any of its subshape.)#"  , py::arg("S"))
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
        .def("Init",
             (void (BRepCheck_Result::*)( const TopoDS_Shape & ) ) static_cast<void (BRepCheck_Result::*)( const TopoDS_Shape & ) >(&BRepCheck_Result::Init),
             R"#(None)#"  , py::arg("S"))
        .def("InContext",
             (void (BRepCheck_Result::*)( const TopoDS_Shape & ) ) static_cast<void (BRepCheck_Result::*)( const TopoDS_Shape & ) >(&BRepCheck_Result::InContext),
             R"#(None)#"  , py::arg("ContextShape"))
        .def("Minimum",
             (void (BRepCheck_Result::*)() ) static_cast<void (BRepCheck_Result::*)() >(&BRepCheck_Result::Minimum),
             R"#(None)#" )
        .def("Blind",
             (void (BRepCheck_Result::*)() ) static_cast<void (BRepCheck_Result::*)() >(&BRepCheck_Result::Blind),
             R"#(None)#" )
        .def("SetFailStatus",
             (void (BRepCheck_Result::*)( const TopoDS_Shape & ) ) static_cast<void (BRepCheck_Result::*)( const TopoDS_Shape & ) >(&BRepCheck_Result::SetFailStatus),
             R"#(None)#"  , py::arg("S"))
        .def("Status",
             (const BRepCheck_ListOfStatus & (BRepCheck_Result::*)() const) static_cast<const BRepCheck_ListOfStatus & (BRepCheck_Result::*)() const>(&BRepCheck_Result::Status),
             R"#(None)#" )
        .def("IsMinimum",
             (Standard_Boolean (BRepCheck_Result::*)() const) static_cast<Standard_Boolean (BRepCheck_Result::*)() const>(&BRepCheck_Result::IsMinimum),
             R"#(None)#" )
        .def("IsBlind",
             (Standard_Boolean (BRepCheck_Result::*)() const) static_cast<Standard_Boolean (BRepCheck_Result::*)() const>(&BRepCheck_Result::IsBlind),
             R"#(None)#" )
        .def("StatusOnShape",
             (const BRepCheck_ListOfStatus & (BRepCheck_Result::*)( const TopoDS_Shape & ) ) static_cast<const BRepCheck_ListOfStatus & (BRepCheck_Result::*)( const TopoDS_Shape & ) >(&BRepCheck_Result::StatusOnShape),
             R"#(If not already done, performs the InContext control and returns the list of status.)#"  , py::arg("S"))
        .def("InitContextIterator",
             (void (BRepCheck_Result::*)() ) static_cast<void (BRepCheck_Result::*)() >(&BRepCheck_Result::InitContextIterator),
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
        .def("NextShapeInContext",
             (void (BRepCheck_Result::*)() ) static_cast<void (BRepCheck_Result::*)() >(&BRepCheck_Result::NextShapeInContext),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepCheck_Result::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Edge ,opencascade::handle<BRepCheck_Edge> , BRepCheck_Result>>(m.attr("BRepCheck_Edge"))
    // constructors
        .def(py::init< const TopoDS_Edge & >()  , py::arg("E") )
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
        .def("GeometricControls",
             (Standard_Boolean (BRepCheck_Edge::*)() const) static_cast<Standard_Boolean (BRepCheck_Edge::*)() const>(&BRepCheck_Edge::GeometricControls),
             R"#(None)#" )
        .def("GeometricControls",
             (void (BRepCheck_Edge::*)( const Standard_Boolean ) ) static_cast<void (BRepCheck_Edge::*)( const Standard_Boolean ) >(&BRepCheck_Edge::GeometricControls),
             R"#(None)#"  , py::arg("B"))
        .def("Tolerance",
             (Standard_Real (BRepCheck_Edge::*)() ) static_cast<Standard_Real (BRepCheck_Edge::*)() >(&BRepCheck_Edge::Tolerance),
             R"#(None)#" )
        .def("SetStatus",
             (void (BRepCheck_Edge::*)( const BRepCheck_Status ) ) static_cast<void (BRepCheck_Edge::*)( const BRepCheck_Status ) >(&BRepCheck_Edge::SetStatus),
             R"#(Sets status of Edge;)#"  , py::arg("theStatus"))
        .def("CheckPolygonOnTriangulation",
             (BRepCheck_Status (BRepCheck_Edge::*)( const TopoDS_Edge & ) ) static_cast<BRepCheck_Status (BRepCheck_Edge::*)( const TopoDS_Edge & ) >(&BRepCheck_Edge::CheckPolygonOnTriangulation),
             R"#(Checks, if polygon on triangulation of heEdge is out of 3D-curve of this edge.)#"  , py::arg("theEdge"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepCheck_Edge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepCheck_Edge::*)() const>(&BRepCheck_Edge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepCheck_Edge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepCheck_Edge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Face ,opencascade::handle<BRepCheck_Face> , BRepCheck_Result>>(m.attr("BRepCheck_Face"))
    // constructors
        .def(py::init< const TopoDS_Face & >()  , py::arg("F") )
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
        .def("IntersectWires",
             (BRepCheck_Status (BRepCheck_Face::*)( const Standard_Boolean ) ) static_cast<BRepCheck_Status (BRepCheck_Face::*)( const Standard_Boolean ) >(&BRepCheck_Face::IntersectWires),
             R"#(None)#"  , py::arg("Update")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ClassifyWires",
             (BRepCheck_Status (BRepCheck_Face::*)( const Standard_Boolean ) ) static_cast<BRepCheck_Status (BRepCheck_Face::*)( const Standard_Boolean ) >(&BRepCheck_Face::ClassifyWires),
             R"#(None)#"  , py::arg("Update")=static_cast<const Standard_Boolean>(Standard_False))
        .def("OrientationOfWires",
             (BRepCheck_Status (BRepCheck_Face::*)( const Standard_Boolean ) ) static_cast<BRepCheck_Status (BRepCheck_Face::*)( const Standard_Boolean ) >(&BRepCheck_Face::OrientationOfWires),
             R"#(None)#"  , py::arg("Update")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetUnorientable",
             (void (BRepCheck_Face::*)() ) static_cast<void (BRepCheck_Face::*)() >(&BRepCheck_Face::SetUnorientable),
             R"#(None)#" )
        .def("SetStatus",
             (void (BRepCheck_Face::*)( const BRepCheck_Status ) ) static_cast<void (BRepCheck_Face::*)( const BRepCheck_Status ) >(&BRepCheck_Face::SetStatus),
             R"#(Sets status of Face;)#"  , py::arg("theStatus"))
        .def("IsUnorientable",
             (Standard_Boolean (BRepCheck_Face::*)() const) static_cast<Standard_Boolean (BRepCheck_Face::*)() const>(&BRepCheck_Face::IsUnorientable),
             R"#(None)#" )
        .def("GeometricControls",
             (Standard_Boolean (BRepCheck_Face::*)() const) static_cast<Standard_Boolean (BRepCheck_Face::*)() const>(&BRepCheck_Face::GeometricControls),
             R"#(None)#" )
        .def("GeometricControls",
             (void (BRepCheck_Face::*)( const Standard_Boolean ) ) static_cast<void (BRepCheck_Face::*)( const Standard_Boolean ) >(&BRepCheck_Face::GeometricControls),
             R"#(None)#"  , py::arg("B"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepCheck_Face::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepCheck_Face::*)() const>(&BRepCheck_Face::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepCheck_Face::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepCheck_Face::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Shell ,opencascade::handle<BRepCheck_Shell> , BRepCheck_Result>>(m.attr("BRepCheck_Shell"))
    // constructors
        .def(py::init< const TopoDS_Shell & >()  , py::arg("S") )
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
        .def("Closed",
             (BRepCheck_Status (BRepCheck_Shell::*)( const Standard_Boolean ) ) static_cast<BRepCheck_Status (BRepCheck_Shell::*)( const Standard_Boolean ) >(&BRepCheck_Shell::Closed),
             R"#(Checks if the oriented faces of the shell give a closed shell. If the wire is closed, returns BRepCheck_NoError.If <Update> is set to Standard_True, registers the status in the list.)#"  , py::arg("Update")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Orientation",
             (BRepCheck_Status (BRepCheck_Shell::*)( const Standard_Boolean ) ) static_cast<BRepCheck_Status (BRepCheck_Shell::*)( const Standard_Boolean ) >(&BRepCheck_Shell::Orientation),
             R"#(Checks if the oriented faces of the shell are correctly oriented. An internal call is made to the method Closed. If <Update> is set to Standard_True, registers the status in the list.)#"  , py::arg("Update")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetUnorientable",
             (void (BRepCheck_Shell::*)() ) static_cast<void (BRepCheck_Shell::*)() >(&BRepCheck_Shell::SetUnorientable),
             R"#(None)#" )
        .def("IsUnorientable",
             (Standard_Boolean (BRepCheck_Shell::*)() const) static_cast<Standard_Boolean (BRepCheck_Shell::*)() const>(&BRepCheck_Shell::IsUnorientable),
             R"#(None)#" )
        .def("NbConnectedSet",
             (Standard_Integer (BRepCheck_Shell::*)( NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Integer (BRepCheck_Shell::*)( NCollection_List<TopoDS_Shape> & ) >(&BRepCheck_Shell::NbConnectedSet),
             R"#(None)#"  , py::arg("theSets"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepCheck_Shell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepCheck_Shell::*)() const>(&BRepCheck_Shell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepCheck_Shell::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepCheck_Shell::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Solid ,opencascade::handle<BRepCheck_Solid> , BRepCheck_Result>>(m.attr("BRepCheck_Solid"))
    // constructors
        .def(py::init< const TopoDS_Solid & >()  , py::arg("theS") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepCheck_Solid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Vertex ,opencascade::handle<BRepCheck_Vertex> , BRepCheck_Result>>(m.attr("BRepCheck_Vertex"))
    // constructors
        .def(py::init< const TopoDS_Vertex & >()  , py::arg("V") )
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
        .def("Tolerance",
             (Standard_Real (BRepCheck_Vertex::*)() ) static_cast<Standard_Real (BRepCheck_Vertex::*)() >(&BRepCheck_Vertex::Tolerance),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepCheck_Vertex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepCheck_Vertex::*)() const>(&BRepCheck_Vertex::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepCheck_Vertex::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepCheck_Vertex::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepCheck_Wire ,opencascade::handle<BRepCheck_Wire> , BRepCheck_Result>>(m.attr("BRepCheck_Wire"))
    // constructors
        .def(py::init< const TopoDS_Wire & >()  , py::arg("W") )
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
        .def("Closed",
             (BRepCheck_Status (BRepCheck_Wire::*)( const Standard_Boolean ) ) static_cast<BRepCheck_Status (BRepCheck_Wire::*)( const Standard_Boolean ) >(&BRepCheck_Wire::Closed),
             R"#(Checks if the oriented edges of the wire give a closed wire. If the wire is closed, returns BRepCheck_NoError. Warning : if the first and last edge are infinite, the wire will be considered as a closed one. If <Update> is set to Standard_True, registers the status in the list. May return (and registers): **BRepCheck_NotConnected, if wire is not topologically closed **BRepCheck_RedundantEdge, if an edge is in wire more than 3 times or in case of 2 occurences if not with FORWARD and REVERSED orientation. **BRepCheck_NoError)#"  , py::arg("Update")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Closed2d",
             (BRepCheck_Status (BRepCheck_Wire::*)( const TopoDS_Face & , const Standard_Boolean ) ) static_cast<BRepCheck_Status (BRepCheck_Wire::*)( const TopoDS_Face & , const Standard_Boolean ) >(&BRepCheck_Wire::Closed2d),
             R"#(Checks if edges of the wire give a wire closed in 2d space. Returns BRepCheck_NoError, or BRepCheck_NotClosed If <Update> is set to Standard_True, registers the status in the list.)#"  , py::arg("F"),  py::arg("Update")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Orientation",
             (BRepCheck_Status (BRepCheck_Wire::*)( const TopoDS_Face & , const Standard_Boolean ) ) static_cast<BRepCheck_Status (BRepCheck_Wire::*)( const TopoDS_Face & , const Standard_Boolean ) >(&BRepCheck_Wire::Orientation),
             R"#(Checks if the oriented edges of the wire are correctly oriented. An internal call is made to the method Closed. If no face exists, call the method with a null face (TopoDS_face()). If <Update> is set to Standard_True, registers the status in the list. May return (and registers): BRepCheck_InvalidDegeneratedFlag, BRepCheck_BadOrientationOfSubshape, BRepCheck_NotClosed, BRepCheck_NoError)#"  , py::arg("F"),  py::arg("Update")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SelfIntersect",
             (BRepCheck_Status (BRepCheck_Wire::*)( const TopoDS_Face & , TopoDS_Edge & , TopoDS_Edge & , const Standard_Boolean ) ) static_cast<BRepCheck_Status (BRepCheck_Wire::*)( const TopoDS_Face & , TopoDS_Edge & , TopoDS_Edge & , const Standard_Boolean ) >(&BRepCheck_Wire::SelfIntersect),
             R"#(Checks if the wire intersect itself on the face <F>. <E1> and <E2> are the first intersecting edges found. <E2> may be a null edge when a self-intersecting edge is found.If <Update> is set to Standard_True, registers the status in the list. May return (and register): BRepCheck_EmptyWire, BRepCheck_SelfIntersectingWire, BRepCheck_NoCurveOnSurface, BRepCheck_NoError)#"  , py::arg("F"),  py::arg("E1"),  py::arg("E2"),  py::arg("Update")=static_cast<const Standard_Boolean>(Standard_False))
        .def("GeometricControls",
             (Standard_Boolean (BRepCheck_Wire::*)() const) static_cast<Standard_Boolean (BRepCheck_Wire::*)() const>(&BRepCheck_Wire::GeometricControls),
             R"#(report SelfIntersect() check would be (is) done)#" )
        .def("GeometricControls",
             (void (BRepCheck_Wire::*)( const Standard_Boolean ) ) static_cast<void (BRepCheck_Wire::*)( const Standard_Boolean ) >(&BRepCheck_Wire::GeometricControls),
             R"#(set SelfIntersect() to be checked)#"  , py::arg("B"))
        .def("SetStatus",
             (void (BRepCheck_Wire::*)( const BRepCheck_Status ) ) static_cast<void (BRepCheck_Wire::*)( const BRepCheck_Status ) >(&BRepCheck_Wire::SetStatus),
             R"#(Sets status of Wire;)#"  , py::arg("theStatus"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepCheck_Wire::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepCheck_Wire::*)() const>(&BRepCheck_Wire::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepCheck_Wire::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepCheck_Wire::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\BRepCheck_DataMapOfShapeResult.hxx
// ./opencascade\BRepCheck_Vertex.hxx
// ./opencascade\BRepCheck_Analyzer.hxx
// ./opencascade\BRepCheck_Wire.hxx
// ./opencascade\BRepCheck_Result.hxx
// ./opencascade\BRepCheck_Status.hxx
// ./opencascade\BRepCheck_DataMapOfShapeListOfStatus.hxx
// ./opencascade\BRepCheck_Solid.hxx
// ./opencascade\BRepCheck_Shell.hxx
// ./opencascade\BRepCheck_DataMapIteratorOfDataMapOfShapeResult.hxx
// ./opencascade\BRepCheck_Edge.hxx
// ./opencascade\BRepCheck.hxx
// ./opencascade\BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus.hxx
// ./opencascade\BRepCheck_ListOfStatus.hxx
// ./opencascade\BRepCheck_Face.hxx
// ./opencascade\BRepCheck_ListIteratorOfListOfStatus.hxx

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


// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <IntPolyh_StartPoint.hxx>
#include <IntPolyh_Triangle.hxx>
#include <IntPolyh_MaillageAffinage.hxx>
#include <IntPolyh_Triangle.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPolyh_Triangle.hxx>
#include <Adaptor3d_HSurface.hxx>

// module includes
#include <IntPolyh_Array.hxx>
#include <IntPolyh_ArrayOfEdges.hxx>
#include <IntPolyh_ArrayOfPointNormal.hxx>
#include <IntPolyh_ArrayOfPoints.hxx>
#include <IntPolyh_ArrayOfSectionLines.hxx>
#include <IntPolyh_ArrayOfTangentZones.hxx>
#include <IntPolyh_ArrayOfTriangles.hxx>
#include <IntPolyh_Couple.hxx>
#include <IntPolyh_CoupleMapHasher.hxx>
#include <IntPolyh_Edge.hxx>
#include <IntPolyh_Intersection.hxx>
#include <IntPolyh_ListOfCouples.hxx>
#include <IntPolyh_MaillageAffinage.hxx>
#include <IntPolyh_PMaillageAffinage.hxx>
#include <IntPolyh_Point.hxx>
#include <IntPolyh_SectionLine.hxx>
#include <IntPolyh_SeqOfStartPoints.hxx>
#include <IntPolyh_StartPoint.hxx>
#include <IntPolyh_Tools.hxx>
#include <IntPolyh_Triangle.hxx>

// template related includes
// ./opencascade/IntPolyh_SeqOfStartPoints.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntPolyh_ListOfCouples.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntPolyh(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntPolyh"));


//Python trampoline classes

// classes


    static_cast<py::class_<IntPolyh_Couple , shared_ptr<IntPolyh_Couple> >>(m.attr("IntPolyh_Couple"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real >()  , py::arg("theTriangle1"),  py::arg("theTriangle2"),  py::arg("theAngle")=static_cast<const Standard_Real>(- 2.0) )
    // custom constructors
    // methods
        .def("FirstValue",
             (Standard_Integer (IntPolyh_Couple::*)() const) static_cast<Standard_Integer (IntPolyh_Couple::*)() const>(&IntPolyh_Couple::FirstValue),
             R"#(Returns the first index)#" )
        .def("SecondValue",
             (Standard_Integer (IntPolyh_Couple::*)() const) static_cast<Standard_Integer (IntPolyh_Couple::*)() const>(&IntPolyh_Couple::SecondValue),
             R"#(Returns the second index)#" )
        .def("IsAnalyzed",
             (Standard_Boolean (IntPolyh_Couple::*)() const) static_cast<Standard_Boolean (IntPolyh_Couple::*)() const>(&IntPolyh_Couple::IsAnalyzed),
             R"#(Returns TRUE if the couple has been analyzed)#" )
        .def("Angle",
             (Standard_Real (IntPolyh_Couple::*)() const) static_cast<Standard_Real (IntPolyh_Couple::*)() const>(&IntPolyh_Couple::Angle),
             R"#(Returns the angle)#" )
        .def("SetCoupleValue",
             (void (IntPolyh_Couple::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (IntPolyh_Couple::*)( const Standard_Integer , const Standard_Integer ) >(&IntPolyh_Couple::SetCoupleValue),
             R"#(Sets the triangles)#"  , py::arg("theInd1"),  py::arg("theInd2"))
        .def("SetAnalyzed",
             (void (IntPolyh_Couple::*)( const Standard_Boolean ) ) static_cast<void (IntPolyh_Couple::*)( const Standard_Boolean ) >(&IntPolyh_Couple::SetAnalyzed),
             R"#(Sets the analyzed flag)#"  , py::arg("theAnalyzed"))
        .def("SetAngle",
             (void (IntPolyh_Couple::*)( const Standard_Real ) ) static_cast<void (IntPolyh_Couple::*)( const Standard_Real ) >(&IntPolyh_Couple::SetAngle),
             R"#(Sets the angle)#"  , py::arg("theAngle"))
        .def("IsEqual",
             (Standard_Boolean (IntPolyh_Couple::*)( const IntPolyh_Couple & ) const) static_cast<Standard_Boolean (IntPolyh_Couple::*)( const IntPolyh_Couple & ) const>(&IntPolyh_Couple::IsEqual),
             R"#(Returns true if the Couple is equal to <theOther>)#"  , py::arg("theOther"))
        .def("HashCode",
             (Standard_Integer (IntPolyh_Couple::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntPolyh_Couple::*)( const Standard_Integer ) const>(&IntPolyh_Couple::HashCode),
             R"#(Computes a hash code for this couple, in the range [1, theUpperBound])#"  , py::arg("theUpperBound"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntPolyh_CoupleMapHasher , shared_ptr<IntPolyh_CoupleMapHasher>>(m,"IntPolyh_CoupleMapHasher");

    static_cast<py::class_<IntPolyh_CoupleMapHasher , shared_ptr<IntPolyh_CoupleMapHasher> >>(m.attr("IntPolyh_CoupleMapHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const IntPolyh_Couple & , const Standard_Integer ) ) static_cast<Standard_Integer (*)( const IntPolyh_Couple & , const Standard_Integer ) >(&IntPolyh_CoupleMapHasher::HashCode),
                    R"#(Computes a hash code for the given couple, in the range [1, theUpperBound])#"  , py::arg("theCouple"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const IntPolyh_Couple & , const IntPolyh_Couple & ) ) static_cast<Standard_Boolean (*)( const IntPolyh_Couple & , const IntPolyh_Couple & ) >(&IntPolyh_CoupleMapHasher::IsEqual),
                    R"#(None)#"  , py::arg("theCouple1"),  py::arg("theCouple2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPolyh_Edge , shared_ptr<IntPolyh_Edge> >>(m.attr("IntPolyh_Edge"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("thePoint1"),  py::arg("thePoint2"),  py::arg("theTriangle1"),  py::arg("theTriangle2") )
    // custom constructors
    // methods
        .def("FirstPoint",
             (Standard_Integer (IntPolyh_Edge::*)() const) static_cast<Standard_Integer (IntPolyh_Edge::*)() const>(&IntPolyh_Edge::FirstPoint),
             R"#(Returns the first point)#" )
        .def("SecondPoint",
             (Standard_Integer (IntPolyh_Edge::*)() const) static_cast<Standard_Integer (IntPolyh_Edge::*)() const>(&IntPolyh_Edge::SecondPoint),
             R"#(Returns the second point)#" )
        .def("FirstTriangle",
             (Standard_Integer (IntPolyh_Edge::*)() const) static_cast<Standard_Integer (IntPolyh_Edge::*)() const>(&IntPolyh_Edge::FirstTriangle),
             R"#(Returns the first triangle)#" )
        .def("SecondTriangle",
             (Standard_Integer (IntPolyh_Edge::*)() const) static_cast<Standard_Integer (IntPolyh_Edge::*)() const>(&IntPolyh_Edge::SecondTriangle),
             R"#(Returns the second triangle)#" )
        .def("SetFirstPoint",
             (void (IntPolyh_Edge::*)( const Standard_Integer ) ) static_cast<void (IntPolyh_Edge::*)( const Standard_Integer ) >(&IntPolyh_Edge::SetFirstPoint),
             R"#(Sets the first point)#"  , py::arg("thePoint"))
        .def("SetSecondPoint",
             (void (IntPolyh_Edge::*)( const Standard_Integer ) ) static_cast<void (IntPolyh_Edge::*)( const Standard_Integer ) >(&IntPolyh_Edge::SetSecondPoint),
             R"#(Sets the second point)#"  , py::arg("thePoint"))
        .def("SetFirstTriangle",
             (void (IntPolyh_Edge::*)( const Standard_Integer ) ) static_cast<void (IntPolyh_Edge::*)( const Standard_Integer ) >(&IntPolyh_Edge::SetFirstTriangle),
             R"#(Sets the first triangle)#"  , py::arg("theTriangle"))
        .def("SetSecondTriangle",
             (void (IntPolyh_Edge::*)( const Standard_Integer ) ) static_cast<void (IntPolyh_Edge::*)( const Standard_Integer ) >(&IntPolyh_Edge::SetSecondTriangle),
             R"#(Sets the second triangle)#"  , py::arg("theTriangle"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPolyh_Intersection , shared_ptr<IntPolyh_Intersection> >>(m.attr("IntPolyh_Intersection"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntPolyh_Intersection::*)() const) static_cast<Standard_Boolean (IntPolyh_Intersection::*)() const>(&IntPolyh_Intersection::IsDone),
             R"#(Returns state of the operation)#" )
        .def("NbSectionLines",
             (Standard_Integer (IntPolyh_Intersection::*)() const) static_cast<Standard_Integer (IntPolyh_Intersection::*)() const>(&IntPolyh_Intersection::NbSectionLines),
             R"#(Returns the number of section lines)#" )
        .def("NbPointsInLine",
             (Standard_Integer (IntPolyh_Intersection::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntPolyh_Intersection::*)( const Standard_Integer ) const>(&IntPolyh_Intersection::NbPointsInLine),
             R"#(Returns the number of points in the given line)#"  , py::arg("IndexLine"))
        .def("NbTangentZones",
             (Standard_Integer (IntPolyh_Intersection::*)() const) static_cast<Standard_Integer (IntPolyh_Intersection::*)() const>(&IntPolyh_Intersection::NbTangentZones),
             R"#(None)#" )
        .def("NbPointsInTangentZone",
             (Standard_Integer (IntPolyh_Intersection::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntPolyh_Intersection::*)( const Standard_Integer ) const>(&IntPolyh_Intersection::NbPointsInTangentZone),
             R"#(Returns number of points in tangent zone)#"  , py::arg(""))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPolyh_MaillageAffinage , shared_ptr<IntPolyh_MaillageAffinage> >>(m.attr("IntPolyh_MaillageAffinage"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPolyh_Point , shared_ptr<IntPolyh_Point> >>(m.attr("IntPolyh_Point"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("x"),  py::arg("y"),  py::arg("z"),  py::arg("u"),  py::arg("v") )
    // custom constructors
    // methods
        .def("X",
             (Standard_Real (IntPolyh_Point::*)() const) static_cast<Standard_Real (IntPolyh_Point::*)() const>(&IntPolyh_Point::X),
             R"#(Returns X coordinate of the 3D point)#" )
        .def("Y",
             (Standard_Real (IntPolyh_Point::*)() const) static_cast<Standard_Real (IntPolyh_Point::*)() const>(&IntPolyh_Point::Y),
             R"#(Returns Y coordinate of the 3D point)#" )
        .def("Z",
             (Standard_Real (IntPolyh_Point::*)() const) static_cast<Standard_Real (IntPolyh_Point::*)() const>(&IntPolyh_Point::Z),
             R"#(Returns the Z coordinate of the 3D point)#" )
        .def("U",
             (Standard_Real (IntPolyh_Point::*)() const) static_cast<Standard_Real (IntPolyh_Point::*)() const>(&IntPolyh_Point::U),
             R"#(Returns the U coordinate of the 2D point)#" )
        .def("V",
             (Standard_Real (IntPolyh_Point::*)() const) static_cast<Standard_Real (IntPolyh_Point::*)() const>(&IntPolyh_Point::V),
             R"#(Returns the V coordinate of the 2D point)#" )
        .def("PartOfCommon",
             (Standard_Integer (IntPolyh_Point::*)() const) static_cast<Standard_Integer (IntPolyh_Point::*)() const>(&IntPolyh_Point::PartOfCommon),
             R"#(Returns 0 if the point is not common with the other surface)#" )
        .def("Equal",
             (void (IntPolyh_Point::*)( const IntPolyh_Point & ) ) static_cast<void (IntPolyh_Point::*)( const IntPolyh_Point & ) >(&IntPolyh_Point::Equal),
             R"#(Assignment operator)#"  , py::arg("Pt"))
        .def("Set",
             (void (IntPolyh_Point::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer ) >(&IntPolyh_Point::Set),
             R"#(Sets the point)#"  , py::arg("x"),  py::arg("y"),  py::arg("z"),  py::arg("u"),  py::arg("v"),  py::arg("II")=static_cast<const Standard_Integer>(1))
        .def("SetX",
             (void (IntPolyh_Point::*)( const Standard_Real ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Real ) >(&IntPolyh_Point::SetX),
             R"#(Sets the X coordinate for the 3D point)#"  , py::arg("x"))
        .def("SetY",
             (void (IntPolyh_Point::*)( const Standard_Real ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Real ) >(&IntPolyh_Point::SetY),
             R"#(Sets the Y coordinate for the 3D point)#"  , py::arg("y"))
        .def("SetZ",
             (void (IntPolyh_Point::*)( const Standard_Real ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Real ) >(&IntPolyh_Point::SetZ),
             R"#(Sets the Z coordinate for the 3D point)#"  , py::arg("z"))
        .def("SetU",
             (void (IntPolyh_Point::*)( const Standard_Real ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Real ) >(&IntPolyh_Point::SetU),
             R"#(Sets the U coordinate for the 2D point)#"  , py::arg("u"))
        .def("SetV",
             (void (IntPolyh_Point::*)( const Standard_Real ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Real ) >(&IntPolyh_Point::SetV),
             R"#(Sets the V coordinate for the 2D point)#"  , py::arg("v"))
        .def("SetPartOfCommon",
             (void (IntPolyh_Point::*)( const Standard_Integer ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Integer ) >(&IntPolyh_Point::SetPartOfCommon),
             R"#(Sets the part of common)#"  , py::arg("ii"))
        .def("SetDegenerated",
             (void (IntPolyh_Point::*)( const Standard_Boolean ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Boolean ) >(&IntPolyh_Point::SetDegenerated),
             R"#(Sets the degenerated flag)#"  , py::arg("theFlag"))
        .def("Degenerated",
             (Standard_Boolean (IntPolyh_Point::*)() const) static_cast<Standard_Boolean (IntPolyh_Point::*)() const>(&IntPolyh_Point::Degenerated),
             R"#(Returns the degenerated flag)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__add__",
             (IntPolyh_Point (IntPolyh_Point::*)( const IntPolyh_Point & ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const IntPolyh_Point & ) const>(&IntPolyh_Point::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("P1"))
        .def("__sub__",
             (IntPolyh_Point (IntPolyh_Point::*)( const IntPolyh_Point & ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const IntPolyh_Point & ) const>(&IntPolyh_Point::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("P1"))
        .def("__truediv__",
             (IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real ) const>(&IntPolyh_Point::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("rr"))
        .def("__mul__",
             (IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real ) const>(&IntPolyh_Point::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("rr"))
        .def("__rmul__",
             (IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real ) const>(&IntPolyh_Point::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("rr"))
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntPolyh_PointNormal , shared_ptr<IntPolyh_PointNormal>>(m,"IntPolyh_PointNormal");

    static_cast<py::class_<IntPolyh_PointNormal , shared_ptr<IntPolyh_PointNormal> >>(m.attr("IntPolyh_PointNormal"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPolyh_SectionLine , shared_ptr<IntPolyh_SectionLine> >>(m.attr("IntPolyh_SectionLine"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPolyh_StartPoint , shared_ptr<IntPolyh_StartPoint> >>(m.attr("IntPolyh_StartPoint"))
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
    register_default_constructor<IntPolyh_Tools , shared_ptr<IntPolyh_Tools>>(m,"IntPolyh_Tools");

    static_cast<py::class_<IntPolyh_Tools , shared_ptr<IntPolyh_Tools> >>(m.attr("IntPolyh_Tools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPolyh_Triangle , shared_ptr<IntPolyh_Triangle> >>(m.attr("IntPolyh_Triangle"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("thePoint1"),  py::arg("thePoint2"),  py::arg("thePoint3") )
    // custom constructors
    // methods
        .def("FirstPoint",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::FirstPoint),
             R"#(Returns the first point)#" )
        .def("SecondPoint",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::SecondPoint),
             R"#(Returns the second point)#" )
        .def("ThirdPoint",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::ThirdPoint),
             R"#(Returns the third point)#" )
        .def("FirstEdge",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::FirstEdge),
             R"#(Returns the first edge)#" )
        .def("FirstEdgeOrientation",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::FirstEdgeOrientation),
             R"#(Returns the orientation of the first edge)#" )
        .def("SecondEdge",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::SecondEdge),
             R"#(Returns the second edge)#" )
        .def("SecondEdgeOrientation",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::SecondEdgeOrientation),
             R"#(Returns the orientation of the second edge)#" )
        .def("ThirdEdge",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::ThirdEdge),
             R"#(Returns the third edge)#" )
        .def("ThirdEdgeOrientation",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::ThirdEdgeOrientation),
             R"#(Returns the orientation of the third edge)#" )
        .def("Deflection",
             (Standard_Real (IntPolyh_Triangle::*)() const) static_cast<Standard_Real (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::Deflection),
             R"#(Returns the deflection of the triangle)#" )
        .def("IsIntersectionPossible",
             (Standard_Boolean (IntPolyh_Triangle::*)() const) static_cast<Standard_Boolean (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::IsIntersectionPossible),
             R"#(Returns possibility of the intersection)#" )
        .def("HasIntersection",
             (Standard_Boolean (IntPolyh_Triangle::*)() const) static_cast<Standard_Boolean (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::HasIntersection),
             R"#(Returns true if the triangle has interfered the other triangle)#" )
        .def("IsDegenerated",
             (Standard_Boolean (IntPolyh_Triangle::*)() const) static_cast<Standard_Boolean (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::IsDegenerated),
             R"#(Returns the Degenerated flag)#" )
        .def("SetFirstPoint",
             (void (IntPolyh_Triangle::*)( const Standard_Integer ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer ) >(&IntPolyh_Triangle::SetFirstPoint),
             R"#(Sets the first point)#"  , py::arg("thePoint"))
        .def("SetSecondPoint",
             (void (IntPolyh_Triangle::*)( const Standard_Integer ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer ) >(&IntPolyh_Triangle::SetSecondPoint),
             R"#(Sets the second point)#"  , py::arg("thePoint"))
        .def("SetThirdPoint",
             (void (IntPolyh_Triangle::*)( const Standard_Integer ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer ) >(&IntPolyh_Triangle::SetThirdPoint),
             R"#(Sets the third point)#"  , py::arg("thePoint"))
        .def("SetFirstEdge",
             (void (IntPolyh_Triangle::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer , const Standard_Integer ) >(&IntPolyh_Triangle::SetFirstEdge),
             R"#(Sets the first edge)#"  , py::arg("theEdge"),  py::arg("theEdgeOrientation"))
        .def("SetSecondEdge",
             (void (IntPolyh_Triangle::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer , const Standard_Integer ) >(&IntPolyh_Triangle::SetSecondEdge),
             R"#(Sets the second edge)#"  , py::arg("theEdge"),  py::arg("theEdgeOrientation"))
        .def("SetThirdEdge",
             (void (IntPolyh_Triangle::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer , const Standard_Integer ) >(&IntPolyh_Triangle::SetThirdEdge),
             R"#(Sets the third edge)#"  , py::arg("theEdge"),  py::arg("theEdgeOrientation"))
        .def("SetDeflection",
             (void (IntPolyh_Triangle::*)( const Standard_Real ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Real ) >(&IntPolyh_Triangle::SetDeflection),
             R"#(Sets the deflection)#"  , py::arg("theDeflection"))
        .def("SetIntersectionPossible",
             (void (IntPolyh_Triangle::*)( const Standard_Boolean ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Boolean ) >(&IntPolyh_Triangle::SetIntersectionPossible),
             R"#(Sets the flag of possibility of intersection)#"  , py::arg("theIP"))
        .def("SetIntersection",
             (void (IntPolyh_Triangle::*)( const Standard_Boolean ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Boolean ) >(&IntPolyh_Triangle::SetIntersection),
             R"#(Sets the flag of intersection)#"  , py::arg("theInt"))
        .def("SetDegenerated",
             (void (IntPolyh_Triangle::*)( const Standard_Boolean ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Boolean ) >(&IntPolyh_Triangle::SetDegenerated),
             R"#(Sets the degenerated flag)#"  , py::arg("theDegFlag"))
        .def("GetEdgeNumber",
             (Standard_Integer (IntPolyh_Triangle::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntPolyh_Triangle::*)( const Standard_Integer ) const>(&IntPolyh_Triangle::GetEdgeNumber),
             R"#(Gets the edge number by the index)#"  , py::arg("theEdgeIndex"))
        .def("SetEdge",
             (void (IntPolyh_Triangle::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer , const Standard_Integer ) >(&IntPolyh_Triangle::SetEdge),
             R"#(Sets the edge by the index)#"  , py::arg("theEdgeIndex"),  py::arg("theEdgeNumber"))
        .def("GetEdgeOrientation",
             (Standard_Integer (IntPolyh_Triangle::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntPolyh_Triangle::*)( const Standard_Integer ) const>(&IntPolyh_Triangle::GetEdgeOrientation),
             R"#(Gets the edges orientation by the index)#"  , py::arg("theEdgeIndex"))
        .def("SetEdgeOrientation",
             (void (IntPolyh_Triangle::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer , const Standard_Integer ) >(&IntPolyh_Triangle::SetEdgeOrientation),
             R"#(Sets the edges orientation by the index)#"  , py::arg("theEdgeIndex"),  py::arg("theEdgeOrientation"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IntPolyh_Triangle.hxx
// ./opencascade/IntPolyh_SeqOfStartPoints.hxx
// ./opencascade/IntPolyh_SectionLine.hxx
// ./opencascade/IntPolyh_ArrayOfTriangles.hxx
// ./opencascade/IntPolyh_Edge.hxx
// ./opencascade/IntPolyh_ArrayOfEdges.hxx
// ./opencascade/IntPolyh_ArrayOfSectionLines.hxx
// ./opencascade/IntPolyh_ArrayOfTangentZones.hxx
// ./opencascade/IntPolyh_PMaillageAffinage.hxx
// ./opencascade/IntPolyh_CoupleMapHasher.hxx
// ./opencascade/IntPolyh_StartPoint.hxx
// ./opencascade/IntPolyh_ArrayOfPointNormal.hxx
// ./opencascade/IntPolyh_Point.hxx
// ./opencascade/IntPolyh_ArrayOfPoints.hxx
// ./opencascade/IntPolyh_ListOfCouples.hxx
// ./opencascade/IntPolyh_Array.hxx
// ./opencascade/IntPolyh_Tools.hxx
// ./opencascade/IntPolyh_MaillageAffinage.hxx
// ./opencascade/IntPolyh_Couple.hxx
// ./opencascade/IntPolyh_Intersection.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<IntPolyh_StartPoint>(m,"IntPolyh_SeqOfStartPoints");
    register_template_NCollection_List<IntPolyh_Couple>(m,"IntPolyh_ListOfCouples");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

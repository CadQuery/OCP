
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NullValue.hxx>
#include <Standard_MultiplyDefined.hxx>
#include <gp_Lin.hxx>
#include <gp_Pln.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax3.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_MultiplyDefined.hxx>
#include <gp_Pln.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax3.hxx>

// module includes
#include <Bnd_Array1OfBox.hxx>
#include <Bnd_Array1OfBox2d.hxx>
#include <Bnd_Array1OfSphere.hxx>
#include <Bnd_B2d.hxx>
#include <Bnd_B2f.hxx>
#include <Bnd_B3d.hxx>
#include <Bnd_B3f.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <Bnd_BoundSortBox2d.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_Box2d.hxx>
#include <Bnd_HArray1OfBox.hxx>
#include <Bnd_HArray1OfBox2d.hxx>
#include <Bnd_HArray1OfSphere.hxx>
#include <Bnd_OBB.hxx>
#include <Bnd_Range.hxx>
#include <Bnd_SeqOfBox.hxx>
#include <Bnd_Sphere.hxx>
#include <Bnd_Tools.hxx>

// template related includes
// ./opencascade/Bnd_SeqOfBox.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Bnd_Array1OfBox2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Bnd_Array1OfSphere.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Bnd_Array1OfBox.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Bnd(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Bnd"));


//Python trampoline classes

// classes


    static_cast<py::class_<Bnd_B2d , shared_ptr<Bnd_B2d> >>(m.attr("Bnd_B2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_XY &,const gp_XY & >()  , py::arg("theCenter"),  py::arg("theHSize") )
    // custom constructors
    // methods
        .def("IsVoid",
             (Standard_Boolean (Bnd_B2d::*)() const) static_cast<Standard_Boolean (Bnd_B2d::*)() const>(&Bnd_B2d::IsVoid),
             R"#(Returns True if the box is void (non-initialized).)#" )
        .def("Clear",
             (void (Bnd_B2d::*)() ) static_cast<void (Bnd_B2d::*)() >(&Bnd_B2d::Clear),
             R"#(Reset the box data.)#" )
        .def("Add",
             (void (Bnd_B2d::*)( const gp_XY & ) ) static_cast<void (Bnd_B2d::*)( const gp_XY & ) >(&Bnd_B2d::Add),
             R"#(Update the box by a point.)#"  , py::arg("thePnt"))
        .def("Add",
             (void (Bnd_B2d::*)( const gp_Pnt2d & ) ) static_cast<void (Bnd_B2d::*)( const gp_Pnt2d & ) >(&Bnd_B2d::Add),
             R"#(Update the box by a point.)#"  , py::arg("thePnt"))
        .def("Add",
             (void (Bnd_B2d::*)( const Bnd_B2d & ) ) static_cast<void (Bnd_B2d::*)( const Bnd_B2d & ) >(&Bnd_B2d::Add),
             R"#(Update the box by another box.)#"  , py::arg("theBox"))
        .def("CornerMin",
             (gp_XY (Bnd_B2d::*)() const) static_cast<gp_XY (Bnd_B2d::*)() const>(&Bnd_B2d::CornerMin),
             R"#(Query a box corner: (Center - HSize). You must make sure that the box is NOT VOID (see IsVoid()), otherwise the method returns irrelevant result.)#" )
        .def("CornerMax",
             (gp_XY (Bnd_B2d::*)() const) static_cast<gp_XY (Bnd_B2d::*)() const>(&Bnd_B2d::CornerMax),
             R"#(Query a box corner: (Center + HSize). You must make sure that the box is NOT VOID (see IsVoid()), otherwise the method returns irrelevant result.)#" )
        .def("SquareExtent",
             (Standard_Real (Bnd_B2d::*)() const) static_cast<Standard_Real (Bnd_B2d::*)() const>(&Bnd_B2d::SquareExtent),
             R"#(Query the square diagonal. If the box is VOID (see method IsVoid()) then a very big real value is returned.)#" )
        .def("Enlarge",
             (void (Bnd_B2d::*)( const Standard_Real ) ) static_cast<void (Bnd_B2d::*)( const Standard_Real ) >(&Bnd_B2d::Enlarge),
             R"#(Extend the Box by the absolute value of theDiff.)#"  , py::arg("theDiff"))
        .def("Limit",
             (Standard_Boolean (Bnd_B2d::*)( const Bnd_B2d & ) ) static_cast<Standard_Boolean (Bnd_B2d::*)( const Bnd_B2d & ) >(&Bnd_B2d::Limit),
             R"#(Limit the Box by the internals of theOtherBox. Returns True if the limitation takes place, otherwise False indicating that the boxes do not intersect.)#"  , py::arg("theOtherBox"))
        .def("Transformed",
             (Bnd_B2d (Bnd_B2d::*)( const gp_Trsf2d & ) const) static_cast<Bnd_B2d (Bnd_B2d::*)( const gp_Trsf2d & ) const>(&Bnd_B2d::Transformed),
             R"#(Transform the bounding box with the given transformation. The resulting box will be larger if theTrsf contains rotation.)#"  , py::arg("theTrsf"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B2d::*)( const gp_XY & ) const) static_cast<Standard_Boolean (Bnd_B2d::*)( const gp_XY & ) const>(&Bnd_B2d::IsOut),
             R"#(Check the given point for the inclusion in the Box. Returns True if the point is outside.)#"  , py::arg("thePnt"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B2d::*)( const gp_XY & , const Standard_Real , const Standard_Boolean ) const) static_cast<Standard_Boolean (Bnd_B2d::*)( const gp_XY & , const Standard_Real , const Standard_Boolean ) const>(&Bnd_B2d::IsOut),
             R"#(Check a circle for the intersection with the current box. Returns True if there is no intersection between boxes.)#"  , py::arg("theCenter"),  py::arg("theRadius"),  py::arg("isCircleHollow")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsOut",
             (Standard_Boolean (Bnd_B2d::*)( const Bnd_B2d & ) const) static_cast<Standard_Boolean (Bnd_B2d::*)( const Bnd_B2d & ) const>(&Bnd_B2d::IsOut),
             R"#(Check the given box for the intersection with the current box. Returns True if there is no intersection between boxes.)#"  , py::arg("theOtherBox"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B2d::*)( const Bnd_B2d & , const gp_Trsf2d & ) const) static_cast<Standard_Boolean (Bnd_B2d::*)( const Bnd_B2d & , const gp_Trsf2d & ) const>(&Bnd_B2d::IsOut),
             R"#(Check the given box oriented by the given transformation for the intersection with the current box. Returns True if there is no intersection between boxes.)#"  , py::arg("theOtherBox"),  py::arg("theTrsf"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B2d::*)( const gp_Ax2d & ) const) static_cast<Standard_Boolean (Bnd_B2d::*)( const gp_Ax2d & ) const>(&Bnd_B2d::IsOut),
             R"#(Check the given Line for the intersection with the current box. Returns True if there is no intersection.)#"  , py::arg("theLine"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B2d::*)( const gp_XY & , const gp_XY & ) const) static_cast<Standard_Boolean (Bnd_B2d::*)( const gp_XY & , const gp_XY & ) const>(&Bnd_B2d::IsOut),
             R"#(Check the Segment defined by the couple of input points for the intersection with the current box. Returns True if there is no intersection.)#"  , py::arg("theP0"),  py::arg("theP1"))
        .def("IsIn",
             (Standard_Boolean (Bnd_B2d::*)( const Bnd_B2d & ) const) static_cast<Standard_Boolean (Bnd_B2d::*)( const Bnd_B2d & ) const>(&Bnd_B2d::IsIn),
             R"#(Check that the box 'this' is inside the given box 'theBox'. Returns True if 'this' box is fully inside 'theBox'.)#"  , py::arg("theBox"))
        .def("IsIn",
             (Standard_Boolean (Bnd_B2d::*)( const Bnd_B2d & , const gp_Trsf2d & ) const) static_cast<Standard_Boolean (Bnd_B2d::*)( const Bnd_B2d & , const gp_Trsf2d & ) const>(&Bnd_B2d::IsIn),
             R"#(Check that the box 'this' is inside the given box 'theBox' transformed by 'theTrsf'. Returns True if 'this' box is fully inside the transformed 'theBox'.)#"  , py::arg("theBox"),  py::arg("theTrsf"))
        .def("SetCenter",
             (void (Bnd_B2d::*)( const gp_XY & ) ) static_cast<void (Bnd_B2d::*)( const gp_XY & ) >(&Bnd_B2d::SetCenter),
             R"#(Set the Center coordinates)#"  , py::arg("theCenter"))
        .def("SetHSize",
             (void (Bnd_B2d::*)( const gp_XY & ) ) static_cast<void (Bnd_B2d::*)( const gp_XY & ) >(&Bnd_B2d::SetHSize),
             R"#(Set the HSize (half-diagonal) coordinates. All components of theHSize must be non-negative.)#"  , py::arg("theHSize"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bnd_B2f , shared_ptr<Bnd_B2f> >>(m.attr("Bnd_B2f"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_XY &,const gp_XY & >()  , py::arg("theCenter"),  py::arg("theHSize") )
    // custom constructors
    // methods
        .def("IsVoid",
             (Standard_Boolean (Bnd_B2f::*)() const) static_cast<Standard_Boolean (Bnd_B2f::*)() const>(&Bnd_B2f::IsVoid),
             R"#(Returns True if the box is void (non-initialized).)#" )
        .def("Clear",
             (void (Bnd_B2f::*)() ) static_cast<void (Bnd_B2f::*)() >(&Bnd_B2f::Clear),
             R"#(Reset the box data.)#" )
        .def("Add",
             (void (Bnd_B2f::*)( const gp_XY & ) ) static_cast<void (Bnd_B2f::*)( const gp_XY & ) >(&Bnd_B2f::Add),
             R"#(Update the box by a point.)#"  , py::arg("thePnt"))
        .def("Add",
             (void (Bnd_B2f::*)( const gp_Pnt2d & ) ) static_cast<void (Bnd_B2f::*)( const gp_Pnt2d & ) >(&Bnd_B2f::Add),
             R"#(Update the box by a point.)#"  , py::arg("thePnt"))
        .def("Add",
             (void (Bnd_B2f::*)( const Bnd_B2f & ) ) static_cast<void (Bnd_B2f::*)( const Bnd_B2f & ) >(&Bnd_B2f::Add),
             R"#(Update the box by another box.)#"  , py::arg("theBox"))
        .def("CornerMin",
             (gp_XY (Bnd_B2f::*)() const) static_cast<gp_XY (Bnd_B2f::*)() const>(&Bnd_B2f::CornerMin),
             R"#(Query a box corner: (Center - HSize). You must make sure that the box is NOT VOID (see IsVoid()), otherwise the method returns irrelevant result.)#" )
        .def("CornerMax",
             (gp_XY (Bnd_B2f::*)() const) static_cast<gp_XY (Bnd_B2f::*)() const>(&Bnd_B2f::CornerMax),
             R"#(Query a box corner: (Center + HSize). You must make sure that the box is NOT VOID (see IsVoid()), otherwise the method returns irrelevant result.)#" )
        .def("SquareExtent",
             (Standard_Real (Bnd_B2f::*)() const) static_cast<Standard_Real (Bnd_B2f::*)() const>(&Bnd_B2f::SquareExtent),
             R"#(Query the square diagonal. If the box is VOID (see method IsVoid()) then a very big real value is returned.)#" )
        .def("Enlarge",
             (void (Bnd_B2f::*)( const Standard_Real ) ) static_cast<void (Bnd_B2f::*)( const Standard_Real ) >(&Bnd_B2f::Enlarge),
             R"#(Extend the Box by the absolute value of theDiff.)#"  , py::arg("theDiff"))
        .def("Limit",
             (Standard_Boolean (Bnd_B2f::*)( const Bnd_B2f & ) ) static_cast<Standard_Boolean (Bnd_B2f::*)( const Bnd_B2f & ) >(&Bnd_B2f::Limit),
             R"#(Limit the Box by the internals of theOtherBox. Returns True if the limitation takes place, otherwise False indicating that the boxes do not intersect.)#"  , py::arg("theOtherBox"))
        .def("Transformed",
             (Bnd_B2f (Bnd_B2f::*)( const gp_Trsf2d & ) const) static_cast<Bnd_B2f (Bnd_B2f::*)( const gp_Trsf2d & ) const>(&Bnd_B2f::Transformed),
             R"#(Transform the bounding box with the given transformation. The resulting box will be larger if theTrsf contains rotation.)#"  , py::arg("theTrsf"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B2f::*)( const gp_XY & ) const) static_cast<Standard_Boolean (Bnd_B2f::*)( const gp_XY & ) const>(&Bnd_B2f::IsOut),
             R"#(Check the given point for the inclusion in the Box. Returns True if the point is outside.)#"  , py::arg("thePnt"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B2f::*)( const gp_XY & , const Standard_Real , const Standard_Boolean ) const) static_cast<Standard_Boolean (Bnd_B2f::*)( const gp_XY & , const Standard_Real , const Standard_Boolean ) const>(&Bnd_B2f::IsOut),
             R"#(Check a circle for the intersection with the current box. Returns True if there is no intersection between boxes.)#"  , py::arg("theCenter"),  py::arg("theRadius"),  py::arg("isCircleHollow")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsOut",
             (Standard_Boolean (Bnd_B2f::*)( const Bnd_B2f & ) const) static_cast<Standard_Boolean (Bnd_B2f::*)( const Bnd_B2f & ) const>(&Bnd_B2f::IsOut),
             R"#(Check the given box for the intersection with the current box. Returns True if there is no intersection between boxes.)#"  , py::arg("theOtherBox"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B2f::*)( const Bnd_B2f & , const gp_Trsf2d & ) const) static_cast<Standard_Boolean (Bnd_B2f::*)( const Bnd_B2f & , const gp_Trsf2d & ) const>(&Bnd_B2f::IsOut),
             R"#(Check the given box oriented by the given transformation for the intersection with the current box. Returns True if there is no intersection between boxes.)#"  , py::arg("theOtherBox"),  py::arg("theTrsf"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B2f::*)( const gp_Ax2d & ) const) static_cast<Standard_Boolean (Bnd_B2f::*)( const gp_Ax2d & ) const>(&Bnd_B2f::IsOut),
             R"#(Check the given Line for the intersection with the current box. Returns True if there is no intersection.)#"  , py::arg("theLine"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B2f::*)( const gp_XY & , const gp_XY & ) const) static_cast<Standard_Boolean (Bnd_B2f::*)( const gp_XY & , const gp_XY & ) const>(&Bnd_B2f::IsOut),
             R"#(Check the Segment defined by the couple of input points for the intersection with the current box. Returns True if there is no intersection.)#"  , py::arg("theP0"),  py::arg("theP1"))
        .def("IsIn",
             (Standard_Boolean (Bnd_B2f::*)( const Bnd_B2f & ) const) static_cast<Standard_Boolean (Bnd_B2f::*)( const Bnd_B2f & ) const>(&Bnd_B2f::IsIn),
             R"#(Check that the box 'this' is inside the given box 'theBox'. Returns True if 'this' box is fully inside 'theBox'.)#"  , py::arg("theBox"))
        .def("IsIn",
             (Standard_Boolean (Bnd_B2f::*)( const Bnd_B2f & , const gp_Trsf2d & ) const) static_cast<Standard_Boolean (Bnd_B2f::*)( const Bnd_B2f & , const gp_Trsf2d & ) const>(&Bnd_B2f::IsIn),
             R"#(Check that the box 'this' is inside the given box 'theBox' transformed by 'theTrsf'. Returns True if 'this' box is fully inside the transformed 'theBox'.)#"  , py::arg("theBox"),  py::arg("theTrsf"))
        .def("SetCenter",
             (void (Bnd_B2f::*)( const gp_XY & ) ) static_cast<void (Bnd_B2f::*)( const gp_XY & ) >(&Bnd_B2f::SetCenter),
             R"#(Set the Center coordinates)#"  , py::arg("theCenter"))
        .def("SetHSize",
             (void (Bnd_B2f::*)( const gp_XY & ) ) static_cast<void (Bnd_B2f::*)( const gp_XY & ) >(&Bnd_B2f::SetHSize),
             R"#(Set the HSize (half-diagonal) coordinates. All components of theHSize must be non-negative.)#"  , py::arg("theHSize"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bnd_B3d , shared_ptr<Bnd_B3d> >>(m.attr("Bnd_B3d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_XYZ &,const gp_XYZ & >()  , py::arg("theCenter"),  py::arg("theHSize") )
    // custom constructors
    // methods
        .def("IsVoid",
             (Standard_Boolean (Bnd_B3d::*)() const) static_cast<Standard_Boolean (Bnd_B3d::*)() const>(&Bnd_B3d::IsVoid),
             R"#(Returns True if the box is void (non-initialized).)#" )
        .def("Clear",
             (void (Bnd_B3d::*)() ) static_cast<void (Bnd_B3d::*)() >(&Bnd_B3d::Clear),
             R"#(Reset the box data.)#" )
        .def("Add",
             (void (Bnd_B3d::*)( const gp_XYZ & ) ) static_cast<void (Bnd_B3d::*)( const gp_XYZ & ) >(&Bnd_B3d::Add),
             R"#(Update the box by a point.)#"  , py::arg("thePnt"))
        .def("Add",
             (void (Bnd_B3d::*)( const gp_Pnt & ) ) static_cast<void (Bnd_B3d::*)( const gp_Pnt & ) >(&Bnd_B3d::Add),
             R"#(Update the box by a point.)#"  , py::arg("thePnt"))
        .def("Add",
             (void (Bnd_B3d::*)( const Bnd_B3d & ) ) static_cast<void (Bnd_B3d::*)( const Bnd_B3d & ) >(&Bnd_B3d::Add),
             R"#(Update the box by another box.)#"  , py::arg("theBox"))
        .def("CornerMin",
             (gp_XYZ (Bnd_B3d::*)() const) static_cast<gp_XYZ (Bnd_B3d::*)() const>(&Bnd_B3d::CornerMin),
             R"#(Query the lower corner: (Center - HSize). You must make sure that the box is NOT VOID (see IsVoid()), otherwise the method returns irrelevant result.)#" )
        .def("CornerMax",
             (gp_XYZ (Bnd_B3d::*)() const) static_cast<gp_XYZ (Bnd_B3d::*)() const>(&Bnd_B3d::CornerMax),
             R"#(Query the upper corner: (Center + HSize). You must make sure that the box is NOT VOID (see IsVoid()), otherwise the method returns irrelevant result.)#" )
        .def("SquareExtent",
             (Standard_Real (Bnd_B3d::*)() const) static_cast<Standard_Real (Bnd_B3d::*)() const>(&Bnd_B3d::SquareExtent),
             R"#(Query the square diagonal. If the box is VOID (see method IsVoid()) then a very big real value is returned.)#" )
        .def("Enlarge",
             (void (Bnd_B3d::*)( const Standard_Real ) ) static_cast<void (Bnd_B3d::*)( const Standard_Real ) >(&Bnd_B3d::Enlarge),
             R"#(Extend the Box by the absolute value of theDiff.)#"  , py::arg("theDiff"))
        .def("Limit",
             (Standard_Boolean (Bnd_B3d::*)( const Bnd_B3d & ) ) static_cast<Standard_Boolean (Bnd_B3d::*)( const Bnd_B3d & ) >(&Bnd_B3d::Limit),
             R"#(Limit the Box by the internals of theOtherBox. Returns True if the limitation takes place, otherwise False indicating that the boxes do not intersect.)#"  , py::arg("theOtherBox"))
        .def("Transformed",
             (Bnd_B3d (Bnd_B3d::*)( const gp_Trsf & ) const) static_cast<Bnd_B3d (Bnd_B3d::*)( const gp_Trsf & ) const>(&Bnd_B3d::Transformed),
             R"#(Transform the bounding box with the given transformation. The resulting box will be larger if theTrsf contains rotation.)#"  , py::arg("theTrsf"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B3d::*)( const gp_XYZ & ) const) static_cast<Standard_Boolean (Bnd_B3d::*)( const gp_XYZ & ) const>(&Bnd_B3d::IsOut),
             R"#(Check the given point for the inclusion in the Box. Returns True if the point is outside.)#"  , py::arg("thePnt"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B3d::*)( const gp_XYZ & , const Standard_Real , const Standard_Boolean ) const) static_cast<Standard_Boolean (Bnd_B3d::*)( const gp_XYZ & , const Standard_Real , const Standard_Boolean ) const>(&Bnd_B3d::IsOut),
             R"#(Check a sphere for the intersection with the current box. Returns True if there is no intersection between boxes. If the parameter 'IsSphereHollow' is True, then the intersection is not reported for a box that is completely inside the sphere (otherwise this method would report an intersection).)#"  , py::arg("theCenter"),  py::arg("theRadius"),  py::arg("isSphereHollow")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsOut",
             (Standard_Boolean (Bnd_B3d::*)( const Bnd_B3d & ) const) static_cast<Standard_Boolean (Bnd_B3d::*)( const Bnd_B3d & ) const>(&Bnd_B3d::IsOut),
             R"#(Check the given box for the intersection with the current box. Returns True if there is no intersection between boxes.)#"  , py::arg("theOtherBox"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B3d::*)( const Bnd_B3d & , const gp_Trsf & ) const) static_cast<Standard_Boolean (Bnd_B3d::*)( const Bnd_B3d & , const gp_Trsf & ) const>(&Bnd_B3d::IsOut),
             R"#(Check the given box oriented by the given transformation for the intersection with the current box. Returns True if there is no intersection between boxes.)#"  , py::arg("theOtherBox"),  py::arg("theTrsf"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B3d::*)( const gp_Ax1 & , const Standard_Boolean , const Standard_Real ) const) static_cast<Standard_Boolean (Bnd_B3d::*)( const gp_Ax1 & , const Standard_Boolean , const Standard_Real ) const>(&Bnd_B3d::IsOut),
             R"#(Check the given Line for the intersection with the current box. Returns True if there is no intersection. isRay==True means intersection check with the positive half-line theOverthickness is the addition to the size of the current box (may be negative). If positive, it can be treated as the thickness of the line 'theLine' or the radius of the cylinder along 'theLine')#"  , py::arg("theLine"),  py::arg("isRay")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theOverthickness")=static_cast<const Standard_Real>(0.0))
        .def("IsOut",
             (Standard_Boolean (Bnd_B3d::*)( const gp_Ax3 & ) const) static_cast<Standard_Boolean (Bnd_B3d::*)( const gp_Ax3 & ) const>(&Bnd_B3d::IsOut),
             R"#(Check the given Plane for the intersection with the current box. Returns True if there is no intersection.)#"  , py::arg("thePlane"))
        .def("IsIn",
             (Standard_Boolean (Bnd_B3d::*)( const Bnd_B3d & ) const) static_cast<Standard_Boolean (Bnd_B3d::*)( const Bnd_B3d & ) const>(&Bnd_B3d::IsIn),
             R"#(Check that the box 'this' is inside the given box 'theBox'. Returns True if 'this' box is fully inside 'theBox'.)#"  , py::arg("theBox"))
        .def("IsIn",
             (Standard_Boolean (Bnd_B3d::*)( const Bnd_B3d & , const gp_Trsf & ) const) static_cast<Standard_Boolean (Bnd_B3d::*)( const Bnd_B3d & , const gp_Trsf & ) const>(&Bnd_B3d::IsIn),
             R"#(Check that the box 'this' is inside the given box 'theBox' transformed by 'theTrsf'. Returns True if 'this' box is fully inside the transformed 'theBox'.)#"  , py::arg("theBox"),  py::arg("theTrsf"))
        .def("SetCenter",
             (void (Bnd_B3d::*)( const gp_XYZ & ) ) static_cast<void (Bnd_B3d::*)( const gp_XYZ & ) >(&Bnd_B3d::SetCenter),
             R"#(Set the Center coordinates)#"  , py::arg("theCenter"))
        .def("SetHSize",
             (void (Bnd_B3d::*)( const gp_XYZ & ) ) static_cast<void (Bnd_B3d::*)( const gp_XYZ & ) >(&Bnd_B3d::SetHSize),
             R"#(Set the HSize (half-diagonal) coordinates. All components of theHSize must be non-negative.)#"  , py::arg("theHSize"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bnd_B3f , shared_ptr<Bnd_B3f> >>(m.attr("Bnd_B3f"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_XYZ &,const gp_XYZ & >()  , py::arg("theCenter"),  py::arg("theHSize") )
    // custom constructors
    // methods
        .def("IsVoid",
             (Standard_Boolean (Bnd_B3f::*)() const) static_cast<Standard_Boolean (Bnd_B3f::*)() const>(&Bnd_B3f::IsVoid),
             R"#(Returns True if the box is void (non-initialized).)#" )
        .def("Clear",
             (void (Bnd_B3f::*)() ) static_cast<void (Bnd_B3f::*)() >(&Bnd_B3f::Clear),
             R"#(Reset the box data.)#" )
        .def("Add",
             (void (Bnd_B3f::*)( const gp_XYZ & ) ) static_cast<void (Bnd_B3f::*)( const gp_XYZ & ) >(&Bnd_B3f::Add),
             R"#(Update the box by a point.)#"  , py::arg("thePnt"))
        .def("Add",
             (void (Bnd_B3f::*)( const gp_Pnt & ) ) static_cast<void (Bnd_B3f::*)( const gp_Pnt & ) >(&Bnd_B3f::Add),
             R"#(Update the box by a point.)#"  , py::arg("thePnt"))
        .def("Add",
             (void (Bnd_B3f::*)( const Bnd_B3f & ) ) static_cast<void (Bnd_B3f::*)( const Bnd_B3f & ) >(&Bnd_B3f::Add),
             R"#(Update the box by another box.)#"  , py::arg("theBox"))
        .def("CornerMin",
             (gp_XYZ (Bnd_B3f::*)() const) static_cast<gp_XYZ (Bnd_B3f::*)() const>(&Bnd_B3f::CornerMin),
             R"#(Query the lower corner: (Center - HSize). You must make sure that the box is NOT VOID (see IsVoid()), otherwise the method returns irrelevant result.)#" )
        .def("CornerMax",
             (gp_XYZ (Bnd_B3f::*)() const) static_cast<gp_XYZ (Bnd_B3f::*)() const>(&Bnd_B3f::CornerMax),
             R"#(Query the upper corner: (Center + HSize). You must make sure that the box is NOT VOID (see IsVoid()), otherwise the method returns irrelevant result.)#" )
        .def("SquareExtent",
             (Standard_Real (Bnd_B3f::*)() const) static_cast<Standard_Real (Bnd_B3f::*)() const>(&Bnd_B3f::SquareExtent),
             R"#(Query the square diagonal. If the box is VOID (see method IsVoid()) then a very big real value is returned.)#" )
        .def("Enlarge",
             (void (Bnd_B3f::*)( const Standard_Real ) ) static_cast<void (Bnd_B3f::*)( const Standard_Real ) >(&Bnd_B3f::Enlarge),
             R"#(Extend the Box by the absolute value of theDiff.)#"  , py::arg("theDiff"))
        .def("Limit",
             (Standard_Boolean (Bnd_B3f::*)( const Bnd_B3f & ) ) static_cast<Standard_Boolean (Bnd_B3f::*)( const Bnd_B3f & ) >(&Bnd_B3f::Limit),
             R"#(Limit the Box by the internals of theOtherBox. Returns True if the limitation takes place, otherwise False indicating that the boxes do not intersect.)#"  , py::arg("theOtherBox"))
        .def("Transformed",
             (Bnd_B3f (Bnd_B3f::*)( const gp_Trsf & ) const) static_cast<Bnd_B3f (Bnd_B3f::*)( const gp_Trsf & ) const>(&Bnd_B3f::Transformed),
             R"#(Transform the bounding box with the given transformation. The resulting box will be larger if theTrsf contains rotation.)#"  , py::arg("theTrsf"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B3f::*)( const gp_XYZ & ) const) static_cast<Standard_Boolean (Bnd_B3f::*)( const gp_XYZ & ) const>(&Bnd_B3f::IsOut),
             R"#(Check the given point for the inclusion in the Box. Returns True if the point is outside.)#"  , py::arg("thePnt"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B3f::*)( const gp_XYZ & , const Standard_Real , const Standard_Boolean ) const) static_cast<Standard_Boolean (Bnd_B3f::*)( const gp_XYZ & , const Standard_Real , const Standard_Boolean ) const>(&Bnd_B3f::IsOut),
             R"#(Check a sphere for the intersection with the current box. Returns True if there is no intersection between boxes. If the parameter 'IsSphereHollow' is True, then the intersection is not reported for a box that is completely inside the sphere (otherwise this method would report an intersection).)#"  , py::arg("theCenter"),  py::arg("theRadius"),  py::arg("isSphereHollow")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsOut",
             (Standard_Boolean (Bnd_B3f::*)( const Bnd_B3f & ) const) static_cast<Standard_Boolean (Bnd_B3f::*)( const Bnd_B3f & ) const>(&Bnd_B3f::IsOut),
             R"#(Check the given box for the intersection with the current box. Returns True if there is no intersection between boxes.)#"  , py::arg("theOtherBox"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B3f::*)( const Bnd_B3f & , const gp_Trsf & ) const) static_cast<Standard_Boolean (Bnd_B3f::*)( const Bnd_B3f & , const gp_Trsf & ) const>(&Bnd_B3f::IsOut),
             R"#(Check the given box oriented by the given transformation for the intersection with the current box. Returns True if there is no intersection between boxes.)#"  , py::arg("theOtherBox"),  py::arg("theTrsf"))
        .def("IsOut",
             (Standard_Boolean (Bnd_B3f::*)( const gp_Ax1 & , const Standard_Boolean , const Standard_Real ) const) static_cast<Standard_Boolean (Bnd_B3f::*)( const gp_Ax1 & , const Standard_Boolean , const Standard_Real ) const>(&Bnd_B3f::IsOut),
             R"#(Check the given Line for the intersection with the current box. Returns True if there is no intersection. isRay==True means intersection check with the positive half-line theOverthickness is the addition to the size of the current box (may be negative). If positive, it can be treated as the thickness of the line 'theLine' or the radius of the cylinder along 'theLine')#"  , py::arg("theLine"),  py::arg("isRay")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theOverthickness")=static_cast<const Standard_Real>(0.0))
        .def("IsOut",
             (Standard_Boolean (Bnd_B3f::*)( const gp_Ax3 & ) const) static_cast<Standard_Boolean (Bnd_B3f::*)( const gp_Ax3 & ) const>(&Bnd_B3f::IsOut),
             R"#(Check the given Plane for the intersection with the current box. Returns True if there is no intersection.)#"  , py::arg("thePlane"))
        .def("IsIn",
             (Standard_Boolean (Bnd_B3f::*)( const Bnd_B3f & ) const) static_cast<Standard_Boolean (Bnd_B3f::*)( const Bnd_B3f & ) const>(&Bnd_B3f::IsIn),
             R"#(Check that the box 'this' is inside the given box 'theBox'. Returns True if 'this' box is fully inside 'theBox'.)#"  , py::arg("theBox"))
        .def("IsIn",
             (Standard_Boolean (Bnd_B3f::*)( const Bnd_B3f & , const gp_Trsf & ) const) static_cast<Standard_Boolean (Bnd_B3f::*)( const Bnd_B3f & , const gp_Trsf & ) const>(&Bnd_B3f::IsIn),
             R"#(Check that the box 'this' is inside the given box 'theBox' transformed by 'theTrsf'. Returns True if 'this' box is fully inside the transformed 'theBox'.)#"  , py::arg("theBox"),  py::arg("theTrsf"))
        .def("SetCenter",
             (void (Bnd_B3f::*)( const gp_XYZ & ) ) static_cast<void (Bnd_B3f::*)( const gp_XYZ & ) >(&Bnd_B3f::SetCenter),
             R"#(Set the Center coordinates)#"  , py::arg("theCenter"))
        .def("SetHSize",
             (void (Bnd_B3f::*)( const gp_XYZ & ) ) static_cast<void (Bnd_B3f::*)( const gp_XYZ & ) >(&Bnd_B3f::SetHSize),
             R"#(Set the HSize (half-diagonal) coordinates. All components of theHSize must be non-negative.)#"  , py::arg("theHSize"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bnd_BoundSortBox , shared_ptr<Bnd_BoundSortBox> >>(m.attr("Bnd_BoundSortBox"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Bnd_BoundSortBox::*)( const Bnd_Box & , const opencascade::handle<Bnd_HArray1OfBox> & ) ) static_cast<void (Bnd_BoundSortBox::*)( const Bnd_Box & , const opencascade::handle<Bnd_HArray1OfBox> & ) >(&Bnd_BoundSortBox::Initialize),
             R"#(Initializes this comparison algorithm with - the set of bounding boxes SetOfBox.)#"  , py::arg("CompleteBox"),  py::arg("SetOfBox"))
        .def("Initialize",
             (void (Bnd_BoundSortBox::*)( const opencascade::handle<Bnd_HArray1OfBox> & ) ) static_cast<void (Bnd_BoundSortBox::*)( const opencascade::handle<Bnd_HArray1OfBox> & ) >(&Bnd_BoundSortBox::Initialize),
             R"#(Initializes this comparison algorithm with - the set of bounding boxes SetOfBox, where CompleteBox is given as the global bounding box of SetOfBox.)#"  , py::arg("SetOfBox"))
        .def("Initialize",
             (void (Bnd_BoundSortBox::*)( const Bnd_Box & , const Standard_Integer ) ) static_cast<void (Bnd_BoundSortBox::*)( const Bnd_Box & , const Standard_Integer ) >(&Bnd_BoundSortBox::Initialize),
             R"#(Initializes this comparison algorithm, giving it only - the maximum number nbComponents of the bounding boxes to be managed. Use the Add function to define the array of bounding boxes to be sorted by this algorithm.)#"  , py::arg("CompleteBox"),  py::arg("nbComponents"))
        .def("Add",
             (void (Bnd_BoundSortBox::*)( const Bnd_Box & , const Standard_Integer ) ) static_cast<void (Bnd_BoundSortBox::*)( const Bnd_Box & , const Standard_Integer ) >(&Bnd_BoundSortBox::Add),
             R"#(Adds the bounding box theBox at position boxIndex in the array of boxes to be sorted by this comparison algorithm. This function is used only in conjunction with the third syntax described in the synopsis of Initialize.)#"  , py::arg("theBox"),  py::arg("boxIndex"))
        .def("Compare",
             (const TColStd_ListOfInteger & (Bnd_BoundSortBox::*)( const Bnd_Box & ) ) static_cast<const TColStd_ListOfInteger & (Bnd_BoundSortBox::*)( const Bnd_Box & ) >(&Bnd_BoundSortBox::Compare),
             R"#(Compares the bounding box theBox, with the set of bounding boxes to be sorted by this comparison algorithm, and returns the list of intersecting bounding boxes as a list of indexes on the array of bounding boxes used by this algorithm.)#"  , py::arg("theBox"))
        .def("Compare",
             (const TColStd_ListOfInteger & (Bnd_BoundSortBox::*)( const gp_Pln & ) ) static_cast<const TColStd_ListOfInteger & (Bnd_BoundSortBox::*)( const gp_Pln & ) >(&Bnd_BoundSortBox::Compare),
             R"#(Compares the plane P with the set of bounding boxes to be sorted by this comparison algorithm, and returns the list of intersecting bounding boxes as a list of indexes on the array of bounding boxes used by this algorithm.)#"  , py::arg("P"))
        .def("Dump",
             (void (Bnd_BoundSortBox::*)() const) static_cast<void (Bnd_BoundSortBox::*)() const>(&Bnd_BoundSortBox::Dump),
             R"#(None)#" )
        .def("Destroy",
             (void (Bnd_BoundSortBox::*)() ) static_cast<void (Bnd_BoundSortBox::*)() >(&Bnd_BoundSortBox::Destroy),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bnd_BoundSortBox2d , shared_ptr<Bnd_BoundSortBox2d> >>(m.attr("Bnd_BoundSortBox2d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Bnd_BoundSortBox2d::*)( const Bnd_Box2d & , const opencascade::handle<Bnd_HArray1OfBox2d> & ) ) static_cast<void (Bnd_BoundSortBox2d::*)( const Bnd_Box2d & , const opencascade::handle<Bnd_HArray1OfBox2d> & ) >(&Bnd_BoundSortBox2d::Initialize),
             R"#(Initializes this comparison algorithm with - the set of 2D bounding boxes SetOfBox)#"  , py::arg("CompleteBox"),  py::arg("SetOfBox"))
        .def("Initialize",
             (void (Bnd_BoundSortBox2d::*)( const opencascade::handle<Bnd_HArray1OfBox2d> & ) ) static_cast<void (Bnd_BoundSortBox2d::*)( const opencascade::handle<Bnd_HArray1OfBox2d> & ) >(&Bnd_BoundSortBox2d::Initialize),
             R"#(Initializes this comparison algorithm with - the set of 2D bounding boxes SetOfBox, where CompleteBox is given as the global bounding box of SetOfBox.)#"  , py::arg("SetOfBox"))
        .def("Initialize",
             (void (Bnd_BoundSortBox2d::*)( const Bnd_Box2d & , const Standard_Integer ) ) static_cast<void (Bnd_BoundSortBox2d::*)( const Bnd_Box2d & , const Standard_Integer ) >(&Bnd_BoundSortBox2d::Initialize),
             R"#(Initializes this comparison algorithm, giving it only - the maximum number nbComponents, and - the global bounding box CompleteBox, of the 2D bounding boxes to be managed. Use the Add function to define the array of bounding boxes to be sorted by this algorithm.)#"  , py::arg("CompleteBox"),  py::arg("nbComponents"))
        .def("Add",
             (void (Bnd_BoundSortBox2d::*)( const Bnd_Box2d & , const Standard_Integer ) ) static_cast<void (Bnd_BoundSortBox2d::*)( const Bnd_Box2d & , const Standard_Integer ) >(&Bnd_BoundSortBox2d::Add),
             R"#(Adds the 2D bounding box theBox at position boxIndex in the array of boxes to be sorted by this comparison algorithm. This function is used only in conjunction with the third syntax described in the synopsis of Initialize. Exceptions - Standard_OutOfRange if boxIndex is not in the range [ 1,nbComponents ] where nbComponents is the maximum number of bounding boxes declared for this comparison algorithm at initialization. - Standard_MultiplyDefined if a box still exists at position boxIndex in the array of boxes to be sorted by this comparison algorithm.)#"  , py::arg("theBox"),  py::arg("boxIndex"))
        .def("Compare",
             (const TColStd_ListOfInteger & (Bnd_BoundSortBox2d::*)( const Bnd_Box2d & ) ) static_cast<const TColStd_ListOfInteger & (Bnd_BoundSortBox2d::*)( const Bnd_Box2d & ) >(&Bnd_BoundSortBox2d::Compare),
             R"#(Compares the 2D bounding box theBox with the set of bounding boxes to be sorted by this comparison algorithm, and returns the list of intersecting bounding boxes as a list of indexes on the array of bounding boxes used by this algorithm.)#"  , py::arg("theBox"))
        .def("Dump",
             (void (Bnd_BoundSortBox2d::*)() const) static_cast<void (Bnd_BoundSortBox2d::*)() const>(&Bnd_BoundSortBox2d::Dump),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bnd_Box , shared_ptr<Bnd_Box> >>(m.attr("Bnd_Box"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt,const gp_Pnt >()  , py::arg("theMin"),  py::arg("theMax") )
    // custom constructors
    // methods
        .def("SetWhole",
             (void (Bnd_Box::*)() ) static_cast<void (Bnd_Box::*)() >(&Bnd_Box::SetWhole),
             R"#(Sets this bounding box so that it covers the whole of 3D space. It is infinitely long in all directions.)#" )
        .def("SetVoid",
             (void (Bnd_Box::*)() ) static_cast<void (Bnd_Box::*)() >(&Bnd_Box::SetVoid),
             R"#(Sets this bounding box so that it is empty. All points are outside a void box.)#" )
        .def("Set",
             (void (Bnd_Box::*)( const gp_Pnt & ) ) static_cast<void (Bnd_Box::*)( const gp_Pnt & ) >(&Bnd_Box::Set),
             R"#(Sets this bounding box so that it bounds - the point P. This involves first setting this bounding box to be void and then adding the point P.)#"  , py::arg("P"))
        .def("Set",
             (void (Bnd_Box::*)( const gp_Pnt & , const gp_Dir & ) ) static_cast<void (Bnd_Box::*)( const gp_Pnt & , const gp_Dir & ) >(&Bnd_Box::Set),
             R"#(Sets this bounding box so that it bounds the half-line defined by point P and direction D, i.e. all points M defined by M=P+u*D, where u is greater than or equal to 0, are inside the bounding volume. This involves first setting this box to be void and then adding the half-line.)#"  , py::arg("P"),  py::arg("D"))
        .def("Update",
             (void (Bnd_Box::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (Bnd_Box::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&Bnd_Box::Update),
             R"#(Enlarges this bounding box, if required, so that it contains at least: - interval [ aXmin,aXmax ] in the "X Direction", - interval [ aYmin,aYmax ] in the "Y Direction", - interval [ aZmin,aZmax ] in the "Z Direction";)#"  , py::arg("aXmin"),  py::arg("aYmin"),  py::arg("aZmin"),  py::arg("aXmax"),  py::arg("aYmax"),  py::arg("aZmax"))
        .def("Update",
             (void (Bnd_Box::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (Bnd_Box::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&Bnd_Box::Update),
             R"#(Adds a point of coordinates (X,Y,Z) to this bounding box.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"))
        .def("GetGap",
             (Standard_Real (Bnd_Box::*)() const) static_cast<Standard_Real (Bnd_Box::*)() const>(&Bnd_Box::GetGap),
             R"#(Returns the gap of this bounding box.)#" )
        .def("SetGap",
             (void (Bnd_Box::*)( const Standard_Real ) ) static_cast<void (Bnd_Box::*)( const Standard_Real ) >(&Bnd_Box::SetGap),
             R"#(Set the gap of this bounding box to abs(Tol).)#"  , py::arg("Tol"))
        .def("Enlarge",
             (void (Bnd_Box::*)( const Standard_Real ) ) static_cast<void (Bnd_Box::*)( const Standard_Real ) >(&Bnd_Box::Enlarge),
             R"#(Enlarges the box with a tolerance value. (minvalues-Abs(<tol>) and maxvalues+Abs(<tol>)) This means that the minimum values of its X, Y and Z intervals of definition, when they are finite, are reduced by the absolute value of Tol, while the maximum values are increased by the same amount.)#"  , py::arg("Tol"))
        .def("CornerMin",
             (gp_Pnt (Bnd_Box::*)() const) static_cast<gp_Pnt (Bnd_Box::*)() const>(&Bnd_Box::CornerMin),
             R"#(Returns the lower corner of this bounding box. The gap is included. If this bounding box is infinite (i.e. "open"), returned values may be equal to +/- Precision::Infinite(). Standard_ConstructionError exception will be thrown if the box is void. if IsVoid())#" )
        .def("CornerMax",
             (gp_Pnt (Bnd_Box::*)() const) static_cast<gp_Pnt (Bnd_Box::*)() const>(&Bnd_Box::CornerMax),
             R"#(Returns the upper corner of this bounding box. The gap is included. If this bounding box is infinite (i.e. "open"), returned values may be equal to +/- Precision::Infinite(). Standard_ConstructionError exception will be thrown if the box is void. if IsVoid())#" )
        .def("OpenXmin",
             (void (Bnd_Box::*)() ) static_cast<void (Bnd_Box::*)() >(&Bnd_Box::OpenXmin),
             R"#(The Box will be infinitely long in the Xmin direction.)#" )
        .def("OpenXmax",
             (void (Bnd_Box::*)() ) static_cast<void (Bnd_Box::*)() >(&Bnd_Box::OpenXmax),
             R"#(The Box will be infinitely long in the Xmax direction.)#" )
        .def("OpenYmin",
             (void (Bnd_Box::*)() ) static_cast<void (Bnd_Box::*)() >(&Bnd_Box::OpenYmin),
             R"#(The Box will be infinitely long in the Ymin direction.)#" )
        .def("OpenYmax",
             (void (Bnd_Box::*)() ) static_cast<void (Bnd_Box::*)() >(&Bnd_Box::OpenYmax),
             R"#(The Box will be infinitely long in the Ymax direction.)#" )
        .def("OpenZmin",
             (void (Bnd_Box::*)() ) static_cast<void (Bnd_Box::*)() >(&Bnd_Box::OpenZmin),
             R"#(The Box will be infinitely long in the Zmin direction.)#" )
        .def("OpenZmax",
             (void (Bnd_Box::*)() ) static_cast<void (Bnd_Box::*)() >(&Bnd_Box::OpenZmax),
             R"#(The Box will be infinitely long in the Zmax direction.)#" )
        .def("IsOpen",
             (Standard_Boolean (Bnd_Box::*)() const) static_cast<Standard_Boolean (Bnd_Box::*)() const>(&Bnd_Box::IsOpen),
             R"#(Returns true if this bounding box has at least one open direction.)#" )
        .def("IsOpenXmin",
             (Standard_Boolean (Bnd_Box::*)() const) static_cast<Standard_Boolean (Bnd_Box::*)() const>(&Bnd_Box::IsOpenXmin),
             R"#(Returns true if this bounding box is open in the Xmin direction.)#" )
        .def("IsOpenXmax",
             (Standard_Boolean (Bnd_Box::*)() const) static_cast<Standard_Boolean (Bnd_Box::*)() const>(&Bnd_Box::IsOpenXmax),
             R"#(Returns true if this bounding box is open in the Xmax direction.)#" )
        .def("IsOpenYmin",
             (Standard_Boolean (Bnd_Box::*)() const) static_cast<Standard_Boolean (Bnd_Box::*)() const>(&Bnd_Box::IsOpenYmin),
             R"#(Returns true if this bounding box is open in the Ymix direction.)#" )
        .def("IsOpenYmax",
             (Standard_Boolean (Bnd_Box::*)() const) static_cast<Standard_Boolean (Bnd_Box::*)() const>(&Bnd_Box::IsOpenYmax),
             R"#(Returns true if this bounding box is open in the Ymax direction.)#" )
        .def("IsOpenZmin",
             (Standard_Boolean (Bnd_Box::*)() const) static_cast<Standard_Boolean (Bnd_Box::*)() const>(&Bnd_Box::IsOpenZmin),
             R"#(Returns true if this bounding box is open in the Zmin direction.)#" )
        .def("IsOpenZmax",
             (Standard_Boolean (Bnd_Box::*)() const) static_cast<Standard_Boolean (Bnd_Box::*)() const>(&Bnd_Box::IsOpenZmax),
             R"#(Returns true if this bounding box is open in the Zmax direction.)#" )
        .def("IsWhole",
             (Standard_Boolean (Bnd_Box::*)() const) static_cast<Standard_Boolean (Bnd_Box::*)() const>(&Bnd_Box::IsWhole),
             R"#(Returns true if this bounding box is infinite in all 6 directions (WholeSpace flag).)#" )
        .def("IsVoid",
             (Standard_Boolean (Bnd_Box::*)() const) static_cast<Standard_Boolean (Bnd_Box::*)() const>(&Bnd_Box::IsVoid),
             R"#(Returns true if this bounding box is empty (Void flag).)#" )
        .def("IsXThin",
             (Standard_Boolean (Bnd_Box::*)( const Standard_Real ) const) static_cast<Standard_Boolean (Bnd_Box::*)( const Standard_Real ) const>(&Bnd_Box::IsXThin),
             R"#(true if xmax-xmin < tol.)#"  , py::arg("tol"))
        .def("IsYThin",
             (Standard_Boolean (Bnd_Box::*)( const Standard_Real ) const) static_cast<Standard_Boolean (Bnd_Box::*)( const Standard_Real ) const>(&Bnd_Box::IsYThin),
             R"#(true if ymax-ymin < tol.)#"  , py::arg("tol"))
        .def("IsZThin",
             (Standard_Boolean (Bnd_Box::*)( const Standard_Real ) const) static_cast<Standard_Boolean (Bnd_Box::*)( const Standard_Real ) const>(&Bnd_Box::IsZThin),
             R"#(true if zmax-zmin < tol.)#"  , py::arg("tol"))
        .def("IsThin",
             (Standard_Boolean (Bnd_Box::*)( const Standard_Real ) const) static_cast<Standard_Boolean (Bnd_Box::*)( const Standard_Real ) const>(&Bnd_Box::IsThin),
             R"#(Returns true if IsXThin, IsYThin and IsZThin are all true, i.e. if the box is thin in all three dimensions.)#"  , py::arg("tol"))
        .def("Transformed",
             (Bnd_Box (Bnd_Box::*)( const gp_Trsf & ) const) static_cast<Bnd_Box (Bnd_Box::*)( const gp_Trsf & ) const>(&Bnd_Box::Transformed),
             R"#(Returns a bounding box which is the result of applying the transformation T to this bounding box. Warning Applying a geometric transformation (for example, a rotation) to a bounding box generally increases its dimensions. This is not optimal for algorithms which use it.)#"  , py::arg("T"))
        .def("Add",
             (void (Bnd_Box::*)( const Bnd_Box & ) ) static_cast<void (Bnd_Box::*)( const Bnd_Box & ) >(&Bnd_Box::Add),
             R"#(Adds the box <Other> to <me>.)#"  , py::arg("Other"))
        .def("Add",
             (void (Bnd_Box::*)( const gp_Pnt & ) ) static_cast<void (Bnd_Box::*)( const gp_Pnt & ) >(&Bnd_Box::Add),
             R"#(Adds a Pnt to the box.)#"  , py::arg("P"))
        .def("Add",
             (void (Bnd_Box::*)( const gp_Pnt & , const gp_Dir & ) ) static_cast<void (Bnd_Box::*)( const gp_Pnt & , const gp_Dir & ) >(&Bnd_Box::Add),
             R"#(Extends <me> from the Pnt <P> in the direction <D>.)#"  , py::arg("P"),  py::arg("D"))
        .def("Add",
             (void (Bnd_Box::*)( const gp_Dir & ) ) static_cast<void (Bnd_Box::*)( const gp_Dir & ) >(&Bnd_Box::Add),
             R"#(Extends the Box in the given Direction, i.e. adds an half-line. The box may become infinite in 1,2 or 3 directions.)#"  , py::arg("D"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Box::*)( const gp_Pnt & ) const) static_cast<Standard_Boolean (Bnd_Box::*)( const gp_Pnt & ) const>(&Bnd_Box::IsOut),
             R"#(Returns True if the Pnt is out the box.)#"  , py::arg("P"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Box::*)( const gp_Lin & ) const) static_cast<Standard_Boolean (Bnd_Box::*)( const gp_Lin & ) const>(&Bnd_Box::IsOut),
             R"#(Returns False if the line intersects the box.)#"  , py::arg("L"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Box::*)( const gp_Pln & ) const) static_cast<Standard_Boolean (Bnd_Box::*)( const gp_Pln & ) const>(&Bnd_Box::IsOut),
             R"#(Returns False if the plane intersects the box.)#"  , py::arg("P"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Box::*)( const Bnd_Box & ) const) static_cast<Standard_Boolean (Bnd_Box::*)( const Bnd_Box & ) const>(&Bnd_Box::IsOut),
             R"#(Returns False if the <Box> intersects or is inside <me>.)#"  , py::arg("Other"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Box::*)( const Bnd_Box & , const gp_Trsf & ) const) static_cast<Standard_Boolean (Bnd_Box::*)( const Bnd_Box & , const gp_Trsf & ) const>(&Bnd_Box::IsOut),
             R"#(Returns False if the transformed <Box> intersects or is inside <me>.)#"  , py::arg("Other"),  py::arg("T"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Box::*)( const gp_Trsf & , const Bnd_Box & , const gp_Trsf & ) const) static_cast<Standard_Boolean (Bnd_Box::*)( const gp_Trsf & , const Bnd_Box & , const gp_Trsf & ) const>(&Bnd_Box::IsOut),
             R"#(Returns False if the transformed <Box> intersects or is inside the transformed box <me>.)#"  , py::arg("T1"),  py::arg("Other"),  py::arg("T2"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Box::*)( const gp_Pnt & , const gp_Pnt & , const gp_Dir & ) const) static_cast<Standard_Boolean (Bnd_Box::*)( const gp_Pnt & , const gp_Pnt & , const gp_Dir & ) const>(&Bnd_Box::IsOut),
             R"#(Returns False if the flat band lying between two parallel lines represented by their reference points <P1>, <P2> and direction <D> intersects the box.)#"  , py::arg("P1"),  py::arg("P2"),  py::arg("D"))
        .def("Distance",
             (Standard_Real (Bnd_Box::*)( const Bnd_Box & ) const) static_cast<Standard_Real (Bnd_Box::*)( const Bnd_Box & ) const>(&Bnd_Box::Distance),
             R"#(Computes the minimum distance between two boxes.)#"  , py::arg("Other"))
        .def("Dump",
             (void (Bnd_Box::*)() const) static_cast<void (Bnd_Box::*)() const>(&Bnd_Box::Dump),
             R"#(None)#" )
        .def("SquareExtent",
             (Standard_Real (Bnd_Box::*)() const) static_cast<Standard_Real (Bnd_Box::*)() const>(&Bnd_Box::SquareExtent),
             R"#(Computes the squared diagonal of me.)#" )
        .def("FinitePart",
             (Bnd_Box (Bnd_Box::*)() const) static_cast<Bnd_Box (Bnd_Box::*)() const>(&Bnd_Box::FinitePart),
             R"#(Returns a finite part of an infinite bounding box (returns self if this is already finite box). This can be a Void box in case if its sides has been defined as infinite (Open) without adding any finite points. WARNING! This method relies on Open flags, the infinite points added using Add() method will be returned as is.)#" )
        .def("HasFinitePart",
             (Standard_Boolean (Bnd_Box::*)() const) static_cast<Standard_Boolean (Bnd_Box::*)() const>(&Bnd_Box::HasFinitePart),
             R"#(Returns TRUE if this box has finite part.)#" )
        .def("DumpJson",
             (void (Bnd_Box::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Bnd_Box::*)( std::ostream & , const Standard_Integer ) const>(&Bnd_Box::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
        .def("Get",
             []( Bnd_Box &self   ){ Standard_Real  theXmin; Standard_Real  theYmin; Standard_Real  theZmin; Standard_Real  theXmax; Standard_Real  theYmax; Standard_Real  theZmax; self.Get(theXmin,theYmin,theZmin,theXmax,theYmax,theZmax); return std::make_tuple(theXmin,theYmin,theZmin,theXmax,theYmax,theZmax); },
             R"#(Returns the bounds of this bounding box. The gap is included. If this bounding box is infinite (i.e. "open"), returned values may be equal to +/- Precision::Infinite(). Standard_ConstructionError exception will be thrown if the box is void. if IsVoid())#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bnd_Box2d , shared_ptr<Bnd_Box2d> >>(m.attr("Bnd_Box2d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetWhole",
             (void (Bnd_Box2d::*)() ) static_cast<void (Bnd_Box2d::*)() >(&Bnd_Box2d::SetWhole),
             R"#(Sets this bounding box so that it covers the whole 2D space, i.e. it is infinite in all directions.)#" )
        .def("SetVoid",
             (void (Bnd_Box2d::*)() ) static_cast<void (Bnd_Box2d::*)() >(&Bnd_Box2d::SetVoid),
             R"#(Sets this 2D bounding box so that it is empty. All points are outside a void box.)#" )
        .def("Set",
             (void (Bnd_Box2d::*)( const gp_Pnt2d & ) ) static_cast<void (Bnd_Box2d::*)( const gp_Pnt2d & ) >(&Bnd_Box2d::Set),
             R"#(Sets this 2D bounding box so that it bounds the point P. This involves first setting this bounding box to be void and then adding the point PThe rectangle bounds the point <P>.)#"  , py::arg("thePnt"))
        .def("Set",
             (void (Bnd_Box2d::*)( const gp_Pnt2d & , const gp_Dir2d & ) ) static_cast<void (Bnd_Box2d::*)( const gp_Pnt2d & , const gp_Dir2d & ) >(&Bnd_Box2d::Set),
             R"#(Sets this 2D bounding box so that it bounds the half-line defined by point P and direction D, i.e. all points M defined by M=P+u*D, where u is greater than or equal to 0, are inside the bounding area. This involves first setting this 2D box to be void and then adding the half-line.)#"  , py::arg("thePnt"),  py::arg("theDir"))
        .def("Update",
             (void (Bnd_Box2d::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (Bnd_Box2d::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&Bnd_Box2d::Update),
             R"#(Enlarges this 2D bounding box, if required, so that it contains at least: - interval [ aXmin,aXmax ] in the "X Direction", - interval [ aYmin,aYmax ] in the "Y Direction")#"  , py::arg("aXmin"),  py::arg("aYmin"),  py::arg("aXmax"),  py::arg("aYmax"))
        .def("Update",
             (void (Bnd_Box2d::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Bnd_Box2d::*)( const Standard_Real , const Standard_Real ) >(&Bnd_Box2d::Update),
             R"#(Adds a point of coordinates (X,Y) to this bounding box.)#"  , py::arg("X"),  py::arg("Y"))
        .def("GetGap",
             (Standard_Real (Bnd_Box2d::*)() const) static_cast<Standard_Real (Bnd_Box2d::*)() const>(&Bnd_Box2d::GetGap),
             R"#(Returns the gap of this 2D bounding box.)#" )
        .def("SetGap",
             (void (Bnd_Box2d::*)( const Standard_Real ) ) static_cast<void (Bnd_Box2d::*)( const Standard_Real ) >(&Bnd_Box2d::SetGap),
             R"#(Set the gap of this 2D bounding box to abs(Tol).)#"  , py::arg("Tol"))
        .def("Enlarge",
             (void (Bnd_Box2d::*)( const Standard_Real ) ) static_cast<void (Bnd_Box2d::*)( const Standard_Real ) >(&Bnd_Box2d::Enlarge),
             R"#(Enlarges the box with a tolerance value. This means that the minimum values of its X and Y intervals of definition, when they are finite, are reduced by the absolute value of Tol, while the maximum values are increased by the same amount.)#"  , py::arg("theTol"))
        .def("OpenXmin",
             (void (Bnd_Box2d::*)() ) static_cast<void (Bnd_Box2d::*)() >(&Bnd_Box2d::OpenXmin),
             R"#(The Box will be infinitely long in the Xmin direction.)#" )
        .def("OpenXmax",
             (void (Bnd_Box2d::*)() ) static_cast<void (Bnd_Box2d::*)() >(&Bnd_Box2d::OpenXmax),
             R"#(The Box will be infinitely long in the Xmax direction.)#" )
        .def("OpenYmin",
             (void (Bnd_Box2d::*)() ) static_cast<void (Bnd_Box2d::*)() >(&Bnd_Box2d::OpenYmin),
             R"#(The Box will be infinitely long in the Ymin direction.)#" )
        .def("OpenYmax",
             (void (Bnd_Box2d::*)() ) static_cast<void (Bnd_Box2d::*)() >(&Bnd_Box2d::OpenYmax),
             R"#(The Box will be infinitely long in the Ymax direction.)#" )
        .def("IsOpenXmin",
             (Standard_Boolean (Bnd_Box2d::*)() const) static_cast<Standard_Boolean (Bnd_Box2d::*)() const>(&Bnd_Box2d::IsOpenXmin),
             R"#(Returns true if this bounding box is open in the Xmin direction.)#" )
        .def("IsOpenXmax",
             (Standard_Boolean (Bnd_Box2d::*)() const) static_cast<Standard_Boolean (Bnd_Box2d::*)() const>(&Bnd_Box2d::IsOpenXmax),
             R"#(Returns true if this bounding box is open in the Xmax direction.)#" )
        .def("IsOpenYmin",
             (Standard_Boolean (Bnd_Box2d::*)() const) static_cast<Standard_Boolean (Bnd_Box2d::*)() const>(&Bnd_Box2d::IsOpenYmin),
             R"#(Returns true if this bounding box is open in the Ymin direction.)#" )
        .def("IsOpenYmax",
             (Standard_Boolean (Bnd_Box2d::*)() const) static_cast<Standard_Boolean (Bnd_Box2d::*)() const>(&Bnd_Box2d::IsOpenYmax),
             R"#(Returns true if this bounding box is open in the Ymax direction.)#" )
        .def("IsWhole",
             (Standard_Boolean (Bnd_Box2d::*)() const) static_cast<Standard_Boolean (Bnd_Box2d::*)() const>(&Bnd_Box2d::IsWhole),
             R"#(Returns true if this bounding box is infinite in all 4 directions (Whole Space flag).)#" )
        .def("IsVoid",
             (Standard_Boolean (Bnd_Box2d::*)() const) static_cast<Standard_Boolean (Bnd_Box2d::*)() const>(&Bnd_Box2d::IsVoid),
             R"#(Returns true if this 2D bounding box is empty (Void flag).)#" )
        .def("Transformed",
             (Bnd_Box2d (Bnd_Box2d::*)( const gp_Trsf2d & ) const) static_cast<Bnd_Box2d (Bnd_Box2d::*)( const gp_Trsf2d & ) const>(&Bnd_Box2d::Transformed),
             R"#(Returns a bounding box which is the result of applying the transformation T to this bounding box. Warning Applying a geometric transformation (for example, a rotation) to a bounding box generally increases its dimensions. This is not optimal for algorithms which use it.)#"  , py::arg("T"))
        .def("Add",
             (void (Bnd_Box2d::*)( const Bnd_Box2d & ) ) static_cast<void (Bnd_Box2d::*)( const Bnd_Box2d & ) >(&Bnd_Box2d::Add),
             R"#(Adds the 2d box <Other> to <me>.)#"  , py::arg("Other"))
        .def("Add",
             (void (Bnd_Box2d::*)( const gp_Pnt2d & ) ) static_cast<void (Bnd_Box2d::*)( const gp_Pnt2d & ) >(&Bnd_Box2d::Add),
             R"#(Adds the 2d point.)#"  , py::arg("thePnt"))
        .def("Add",
             (void (Bnd_Box2d::*)( const gp_Pnt2d & , const gp_Dir2d & ) ) static_cast<void (Bnd_Box2d::*)( const gp_Pnt2d & , const gp_Dir2d & ) >(&Bnd_Box2d::Add),
             R"#(Extends bounding box from thePnt in the direction theDir.)#"  , py::arg("thePnt"),  py::arg("theDir"))
        .def("Add",
             (void (Bnd_Box2d::*)( const gp_Dir2d & ) ) static_cast<void (Bnd_Box2d::*)( const gp_Dir2d & ) >(&Bnd_Box2d::Add),
             R"#(Extends the Box in the given Direction, i.e. adds a half-line. The box may become infinite in 1 or 2 directions.)#"  , py::arg("D"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Box2d::*)( const gp_Pnt2d & ) const) static_cast<Standard_Boolean (Bnd_Box2d::*)( const gp_Pnt2d & ) const>(&Bnd_Box2d::IsOut),
             R"#(Returns True if the 2d pnt <P> is out <me>.)#"  , py::arg("P"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Box2d::*)( const Bnd_Box2d & ) const) static_cast<Standard_Boolean (Bnd_Box2d::*)( const Bnd_Box2d & ) const>(&Bnd_Box2d::IsOut),
             R"#(Returns True if <Box2d> is out <me>.)#"  , py::arg("Other"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Box2d::*)( const Bnd_Box2d & , const gp_Trsf2d & ) const) static_cast<Standard_Boolean (Bnd_Box2d::*)( const Bnd_Box2d & , const gp_Trsf2d & ) const>(&Bnd_Box2d::IsOut),
             R"#(Returns True if transformed <Box2d> is out <me>.)#"  , py::arg("theOther"),  py::arg("theTrsf"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Box2d::*)( const gp_Trsf2d & , const Bnd_Box2d & , const gp_Trsf2d & ) const) static_cast<Standard_Boolean (Bnd_Box2d::*)( const gp_Trsf2d & , const Bnd_Box2d & , const gp_Trsf2d & ) const>(&Bnd_Box2d::IsOut),
             R"#(Compares a transformed bounding with a transformed bounding. The default implementation is to make a copy of <me> and <Other>, to transform them and to test.)#"  , py::arg("T1"),  py::arg("Other"),  py::arg("T2"))
        .def("Dump",
             (void (Bnd_Box2d::*)() const) static_cast<void (Bnd_Box2d::*)() const>(&Bnd_Box2d::Dump),
             R"#(None)#" )
        .def("SquareExtent",
             (Standard_Real (Bnd_Box2d::*)() const) static_cast<Standard_Real (Bnd_Box2d::*)() const>(&Bnd_Box2d::SquareExtent),
             R"#(Computes the squared diagonal of me.)#" )
    // methods using call by reference i.s.o. return
        .def("Get",
             []( Bnd_Box2d &self   ){ Standard_Real  aXmin; Standard_Real  aYmin; Standard_Real  aXmax; Standard_Real  aYmax; self.Get(aXmin,aYmin,aXmax,aYmax); return std::make_tuple(aXmin,aYmin,aXmax,aYmax); },
             R"#(Returns the bounds of this 2D bounding box. The gap is included. If this bounding box is infinite (i.e. "open"), returned values may be equal to +/- Precision::Infinite(). if IsVoid())#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bnd_HArray1OfBox ,opencascade::handle<Bnd_HArray1OfBox> , Bnd_Array1OfBox, Standard_Transient>>(m.attr("Bnd_HArray1OfBox"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const Bnd_Box & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Bnd_Box> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Bnd_Array1OfBox & (Bnd_HArray1OfBox::*)() const) static_cast<const Bnd_Array1OfBox & (Bnd_HArray1OfBox::*)() const>(&Bnd_HArray1OfBox::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Bnd_Array1OfBox & (Bnd_HArray1OfBox::*)() ) static_cast<Bnd_Array1OfBox & (Bnd_HArray1OfBox::*)() >(&Bnd_HArray1OfBox::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Bnd_HArray1OfBox::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Bnd_HArray1OfBox::*)() const>(&Bnd_HArray1OfBox::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Bnd_HArray1OfBox::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Bnd_HArray1OfBox::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bnd_HArray1OfBox2d ,opencascade::handle<Bnd_HArray1OfBox2d> , Bnd_Array1OfBox2d, Standard_Transient>>(m.attr("Bnd_HArray1OfBox2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const Bnd_Box2d & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Bnd_Box2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Bnd_Array1OfBox2d & (Bnd_HArray1OfBox2d::*)() const) static_cast<const Bnd_Array1OfBox2d & (Bnd_HArray1OfBox2d::*)() const>(&Bnd_HArray1OfBox2d::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Bnd_Array1OfBox2d & (Bnd_HArray1OfBox2d::*)() ) static_cast<Bnd_Array1OfBox2d & (Bnd_HArray1OfBox2d::*)() >(&Bnd_HArray1OfBox2d::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Bnd_HArray1OfBox2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Bnd_HArray1OfBox2d::*)() const>(&Bnd_HArray1OfBox2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Bnd_HArray1OfBox2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Bnd_HArray1OfBox2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bnd_HArray1OfSphere ,opencascade::handle<Bnd_HArray1OfSphere> , Bnd_Array1OfSphere, Standard_Transient>>(m.attr("Bnd_HArray1OfSphere"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const Bnd_Sphere & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Bnd_Sphere> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Bnd_Array1OfSphere & (Bnd_HArray1OfSphere::*)() const) static_cast<const Bnd_Array1OfSphere & (Bnd_HArray1OfSphere::*)() const>(&Bnd_HArray1OfSphere::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Bnd_Array1OfSphere & (Bnd_HArray1OfSphere::*)() ) static_cast<Bnd_Array1OfSphere & (Bnd_HArray1OfSphere::*)() >(&Bnd_HArray1OfSphere::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Bnd_HArray1OfSphere::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Bnd_HArray1OfSphere::*)() const>(&Bnd_HArray1OfSphere::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Bnd_HArray1OfSphere::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Bnd_HArray1OfSphere::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bnd_OBB , shared_ptr<Bnd_OBB> >>(m.attr("Bnd_OBB"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const gp_Dir &,const gp_Dir &,const gp_Dir &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("theCenter"),  py::arg("theXDirection"),  py::arg("theYDirection"),  py::arg("theZDirection"),  py::arg("theHXSize"),  py::arg("theHYSize"),  py::arg("theHZSize") )
        .def(py::init< const Bnd_Box & >()  , py::arg("theBox") )
    // custom constructors
    // methods
        .def("ReBuild",
             (void (Bnd_OBB::*)(  const NCollection_Array1<gp_Pnt> & ,  const NCollection_Array1<Standard_Real> * , const Standard_Boolean ) ) static_cast<void (Bnd_OBB::*)(  const NCollection_Array1<gp_Pnt> & ,  const NCollection_Array1<Standard_Real> * , const Standard_Boolean ) >(&Bnd_OBB::ReBuild),
             R"#(Creates new OBB covering every point in theListOfPoints. Tolerance of every such point is set by *theListOfTolerances array. If this array is not void (not null-pointer) then the resulted Bnd_OBB will be enlarged using tolerances of points lying on the box surface. <theIsOptimal> flag defines the mode in which the OBB will be built. Constructing Optimal box takes more time, but the resulting box is usually more tight. In case of construction of Optimal OBB more possible axes are checked.)#"  , py::arg("theListOfPoints"),  py::arg("theListOfTolerances")=static_cast< const NCollection_Array1<Standard_Real> *>(0),  py::arg("theIsOptimal")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetCenter",
             (void (Bnd_OBB::*)( const gp_Pnt & ) ) static_cast<void (Bnd_OBB::*)( const gp_Pnt & ) >(&Bnd_OBB::SetCenter),
             R"#(Sets the center of OBB)#"  , py::arg("theCenter"))
        .def("SetXComponent",
             (void (Bnd_OBB::*)( const gp_Dir & , const Standard_Real ) ) static_cast<void (Bnd_OBB::*)( const gp_Dir & , const Standard_Real ) >(&Bnd_OBB::SetXComponent),
             R"#(Sets the X component of OBB - direction and size)#"  , py::arg("theXDirection"),  py::arg("theHXSize"))
        .def("SetYComponent",
             (void (Bnd_OBB::*)( const gp_Dir & , const Standard_Real ) ) static_cast<void (Bnd_OBB::*)( const gp_Dir & , const Standard_Real ) >(&Bnd_OBB::SetYComponent),
             R"#(Sets the Y component of OBB - direction and size)#"  , py::arg("theYDirection"),  py::arg("theHYSize"))
        .def("SetZComponent",
             (void (Bnd_OBB::*)( const gp_Dir & , const Standard_Real ) ) static_cast<void (Bnd_OBB::*)( const gp_Dir & , const Standard_Real ) >(&Bnd_OBB::SetZComponent),
             R"#(Sets the Z component of OBB - direction and size)#"  , py::arg("theZDirection"),  py::arg("theHZSize"))
        .def("Position",
             (gp_Ax3 (Bnd_OBB::*)() const) static_cast<gp_Ax3 (Bnd_OBB::*)() const>(&Bnd_OBB::Position),
             R"#(Returns the local coordinates system of this oriented box. So that applying it to axis-aligned box ((-XHSize, -YHSize, -ZHSize), (XHSize, YHSize, ZHSize)) will produce this oriented box.)#" )
        .def("Center",
             (const gp_XYZ & (Bnd_OBB::*)() const) static_cast<const gp_XYZ & (Bnd_OBB::*)() const>(&Bnd_OBB::Center),
             R"#(Returns the center of OBB)#" )
        .def("XDirection",
             (const gp_XYZ & (Bnd_OBB::*)() const) static_cast<const gp_XYZ & (Bnd_OBB::*)() const>(&Bnd_OBB::XDirection),
             R"#(Returns the X Direction of OBB)#" )
        .def("YDirection",
             (const gp_XYZ & (Bnd_OBB::*)() const) static_cast<const gp_XYZ & (Bnd_OBB::*)() const>(&Bnd_OBB::YDirection),
             R"#(Returns the Y Direction of OBB)#" )
        .def("ZDirection",
             (const gp_XYZ & (Bnd_OBB::*)() const) static_cast<const gp_XYZ & (Bnd_OBB::*)() const>(&Bnd_OBB::ZDirection),
             R"#(Returns the Z Direction of OBB)#" )
        .def("XHSize",
             (Standard_Real (Bnd_OBB::*)() const) static_cast<Standard_Real (Bnd_OBB::*)() const>(&Bnd_OBB::XHSize),
             R"#(Returns the X Dimension of OBB)#" )
        .def("YHSize",
             (Standard_Real (Bnd_OBB::*)() const) static_cast<Standard_Real (Bnd_OBB::*)() const>(&Bnd_OBB::YHSize),
             R"#(Returns the Y Dimension of OBB)#" )
        .def("ZHSize",
             (Standard_Real (Bnd_OBB::*)() const) static_cast<Standard_Real (Bnd_OBB::*)() const>(&Bnd_OBB::ZHSize),
             R"#(Returns the Z Dimension of OBB)#" )
        .def("IsVoid",
             (Standard_Boolean (Bnd_OBB::*)() const) static_cast<Standard_Boolean (Bnd_OBB::*)() const>(&Bnd_OBB::IsVoid),
             R"#(Checks if the box is empty.)#" )
        .def("SetVoid",
             (void (Bnd_OBB::*)() ) static_cast<void (Bnd_OBB::*)() >(&Bnd_OBB::SetVoid),
             R"#(Clears this box)#" )
        .def("SetAABox",
             (void (Bnd_OBB::*)( const Standard_Boolean & ) ) static_cast<void (Bnd_OBB::*)( const Standard_Boolean & ) >(&Bnd_OBB::SetAABox),
             R"#(Sets the flag for axes aligned box)#"  , py::arg("theFlag"))
        .def("IsAABox",
             (Standard_Boolean (Bnd_OBB::*)() const) static_cast<Standard_Boolean (Bnd_OBB::*)() const>(&Bnd_OBB::IsAABox),
             R"#(Returns TRUE if the box is axes aligned)#" )
        .def("Enlarge",
             (void (Bnd_OBB::*)( const Standard_Real ) ) static_cast<void (Bnd_OBB::*)( const Standard_Real ) >(&Bnd_OBB::Enlarge),
             R"#(Enlarges the box with the given value)#"  , py::arg("theGapAdd"))
        .def("GetVertex",
             (Standard_Boolean (Bnd_OBB::*)( gp_Pnt [8] ) const) static_cast<Standard_Boolean (Bnd_OBB::*)( gp_Pnt [8] ) const>(&Bnd_OBB::GetVertex),
             R"#(Returns the array of vertices in <this>. The local coordinate of the vertex depending on the index of the array are follow: Index == 0: (-XHSize(), -YHSize(), -ZHSize()) Index == 1: ( XHSize(), -YHSize(), -ZHSize()) Index == 2: (-XHSize(), YHSize(), -ZHSize()) Index == 3: ( XHSize(), YHSize(), -ZHSize()) Index == 4: (-XHSize(), -YHSize(), ZHSize()) Index == 5: ( XHSize(), -YHSize(), ZHSize()) Index == 6: (-XHSize(), YHSize(), ZHSize()) Index == 7: ( XHSize(), YHSize(), ZHSize()).)#"  , py::arg("theP"))
        .def("SquareExtent",
             (Standard_Real (Bnd_OBB::*)() const) static_cast<Standard_Real (Bnd_OBB::*)() const>(&Bnd_OBB::SquareExtent),
             R"#(Returns square diagonal of this box)#" )
        .def("IsOut",
             (Standard_Boolean (Bnd_OBB::*)( const Bnd_OBB & ) const) static_cast<Standard_Boolean (Bnd_OBB::*)( const Bnd_OBB & ) const>(&Bnd_OBB::IsOut),
             R"#(Check if the box do not interfere the other box.)#"  , py::arg("theOther"))
        .def("IsOut",
             (Standard_Boolean (Bnd_OBB::*)( const gp_Pnt & ) const) static_cast<Standard_Boolean (Bnd_OBB::*)( const gp_Pnt & ) const>(&Bnd_OBB::IsOut),
             R"#(Check if the point is inside of <this>.)#"  , py::arg("theP"))
        .def("IsCompletelyInside",
             (Standard_Boolean (Bnd_OBB::*)( const Bnd_OBB & ) const) static_cast<Standard_Boolean (Bnd_OBB::*)( const Bnd_OBB & ) const>(&Bnd_OBB::IsCompletelyInside),
             R"#(Check if the theOther is completely inside *this.)#"  , py::arg("theOther"))
        .def("Add",
             (void (Bnd_OBB::*)( const Bnd_OBB & ) ) static_cast<void (Bnd_OBB::*)( const Bnd_OBB & ) >(&Bnd_OBB::Add),
             R"#(Rebuilds this in order to include all previous objects (which it was created from) and theOther.)#"  , py::arg("theOther"))
        .def("Add",
             (void (Bnd_OBB::*)( const gp_Pnt & ) ) static_cast<void (Bnd_OBB::*)( const gp_Pnt & ) >(&Bnd_OBB::Add),
             R"#(Rebuilds this in order to include all previous objects (which it was created from) and theP.)#"  , py::arg("theP"))
        .def("DumpJson",
             (void (Bnd_OBB::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Bnd_OBB::*)( std::ostream & , const Standard_Integer ) const>(&Bnd_OBB::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bnd_Range , shared_ptr<Bnd_Range> >>(m.attr("Bnd_Range"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("theMin"),  py::arg("theMax") )
    // custom constructors
    // methods
        .def("Common",
             (void (Bnd_Range::*)( const Bnd_Range & ) ) static_cast<void (Bnd_Range::*)( const Bnd_Range & ) >(&Bnd_Range::Common),
             R"#(Replaces <this> with common-part of <this> and theOther)#"  , py::arg("theOther"))
        .def("Union",
             (Standard_Boolean (Bnd_Range::*)( const Bnd_Range & ) ) static_cast<Standard_Boolean (Bnd_Range::*)( const Bnd_Range & ) >(&Bnd_Range::Union),
             R"#(Joins *this and theOther to one interval. Replaces *this to the result. Returns false if the operation cannot be done (e.g. input arguments are empty or separated).)#"  , py::arg("theOther"))
        .def("Split",
             (void (Bnd_Range::*)( const Standard_Real , NCollection_List<Bnd_Range> & , const Standard_Real ) const) static_cast<void (Bnd_Range::*)( const Standard_Real , NCollection_List<Bnd_Range> & , const Standard_Real ) const>(&Bnd_Range::Split),
             R"#(Splits <this> to several sub-ranges by theVal value (e.g. range [3, 15] will be split by theVal==5 to the two ranges: [3, 5] and [5, 15]). New ranges will be pushed to theList (theList must be initialized correctly before calling this method). If thePeriod != 0.0 then at least one boundary of new ranges (if <*this> intersects theVal+k*thePeriod) will be equal to theVal+thePeriod*k, where k is an integer number (k = 0, +/-1, +/-2, ...). (let thePeriod in above example be 4 ==> we will obtain four ranges: [3, 5], [5, 9], [9, 13] and [13, 15].)#"  , py::arg("theVal"),  py::arg("theList"),  py::arg("thePeriod")=static_cast<const Standard_Real>(0.0))
        .def("IsIntersected",
             (Standard_Integer (Bnd_Range::*)( const Standard_Real , const Standard_Real ) const) static_cast<Standard_Integer (Bnd_Range::*)( const Standard_Real , const Standard_Real ) const>(&Bnd_Range::IsIntersected),
             R"#(Checks if <this> intersects values like theVal+k*thePeriod, where k is an integer number (k = 0, +/-1, +/-2, ...). Returns: 0 - if <this> does not intersect the theVal+k*thePeriod. 1 - if <this> intersects theVal+k*thePeriod. 2 - if myFirst or/and myLast are equal to theVal+k*thePeriod.)#"  , py::arg("theVal"),  py::arg("thePeriod")=static_cast<const Standard_Real>(0.0))
        .def("Add",
             (void (Bnd_Range::*)( const Standard_Real ) ) static_cast<void (Bnd_Range::*)( const Standard_Real ) >(&Bnd_Range::Add),
             R"#(Extends <this> to include theParameter)#"  , py::arg("theParameter"))
        .def("Add",
             (void (Bnd_Range::*)( const Bnd_Range & ) ) static_cast<void (Bnd_Range::*)( const Bnd_Range & ) >(&Bnd_Range::Add),
             R"#(Extends this range to include both ranges.)#"  , py::arg("theRange"))
        .def("GetMin",
             (Standard_Boolean (Bnd_Range::*)( Standard_Real & ) const) static_cast<Standard_Boolean (Bnd_Range::*)( Standard_Real & ) const>(&Bnd_Range::GetMin),
             R"#(Obtain MIN boundary of <this>. If <this> is VOID the method returns false.)#"  , py::arg("thePar"))
        .def("GetMax",
             (Standard_Boolean (Bnd_Range::*)( Standard_Real & ) const) static_cast<Standard_Boolean (Bnd_Range::*)( Standard_Real & ) const>(&Bnd_Range::GetMax),
             R"#(Obtain MAX boundary of <this>. If <this> is VOID the method returns false.)#"  , py::arg("thePar"))
        .def("GetBounds",
             (Standard_Boolean (Bnd_Range::*)( Standard_Real & , Standard_Real & ) const) static_cast<Standard_Boolean (Bnd_Range::*)( Standard_Real & , Standard_Real & ) const>(&Bnd_Range::GetBounds),
             R"#(Obtain first and last boundary of <this>. If <this> is VOID the method returns false.)#"  , py::arg("theFirstPar"),  py::arg("theLastPar"))
        .def("GetIntermediatePoint",
             (Standard_Boolean (Bnd_Range::*)( const Standard_Real , Standard_Real & ) const) static_cast<Standard_Boolean (Bnd_Range::*)( const Standard_Real , Standard_Real & ) const>(&Bnd_Range::GetIntermediatePoint),
             R"#(Obtain theParameter satisfied to the equation (theParameter-MIN)/(MAX-MIN) == theLambda. * theLambda == 0 --> MIN boundary will be returned; * theLambda == 0.5 --> Middle point will be returned; * theLambda == 1 --> MAX boundary will be returned; * theLambda < 0 --> the value less than MIN will be returned; * theLambda > 1 --> the value greater than MAX will be returned. If <this> is VOID the method returns false.)#"  , py::arg("theLambda"),  py::arg("theParameter"))
        .def("Delta",
             (Standard_Real (Bnd_Range::*)() const) static_cast<Standard_Real (Bnd_Range::*)() const>(&Bnd_Range::Delta),
             R"#(Returns range value (MAX-MIN). Returns negative value for VOID range.)#" )
        .def("IsVoid",
             (Standard_Boolean (Bnd_Range::*)() const) static_cast<Standard_Boolean (Bnd_Range::*)() const>(&Bnd_Range::IsVoid),
             R"#(Is <this> initialized.)#" )
        .def("SetVoid",
             (void (Bnd_Range::*)() ) static_cast<void (Bnd_Range::*)() >(&Bnd_Range::SetVoid),
             R"#(Initializes <this> by default parameters. Makes <this> VOID.)#" )
        .def("Enlarge",
             (void (Bnd_Range::*)( const Standard_Real ) ) static_cast<void (Bnd_Range::*)( const Standard_Real ) >(&Bnd_Range::Enlarge),
             R"#(Extends this to the given value (in both side))#"  , py::arg("theDelta"))
        .def("Shifted",
             (Bnd_Range (Bnd_Range::*)( const Standard_Real ) const) static_cast<Bnd_Range (Bnd_Range::*)( const Standard_Real ) const>(&Bnd_Range::Shifted),
             R"#(Returns the copy of <*this> shifted by theVal)#"  , py::arg("theVal"))
        .def("Shift",
             (void (Bnd_Range::*)( const Standard_Real ) ) static_cast<void (Bnd_Range::*)( const Standard_Real ) >(&Bnd_Range::Shift),
             R"#(Shifts <*this> by theVal)#"  , py::arg("theVal"))
        .def("TrimFrom",
             (void (Bnd_Range::*)( const Standard_Real ) ) static_cast<void (Bnd_Range::*)( const Standard_Real ) >(&Bnd_Range::TrimFrom),
             R"#(Trims the First value in range by the given lower limit. Marks range as Void if the given Lower value is greater than range Max.)#"  , py::arg("theValLower"))
        .def("TrimTo",
             (void (Bnd_Range::*)( const Standard_Real ) ) static_cast<void (Bnd_Range::*)( const Standard_Real ) >(&Bnd_Range::TrimTo),
             R"#(Trim the Last value in range by the given Upper limit. Marks range as Void if the given Upper value is smaller than range Max.)#"  , py::arg("theValUpper"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Range::*)( Standard_Real ) const) static_cast<Standard_Boolean (Bnd_Range::*)( Standard_Real ) const>(&Bnd_Range::IsOut),
             R"#(Returns True if the value is out of this range.)#"  , py::arg("theValue"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Range::*)( const Bnd_Range & ) const) static_cast<Standard_Boolean (Bnd_Range::*)( const Bnd_Range & ) const>(&Bnd_Range::IsOut),
             R"#(Returns True if the given range is out of this range.)#"  , py::arg("theRange"))
        .def("DumpJson",
             (void (Bnd_Range::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Bnd_Range::*)( std::ostream & , const Standard_Integer ) const>(&Bnd_Range::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bnd_Sphere , shared_ptr<Bnd_Sphere> >>(m.attr("Bnd_Sphere"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_XYZ &,const Standard_Real,const Standard_Integer,const Standard_Integer >()  , py::arg("theCntr"),  py::arg("theRad"),  py::arg("theU"),  py::arg("theV") )
    // custom constructors
    // methods
        .def("U",
             (Standard_Integer (Bnd_Sphere::*)() const) static_cast<Standard_Integer (Bnd_Sphere::*)() const>(&Bnd_Sphere::U),
             R"#(Returns the U parameter on shape)#" )
        .def("V",
             (Standard_Integer (Bnd_Sphere::*)() const) static_cast<Standard_Integer (Bnd_Sphere::*)() const>(&Bnd_Sphere::V),
             R"#(Returns the V parameter on shape)#" )
        .def("IsValid",
             (Standard_Boolean (Bnd_Sphere::*)() const) static_cast<Standard_Boolean (Bnd_Sphere::*)() const>(&Bnd_Sphere::IsValid),
             R"#(Returns validity status, indicating that this sphere corresponds to a real entity)#" )
        .def("SetValid",
             (void (Bnd_Sphere::*)( const Standard_Boolean ) ) static_cast<void (Bnd_Sphere::*)( const Standard_Boolean ) >(&Bnd_Sphere::SetValid),
             R"#(None)#"  , py::arg("isValid"))
        .def("Center",
             (const gp_XYZ & (Bnd_Sphere::*)() const) static_cast<const gp_XYZ & (Bnd_Sphere::*)() const>(&Bnd_Sphere::Center),
             R"#(Returns center of sphere object)#" )
        .def("Radius",
             (Standard_Real (Bnd_Sphere::*)() const) static_cast<Standard_Real (Bnd_Sphere::*)() const>(&Bnd_Sphere::Radius),
             R"#(Returns the radius value)#" )
        .def("Project",
             (Standard_Boolean (Bnd_Sphere::*)( const gp_XYZ & , gp_XYZ & , Standard_Real & , Standard_Boolean & ) const) static_cast<Standard_Boolean (Bnd_Sphere::*)( const gp_XYZ & , gp_XYZ & , Standard_Real & , Standard_Boolean & ) const>(&Bnd_Sphere::Project),
             R"#(Projects a point on entity. Returns true if success)#"  , py::arg("theNode"),  py::arg("theProjNode"),  py::arg("theDist"),  py::arg("theInside"))
        .def("Distance",
             (Standard_Real (Bnd_Sphere::*)( const gp_XYZ & ) const) static_cast<Standard_Real (Bnd_Sphere::*)( const gp_XYZ & ) const>(&Bnd_Sphere::Distance),
             R"#(None)#"  , py::arg("theNode"))
        .def("SquareDistance",
             (Standard_Real (Bnd_Sphere::*)( const gp_XYZ & ) const) static_cast<Standard_Real (Bnd_Sphere::*)( const gp_XYZ & ) const>(&Bnd_Sphere::SquareDistance),
             R"#(None)#"  , py::arg("theNode"))
        .def("Add",
             (void (Bnd_Sphere::*)( const Bnd_Sphere & ) ) static_cast<void (Bnd_Sphere::*)( const Bnd_Sphere & ) >(&Bnd_Sphere::Add),
             R"#(None)#"  , py::arg("theOther"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Sphere::*)( const Bnd_Sphere & ) const) static_cast<Standard_Boolean (Bnd_Sphere::*)( const Bnd_Sphere & ) const>(&Bnd_Sphere::IsOut),
             R"#(None)#"  , py::arg("theOther"))
        .def("IsOut",
             (Standard_Boolean (Bnd_Sphere::*)( const gp_XYZ & , Standard_Real & ) const) static_cast<Standard_Boolean (Bnd_Sphere::*)( const gp_XYZ & , Standard_Real & ) const>(&Bnd_Sphere::IsOut),
             R"#(None)#"  , py::arg("thePnt"),  py::arg("theMaxDist"))
        .def("SquareExtent",
             (Standard_Real (Bnd_Sphere::*)() const) static_cast<Standard_Real (Bnd_Sphere::*)() const>(&Bnd_Sphere::SquareExtent),
             R"#(None)#" )
        .def("U",
             (Standard_Integer (Bnd_Sphere::*)() const) static_cast<Standard_Integer (Bnd_Sphere::*)() const>(&Bnd_Sphere::U),
             R"#(Returns the U parameter on shape)#" )
        .def("V",
             (Standard_Integer (Bnd_Sphere::*)() const) static_cast<Standard_Integer (Bnd_Sphere::*)() const>(&Bnd_Sphere::V),
             R"#(Returns the V parameter on shape)#" )
        .def("IsValid",
             (Standard_Boolean (Bnd_Sphere::*)() const) static_cast<Standard_Boolean (Bnd_Sphere::*)() const>(&Bnd_Sphere::IsValid),
             R"#(Returns validity status, indicating that this sphere corresponds to a real entity)#" )
        .def("SetValid",
             (void (Bnd_Sphere::*)( const Standard_Boolean ) ) static_cast<void (Bnd_Sphere::*)( const Standard_Boolean ) >(&Bnd_Sphere::SetValid),
             R"#(None)#"  , py::arg("isValid"))
        .def("Center",
             (const gp_XYZ & (Bnd_Sphere::*)() const) static_cast<const gp_XYZ & (Bnd_Sphere::*)() const>(&Bnd_Sphere::Center),
             R"#(Returns center of sphere object)#" )
        .def("Radius",
             (Standard_Real (Bnd_Sphere::*)() const) static_cast<Standard_Real (Bnd_Sphere::*)() const>(&Bnd_Sphere::Radius),
             R"#(Returns the radius value)#" )
    // methods using call by reference i.s.o. return
        .def("Distances",
             []( Bnd_Sphere &self , const gp_XYZ & theXYZ ){ Standard_Real  theMin; Standard_Real  theMax; self.Distances(theXYZ,theMin,theMax); return std::make_tuple(theMin,theMax); },
             R"#(Calculate and return minimal and maximal distance to sphere. NOTE: This function is tightly optimized; any modifications may affect performance!)#"  , py::arg("theXYZ"))
        .def("SquareDistances",
             []( Bnd_Sphere &self , const gp_XYZ & theXYZ ){ Standard_Real  theMin; Standard_Real  theMax; self.SquareDistances(theXYZ,theMin,theMax); return std::make_tuple(theMin,theMax); },
             R"#(Calculate and return minimal and maximal distance to sphere. NOTE: This function is tightly optimized; any modifications may affect performance!)#"  , py::arg("theXYZ"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Bnd_Tools , shared_ptr<Bnd_Tools>>(m,"Bnd_Tools");

    static_cast<py::class_<Bnd_Tools , shared_ptr<Bnd_Tools> >>(m.attr("Bnd_Tools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Bnd2BVH_s",
                    (BVH_Box<Standard_Real, 2> (*)( const Bnd_Box2d & ) ) static_cast<BVH_Box<Standard_Real, 2> (*)( const Bnd_Box2d & ) >(&Bnd_Tools::Bnd2BVH),
                    R"#(Converts the given Bnd_Box2d to BVH_Box)#"  , py::arg("theBox"))
        .def_static("Bnd2BVH_s",
                    (BVH_Box<Standard_Real, 3> (*)( const Bnd_Box & ) ) static_cast<BVH_Box<Standard_Real, 3> (*)( const Bnd_Box & ) >(&Bnd_Tools::Bnd2BVH),
                    R"#(Converts the given Bnd_Box to BVH_Box)#"  , py::arg("theBox"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Bnd_SeqOfBox.hxx
// ./opencascade/Bnd_Array1OfBox2d.hxx
// ./opencascade/Bnd_BoundSortBox2d.hxx
// ./opencascade/Bnd_Box.hxx
// ./opencascade/Bnd_Tools.hxx
// ./opencascade/Bnd_Range.hxx
// ./opencascade/Bnd_B3f.hxx
// ./opencascade/Bnd_Box2d.hxx
// ./opencascade/Bnd_HArray1OfBox2d.hxx
// ./opencascade/Bnd_B2f.hxx
// ./opencascade/Bnd_B2d.hxx
// ./opencascade/Bnd_Array1OfSphere.hxx
// ./opencascade/Bnd_Array1OfBox.hxx
// ./opencascade/Bnd_Sphere.hxx
// ./opencascade/Bnd_BoundSortBox.hxx
// ./opencascade/Bnd_HArray1OfBox.hxx
// ./opencascade/Bnd_B3d.hxx
// ./opencascade/Bnd_HArray1OfSphere.hxx
// ./opencascade/Bnd_OBB.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<Bnd_Box>(m,"Bnd_SeqOfBox");
    register_template_NCollection_Array1<Bnd_Box2d>(m,"Bnd_Array1OfBox2d");
    register_template_NCollection_Array1<Bnd_Sphere>(m,"Bnd_Array1OfSphere");
    register_template_NCollection_Array1<Bnd_Box>(m,"Bnd_Array1OfBox");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

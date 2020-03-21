
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
#include <gp_Circ.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Circ.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <gp_Circ.hxx>
#include <gp_Ax1.hxx>
#include <gp_Cylinder.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <gp_Lin.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Parab.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Cone.hxx>
#include <gp_Lin.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Vec.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Lin.hxx>
#include <gp_Ax1.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Pnt.hxx>
#include <gp_Ax1.hxx>
#include <gp_Lin.hxx>
#include <gp_Dir.hxx>
#include <gp_Pln.hxx>
#include <gp_Ax2.hxx>

// module includes
#include <GC_MakeArcOfCircle.hxx>
#include <GC_MakeArcOfEllipse.hxx>
#include <GC_MakeArcOfHyperbola.hxx>
#include <GC_MakeArcOfParabola.hxx>
#include <GC_MakeCircle.hxx>
#include <GC_MakeConicalSurface.hxx>
#include <GC_MakeCylindricalSurface.hxx>
#include <GC_MakeEllipse.hxx>
#include <GC_MakeHyperbola.hxx>
#include <GC_MakeLine.hxx>
#include <GC_MakeMirror.hxx>
#include <GC_MakePlane.hxx>
#include <GC_MakeRotation.hxx>
#include <GC_MakeScale.hxx>
#include <GC_MakeSegment.hxx>
#include <GC_MakeTranslation.hxx>
#include <GC_MakeTrimmedCone.hxx>
#include <GC_MakeTrimmedCylinder.hxx>
#include <GC_Root.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GC(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GC"));


//Python trampoline classes

// classes


    static_cast<py::class_<GC_MakeMirror , shared_ptr<GC_MakeMirror> >>(m.attr("GC_MakeMirror"))
    // constructors
        .def(py::init< const gp_Pnt & >()  , py::arg("Point") )
        .def(py::init< const gp_Ax1 & >()  , py::arg("Axis") )
        .def(py::init< const gp_Lin & >()  , py::arg("Line") )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("Point"),  py::arg("Direc") )
        .def(py::init< const gp_Pln & >()  , py::arg("Plane") )
        .def(py::init< const gp_Ax2 & >()  , py::arg("Plane") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_Transformation> & (GC_MakeMirror::*)() const) static_cast<const opencascade::handle<Geom_Transformation> & (GC_MakeMirror::*)() const>(&GC_MakeMirror::Value),
             R"#(Returns the constructed transformation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeRotation , shared_ptr<GC_MakeRotation> >>(m.attr("GC_MakeRotation"))
    // constructors
        .def(py::init< const gp_Lin &,const Standard_Real >()  , py::arg("Line"),  py::arg("Angle") )
        .def(py::init< const gp_Ax1 &,const Standard_Real >()  , py::arg("Axis"),  py::arg("Angle") )
        .def(py::init< const gp_Pnt &,const gp_Dir &,const Standard_Real >()  , py::arg("Point"),  py::arg("Direc"),  py::arg("Angle") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_Transformation> & (GC_MakeRotation::*)() const) static_cast<const opencascade::handle<Geom_Transformation> & (GC_MakeRotation::*)() const>(&GC_MakeRotation::Value),
             R"#(Returns the constructed transformation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeScale , shared_ptr<GC_MakeScale> >>(m.attr("GC_MakeScale"))
    // constructors
        .def(py::init< const gp_Pnt &,const Standard_Real >()  , py::arg("Point"),  py::arg("Scale") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_Transformation> & (GC_MakeScale::*)() const) static_cast<const opencascade::handle<Geom_Transformation> & (GC_MakeScale::*)() const>(&GC_MakeScale::Value),
             R"#(Returns the constructed transformation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeTranslation , shared_ptr<GC_MakeTranslation> >>(m.attr("GC_MakeTranslation"))
    // constructors
        .def(py::init< const gp_Vec & >()  , py::arg("Vect") )
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("Point1"),  py::arg("Point2") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_Transformation> & (GC_MakeTranslation::*)() const) static_cast<const opencascade::handle<Geom_Transformation> & (GC_MakeTranslation::*)() const>(&GC_MakeTranslation::Value),
             R"#(Returns the constructed transformation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<GC_Root , shared_ptr<GC_Root>>(m,"GC_Root");

    static_cast<py::class_<GC_Root , shared_ptr<GC_Root> >>(m.attr("GC_Root"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GC_Root::*)() const) static_cast<Standard_Boolean (GC_Root::*)() const>(&GC_Root::IsDone),
             R"#(Returns true if the construction is successful.)#" )
        .def("Status",
             (gce_ErrorType (GC_Root::*)() const) static_cast<gce_ErrorType (GC_Root::*)() const>(&GC_Root::Status),
             R"#(Returns the status of the construction: - gce_Done, if the construction is successful, or - another value of the gce_ErrorType enumeration indicating why the construction failed.)#" )
        .def("IsDone",
             (Standard_Boolean (GC_Root::*)() const) static_cast<Standard_Boolean (GC_Root::*)() const>(&GC_Root::IsDone),
             R"#(Returns true if the construction is successful.)#" )
        .def("Status",
             (gce_ErrorType (GC_Root::*)() const) static_cast<gce_ErrorType (GC_Root::*)() const>(&GC_Root::Status),
             R"#(Returns the status of the construction: - gce_Done, if the construction is successful, or - another value of the gce_ErrorType enumeration indicating why the construction failed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeArcOfCircle , shared_ptr<GC_MakeArcOfCircle> , GC_Root>>(m.attr("GC_MakeArcOfCircle"))
    // constructors
        .def(py::init< const gp_Circ &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("Circ"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Sense") )
        .def(py::init< const gp_Circ &,const gp_Pnt &,const Standard_Real,const Standard_Boolean >()  , py::arg("Circ"),  py::arg("P"),  py::arg("Alpha"),  py::arg("Sense") )
        .def(py::init< const gp_Circ &,const gp_Pnt &,const gp_Pnt &,const Standard_Boolean >()  , py::arg("Circ"),  py::arg("P1"),  py::arg("P2"),  py::arg("Sense") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3") )
        .def(py::init< const gp_Pnt &,const gp_Vec &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("V"),  py::arg("P2") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_TrimmedCurve> & (GC_MakeArcOfCircle::*)() const) static_cast<const opencascade::handle<Geom_TrimmedCurve> & (GC_MakeArcOfCircle::*)() const>(&GC_MakeArcOfCircle::Value),
             R"#(Returns the constructed arc of circle. Exceptions StdFail_NotDone if no arc of circle is constructed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeArcOfEllipse , shared_ptr<GC_MakeArcOfEllipse> , GC_Root>>(m.attr("GC_MakeArcOfEllipse"))
    // constructors
        .def(py::init< const gp_Elips &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("Elips"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Sense") )
        .def(py::init< const gp_Elips &,const gp_Pnt &,const Standard_Real,const Standard_Boolean >()  , py::arg("Elips"),  py::arg("P"),  py::arg("Alpha"),  py::arg("Sense") )
        .def(py::init< const gp_Elips &,const gp_Pnt &,const gp_Pnt &,const Standard_Boolean >()  , py::arg("Elips"),  py::arg("P1"),  py::arg("P2"),  py::arg("Sense") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_TrimmedCurve> & (GC_MakeArcOfEllipse::*)() const) static_cast<const opencascade::handle<Geom_TrimmedCurve> & (GC_MakeArcOfEllipse::*)() const>(&GC_MakeArcOfEllipse::Value),
             R"#(Returns the constructed arc of ellipse.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeArcOfHyperbola , shared_ptr<GC_MakeArcOfHyperbola> , GC_Root>>(m.attr("GC_MakeArcOfHyperbola"))
    // constructors
        .def(py::init< const gp_Hypr &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("Hypr"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Sense") )
        .def(py::init< const gp_Hypr &,const gp_Pnt &,const Standard_Real,const Standard_Boolean >()  , py::arg("Hypr"),  py::arg("P"),  py::arg("Alpha"),  py::arg("Sense") )
        .def(py::init< const gp_Hypr &,const gp_Pnt &,const gp_Pnt &,const Standard_Boolean >()  , py::arg("Hypr"),  py::arg("P1"),  py::arg("P2"),  py::arg("Sense") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_TrimmedCurve> & (GC_MakeArcOfHyperbola::*)() const) static_cast<const opencascade::handle<Geom_TrimmedCurve> & (GC_MakeArcOfHyperbola::*)() const>(&GC_MakeArcOfHyperbola::Value),
             R"#(Returns the constructed arc of hyperbola.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeArcOfParabola , shared_ptr<GC_MakeArcOfParabola> , GC_Root>>(m.attr("GC_MakeArcOfParabola"))
    // constructors
        .def(py::init< const gp_Parab &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("Parab"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Sense") )
        .def(py::init< const gp_Parab &,const gp_Pnt &,const Standard_Real,const Standard_Boolean >()  , py::arg("Parab"),  py::arg("P"),  py::arg("Alpha"),  py::arg("Sense") )
        .def(py::init< const gp_Parab &,const gp_Pnt &,const gp_Pnt &,const Standard_Boolean >()  , py::arg("Parab"),  py::arg("P1"),  py::arg("P2"),  py::arg("Sense") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_TrimmedCurve> & (GC_MakeArcOfParabola::*)() const) static_cast<const opencascade::handle<Geom_TrimmedCurve> & (GC_MakeArcOfParabola::*)() const>(&GC_MakeArcOfParabola::Value),
             R"#(Returns the constructed arc of parabola.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeCircle , shared_ptr<GC_MakeCircle> , GC_Root>>(m.attr("GC_MakeCircle"))
    // constructors
        .def(py::init< const gp_Circ & >()  , py::arg("C") )
        .def(py::init< const gp_Ax2 &,const Standard_Real >()  , py::arg("A2"),  py::arg("Radius") )
        .def(py::init< const gp_Circ &,const Standard_Real >()  , py::arg("Circ"),  py::arg("Dist") )
        .def(py::init< const gp_Circ &,const gp_Pnt & >()  , py::arg("Circ"),  py::arg("Point") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3") )
        .def(py::init< const gp_Pnt &,const gp_Dir &,const Standard_Real >()  , py::arg("Center"),  py::arg("Norm"),  py::arg("Radius") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const Standard_Real >()  , py::arg("Center"),  py::arg("PtAxis"),  py::arg("Radius") )
        .def(py::init< const gp_Ax1 &,const Standard_Real >()  , py::arg("Axis"),  py::arg("Radius") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_Circle> & (GC_MakeCircle::*)() const) static_cast<const opencascade::handle<Geom_Circle> & (GC_MakeCircle::*)() const>(&GC_MakeCircle::Value),
             R"#(Returns the constructed circle. Exceptions StdFail_NotDone if no circle is constructed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeConicalSurface , shared_ptr<GC_MakeConicalSurface> , GC_Root>>(m.attr("GC_MakeConicalSurface"))
    // constructors
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("A2"),  py::arg("Ang"),  py::arg("Radius") )
        .def(py::init< const gp_Cone & >()  , py::arg("C") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3"),  py::arg("P4") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real >()  , py::arg("P1"),  py::arg("P2"),  py::arg("R1"),  py::arg("R2") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_ConicalSurface> & (GC_MakeConicalSurface::*)() const) static_cast<const opencascade::handle<Geom_ConicalSurface> & (GC_MakeConicalSurface::*)() const>(&GC_MakeConicalSurface::Value),
             R"#(Returns the constructed cone. Exceptions StdFail_NotDone if no cone is constructed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeCylindricalSurface , shared_ptr<GC_MakeCylindricalSurface> , GC_Root>>(m.attr("GC_MakeCylindricalSurface"))
    // constructors
        .def(py::init< const gp_Ax2 &,const Standard_Real >()  , py::arg("A2"),  py::arg("Radius") )
        .def(py::init< const gp_Cylinder & >()  , py::arg("C") )
        .def(py::init< const gp_Cylinder &,const gp_Pnt & >()  , py::arg("Cyl"),  py::arg("Point") )
        .def(py::init< const gp_Cylinder &,const Standard_Real >()  , py::arg("Cyl"),  py::arg("Dist") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3") )
        .def(py::init< const gp_Ax1 &,const Standard_Real >()  , py::arg("Axis"),  py::arg("Radius") )
        .def(py::init< const gp_Circ & >()  , py::arg("Circ") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_CylindricalSurface> & (GC_MakeCylindricalSurface::*)() const) static_cast<const opencascade::handle<Geom_CylindricalSurface> & (GC_MakeCylindricalSurface::*)() const>(&GC_MakeCylindricalSurface::Value),
             R"#(Returns the constructed cylinder. Exceptions StdFail_NotDone if no cylinder is constructed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeEllipse , shared_ptr<GC_MakeEllipse> , GC_Root>>(m.attr("GC_MakeEllipse"))
    // constructors
        .def(py::init< const gp_Elips & >()  , py::arg("E") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("A2"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("Center") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_Ellipse> & (GC_MakeEllipse::*)() const) static_cast<const opencascade::handle<Geom_Ellipse> & (GC_MakeEllipse::*)() const>(&GC_MakeEllipse::Value),
             R"#(Returns the constructed ellipse. Exceptions StdFail_NotDone if no ellipse is constructed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeHyperbola , shared_ptr<GC_MakeHyperbola> , GC_Root>>(m.attr("GC_MakeHyperbola"))
    // constructors
        .def(py::init< const gp_Hypr & >()  , py::arg("H") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("A2"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("Center") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_Hyperbola> & (GC_MakeHyperbola::*)() const) static_cast<const opencascade::handle<Geom_Hyperbola> & (GC_MakeHyperbola::*)() const>(&GC_MakeHyperbola::Value),
             R"#(Returns the constructed hyperbola. Exceptions StdFail_NotDone if no hyperbola is constructed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeLine , shared_ptr<GC_MakeLine> , GC_Root>>(m.attr("GC_MakeLine"))
    // constructors
        .def(py::init< const gp_Ax1 & >()  , py::arg("A1") )
        .def(py::init< const gp_Lin & >()  , py::arg("L") )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("P"),  py::arg("V") )
        .def(py::init< const gp_Lin &,const gp_Pnt & >()  , py::arg("Lin"),  py::arg("Point") )
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_Line> & (GC_MakeLine::*)() const) static_cast<const opencascade::handle<Geom_Line> & (GC_MakeLine::*)() const>(&GC_MakeLine::Value),
             R"#(Returns the constructed line. Exceptions StdFail_NotDone if no line is constructed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakePlane , shared_ptr<GC_MakePlane> , GC_Root>>(m.attr("GC_MakePlane"))
    // constructors
        .def(py::init< const gp_Pln & >()  , py::arg("Pl") )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("P"),  py::arg("V") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D") )
        .def(py::init< const gp_Pln &,const gp_Pnt & >()  , py::arg("Pln"),  py::arg("Point") )
        .def(py::init< const gp_Pln &,const Standard_Real >()  , py::arg("Pln"),  py::arg("Dist") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3") )
        .def(py::init< const gp_Ax1 & >()  , py::arg("Axis") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_Plane> & (GC_MakePlane::*)() const) static_cast<const opencascade::handle<Geom_Plane> & (GC_MakePlane::*)() const>(&GC_MakePlane::Value),
             R"#(Returns the constructed plane. Exceptions StdFail_NotDone if no plane is constructed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeSegment , shared_ptr<GC_MakeSegment> , GC_Root>>(m.attr("GC_MakeSegment"))
    // constructors
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Lin &,const Standard_Real,const Standard_Real >()  , py::arg("Line"),  py::arg("U1"),  py::arg("U2") )
        .def(py::init< const gp_Lin &,const gp_Pnt &,const Standard_Real >()  , py::arg("Line"),  py::arg("Point"),  py::arg("Ulast") )
        .def(py::init< const gp_Lin &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("Line"),  py::arg("P1"),  py::arg("P2") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_TrimmedCurve> & (GC_MakeSegment::*)() const) static_cast<const opencascade::handle<Geom_TrimmedCurve> & (GC_MakeSegment::*)() const>(&GC_MakeSegment::Value),
             R"#(Returns the constructed line segment.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeTrimmedCone , shared_ptr<GC_MakeTrimmedCone> , GC_Root>>(m.attr("GC_MakeTrimmedCone"))
    // constructors
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3"),  py::arg("P4") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real >()  , py::arg("P1"),  py::arg("P2"),  py::arg("R1"),  py::arg("R2") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_RectangularTrimmedSurface> & (GC_MakeTrimmedCone::*)() const) static_cast<const opencascade::handle<Geom_RectangularTrimmedSurface> & (GC_MakeTrimmedCone::*)() const>(&GC_MakeTrimmedCone::Value),
             R"#(Returns the constructed trimmed cone. StdFail_NotDone if no trimmed cone is constructed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeTrimmedCylinder , shared_ptr<GC_MakeTrimmedCylinder> , GC_Root>>(m.attr("GC_MakeTrimmedCylinder"))
    // constructors
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3") )
        .def(py::init< const gp_Circ &,const Standard_Real >()  , py::arg("Circ"),  py::arg("Height") )
        .def(py::init< const gp_Ax1 &,const Standard_Real,const Standard_Real >()  , py::arg("A1"),  py::arg("Radius"),  py::arg("Height") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Geom_RectangularTrimmedSurface> & (GC_MakeTrimmedCylinder::*)() const) static_cast<const opencascade::handle<Geom_RectangularTrimmedSurface> & (GC_MakeTrimmedCylinder::*)() const>(&GC_MakeTrimmedCylinder::Value),
             R"#(Returns the constructed trimmed cylinder. Exceptions StdFail_NotDone if no trimmed cylinder is constructed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\GC_MakeArcOfCircle.hxx
// ./opencascade\GC_MakeArcOfHyperbola.hxx
// ./opencascade\GC_MakePlane.hxx
// ./opencascade\GC_MakeCylindricalSurface.hxx
// ./opencascade\GC_MakeHyperbola.hxx
// ./opencascade\GC_MakeLine.hxx
// ./opencascade\GC_MakeTrimmedCylinder.hxx
// ./opencascade\GC_MakeArcOfEllipse.hxx
// ./opencascade\GC_MakeEllipse.hxx
// ./opencascade\GC_MakeSegment.hxx
// ./opencascade\GC_MakeCircle.hxx
// ./opencascade\GC_MakeTrimmedCone.hxx
// ./opencascade\GC_MakeArcOfParabola.hxx
// ./opencascade\GC_Root.hxx
// ./opencascade\GC_MakeConicalSurface.hxx
// ./opencascade\GC_MakeScale.hxx
// ./opencascade\GC_MakeTranslation.hxx
// ./opencascade\GC_MakeRotation.hxx
// ./opencascade\GC_MakeMirror.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

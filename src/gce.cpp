
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax1.hxx>
#include <gp_Lin.hxx>
#include <gp_Pln.hxx>
#include <gp_Ax2.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Ax1.hxx>

// module includes
#include <gce_ErrorType.hxx>
#include <gce_MakeCirc.hxx>
#include <gce_MakeCirc2d.hxx>
#include <gce_MakeCone.hxx>
#include <gce_MakeCylinder.hxx>
#include <gce_MakeDir.hxx>
#include <gce_MakeDir2d.hxx>
#include <gce_MakeElips.hxx>
#include <gce_MakeElips2d.hxx>
#include <gce_MakeHypr.hxx>
#include <gce_MakeHypr2d.hxx>
#include <gce_MakeLin.hxx>
#include <gce_MakeLin2d.hxx>
#include <gce_MakeMirror.hxx>
#include <gce_MakeMirror2d.hxx>
#include <gce_MakeParab.hxx>
#include <gce_MakeParab2d.hxx>
#include <gce_MakePln.hxx>
#include <gce_MakeRotation.hxx>
#include <gce_MakeRotation2d.hxx>
#include <gce_MakeScale.hxx>
#include <gce_MakeScale2d.hxx>
#include <gce_MakeTranslation.hxx>
#include <gce_MakeTranslation2d.hxx>
#include <gce_Root.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_gce(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("gce"));


//Python trampoline classes

// classes

    register_default_constructor<gce_Root ,std::unique_ptr<gce_Root>>(m,"gce_Root");

    static_cast<py::class_<gce_Root ,std::unique_ptr<gce_Root>  >>(m.attr("gce_Root"))
        .def("IsDone",
             (Standard_Boolean (gce_Root::*)() const) static_cast<Standard_Boolean (gce_Root::*)() const>(&gce_Root::IsDone),
             R"#(Returns true if the construction is successful.)#" )
        .def("Status",
             (gce_ErrorType (gce_Root::*)() const) static_cast<gce_ErrorType (gce_Root::*)() const>(&gce_Root::Status),
             R"#(Returns the status of the construction: - gce_Done, if the construction is successful, or - another value of the gce_ErrorType enumeration indicating why the construction failed.)#" )
        .def("IsDone",
             (Standard_Boolean (gce_Root::*)() const) static_cast<Standard_Boolean (gce_Root::*)() const>(&gce_Root::IsDone),
             R"#(Returns true if the construction is successful.)#" )
        .def("Status",
             (gce_ErrorType (gce_Root::*)() const) static_cast<gce_ErrorType (gce_Root::*)() const>(&gce_Root::Status),
             R"#(Returns the status of the construction: - gce_Done, if the construction is successful, or - another value of the gce_ErrorType enumeration indicating why the construction failed.)#" )
;


    static_cast<py::class_<gce_MakeScale ,std::unique_ptr<gce_MakeScale>  >>(m.attr("gce_MakeScale"))
        .def(py::init< const gp_Pnt &,const Standard_Real >()  , py::arg("Point"),  py::arg("Scale") )
        .def("Value",
             (const gp_Trsf & (gce_MakeScale::*)() const) static_cast<const gp_Trsf & (gce_MakeScale::*)() const>(&gce_MakeScale::Value),
             R"#(Returns the constructed transformation.)#" )
        .def("Operator",
             (const gp_Trsf & (gce_MakeScale::*)() const) static_cast<const gp_Trsf & (gce_MakeScale::*)() const>(&gce_MakeScale::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeMirror2d ,std::unique_ptr<gce_MakeMirror2d>  >>(m.attr("gce_MakeMirror2d"))
        .def(py::init< const gp_Pnt2d & >()  , py::arg("Point") )
        .def(py::init< const gp_Ax2d & >()  , py::arg("Axis") )
        .def(py::init< const gp_Lin2d & >()  , py::arg("Line") )
        .def(py::init< const gp_Pnt2d &,const gp_Dir2d & >()  , py::arg("Point"),  py::arg("Direc") )
        .def("Value",
             (const gp_Trsf2d & (gce_MakeMirror2d::*)() const) static_cast<const gp_Trsf2d & (gce_MakeMirror2d::*)() const>(&gce_MakeMirror2d::Value),
             R"#(Returns the constructed transformation.)#" )
        .def("Operator",
             (const gp_Trsf2d & (gce_MakeMirror2d::*)() const) static_cast<const gp_Trsf2d & (gce_MakeMirror2d::*)() const>(&gce_MakeMirror2d::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeTranslation ,std::unique_ptr<gce_MakeTranslation>  >>(m.attr("gce_MakeTranslation"))
        .def(py::init< const gp_Vec & >()  , py::arg("Vect") )
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("Point1"),  py::arg("Point2") )
        .def("Value",
             (const gp_Trsf & (gce_MakeTranslation::*)() const) static_cast<const gp_Trsf & (gce_MakeTranslation::*)() const>(&gce_MakeTranslation::Value),
             R"#(Returns the constructed transformation.)#" )
        .def("Operator",
             (const gp_Trsf & (gce_MakeTranslation::*)() const) static_cast<const gp_Trsf & (gce_MakeTranslation::*)() const>(&gce_MakeTranslation::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeLin ,std::unique_ptr<gce_MakeLin>  , gce_Root >>(m.attr("gce_MakeLin"))
        .def(py::init< const gp_Ax1 & >()  , py::arg("A1") )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("P"),  py::arg("V") )
        .def(py::init< const gp_Lin &,const gp_Pnt & >()  , py::arg("Lin"),  py::arg("Point") )
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2") )
        .def("Value",
             (const gp_Lin & (gce_MakeLin::*)() const) static_cast<const gp_Lin & (gce_MakeLin::*)() const>(&gce_MakeLin::Value),
             R"#(Returns the constructed line. Exceptions StdFail_NotDone is raised if no line is constructed.)#" )
        .def("Operator",
             (const gp_Lin & (gce_MakeLin::*)() const) static_cast<const gp_Lin & (gce_MakeLin::*)() const>(&gce_MakeLin::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeLin2d ,std::unique_ptr<gce_MakeLin2d>  , gce_Root >>(m.attr("gce_MakeLin2d"))
        .def(py::init< const gp_Ax2d & >()  , py::arg("A") )
        .def(py::init< const gp_Pnt2d &,const gp_Dir2d & >()  , py::arg("P"),  py::arg("V") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("C") )
        .def(py::init< const gp_Lin2d &,const Standard_Real >()  , py::arg("Lin"),  py::arg("Dist") )
        .def(py::init< const gp_Lin2d &,const gp_Pnt2d & >()  , py::arg("Lin"),  py::arg("Point") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("P1"),  py::arg("P2") )
        .def("Value",
             (gp_Lin2d (gce_MakeLin2d::*)() const) static_cast<gp_Lin2d (gce_MakeLin2d::*)() const>(&gce_MakeLin2d::Value),
             R"#(Returns the constructed line. Exceptions StdFail_NotDone if no line is constructed.)#" )
        .def("Operator",
             (gp_Lin2d (gce_MakeLin2d::*)() const) static_cast<gp_Lin2d (gce_MakeLin2d::*)() const>(&gce_MakeLin2d::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeCirc2d ,std::unique_ptr<gce_MakeCirc2d>  , gce_Root >>(m.attr("gce_MakeCirc2d"))
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("XAxis"),  py::arg("Radius"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax22d &,const Standard_Real >()  , py::arg("Axis"),  py::arg("Radius") )
        .def(py::init< const gp_Circ2d &,const Standard_Real >()  , py::arg("Circ"),  py::arg("Dist") )
        .def(py::init< const gp_Circ2d &,const gp_Pnt2d & >()  , py::arg("Circ"),  py::arg("Point") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3") )
        .def(py::init< const gp_Pnt2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("Center"),  py::arg("Radius"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Boolean >()  , py::arg("Center"),  py::arg("Point"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("Value",
             (const gp_Circ2d & (gce_MakeCirc2d::*)() const) static_cast<const gp_Circ2d & (gce_MakeCirc2d::*)() const>(&gce_MakeCirc2d::Value),
             R"#(Returns the constructed circle. Exceptions StdFail_NotDone if no circle is constructed.)#" )
        .def("Operator",
             (const gp_Circ2d & (gce_MakeCirc2d::*)() const) static_cast<const gp_Circ2d & (gce_MakeCirc2d::*)() const>(&gce_MakeCirc2d::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeElips ,std::unique_ptr<gce_MakeElips>  , gce_Root >>(m.attr("gce_MakeElips"))
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("A2"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("Center") )
        .def("Value",
             (const gp_Elips & (gce_MakeElips::*)() const) static_cast<const gp_Elips & (gce_MakeElips::*)() const>(&gce_MakeElips::Value),
             R"#(Returns the constructed ellipse. Exceptions StdFail_NotDone if no ellipse is constructed.)#" )
        .def("Operator",
             (const gp_Elips & (gce_MakeElips::*)() const) static_cast<const gp_Elips & (gce_MakeElips::*)() const>(&gce_MakeElips::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeCirc ,std::unique_ptr<gce_MakeCirc>  , gce_Root >>(m.attr("gce_MakeCirc"))
        .def(py::init< const gp_Ax2 &,const Standard_Real >()  , py::arg("A2"),  py::arg("Radius") )
        .def(py::init< const gp_Circ &,const Standard_Real >()  , py::arg("Circ"),  py::arg("Dist") )
        .def(py::init< const gp_Circ &,const gp_Pnt & >()  , py::arg("Circ"),  py::arg("Point") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3") )
        .def(py::init< const gp_Pnt &,const gp_Dir &,const Standard_Real >()  , py::arg("Center"),  py::arg("Norm"),  py::arg("Radius") )
        .def(py::init< const gp_Pnt &,const gp_Pln &,const Standard_Real >()  , py::arg("Center"),  py::arg("Plane"),  py::arg("Radius") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const Standard_Real >()  , py::arg("Center"),  py::arg("Ptaxis"),  py::arg("Radius") )
        .def(py::init< const gp_Ax1 &,const Standard_Real >()  , py::arg("Axis"),  py::arg("Radius") )
        .def("Value",
             (const gp_Circ & (gce_MakeCirc::*)() const) static_cast<const gp_Circ & (gce_MakeCirc::*)() const>(&gce_MakeCirc::Value),
             R"#(Returns the constructed circle. Exceptions StdFail_NotDone if no circle is constructed.)#" )
        .def("Operator",
             (const gp_Circ & (gce_MakeCirc::*)() const) static_cast<const gp_Circ & (gce_MakeCirc::*)() const>(&gce_MakeCirc::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeCone ,std::unique_ptr<gce_MakeCone>  , gce_Root >>(m.attr("gce_MakeCone"))
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("A2"),  py::arg("Ang"),  py::arg("Radius") )
        .def(py::init< const gp_Cone &,const gp_Pnt & >()  , py::arg("Cone"),  py::arg("Point") )
        .def(py::init< const gp_Cone &,const Standard_Real >()  , py::arg("Cone"),  py::arg("Dist") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3"),  py::arg("P4") )
        .def(py::init< const gp_Ax1 &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("Axis"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Lin &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("Axis"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real >()  , py::arg("P1"),  py::arg("P2"),  py::arg("R1"),  py::arg("R2") )
        .def("Value",
             (const gp_Cone & (gce_MakeCone::*)() const) static_cast<const gp_Cone & (gce_MakeCone::*)() const>(&gce_MakeCone::Value),
             R"#(Returns the constructed cone. Exceptions StdFail_NotDone if no cone is constructed.)#" )
        .def("Operator",
             (const gp_Cone & (gce_MakeCone::*)() const) static_cast<const gp_Cone & (gce_MakeCone::*)() const>(&gce_MakeCone::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeDir ,std::unique_ptr<gce_MakeDir>  , gce_Root >>(m.attr("gce_MakeDir"))
        .def(py::init< const gp_Vec & >()  , py::arg("V") )
        .def(py::init< const gp_XYZ & >()  , py::arg("Coord") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Xv"),  py::arg("Yv"),  py::arg("Zv") )
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2") )
        .def("Value",
             (const gp_Dir & (gce_MakeDir::*)() const) static_cast<const gp_Dir & (gce_MakeDir::*)() const>(&gce_MakeDir::Value),
             R"#(Returns the constructed unit vector. Exceptions StdFail_NotDone if no unit vector is constructed.)#" )
        .def("Operator",
             (const gp_Dir & (gce_MakeDir::*)() const) static_cast<const gp_Dir & (gce_MakeDir::*)() const>(&gce_MakeDir::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeParab2d ,std::unique_ptr<gce_MakeParab2d>  , gce_Root >>(m.attr("gce_MakeParab2d"))
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("MirrorAxis"),  py::arg("Focal"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax22d &,const Standard_Real >()  , py::arg("A"),  py::arg("Focal") )
        .def(py::init< const gp_Ax2d &,const gp_Pnt2d &,const Standard_Boolean >()  , py::arg("D"),  py::arg("F"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Boolean >()  , py::arg("S1"),  py::arg("Center"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("Value",
             (const gp_Parab2d & (gce_MakeParab2d::*)() const) static_cast<const gp_Parab2d & (gce_MakeParab2d::*)() const>(&gce_MakeParab2d::Value),
             R"#(Returns the constructed parabola. Exceptions StdFail_NotDone if no parabola is constructed.)#" )
        .def("Operator",
             (const gp_Parab2d & (gce_MakeParab2d::*)() const) static_cast<const gp_Parab2d & (gce_MakeParab2d::*)() const>(&gce_MakeParab2d::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeScale2d ,std::unique_ptr<gce_MakeScale2d>  >>(m.attr("gce_MakeScale2d"))
        .def(py::init< const gp_Pnt2d &,const Standard_Real >()  , py::arg("Point"),  py::arg("Scale") )
        .def("Value",
             (const gp_Trsf2d & (gce_MakeScale2d::*)() const) static_cast<const gp_Trsf2d & (gce_MakeScale2d::*)() const>(&gce_MakeScale2d::Value),
             R"#(Returns the constructed transformation.)#" )
        .def("Operator",
             (const gp_Trsf2d & (gce_MakeScale2d::*)() const) static_cast<const gp_Trsf2d & (gce_MakeScale2d::*)() const>(&gce_MakeScale2d::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeHypr2d ,std::unique_ptr<gce_MakeHypr2d>  , gce_Root >>(m.attr("gce_MakeHypr2d"))
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("Center") )
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("MajorAxis"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("Sense") )
        .def(py::init< const gp_Ax22d &,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
        .def("Value",
             (const gp_Hypr2d & (gce_MakeHypr2d::*)() const) static_cast<const gp_Hypr2d & (gce_MakeHypr2d::*)() const>(&gce_MakeHypr2d::Value),
             R"#(Returns the constructed hyperbola. Exceptions StdFail_NotDone if no hyperbola is constructed.)#" )
        .def("Operator",
             (const gp_Hypr2d & (gce_MakeHypr2d::*)() const) static_cast<const gp_Hypr2d & (gce_MakeHypr2d::*)() const>(&gce_MakeHypr2d::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeRotation2d ,std::unique_ptr<gce_MakeRotation2d>  >>(m.attr("gce_MakeRotation2d"))
        .def(py::init< const gp_Pnt2d &,const Standard_Real >()  , py::arg("Point"),  py::arg("Angle") )
        .def("Value",
             (const gp_Trsf2d & (gce_MakeRotation2d::*)() const) static_cast<const gp_Trsf2d & (gce_MakeRotation2d::*)() const>(&gce_MakeRotation2d::Value),
             R"#(Returns the constructed transformation.)#" )
        .def("Operator",
             (const gp_Trsf2d & (gce_MakeRotation2d::*)() const) static_cast<const gp_Trsf2d & (gce_MakeRotation2d::*)() const>(&gce_MakeRotation2d::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeMirror ,std::unique_ptr<gce_MakeMirror>  >>(m.attr("gce_MakeMirror"))
        .def(py::init< const gp_Pnt & >()  , py::arg("Point") )
        .def(py::init< const gp_Ax1 & >()  , py::arg("Axis") )
        .def(py::init< const gp_Lin & >()  , py::arg("Line") )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("Point"),  py::arg("Direc") )
        .def(py::init< const gp_Pln & >()  , py::arg("Plane") )
        .def(py::init< const gp_Ax2 & >()  , py::arg("Plane") )
        .def("Value",
             (const gp_Trsf & (gce_MakeMirror::*)() const) static_cast<const gp_Trsf & (gce_MakeMirror::*)() const>(&gce_MakeMirror::Value),
             R"#(Returns the constructed transformation.)#" )
        .def("Operator",
             (const gp_Trsf & (gce_MakeMirror::*)() const) static_cast<const gp_Trsf & (gce_MakeMirror::*)() const>(&gce_MakeMirror::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeDir2d ,std::unique_ptr<gce_MakeDir2d>  , gce_Root >>(m.attr("gce_MakeDir2d"))
        .def(py::init< const gp_Vec2d & >()  , py::arg("V") )
        .def(py::init< const gp_XY & >()  , py::arg("Coord") )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("Xv"),  py::arg("Yv") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("P1"),  py::arg("P2") )
        .def("Value",
             (const gp_Dir2d & (gce_MakeDir2d::*)() const) static_cast<const gp_Dir2d & (gce_MakeDir2d::*)() const>(&gce_MakeDir2d::Value),
             R"#(Returns the constructed unit vector. Exceptions StdFail_NotDone if no unit vector is constructed.)#" )
        .def("Operator",
             (const gp_Dir2d & (gce_MakeDir2d::*)() const) static_cast<const gp_Dir2d & (gce_MakeDir2d::*)() const>(&gce_MakeDir2d::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeElips2d ,std::unique_ptr<gce_MakeElips2d>  , gce_Root >>(m.attr("gce_MakeElips2d"))
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("MajorAxis"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax22d &,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("Center") )
        .def("Value",
             (const gp_Elips2d & (gce_MakeElips2d::*)() const) static_cast<const gp_Elips2d & (gce_MakeElips2d::*)() const>(&gce_MakeElips2d::Value),
             R"#(Returns the constructed ellipse. Exceptions StdFail_NotDone if no ellipse is constructed.)#" )
        .def("Operator",
             (const gp_Elips2d & (gce_MakeElips2d::*)() const) static_cast<const gp_Elips2d & (gce_MakeElips2d::*)() const>(&gce_MakeElips2d::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeRotation ,std::unique_ptr<gce_MakeRotation>  >>(m.attr("gce_MakeRotation"))
        .def(py::init< const gp_Lin &,const Standard_Real >()  , py::arg("Line"),  py::arg("Angle") )
        .def(py::init< const gp_Ax1 &,const Standard_Real >()  , py::arg("Axis"),  py::arg("Angle") )
        .def(py::init< const gp_Pnt &,const gp_Dir &,const Standard_Real >()  , py::arg("Point"),  py::arg("Direc"),  py::arg("Angle") )
        .def("Value",
             (const gp_Trsf & (gce_MakeRotation::*)() const) static_cast<const gp_Trsf & (gce_MakeRotation::*)() const>(&gce_MakeRotation::Value),
             R"#(Returns the constructed transformation.)#" )
        .def("Operator",
             (const gp_Trsf & (gce_MakeRotation::*)() const) static_cast<const gp_Trsf & (gce_MakeRotation::*)() const>(&gce_MakeRotation::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakePln ,std::unique_ptr<gce_MakePln>  , gce_Root >>(m.attr("gce_MakePln"))
        .def(py::init< const gp_Ax2 & >()  , py::arg("A2") )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("P"),  py::arg("V") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D") )
        .def(py::init< const gp_Pln &,const gp_Pnt & >()  , py::arg("Pln"),  py::arg("Point") )
        .def(py::init< const gp_Pln &,const Standard_Real >()  , py::arg("Pln"),  py::arg("Dist") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3") )
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Ax1 & >()  , py::arg("Axis") )
        .def("Value",
             (const gp_Pln & (gce_MakePln::*)() const) static_cast<const gp_Pln & (gce_MakePln::*)() const>(&gce_MakePln::Value),
             R"#(Returns the constructed plane. Exceptions StdFail_NotDone if no plane is constructed.)#" )
        .def("Operator",
             (const gp_Pln & (gce_MakePln::*)() const) static_cast<const gp_Pln & (gce_MakePln::*)() const>(&gce_MakePln::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeParab ,std::unique_ptr<gce_MakeParab>  , gce_Root >>(m.attr("gce_MakeParab"))
        .def(py::init< const gp_Ax2 &,const Standard_Real >()  , py::arg("A2"),  py::arg("Focal") )
        .def(py::init< const gp_Ax1 &,const gp_Pnt & >()  , py::arg("D"),  py::arg("F") )
        .def("Value",
             (const gp_Parab & (gce_MakeParab::*)() const) static_cast<const gp_Parab & (gce_MakeParab::*)() const>(&gce_MakeParab::Value),
             R"#(Returns the constructed parabola. Exceptions StdFail_NotDone if no parabola is constructed.)#" )
        .def("Operator",
             (const gp_Parab & (gce_MakeParab::*)() const) static_cast<const gp_Parab & (gce_MakeParab::*)() const>(&gce_MakeParab::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeTranslation2d ,std::unique_ptr<gce_MakeTranslation2d>  >>(m.attr("gce_MakeTranslation2d"))
        .def(py::init< const gp_Vec2d & >()  , py::arg("Vect") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("Point1"),  py::arg("Point2") )
        .def("Value",
             (const gp_Trsf2d & (gce_MakeTranslation2d::*)() const) static_cast<const gp_Trsf2d & (gce_MakeTranslation2d::*)() const>(&gce_MakeTranslation2d::Value),
             R"#(Returns the constructed transformation.)#" )
        .def("Operator",
             (const gp_Trsf2d & (gce_MakeTranslation2d::*)() const) static_cast<const gp_Trsf2d & (gce_MakeTranslation2d::*)() const>(&gce_MakeTranslation2d::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeHypr ,std::unique_ptr<gce_MakeHypr>  , gce_Root >>(m.attr("gce_MakeHypr"))
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("A2"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("Center") )
        .def("Value",
             (const gp_Hypr & (gce_MakeHypr::*)() const) static_cast<const gp_Hypr & (gce_MakeHypr::*)() const>(&gce_MakeHypr::Value),
             R"#(Returns the constructed hyperbola. Exceptions StdFail_NotDone if no hyperbola is constructed.)#" )
        .def("Operator",
             (const gp_Hypr & (gce_MakeHypr::*)() const) static_cast<const gp_Hypr & (gce_MakeHypr::*)() const>(&gce_MakeHypr::Operator),
             R"#(None)#" )
;


    static_cast<py::class_<gce_MakeCylinder ,std::unique_ptr<gce_MakeCylinder>  , gce_Root >>(m.attr("gce_MakeCylinder"))
        .def(py::init< const gp_Ax2 &,const Standard_Real >()  , py::arg("A2"),  py::arg("Radius") )
        .def(py::init< const gp_Cylinder &,const gp_Pnt & >()  , py::arg("Cyl"),  py::arg("Point") )
        .def(py::init< const gp_Cylinder &,const Standard_Real >()  , py::arg("Cyl"),  py::arg("Dist") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3") )
        .def(py::init< const gp_Ax1 &,const Standard_Real >()  , py::arg("Axis"),  py::arg("Radius") )
        .def(py::init< const gp_Circ & >()  , py::arg("Circ") )
        .def("Value",
             (const gp_Cylinder & (gce_MakeCylinder::*)() const) static_cast<const gp_Cylinder & (gce_MakeCylinder::*)() const>(&gce_MakeCylinder::Value),
             R"#(Returns the constructed cylinder. Exceptions StdFail_NotDone if no cylinder is constructed.)#" )
        .def("Operator",
             (const gp_Cylinder & (gce_MakeCylinder::*)() const) static_cast<const gp_Cylinder & (gce_MakeCylinder::*)() const>(&gce_MakeCylinder::Operator),
             R"#(None)#" )
;

// functions
// ./opencascade/gce_MakeScale.hxx
// ./opencascade/gce_MakeHypr2d.hxx
// ./opencascade/gce_MakeMirror2d.hxx
// ./opencascade/gce_MakePln.hxx
// ./opencascade/gce_MakeTranslation.hxx
// ./opencascade/gce_MakeRotation2d.hxx
// ./opencascade/gce_MakeLin.hxx
// ./opencascade/gce_MakeHypr.hxx
// ./opencascade/gce_MakeLin2d.hxx
// ./opencascade/gce_Root.hxx
// ./opencascade/gce_MakeMirror.hxx
// ./opencascade/gce_MakeCirc2d.hxx
// ./opencascade/gce_MakeParab.hxx
// ./opencascade/gce_MakeElips.hxx
// ./opencascade/gce_MakeDir2d.hxx
// ./opencascade/gce_MakeCirc.hxx
// ./opencascade/gce_MakeCylinder.hxx
// ./opencascade/gce_MakeCone.hxx
// ./opencascade/gce_MakeElips2d.hxx
// ./opencascade/gce_ErrorType.hxx
// ./opencascade/gce_MakeDir.hxx
// ./opencascade/gce_MakeTranslation2d.hxx
// ./opencascade/gce_MakeParab2d.hxx
// ./opencascade/gce_MakeRotation.hxx
// ./opencascade/gce_MakeScale2d.hxx

// operators

// register typdefs
// ./opencascade/gce_MakeScale.hxx
// ./opencascade/gce_MakeHypr2d.hxx
// ./opencascade/gce_MakeMirror2d.hxx
// ./opencascade/gce_MakePln.hxx
// ./opencascade/gce_MakeTranslation.hxx
// ./opencascade/gce_MakeRotation2d.hxx
// ./opencascade/gce_MakeLin.hxx
// ./opencascade/gce_MakeHypr.hxx
// ./opencascade/gce_MakeLin2d.hxx
// ./opencascade/gce_Root.hxx
// ./opencascade/gce_MakeMirror.hxx
// ./opencascade/gce_MakeCirc2d.hxx
// ./opencascade/gce_MakeParab.hxx
// ./opencascade/gce_MakeElips.hxx
// ./opencascade/gce_MakeDir2d.hxx
// ./opencascade/gce_MakeCirc.hxx
// ./opencascade/gce_MakeCylinder.hxx
// ./opencascade/gce_MakeCone.hxx
// ./opencascade/gce_MakeElips2d.hxx
// ./opencascade/gce_ErrorType.hxx
// ./opencascade/gce_MakeDir.hxx
// ./opencascade/gce_MakeTranslation2d.hxx
// ./opencascade/gce_MakeParab2d.hxx
// ./opencascade/gce_MakeRotation.hxx
// ./opencascade/gce_MakeScale2d.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

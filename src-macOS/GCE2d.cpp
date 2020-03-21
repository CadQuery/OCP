
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom2d_Transformation.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Parab2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Lin2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Dir2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Pnt2d.hxx>

// module includes
#include <GCE2d_MakeArcOfCircle.hxx>
#include <GCE2d_MakeArcOfEllipse.hxx>
#include <GCE2d_MakeArcOfHyperbola.hxx>
#include <GCE2d_MakeArcOfParabola.hxx>
#include <GCE2d_MakeCircle.hxx>
#include <GCE2d_MakeEllipse.hxx>
#include <GCE2d_MakeHyperbola.hxx>
#include <GCE2d_MakeLine.hxx>
#include <GCE2d_MakeMirror.hxx>
#include <GCE2d_MakeParabola.hxx>
#include <GCE2d_MakeRotation.hxx>
#include <GCE2d_MakeScale.hxx>
#include <GCE2d_MakeSegment.hxx>
#include <GCE2d_MakeTranslation.hxx>
#include <GCE2d_Root.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GCE2d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GCE2d"));


//Python trampoline classes

// classes


    static_cast<py::class_<GCE2d_MakeMirror , shared_ptr<GCE2d_MakeMirror> >>(m.attr("GCE2d_MakeMirror"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCE2d_MakeRotation , shared_ptr<GCE2d_MakeRotation> >>(m.attr("GCE2d_MakeRotation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCE2d_MakeScale , shared_ptr<GCE2d_MakeScale> >>(m.attr("GCE2d_MakeScale"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCE2d_MakeTranslation , shared_ptr<GCE2d_MakeTranslation> >>(m.attr("GCE2d_MakeTranslation"))
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
    register_default_constructor<GCE2d_Root , shared_ptr<GCE2d_Root>>(m,"GCE2d_Root");

    static_cast<py::class_<GCE2d_Root , shared_ptr<GCE2d_Root> >>(m.attr("GCE2d_Root"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GCE2d_Root::*)() const) static_cast<Standard_Boolean (GCE2d_Root::*)() const>(&GCE2d_Root::IsDone),
             R"#(Returns true if the construction is successful.)#" )
        .def("Status",
             (gce_ErrorType (GCE2d_Root::*)() const) static_cast<gce_ErrorType (GCE2d_Root::*)() const>(&GCE2d_Root::Status),
             R"#(Returns the status of the construction - gce_Done, if the construction is successful, or - another value of the gce_ErrorType enumeration indicating why the construction failed.)#" )
        .def("IsDone",
             (Standard_Boolean (GCE2d_Root::*)() const) static_cast<Standard_Boolean (GCE2d_Root::*)() const>(&GCE2d_Root::IsDone),
             R"#(Returns true if the construction is successful.)#" )
        .def("Status",
             (gce_ErrorType (GCE2d_Root::*)() const) static_cast<gce_ErrorType (GCE2d_Root::*)() const>(&GCE2d_Root::Status),
             R"#(Returns the status of the construction - gce_Done, if the construction is successful, or - another value of the gce_ErrorType enumeration indicating why the construction failed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCE2d_MakeArcOfCircle , shared_ptr<GCE2d_MakeArcOfCircle> , GCE2d_Root>>(m.attr("GCE2d_MakeArcOfCircle"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCE2d_MakeArcOfEllipse , shared_ptr<GCE2d_MakeArcOfEllipse> , GCE2d_Root>>(m.attr("GCE2d_MakeArcOfEllipse"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCE2d_MakeArcOfHyperbola , shared_ptr<GCE2d_MakeArcOfHyperbola> , GCE2d_Root>>(m.attr("GCE2d_MakeArcOfHyperbola"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCE2d_MakeArcOfParabola , shared_ptr<GCE2d_MakeArcOfParabola> , GCE2d_Root>>(m.attr("GCE2d_MakeArcOfParabola"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCE2d_MakeCircle , shared_ptr<GCE2d_MakeCircle> , GCE2d_Root>>(m.attr("GCE2d_MakeCircle"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCE2d_MakeEllipse , shared_ptr<GCE2d_MakeEllipse> , GCE2d_Root>>(m.attr("GCE2d_MakeEllipse"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCE2d_MakeHyperbola , shared_ptr<GCE2d_MakeHyperbola> , GCE2d_Root>>(m.attr("GCE2d_MakeHyperbola"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCE2d_MakeLine , shared_ptr<GCE2d_MakeLine> , GCE2d_Root>>(m.attr("GCE2d_MakeLine"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCE2d_MakeParabola , shared_ptr<GCE2d_MakeParabola> , GCE2d_Root>>(m.attr("GCE2d_MakeParabola"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCE2d_MakeSegment , shared_ptr<GCE2d_MakeSegment> , GCE2d_Root>>(m.attr("GCE2d_MakeSegment"))
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
// ./opencascade/GCE2d_MakeScale.hxx
// ./opencascade/GCE2d_MakeCircle.hxx
// ./opencascade/GCE2d_MakeEllipse.hxx
// ./opencascade/GCE2d_MakeArcOfHyperbola.hxx
// ./opencascade/GCE2d_MakeParabola.hxx
// ./opencascade/GCE2d_MakeSegment.hxx
// ./opencascade/GCE2d_MakeArcOfCircle.hxx
// ./opencascade/GCE2d_MakeRotation.hxx
// ./opencascade/GCE2d_MakeMirror.hxx
// ./opencascade/GCE2d_MakeHyperbola.hxx
// ./opencascade/GCE2d_MakeArcOfEllipse.hxx
// ./opencascade/GCE2d_MakeLine.hxx
// ./opencascade/GCE2d_MakeArcOfParabola.hxx
// ./opencascade/GCE2d_MakeTranslation.hxx
// ./opencascade/GCE2d_Root.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

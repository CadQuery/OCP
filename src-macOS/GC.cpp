
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <gp_Lin.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Cone.hxx>
#include <gp_Lin.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Parab.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Circ.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <gp_Circ.hxx>
#include <gp_Ax1.hxx>
#include <gp_Cylinder.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Lin.hxx>
#include <gp_Ax1.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Circ.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Vec.hxx>
#include <gp_Pnt.hxx>
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeRotation , shared_ptr<GC_MakeRotation> >>(m.attr("GC_MakeRotation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeScale , shared_ptr<GC_MakeScale> >>(m.attr("GC_MakeScale"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeTranslation , shared_ptr<GC_MakeTranslation> >>(m.attr("GC_MakeTranslation"))
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeArcOfEllipse , shared_ptr<GC_MakeArcOfEllipse> , GC_Root>>(m.attr("GC_MakeArcOfEllipse"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeArcOfHyperbola , shared_ptr<GC_MakeArcOfHyperbola> , GC_Root>>(m.attr("GC_MakeArcOfHyperbola"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeArcOfParabola , shared_ptr<GC_MakeArcOfParabola> , GC_Root>>(m.attr("GC_MakeArcOfParabola"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeCircle , shared_ptr<GC_MakeCircle> , GC_Root>>(m.attr("GC_MakeCircle"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeConicalSurface , shared_ptr<GC_MakeConicalSurface> , GC_Root>>(m.attr("GC_MakeConicalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeCylindricalSurface , shared_ptr<GC_MakeCylindricalSurface> , GC_Root>>(m.attr("GC_MakeCylindricalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeEllipse , shared_ptr<GC_MakeEllipse> , GC_Root>>(m.attr("GC_MakeEllipse"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeHyperbola , shared_ptr<GC_MakeHyperbola> , GC_Root>>(m.attr("GC_MakeHyperbola"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeLine , shared_ptr<GC_MakeLine> , GC_Root>>(m.attr("GC_MakeLine"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakePlane , shared_ptr<GC_MakePlane> , GC_Root>>(m.attr("GC_MakePlane"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeSegment , shared_ptr<GC_MakeSegment> , GC_Root>>(m.attr("GC_MakeSegment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeTrimmedCone , shared_ptr<GC_MakeTrimmedCone> , GC_Root>>(m.attr("GC_MakeTrimmedCone"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GC_MakeTrimmedCylinder , shared_ptr<GC_MakeTrimmedCylinder> , GC_Root>>(m.attr("GC_MakeTrimmedCylinder"))
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
// ./opencascade/GC_Root.hxx
// ./opencascade/GC_MakeTrimmedCone.hxx
// ./opencascade/GC_MakePlane.hxx
// ./opencascade/GC_MakeSegment.hxx
// ./opencascade/GC_MakeEllipse.hxx
// ./opencascade/GC_MakeConicalSurface.hxx
// ./opencascade/GC_MakeScale.hxx
// ./opencascade/GC_MakeLine.hxx
// ./opencascade/GC_MakeCircle.hxx
// ./opencascade/GC_MakeArcOfParabola.hxx
// ./opencascade/GC_MakeCylindricalSurface.hxx
// ./opencascade/GC_MakeArcOfHyperbola.hxx
// ./opencascade/GC_MakeArcOfEllipse.hxx
// ./opencascade/GC_MakeHyperbola.hxx
// ./opencascade/GC_MakeTrimmedCylinder.hxx
// ./opencascade/GC_MakeRotation.hxx
// ./opencascade/GC_MakeArcOfCircle.hxx
// ./opencascade/GC_MakeTranslation.hxx
// ./opencascade/GC_MakeMirror.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

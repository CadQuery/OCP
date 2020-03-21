
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
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Ax1.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <StdFail_NotDone.hxx>
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
#include <gp_Circ.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>

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


    static_cast<py::class_<gce_MakeMirror , shared_ptr<gce_MakeMirror> >>(m.attr("gce_MakeMirror"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeMirror2d , shared_ptr<gce_MakeMirror2d> >>(m.attr("gce_MakeMirror2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeRotation , shared_ptr<gce_MakeRotation> >>(m.attr("gce_MakeRotation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeRotation2d , shared_ptr<gce_MakeRotation2d> >>(m.attr("gce_MakeRotation2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeScale , shared_ptr<gce_MakeScale> >>(m.attr("gce_MakeScale"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeScale2d , shared_ptr<gce_MakeScale2d> >>(m.attr("gce_MakeScale2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeTranslation , shared_ptr<gce_MakeTranslation> >>(m.attr("gce_MakeTranslation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeTranslation2d , shared_ptr<gce_MakeTranslation2d> >>(m.attr("gce_MakeTranslation2d"))
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
    register_default_constructor<gce_Root , shared_ptr<gce_Root>>(m,"gce_Root");

    static_cast<py::class_<gce_Root , shared_ptr<gce_Root> >>(m.attr("gce_Root"))
    // constructors
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeCirc , shared_ptr<gce_MakeCirc> , gce_Root>>(m.attr("gce_MakeCirc"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeCirc2d , shared_ptr<gce_MakeCirc2d> , gce_Root>>(m.attr("gce_MakeCirc2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeCone , shared_ptr<gce_MakeCone> , gce_Root>>(m.attr("gce_MakeCone"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeCylinder , shared_ptr<gce_MakeCylinder> , gce_Root>>(m.attr("gce_MakeCylinder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeDir , shared_ptr<gce_MakeDir> , gce_Root>>(m.attr("gce_MakeDir"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeDir2d , shared_ptr<gce_MakeDir2d> , gce_Root>>(m.attr("gce_MakeDir2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeElips , shared_ptr<gce_MakeElips> , gce_Root>>(m.attr("gce_MakeElips"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeElips2d , shared_ptr<gce_MakeElips2d> , gce_Root>>(m.attr("gce_MakeElips2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeHypr , shared_ptr<gce_MakeHypr> , gce_Root>>(m.attr("gce_MakeHypr"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeHypr2d , shared_ptr<gce_MakeHypr2d> , gce_Root>>(m.attr("gce_MakeHypr2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeLin , shared_ptr<gce_MakeLin> , gce_Root>>(m.attr("gce_MakeLin"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeLin2d , shared_ptr<gce_MakeLin2d> , gce_Root>>(m.attr("gce_MakeLin2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeParab , shared_ptr<gce_MakeParab> , gce_Root>>(m.attr("gce_MakeParab"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakeParab2d , shared_ptr<gce_MakeParab2d> , gce_Root>>(m.attr("gce_MakeParab2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gce_MakePln , shared_ptr<gce_MakePln> , gce_Root>>(m.attr("gce_MakePln"))
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
// ./opencascade/gce_Root.hxx
// ./opencascade/gce_MakeHypr2d.hxx
// ./opencascade/gce_MakeCirc2d.hxx
// ./opencascade/gce_MakeLin2d.hxx
// ./opencascade/gce_MakeLin.hxx
// ./opencascade/gce_MakeMirror2d.hxx
// ./opencascade/gce_MakeDir.hxx
// ./opencascade/gce_MakeTranslation2d.hxx
// ./opencascade/gce_ErrorType.hxx
// ./opencascade/gce_MakeDir2d.hxx
// ./opencascade/gce_MakeRotation.hxx
// ./opencascade/gce_MakeTranslation.hxx
// ./opencascade/gce_MakeScale.hxx
// ./opencascade/gce_MakeRotation2d.hxx
// ./opencascade/gce_MakeCone.hxx
// ./opencascade/gce_MakeParab2d.hxx
// ./opencascade/gce_MakeHypr.hxx
// ./opencascade/gce_MakeScale2d.hxx
// ./opencascade/gce_MakeElips2d.hxx
// ./opencascade/gce_MakeParab.hxx
// ./opencascade/gce_MakePln.hxx
// ./opencascade/gce_MakeMirror.hxx
// ./opencascade/gce_MakeElips.hxx
// ./opencascade/gce_MakeCylinder.hxx
// ./opencascade/gce_MakeCirc.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

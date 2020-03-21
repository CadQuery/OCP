
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ2d.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <GccInt_Bisec.hxx>
#include <Standard_ConstructionError.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Standard_NegativeValue.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <StdFail_NotDone.hxx>
#include <GccInt_Bisec.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <GccInt_Bisec.hxx>
#include <Standard_NegativeValue.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <StdFail_NotDone.hxx>
#include <GccInt_Bisec.hxx>

// module includes
#include <GccAna_Circ2d2TanOn.hxx>
#include <GccAna_Circ2d2TanRad.hxx>
#include <GccAna_Circ2d3Tan.hxx>
#include <GccAna_Circ2dBisec.hxx>
#include <GccAna_Circ2dTanCen.hxx>
#include <GccAna_Circ2dTanOnRad.hxx>
#include <GccAna_CircLin2dBisec.hxx>
#include <GccAna_CircPnt2dBisec.hxx>
#include <GccAna_Lin2d2Tan.hxx>
#include <GccAna_Lin2dBisec.hxx>
#include <GccAna_Lin2dTanObl.hxx>
#include <GccAna_Lin2dTanPar.hxx>
#include <GccAna_Lin2dTanPer.hxx>
#include <GccAna_LinPnt2dBisec.hxx>
#include <GccAna_NoSolution.hxx>
#include <GccAna_Pnt2dBisec.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GccAna(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GccAna"));


//Python trampoline classes

// classes


    static_cast<py::class_<GccAna_Circ2d2TanOn , shared_ptr<GccAna_Circ2d2TanOn> >>(m.attr("GccAna_Circ2d2TanOn"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_Circ2d2TanRad , shared_ptr<GccAna_Circ2d2TanRad> >>(m.attr("GccAna_Circ2d2TanRad"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_Circ2d3Tan , shared_ptr<GccAna_Circ2d3Tan> >>(m.attr("GccAna_Circ2d3Tan"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_Circ2dBisec , shared_ptr<GccAna_Circ2dBisec> >>(m.attr("GccAna_Circ2dBisec"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_Circ2dTanCen , shared_ptr<GccAna_Circ2dTanCen> >>(m.attr("GccAna_Circ2dTanCen"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_Circ2dTanOnRad , shared_ptr<GccAna_Circ2dTanOnRad> >>(m.attr("GccAna_Circ2dTanOnRad"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_CircLin2dBisec , shared_ptr<GccAna_CircLin2dBisec> >>(m.attr("GccAna_CircLin2dBisec"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_CircPnt2dBisec , shared_ptr<GccAna_CircPnt2dBisec> >>(m.attr("GccAna_CircPnt2dBisec"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_Lin2d2Tan , shared_ptr<GccAna_Lin2d2Tan> >>(m.attr("GccAna_Lin2d2Tan"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_Lin2dBisec , shared_ptr<GccAna_Lin2dBisec> >>(m.attr("GccAna_Lin2dBisec"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_Lin2dTanObl , shared_ptr<GccAna_Lin2dTanObl> >>(m.attr("GccAna_Lin2dTanObl"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_Lin2dTanPar , shared_ptr<GccAna_Lin2dTanPar> >>(m.attr("GccAna_Lin2dTanPar"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_Lin2dTanPer , shared_ptr<GccAna_Lin2dTanPer> >>(m.attr("GccAna_Lin2dTanPer"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_LinPnt2dBisec , shared_ptr<GccAna_LinPnt2dBisec> >>(m.attr("GccAna_LinPnt2dBisec"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccAna_Pnt2dBisec , shared_ptr<GccAna_Pnt2dBisec> >>(m.attr("GccAna_Pnt2dBisec"))
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
// ./opencascade/GccAna_Lin2dTanPer.hxx
// ./opencascade/GccAna_Circ2d2TanOn.hxx
// ./opencascade/GccAna_NoSolution.hxx
// ./opencascade/GccAna_Lin2dTanPar.hxx
// ./opencascade/GccAna_Circ2d3Tan.hxx
// ./opencascade/GccAna_LinPnt2dBisec.hxx
// ./opencascade/GccAna_Circ2dTanOnRad.hxx
// ./opencascade/GccAna_CircLin2dBisec.hxx
// ./opencascade/GccAna_Lin2dBisec.hxx
// ./opencascade/GccAna_Lin2d2Tan.hxx
// ./opencascade/GccAna_Pnt2dBisec.hxx
// ./opencascade/GccAna_Circ2dBisec.hxx
// ./opencascade/GccAna_Circ2dTanCen.hxx
// ./opencascade/GccAna_Lin2dTanObl.hxx
// ./opencascade/GccAna_Circ2d2TanRad.hxx
// ./opencascade/GccAna_CircPnt2dBisec.hxx

// Additional functions

// operators

// register typdefs


// exceptions
register_occ_exception<GccAna_NoSolution>(m, "GccAna_NoSolution");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IntCurve_PConic.hxx>
#include <IntCurve_PConicTool.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <IntCurve_PConic.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <IntCurve_PConic.hxx>
#include <gp_Pnt2d.hxx>
#include <IntCurve_IConicTool.hxx>
#include <IntCurve_PConic.hxx>
#include <IntCurve_PConicTool.hxx>
#include <IntCurve_ProjectOnPConicTool.hxx>
#include <IntCurve_MyImpParToolOfIntImpConicParConic.hxx>
#include <IntRes2d_Domain.hxx>
#include <gp_Lin2d.hxx>
#include <IntRes2d_Domain.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Lin2d.hxx>

// module includes
#include <IntCurve_IConicTool.hxx>
#include <IntCurve_IntConicConic.hxx>
#include <IntCurve_IntConicConic_Tool.hxx>
#include <IntCurve_IntImpConicParConic.hxx>
#include <IntCurve_MyImpParToolOfIntImpConicParConic.hxx>
#include <IntCurve_PConic.hxx>
#include <IntCurve_PConicTool.hxx>
#include <IntCurve_ProjectOnPConicTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntCurve(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntCurve"));


//Python trampoline classes

// classes


    static_cast<py::class_<IntCurve_IConicTool , shared_ptr<IntCurve_IConicTool> >>(m.attr("IntCurve_IConicTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurve_IntConicConic , shared_ptr<IntCurve_IntConicConic> , IntRes2d_Intersection>>(m.attr("IntCurve_IntConicConic"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Lin2d &,const IntRes2d_Domain &,const gp_Lin2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("L1"),  py::arg("D1"),  py::arg("L2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Lin2d &,const IntRes2d_Domain &,const gp_Circ2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("DL"),  py::arg("C"),  py::arg("DC"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Lin2d &,const IntRes2d_Domain &,const gp_Elips2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("DL"),  py::arg("E"),  py::arg("DE"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Lin2d &,const IntRes2d_Domain &,const gp_Parab2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("DL"),  py::arg("P"),  py::arg("DP"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Lin2d &,const IntRes2d_Domain &,const gp_Hypr2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("DL"),  py::arg("H"),  py::arg("DH"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Circ2d &,const IntRes2d_Domain &,const gp_Circ2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("D1"),  py::arg("C2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Circ2d &,const IntRes2d_Domain &,const gp_Elips2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("DC"),  py::arg("E"),  py::arg("DE"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Circ2d &,const IntRes2d_Domain &,const gp_Parab2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("DC"),  py::arg("P"),  py::arg("DP"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Circ2d &,const IntRes2d_Domain &,const gp_Hypr2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("DC"),  py::arg("H"),  py::arg("DH"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Elips2d &,const IntRes2d_Domain &,const gp_Elips2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("E1"),  py::arg("D1"),  py::arg("E2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Elips2d &,const IntRes2d_Domain &,const gp_Parab2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("E"),  py::arg("DE"),  py::arg("P"),  py::arg("DP"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Elips2d &,const IntRes2d_Domain &,const gp_Hypr2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("E"),  py::arg("DE"),  py::arg("H"),  py::arg("DH"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Parab2d &,const IntRes2d_Domain &,const gp_Parab2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("P1"),  py::arg("D1"),  py::arg("P2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Parab2d &,const IntRes2d_Domain &,const gp_Hypr2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("DP"),  py::arg("H"),  py::arg("DH"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Hypr2d &,const IntRes2d_Domain &,const gp_Hypr2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("H1"),  py::arg("D1"),  py::arg("H2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurve_IntImpConicParConic , shared_ptr<IntCurve_IntImpConicParConic> , IntRes2d_Intersection>>(m.attr("IntCurve_IntImpConicParConic"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurve_MyImpParToolOfIntImpConicParConic , shared_ptr<IntCurve_MyImpParToolOfIntImpConicParConic> , math_FunctionWithDerivative>>(m.attr("IntCurve_MyImpParToolOfIntImpConicParConic"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (IntCurve_MyImpParToolOfIntImpConicParConic::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (IntCurve_MyImpParToolOfIntImpConicParConic::*)( const Standard_Real , Standard_Real & ) >(&IntCurve_MyImpParToolOfIntImpConicParConic::Value),
             R"#(Computes the value of the signed distance between the implicit curve and the point at parameter Param on the parametrised curve.)#"  , py::arg("Param"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (IntCurve_MyImpParToolOfIntImpConicParConic::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (IntCurve_MyImpParToolOfIntImpConicParConic::*)( const Standard_Real , Standard_Real & ) >(&IntCurve_MyImpParToolOfIntImpConicParConic::Derivative),
             R"#(Computes the derivative of the previous function at parameter Param.)#"  , py::arg("Param"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (IntCurve_MyImpParToolOfIntImpConicParConic::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (IntCurve_MyImpParToolOfIntImpConicParConic::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&IntCurve_MyImpParToolOfIntImpConicParConic::Values),
             R"#(Computes the value and the derivative of the function.)#"  , py::arg("Param"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurve_PConic , shared_ptr<IntCurve_PConic> >>(m.attr("IntCurve_PConic"))
    // constructors
    // custom constructors
    // methods
        .def("Accuracy",
             (Standard_Integer (IntCurve_PConic::*)() const) static_cast<Standard_Integer (IntCurve_PConic::*)() const>(&IntCurve_PConic::Accuracy),
             R"#(None)#" )
        .def("EpsX",
             (Standard_Real (IntCurve_PConic::*)() const) static_cast<Standard_Real (IntCurve_PConic::*)() const>(&IntCurve_PConic::EpsX),
             R"#(None)#" )
        .def("TypeCurve",
             (GeomAbs_CurveType (IntCurve_PConic::*)() const) static_cast<GeomAbs_CurveType (IntCurve_PConic::*)() const>(&IntCurve_PConic::TypeCurve),
             R"#(The Conics are manipulated as objects which only depend on three parameters : Axis and two Real from Standards. Type Curve is used to select the correct Conic.)#" )
        .def("Axis2",
             (const gp_Ax22d & (IntCurve_PConic::*)() const) static_cast<const gp_Ax22d & (IntCurve_PConic::*)() const>(&IntCurve_PConic::Axis2),
             R"#(None)#" )
        .def("Param1",
             (Standard_Real (IntCurve_PConic::*)() const) static_cast<Standard_Real (IntCurve_PConic::*)() const>(&IntCurve_PConic::Param1),
             R"#(None)#" )
        .def("Param2",
             (Standard_Real (IntCurve_PConic::*)() const) static_cast<Standard_Real (IntCurve_PConic::*)() const>(&IntCurve_PConic::Param2),
             R"#(None)#" )
        .def("EpsX",
             (Standard_Real (IntCurve_PConic::*)() const) static_cast<Standard_Real (IntCurve_PConic::*)() const>(&IntCurve_PConic::EpsX),
             R"#(None)#" )
        .def("Param1",
             (Standard_Real (IntCurve_PConic::*)() const) static_cast<Standard_Real (IntCurve_PConic::*)() const>(&IntCurve_PConic::Param1),
             R"#(None)#" )
        .def("Param2",
             (Standard_Real (IntCurve_PConic::*)() const) static_cast<Standard_Real (IntCurve_PConic::*)() const>(&IntCurve_PConic::Param2),
             R"#(None)#" )
        .def("Axis2",
             (const gp_Ax22d & (IntCurve_PConic::*)() const) static_cast<const gp_Ax22d & (IntCurve_PConic::*)() const>(&IntCurve_PConic::Axis2),
             R"#(None)#" )
        .def("TypeCurve",
             (GeomAbs_CurveType (IntCurve_PConic::*)() const) static_cast<GeomAbs_CurveType (IntCurve_PConic::*)() const>(&IntCurve_PConic::TypeCurve),
             R"#(The Conics are manipulated as objects which only depend on three parameters : Axis and two Real from Standards. Type Curve is used to select the correct Conic.)#" )
        .def("Accuracy",
             (Standard_Integer (IntCurve_PConic::*)() const) static_cast<Standard_Integer (IntCurve_PConic::*)() const>(&IntCurve_PConic::Accuracy),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntCurve_PConicTool , shared_ptr<IntCurve_PConicTool>>(m,"IntCurve_PConicTool");

    static_cast<py::class_<IntCurve_PConicTool , shared_ptr<IntCurve_PConicTool> >>(m.attr("IntCurve_PConicTool"))
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
    register_default_constructor<IntCurve_ProjectOnPConicTool , shared_ptr<IntCurve_ProjectOnPConicTool>>(m,"IntCurve_ProjectOnPConicTool");

    static_cast<py::class_<IntCurve_ProjectOnPConicTool , shared_ptr<IntCurve_ProjectOnPConicTool> >>(m.attr("IntCurve_ProjectOnPConicTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Interval , shared_ptr<Interval> >>(m.attr("Interval"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PeriodicInterval , shared_ptr<PeriodicInterval> >>(m.attr("PeriodicInterval"))
    // constructors
        .def(py::init< const IntRes2d_Domain & >()  , py::arg("Domain") )
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("a"),  py::arg("b") )
    // custom constructors
    // methods
        .def("SetNull",
             (void (PeriodicInterval::*)() ) static_cast<void (PeriodicInterval::*)() >(&PeriodicInterval::SetNull),
             R"#(None)#" )
        .def("IsNull",
             (Standard_Boolean (PeriodicInterval::*)() ) static_cast<Standard_Boolean (PeriodicInterval::*)() >(&PeriodicInterval::IsNull),
             R"#(None)#" )
        .def("Complement",
             (void (PeriodicInterval::*)() ) static_cast<void (PeriodicInterval::*)() >(&PeriodicInterval::Complement),
             R"#(None)#" )
        .def("Length",
             (Standard_Real (PeriodicInterval::*)() ) static_cast<Standard_Real (PeriodicInterval::*)() >(&PeriodicInterval::Length),
             R"#(None)#" )
        .def("SetValues",
             (void (PeriodicInterval::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (PeriodicInterval::*)( const Standard_Real , const Standard_Real ) >(&PeriodicInterval::SetValues),
             R"#(None)#"  , py::arg("a"),  py::arg("b"))
        .def("Normalize",
             (void (PeriodicInterval::*)() ) static_cast<void (PeriodicInterval::*)() >(&PeriodicInterval::Normalize),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IntCurve_MyImpParToolOfIntImpConicParConic.hxx
// ./opencascade/IntCurve_IConicTool.hxx
// ./opencascade/IntCurve_PConicTool.hxx
// ./opencascade/IntCurve_ProjectOnPConicTool.hxx
// ./opencascade/IntCurve_IntConicConic_Tool.hxx
// ./opencascade/IntCurve_IntImpConicParConic.hxx
// ./opencascade/IntCurve_IntConicConic.hxx
// ./opencascade/IntCurve_PConic.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

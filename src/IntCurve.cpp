
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Lin2d.hxx>
#include <IntRes2d_Domain.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <IntCurve_PConic.hxx>
#include <gp_Pnt2d.hxx>
#include <IntCurve_PConic.hxx>
#include <IntCurve_PConicTool.hxx>
#include <IntCurve_PConic.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <IntCurve_IConicTool.hxx>
#include <IntCurve_PConic.hxx>
#include <IntCurve_PConicTool.hxx>
#include <IntCurve_ProjectOnPConicTool.hxx>
#include <IntCurve_MyImpParToolOfIntImpConicParConic.hxx>
#include <IntRes2d_Domain.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
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


    static_cast<py::class_<IntCurve_IntConicConic ,std::unique_ptr<IntCurve_IntConicConic>  , IntRes2d_Intersection >>(m.attr("IntCurve_IntConicConic"))
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
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Lin2d & ,  const IntRes2d_Domain & ,  const gp_Lin2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Lin2d & ,  const IntRes2d_Domain & ,  const gp_Lin2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between 2 lines from gp.)#"  , py::arg("L1"),  py::arg("D1"),  py::arg("L2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Lin2d & ,  const IntRes2d_Domain & ,  const gp_Circ2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Lin2d & ,  const IntRes2d_Domain & ,  const gp_Circ2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between a line and a circle. The exception ConstructionError is raised if the method IsClosed of the domain of the circle returns False.)#"  , py::arg("L"),  py::arg("DL"),  py::arg("C"),  py::arg("DC"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Lin2d & ,  const IntRes2d_Domain & ,  const gp_Elips2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Lin2d & ,  const IntRes2d_Domain & ,  const gp_Elips2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between a line and an ellipse. The exception ConstructionError is raised if the method IsClosed of the domain of the ellipse returns False.)#"  , py::arg("L"),  py::arg("DL"),  py::arg("E"),  py::arg("DE"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Lin2d & ,  const IntRes2d_Domain & ,  const gp_Parab2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Lin2d & ,  const IntRes2d_Domain & ,  const gp_Parab2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between a line and a parabola from gp.)#"  , py::arg("L"),  py::arg("DL"),  py::arg("P"),  py::arg("DP"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Lin2d & ,  const IntRes2d_Domain & ,  const gp_Hypr2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Lin2d & ,  const IntRes2d_Domain & ,  const gp_Hypr2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between a line and an hyperbola.)#"  , py::arg("L"),  py::arg("DL"),  py::arg("H"),  py::arg("DH"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Circ2d & ,  const IntRes2d_Domain & ,  const gp_Circ2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Circ2d & ,  const IntRes2d_Domain & ,  const gp_Circ2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between 2 circles from gp. The exception ConstructionError is raised if the method IsClosed of the domain of one of the circle returns False.)#"  , py::arg("C1"),  py::arg("D1"),  py::arg("C2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Circ2d & ,  const IntRes2d_Domain & ,  const gp_Elips2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Circ2d & ,  const IntRes2d_Domain & ,  const gp_Elips2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between a circle and an ellipse. The exception ConstructionError is raised if the method IsClosed of one the domain returns False.)#"  , py::arg("C"),  py::arg("DC"),  py::arg("E"),  py::arg("DE"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Circ2d & ,  const IntRes2d_Domain & ,  const gp_Parab2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Circ2d & ,  const IntRes2d_Domain & ,  const gp_Parab2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between a circle and a parabola. The exception ConstructionError is raised if the method IsClosed of the domain of the circle returns False.)#"  , py::arg("C"),  py::arg("DC"),  py::arg("P"),  py::arg("DP"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Circ2d & ,  const IntRes2d_Domain & ,  const gp_Hypr2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Circ2d & ,  const IntRes2d_Domain & ,  const gp_Hypr2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between a circle and an hyperbola. The exception ConstructionError is raised if the method IsClosed of the domain of the circle returns False.)#"  , py::arg("C"),  py::arg("DC"),  py::arg("H"),  py::arg("DH"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Elips2d & ,  const IntRes2d_Domain & ,  const gp_Elips2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Elips2d & ,  const IntRes2d_Domain & ,  const gp_Elips2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between 2 ellipses. The exception ConstructionError is raised if the method IsClosed of one of the domain returns False.)#"  , py::arg("E1"),  py::arg("D1"),  py::arg("E2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Elips2d & ,  const IntRes2d_Domain & ,  const gp_Parab2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Elips2d & ,  const IntRes2d_Domain & ,  const gp_Parab2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between an ellipse and a parabola. The exception ConstructionError is raised if the method IsClosed of the domain of the ellipse returns False.)#"  , py::arg("E"),  py::arg("DE"),  py::arg("P"),  py::arg("DP"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Elips2d & ,  const IntRes2d_Domain & ,  const gp_Hypr2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Elips2d & ,  const IntRes2d_Domain & ,  const gp_Hypr2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between an ellipse and an hyperbola. The exception ConstructionError is raised if the method IsClosed of the domain of the ellipse returns False.)#"  , py::arg("E"),  py::arg("DE"),  py::arg("H"),  py::arg("DH"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Parab2d & ,  const IntRes2d_Domain & ,  const gp_Parab2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Parab2d & ,  const IntRes2d_Domain & ,  const gp_Parab2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between 2 parabolas.)#"  , py::arg("P1"),  py::arg("D1"),  py::arg("P2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Parab2d & ,  const IntRes2d_Domain & ,  const gp_Hypr2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Parab2d & ,  const IntRes2d_Domain & ,  const gp_Hypr2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between a parabola and an hyperbola.)#"  , py::arg("P"),  py::arg("DP"),  py::arg("H"),  py::arg("DH"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (IntCurve_IntConicConic::*)( const gp_Hypr2d & ,  const IntRes2d_Domain & ,  const gp_Hypr2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntConicConic::*)( const gp_Hypr2d & ,  const IntRes2d_Domain & ,  const gp_Hypr2d & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntConicConic::Perform),
             R"#(Intersection between 2 hyperbolas.)#"  , py::arg("H1"),  py::arg("D1"),  py::arg("H2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
;


    static_cast<py::class_<IntCurve_MyImpParToolOfIntImpConicParConic ,std::unique_ptr<IntCurve_MyImpParToolOfIntImpConicParConic>  , math_FunctionWithDerivative >>(m.attr("IntCurve_MyImpParToolOfIntImpConicParConic"))
        .def(py::init< const IntCurve_IConicTool &,const IntCurve_PConic & >()  , py::arg("IT"),  py::arg("PC") )
        .def("Value",
             (Standard_Boolean (IntCurve_MyImpParToolOfIntImpConicParConic::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (IntCurve_MyImpParToolOfIntImpConicParConic::*)( const Standard_Real ,  Standard_Real &  ) >(&IntCurve_MyImpParToolOfIntImpConicParConic::Value),
             R"#(Computes the value of the signed distance between the implicit curve and the point at parameter Param on the parametrised curve.)#"  , py::arg("Param"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (IntCurve_MyImpParToolOfIntImpConicParConic::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (IntCurve_MyImpParToolOfIntImpConicParConic::*)( const Standard_Real ,  Standard_Real &  ) >(&IntCurve_MyImpParToolOfIntImpConicParConic::Derivative),
             R"#(Computes the derivative of the previous function at parameter Param.)#"  , py::arg("Param"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (IntCurve_MyImpParToolOfIntImpConicParConic::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (IntCurve_MyImpParToolOfIntImpConicParConic::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&IntCurve_MyImpParToolOfIntImpConicParConic::Values),
             R"#(Computes the value and the derivative of the function.)#"  , py::arg("Param"),  py::arg("F"),  py::arg("D"))
;


    static_cast<py::class_<IntCurve_IntImpConicParConic ,std::unique_ptr<IntCurve_IntImpConicParConic>  , IntRes2d_Intersection >>(m.attr("IntCurve_IntImpConicParConic"))
        .def(py::init<  >()  )
        .def(py::init< const IntCurve_IConicTool &,const IntRes2d_Domain &,const IntCurve_PConic &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("ITool"),  py::arg("Dom1"),  py::arg("PCurve"),  py::arg("Dom2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def("Perform",
             (void (IntCurve_IntImpConicParConic::*)( const IntCurve_IConicTool & ,  const IntRes2d_Domain & ,  const IntCurve_PConic & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntCurve_IntImpConicParConic::*)( const IntCurve_IConicTool & ,  const IntRes2d_Domain & ,  const IntCurve_PConic & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_IntImpConicParConic::Perform),
             R"#(Intersection between an implicit curve and a parametrised curve. The exception ConstructionError is raised if the domain of the parametrised curve does not verify HasFirstPoint and HasLastPoint return True.)#"  , py::arg("ITool"),  py::arg("Dom1"),  py::arg("PCurve"),  py::arg("Dom2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("FindU",
             (Standard_Real (IntCurve_IntImpConicParConic::*)( const Standard_Real ,  gp_Pnt2d & ,  const IntCurve_PConic & ,  const IntCurve_IConicTool &  ) const) static_cast<Standard_Real (IntCurve_IntImpConicParConic::*)( const Standard_Real ,  gp_Pnt2d & ,  const IntCurve_PConic & ,  const IntCurve_IConicTool &  ) const>(&IntCurve_IntImpConicParConic::FindU),
             R"#(None)#"  , py::arg("parameter"),  py::arg("point"),  py::arg("TheParCurev"),  py::arg("TheImpTool"))
        .def("FindV",
             (Standard_Real (IntCurve_IntImpConicParConic::*)( const Standard_Real ,  gp_Pnt2d & ,  const IntCurve_IConicTool & ,  const IntCurve_PConic & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Real (IntCurve_IntImpConicParConic::*)( const Standard_Real ,  gp_Pnt2d & ,  const IntCurve_IConicTool & ,  const IntCurve_PConic & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&IntCurve_IntImpConicParConic::FindV),
             R"#(None)#"  , py::arg("parameter"),  py::arg("point"),  py::arg("TheImpTool"),  py::arg("ParCurve"),  py::arg("TheParCurveDomain"),  py::arg("V0"),  py::arg("V1"),  py::arg("Tolerance"))
        .def("And_Domaine_Objet1_Intersections",
             (void (IntCurve_IntImpConicParConic::*)( const IntCurve_IConicTool & ,  const IntCurve_PConic & ,  const IntRes2d_Domain & ,  const IntRes2d_Domain & ,  Standard_Integer & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  const Standard_Real  ) const) static_cast<void (IntCurve_IntImpConicParConic::*)( const IntCurve_IConicTool & ,  const IntCurve_PConic & ,  const IntRes2d_Domain & ,  const IntRes2d_Domain & ,  Standard_Integer & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  const Standard_Real  ) const>(&IntCurve_IntImpConicParConic::And_Domaine_Objet1_Intersections),
             R"#(None)#"  , py::arg("TheImpTool"),  py::arg("TheParCurve"),  py::arg("TheImpCurveDomain"),  py::arg("TheParCurveDomain"),  py::arg("NbResultats"),  py::arg("Inter2_And_Domain2"),  py::arg("Inter1"),  py::arg("Resultat1"),  py::arg("Resultat2"),  py::arg("EpsNul"))
;


    static_cast<py::class_<IntCurve_PConic ,std::unique_ptr<IntCurve_PConic>  >>(m.attr("IntCurve_PConic"))
        .def(py::init< const IntCurve_PConic & >()  , py::arg("PC") )
        .def(py::init< const gp_Elips2d & >()  , py::arg("E") )
        .def(py::init< const gp_Circ2d & >()  , py::arg("C") )
        .def(py::init< const gp_Parab2d & >()  , py::arg("P") )
        .def(py::init< const gp_Hypr2d & >()  , py::arg("H") )
        .def(py::init< const gp_Lin2d & >()  , py::arg("L") )
        .def("SetEpsX",
             (void (IntCurve_PConic::*)( const Standard_Real  ) ) static_cast<void (IntCurve_PConic::*)( const Standard_Real  ) >(&IntCurve_PConic::SetEpsX),
             R"#(EpsX is a internal tolerance used in math algorithms, usually about 1e-10 (See FunctionAllRoots for more details))#"  , py::arg("EpsDist"))
        .def("SetAccuracy",
             (void (IntCurve_PConic::*)( const Standard_Integer  ) ) static_cast<void (IntCurve_PConic::*)( const Standard_Integer  ) >(&IntCurve_PConic::SetAccuracy),
             R"#(Accuracy is the number of samples used to approximate the parametric curve on its domain.)#"  , py::arg("Nb"))
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
;

    register_default_constructor<IntCurve_ProjectOnPConicTool ,std::unique_ptr<IntCurve_ProjectOnPConicTool>>(m,"IntCurve_ProjectOnPConicTool");

    static_cast<py::class_<IntCurve_ProjectOnPConicTool ,std::unique_ptr<IntCurve_ProjectOnPConicTool>  >>(m.attr("IntCurve_ProjectOnPConicTool"))
        .def_static("FindParameter_s",
                    (Standard_Real (*)( const IntCurve_PConic & ,  const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const IntCurve_PConic & ,  const gp_Pnt2d & ,  const Standard_Real  ) >(&IntCurve_ProjectOnPConicTool::FindParameter),
                    R"#(Returns the parameter V of the point on the parametric curve corresponding to the Point Pnt. The Correspondance between Pnt and the point P(V) on the parametric curve must be coherent with the way of determination of the signed distance between a point and the implicit curve. Tol is the tolerance on the distance between a point and the parametrised curve. In that case, no bounds are given. The research of the rigth parameter has to be made on the natural parametric domain of the curve.)#"  , py::arg("C"),  py::arg("Pnt"),  py::arg("Tol"))
        .def_static("FindParameter_s",
                    (Standard_Real (*)( const IntCurve_PConic & ,  const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const IntCurve_PConic & ,  const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_ProjectOnPConicTool::FindParameter),
                    R"#(Returns the parameter V of the point on the parametric curve corresponding to the Point Pnt. The Correspondance between Pnt and the point P(V) on the parametric curve must be coherent with the way of determination of the signed distance between a point and the implicit curve. Tol is the tolerance on the distance between a point and the parametrised curve. LowParameter and HighParameter give the boundaries of the interval in wich the parameter certainly lies. These parameters are given to implement a more efficient algoritm. So, it is not necessary to check that the returned value verifies LowParameter <= Value <= HighParameter.)#"  , py::arg("C"),  py::arg("Pnt"),  py::arg("LowParameter"),  py::arg("HighParameter"),  py::arg("Tol"))
;

    register_default_constructor<IntCurve_PConicTool ,std::unique_ptr<IntCurve_PConicTool>>(m,"IntCurve_PConicTool");

    static_cast<py::class_<IntCurve_PConicTool ,std::unique_ptr<IntCurve_PConicTool>  >>(m.attr("IntCurve_PConicTool"))
        .def_static("EpsX_s",
                    (Standard_Real (*)( const IntCurve_PConic &  ) ) static_cast<Standard_Real (*)( const IntCurve_PConic &  ) >(&IntCurve_PConicTool::EpsX),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbSamples_s",
                    (Standard_Integer (*)( const IntCurve_PConic &  ) ) static_cast<Standard_Integer (*)( const IntCurve_PConic &  ) >(&IntCurve_PConicTool::NbSamples),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbSamples_s",
                    (Standard_Integer (*)( const IntCurve_PConic & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Integer (*)( const IntCurve_PConic & ,  const Standard_Real ,  const Standard_Real  ) >(&IntCurve_PConicTool::NbSamples),
                    R"#(None)#"  , py::arg("C"),  py::arg("U0"),  py::arg("U1"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const IntCurve_PConic & ,  const Standard_Real  ) ) static_cast<gp_Pnt2d (*)( const IntCurve_PConic & ,  const Standard_Real  ) >(&IntCurve_PConicTool::Value),
                    R"#(None)#"  , py::arg("C"),  py::arg("X"))
        .def_static("D1_s",
                    (void (*)( const IntCurve_PConic & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const IntCurve_PConic & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&IntCurve_PConicTool::D1),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("T"))
        .def_static("D2_s",
                    (void (*)( const IntCurve_PConic & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const IntCurve_PConic & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&IntCurve_PConicTool::D2),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("T"),  py::arg("N"))
;


    static_cast<py::class_<IntCurve_IConicTool ,std::unique_ptr<IntCurve_IConicTool>  >>(m.attr("IntCurve_IConicTool"))
        .def(py::init<  >()  )
        .def(py::init< const IntCurve_IConicTool & >()  , py::arg("IT") )
        .def(py::init< const gp_Elips2d & >()  , py::arg("E") )
        .def(py::init< const gp_Lin2d & >()  , py::arg("L") )
        .def(py::init< const gp_Circ2d & >()  , py::arg("C") )
        .def(py::init< const gp_Parab2d & >()  , py::arg("P") )
        .def(py::init< const gp_Hypr2d & >()  , py::arg("H") )
        .def("Value",
             (gp_Pnt2d (IntCurve_IConicTool::*)( const Standard_Real  ) const) static_cast<gp_Pnt2d (IntCurve_IConicTool::*)( const Standard_Real  ) const>(&IntCurve_IConicTool::Value),
             R"#(None)#"  , py::arg("X"))
        .def("D1",
             (void (IntCurve_IConicTool::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (IntCurve_IConicTool::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&IntCurve_IConicTool::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("T"))
        .def("D2",
             (void (IntCurve_IConicTool::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (IntCurve_IConicTool::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&IntCurve_IConicTool::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("T"),  py::arg("N"))
        .def("Distance",
             (Standard_Real (IntCurve_IConicTool::*)( const gp_Pnt2d &  ) const) static_cast<Standard_Real (IntCurve_IConicTool::*)( const gp_Pnt2d &  ) const>(&IntCurve_IConicTool::Distance),
             R"#(Computes the value of the signed distance between the point P and the implicit curve.)#"  , py::arg("P"))
        .def("GradDistance",
             (gp_Vec2d (IntCurve_IConicTool::*)( const gp_Pnt2d &  ) const) static_cast<gp_Vec2d (IntCurve_IConicTool::*)( const gp_Pnt2d &  ) const>(&IntCurve_IConicTool::GradDistance),
             R"#(Computes the Gradient of the Signed Distance between a point and the implicit curve, at the point P.)#"  , py::arg("P"))
        .def("FindParameter",
             (Standard_Real (IntCurve_IConicTool::*)( const gp_Pnt2d &  ) const) static_cast<Standard_Real (IntCurve_IConicTool::*)( const gp_Pnt2d &  ) const>(&IntCurve_IConicTool::FindParameter),
             R"#(Returns the parameter U of the point on the implicit curve corresponding to the point P. The correspondance between P and the point P(U) on the implicit curve must be coherent with the way of determination of the signed distance.)#"  , py::arg("P"))
;

// functions
// ./opencascade/IntCurve_IntConicConic.hxx
// ./opencascade/IntCurve_ProjectOnPConicTool.hxx
// ./opencascade/IntCurve_MyImpParToolOfIntImpConicParConic.hxx
// ./opencascade/IntCurve_IntConicConic_Tool.hxx
    m.def("Determine_Transition_LC", 
          (void (*)( const IntRes2d_Position ,  gp_Vec2d & ,  const gp_Vec2d & ,  IntRes2d_Transition & ,  const IntRes2d_Position ,  gp_Vec2d & ,  const gp_Vec2d & ,  IntRes2d_Transition & ,  const Standard_Real  ))  static_cast<void (*)( const IntRes2d_Position ,  gp_Vec2d & ,  const gp_Vec2d & ,  IntRes2d_Transition & ,  const IntRes2d_Position ,  gp_Vec2d & ,  const gp_Vec2d & ,  IntRes2d_Transition & ,  const Standard_Real  )>(&Determine_Transition_LC),
          R"#(None)#"  , py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""));
    m.def("NormalizeOnCircleDomain", 
          (Standard_Real (*)( const Standard_Real ,  const IntRes2d_Domain &  ))  static_cast<Standard_Real (*)( const Standard_Real ,  const IntRes2d_Domain &  )>(&NormalizeOnCircleDomain),
          R"#(None)#"  , py::arg("Param"),  py::arg("Domain"));
// ./opencascade/IntCurve_PConicTool.hxx
// ./opencascade/IntCurve_IntImpConicParConic.hxx
// ./opencascade/IntCurve_IConicTool.hxx
// ./opencascade/IntCurve_PConic.hxx

// operators

// register typdefs
// ./opencascade/IntCurve_IntConicConic.hxx
// ./opencascade/IntCurve_ProjectOnPConicTool.hxx
// ./opencascade/IntCurve_MyImpParToolOfIntImpConicParConic.hxx
// ./opencascade/IntCurve_IntConicConic_Tool.hxx
// ./opencascade/IntCurve_PConicTool.hxx
// ./opencascade/IntCurve_IntImpConicParConic.hxx
// ./opencascade/IntCurve_IConicTool.hxx
// ./opencascade/IntCurve_PConic.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom2d_Curve.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <Geom2dLProp_Curve2dTool.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <Geom2d_Curve.hxx>
#include <LProp_CurAndInf.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <Geom2dLProp_CLProps2d.hxx>
#include <Geom2dLProp_CurAndInf2d.hxx>
#include <Geom2dLProp_Curve2dTool.hxx>
#include <Geom2dLProp_FuncCurExt.hxx>
#include <Geom2dLProp_FuncCurNul.hxx>
#include <Geom2dLProp_NumericCurInf2d.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dLProp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dLProp"));


//Python trampoline classes

// classes


    static_cast<py::class_<Geom2dLProp_CLProps2d ,std::unique_ptr<Geom2dLProp_CLProps2d>  >>(m.attr("Geom2dLProp_CLProps2d"))
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const Standard_Integer,const Standard_Real >()  , py::arg("C"),  py::arg("N"),  py::arg("Resolution") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("C"),  py::arg("U"),  py::arg("N"),  py::arg("Resolution") )
        .def(py::init< const Standard_Integer,const Standard_Real >()  , py::arg("N"),  py::arg("Resolution") )
        .def("SetParameter",
             (void (Geom2dLProp_CLProps2d::*)( const Standard_Real  ) ) static_cast<void (Geom2dLProp_CLProps2d::*)( const Standard_Real  ) >(&Geom2dLProp_CLProps2d::SetParameter),
             R"#(Initializes the local properties of the curve for the parameter value <U>.)#"  , py::arg("U"))
        .def("SetCurve",
             (void (Geom2dLProp_CLProps2d::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (Geom2dLProp_CLProps2d::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&Geom2dLProp_CLProps2d::SetCurve),
             R"#(Initializes the local properties of the curve for the new curve.)#"  , py::arg("C"))
        .def("Value",
             (const gp_Pnt2d & (Geom2dLProp_CLProps2d::*)() const) static_cast<const gp_Pnt2d & (Geom2dLProp_CLProps2d::*)() const>(&Geom2dLProp_CLProps2d::Value),
             R"#(Returns the Point.)#" )
        .def("D1",
             (const gp_Vec2d & (Geom2dLProp_CLProps2d::*)() ) static_cast<const gp_Vec2d & (Geom2dLProp_CLProps2d::*)() >(&Geom2dLProp_CLProps2d::D1),
             R"#(Returns the first derivative. The derivative is computed if it has not been yet.)#" )
        .def("D2",
             (const gp_Vec2d & (Geom2dLProp_CLProps2d::*)() ) static_cast<const gp_Vec2d & (Geom2dLProp_CLProps2d::*)() >(&Geom2dLProp_CLProps2d::D2),
             R"#(Returns the second derivative. The derivative is computed if it has not been yet.)#" )
        .def("D3",
             (const gp_Vec2d & (Geom2dLProp_CLProps2d::*)() ) static_cast<const gp_Vec2d & (Geom2dLProp_CLProps2d::*)() >(&Geom2dLProp_CLProps2d::D3),
             R"#(Returns the third derivative. The derivative is computed if it has not been yet.)#" )
        .def("IsTangentDefined",
             (Standard_Boolean (Geom2dLProp_CLProps2d::*)() ) static_cast<Standard_Boolean (Geom2dLProp_CLProps2d::*)() >(&Geom2dLProp_CLProps2d::IsTangentDefined),
             R"#(Returns True if the tangent is defined. For example, the tangent is not defined if the three first derivatives are all null.)#" )
        .def("Tangent",
             (void (Geom2dLProp_CLProps2d::*)( gp_Dir2d &  ) ) static_cast<void (Geom2dLProp_CLProps2d::*)( gp_Dir2d &  ) >(&Geom2dLProp_CLProps2d::Tangent),
             R"#(output the tangent direction <D>)#"  , py::arg("D"))
        .def("Curvature",
             (Standard_Real (Geom2dLProp_CLProps2d::*)() ) static_cast<Standard_Real (Geom2dLProp_CLProps2d::*)() >(&Geom2dLProp_CLProps2d::Curvature),
             R"#(Returns the curvature.)#" )
        .def("Normal",
             (void (Geom2dLProp_CLProps2d::*)( gp_Dir2d &  ) ) static_cast<void (Geom2dLProp_CLProps2d::*)( gp_Dir2d &  ) >(&Geom2dLProp_CLProps2d::Normal),
             R"#(Returns the normal direction <N>.)#"  , py::arg("N"))
        .def("CentreOfCurvature",
             (void (Geom2dLProp_CLProps2d::*)( gp_Pnt2d &  ) ) static_cast<void (Geom2dLProp_CLProps2d::*)( gp_Pnt2d &  ) >(&Geom2dLProp_CLProps2d::CentreOfCurvature),
             R"#(Returns the centre of curvature <P>.)#"  , py::arg("P"))
;

    register_default_constructor<Geom2dLProp_Curve2dTool ,std::unique_ptr<Geom2dLProp_Curve2dTool>>(m,"Geom2dLProp_Curve2dTool");

    static_cast<py::class_<Geom2dLProp_Curve2dTool ,std::unique_ptr<Geom2dLProp_Curve2dTool>  >>(m.attr("Geom2dLProp_Curve2dTool"))
        .def_static("Value_s",
                    (void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  gp_Pnt2d &  ) ) static_cast<void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  gp_Pnt2d &  ) >(&Geom2dLProp_Curve2dTool::Value),
                    R"#(Computes the point <P> of parameter <U> on the curve <C>.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&Geom2dLProp_Curve2dTool::D1),
                    R"#(Computes the point <P> and first derivative <V1> of parameter <U> on the curve <C>.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def_static("D2_s",
                    (void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&Geom2dLProp_Curve2dTool::D2),
                    R"#(Computes the point <P>, the first derivative <V1> and second derivative <V2> of parameter <U> on the curve <C>.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&Geom2dLProp_Curve2dTool::D3),
                    R"#(Computes the point <P>, the first derivative <V1>, the second derivative <V2> and third derivative <V3> of parameter <U> on the curve <C>.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("Continuity_s",
                    (Standard_Integer (*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Geom2d_Curve> &  ) >(&Geom2dLProp_Curve2dTool::Continuity),
                    R"#(returns the order of continuity of the curve <C>. returns 1 : first derivative only is computable returns 2 : first and second derivative only are computable. returns 3 : first, second and third are computable.)#"  , py::arg("C"))
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Geom2d_Curve> &  ) >(&Geom2dLProp_Curve2dTool::FirstParameter),
                    R"#(returns the first parameter bound of the curve.)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Geom2d_Curve> &  ) >(&Geom2dLProp_Curve2dTool::LastParameter),
                    R"#(returns the last parameter bound of the curve. FirstParameter must be less than LastParameter.)#"  , py::arg("C"))
;


    static_cast<py::class_<Geom2dLProp_FuncCurNul ,std::unique_ptr<Geom2dLProp_FuncCurNul>  , math_FunctionWithDerivative >>(m.attr("Geom2dLProp_FuncCurNul"))
        .def(py::init< const opencascade::handle<Geom2d_Curve> & >()  , py::arg("C") )
        .def("Value",
             (Standard_Boolean (Geom2dLProp_FuncCurNul::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dLProp_FuncCurNul::*)( const Standard_Real ,  Standard_Real &  ) >(&Geom2dLProp_FuncCurNul::Value),
             R"#(Returns the value for the variable <X>.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Geom2dLProp_FuncCurNul::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dLProp_FuncCurNul::*)( const Standard_Real ,  Standard_Real &  ) >(&Geom2dLProp_FuncCurNul::Derivative),
             R"#(Returns the derivative for the variable <X>)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Geom2dLProp_FuncCurNul::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dLProp_FuncCurNul::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Geom2dLProp_FuncCurNul::Values),
             R"#(Returns the value of the function and the derivative for the variable <X>.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
;


    static_cast<py::class_<Geom2dLProp_CurAndInf2d ,std::unique_ptr<Geom2dLProp_CurAndInf2d>  , LProp_CurAndInf >>(m.attr("Geom2dLProp_CurAndInf2d"))
        .def(py::init<  >()  )
        .def("Perform",
             (void (Geom2dLProp_CurAndInf2d::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (Geom2dLProp_CurAndInf2d::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&Geom2dLProp_CurAndInf2d::Perform),
             R"#(For the curve C, Computes both the inflection points and the maximum and minimum curvatures.)#"  , py::arg("C"))
        .def("PerformCurExt",
             (void (Geom2dLProp_CurAndInf2d::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (Geom2dLProp_CurAndInf2d::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&Geom2dLProp_CurAndInf2d::PerformCurExt),
             R"#(For the curve C, Computes the locals extremas of curvature.)#"  , py::arg("C"))
        .def("PerformInf",
             (void (Geom2dLProp_CurAndInf2d::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (Geom2dLProp_CurAndInf2d::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&Geom2dLProp_CurAndInf2d::PerformInf),
             R"#(For the curve C, Computes the inflections. After computation, the following functions can be used: - IsDone to check if the computation was successful - NbPoints to obtain the number of computed particular points - Parameter to obtain the parameter on the curve for each particular point - Type to check if the point is an inflection point or an extremum of curvature of the curve C. Warning These functions can be used to analyze a series of curves, however it is necessary to clear the table of results between each computation.)#"  , py::arg("C"))
        .def("IsDone",
             (Standard_Boolean (Geom2dLProp_CurAndInf2d::*)() const) static_cast<Standard_Boolean (Geom2dLProp_CurAndInf2d::*)() const>(&Geom2dLProp_CurAndInf2d::IsDone),
             R"#(True if the solutions are found.)#" )
;


    static_cast<py::class_<Geom2dLProp_FuncCurExt ,std::unique_ptr<Geom2dLProp_FuncCurExt>  , math_FunctionWithDerivative >>(m.attr("Geom2dLProp_FuncCurExt"))
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const Standard_Real >()  , py::arg("C"),  py::arg("Tol") )
        .def("Value",
             (Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real ,  Standard_Real &  ) >(&Geom2dLProp_FuncCurExt::Value),
             R"#(Returns the value for the variable <X>.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real ,  Standard_Real &  ) >(&Geom2dLProp_FuncCurExt::Derivative),
             R"#(Returns the derivative for the variable <X>.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Geom2dLProp_FuncCurExt::Values),
             R"#(Returns the value of the function and the derivative for the variable <X>.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("IsMinKC",
             (Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real  ) const) static_cast<Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real  ) const>(&Geom2dLProp_FuncCurExt::IsMinKC),
             R"#(True if Param corresponds to a minus of the radius of curvature.)#"  , py::arg("Param"))
;


    static_cast<py::class_<Geom2dLProp_NumericCurInf2d ,std::unique_ptr<Geom2dLProp_NumericCurInf2d>  >>(m.attr("Geom2dLProp_NumericCurInf2d"))
        .def(py::init<  >()  )
        .def("PerformCurExt",
             (void (Geom2dLProp_NumericCurInf2d::*)( const opencascade::handle<Geom2d_Curve> & ,  LProp_CurAndInf &  ) ) static_cast<void (Geom2dLProp_NumericCurInf2d::*)( const opencascade::handle<Geom2d_Curve> & ,  LProp_CurAndInf &  ) >(&Geom2dLProp_NumericCurInf2d::PerformCurExt),
             R"#(Computes the locals extremas of curvature.)#"  , py::arg("C"),  py::arg("Result"))
        .def("PerformInf",
             (void (Geom2dLProp_NumericCurInf2d::*)( const opencascade::handle<Geom2d_Curve> & ,  LProp_CurAndInf &  ) ) static_cast<void (Geom2dLProp_NumericCurInf2d::*)( const opencascade::handle<Geom2d_Curve> & ,  LProp_CurAndInf &  ) >(&Geom2dLProp_NumericCurInf2d::PerformInf),
             R"#(Computes the inflections.)#"  , py::arg("C"),  py::arg("Result"))
        .def("PerformCurExt",
             (void (Geom2dLProp_NumericCurInf2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  LProp_CurAndInf &  ) ) static_cast<void (Geom2dLProp_NumericCurInf2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  LProp_CurAndInf &  ) >(&Geom2dLProp_NumericCurInf2d::PerformCurExt),
             R"#(Computes the locals extremas of curvature. in the interval of parmeters [UMin,UMax].)#"  , py::arg("C"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("Result"))
        .def("PerformInf",
             (void (Geom2dLProp_NumericCurInf2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  LProp_CurAndInf &  ) ) static_cast<void (Geom2dLProp_NumericCurInf2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  LProp_CurAndInf &  ) >(&Geom2dLProp_NumericCurInf2d::PerformInf),
             R"#(Computes the inflections in the interval of parmeters [UMin,UMax].)#"  , py::arg("C"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("Result"))
        .def("IsDone",
             (Standard_Boolean (Geom2dLProp_NumericCurInf2d::*)() const) static_cast<Standard_Boolean (Geom2dLProp_NumericCurInf2d::*)() const>(&Geom2dLProp_NumericCurInf2d::IsDone),
             R"#(True if the solutions are found.)#" )
;

// functions
// ./opencascade/Geom2dLProp_CLProps2d.hxx
// ./opencascade/Geom2dLProp_CurAndInf2d.hxx
// ./opencascade/Geom2dLProp_Curve2dTool.hxx
// ./opencascade/Geom2dLProp_NumericCurInf2d.hxx
// ./opencascade/Geom2dLProp_FuncCurNul.hxx
// ./opencascade/Geom2dLProp_FuncCurExt.hxx

// operators

// register typdefs
// ./opencascade/Geom2dLProp_CLProps2d.hxx
// ./opencascade/Geom2dLProp_CurAndInf2d.hxx
// ./opencascade/Geom2dLProp_Curve2dTool.hxx
// ./opencascade/Geom2dLProp_NumericCurInf2d.hxx
// ./opencascade/Geom2dLProp_FuncCurNul.hxx
// ./opencascade/Geom2dLProp_FuncCurExt.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

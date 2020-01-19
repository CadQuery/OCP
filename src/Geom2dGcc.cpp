
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom2dAdaptor_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2d3Tan.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NegativeValue.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2d2TanRad.hxx>
#include <Geom2dGcc_Circ2d2TanRadGeo.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Lin2d2TanIter.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <math_Matrix.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2dTanOnRad.hxx>
#include <Geom2dGcc_Circ2dTanOnRadGeo.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_IsParallel.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Lin2dTanOblIter.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2d2TanOn.hxx>
#include <Geom2dGcc_Circ2d2TanOnGeo.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2dGcc_CurveTool.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Circ2d3Tan.hxx>
#include <Geom2dGcc_Circ2d2TanRad.hxx>
#include <Geom2dGcc_Circ2d2TanOn.hxx>
#include <Geom2dGcc_Circ2dTanOnRad.hxx>
#include <Geom2dGcc_Circ2dTanCen.hxx>
#include <Geom2dGcc_Lin2d2Tan.hxx>
#include <Geom2dGcc_Lin2dTanObl.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <Geom2dGcc_Circ2d2TanOnGeo.hxx>
#include <Geom2dGcc_Circ2d2TanRadGeo.hxx>
#include <Geom2dGcc_Circ2dTanCenGeo.hxx>
#include <Geom2dGcc_Circ2dTanOnRadGeo.hxx>
#include <Geom2dGcc_Circ2d3TanIter.hxx>
#include <Geom2dGcc_FunctionTanCuCuCu.hxx>
#include <Geom2dGcc_Circ2d2TanOnIter.hxx>
#include <Geom2dGcc_FunctionTanCuCuOnCu.hxx>
#include <Geom2dGcc_Lin2dTanOblIter.hxx>
#include <Geom2dGcc_FunctionTanObl.hxx>
#include <Geom2dGcc_Lin2d2TanIter.hxx>
#include <Geom2dGcc_FunctionTanCuCu.hxx>
#include <Geom2dGcc_FunctionTanCuPnt.hxx>
#include <Geom2dGcc_FunctionTanCirCu.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2d_Point.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_IsParallel.hxx>
#include <Geom2dGcc_QCurve.hxx>

// module includes
#include <Geom2dGcc.hxx>
#include <Geom2dGcc_Circ2d2TanOn.hxx>
#include <Geom2dGcc_Circ2d2TanOnGeo.hxx>
#include <Geom2dGcc_Circ2d2TanOnIter.hxx>
#include <Geom2dGcc_Circ2d2TanRad.hxx>
#include <Geom2dGcc_Circ2d2TanRadGeo.hxx>
#include <Geom2dGcc_Circ2d3Tan.hxx>
#include <Geom2dGcc_Circ2d3TanIter.hxx>
#include <Geom2dGcc_Circ2dTanCen.hxx>
#include <Geom2dGcc_Circ2dTanCenGeo.hxx>
#include <Geom2dGcc_Circ2dTanOnRad.hxx>
#include <Geom2dGcc_Circ2dTanOnRadGeo.hxx>
#include <Geom2dGcc_CurveTool.hxx>
#include <Geom2dGcc_FunctionTanCirCu.hxx>
#include <Geom2dGcc_FunctionTanCuCu.hxx>
#include <Geom2dGcc_FunctionTanCuCuCu.hxx>
#include <Geom2dGcc_FunctionTanCuCuOnCu.hxx>
#include <Geom2dGcc_FunctionTanCuPnt.hxx>
#include <Geom2dGcc_FunctionTanObl.hxx>
#include <Geom2dGcc_IsParallel.hxx>
#include <Geom2dGcc_Lin2d2Tan.hxx>
#include <Geom2dGcc_Lin2d2TanIter.hxx>
#include <Geom2dGcc_Lin2dTanObl.hxx>
#include <Geom2dGcc_Lin2dTanOblIter.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Type1.hxx>
#include <Geom2dGcc_Type2.hxx>
#include <Geom2dGcc_Type3.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dGcc(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dGcc"));


//Python trampoline classes

// classes

    register_default_constructor<Geom2dGcc , shared_ptr<Geom2dGcc>>(m,"Geom2dGcc");

    static_cast<py::class_<Geom2dGcc , shared_ptr<Geom2dGcc>  >>(m.attr("Geom2dGcc"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Unqualified_s",
                    (Geom2dGcc_QualifiedCurve (*)( const Geom2dAdaptor_Curve &  ) ) static_cast<Geom2dGcc_QualifiedCurve (*)( const Geom2dAdaptor_Curve &  ) >(&Geom2dGcc::Unqualified),
                    R"#(Constructs such a qualified curve that the relative position of the solution computed by a construction algorithm using the qualified curve to the circle or line is not qualified, i.e. all solutions apply. Warning Obj is an adapted curve, i.e. an object which is an interface between: - the services provided by a 2D curve from the package Geom2d, - and those required on the curve by a computation algorithm. The adapted curve is created in the following way: Handle(Geom2d_Curve) mycurve = ... ; Geom2dAdaptor_Curve Obj ( mycurve ) ; The qualified curve is then constructed with this object: Geom2dGcc_QualifiedCurve myQCurve = Geom2dGcc::Unqualified(Obj);)#"  , py::arg("Obj"))
        .def_static("Enclosing_s",
                    (Geom2dGcc_QualifiedCurve (*)( const Geom2dAdaptor_Curve &  ) ) static_cast<Geom2dGcc_QualifiedCurve (*)( const Geom2dAdaptor_Curve &  ) >(&Geom2dGcc::Enclosing),
                    R"#(Constructs such a qualified curve that the solution computed by a construction algorithm using the qualified curve encloses the curve. Warning Obj is an adapted curve, i.e. an object which is an interface between: - the services provided by a 2D curve from the package Geom2d, - and those required on the curve by a computation algorithm. The adapted curve is created in the following way: Handle(Geom2d_Curve) mycurve = ... ; Geom2dAdaptor_Curve Obj ( mycurve ) ; The qualified curve is then constructed with this object: Geom2dGcc_QualifiedCurve myQCurve = Geom2dGcc::Enclosing(Obj);)#"  , py::arg("Obj"))
        .def_static("Enclosed_s",
                    (Geom2dGcc_QualifiedCurve (*)( const Geom2dAdaptor_Curve &  ) ) static_cast<Geom2dGcc_QualifiedCurve (*)( const Geom2dAdaptor_Curve &  ) >(&Geom2dGcc::Enclosed),
                    R"#(Constructs such a qualified curve that the solution computed by a construction algorithm using the qualified curve is enclosed by the curve. Warning Obj is an adapted curve, i.e. an object which is an interface between: - the services provided by a 2D curve from the package Geom2d, - and those required on the curve by a computation algorithm. The adapted curve is created in the following way: Handle(Geom2d_Curve) mycurve = ... ; Geom2dAdaptor_Curve Obj ( mycurve ) ; The qualified curve is then constructed with this object: Geom2dGcc_QualifiedCurve myQCurve = Geom2dGcc::Enclosed(Obj);)#"  , py::arg("Obj"))
        .def_static("Outside_s",
                    (Geom2dGcc_QualifiedCurve (*)( const Geom2dAdaptor_Curve &  ) ) static_cast<Geom2dGcc_QualifiedCurve (*)( const Geom2dAdaptor_Curve &  ) >(&Geom2dGcc::Outside),
                    R"#(Constructs such a qualified curve that the solution computed by a construction algorithm using the qualified curve and the curve are external to one another. Warning Obj is an adapted curve, i.e. an object which is an interface between: - the services provided by a 2D curve from the package Geom2d, - and those required on the curve by a computation algorithm. The adapted curve is created in the following way: Handle(Geom2d_Curve) mycurve = ... ; Geom2dAdaptor_Curve Obj ( mycurve ) ; The qualified curve is then constructed with this object: Geom2dGcc_QualifiedCurve myQCurve = Geom2dGcc::Outside(Obj);)#"  , py::arg("Obj"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d2TanOn , shared_ptr<Geom2dGcc_Circ2d2TanOn>  >>(m.attr("Geom2dGcc_Circ2d2TanOn"))
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const Geom2dGcc_QualifiedCurve &,const Geom2dAdaptor_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCurve"),  py::arg("Tolerance"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("ParamOn") )
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const opencascade::handle<Geom2d_Point> &,const Geom2dAdaptor_Curve &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point"),  py::arg("OnCurve"),  py::arg("Tolerance"),  py::arg("Param1"),  py::arg("ParamOn") )
        .def(py::init< const opencascade::handle<Geom2d_Point> &,const opencascade::handle<Geom2d_Point> &,const Geom2dAdaptor_Curve &,const Standard_Real >()  , py::arg("Point1"),  py::arg("Point2"),  py::arg("OnCurve"),  py::arg("Tolerance") )
    // methods
        .def("Results",
             (void (Geom2dGcc_Circ2d2TanOn::*)( const GccAna_Circ2d2TanOn &  ) ) static_cast<void (Geom2dGcc_Circ2d2TanOn::*)( const GccAna_Circ2d2TanOn &  ) >(&Geom2dGcc_Circ2d2TanOn::Results),
             R"#(None)#"  , py::arg("Circ"))
        .def("Results",
             (void (Geom2dGcc_Circ2d2TanOn::*)( const Geom2dGcc_Circ2d2TanOnGeo &  ) ) static_cast<void (Geom2dGcc_Circ2d2TanOn::*)( const Geom2dGcc_Circ2d2TanOnGeo &  ) >(&Geom2dGcc_Circ2d2TanOn::Results),
             R"#(None)#"  , py::arg("Circ"))
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanOn::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanOn::*)() const>(&Geom2dGcc_Circ2d2TanOn::IsDone),
             R"#(Returns true if the construction algorithm does not fail (even if it finds no solution). Note: IsDone protects against a failure arising from a more internal intersection algorithm, which has reached its numeric limits.)#" )
        .def("NbSolutions",
             (Standard_Integer (Geom2dGcc_Circ2d2TanOn::*)() const) static_cast<Standard_Integer (Geom2dGcc_Circ2d2TanOn::*)() const>(&Geom2dGcc_Circ2d2TanOn::NbSolutions),
             R"#(This method returns the number of solutions. NotDone is raised if the algorithm failed.)#" )
        .def("ThisSolution",
             (gp_Circ2d (Geom2dGcc_Circ2d2TanOn::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (Geom2dGcc_Circ2d2TanOn::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d2TanOn::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be carefull: the Index is only a way to get all the solutions, but is not associated to theses outside the context of the algorithm-object. Exceptions Standard_OutOfRange if Index is less than or equal to zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (Geom2dGcc_Circ2d2TanOn::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Circ2d2TanOn::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const>(&Geom2dGcc_Circ2d2TanOn::WhichQualifier),
             R"#(It returns the informations about the qualifiers of the tangency arguments concerning the solution number Index. It returns the real qualifiers (the qualifiers given to the constructor method in case of enclosed, enclosing and outside and the qualifiers computedin case of unqualified). Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("Qualif1"),  py::arg("Qualif2"))
        .def("IsTheSame1",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanOn::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanOn::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d2TanOn::IsTheSame1),
             R"#(Returns true if the solution of index Index and, respectively, the first or second argument of this algorithm are the same (i.e. there are 2 identical circles). If Rarg is the radius of the first or second argument, Rsol is the radius of the solution and dist is the distance between the two centers, we consider the two circles to be identical if |Rarg - Rsol| and dist are less than or equal to the tolerance criterion given at the time of construction of this algorithm. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"))
        .def("IsTheSame2",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanOn::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanOn::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d2TanOn::IsTheSame2),
             R"#(Returns true if the solution of index Index and, respectively, the first or second argument of this algorithm are the same (i.e. there are 2 identical circles). If Rarg is the radius of the first or second argument, Rsol is the radius of the solution and dist is the distance between the two centers, we consider the two circles to be identical if |Rarg - Rsol| and dist are less than or equal to the tolerance criterion given at the time of construction of this algorithm. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Circ2d2TanOn &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv.)#"  , py::arg("Index"),  py::arg("PntSol"))
        .def("Tangency2",
             []( Geom2dGcc_Circ2d2TanOn &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency2(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result and the second argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv.)#"  , py::arg("Index"),  py::arg("PntSol"))
        .def("CenterOn3",
             []( Geom2dGcc_Circ2d2TanOn &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParArg; self.CenterOn3(Index,ParArg,PntSol); return std::make_tuple(ParArg); },
             R"#(Returns the center PntSol of the solution of index Index computed by this algorithm. ParArg is the parameter of the point PntSol on the third argument. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d2TanOnGeo , shared_ptr<Geom2dGcc_Circ2d2TanOnGeo>  >>(m.attr("Geom2dGcc_Circ2d2TanOnGeo"))
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedCirc &,const Geom2dAdaptor_Curve &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCurv"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedLin &,const Geom2dAdaptor_Curve &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCurv"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const gp_Pnt2d &,const Geom2dAdaptor_Curve &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point2"),  py::arg("OnCurv"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const GccEnt_QualifiedLin &,const Geom2dAdaptor_Curve &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCurv"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const gp_Pnt2d &,const Geom2dAdaptor_Curve &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCurv"),  py::arg("Tolerance") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const Geom2dAdaptor_Curve &,const Standard_Real >()  , py::arg("Point1"),  py::arg("Point2"),  py::arg("OnCurv"),  py::arg("Tolerance") )
    // methods
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanOnGeo::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanOnGeo::*)() const>(&Geom2dGcc_Circ2d2TanOnGeo::IsDone),
             R"#(This method returns True if the construction algorithm succeeded.)#" )
        .def("NbSolutions",
             (Standard_Integer (Geom2dGcc_Circ2d2TanOnGeo::*)() const) static_cast<Standard_Integer (Geom2dGcc_Circ2d2TanOnGeo::*)() const>(&Geom2dGcc_Circ2d2TanOnGeo::NbSolutions),
             R"#(This method returns the number of solutions. It raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("ThisSolution",
             (gp_Circ2d (Geom2dGcc_Circ2d2TanOnGeo::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (Geom2dGcc_Circ2d2TanOnGeo::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d2TanOnGeo::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be careful: the Index is only a way to get all the solutions, but is not associated to those outside the context of the algorithm-object. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (Geom2dGcc_Circ2d2TanOnGeo::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Circ2d2TanOnGeo::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const>(&Geom2dGcc_Circ2d2TanOnGeo::WhichQualifier),
             R"#(It returns the informations about the qualifiers of the tangency arguments concerning the solution number Index. It returns the real qualifiers (the qualifiers given to the constructor method in case of enclosed, enclosing and outside and the qualifiers computedin case of unqualified).)#"  , py::arg("Index"),  py::arg("Qualif1"),  py::arg("Qualif2"))
        .def("IsTheSame1",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanOnGeo::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanOnGeo::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d2TanOnGeo::IsTheSame1),
             R"#(Returns True if the solution number Index is equal to the first argument and False in the other cases. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"))
        .def("IsTheSame2",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanOnGeo::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanOnGeo::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d2TanOnGeo::IsTheSame2),
             R"#(Returns True if the solution number Index is equal to the second argument and False in the other cases. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Circ2d2TanOnGeo &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point on the solution curv. ParArg is the intrinsic parameter of the point on the argument curv. PntSol is the tangency point on the solution curv. PntArg is the tangency point on the argument curv. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("PntSol"))
        .def("Tangency2",
             []( Geom2dGcc_Circ2d2TanOnGeo &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency2(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result number Index and the second argument. ParSol is the intrinsic parameter of the point on the solution curv. ParArg is the intrinsic parameter of the point on the argument curv. PntSol is the tangency point on the solution curv. PntArg is the tangency point on the argument curv. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("PntSol"))
        .def("CenterOn3",
             []( Geom2dGcc_Circ2d2TanOnGeo &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParArg; self.CenterOn3(Index,ParArg,PntSol); return std::make_tuple(ParArg); },
             R"#(Returns informations about the center (on the curv) of the result. ParArg is the intrinsic parameter of the point on the argument curv. PntSol is the center point of the solution curv. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d2TanOnIter , shared_ptr<Geom2dGcc_Circ2d2TanOnIter>  >>(m.attr("Geom2dGcc_Circ2d2TanOnIter"))
        .def(py::init< const GccEnt_QualifiedCirc &,const Geom2dGcc_QCurve &,const gp_Lin2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnLine"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Param3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const Geom2dGcc_QCurve &,const gp_Lin2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnLine"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Param3"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QCurve &,const Geom2dGcc_QCurve &,const gp_Lin2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnLine"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Param3"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QCurve &,const gp_Pnt2d &,const gp_Lin2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point2"),  py::arg("OnLine"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const Geom2dGcc_QCurve &,const gp_Circ2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCirc"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Param3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const Geom2dGcc_QCurve &,const gp_Circ2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCirc"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Param3"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QCurve &,const Geom2dGcc_QCurve &,const gp_Circ2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCirc"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Param3"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QCurve &,const gp_Pnt2d &,const gp_Circ2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point2"),  py::arg("OnCirc"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const Geom2dGcc_QCurve &,const Geom2dAdaptor_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCurv"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("ParamOn"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const Geom2dGcc_QCurve &,const Geom2dAdaptor_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCurve"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("ParamOn"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QCurve &,const gp_Pnt2d &,const Geom2dAdaptor_Curve &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point2"),  py::arg("OnCurve"),  py::arg("Param1"),  py::arg("ParamOn"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QCurve &,const Geom2dGcc_QCurve &,const Geom2dAdaptor_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCurve"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("ParamOn"),  py::arg("Tolerance") )
    // methods
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanOnIter::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanOnIter::*)() const>(&Geom2dGcc_Circ2d2TanOnIter::IsDone),
             R"#(This method returns True if the construction algorithm succeeded.)#" )
        .def("ThisSolution",
             (gp_Circ2d (Geom2dGcc_Circ2d2TanOnIter::*)() const) static_cast<gp_Circ2d (Geom2dGcc_Circ2d2TanOnIter::*)() const>(&Geom2dGcc_Circ2d2TanOnIter::ThisSolution),
             R"#(Returns the solution. It raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("WhichQualifier",
             (void (Geom2dGcc_Circ2d2TanOnIter::*)( GccEnt_Position & ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Circ2d2TanOnIter::*)( GccEnt_Position & ,  GccEnt_Position &  ) const>(&Geom2dGcc_Circ2d2TanOnIter::WhichQualifier),
             R"#(None)#"  , py::arg("Qualif1"),  py::arg("Qualif2"))
        .def("IsTheSame1",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanOnIter::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanOnIter::*)() const>(&Geom2dGcc_Circ2d2TanOnIter::IsTheSame1),
             R"#(It raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("IsTheSame2",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanOnIter::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanOnIter::*)() const>(&Geom2dGcc_Circ2d2TanOnIter::IsTheSame2),
             R"#(It raises NotDone if the construction algorithm didn't succeed.)#" )
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Circ2d2TanOnIter &self , gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns information about the tangency point between the result and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv. It raises NotDone if the construction algorithm didn't succeed.)#"  , py::arg("PntSol"))
        .def("Tangency2",
             []( Geom2dGcc_Circ2d2TanOnIter &self , gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency2(ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns information about the tangency point between the result and the second argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv. It raises NotDone if the construction algorithm didn't succeed.)#"  , py::arg("PntSol"))
        .def("CenterOn3",
             []( Geom2dGcc_Circ2d2TanOnIter &self , gp_Pnt2d & PntSol ){ Standard_Real  ParArg; self.CenterOn3(ParArg,PntSol); return std::make_tuple(ParArg); },
             R"#(Returns information about the center (on the curv) of the result and the third argument. It raises NotDone if the construction algorithm didn't succeed.)#"  , py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d2TanRad , shared_ptr<Geom2dGcc_Circ2d2TanRad>  >>(m.attr("Geom2dGcc_Circ2d2TanRad"))
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const Geom2dGcc_QualifiedCurve &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const opencascade::handle<Geom2d_Point> &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const opencascade::handle<Geom2d_Point> &,const opencascade::handle<Geom2d_Point> &,const Standard_Real,const Standard_Real >()  , py::arg("Point1"),  py::arg("Point2"),  py::arg("Radius"),  py::arg("Tolerance") )
    // methods
        .def("Results",
             (void (Geom2dGcc_Circ2d2TanRad::*)( const GccAna_Circ2d2TanRad &  ) ) static_cast<void (Geom2dGcc_Circ2d2TanRad::*)( const GccAna_Circ2d2TanRad &  ) >(&Geom2dGcc_Circ2d2TanRad::Results),
             R"#(None)#"  , py::arg("Circ"))
        .def("Results",
             (void (Geom2dGcc_Circ2d2TanRad::*)( const Geom2dGcc_Circ2d2TanRadGeo &  ) ) static_cast<void (Geom2dGcc_Circ2d2TanRad::*)( const Geom2dGcc_Circ2d2TanRadGeo &  ) >(&Geom2dGcc_Circ2d2TanRad::Results),
             R"#(None)#"  , py::arg("Circ"))
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanRad::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanRad::*)() const>(&Geom2dGcc_Circ2d2TanRad::IsDone),
             R"#(This method returns True if the algorithm succeeded. Note: IsDone protects against a failure arising from a more internal intersection algorithm, which has reached its numeric limits.)#" )
        .def("NbSolutions",
             (Standard_Integer (Geom2dGcc_Circ2d2TanRad::*)() const) static_cast<Standard_Integer (Geom2dGcc_Circ2d2TanRad::*)() const>(&Geom2dGcc_Circ2d2TanRad::NbSolutions),
             R"#(This method returns the number of solutions. NotDone is raised if the algorithm failed. Exceptions StdFail_NotDone if the construction fails.)#" )
        .def("ThisSolution",
             (gp_Circ2d (Geom2dGcc_Circ2d2TanRad::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (Geom2dGcc_Circ2d2TanRad::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d2TanRad::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be carefull: the Index is only a way to get all the solutions, but is not associated to theses outside the context of the algorithm-object. Warning This indexing simply provides a means of consulting the solutions. The index values are not associated with these solutions outside the context of the algorithm object. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (Geom2dGcc_Circ2d2TanRad::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Circ2d2TanRad::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const>(&Geom2dGcc_Circ2d2TanRad::WhichQualifier),
             R"#(Returns the qualifiers Qualif1 and Qualif2 of the tangency arguments for the solution of index Index computed by this algorithm. The returned qualifiers are: - those specified at the start of construction when the solutions are defined as enclosed, enclosing or outside with respect to the arguments, or - those computed during construction (i.e. enclosed, enclosing or outside) when the solutions are defined as unqualified with respect to the arguments, or - GccEnt_noqualifier if the tangency argument is a point, or - GccEnt_unqualified in certain limit cases where it is impossible to qualify the solution as enclosed, enclosing or outside. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("Qualif1"),  py::arg("Qualif2"))
        .def("IsTheSame1",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanRad::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanRad::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d2TanRad::IsTheSame1),
             R"#(Returns true if the solution of index Index and, respectively, the first or second argument of this algorithm are the same (i.e. there are 2 identical circles). If Rarg is the radius of the first or second argument, Rsol is the radius of the solution and dist is the distance between the two centers, we consider the two circles to be identical if |Rarg - Rsol| and dist are less than or equal to the tolerance criterion given at the time of construction of this algorithm. OutOfRange is raised if Index is greater than the number of solutions. notDone is raised if the construction algorithm did not succeed.)#"  , py::arg("Index"))
        .def("IsTheSame2",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanRad::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanRad::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d2TanRad::IsTheSame2),
             R"#(Returns true if the solution of index Index and, respectively, the first or second argument of this algorithm are the same (i.e. there are 2 identical circles). If Rarg is the radius of the first or second argument, Rsol is the radius of the solution and dist is the distance between the two centers, we consider the two circles to be identical if |Rarg - Rsol| and dist are less than or equal to the tolerance criterion given at the time of construction of this algorithm. OutOfRange is raised if Index is greater than the number of solutions. notDone is raised if the construction algorithm did not succeed.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Circ2d2TanRad &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv. OutOfRange is raised if Index is greater than the number of solutions. notDone is raised if the construction algorithm did not succeed.)#"  , py::arg("Index"),  py::arg("PntSol"))
        .def("Tangency2",
             []( Geom2dGcc_Circ2d2TanRad &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency2(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result number Index and the second argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv. OutOfRange is raised if Index is greater than the number of solutions. notDone is raised if the construction algorithm did not succeed.)#"  , py::arg("Index"),  py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d2TanRadGeo , shared_ptr<Geom2dGcc_Circ2d2TanRadGeo>  >>(m.attr("Geom2dGcc_Circ2d2TanRadGeo"))
        .def(py::init< const GccEnt_QualifiedCirc &,const Geom2dGcc_QCurve &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const Geom2dGcc_QCurve &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QCurve &,const Geom2dGcc_QCurve &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QCurve &,const gp_Pnt2d &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point2"),  py::arg("Radius"),  py::arg("Tolerance") )
    // methods
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanRadGeo::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanRadGeo::*)() const>(&Geom2dGcc_Circ2d2TanRadGeo::IsDone),
             R"#(This method returns True if the algorithm succeeded.)#" )
        .def("NbSolutions",
             (Standard_Integer (Geom2dGcc_Circ2d2TanRadGeo::*)() const) static_cast<Standard_Integer (Geom2dGcc_Circ2d2TanRadGeo::*)() const>(&Geom2dGcc_Circ2d2TanRadGeo::NbSolutions),
             R"#(This method returns the number of solutions. It raises NotDone if the algorithm failed.)#" )
        .def("ThisSolution",
             (gp_Circ2d (Geom2dGcc_Circ2d2TanRadGeo::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (Geom2dGcc_Circ2d2TanRadGeo::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d2TanRadGeo::ThisSolution),
             R"#(Returns the solution number Index. Be careful: the Index is only a way to get all the solutions, but is not associated to those outside the context of the algorithm-object. It raises OutOfRange exception if Index is greater than the number of solutions. It raises NotDone if the construction algorithm did not succeed.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (Geom2dGcc_Circ2d2TanRadGeo::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Circ2d2TanRadGeo::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const>(&Geom2dGcc_Circ2d2TanRadGeo::WhichQualifier),
             R"#(It returns the information about the qualifiers of the tangency arguments concerning the solution number Index. It returns the real qualifiers (the qualifiers given to the constructor method in case of enclosed, enclosing and outside and the qualifiers computedin case of unqualified).)#"  , py::arg("Index"),  py::arg("Qualif1"),  py::arg("Qualif2"))
        .def("IsTheSame1",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanRadGeo::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanRadGeo::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d2TanRadGeo::IsTheSame1),
             R"#(Returns True if the solution number Index is equal to the first argument. It raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the construction algorithm did not succeed.)#"  , py::arg("Index"))
        .def("IsTheSame2",
             (Standard_Boolean (Geom2dGcc_Circ2d2TanRadGeo::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d2TanRadGeo::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d2TanRadGeo::IsTheSame2),
             R"#(Returns True if the solution number Index is equal to the second argument. It raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the construction algorithm did not succeed.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Circ2d2TanRadGeo &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns information about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution. ParArg is the intrinsic parameter of the point PntSol on the first argument. It raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the construction algorithm did not succeed.)#"  , py::arg("Index"),  py::arg("PntSol"))
        .def("Tangency2",
             []( Geom2dGcc_Circ2d2TanRadGeo &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency2(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns information about the tangency point between the result number Index and the second argument. ParSol is the intrinsic parameter of the point PntSol on the solution. ParArg is the intrinsic parameter of the point PntArg on the second argument. It raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the construction algorithm did not succeed.)#"  , py::arg("Index"),  py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d3Tan , shared_ptr<Geom2dGcc_Circ2d3Tan>  >>(m.attr("Geom2dGcc_Circ2d3Tan"))
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const Geom2dGcc_QualifiedCurve &,const Geom2dGcc_QualifiedCurve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Qualified3"),  py::arg("Tolerance"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Param3") )
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const Geom2dGcc_QualifiedCurve &,const opencascade::handle<Geom2d_Point> &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Point"),  py::arg("Tolerance"),  py::arg("Param1"),  py::arg("Param2") )
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const opencascade::handle<Geom2d_Point> &,const opencascade::handle<Geom2d_Point> &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point1"),  py::arg("Point2"),  py::arg("Tolerance"),  py::arg("Param1") )
        .def(py::init< const opencascade::handle<Geom2d_Point> &,const opencascade::handle<Geom2d_Point> &,const opencascade::handle<Geom2d_Point> &,const Standard_Real >()  , py::arg("Point1"),  py::arg("Point2"),  py::arg("Point3"),  py::arg("Tolerance") )
    // methods
        .def("Results",
             (void (Geom2dGcc_Circ2d3Tan::*)( const GccAna_Circ2d3Tan & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom2dGcc_Circ2d3Tan::*)( const GccAna_Circ2d3Tan & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Geom2dGcc_Circ2d3Tan::Results),
             R"#(None)#"  , py::arg("Circ"),  py::arg("Rank1"),  py::arg("Rank2"),  py::arg("Rank3"))
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Circ2d3Tan::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d3Tan::*)() const>(&Geom2dGcc_Circ2d3Tan::IsDone),
             R"#(Returns true if the construction algorithm does not fail (even if it finds no solution). Note: IsDone protects against a failure arising from a more internal intersection algorithm, which has reached its numeric limits.)#" )
        .def("NbSolutions",
             (Standard_Integer (Geom2dGcc_Circ2d3Tan::*)() const) static_cast<Standard_Integer (Geom2dGcc_Circ2d3Tan::*)() const>(&Geom2dGcc_Circ2d3Tan::NbSolutions),
             R"#(This method returns the number of solutions. NotDone is raised if the algorithm failed.)#" )
        .def("ThisSolution",
             (gp_Circ2d (Geom2dGcc_Circ2d3Tan::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (Geom2dGcc_Circ2d3Tan::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d3Tan::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be carefull: the Index is only a way to get all the solutions, but is not associated to theses outside the context of the algorithm-object.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (Geom2dGcc_Circ2d3Tan::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position & ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Circ2d3Tan::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position & ,  GccEnt_Position &  ) const>(&Geom2dGcc_Circ2d3Tan::WhichQualifier),
             R"#(It returns the informations about the qualifiers of the tangency arguments concerning the solution number Index. It returns the real qualifiers (the qualifiers given to the constructor method in case of enclosed, enclosing and outside and the qualifiers computedin case of unqualified).)#"  , py::arg("Index"),  py::arg("Qualif1"),  py::arg("Qualif2"),  py::arg("Qualif3"))
        .def("IsTheSame1",
             (Standard_Boolean (Geom2dGcc_Circ2d3Tan::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d3Tan::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d3Tan::IsTheSame1),
             R"#(Returns True if the solution is equal to the first argument.)#"  , py::arg("Index"))
        .def("IsTheSame2",
             (Standard_Boolean (Geom2dGcc_Circ2d3Tan::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d3Tan::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d3Tan::IsTheSame2),
             R"#(Returns True if the solution is equal to the second argument.)#"  , py::arg("Index"))
        .def("IsTheSame3",
             (Standard_Boolean (Geom2dGcc_Circ2d3Tan::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d3Tan::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2d3Tan::IsTheSame3),
             R"#(Returns True if the solution is equal to the third argument. If Rarg is the radius of the first, second or third argument, Rsol is the radius of the solution and dist is the distance between the two centers, we consider the two circles to be identical if |Rarg - Rsol| and dist are less than or equal to the tolerance criterion given at the time of construction of this algorithm. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Circ2d3Tan &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv.)#"  , py::arg("Index"),  py::arg("PntSol"))
        .def("Tangency2",
             []( Geom2dGcc_Circ2d3Tan &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency2(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result and the second argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv.)#"  , py::arg("Index"),  py::arg("PntSol"))
        .def("Tangency3",
             []( Geom2dGcc_Circ2d3Tan &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency3(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result and the third argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv.)#"  , py::arg("Index"),  py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d3TanIter , shared_ptr<Geom2dGcc_Circ2d3TanIter>  >>(m.attr("Geom2dGcc_Circ2d3TanIter"))
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedCirc &,const Geom2dGcc_QCurve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Qualified3"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Param3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const Geom2dGcc_QCurve &,const Geom2dGcc_QCurve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Qualified3"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Param3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedLin &,const Geom2dGcc_QCurve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Qualified3"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Param3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const Geom2dGcc_QCurve &,const gp_Pnt2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Point3"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const GccEnt_QualifiedLin &,const Geom2dGcc_QCurve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Qualified3"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Param3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const Geom2dGcc_QCurve &,const Geom2dGcc_QCurve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Qualified3"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Param3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const Geom2dGcc_QCurve &,const gp_Pnt2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Point3"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QCurve &,const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point1"),  py::arg("Point2"),  py::arg("Param1"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QCurve &,const Geom2dGcc_QCurve &,const gp_Pnt2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Point2"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QCurve &,const Geom2dGcc_QCurve &,const Geom2dGcc_QCurve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Qualified3"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Param3"),  py::arg("Tolerance") )
    // methods
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Circ2d3TanIter::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d3TanIter::*)() const>(&Geom2dGcc_Circ2d3TanIter::IsDone),
             R"#(This method returns True if the construction algorithm succeeded.)#" )
        .def("ThisSolution",
             (gp_Circ2d (Geom2dGcc_Circ2d3TanIter::*)() const) static_cast<gp_Circ2d (Geom2dGcc_Circ2d3TanIter::*)() const>(&Geom2dGcc_Circ2d3TanIter::ThisSolution),
             R"#(Returns the solution. It raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("WhichQualifier",
             (void (Geom2dGcc_Circ2d3TanIter::*)( GccEnt_Position & ,  GccEnt_Position & ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Circ2d3TanIter::*)( GccEnt_Position & ,  GccEnt_Position & ,  GccEnt_Position &  ) const>(&Geom2dGcc_Circ2d3TanIter::WhichQualifier),
             R"#(None)#"  , py::arg("Qualif1"),  py::arg("Qualif2"),  py::arg("Qualif3"))
        .def("IsTheSame1",
             (Standard_Boolean (Geom2dGcc_Circ2d3TanIter::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d3TanIter::*)() const>(&Geom2dGcc_Circ2d3TanIter::IsTheSame1),
             R"#(It raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("IsTheSame2",
             (Standard_Boolean (Geom2dGcc_Circ2d3TanIter::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d3TanIter::*)() const>(&Geom2dGcc_Circ2d3TanIter::IsTheSame2),
             R"#(It raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("IsTheSame3",
             (Standard_Boolean (Geom2dGcc_Circ2d3TanIter::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2d3TanIter::*)() const>(&Geom2dGcc_Circ2d3TanIter::IsTheSame3),
             R"#(It raises NotDone if the construction algorithm didn't succeed.)#" )
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Circ2d3TanIter &self , gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv. It raises NotDone if the construction algorithm didn't succeed.)#"  , py::arg("PntSol"))
        .def("Tangency2",
             []( Geom2dGcc_Circ2d3TanIter &self , gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency2(ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result and the second argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv. It raises NotDone if the construction algorithm didn't succeed.)#"  , py::arg("PntSol"))
        .def("Tangency3",
             []( Geom2dGcc_Circ2d3TanIter &self , gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency3(ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result and the third argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv. It raises NotDone if the construction algorithm didn't succeed.)#"  , py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Circ2dTanCen , shared_ptr<Geom2dGcc_Circ2dTanCen>  >>(m.attr("Geom2dGcc_Circ2dTanCen"))
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const opencascade::handle<Geom2d_Point> &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Pcenter"),  py::arg("Tolerance") )
    // methods
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Circ2dTanCen::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2dTanCen::*)() const>(&Geom2dGcc_Circ2dTanCen::IsDone),
             R"#(Returns true if the construction algorithm does not fail (even if it finds no solution). Note: IsDone protects against a failure arising from a more internal intersection algorithm, which has reached its numeric limits.)#" )
        .def("NbSolutions",
             (Standard_Integer (Geom2dGcc_Circ2dTanCen::*)() const) static_cast<Standard_Integer (Geom2dGcc_Circ2dTanCen::*)() const>(&Geom2dGcc_Circ2dTanCen::NbSolutions),
             R"#(Returns the number of circles, representing solutions computed by this algorithm. Exceptions StdFail_NotDone if the construction fails.)#" )
        .def("ThisSolution",
             (gp_Circ2d (Geom2dGcc_Circ2dTanCen::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (Geom2dGcc_Circ2dTanCen::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2dTanCen::ThisSolution),
             R"#(Returns a circle, representing the solution of index Index computed by this algorithm. Warning This indexing simply provides a means of consulting the solutions. The index values are not associated with these solutions outside the context of the algorithm object. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (Geom2dGcc_Circ2dTanCen::*)( const Standard_Integer ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Circ2dTanCen::*)( const Standard_Integer ,  GccEnt_Position &  ) const>(&Geom2dGcc_Circ2dTanCen::WhichQualifier),
             R"#(Returns the qualifier Qualif1 of the tangency argument for the solution of index Index computed by this algorithm. The returned qualifier is: - that specified at the start of construction when the solutions are defined as enclosed, enclosing or outside with respect to the argument, or - that computed during construction (i.e. enclosed, enclosing or outside) when the solutions are defined as unqualified with respect to the argument. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("Qualif1"))
        .def("IsTheSame1",
             (Standard_Boolean (Geom2dGcc_Circ2dTanCen::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2dTanCen::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2dTanCen::IsTheSame1),
             R"#(Returns true if the solution of index Index and the first argument of this algorithm are the same (i.e. there are 2 identical circles). If Rarg is the radius of the first argument, Rsol is the radius of the solution and dist is the distance between the two centers, we consider the two circles to be identical if |Rarg - Rsol| and dist are less than or equal to the tolerance criterion given at the time of construction of this algorithm. NotDone is raised if the construction algorithm didn't succeed. OutOfRange is raised if Index is greater than the number of solutions.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Circ2dTanCen &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Circ2dTanCenGeo , shared_ptr<Geom2dGcc_Circ2dTanCenGeo>  >>(m.attr("Geom2dGcc_Circ2dTanCenGeo"))
        .def(py::init< const Geom2dGcc_QCurve &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Pcenter"),  py::arg("Tolerance") )
    // methods
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Circ2dTanCenGeo::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2dTanCenGeo::*)() const>(&Geom2dGcc_Circ2dTanCenGeo::IsDone),
             R"#(This method returns True if the construction algorithm succeeded.)#" )
        .def("NbSolutions",
             (Standard_Integer (Geom2dGcc_Circ2dTanCenGeo::*)() const) static_cast<Standard_Integer (Geom2dGcc_Circ2dTanCenGeo::*)() const>(&Geom2dGcc_Circ2dTanCenGeo::NbSolutions),
             R"#(Returns the number of solutions and raises NotDone exception if the algorithm didn't succeed. It raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("ThisSolution",
             (gp_Circ2d (Geom2dGcc_Circ2dTanCenGeo::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (Geom2dGcc_Circ2dTanCenGeo::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2dTanCenGeo::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be carefull: the Index is only a way to get all the solutions, but is not associated to theses outside the context of the algorithm-object. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions or less than zero.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (Geom2dGcc_Circ2dTanCenGeo::*)( const Standard_Integer ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Circ2dTanCenGeo::*)( const Standard_Integer ,  GccEnt_Position &  ) const>(&Geom2dGcc_Circ2dTanCenGeo::WhichQualifier),
             R"#(None)#"  , py::arg("Index"),  py::arg("Qualif1"))
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Circ2dTanCenGeo &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntArg on the argument curv. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions or less than zero.)#"  , py::arg("Index"),  py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Circ2dTanOnRad , shared_ptr<Geom2dGcc_Circ2dTanOnRad>  >>(m.attr("Geom2dGcc_Circ2dTanOnRad"))
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const Geom2dAdaptor_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("OnCurv"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const opencascade::handle<Geom2d_Point> &,const Geom2dAdaptor_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("Point1"),  py::arg("OnCurv"),  py::arg("Radius"),  py::arg("Tolerance") )
    // methods
        .def("Results",
             (void (Geom2dGcc_Circ2dTanOnRad::*)( const GccAna_Circ2dTanOnRad &  ) ) static_cast<void (Geom2dGcc_Circ2dTanOnRad::*)( const GccAna_Circ2dTanOnRad &  ) >(&Geom2dGcc_Circ2dTanOnRad::Results),
             R"#(None)#"  , py::arg("Circ"))
        .def("Results",
             (void (Geom2dGcc_Circ2dTanOnRad::*)( const Geom2dGcc_Circ2dTanOnRadGeo &  ) ) static_cast<void (Geom2dGcc_Circ2dTanOnRad::*)( const Geom2dGcc_Circ2dTanOnRadGeo &  ) >(&Geom2dGcc_Circ2dTanOnRad::Results),
             R"#(None)#"  , py::arg("Circ"))
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Circ2dTanOnRad::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2dTanOnRad::*)() const>(&Geom2dGcc_Circ2dTanOnRad::IsDone),
             R"#(Returns true if the construction algorithm does not fail (even if it finds no solution). Note: IsDone protects against a failure arising from a more internal intersection algorithm which has reached its numeric limits.)#" )
        .def("NbSolutions",
             (Standard_Integer (Geom2dGcc_Circ2dTanOnRad::*)() const) static_cast<Standard_Integer (Geom2dGcc_Circ2dTanOnRad::*)() const>(&Geom2dGcc_Circ2dTanOnRad::NbSolutions),
             R"#(Returns the number of circles, representing solutions computed by this algorithm. Exceptions: StdFail_NotDone if the construction fails.)#" )
        .def("ThisSolution",
             (gp_Circ2d (Geom2dGcc_Circ2dTanOnRad::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (Geom2dGcc_Circ2dTanOnRad::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2dTanOnRad::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be carefull: the Index is only a way to get all the solutions, but is not associated to theses outside the context of the algorithm-object. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (Geom2dGcc_Circ2dTanOnRad::*)( const Standard_Integer ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Circ2dTanOnRad::*)( const Standard_Integer ,  GccEnt_Position &  ) const>(&Geom2dGcc_Circ2dTanOnRad::WhichQualifier),
             R"#(Returns the qualifier Qualif1 of the tangency argument for the solution of index Index computed by this algorithm. The returned qualifier is: - that specified at the start of construction when the solutions are defined as enclosed, enclosing or outside with respect to the arguments, or - that computed during construction (i.e. enclosed, enclosing or outside) when the solutions are defined as unqualified with respect to the arguments, or - GccEnt_noqualifier if the tangency argument is a point. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("Qualif1"))
        .def("IsTheSame1",
             (Standard_Boolean (Geom2dGcc_Circ2dTanOnRad::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2dTanOnRad::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2dTanOnRad::IsTheSame1),
             R"#(Returns true if the solution of index Index and the first argument of this algorithm are the same (i.e. there are 2 identical circles). If Rarg is the radius of the first argument, Rsol is the radius of the solution and dist is the distance between the two centers, we consider the two circles to be identical if |Rarg - Rsol| and dist are less than or equal to the tolerance criterion given at the time of construction of this algorithm. OutOfRange is raised if Index is greater than the number of solutions. notDone is raised if the construction algorithm did not succeed.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Circ2dTanOnRad &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point on the solution curv. ParArg is the intrinsic parameter of the point on the argument curv. PntSol is the tangency point on the solution curv. PntArg is the tangency point on the argument curv. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("PntSol"))
        .def("CenterOn3",
             []( Geom2dGcc_Circ2dTanOnRad &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParArg; self.CenterOn3(Index,ParArg,PntSol); return std::make_tuple(ParArg); },
             R"#(Returns the center PntSol on the second argument (i.e. line or circle) of the solution of index Index computed by this algorithm. ParArg is the intrinsic parameter of the point on the argument curv. PntSol is the center point of the solution curv. PntArg is the projection of PntSol on the argument curv. Exceptions: Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Circ2dTanOnRadGeo , shared_ptr<Geom2dGcc_Circ2dTanOnRadGeo>  >>(m.attr("Geom2dGcc_Circ2dTanOnRadGeo"))
        .def(py::init< const Geom2dGcc_QCurve &,const gp_Lin2d &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("OnLine"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QCurve &,const gp_Circ2d &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("OnCirc"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const Geom2dAdaptor_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("OnCurv"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const Geom2dAdaptor_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("OnCurv"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const Geom2dGcc_QCurve &,const Geom2dAdaptor_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("OnCurv"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const gp_Pnt2d &,const Geom2dAdaptor_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("Point1"),  py::arg("OnCurv"),  py::arg("Radius"),  py::arg("Tolerance") )
    // methods
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Circ2dTanOnRadGeo::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Circ2dTanOnRadGeo::*)() const>(&Geom2dGcc_Circ2dTanOnRadGeo::IsDone),
             R"#(This method returns True if the construction algorithm succeeded.)#" )
        .def("NbSolutions",
             (Standard_Integer (Geom2dGcc_Circ2dTanOnRadGeo::*)() const) static_cast<Standard_Integer (Geom2dGcc_Circ2dTanOnRadGeo::*)() const>(&Geom2dGcc_Circ2dTanOnRadGeo::NbSolutions),
             R"#(This method returns the number of solutions. It raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("ThisSolution",
             (gp_Circ2d (Geom2dGcc_Circ2dTanOnRadGeo::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (Geom2dGcc_Circ2dTanOnRadGeo::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2dTanOnRadGeo::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be careful: the Index is only a way to get all the solutions, but is not associated to theses outside the context of the algorithm-object. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (Geom2dGcc_Circ2dTanOnRadGeo::*)( const Standard_Integer ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Circ2dTanOnRadGeo::*)( const Standard_Integer ,  GccEnt_Position &  ) const>(&Geom2dGcc_Circ2dTanOnRadGeo::WhichQualifier),
             R"#(None)#"  , py::arg("Index"),  py::arg("Qualif1"))
        .def("IsTheSame1",
             (Standard_Boolean (Geom2dGcc_Circ2dTanOnRadGeo::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dGcc_Circ2dTanOnRadGeo::*)( const Standard_Integer  ) const>(&Geom2dGcc_Circ2dTanOnRadGeo::IsTheSame1),
             R"#(Returns True if the solution number Index is equal to the first argument and False in the other cases. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Circ2dTanOnRadGeo &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point on the solution curv. ParArg is the intrinsic parameter of the point on the argument curv. PntSol is the tangency point on the solution curv. PntArg is the tangency point on the argument curv. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("PntSol"))
        .def("CenterOn3",
             []( Geom2dGcc_Circ2dTanOnRadGeo &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParArg; self.CenterOn3(Index,ParArg,PntSol); return std::make_tuple(ParArg); },
             R"#(Returns informations about the center (on the curv) of the result. ParArg is the intrinsic parameter of the point on the argument curv. PntSol is the center point of the solution curv. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<Geom2dGcc_CurveTool , shared_ptr<Geom2dGcc_CurveTool>>(m,"Geom2dGcc_CurveTool");

    static_cast<py::class_<Geom2dGcc_CurveTool , shared_ptr<Geom2dGcc_CurveTool>  >>(m.attr("Geom2dGcc_CurveTool"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const Geom2dAdaptor_Curve &  ) ) static_cast<Standard_Real (*)( const Geom2dAdaptor_Curve &  ) >(&Geom2dGcc_CurveTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const Geom2dAdaptor_Curve &  ) ) static_cast<Standard_Real (*)( const Geom2dAdaptor_Curve &  ) >(&Geom2dGcc_CurveTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("EpsX_s",
                    (Standard_Real (*)( const Geom2dAdaptor_Curve & ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Geom2dAdaptor_Curve & ,  const Standard_Real  ) >(&Geom2dGcc_CurveTool::EpsX),
                    R"#(None)#"  , py::arg("C"),  py::arg("Tol"))
        .def_static("NbSamples_s",
                    (Standard_Integer (*)( const Geom2dAdaptor_Curve &  ) ) static_cast<Standard_Integer (*)( const Geom2dAdaptor_Curve &  ) >(&Geom2dGcc_CurveTool::NbSamples),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Geom2dAdaptor_Curve & ,  const Standard_Real  ) ) static_cast<gp_Pnt2d (*)( const Geom2dAdaptor_Curve & ,  const Standard_Real  ) >(&Geom2dGcc_CurveTool::Value),
                    R"#(None)#"  , py::arg("C"),  py::arg("X"))
        .def_static("D1_s",
                    (void (*)( const Geom2dAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Geom2dAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&Geom2dGcc_CurveTool::D1),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("T"))
        .def_static("D2_s",
                    (void (*)( const Geom2dAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Geom2dAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&Geom2dGcc_CurveTool::D2),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("T"),  py::arg("N"))
        .def_static("D3_s",
                    (void (*)( const Geom2dAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Geom2dAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&Geom2dGcc_CurveTool::D3),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("T"),  py::arg("N"),  py::arg("dN"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_FunctionTanCirCu , shared_ptr<Geom2dGcc_FunctionTanCirCu>  , math_FunctionWithDerivative >>(m.attr("Geom2dGcc_FunctionTanCirCu"))
        .def(py::init< const gp_Circ2d &,const Geom2dAdaptor_Curve & >()  , py::arg("Circ"),  py::arg("Curv") )
    // methods
        .def("Value",
             (Standard_Boolean (Geom2dGcc_FunctionTanCirCu::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCirCu::*)( const Standard_Real ,  Standard_Real &  ) >(&Geom2dGcc_FunctionTanCirCu::Value),
             R"#(Computes the value of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Geom2dGcc_FunctionTanCirCu::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCirCu::*)( const Standard_Real ,  Standard_Real &  ) >(&Geom2dGcc_FunctionTanCirCu::Derivative),
             R"#(Computes the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("Deriv"))
        .def("Values",
             (Standard_Boolean (Geom2dGcc_FunctionTanCirCu::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCirCu::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Geom2dGcc_FunctionTanCirCu::Values),
             R"#(Computes the value and the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("Deriv"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_FunctionTanCuCu , shared_ptr<Geom2dGcc_FunctionTanCuCu>  , math_FunctionSetWithDerivatives >>(m.attr("Geom2dGcc_FunctionTanCuCu"))
        .def(py::init< const Geom2dAdaptor_Curve &,const Geom2dAdaptor_Curve & >()  , py::arg("Curv1"),  py::arg("Curv2") )
        .def(py::init< const gp_Circ2d &,const Geom2dAdaptor_Curve & >()  , py::arg("Circ1"),  py::arg("Curv2") )
    // methods
        .def("InitDerivative",
             (void (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&Geom2dGcc_FunctionTanCuCu::InitDerivative),
             R"#(None)#"  , py::arg("X"),  py::arg("Point1"),  py::arg("Point2"),  py::arg("Tan1"),  py::arg("Tan2"),  py::arg("D21"),  py::arg("D22"))
        .def("NbVariables",
             (Standard_Integer (Geom2dGcc_FunctionTanCuCu::*)() const) static_cast<Standard_Integer (Geom2dGcc_FunctionTanCuCu::*)() const>(&Geom2dGcc_FunctionTanCuCu::NbVariables),
             R"#(returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (Geom2dGcc_FunctionTanCuCu::*)() const) static_cast<Standard_Integer (Geom2dGcc_FunctionTanCuCu::*)() const>(&Geom2dGcc_FunctionTanCuCu::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & ,  math_Vector &  ) >(&Geom2dGcc_FunctionTanCuCu::Value),
             R"#(Computes the value of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & ,  math_Matrix &  ) >(&Geom2dGcc_FunctionTanCuCu::Derivatives),
             R"#(Computes the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("Deriv"))
        .def("Values",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Geom2dGcc_FunctionTanCuCu::Values),
             R"#(Computes the value and the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("Deriv"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_FunctionTanCuCuCu , shared_ptr<Geom2dGcc_FunctionTanCuCuCu>  , math_FunctionSetWithDerivatives >>(m.attr("Geom2dGcc_FunctionTanCuCuCu"))
        .def(py::init< const Geom2dAdaptor_Curve &,const Geom2dAdaptor_Curve &,const Geom2dAdaptor_Curve & >()  , py::arg("C1"),  py::arg("C2"),  py::arg("C3") )
        .def(py::init< const gp_Circ2d &,const Geom2dAdaptor_Curve &,const Geom2dAdaptor_Curve & >()  , py::arg("C1"),  py::arg("C2"),  py::arg("C3") )
        .def(py::init< const gp_Circ2d &,const gp_Circ2d &,const Geom2dAdaptor_Curve & >()  , py::arg("C1"),  py::arg("C2"),  py::arg("C3") )
        .def(py::init< const gp_Circ2d &,const gp_Lin2d &,const Geom2dAdaptor_Curve & >()  , py::arg("C1"),  py::arg("L2"),  py::arg("C3") )
        .def(py::init< const gp_Lin2d &,const gp_Lin2d &,const Geom2dAdaptor_Curve & >()  , py::arg("L1"),  py::arg("L2"),  py::arg("C3") )
        .def(py::init< const gp_Lin2d &,const Geom2dAdaptor_Curve &,const Geom2dAdaptor_Curve & >()  , py::arg("L1"),  py::arg("C2"),  py::arg("C3") )
    // methods
        .def("InitDerivative",
             (void (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&Geom2dGcc_FunctionTanCuCuCu::InitDerivative),
             R"#(None)#"  , py::arg("X"),  py::arg("Point1"),  py::arg("Point2"),  py::arg("Point3"),  py::arg("Tan1"),  py::arg("Tan2"),  py::arg("Tan3"),  py::arg("D21"),  py::arg("D22"),  py::arg("D23"))
        .def("NbVariables",
             (Standard_Integer (Geom2dGcc_FunctionTanCuCuCu::*)() const) static_cast<Standard_Integer (Geom2dGcc_FunctionTanCuCuCu::*)() const>(&Geom2dGcc_FunctionTanCuCuCu::NbVariables),
             R"#(Returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (Geom2dGcc_FunctionTanCuCuCu::*)() const) static_cast<Standard_Integer (Geom2dGcc_FunctionTanCuCuCu::*)() const>(&Geom2dGcc_FunctionTanCuCuCu::NbEquations),
             R"#(Returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & ,  math_Vector &  ) >(&Geom2dGcc_FunctionTanCuCuCu::Value),
             R"#(Computes the values of the Functions for the variable <X>.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & ,  math_Matrix &  ) >(&Geom2dGcc_FunctionTanCuCuCu::Derivatives),
             R"#(Returns the values of the derivatives for the variable <X>.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Geom2dGcc_FunctionTanCuCuCu::Values),
             R"#(Returns the values of the functions and the derivatives for the variable <X>.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_FunctionTanCuCuOnCu , shared_ptr<Geom2dGcc_FunctionTanCuCuOnCu>  , math_FunctionSetWithDerivatives >>(m.attr("Geom2dGcc_FunctionTanCuCuOnCu"))
        .def(py::init< const Geom2dAdaptor_Curve &,const Geom2dAdaptor_Curve &,const gp_Circ2d &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("OnCi"),  py::arg("Rad") )
        .def(py::init< const gp_Circ2d &,const Geom2dAdaptor_Curve &,const gp_Circ2d &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("OnCi"),  py::arg("Rad") )
        .def(py::init< const gp_Lin2d &,const Geom2dAdaptor_Curve &,const gp_Circ2d &,const Standard_Real >()  , py::arg("L1"),  py::arg("C2"),  py::arg("OnCi"),  py::arg("Rad") )
        .def(py::init< const Geom2dAdaptor_Curve &,const gp_Pnt2d &,const gp_Circ2d &,const Standard_Real >()  , py::arg("C1"),  py::arg("P2"),  py::arg("OnCi"),  py::arg("Rad") )
        .def(py::init< const Geom2dAdaptor_Curve &,const Geom2dAdaptor_Curve &,const gp_Lin2d &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("OnLi"),  py::arg("Rad") )
        .def(py::init< const gp_Circ2d &,const Geom2dAdaptor_Curve &,const gp_Lin2d &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("OnLi"),  py::arg("Rad") )
        .def(py::init< const gp_Lin2d &,const Geom2dAdaptor_Curve &,const gp_Lin2d &,const Standard_Real >()  , py::arg("L1"),  py::arg("C2"),  py::arg("OnLi"),  py::arg("Rad") )
        .def(py::init< const Geom2dAdaptor_Curve &,const gp_Pnt2d &,const gp_Lin2d &,const Standard_Real >()  , py::arg("C1"),  py::arg("P2"),  py::arg("OnLi"),  py::arg("Rad") )
        .def(py::init< const Geom2dAdaptor_Curve &,const Geom2dAdaptor_Curve &,const Geom2dAdaptor_Curve &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("OnCu"),  py::arg("Rad") )
        .def(py::init< const gp_Circ2d &,const Geom2dAdaptor_Curve &,const Geom2dAdaptor_Curve &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("OnCu"),  py::arg("Rad") )
        .def(py::init< const gp_Lin2d &,const Geom2dAdaptor_Curve &,const Geom2dAdaptor_Curve &,const Standard_Real >()  , py::arg("L1"),  py::arg("C2"),  py::arg("OnCu"),  py::arg("Rad") )
        .def(py::init< const Geom2dAdaptor_Curve &,const gp_Pnt2d &,const Geom2dAdaptor_Curve &,const Standard_Real >()  , py::arg("C1"),  py::arg("P1"),  py::arg("OnCu"),  py::arg("Rad") )
    // methods
        .def("InitDerivative",
             (void (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&Geom2dGcc_FunctionTanCuCuOnCu::InitDerivative),
             R"#(None)#"  , py::arg("X"),  py::arg("Point1"),  py::arg("Point2"),  py::arg("Point3"),  py::arg("Tan1"),  py::arg("Tan2"),  py::arg("Tan3"),  py::arg("D21"),  py::arg("D22"),  py::arg("D23"))
        .def("NbVariables",
             (Standard_Integer (Geom2dGcc_FunctionTanCuCuOnCu::*)() const) static_cast<Standard_Integer (Geom2dGcc_FunctionTanCuCuOnCu::*)() const>(&Geom2dGcc_FunctionTanCuCuOnCu::NbVariables),
             R"#(Returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (Geom2dGcc_FunctionTanCuCuOnCu::*)() const) static_cast<Standard_Integer (Geom2dGcc_FunctionTanCuCuOnCu::*)() const>(&Geom2dGcc_FunctionTanCuCuOnCu::NbEquations),
             R"#(Returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & ,  math_Vector &  ) >(&Geom2dGcc_FunctionTanCuCuOnCu::Value),
             R"#(Computes the values of the Functions for the variable <X>.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & ,  math_Matrix &  ) >(&Geom2dGcc_FunctionTanCuCuOnCu::Derivatives),
             R"#(Returns the values of the derivatives for the variable <X>.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Geom2dGcc_FunctionTanCuCuOnCu::Values),
             R"#(Returns the values of the functions and the derivatives for the variable <X>.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_FunctionTanCuPnt , shared_ptr<Geom2dGcc_FunctionTanCuPnt>  , math_FunctionWithDerivative >>(m.attr("Geom2dGcc_FunctionTanCuPnt"))
        .def(py::init< const Geom2dAdaptor_Curve &,const gp_Pnt2d & >()  , py::arg("C"),  py::arg("Point") )
    // methods
        .def("Value",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuPnt::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuPnt::*)( const Standard_Real ,  Standard_Real &  ) >(&Geom2dGcc_FunctionTanCuPnt::Value),
             R"#(Computes the value of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuPnt::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuPnt::*)( const Standard_Real ,  Standard_Real &  ) >(&Geom2dGcc_FunctionTanCuPnt::Derivative),
             R"#(Computes the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("Deriv"))
        .def("Values",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuPnt::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuPnt::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Geom2dGcc_FunctionTanCuPnt::Values),
             R"#(Computes the value and the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("Deriv"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_FunctionTanObl , shared_ptr<Geom2dGcc_FunctionTanObl>  , math_FunctionWithDerivative >>(m.attr("Geom2dGcc_FunctionTanObl"))
        .def(py::init< const Geom2dAdaptor_Curve &,const gp_Dir2d & >()  , py::arg("Curve"),  py::arg("Dir") )
    // methods
        .def("Value",
             (Standard_Boolean (Geom2dGcc_FunctionTanObl::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanObl::*)( const Standard_Real ,  Standard_Real &  ) >(&Geom2dGcc_FunctionTanObl::Value),
             R"#(Computes the value of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Geom2dGcc_FunctionTanObl::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanObl::*)( const Standard_Real ,  Standard_Real &  ) >(&Geom2dGcc_FunctionTanObl::Derivative),
             R"#(Computes the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("Deriv"))
        .def("Values",
             (Standard_Boolean (Geom2dGcc_FunctionTanObl::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanObl::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Geom2dGcc_FunctionTanObl::Values),
             R"#(Computes the value and the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("Deriv"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Lin2d2Tan , shared_ptr<Geom2dGcc_Lin2d2Tan>  >>(m.attr("Geom2dGcc_Lin2d2Tan"))
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const Geom2dGcc_QualifiedCurve &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Tolang") )
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("ThePoint"),  py::arg("Tolang") )
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const Geom2dGcc_QualifiedCurve &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Tolang"),  py::arg("Param1"),  py::arg("Param2") )
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const gp_Pnt2d &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("ThePoint"),  py::arg("Tolang"),  py::arg("Param1") )
    // methods
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Lin2d2Tan::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Lin2d2Tan::*)() const>(&Geom2dGcc_Lin2d2Tan::IsDone),
             R"#(Returns true if the construction algorithm does not fail (even if it finds no solution). Note: IsDone protects against a failure arising from a more internal intersection algorithm, which has reached its numeric limits.)#" )
        .def("NbSolutions",
             (Standard_Integer (Geom2dGcc_Lin2d2Tan::*)() const) static_cast<Standard_Integer (Geom2dGcc_Lin2d2Tan::*)() const>(&Geom2dGcc_Lin2d2Tan::NbSolutions),
             R"#(Returns the number of lines, representing solutions computed by this algorithm. Exceptions StdFail_NotDone if the construction fails.R)#" )
        .def("ThisSolution",
             (gp_Lin2d (Geom2dGcc_Lin2d2Tan::*)( const Standard_Integer  ) const) static_cast<gp_Lin2d (Geom2dGcc_Lin2d2Tan::*)( const Standard_Integer  ) const>(&Geom2dGcc_Lin2d2Tan::ThisSolution),
             R"#(Returns a line, representing the solution of index Index computed by this algorithm. Warning This indexing simply provides a means of consulting the solutions. The index values are not associated with these solutions outside the context of the algorithm object. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (Geom2dGcc_Lin2d2Tan::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Lin2d2Tan::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const>(&Geom2dGcc_Lin2d2Tan::WhichQualifier),
             R"#(Returns the qualifiers Qualif1 and Qualif2 of the tangency arguments for the solution of index Index computed by this algorithm. The returned qualifiers are: - those specified at the start of construction when the solutions are defined as enclosing or outside with respect to the arguments, or - those computed during construction (i.e. enclosing or outside) when the solutions are defined as unqualified with respect to the arguments, or - GccEnt_noqualifier if the tangency argument is a point. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("Qualif1"),  py::arg("Qualif2"))
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Lin2d2Tan &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("PntSol"))
        .def("Tangency2",
             []( Geom2dGcc_Lin2d2Tan &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency2(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Lin2d2TanIter , shared_ptr<Geom2dGcc_Lin2d2TanIter>  >>(m.attr("Geom2dGcc_Lin2d2TanIter"))
        .def(py::init< const Geom2dGcc_QCurve &,const gp_Pnt2d &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("ThePoint"),  py::arg("Param1"),  py::arg("Tolang") )
        .def(py::init< const GccEnt_QualifiedCirc &,const Geom2dGcc_QCurve &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Param2"),  py::arg("Tolang") )
        .def(py::init< const Geom2dGcc_QCurve &,const Geom2dGcc_QCurve &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("Tolang") )
    // methods
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Lin2d2TanIter::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Lin2d2TanIter::*)() const>(&Geom2dGcc_Lin2d2TanIter::IsDone),
             R"#(This methode returns true when there is a solution and false in the other cases.)#" )
        .def("ThisSolution",
             (gp_Lin2d (Geom2dGcc_Lin2d2TanIter::*)() const) static_cast<gp_Lin2d (Geom2dGcc_Lin2d2TanIter::*)() const>(&Geom2dGcc_Lin2d2TanIter::ThisSolution),
             R"#(Returns the solution.)#" )
        .def("WhichQualifier",
             (void (Geom2dGcc_Lin2d2TanIter::*)( GccEnt_Position & ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Lin2d2TanIter::*)( GccEnt_Position & ,  GccEnt_Position &  ) const>(&Geom2dGcc_Lin2d2TanIter::WhichQualifier),
             R"#(None)#"  , py::arg("Qualif1"),  py::arg("Qualif2"))
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Lin2d2TanIter &self , gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv.)#"  , py::arg("PntSol"))
        .def("Tangency2",
             []( Geom2dGcc_Lin2d2TanIter &self , gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency2(ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(None)#"  , py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Lin2dTanObl , shared_ptr<Geom2dGcc_Lin2dTanObl>  >>(m.attr("Geom2dGcc_Lin2dTanObl"))
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const gp_Lin2d &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("TheLin"),  py::arg("TolAng"),  py::arg("Angle") )
        .def(py::init< const Geom2dGcc_QualifiedCurve &,const gp_Lin2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("TheLin"),  py::arg("TolAng"),  py::arg("Param1"),  py::arg("Angle") )
    // methods
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Lin2dTanObl::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Lin2dTanObl::*)() const>(&Geom2dGcc_Lin2dTanObl::IsDone),
             R"#(Returns true if the construction algorithm does not fail (even if it finds no solution). Note: IsDone protects against a failure arising from a more internal intersection algorithm, which has reached its numeric limits.)#" )
        .def("NbSolutions",
             (Standard_Integer (Geom2dGcc_Lin2dTanObl::*)() const) static_cast<Standard_Integer (Geom2dGcc_Lin2dTanObl::*)() const>(&Geom2dGcc_Lin2dTanObl::NbSolutions),
             R"#(Returns the number of lines, representing solutions computed by this algorithm. Exceptions StdFail_NotDone if the construction fails.)#" )
        .def("ThisSolution",
             (gp_Lin2d (Geom2dGcc_Lin2dTanObl::*)( const Standard_Integer  ) const) static_cast<gp_Lin2d (Geom2dGcc_Lin2dTanObl::*)( const Standard_Integer  ) const>(&Geom2dGcc_Lin2dTanObl::ThisSolution),
             R"#(Returns a line, representing the solution of index Index computed by this algorithm. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (Geom2dGcc_Lin2dTanObl::*)( const Standard_Integer ,  GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Lin2dTanObl::*)( const Standard_Integer ,  GccEnt_Position &  ) const>(&Geom2dGcc_Lin2dTanObl::WhichQualifier),
             R"#(Returns the qualifier Qualif1 of the tangency argument for the solution of index Index computed by this algorithm. The returned qualifier is: - that specified at the start of construction when the solutions are defined as enclosing or outside with respect to the argument, or - that computed during construction (i.e. enclosing or outside) when the solutions are defined as unqualified with respect to the argument, or - GccEnt_noqualifier if the tangency argument is a point. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("Qualif1"))
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Lin2dTanObl &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns informations about the tangency point between the result and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv.)#"  , py::arg("Index"),  py::arg("PntSol"))
        .def("Intersection2",
             []( Geom2dGcc_Lin2dTanObl &self , const Standard_Integer Index,gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Intersection2(Index,ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(Returns the point of intersection PntSol between the solution of index Index and the second argument (the line) of this algorithm. ParSol is the parameter of the point PntSol on the solution. ParArg is the parameter of the point PntSol on the second argument (the line). Exceptions StdFail_NotDone if the construction fails. Geom2dGcc_IsParallel if the solution and the second argument (the line) are parallel. Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm.)#"  , py::arg("Index"),  py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_Lin2dTanOblIter , shared_ptr<Geom2dGcc_Lin2dTanOblIter>  >>(m.attr("Geom2dGcc_Lin2dTanOblIter"))
        .def(py::init< const Geom2dGcc_QCurve &,const gp_Lin2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("TheLin"),  py::arg("Param1"),  py::arg("TolAng"),  py::arg("Angle")=static_cast<const Standard_Real>(0) )
    // methods
        .def("IsDone",
             (Standard_Boolean (Geom2dGcc_Lin2dTanOblIter::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Lin2dTanOblIter::*)() const>(&Geom2dGcc_Lin2dTanOblIter::IsDone),
             R"#(This method returns true when there is a solution and false in the other cases.)#" )
        .def("ThisSolution",
             (gp_Lin2d (Geom2dGcc_Lin2dTanOblIter::*)() const) static_cast<gp_Lin2d (Geom2dGcc_Lin2dTanOblIter::*)() const>(&Geom2dGcc_Lin2dTanOblIter::ThisSolution),
             R"#(None)#" )
        .def("WhichQualifier",
             (void (Geom2dGcc_Lin2dTanOblIter::*)( GccEnt_Position &  ) const) static_cast<void (Geom2dGcc_Lin2dTanOblIter::*)( GccEnt_Position &  ) const>(&Geom2dGcc_Lin2dTanOblIter::WhichQualifier),
             R"#(None)#"  , py::arg("Qualif1"))
        .def("IsParallel2",
             (Standard_Boolean (Geom2dGcc_Lin2dTanOblIter::*)() const) static_cast<Standard_Boolean (Geom2dGcc_Lin2dTanOblIter::*)() const>(&Geom2dGcc_Lin2dTanOblIter::IsParallel2),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Tangency1",
             []( Geom2dGcc_Lin2dTanOblIter &self , gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Tangency1(ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(None)#"  , py::arg("PntSol"))
        .def("Intersection2",
             []( Geom2dGcc_Lin2dTanOblIter &self , gp_Pnt2d & PntSol ){ Standard_Real  ParSol; Standard_Real  ParArg; self.Intersection2(ParSol,ParArg,PntSol); return std::make_tuple(ParSol,ParArg); },
             R"#(None)#"  , py::arg("PntSol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_QCurve , shared_ptr<Geom2dGcc_QCurve>  >>(m.attr("Geom2dGcc_QCurve"))
        .def(py::init< const Geom2dAdaptor_Curve &,const GccEnt_Position >()  , py::arg("Curve"),  py::arg("Qualifier") )
    // methods
        .def("Qualified",
             (Geom2dAdaptor_Curve (Geom2dGcc_QCurve::*)() const) static_cast<Geom2dAdaptor_Curve (Geom2dGcc_QCurve::*)() const>(&Geom2dGcc_QCurve::Qualified),
             R"#(None)#" )
        .def("Qualifier",
             (GccEnt_Position (Geom2dGcc_QCurve::*)() const) static_cast<GccEnt_Position (Geom2dGcc_QCurve::*)() const>(&Geom2dGcc_QCurve::Qualifier),
             R"#(None)#" )
        .def("IsUnqualified",
             (Standard_Boolean (Geom2dGcc_QCurve::*)() const) static_cast<Standard_Boolean (Geom2dGcc_QCurve::*)() const>(&Geom2dGcc_QCurve::IsUnqualified),
             R"#(Returns true if the solution is unqualified and false in the other cases.)#" )
        .def("IsEnclosing",
             (Standard_Boolean (Geom2dGcc_QCurve::*)() const) static_cast<Standard_Boolean (Geom2dGcc_QCurve::*)() const>(&Geom2dGcc_QCurve::IsEnclosing),
             R"#(Returns true if the solution is Enclosing the Curv and false in the other cases.)#" )
        .def("IsEnclosed",
             (Standard_Boolean (Geom2dGcc_QCurve::*)() const) static_cast<Standard_Boolean (Geom2dGcc_QCurve::*)() const>(&Geom2dGcc_QCurve::IsEnclosed),
             R"#(Returns true if the solution is Enclosed in the Curv and false in the other cases.)#" )
        .def("IsOutside",
             (Standard_Boolean (Geom2dGcc_QCurve::*)() const) static_cast<Standard_Boolean (Geom2dGcc_QCurve::*)() const>(&Geom2dGcc_QCurve::IsOutside),
             R"#(Returns true if the solution is Outside the Curv and false in the other cases.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dGcc_QualifiedCurve , shared_ptr<Geom2dGcc_QualifiedCurve>  >>(m.attr("Geom2dGcc_QualifiedCurve"))
        .def(py::init< const Geom2dAdaptor_Curve &,const GccEnt_Position >()  , py::arg("Curve"),  py::arg("Qualifier") )
    // methods
        .def("Qualified",
             (Geom2dAdaptor_Curve (Geom2dGcc_QualifiedCurve::*)() const) static_cast<Geom2dAdaptor_Curve (Geom2dGcc_QualifiedCurve::*)() const>(&Geom2dGcc_QualifiedCurve::Qualified),
             R"#(Returns a 2D curve to which the qualifier is assigned. Warning The returned curve is an adapted curve, i.e. an object which is an interface between: - the services provided by a 2D curve from the package Geom2d, - and those required on the curve by a computation algorithm. The Geom2d curve on which the adapted curve is based can be obtained in the following way: myQualifiedCurve = ... ; Geom2dAdaptor_Curve myAdaptedCurve = myQualifiedCurve.Qualified(); Handle(Geom2d_Curve) = myAdaptedCurve.Curve();)#" )
        .def("Qualifier",
             (GccEnt_Position (Geom2dGcc_QualifiedCurve::*)() const) static_cast<GccEnt_Position (Geom2dGcc_QualifiedCurve::*)() const>(&Geom2dGcc_QualifiedCurve::Qualifier),
             R"#(Returns - the qualifier of this qualified curve if it is enclosing, enclosed or outside, or - GccEnt_noqualifier if it is unqualified.)#" )
        .def("IsUnqualified",
             (Standard_Boolean (Geom2dGcc_QualifiedCurve::*)() const) static_cast<Standard_Boolean (Geom2dGcc_QualifiedCurve::*)() const>(&Geom2dGcc_QualifiedCurve::IsUnqualified),
             R"#(Returns true if the solution is unqualified and false in the other cases.)#" )
        .def("IsEnclosing",
             (Standard_Boolean (Geom2dGcc_QualifiedCurve::*)() const) static_cast<Standard_Boolean (Geom2dGcc_QualifiedCurve::*)() const>(&Geom2dGcc_QualifiedCurve::IsEnclosing),
             R"#(It returns true if the solution is Enclosing the Curv and false in the other cases.)#" )
        .def("IsEnclosed",
             (Standard_Boolean (Geom2dGcc_QualifiedCurve::*)() const) static_cast<Standard_Boolean (Geom2dGcc_QualifiedCurve::*)() const>(&Geom2dGcc_QualifiedCurve::IsEnclosed),
             R"#(It returns true if the solution is Enclosed in the Curv and false in the other cases.)#" )
        .def("IsOutside",
             (Standard_Boolean (Geom2dGcc_QualifiedCurve::*)() const) static_cast<Standard_Boolean (Geom2dGcc_QualifiedCurve::*)() const>(&Geom2dGcc_QualifiedCurve::IsOutside),
             R"#(It returns true if the solution is Outside the Curv and false in the other cases.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/Geom2dGcc_CurveTool.hxx
// ./opencascade/Geom2dGcc_QCurve.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanOnGeo.hxx
// ./opencascade/Geom2dGcc_Circ2d3TanIter.hxx
// ./opencascade/Geom2dGcc_Circ2d3Tan.hxx
// ./opencascade/Geom2dGcc_Circ2dTanCenGeo.hxx
// ./opencascade/Geom2dGcc_FunctionTanCirCu.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanRad.hxx
// ./opencascade/Geom2dGcc_Lin2d2Tan.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuCuOnCu.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuCu.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanOnIter.hxx
// ./opencascade/Geom2dGcc_Circ2dTanOnRad.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuPnt.hxx
// ./opencascade/Geom2dGcc_QualifiedCurve.hxx
// ./opencascade/Geom2dGcc_Lin2d2TanIter.hxx
// ./opencascade/Geom2dGcc_Lin2dTanObl.hxx
// ./opencascade/Geom2dGcc_Circ2dTanOnRadGeo.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanRadGeo.hxx
// ./opencascade/Geom2dGcc_Type1.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuCuCu.hxx
// ./opencascade/Geom2dGcc_IsParallel.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanOn.hxx
// ./opencascade/Geom2dGcc_Type3.hxx
// ./opencascade/Geom2dGcc.hxx
// ./opencascade/Geom2dGcc_Circ2dTanCen.hxx
// ./opencascade/Geom2dGcc_Type2.hxx
// ./opencascade/Geom2dGcc_Lin2dTanOblIter.hxx
// ./opencascade/Geom2dGcc_FunctionTanObl.hxx

// operators

// register typdefs


// exceptions
register_occ_exception<Geom2dGcc_IsParallel>(m, "Geom2dGcc_IsParallel");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <GccInt_Bisec.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Standard_NegativeValue.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Lin2d.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <StdFail_NotDone.hxx>
#include <GccInt_Bisec.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Standard_NegativeValue.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <StdFail_NotDone.hxx>
#include <GccInt_Bisec.hxx>
#include <Standard_ConstructionError.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <GccInt_Bisec.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ2d.hxx>
#include <GccEnt_QualifiedCirc.hxx>

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


    static_cast<py::class_<GccAna_CircPnt2dBisec ,std::unique_ptr<GccAna_CircPnt2dBisec>  >>(m.attr("GccAna_CircPnt2dBisec"))
        .def(py::init< const gp_Circ2d &,const gp_Pnt2d & >()  , py::arg("Circle1"),  py::arg("Point2") )
        .def(py::init< const gp_Circ2d &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("Circle1"),  py::arg("Point2"),  py::arg("Tolerance") )
        .def("IsDone",
             (Standard_Boolean (GccAna_CircPnt2dBisec::*)() const) static_cast<Standard_Boolean (GccAna_CircPnt2dBisec::*)() const>(&GccAna_CircPnt2dBisec::IsDone),
             R"#(Returns true (this construction algorithm never fails).)#" )
        .def("NbSolutions",
             (Standard_Integer (GccAna_CircPnt2dBisec::*)() const) static_cast<Standard_Integer (GccAna_CircPnt2dBisec::*)() const>(&GccAna_CircPnt2dBisec::NbSolutions),
             R"#(Returns the number of curves, representing solutions computed by this algorithm.)#" )
        .def("ThisSolution",
             (opencascade::handle<GccInt_Bisec> (GccAna_CircPnt2dBisec::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<GccInt_Bisec> (GccAna_CircPnt2dBisec::*)( const Standard_Integer  ) const>(&GccAna_CircPnt2dBisec::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm.)#"  , py::arg("Index"))
;


    static_cast<py::class_<GccAna_Lin2d2Tan ,std::unique_ptr<GccAna_Lin2d2Tan>  >>(m.attr("GccAna_Lin2d2Tan"))
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("ThePoint1"),  py::arg("ThePoint2"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("ThePoint"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedCirc &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Tolerance") )
        .def("IsDone",
             (Standard_Boolean (GccAna_Lin2d2Tan::*)() const) static_cast<Standard_Boolean (GccAna_Lin2d2Tan::*)() const>(&GccAna_Lin2d2Tan::IsDone),
             R"#(This method returns true when there is a solution and false in the other cases.)#" )
        .def("NbSolutions",
             (Standard_Integer (GccAna_Lin2d2Tan::*)() const) static_cast<Standard_Integer (GccAna_Lin2d2Tan::*)() const>(&GccAna_Lin2d2Tan::NbSolutions),
             R"#(This method returns the number of solutions. Raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("ThisSolution",
             (gp_Lin2d (GccAna_Lin2d2Tan::*)( const Standard_Integer  ) const) static_cast<gp_Lin2d (GccAna_Lin2d2Tan::*)( const Standard_Integer  ) const>(&GccAna_Lin2d2Tan::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be carefull: the Index is only a way to get all the solutions, but is not associated to theses outside the context of the algorithm-object. Raises OutOfRange is raised if Index is greater than the number of solutions. It raises NotDone if the algorithm failed.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (GccAna_Lin2d2Tan::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const) static_cast<void (GccAna_Lin2d2Tan::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const>(&GccAna_Lin2d2Tan::WhichQualifier),
             R"#(Returns the qualifiers Qualif1 and Qualif2 of the tangency arguments for the solution of index Index computed by this algorithm. The returned qualifiers are: - those specified at the start of construction when the solutions are defined as enclosing or outside with respect to the arguments, or - those computed during construction (i.e. enclosing or outside) when the solutions are defined as unqualified with respect to the arguments, or - GccEnt_noqualifier if the tangency argument is a point. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("Qualif1"),  py::arg("Qualif2"))
        .def("Tangency1",
             (void (GccAna_Lin2d2Tan::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Lin2d2Tan::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Lin2d2Tan::Tangency1),
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv. Raises OutOfRange is raised if Index is greater than the number of solutions. It raises NotDone if the algorithm failed.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
        .def("Tangency2",
             (void (GccAna_Lin2d2Tan::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Lin2d2Tan::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Lin2d2Tan::Tangency2),
             R"#(Returns informations about the tangency point between the result number Index and the second argument. ParSol is the intrinsic parameter of the point ParSol on the solution curv. ParArg is the intrinsic parameter of the point PntSol on the argument curv. Raises OutOfRange is raised if Index is greater than the number of solutions. It raises NotDone if the algorithm failed.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
;


    static_cast<py::class_<GccAna_Circ2d2TanOn ,std::unique_ptr<GccAna_Circ2d2TanOn>  >>(m.attr("GccAna_Circ2d2TanOn"))
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedCirc &,const gp_Lin2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnLine"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedLin &,const gp_Lin2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnLine"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const GccEnt_QualifiedLin &,const gp_Lin2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnLine"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const gp_Pnt2d &,const gp_Lin2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point2"),  py::arg("OnLine"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const gp_Pnt2d &,const gp_Lin2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point2"),  py::arg("OnLine"),  py::arg("Tolerance") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const gp_Lin2d &,const Standard_Real >()  , py::arg("Point1"),  py::arg("Point2"),  py::arg("OnLine"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedCirc &,const gp_Circ2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCirc"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedLin &,const gp_Circ2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCirc"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const gp_Pnt2d &,const gp_Circ2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point2"),  py::arg("OnCirc"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const GccEnt_QualifiedLin &,const gp_Circ2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("OnCirc"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const gp_Pnt2d &,const gp_Circ2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point2"),  py::arg("OnCirc"),  py::arg("Tolerance") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const gp_Circ2d &,const Standard_Real >()  , py::arg("Point1"),  py::arg("Point2"),  py::arg("OnCirc"),  py::arg("Tolerance") )
        .def("IsDone",
             (Standard_Boolean (GccAna_Circ2d2TanOn::*)() const) static_cast<Standard_Boolean (GccAna_Circ2d2TanOn::*)() const>(&GccAna_Circ2d2TanOn::IsDone),
             R"#(Returns true if the construction algorithm does not fail (even if it finds no solution). Note: IsDone protects against a failure arising from a more internal intersection algorithm, which has reached its numeric limits.)#" )
        .def("NbSolutions",
             (Standard_Integer (GccAna_Circ2d2TanOn::*)() const) static_cast<Standard_Integer (GccAna_Circ2d2TanOn::*)() const>(&GccAna_Circ2d2TanOn::NbSolutions),
             R"#(Returns the number of circles, representing solutions computed by this algorithm. Exceptions StdFail_NotDone if the construction fails.)#" )
        .def("ThisSolution",
             (gp_Circ2d (GccAna_Circ2d2TanOn::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (GccAna_Circ2d2TanOn::*)( const Standard_Integer  ) const>(&GccAna_Circ2d2TanOn::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be careful: the Index is only a way to get all the solutions, but is not associated to those outside the context of the algorithm-object. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (GccAna_Circ2d2TanOn::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const) static_cast<void (GccAna_Circ2d2TanOn::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const>(&GccAna_Circ2d2TanOn::WhichQualifier),
             R"#(Returns the qualifiers Qualif1 and Qualif2 of the tangency arguments for the solution of index Index computed by this algorithm. The returned qualifiers are: - those specified at the start of construction when the solutions are defined as enclosed, enclosing or outside with respect to the arguments, or - those computed during construction (i.e. enclosed, enclosing or outside) when the solutions are defined as unqualified with respect to the arguments, or - GccEnt_noqualifier if the tangency argument is a point. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("Qualif1"),  py::arg("Qualif2"))
        .def("Tangency1",
             (void (GccAna_Circ2d2TanOn::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Circ2d2TanOn::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Circ2d2TanOn::Tangency1),
             R"#(Returns the informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution ParArg is the intrinsic parameter of the point PntSol on the first argument. Raises OutOfRange if Index is greater than the number of solutions and NotDone if IsDone returns false.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
        .def("Tangency2",
             (void (GccAna_Circ2d2TanOn::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Circ2d2TanOn::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Circ2d2TanOn::Tangency2),
             R"#(Returns the informations about the tangency point between the result number Index and the second argument. ParSol is the intrinsic parameter of the point PntSol on the solution. ParArg is the intrinsic parameter of the point PntSol on the second argument. Raises OutOfRange if Index is greater than the number of solutions and NotDone if IsDone returns false.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
        .def("CenterOn3",
             (void (GccAna_Circ2d2TanOn::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Circ2d2TanOn::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Circ2d2TanOn::CenterOn3),
             R"#(Returns the informations about the center (on the curv) of the result number Index and the third argument. ParArg is the intrinsic parameter of the point PntArg on the third argument. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("ParArg"),  py::arg("PntArg"))
        .def("IsTheSame1",
             (Standard_Boolean (GccAna_Circ2d2TanOn::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (GccAna_Circ2d2TanOn::*)( const Standard_Integer  ) const>(&GccAna_Circ2d2TanOn::IsTheSame1),
             R"#(True if the solution and the first argument are the same (2 circles). If R1 is the radius of the first argument and Rsol the radius of the solution and dist the distance between the two centers, we concider the two circles are identical if R1+dist-Rsol is less than Tolerance. False in the other cases. Raises OutOfRange if Index is greater than the number of solutions and NotDone if IsDone returns false.)#"  , py::arg("Index"))
        .def("IsTheSame2",
             (Standard_Boolean (GccAna_Circ2d2TanOn::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (GccAna_Circ2d2TanOn::*)( const Standard_Integer  ) const>(&GccAna_Circ2d2TanOn::IsTheSame2),
             R"#(True if the solution and the second argument are the same (2 circles). If R2 is the radius of the second argument and Rsol the radius of the solution and dist the distance between the two centers, we concider the two circles are identical if R2+dist-Rsol is less than Tolerance. False in the other cases. Raises OutOfRange if Index is greater than the number of solutions and NotDone if IsDone returns false.)#"  , py::arg("Index"))
;


    static_cast<py::class_<GccAna_Lin2dTanPar ,std::unique_ptr<GccAna_Lin2dTanPar>  >>(m.attr("GccAna_Lin2dTanPar"))
        .def(py::init< const gp_Pnt2d &,const gp_Lin2d & >()  , py::arg("ThePoint"),  py::arg("Lin1") )
        .def(py::init< const GccEnt_QualifiedCirc &,const gp_Lin2d & >()  , py::arg("Qualified1"),  py::arg("Lin1") )
        .def("IsDone",
             (Standard_Boolean (GccAna_Lin2dTanPar::*)() const) static_cast<Standard_Boolean (GccAna_Lin2dTanPar::*)() const>(&GccAna_Lin2dTanPar::IsDone),
             R"#(Returns True if the algorithm succeeded.)#" )
        .def("NbSolutions",
             (Standard_Integer (GccAna_Lin2dTanPar::*)() const) static_cast<Standard_Integer (GccAna_Lin2dTanPar::*)() const>(&GccAna_Lin2dTanPar::NbSolutions),
             R"#(Returns the number of solutions. Raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("ThisSolution",
             (gp_Lin2d (GccAna_Lin2dTanPar::*)( const Standard_Integer  ) const) static_cast<gp_Lin2d (GccAna_Lin2dTanPar::*)( const Standard_Integer  ) const>(&GccAna_Lin2dTanPar::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be careful: the Index is only a way to get all the solutions, but is not associated to those outside the context of the algorithm-object. raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (GccAna_Lin2dTanPar::*)( const Standard_Integer ,  GccEnt_Position &  ) const) static_cast<void (GccAna_Lin2dTanPar::*)( const Standard_Integer ,  GccEnt_Position &  ) const>(&GccAna_Lin2dTanPar::WhichQualifier),
             R"#(Returns the informations about the qualifiers of the tangency arguments concerning the solution number Index. It returns the real qualifiers (the qualifiers given to the constructor method in case of enclosed, enclosing and outside and the qualifiers computed in case of unqualified). Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("Qualif1"))
        .def("Tangency1",
             (void (GccAna_Lin2dTanPar::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Lin2dTanPar::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Lin2dTanPar::Tangency1),
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point on the solution curv. ParArg is the intrinsic parameter of the point on the argument curv. ParArg is equal 0 when the solution is passing thrue a point. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("Pnt"))
;


    static_cast<py::class_<GccAna_Circ2dBisec ,std::unique_ptr<GccAna_Circ2dBisec>  >>(m.attr("GccAna_Circ2dBisec"))
        .def(py::init< const gp_Circ2d &,const gp_Circ2d & >()  , py::arg("Circ1"),  py::arg("Circ2") )
        .def("IsDone",
             (Standard_Boolean (GccAna_Circ2dBisec::*)() const) static_cast<Standard_Boolean (GccAna_Circ2dBisec::*)() const>(&GccAna_Circ2dBisec::IsDone),
             R"#(This method returns True if the construction algorithm succeeded.)#" )
        .def("NbSolutions",
             (Standard_Integer (GccAna_Circ2dBisec::*)() const) static_cast<Standard_Integer (GccAna_Circ2dBisec::*)() const>(&GccAna_Circ2dBisec::NbSolutions),
             R"#(This method returns the number of solutions. Raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("ThisSolution",
             (opencascade::handle<GccInt_Bisec> (GccAna_Circ2dBisec::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<GccInt_Bisec> (GccAna_Circ2dBisec::*)( const Standard_Integer  ) const>(&GccAna_Circ2dBisec::ThisSolution),
             R"#(Returns the solution number Index Raises OutOfRange exception if Index is greater than the number of solutions. It raises NotDone if the construction algorithm didn't succeed.)#"  , py::arg("Index"))
;


    static_cast<py::class_<GccAna_Circ2dTanOnRad ,std::unique_ptr<GccAna_Circ2dTanOnRad>  >>(m.attr("GccAna_Circ2dTanOnRad"))
        .def(py::init< const GccEnt_QualifiedCirc &,const gp_Lin2d &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("OnLine"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const gp_Lin2d &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("OnLine"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const gp_Pnt2d &,const gp_Lin2d &,const Standard_Real,const Standard_Real >()  , py::arg("Point1"),  py::arg("OnLine"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const gp_Circ2d &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("OnCirc"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const gp_Circ2d &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("OnCirc"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const gp_Pnt2d &,const gp_Circ2d &,const Standard_Real,const Standard_Real >()  , py::arg("Point1"),  py::arg("OnCirc"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def("IsDone",
             (Standard_Boolean (GccAna_Circ2dTanOnRad::*)() const) static_cast<Standard_Boolean (GccAna_Circ2dTanOnRad::*)() const>(&GccAna_Circ2dTanOnRad::IsDone),
             R"#(Returns true if the construction algorithm does not fail (even if it finds no solution). Note: IsDone protects against a failure arising from a more internal intersection algorithm, which has reached its numeric limits.)#" )
        .def("NbSolutions",
             (Standard_Integer (GccAna_Circ2dTanOnRad::*)() const) static_cast<Standard_Integer (GccAna_Circ2dTanOnRad::*)() const>(&GccAna_Circ2dTanOnRad::NbSolutions),
             R"#(This method returns the number of circles, representing solutions. Raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("ThisSolution",
             (gp_Circ2d (GccAna_Circ2dTanOnRad::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (GccAna_Circ2dTanOnRad::*)( const Standard_Integer  ) const>(&GccAna_Circ2dTanOnRad::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be careful: the Index is only a way to get all the solutions, but is not associated to theses outside the context of the algorithm-object. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (GccAna_Circ2dTanOnRad::*)( const Standard_Integer ,  GccEnt_Position &  ) const) static_cast<void (GccAna_Circ2dTanOnRad::*)( const Standard_Integer ,  GccEnt_Position &  ) const>(&GccAna_Circ2dTanOnRad::WhichQualifier),
             R"#(Returns the qualifier Qualif1 of the tangency argument for the solution of index Index computed by this algorithm. The returned qualifier is: - that specified at the start of construction when the solutions are defined as enclosed, enclosing or outside with respect to the argument, or - that computed during construction (i.e. enclosed, enclosing or outside) when the solutions are defined as unqualified with respect to the argument, or - GccEnt_noqualifier if the tangency argument is a point. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("Qualif1"))
        .def("Tangency1",
             (void (GccAna_Circ2dTanOnRad::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Circ2dTanOnRad::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Circ2dTanOnRad::Tangency1),
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point on the solution curv. ParArg is the intrinsic parameter of the point on the argument curv. PntSol is the tangency point on the solution curv. PntArg is the tangency point on the argument curv. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
        .def("CenterOn3",
             (void (GccAna_Circ2dTanOnRad::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Circ2dTanOnRad::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Circ2dTanOnRad::CenterOn3),
             R"#(Returns informations about the center (on the curv) of the result. ParArg is the intrinsic parameter of the point on the argument curv. PntSol is the center point of the solution curv. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("ParArg"),  py::arg("PntSol"))
        .def("IsTheSame1",
             (Standard_Boolean (GccAna_Circ2dTanOnRad::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (GccAna_Circ2dTanOnRad::*)( const Standard_Integer  ) const>(&GccAna_Circ2dTanOnRad::IsTheSame1),
             R"#(Returns True if the solution number Index is equal to the first argument and False in the other cases. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"))
;


    static_cast<py::class_<GccAna_LinPnt2dBisec ,std::unique_ptr<GccAna_LinPnt2dBisec>  >>(m.attr("GccAna_LinPnt2dBisec"))
        .def(py::init< const gp_Lin2d &,const gp_Pnt2d & >()  , py::arg("Line1"),  py::arg("Point2") )
        .def("IsDone",
             (Standard_Boolean (GccAna_LinPnt2dBisec::*)() const) static_cast<Standard_Boolean (GccAna_LinPnt2dBisec::*)() const>(&GccAna_LinPnt2dBisec::IsDone),
             R"#(Returns True if the algorithm succeeded.)#" )
        .def("ThisSolution",
             (opencascade::handle<GccInt_Bisec> (GccAna_LinPnt2dBisec::*)() const) static_cast<opencascade::handle<GccInt_Bisec> (GccAna_LinPnt2dBisec::*)() const>(&GccAna_LinPnt2dBisec::ThisSolution),
             R"#(Returns the number of solutions. It raises NotDone if the construction algorithm didn't succeed.)#" )
;


    static_cast<py::class_<GccAna_Pnt2dBisec ,std::unique_ptr<GccAna_Pnt2dBisec>  >>(m.attr("GccAna_Pnt2dBisec"))
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("Point1"),  py::arg("Point2") )
        .def("IsDone",
             (Standard_Boolean (GccAna_Pnt2dBisec::*)() const) static_cast<Standard_Boolean (GccAna_Pnt2dBisec::*)() const>(&GccAna_Pnt2dBisec::IsDone),
             R"#(Returns true (this construction algorithm never fails).)#" )
        .def("HasSolution",
             (Standard_Boolean (GccAna_Pnt2dBisec::*)() const) static_cast<Standard_Boolean (GccAna_Pnt2dBisec::*)() const>(&GccAna_Pnt2dBisec::HasSolution),
             R"#(Returns true if this algorithm has a solution, i.e. if the two points are not coincident.)#" )
        .def("ThisSolution",
             (gp_Lin2d (GccAna_Pnt2dBisec::*)() const) static_cast<gp_Lin2d (GccAna_Pnt2dBisec::*)() const>(&GccAna_Pnt2dBisec::ThisSolution),
             R"#(Returns a line, representing the solution computed by this algorithm.)#" )
;


    static_cast<py::class_<GccAna_Circ2d2TanRad ,std::unique_ptr<GccAna_Circ2d2TanRad>  >>(m.attr("GccAna_Circ2d2TanRad"))
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedCirc &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedLin &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const gp_Pnt2d &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point2"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const gp_Pnt2d &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point2"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const GccEnt_QualifiedLin &,const Standard_Real,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Real,const Standard_Real >()  , py::arg("Point1"),  py::arg("Point2"),  py::arg("Radius"),  py::arg("Tolerance") )
        .def("IsDone",
             (Standard_Boolean (GccAna_Circ2d2TanRad::*)() const) static_cast<Standard_Boolean (GccAna_Circ2d2TanRad::*)() const>(&GccAna_Circ2d2TanRad::IsDone),
             R"#(This method returns True if the algorithm succeeded. Note: IsDone protects against a failure arising from a more internal intersection algorithm, which has reached its numeric limits.)#" )
        .def("NbSolutions",
             (Standard_Integer (GccAna_Circ2d2TanRad::*)() const) static_cast<Standard_Integer (GccAna_Circ2d2TanRad::*)() const>(&GccAna_Circ2d2TanRad::NbSolutions),
             R"#(This method returns the number of circles, representing solutions computed by this algorithm. Exceptions StdFail_NotDone if the construction fails. of solutions.)#" )
        .def("ThisSolution",
             (gp_Circ2d (GccAna_Circ2d2TanRad::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (GccAna_Circ2d2TanRad::*)( const Standard_Integer  ) const>(&GccAna_Circ2d2TanRad::ThisSolution),
             R"#(Returns the solution number Index. Be careful: the Index is only a way to get all the solutions, but is not associated to those outside the context of the algorithm-object. Raises OutOfRange exception if Index is greater than the number of solutions. It raises NotDone if the construction algorithm did not succeed.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (GccAna_Circ2d2TanRad::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const) static_cast<void (GccAna_Circ2d2TanRad::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position &  ) const>(&GccAna_Circ2d2TanRad::WhichQualifier),
             R"#(Returns the information about the qualifiers of the tangency arguments concerning the solution number Index. It returns the real qualifiers (the qualifiers given to the constructor method in case of enclosed, enclosing and outside and the qualifiers computedin case of unqualified).)#"  , py::arg("Index"),  py::arg("Qualif1"),  py::arg("Qualif2"))
        .def("Tangency1",
             (void (GccAna_Circ2d2TanRad::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Circ2d2TanRad::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Circ2d2TanRad::Tangency1),
             R"#(Returns information about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution. ParArg is the intrinsic parameter of the point PntSol on the first argument. Raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the construction algorithm did not succeed)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
        .def("Tangency2",
             (void (GccAna_Circ2d2TanRad::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Circ2d2TanRad::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Circ2d2TanRad::Tangency2),
             R"#(Returns information about the tangency point between the result number Index and the second argument. ParSol is the intrinsic parameter of the point PntSol on the solution. ParArg is the intrinsic parameter of the point PntArg on the second argument. Raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the construction algorithm did not succeed.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
        .def("IsTheSame1",
             (Standard_Boolean (GccAna_Circ2d2TanRad::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (GccAna_Circ2d2TanRad::*)( const Standard_Integer  ) const>(&GccAna_Circ2d2TanRad::IsTheSame1),
             R"#(Returns True if the solution number Index is equal to the first argument. Raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the construction algorithm did not succeed.)#"  , py::arg("Index"))
        .def("IsTheSame2",
             (Standard_Boolean (GccAna_Circ2d2TanRad::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (GccAna_Circ2d2TanRad::*)( const Standard_Integer  ) const>(&GccAna_Circ2d2TanRad::IsTheSame2),
             R"#(Returns True if the solution number Index is equal to the second argument. Raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the construction algorithm did not succeed.)#"  , py::arg("Index"))
;


    static_cast<py::class_<GccAna_Lin2dTanObl ,std::unique_ptr<GccAna_Lin2dTanObl>  >>(m.attr("GccAna_Lin2dTanObl"))
        .def(py::init< const gp_Pnt2d &,const gp_Lin2d &,const Standard_Real >()  , py::arg("ThePoint"),  py::arg("TheLine"),  py::arg("TheAngle") )
        .def(py::init< const GccEnt_QualifiedCirc &,const gp_Lin2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("TheLine"),  py::arg("TheAngle") )
        .def("IsDone",
             (Standard_Boolean (GccAna_Lin2dTanObl::*)() const) static_cast<Standard_Boolean (GccAna_Lin2dTanObl::*)() const>(&GccAna_Lin2dTanObl::IsDone),
             R"#(Returns True if the algorithm succeeded. Note: IsDone protects against a failure arising from a more internal intersection algorithm, which has reached its numeric limits.)#" )
        .def("NbSolutions",
             (Standard_Integer (GccAna_Lin2dTanObl::*)() const) static_cast<Standard_Integer (GccAna_Lin2dTanObl::*)() const>(&GccAna_Lin2dTanObl::NbSolutions),
             R"#(Returns the number of of lines, representing solutions computed by this algorithm. Raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("ThisSolution",
             (gp_Lin2d (GccAna_Lin2dTanObl::*)( const Standard_Integer  ) const) static_cast<gp_Lin2d (GccAna_Lin2dTanObl::*)( const Standard_Integer  ) const>(&GccAna_Lin2dTanObl::ThisSolution),
             R"#(Returns the solution number Index. Be careful: the Index is only a way to get all the solutions, but is not associated to theses outside the context of the algorithm-object. raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (GccAna_Lin2dTanObl::*)( const Standard_Integer ,  GccEnt_Position &  ) const) static_cast<void (GccAna_Lin2dTanObl::*)( const Standard_Integer ,  GccEnt_Position &  ) const>(&GccAna_Lin2dTanObl::WhichQualifier),
             R"#(Returns the qualifier Qualif1 of the tangency argument for the solution of index Index computed by this algorithm. The returned qualifier is: - that specified at the start of construction when the solutions are defined as enclosing or outside with respect to the argument, or - that computed during construction (i.e. enclosing or outside) when the solutions are defined as unqualified with respect to the argument, or - GccEnt_noqualifier if the tangency argument is a point. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("Qualif1"))
        .def("Tangency1",
             (void (GccAna_Lin2dTanObl::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Lin2dTanObl::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Lin2dTanObl::Tangency1),
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point ParSol on the solution curv. ParArg is the intrinsic parameter of the point ParArg on the argument curv. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
        .def("Intersection2",
             (void (GccAna_Lin2dTanObl::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Lin2dTanObl::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Lin2dTanObl::Intersection2),
             R"#(Returns informations about the intersection between the result number Index and the third argument. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
;


    static_cast<py::class_<GccAna_CircLin2dBisec ,std::unique_ptr<GccAna_CircLin2dBisec>  >>(m.attr("GccAna_CircLin2dBisec"))
        .def(py::init< const gp_Circ2d &,const gp_Lin2d & >()  , py::arg("Circle"),  py::arg("Line") )
        .def("IsDone",
             (Standard_Boolean (GccAna_CircLin2dBisec::*)() const) static_cast<Standard_Boolean (GccAna_CircLin2dBisec::*)() const>(&GccAna_CircLin2dBisec::IsDone),
             R"#(Returns true (this construction algorithm never fails).)#" )
        .def("NbSolutions",
             (Standard_Integer (GccAna_CircLin2dBisec::*)() const) static_cast<Standard_Integer (GccAna_CircLin2dBisec::*)() const>(&GccAna_CircLin2dBisec::NbSolutions),
             R"#(Returns the number of curves, representing solutions computed by this algorithm.)#" )
        .def("ThisSolution",
             (opencascade::handle<GccInt_Bisec> (GccAna_CircLin2dBisec::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<GccInt_Bisec> (GccAna_CircLin2dBisec::*)( const Standard_Integer  ) const>(&GccAna_CircLin2dBisec::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm.)#"  , py::arg("Index"))
;


    static_cast<py::class_<GccAna_Circ2dTanCen ,std::unique_ptr<GccAna_Circ2dTanCen>  >>(m.attr("GccAna_Circ2dTanCen"))
        .def(py::init< const GccEnt_QualifiedCirc &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Pcenter"),  py::arg("Tolerance") )
        .def(py::init< const gp_Lin2d &,const gp_Pnt2d & >()  , py::arg("Linetan"),  py::arg("Pcenter") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("Point1"),  py::arg("Pcenter") )
        .def("IsDone",
             (Standard_Boolean (GccAna_Circ2dTanCen::*)() const) static_cast<Standard_Boolean (GccAna_Circ2dTanCen::*)() const>(&GccAna_Circ2dTanCen::IsDone),
             R"#(This method returns True if the construction algorithm succeeded. Note: IsDone protects against a failure arising from a more internal intersection algorithm, which has reached its numeric limits.)#" )
        .def("NbSolutions",
             (Standard_Integer (GccAna_Circ2dTanCen::*)() const) static_cast<Standard_Integer (GccAna_Circ2dTanCen::*)() const>(&GccAna_Circ2dTanCen::NbSolutions),
             R"#(Returns the number of circles, representing solutions computed by this algorithm and raises NotDone exception if the algorithm didn't succeed.)#" )
        .def("ThisSolution",
             (gp_Circ2d (GccAna_Circ2dTanCen::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (GccAna_Circ2dTanCen::*)( const Standard_Integer  ) const>(&GccAna_Circ2dTanCen::ThisSolution),
             R"#(Returns the circle, representing the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be carefull: the Index is only a way to get all the solutions, but is not associated to theses outside the context of the algorithm-object. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions or less than zer)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (GccAna_Circ2dTanCen::*)( const Standard_Integer ,  GccEnt_Position &  ) const) static_cast<void (GccAna_Circ2dTanCen::*)( const Standard_Integer ,  GccEnt_Position &  ) const>(&GccAna_Circ2dTanCen::WhichQualifier),
             R"#(Returns the qualifier Qualif1 of the tangency argument for the solution of index Index computed by this algorithm. The returned qualifier is: - that specified at the start of construction when the solutions are defined as enclosed, enclosing or It returns the real qualifiers (the qualifiers given to the constructor method in case of enclosed, enclosing and outside and the qualifiers computedin case of unqualified).)#"  , py::arg("Index"),  py::arg("Qualif1"))
        .def("Tangency1",
             (void (GccAna_Circ2dTanCen::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Circ2dTanCen::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Circ2dTanCen::Tangency1),
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntArg on the argument curv. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions or less than zero.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
        .def("IsTheSame1",
             (Standard_Boolean (GccAna_Circ2dTanCen::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (GccAna_Circ2dTanCen::*)( const Standard_Integer  ) const>(&GccAna_Circ2dTanCen::IsTheSame1),
             R"#(Returns True if the solution number Index is equal to the first argument. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions or less than zero.)#"  , py::arg("Index"))
;


    static_cast<py::class_<GccAna_Lin2dBisec ,std::unique_ptr<GccAna_Lin2dBisec>  >>(m.attr("GccAna_Lin2dBisec"))
        .def(py::init< const gp_Lin2d &,const gp_Lin2d & >()  , py::arg("Lin1"),  py::arg("Lin2") )
        .def("IsDone",
             (Standard_Boolean (GccAna_Lin2dBisec::*)() const) static_cast<Standard_Boolean (GccAna_Lin2dBisec::*)() const>(&GccAna_Lin2dBisec::IsDone),
             R"#(Returns True when the algorithm succeded.)#" )
        .def("NbSolutions",
             (Standard_Integer (GccAna_Lin2dBisec::*)() const) static_cast<Standard_Integer (GccAna_Lin2dBisec::*)() const>(&GccAna_Lin2dBisec::NbSolutions),
             R"#(Returns the number of solutions and raise NotDone if the constructor wasn't called before.)#" )
        .def("ThisSolution",
             (gp_Lin2d (GccAna_Lin2dBisec::*)( const Standard_Integer  ) const) static_cast<gp_Lin2d (GccAna_Lin2dBisec::*)( const Standard_Integer  ) const>(&GccAna_Lin2dBisec::ThisSolution),
             R"#(Returns the solution number Index . The first solution is the inside one and the second is the outside one. For the first solution the direction is D1+D2 (D1 is the direction of the first argument and D2 the direction of the second argument). For the second solution the direction is D1-D2. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"))
        .def("Intersection1",
             (void (GccAna_Lin2dBisec::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Lin2dBisec::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Lin2dBisec::Intersection1),
             R"#(Returns informations about the intersection point between the result number Index and the first argument. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
        .def("Intersection2",
             (void (GccAna_Lin2dBisec::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Lin2dBisec::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Lin2dBisec::Intersection2),
             R"#(Returns informations about the intersection point between the result number Index and the second argument. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
;


    static_cast<py::class_<GccAna_Circ2d3Tan ,std::unique_ptr<GccAna_Circ2d3Tan>  >>(m.attr("GccAna_Circ2d3Tan"))
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedCirc &,const GccEnt_QualifiedCirc &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Qualified3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedCirc &,const GccEnt_QualifiedLin &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Qualified3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedLin &,const GccEnt_QualifiedLin &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Qualified3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const GccEnt_QualifiedLin &,const GccEnt_QualifiedLin &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Qualified3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedCirc &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Point3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const GccEnt_QualifiedLin &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Point3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const GccEnt_QualifiedLin &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Qualified2"),  py::arg("Point3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedCirc &,const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point2"),  py::arg("Point3"),  py::arg("Tolerance") )
        .def(py::init< const GccEnt_QualifiedLin &,const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("Qualified1"),  py::arg("Point2"),  py::arg("Point3"),  py::arg("Tolerance") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("Point1"),  py::arg("Point2"),  py::arg("Point3"),  py::arg("Tolerance") )
        .def("IsDone",
             (Standard_Boolean (GccAna_Circ2d3Tan::*)() const) static_cast<Standard_Boolean (GccAna_Circ2d3Tan::*)() const>(&GccAna_Circ2d3Tan::IsDone),
             R"#(This method returns True if the construction algorithm succeeded. Note: IsDone protects against a failure arising from a more internal intersection algorithm, which has reached its numeric limits.)#" )
        .def("NbSolutions",
             (Standard_Integer (GccAna_Circ2d3Tan::*)() const) static_cast<Standard_Integer (GccAna_Circ2d3Tan::*)() const>(&GccAna_Circ2d3Tan::NbSolutions),
             R"#(This method returns the number of solutions. Raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("ThisSolution",
             (gp_Circ2d (GccAna_Circ2d3Tan::*)( const Standard_Integer  ) const) static_cast<gp_Circ2d (GccAna_Circ2d3Tan::*)( const Standard_Integer  ) const>(&GccAna_Circ2d3Tan::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be careful: the Index is only a way to get all the solutions, but is not associated to those outside the context of the algorithm-object. Raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the algorithm failed.)#"  , py::arg("Index"))
        .def("WhichQualifier",
             (void (GccAna_Circ2d3Tan::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position & ,  GccEnt_Position &  ) const) static_cast<void (GccAna_Circ2d3Tan::*)( const Standard_Integer ,  GccEnt_Position & ,  GccEnt_Position & ,  GccEnt_Position &  ) const>(&GccAna_Circ2d3Tan::WhichQualifier),
             R"#(Returns the informations about the qualifiers of the tangency arguments concerning the solution number Index. It returns the real qualifiers (the qualifiers given to the constructor method in case of enclosed, enclosing and outside and the qualifiers computedin case of unqualified).)#"  , py::arg("Index"),  py::arg("Qualif1"),  py::arg("Qualif2"),  py::arg("Qualif3"))
        .def("Tangency1",
             (void (GccAna_Circ2d3Tan::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Circ2d3Tan::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Circ2d3Tan::Tangency1),
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntArg on the argument curv. Raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the algorithm failed.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
        .def("Tangency2",
             (void (GccAna_Circ2d3Tan::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Circ2d3Tan::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Circ2d3Tan::Tangency2),
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point Pntsol on the argument curv. Raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the algorithm failed.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
        .def("Tangency3",
             (void (GccAna_Circ2d3Tan::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Circ2d3Tan::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Circ2d3Tan::Tangency3),
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point Pntsol on the argument curv. Raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the algorithm failed.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
        .def("IsTheSame1",
             (Standard_Boolean (GccAna_Circ2d3Tan::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (GccAna_Circ2d3Tan::*)( const Standard_Integer  ) const>(&GccAna_Circ2d3Tan::IsTheSame1),
             R"#(Returns True if the solution number Index is equal to the first argument. Raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the algorithm failed.)#"  , py::arg("Index"))
        .def("IsTheSame2",
             (Standard_Boolean (GccAna_Circ2d3Tan::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (GccAna_Circ2d3Tan::*)( const Standard_Integer  ) const>(&GccAna_Circ2d3Tan::IsTheSame2),
             R"#(Returns True if the solution number Index is equal to the second argument. Raises OutOfRange Index is greater than the number of solutions. It raises NotDone if the algorithm failed.)#"  , py::arg("Index"))
        .def("IsTheSame3",
             (Standard_Boolean (GccAna_Circ2d3Tan::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (GccAna_Circ2d3Tan::*)( const Standard_Integer  ) const>(&GccAna_Circ2d3Tan::IsTheSame3),
             R"#(Returns True if the solution number Index is equal to the third argument. Raises OutOfRange if Index is greater than the number of solutions. It raises NotDone if the algorithm failed.)#"  , py::arg("Index"))
;


    static_cast<py::class_<GccAna_Lin2dTanPer ,std::unique_ptr<GccAna_Lin2dTanPer>  >>(m.attr("GccAna_Lin2dTanPer"))
        .def(py::init< const gp_Pnt2d &,const gp_Lin2d & >()  , py::arg("ThePnt"),  py::arg("TheLin") )
        .def(py::init< const gp_Pnt2d &,const gp_Circ2d & >()  , py::arg("ThePnt"),  py::arg("TheCircle") )
        .def(py::init< const GccEnt_QualifiedCirc &,const gp_Lin2d & >()  , py::arg("Qualified1"),  py::arg("TheLin") )
        .def(py::init< const GccEnt_QualifiedCirc &,const gp_Circ2d & >()  , py::arg("Qualified1"),  py::arg("TheCircle") )
        .def("IsDone",
             (Standard_Boolean (GccAna_Lin2dTanPer::*)() const) static_cast<Standard_Boolean (GccAna_Lin2dTanPer::*)() const>(&GccAna_Lin2dTanPer::IsDone),
             R"#(Returns True if the algorithm succeeded.)#" )
        .def("NbSolutions",
             (Standard_Integer (GccAna_Lin2dTanPer::*)() const) static_cast<Standard_Integer (GccAna_Lin2dTanPer::*)() const>(&GccAna_Lin2dTanPer::NbSolutions),
             R"#(Returns the number of solutions. Raises NotDone if the construction algorithm didn't succeed.)#" )
        .def("WhichQualifier",
             (void (GccAna_Lin2dTanPer::*)( const Standard_Integer ,  GccEnt_Position &  ) const) static_cast<void (GccAna_Lin2dTanPer::*)( const Standard_Integer ,  GccEnt_Position &  ) const>(&GccAna_Lin2dTanPer::WhichQualifier),
             R"#(Returns the qualifier Qualif1 of the tangency argument for the solution of index Index computed by this algorithm. The returned qualifier is: - that specified at the start of construction when the solutions are defined as enclosing or outside with respect to the argument, or - that computed during construction (i.e. enclosing or outside) when the solutions are defined as unqualified with respect to the argument, or - GccEnt_noqualifier if the tangency argument is a point. Exceptions Standard_OutOfRange if Index is less than zero or greater than the number of solutions computed by this algorithm. StdFail_NotDone if the construction fails.)#"  , py::arg("Index"),  py::arg("Qualif1"))
        .def("ThisSolution",
             (gp_Lin2d (GccAna_Lin2dTanPer::*)( const Standard_Integer  ) const) static_cast<gp_Lin2d (GccAna_Lin2dTanPer::*)( const Standard_Integer  ) const>(&GccAna_Lin2dTanPer::ThisSolution),
             R"#(Returns the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be careful: the Index is only a way to get all the solutions, but is not associated to those outside the context of the algorithm-object. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"))
        .def("Tangency1",
             (void (GccAna_Lin2dTanPer::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Lin2dTanPer::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Lin2dTanPer::Tangency1),
             R"#(Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point on the solution curv. ParArg is the intrinsic parameter of the point on the argument curv. If the first argument is a point ParArg is equal zero. raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("Pnt"))
        .def("Intersection2",
             (void (GccAna_Lin2dTanPer::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const) static_cast<void (GccAna_Lin2dTanPer::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  gp_Pnt2d &  ) const>(&GccAna_Lin2dTanPer::Intersection2),
             R"#(Returns informations about the intersection between the solution number Index and the second argument. It returns the first intersection in a case of Lin2dTanPer which is perpendicular to a circle . ParSol is the intrinsic parameter of the point on the solution curv. ParArg is the intrinsic parameter of the point on the argument curv. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions.)#"  , py::arg("Index"),  py::arg("ParSol"),  py::arg("ParArg"),  py::arg("PntSol"))
;

// functions
// ./opencascade/GccAna_CircPnt2dBisec.hxx
// ./opencascade/GccAna_NoSolution.hxx
// ./opencascade/GccAna_Lin2d2Tan.hxx
// ./opencascade/GccAna_Circ2dTanCen.hxx
// ./opencascade/GccAna_Circ2d2TanOn.hxx
// ./opencascade/GccAna_Circ2d2TanRad.hxx
// ./opencascade/GccAna_Lin2dTanPar.hxx
// ./opencascade/GccAna_Circ2d3Tan.hxx
// ./opencascade/GccAna_Circ2dBisec.hxx
// ./opencascade/GccAna_Lin2dTanObl.hxx
// ./opencascade/GccAna_Circ2dTanOnRad.hxx
// ./opencascade/GccAna_Lin2dBisec.hxx
// ./opencascade/GccAna_LinPnt2dBisec.hxx
// ./opencascade/GccAna_CircLin2dBisec.hxx
// ./opencascade/GccAna_Pnt2dBisec.hxx
// ./opencascade/GccAna_Lin2dTanPer.hxx

// operators

// register typdefs
// ./opencascade/GccAna_CircPnt2dBisec.hxx
// ./opencascade/GccAna_NoSolution.hxx
// ./opencascade/GccAna_Lin2d2Tan.hxx
// ./opencascade/GccAna_Circ2dTanCen.hxx
// ./opencascade/GccAna_Circ2d2TanOn.hxx
// ./opencascade/GccAna_Circ2d2TanRad.hxx
// ./opencascade/GccAna_Lin2dTanPar.hxx
// ./opencascade/GccAna_Circ2d3Tan.hxx
// ./opencascade/GccAna_Circ2dBisec.hxx
// ./opencascade/GccAna_Lin2dTanObl.hxx
// ./opencascade/GccAna_Circ2dTanOnRad.hxx
// ./opencascade/GccAna_Lin2dBisec.hxx
// ./opencascade/GccAna_LinPnt2dBisec.hxx
// ./opencascade/GccAna_CircLin2dBisec.hxx
// ./opencascade/GccAna_Pnt2dBisec.hxx
// ./opencascade/GccAna_Lin2dTanPer.hxx


// exceptions
register_occ_exception<GccAna_NoSolution>(m, "GccAna_NoSolution");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


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
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <GeomAdaptor_HSurfaceOfRevolution.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_POnCurv.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Extrema_POnCurv2d.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomAdaptor_HSurfaceOfLinearExtrusion.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <gp_Lin.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <gp_Circ.hxx>
#include <gp_Hypr.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_ExtPExtS.hxx>
#include <Extrema_ExtPRevS.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <gp_Pln.hxx>
#include <gp_Sphere.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Torus.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Adaptor3d_Surface.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_ExtElC.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <math_Matrix.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_CCLocFOfLocECC.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Adaptor3d_Surface.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Pln.hxx>
#include <gp_Cone.hxx>
#include <gp_Torus.hxx>
#include <gp_Sphere.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Extrema_CCLocFOfLocECC2d.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_ExtElC2d.hxx>
#include <Extrema_ECC2d.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>

// module includes
#include <Extrema_Array1OfPOnCurv.hxx>
#include <Extrema_Array1OfPOnCurv2d.hxx>
#include <Extrema_Array1OfPOnSurf.hxx>
#include <Extrema_Array2OfPOnCurv.hxx>
#include <Extrema_Array2OfPOnCurv2d.hxx>
#include <Extrema_Array2OfPOnSurf.hxx>
#include <Extrema_Array2OfPOnSurfParams.hxx>
#include <Extrema_CCLocFOfLocECC.hxx>
#include <Extrema_CCLocFOfLocECC2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_ECC.hxx>
#include <Extrema_ECC2d.hxx>
#include <Extrema_ElementType.hxx>
#include <Extrema_ELPCOfLocateExtPC.hxx>
#include <Extrema_ELPCOfLocateExtPC2d.hxx>
#include <Extrema_EPCOfELPCOfLocateExtPC.hxx>
#include <Extrema_EPCOfELPCOfLocateExtPC2d.hxx>
#include <Extrema_EPCOfExtPC.hxx>
#include <Extrema_EPCOfExtPC2d.hxx>
#include <Extrema_ExtAlgo.hxx>
#include <Extrema_ExtCC.hxx>
#include <Extrema_ExtCC2d.hxx>
#include <Extrema_ExtCS.hxx>
#include <Extrema_ExtElC.hxx>
#include <Extrema_ExtElC2d.hxx>
#include <Extrema_ExtElCS.hxx>
#include <Extrema_ExtElSS.hxx>
#include <Extrema_ExtFlag.hxx>
#include <Extrema_ExtPC.hxx>
#include <Extrema_ExtPC2d.hxx>
#include <Extrema_ExtPElC.hxx>
#include <Extrema_ExtPElC2d.hxx>
#include <Extrema_ExtPElS.hxx>
#include <Extrema_ExtPExtS.hxx>
#include <Extrema_ExtPRevS.hxx>
#include <Extrema_ExtPS.hxx>
#include <Extrema_ExtSS.hxx>
#include <Extrema_FuncExtCS.hxx>
#include <Extrema_FuncExtSS.hxx>
#include <Extrema_FuncPSDist.hxx>
#include <Extrema_FuncPSNorm.hxx>
#include <Extrema_GenExtCS.hxx>
#include <Extrema_GenExtPS.hxx>
#include <Extrema_GenExtSS.hxx>
#include <Extrema_GenLocateExtCS.hxx>
#include <Extrema_GenLocateExtPS.hxx>
#include <Extrema_GenLocateExtSS.hxx>
#include <Extrema_GlobOptFuncCC.hxx>
#include <Extrema_GlobOptFuncCS.hxx>
#include <Extrema_HArray1OfPOnCurv.hxx>
#include <Extrema_HArray1OfPOnCurv2d.hxx>
#include <Extrema_HArray1OfPOnSurf.hxx>
#include <Extrema_HArray2OfPOnCurv.hxx>
#include <Extrema_HArray2OfPOnCurv2d.hxx>
#include <Extrema_HArray2OfPOnSurf.hxx>
#include <Extrema_HArray2OfPOnSurfParams.hxx>
#include <Extrema_HUBTreeOfSphere.hxx>
#include <Extrema_LocateExtCC.hxx>
#include <Extrema_LocateExtCC2d.hxx>
#include <Extrema_LocateExtPC.hxx>
#include <Extrema_LocateExtPC2d.hxx>
#include <Extrema_LocECC.hxx>
#include <Extrema_LocECC2d.hxx>
#include <Extrema_LocEPCOfLocateExtPC.hxx>
#include <Extrema_LocEPCOfLocateExtPC2d.hxx>
#include <Extrema_PCFOfEPCOfELPCOfLocateExtPC.hxx>
#include <Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.hxx>
#include <Extrema_PCFOfEPCOfExtPC.hxx>
#include <Extrema_PCFOfEPCOfExtPC2d.hxx>
#include <Extrema_PCLocFOfLocEPCOfLocateExtPC.hxx>
#include <Extrema_PCLocFOfLocEPCOfLocateExtPC2d.hxx>
#include <Extrema_POnCurv.hxx>
#include <Extrema_POnCurv2d.hxx>
#include <Extrema_POnSurf.hxx>
#include <Extrema_POnSurfParams.hxx>
#include <Extrema_SequenceOfPOnCurv.hxx>
#include <Extrema_SequenceOfPOnCurv2d.hxx>
#include <Extrema_SequenceOfPOnSurf.hxx>

// template related includes
// ./opencascade/Extrema_SequenceOfPOnCurv2d.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_HUBTreeOfSphere.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_HUBTreeOfSphere.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_SequenceOfPOnCurv.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_Array1OfPOnCurv2d.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_Array1OfPOnCurv.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_Array2OfPOnCurv2d.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_Array1OfPOnSurf.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_Array2OfPOnSurfParams.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_SequenceOfPOnSurf.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_Array2OfPOnSurf.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_Array2OfPOnCurv.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Extrema(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Extrema"));


//Python trampoline classes

// classes


    static_cast<py::class_<Extrema_CCLocFOfLocECC , shared_ptr<Extrema_CCLocFOfLocECC>  , math_FunctionSetWithDerivatives >>(m.attr("Extrema_CCLocFOfLocECC"))
    // constructors
        .def(py::init< const Standard_Real >()  , py::arg("thetol")=static_cast<const Standard_Real>(1.0e-10) )
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Curve &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("thetol")=static_cast<const Standard_Real>(1.0e-10) )
    // custom constructors
    // methods
        .def("SetCurve",
             (void (Extrema_CCLocFOfLocECC::*)( const Standard_Integer ,  const Adaptor3d_Curve &  ) ) static_cast<void (Extrema_CCLocFOfLocECC::*)( const Standard_Integer ,  const Adaptor3d_Curve &  ) >(&Extrema_CCLocFOfLocECC::SetCurve),
             R"#(None)#"  , py::arg("theRank"),  py::arg("C1"))
        .def("SetTolerance",
             (void (Extrema_CCLocFOfLocECC::*)( const Standard_Real  ) ) static_cast<void (Extrema_CCLocFOfLocECC::*)( const Standard_Real  ) >(&Extrema_CCLocFOfLocECC::SetTolerance),
             R"#(None)#"  , py::arg("theTol"))
        .def("NbVariables",
             (Standard_Integer (Extrema_CCLocFOfLocECC::*)() const) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC::*)() const>(&Extrema_CCLocFOfLocECC::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (Extrema_CCLocFOfLocECC::*)() const) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC::*)() const>(&Extrema_CCLocFOfLocECC::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_CCLocFOfLocECC::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Extrema_CCLocFOfLocECC::*)( const math_Vector & ,  math_Vector &  ) >(&Extrema_CCLocFOfLocECC::Value),
             R"#(Calculate Fi(U,V).)#"  , py::arg("UV"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Extrema_CCLocFOfLocECC::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Extrema_CCLocFOfLocECC::*)( const math_Vector & ,  math_Matrix &  ) >(&Extrema_CCLocFOfLocECC::Derivatives),
             R"#(Calculate Fi'(U,V).)#"  , py::arg("UV"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_CCLocFOfLocECC::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Extrema_CCLocFOfLocECC::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Extrema_CCLocFOfLocECC::Values),
             R"#(Calculate Fi(U,V) and Fi'(U,V).)#"  , py::arg("UV"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_CCLocFOfLocECC::*)() ) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC::*)() >(&Extrema_CCLocFOfLocECC::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_CCLocFOfLocECC::*)() const) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC::*)() const>(&Extrema_CCLocFOfLocECC::NbExt),
             R"#(Return the number of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_CCLocFOfLocECC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_CCLocFOfLocECC::*)( const Standard_Integer  ) const>(&Extrema_CCLocFOfLocECC::SquareDistance),
             R"#(Return the value of the Nth distance.)#"  , py::arg("N"))
        .def("Points",
             (void (Extrema_CCLocFOfLocECC::*)( const Standard_Integer ,  Extrema_POnCurv & ,  Extrema_POnCurv &  ) const) static_cast<void (Extrema_CCLocFOfLocECC::*)( const Standard_Integer ,  Extrema_POnCurv & ,  Extrema_POnCurv &  ) const>(&Extrema_CCLocFOfLocECC::Points),
             R"#(Return the points of the Nth extreme distance.)#"  , py::arg("N"),  py::arg("P1"),  py::arg("P2"))
        .def("CurvePtr",
             (Standard_Address (Extrema_CCLocFOfLocECC::*)( const Standard_Integer  ) const) static_cast<Standard_Address (Extrema_CCLocFOfLocECC::*)( const Standard_Integer  ) const>(&Extrema_CCLocFOfLocECC::CurvePtr),
             R"#(Returns a pointer to the curve specified in the constructor or in SetCurve() method.)#"  , py::arg("theRank"))
        .def("Tolerance",
             (Standard_Real (Extrema_CCLocFOfLocECC::*)() const) static_cast<Standard_Real (Extrema_CCLocFOfLocECC::*)() const>(&Extrema_CCLocFOfLocECC::Tolerance),
             R"#(Returns a tolerance specified in the constructor or in SetTolerance() method.)#" )
        .def("SubIntervalInitialize",
             (void (Extrema_CCLocFOfLocECC::*)( const math_Vector & ,  const math_Vector &  ) ) static_cast<void (Extrema_CCLocFOfLocECC::*)( const math_Vector & ,  const math_Vector &  ) >(&Extrema_CCLocFOfLocECC::SubIntervalInitialize),
             R"#(Determines of boundaries of subinterval for find of root.)#"  , py::arg("theUfirst"),  py::arg("theUlast"))
        .def("SearchOfTolerance",
             (Standard_Real (Extrema_CCLocFOfLocECC::*)( const Standard_Address  ) ) static_cast<Standard_Real (Extrema_CCLocFOfLocECC::*)( const Standard_Address  ) >(&Extrema_CCLocFOfLocECC::SearchOfTolerance),
             R"#(Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.)#"  , py::arg("C"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_CCLocFOfLocECC2d , shared_ptr<Extrema_CCLocFOfLocECC2d>  , math_FunctionSetWithDerivatives >>(m.attr("Extrema_CCLocFOfLocECC2d"))
    // constructors
        .def(py::init< const Standard_Real >()  , py::arg("thetol")=static_cast<const Standard_Real>(1.0e-10) )
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("thetol")=static_cast<const Standard_Real>(1.0e-10) )
    // custom constructors
    // methods
        .def("SetCurve",
             (void (Extrema_CCLocFOfLocECC2d::*)( const Standard_Integer ,  const Adaptor2d_Curve2d &  ) ) static_cast<void (Extrema_CCLocFOfLocECC2d::*)( const Standard_Integer ,  const Adaptor2d_Curve2d &  ) >(&Extrema_CCLocFOfLocECC2d::SetCurve),
             R"#(None)#"  , py::arg("theRank"),  py::arg("C1"))
        .def("SetTolerance",
             (void (Extrema_CCLocFOfLocECC2d::*)( const Standard_Real  ) ) static_cast<void (Extrema_CCLocFOfLocECC2d::*)( const Standard_Real  ) >(&Extrema_CCLocFOfLocECC2d::SetTolerance),
             R"#(None)#"  , py::arg("theTol"))
        .def("NbVariables",
             (Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const>(&Extrema_CCLocFOfLocECC2d::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const>(&Extrema_CCLocFOfLocECC2d::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & ,  math_Vector &  ) >(&Extrema_CCLocFOfLocECC2d::Value),
             R"#(Calculate Fi(U,V).)#"  , py::arg("UV"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & ,  math_Matrix &  ) >(&Extrema_CCLocFOfLocECC2d::Derivatives),
             R"#(Calculate Fi'(U,V).)#"  , py::arg("UV"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Extrema_CCLocFOfLocECC2d::Values),
             R"#(Calculate Fi(U,V) and Fi'(U,V).)#"  , py::arg("UV"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() ) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() >(&Extrema_CCLocFOfLocECC2d::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const>(&Extrema_CCLocFOfLocECC2d::NbExt),
             R"#(Return the number of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_CCLocFOfLocECC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_CCLocFOfLocECC2d::*)( const Standard_Integer  ) const>(&Extrema_CCLocFOfLocECC2d::SquareDistance),
             R"#(Return the value of the Nth distance.)#"  , py::arg("N"))
        .def("Points",
             (void (Extrema_CCLocFOfLocECC2d::*)( const Standard_Integer ,  Extrema_POnCurv2d & ,  Extrema_POnCurv2d &  ) const) static_cast<void (Extrema_CCLocFOfLocECC2d::*)( const Standard_Integer ,  Extrema_POnCurv2d & ,  Extrema_POnCurv2d &  ) const>(&Extrema_CCLocFOfLocECC2d::Points),
             R"#(Return the points of the Nth extreme distance.)#"  , py::arg("N"),  py::arg("P1"),  py::arg("P2"))
        .def("CurvePtr",
             (Standard_Address (Extrema_CCLocFOfLocECC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Address (Extrema_CCLocFOfLocECC2d::*)( const Standard_Integer  ) const>(&Extrema_CCLocFOfLocECC2d::CurvePtr),
             R"#(Returns a pointer to the curve specified in the constructor or in SetCurve() method.)#"  , py::arg("theRank"))
        .def("Tolerance",
             (Standard_Real (Extrema_CCLocFOfLocECC2d::*)() const) static_cast<Standard_Real (Extrema_CCLocFOfLocECC2d::*)() const>(&Extrema_CCLocFOfLocECC2d::Tolerance),
             R"#(Returns a tolerance specified in the constructor or in SetTolerance() method.)#" )
        .def("SubIntervalInitialize",
             (void (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & ,  const math_Vector &  ) ) static_cast<void (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & ,  const math_Vector &  ) >(&Extrema_CCLocFOfLocECC2d::SubIntervalInitialize),
             R"#(Determines of boundaries of subinterval for find of root.)#"  , py::arg("theUfirst"),  py::arg("theUlast"))
        .def("SearchOfTolerance",
             (Standard_Real (Extrema_CCLocFOfLocECC2d::*)( const Standard_Address  ) ) static_cast<Standard_Real (Extrema_CCLocFOfLocECC2d::*)( const Standard_Address  ) >(&Extrema_CCLocFOfLocECC2d::SearchOfTolerance),
             R"#(Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.)#"  , py::arg("C"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Extrema_Curve2dTool , shared_ptr<Extrema_Curve2dTool>>(m,"Extrema_Curve2dTool");

    static_cast<py::class_<Extrema_Curve2dTool , shared_ptr<Extrema_Curve2dTool>  >>(m.attr("Extrema_Curve2dTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d &  ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d &  ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const Adaptor2d_Curve2d &  ) ) static_cast<GeomAbs_Shape (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::Continuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( const Adaptor2d_Curve2d & ,  const GeomAbs_Shape  ) ) static_cast<Standard_Integer (*)( const Adaptor2d_Curve2d & ,  const GeomAbs_Shape  ) >(&Extrema_Curve2dTool::NbIntervals),
                    R"#(If necessary, breaks the curve in intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Intervals_s",
                    (void (*)( const Adaptor2d_Curve2d & ,  NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) ) static_cast<void (*)( const Adaptor2d_Curve2d & ,  NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) >(&Extrema_Curve2dTool::Intervals),
                    R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("C"),  py::arg("T"),  py::arg("S"))
        .def_static("DeflCurvIntervals_s",
                    (opencascade::handle<TColStd_HArray1OfReal> (*)( const Adaptor2d_Curve2d &  ) ) static_cast<opencascade::handle<TColStd_HArray1OfReal> (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::DeflCurvIntervals),
                    R"#(Returns the parameters bounding the intervals of subdivision of curve according to Curvature deflection. Value of deflection is defined in method.)#"  , py::arg("C"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const Adaptor2d_Curve2d &  ) ) static_cast<Standard_Boolean (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::IsClosed),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const Adaptor2d_Curve2d &  ) ) static_cast<Standard_Boolean (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::IsPeriodic),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Period_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d &  ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::Period),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Adaptor2d_Curve2d & ,  const Standard_Real  ) ) static_cast<gp_Pnt2d (*)( const Adaptor2d_Curve2d & ,  const Standard_Real  ) >(&Extrema_Curve2dTool::Value),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D0_s",
                    (void (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  gp_Pnt2d &  ) ) static_cast<void (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  gp_Pnt2d &  ) >(&Extrema_Curve2dTool::D0),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&Extrema_Curve2dTool::D1),
                    R"#(Computes the point of parameter U on the curve with its first derivative.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def_static("D2_s",
                    (void (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&Extrema_Curve2dTool::D2),
                    R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&Extrema_Curve2dTool::D3),
                    R"#(Returns the point P of parameter U, the first, the second and the third derivative.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<gp_Vec2d (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Integer  ) >(&Extrema_Curve2dTool::DN),
                    R"#(The returned vector gives the value of the derivative for the order of derivation N.)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("Resolution_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & ,  const Standard_Real  ) >(&Extrema_Curve2dTool::Resolution),
                    R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("C"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const Adaptor2d_Curve2d &  ) ) static_cast<GeomAbs_CurveType (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::GetType),
                    R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#"  , py::arg("C"))
        .def_static("Line_s",
                    (gp_Lin2d (*)( const Adaptor2d_Curve2d &  ) ) static_cast<gp_Lin2d (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::Line),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ2d (*)( const Adaptor2d_Curve2d &  ) ) static_cast<gp_Circ2d (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::Circle),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips2d (*)( const Adaptor2d_Curve2d &  ) ) static_cast<gp_Elips2d (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::Ellipse),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr2d (*)( const Adaptor2d_Curve2d &  ) ) static_cast<gp_Hypr2d (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::Hyperbola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab2d (*)( const Adaptor2d_Curve2d &  ) ) static_cast<gp_Parab2d (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::Parabola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Degree_s",
                    (Standard_Integer (*)( const Adaptor2d_Curve2d &  ) ) static_cast<Standard_Integer (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::Degree),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsRational_s",
                    (Standard_Boolean (*)( const Adaptor2d_Curve2d &  ) ) static_cast<Standard_Boolean (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::IsRational),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbPoles_s",
                    (Standard_Integer (*)( const Adaptor2d_Curve2d &  ) ) static_cast<Standard_Integer (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::NbPoles),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbKnots_s",
                    (Standard_Integer (*)( const Adaptor2d_Curve2d &  ) ) static_cast<Standard_Integer (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::NbKnots),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom2d_BezierCurve> (*)( const Adaptor2d_Curve2d &  ) ) static_cast<opencascade::handle<Geom2d_BezierCurve> (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::Bezier),
                    R"#(None)#"  , py::arg("C"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const Adaptor2d_Curve2d &  ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const Adaptor2d_Curve2d &  ) >(&Extrema_Curve2dTool::BSpline),
                    R"#(None)#"  , py::arg("C"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Extrema_CurveTool , shared_ptr<Extrema_CurveTool>>(m,"Extrema_CurveTool");

    static_cast<py::class_<Extrema_CurveTool , shared_ptr<Extrema_CurveTool>  >>(m.attr("Extrema_CurveTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const Adaptor3d_Curve &  ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const Adaptor3d_Curve &  ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const Adaptor3d_Curve &  ) ) static_cast<GeomAbs_Shape (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::Continuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( Adaptor3d_Curve & ,  const GeomAbs_Shape  ) ) static_cast<Standard_Integer (*)( Adaptor3d_Curve & ,  const GeomAbs_Shape  ) >(&Extrema_CurveTool::NbIntervals),
                    R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Intervals_s",
                    (void (*)( Adaptor3d_Curve & ,  NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) ) static_cast<void (*)( Adaptor3d_Curve & ,  NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) >(&Extrema_CurveTool::Intervals),
                    R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("C"),  py::arg("T"),  py::arg("S"))
        .def_static("DeflCurvIntervals_s",
                    (opencascade::handle<TColStd_HArray1OfReal> (*)( const Adaptor3d_Curve &  ) ) static_cast<opencascade::handle<TColStd_HArray1OfReal> (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::DeflCurvIntervals),
                    R"#(Returns the parameters bounding the intervals of subdivision of curve according to Curvature deflection. Value of deflection is defined in method.)#"  , py::arg("C"))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const Adaptor3d_Curve &  ) ) static_cast<Standard_Boolean (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::IsPeriodic),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Period_s",
                    (Standard_Real (*)( const Adaptor3d_Curve &  ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::Period),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Resolution_s",
                    (Standard_Real (*)( const Adaptor3d_Curve & ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve & ,  const Standard_Real  ) >(&Extrema_CurveTool::Resolution),
                    R"#(None)#"  , py::arg("C"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const Adaptor3d_Curve &  ) ) static_cast<GeomAbs_CurveType (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::GetType),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Adaptor3d_Curve & ,  const Standard_Real  ) ) static_cast<gp_Pnt (*)( const Adaptor3d_Curve & ,  const Standard_Real  ) >(&Extrema_CurveTool::Value),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D0_s",
                    (void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  gp_Pnt &  ) ) static_cast<void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  gp_Pnt &  ) >(&Extrema_CurveTool::D0),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) >(&Extrema_CurveTool::D1),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def_static("D2_s",
                    (void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&Extrema_CurveTool::D2),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&Extrema_CurveTool::D3),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Integer  ) >(&Extrema_CurveTool::DN),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("Line_s",
                    (gp_Lin (*)( const Adaptor3d_Curve &  ) ) static_cast<gp_Lin (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::Line),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ (*)( const Adaptor3d_Curve &  ) ) static_cast<gp_Circ (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::Circle),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips (*)( const Adaptor3d_Curve &  ) ) static_cast<gp_Elips (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::Ellipse),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr (*)( const Adaptor3d_Curve &  ) ) static_cast<gp_Hypr (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::Hyperbola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab (*)( const Adaptor3d_Curve &  ) ) static_cast<gp_Parab (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::Parabola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Degree_s",
                    (Standard_Integer (*)( const Adaptor3d_Curve &  ) ) static_cast<Standard_Integer (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::Degree),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsRational_s",
                    (Standard_Boolean (*)( const Adaptor3d_Curve &  ) ) static_cast<Standard_Boolean (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::IsRational),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbPoles_s",
                    (Standard_Integer (*)( const Adaptor3d_Curve &  ) ) static_cast<Standard_Integer (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::NbPoles),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbKnots_s",
                    (Standard_Integer (*)( const Adaptor3d_Curve &  ) ) static_cast<Standard_Integer (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::NbKnots),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom_BezierCurve> (*)( const Adaptor3d_Curve &  ) ) static_cast<opencascade::handle<Geom_BezierCurve> (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::Bezier),
                    R"#(None)#"  , py::arg("C"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom_BSplineCurve> (*)( const Adaptor3d_Curve &  ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (*)( const Adaptor3d_Curve &  ) >(&Extrema_CurveTool::BSpline),
                    R"#(None)#"  , py::arg("C"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ECC , shared_ptr<Extrema_ECC>  >>(m.attr("Extrema_ECC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Curve & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("Vinf"),  py::arg("Vsup") )
    // custom constructors
    // methods
        .def("SetParams",
             (void (Extrema_ECC::*)( const Adaptor3d_Curve & ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ECC::*)( const Adaptor3d_Curve & ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ECC::SetParams),
             R"#(Set params in case of empty constructor is usage.)#"  , py::arg("C1"),  py::arg("C2"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("Vinf"),  py::arg("Vsup"))
        .def("SetTolerance",
             (void (Extrema_ECC::*)( const Standard_Real  ) ) static_cast<void (Extrema_ECC::*)( const Standard_Real  ) >(&Extrema_ECC::SetTolerance),
             R"#(None)#"  , py::arg("Tol"))
        .def("SetSingleSolutionFlag",
             (void (Extrema_ECC::*)( const Standard_Boolean  ) ) static_cast<void (Extrema_ECC::*)( const Standard_Boolean  ) >(&Extrema_ECC::SetSingleSolutionFlag),
             R"#(Set flag for single extrema computation. Works on parametric solver only.)#"  , py::arg("theSingleSolutionFlag"))
        .def("GetSingleSolutionFlag",
             (Standard_Boolean (Extrema_ECC::*)() const) static_cast<Standard_Boolean (Extrema_ECC::*)() const>(&Extrema_ECC::GetSingleSolutionFlag),
             R"#(Get flag for single extrema computation. Works on parametric solver only.)#" )
        .def("Perform",
             (void (Extrema_ECC::*)() ) static_cast<void (Extrema_ECC::*)() >(&Extrema_ECC::Perform),
             R"#(Performs calculations.)#" )
        .def("IsDone",
             (Standard_Boolean (Extrema_ECC::*)() const) static_cast<Standard_Boolean (Extrema_ECC::*)() const>(&Extrema_ECC::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("IsParallel",
             (Standard_Boolean (Extrema_ECC::*)() const) static_cast<Standard_Boolean (Extrema_ECC::*)() const>(&Extrema_ECC::IsParallel),
             R"#(Returns state of myParallel flag.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ECC::*)() const) static_cast<Standard_Integer (Extrema_ECC::*)() const>(&Extrema_ECC::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ECC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ECC::*)( const Standard_Integer  ) const>(&Extrema_ECC::SquareDistance),
             R"#(Returns the value of the Nth square extremum distance.)#"  , py::arg("N")=static_cast<const Standard_Integer>(1))
        .def("Points",
             (void (Extrema_ECC::*)( const Standard_Integer ,  Extrema_POnCurv & ,  Extrema_POnCurv &  ) const) static_cast<void (Extrema_ECC::*)( const Standard_Integer ,  Extrema_POnCurv & ,  Extrema_POnCurv &  ) const>(&Extrema_ECC::Points),
             R"#(Returns the points of the Nth extremum distance. P1 is on the first curve, P2 on the second one.)#"  , py::arg("N"),  py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ECC2d , shared_ptr<Extrema_ECC2d>  >>(m.attr("Extrema_ECC2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("Vinf"),  py::arg("Vsup") )
    // custom constructors
    // methods
        .def("SetParams",
             (void (Extrema_ECC2d::*)( const Adaptor2d_Curve2d & ,  const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ECC2d::*)( const Adaptor2d_Curve2d & ,  const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ECC2d::SetParams),
             R"#(Set params in case of empty constructor is usage.)#"  , py::arg("C1"),  py::arg("C2"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("Vinf"),  py::arg("Vsup"))
        .def("SetTolerance",
             (void (Extrema_ECC2d::*)( const Standard_Real  ) ) static_cast<void (Extrema_ECC2d::*)( const Standard_Real  ) >(&Extrema_ECC2d::SetTolerance),
             R"#(None)#"  , py::arg("Tol"))
        .def("SetSingleSolutionFlag",
             (void (Extrema_ECC2d::*)( const Standard_Boolean  ) ) static_cast<void (Extrema_ECC2d::*)( const Standard_Boolean  ) >(&Extrema_ECC2d::SetSingleSolutionFlag),
             R"#(Set flag for single extrema computation. Works on parametric solver only.)#"  , py::arg("theSingleSolutionFlag"))
        .def("GetSingleSolutionFlag",
             (Standard_Boolean (Extrema_ECC2d::*)() const) static_cast<Standard_Boolean (Extrema_ECC2d::*)() const>(&Extrema_ECC2d::GetSingleSolutionFlag),
             R"#(Get flag for single extrema computation. Works on parametric solver only.)#" )
        .def("Perform",
             (void (Extrema_ECC2d::*)() ) static_cast<void (Extrema_ECC2d::*)() >(&Extrema_ECC2d::Perform),
             R"#(Performs calculations.)#" )
        .def("IsDone",
             (Standard_Boolean (Extrema_ECC2d::*)() const) static_cast<Standard_Boolean (Extrema_ECC2d::*)() const>(&Extrema_ECC2d::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("IsParallel",
             (Standard_Boolean (Extrema_ECC2d::*)() const) static_cast<Standard_Boolean (Extrema_ECC2d::*)() const>(&Extrema_ECC2d::IsParallel),
             R"#(Returns state of myParallel flag.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ECC2d::*)() const) static_cast<Standard_Integer (Extrema_ECC2d::*)() const>(&Extrema_ECC2d::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ECC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ECC2d::*)( const Standard_Integer  ) const>(&Extrema_ECC2d::SquareDistance),
             R"#(Returns the value of the Nth square extremum distance.)#"  , py::arg("N")=static_cast<const Standard_Integer>(1))
        .def("Points",
             (void (Extrema_ECC2d::*)( const Standard_Integer ,  Extrema_POnCurv2d & ,  Extrema_POnCurv2d &  ) const) static_cast<void (Extrema_ECC2d::*)( const Standard_Integer ,  Extrema_POnCurv2d & ,  Extrema_POnCurv2d &  ) const>(&Extrema_ECC2d::Points),
             R"#(Returns the points of the Nth extremum distance. P1 is on the first curve, P2 on the second one.)#"  , py::arg("N"),  py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ELPCOfLocateExtPC , shared_ptr<Extrema_ELPCOfLocateExtPC>  >>(m.attr("Extrema_ELPCOfLocateExtPC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("TolF")=static_cast<const Standard_Real>(1.0e-10) )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve &,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("TolF")=static_cast<const Standard_Real>(1.0e-10) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_ELPCOfLocateExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ELPCOfLocateExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ELPCOfLocateExtPC::Initialize),
             R"#(initializes the fields of the algorithm.)#"  , py::arg("C"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("TolF")=static_cast<const Standard_Real>(1.0e-10))
        .def("Perform",
             (void (Extrema_ELPCOfLocateExtPC::*)( const gp_Pnt &  ) ) static_cast<void (Extrema_ELPCOfLocateExtPC::*)( const gp_Pnt &  ) >(&Extrema_ELPCOfLocateExtPC::Perform),
             R"#(An exception is raised if the fields have not been initialized.)#"  , py::arg("P"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ELPCOfLocateExtPC::*)() const) static_cast<Standard_Boolean (Extrema_ELPCOfLocateExtPC::*)() const>(&Extrema_ELPCOfLocateExtPC::IsDone),
             R"#(True if the distances are found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ELPCOfLocateExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ELPCOfLocateExtPC::*)( const Standard_Integer  ) const>(&Extrema_ELPCOfLocateExtPC::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
        .def("NbExt",
             (Standard_Integer (Extrema_ELPCOfLocateExtPC::*)() const) static_cast<Standard_Integer (Extrema_ELPCOfLocateExtPC::*)() const>(&Extrema_ELPCOfLocateExtPC::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("IsMin",
             (Standard_Boolean (Extrema_ELPCOfLocateExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_ELPCOfLocateExtPC::*)( const Standard_Integer  ) const>(&Extrema_ELPCOfLocateExtPC::IsMin),
             R"#(Returns True if the <N>th extremum distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv & (Extrema_ELPCOfLocateExtPC::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv & (Extrema_ELPCOfLocateExtPC::*)( const Standard_Integer  ) const>(&Extrema_ELPCOfLocateExtPC::Point),
             R"#(Returns the point of the <N>th extremum distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
        .def("TrimmedSquareDistances",
             []( Extrema_ELPCOfLocateExtPC &self , gp_Pnt & P1,gp_Pnt & P2 ){ Standard_Real  dist1; Standard_Real  dist2; self.TrimmedSquareDistances(dist1,dist2,P1,P2); return std::make_tuple(dist1,dist2); },
             R"#(if the curve is a trimmed curve, dist1 is a square distance between <P> and the point of parameter FirstParameter <P1> and dist2 is a square distance between <P> and the point of parameter LastParameter <P2>.)#"  , py::arg("P1"),  py::arg("P2"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ELPCOfLocateExtPC2d , shared_ptr<Extrema_ELPCOfLocateExtPC2d>  >>(m.attr("Extrema_ELPCOfLocateExtPC2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("TolF")=static_cast<const Standard_Real>(1.0e-10) )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("TolF")=static_cast<const Standard_Real>(1.0e-10) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_ELPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ELPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ELPCOfLocateExtPC2d::Initialize),
             R"#(initializes the fields of the algorithm.)#"  , py::arg("C"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("TolF")=static_cast<const Standard_Real>(1.0e-10))
        .def("Perform",
             (void (Extrema_ELPCOfLocateExtPC2d::*)( const gp_Pnt2d &  ) ) static_cast<void (Extrema_ELPCOfLocateExtPC2d::*)( const gp_Pnt2d &  ) >(&Extrema_ELPCOfLocateExtPC2d::Perform),
             R"#(An exception is raised if the fields have not been initialized.)#"  , py::arg("P"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ELPCOfLocateExtPC2d::*)() const) static_cast<Standard_Boolean (Extrema_ELPCOfLocateExtPC2d::*)() const>(&Extrema_ELPCOfLocateExtPC2d::IsDone),
             R"#(True if the distances are found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_ELPCOfLocateExtPC2d::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
        .def("NbExt",
             (Standard_Integer (Extrema_ELPCOfLocateExtPC2d::*)() const) static_cast<Standard_Integer (Extrema_ELPCOfLocateExtPC2d::*)() const>(&Extrema_ELPCOfLocateExtPC2d::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("IsMin",
             (Standard_Boolean (Extrema_ELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_ELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_ELPCOfLocateExtPC2d::IsMin),
             R"#(Returns True if the <N>th extremum distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv2d & (Extrema_ELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv2d & (Extrema_ELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_ELPCOfLocateExtPC2d::Point),
             R"#(Returns the point of the <N>th extremum distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
        .def("TrimmedSquareDistances",
             []( Extrema_ELPCOfLocateExtPC2d &self , gp_Pnt2d & P1,gp_Pnt2d & P2 ){ Standard_Real  dist1; Standard_Real  dist2; self.TrimmedSquareDistances(dist1,dist2,P1,P2); return std::make_tuple(dist1,dist2); },
             R"#(if the curve is a trimmed curve, dist1 is a square distance between <P> and the point of parameter FirstParameter <P1> and dist2 is a square distance between <P> and the point of parameter LastParameter <P2>.)#"  , py::arg("P1"),  py::arg("P2"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_EPCOfELPCOfLocateExtPC , shared_ptr<Extrema_EPCOfELPCOfLocateExtPC>  >>(m.attr("Extrema_EPCOfELPCOfLocateExtPC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve &,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("NbU"),  py::arg("TolU"),  py::arg("TolF") )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("NbU"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"),  py::arg("TolF") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_EPCOfELPCOfLocateExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_EPCOfELPCOfLocateExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_EPCOfELPCOfLocateExtPC::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"),  py::arg("NbU"),  py::arg("TolU"),  py::arg("TolF"))
        .def("Initialize",
             (void (Extrema_EPCOfELPCOfLocateExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_EPCOfELPCOfLocateExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_EPCOfELPCOfLocateExtPC::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"),  py::arg("NbU"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"),  py::arg("TolF"))
        .def("Initialize",
             (void (Extrema_EPCOfELPCOfLocateExtPC::*)( const Adaptor3d_Curve &  ) ) static_cast<void (Extrema_EPCOfELPCOfLocateExtPC::*)( const Adaptor3d_Curve &  ) >(&Extrema_EPCOfELPCOfLocateExtPC::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"))
        .def("Initialize",
             (void (Extrema_EPCOfELPCOfLocateExtPC::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_EPCOfELPCOfLocateExtPC::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_EPCOfELPCOfLocateExtPC::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("NbU"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"),  py::arg("TolF"))
        .def("Perform",
             (void (Extrema_EPCOfELPCOfLocateExtPC::*)( const gp_Pnt &  ) ) static_cast<void (Extrema_EPCOfELPCOfLocateExtPC::*)( const gp_Pnt &  ) >(&Extrema_EPCOfELPCOfLocateExtPC::Perform),
             R"#(the algorithm is done with the point P. An exception is raised if the fields have not been initialized.)#"  , py::arg("P"))
        .def("IsDone",
             (Standard_Boolean (Extrema_EPCOfELPCOfLocateExtPC::*)() const) static_cast<Standard_Boolean (Extrema_EPCOfELPCOfLocateExtPC::*)() const>(&Extrema_EPCOfELPCOfLocateExtPC::IsDone),
             R"#(True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_EPCOfELPCOfLocateExtPC::*)() const) static_cast<Standard_Integer (Extrema_EPCOfELPCOfLocateExtPC::*)() const>(&Extrema_EPCOfELPCOfLocateExtPC::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_EPCOfELPCOfLocateExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_EPCOfELPCOfLocateExtPC::*)( const Standard_Integer  ) const>(&Extrema_EPCOfELPCOfLocateExtPC::SquareDistance),
             R"#(Returns the value of the Nth extremum square distance.)#"  , py::arg("N"))
        .def("IsMin",
             (Standard_Boolean (Extrema_EPCOfELPCOfLocateExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_EPCOfELPCOfLocateExtPC::*)( const Standard_Integer  ) const>(&Extrema_EPCOfELPCOfLocateExtPC::IsMin),
             R"#(Returns True if the Nth extremum distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv & (Extrema_EPCOfELPCOfLocateExtPC::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv & (Extrema_EPCOfELPCOfLocateExtPC::*)( const Standard_Integer  ) const>(&Extrema_EPCOfELPCOfLocateExtPC::Point),
             R"#(Returns the point of the Nth extremum distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_EPCOfELPCOfLocateExtPC2d , shared_ptr<Extrema_EPCOfELPCOfLocateExtPC2d>  >>(m.attr("Extrema_EPCOfELPCOfLocateExtPC2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("NbU"),  py::arg("TolU"),  py::arg("TolF") )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("NbU"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"),  py::arg("TolF") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_EPCOfELPCOfLocateExtPC2d::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"),  py::arg("NbU"),  py::arg("TolU"),  py::arg("TolF"))
        .def("Initialize",
             (void (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_EPCOfELPCOfLocateExtPC2d::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"),  py::arg("NbU"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"),  py::arg("TolF"))
        .def("Initialize",
             (void (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d &  ) ) static_cast<void (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d &  ) >(&Extrema_EPCOfELPCOfLocateExtPC2d::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"))
        .def("Initialize",
             (void (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_EPCOfELPCOfLocateExtPC2d::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("NbU"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"),  py::arg("TolF"))
        .def("Perform",
             (void (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const gp_Pnt2d &  ) ) static_cast<void (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const gp_Pnt2d &  ) >(&Extrema_EPCOfELPCOfLocateExtPC2d::Perform),
             R"#(the algorithm is done with the point P. An exception is raised if the fields have not been initialized.)#"  , py::arg("P"))
        .def("IsDone",
             (Standard_Boolean (Extrema_EPCOfELPCOfLocateExtPC2d::*)() const) static_cast<Standard_Boolean (Extrema_EPCOfELPCOfLocateExtPC2d::*)() const>(&Extrema_EPCOfELPCOfLocateExtPC2d::IsDone),
             R"#(True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_EPCOfELPCOfLocateExtPC2d::*)() const) static_cast<Standard_Integer (Extrema_EPCOfELPCOfLocateExtPC2d::*)() const>(&Extrema_EPCOfELPCOfLocateExtPC2d::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_EPCOfELPCOfLocateExtPC2d::SquareDistance),
             R"#(Returns the value of the Nth extremum square distance.)#"  , py::arg("N"))
        .def("IsMin",
             (Standard_Boolean (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_EPCOfELPCOfLocateExtPC2d::IsMin),
             R"#(Returns True if the Nth extremum distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv2d & (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv2d & (Extrema_EPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_EPCOfELPCOfLocateExtPC2d::Point),
             R"#(Returns the point of the Nth extremum distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_EPCOfExtPC , shared_ptr<Extrema_EPCOfExtPC>  >>(m.attr("Extrema_EPCOfExtPC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve &,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("NbU"),  py::arg("TolU"),  py::arg("TolF") )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("NbU"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"),  py::arg("TolF") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_EPCOfExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_EPCOfExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_EPCOfExtPC::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"),  py::arg("NbU"),  py::arg("TolU"),  py::arg("TolF"))
        .def("Initialize",
             (void (Extrema_EPCOfExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_EPCOfExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_EPCOfExtPC::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"),  py::arg("NbU"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"),  py::arg("TolF"))
        .def("Initialize",
             (void (Extrema_EPCOfExtPC::*)( const Adaptor3d_Curve &  ) ) static_cast<void (Extrema_EPCOfExtPC::*)( const Adaptor3d_Curve &  ) >(&Extrema_EPCOfExtPC::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"))
        .def("Initialize",
             (void (Extrema_EPCOfExtPC::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_EPCOfExtPC::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_EPCOfExtPC::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("NbU"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"),  py::arg("TolF"))
        .def("Perform",
             (void (Extrema_EPCOfExtPC::*)( const gp_Pnt &  ) ) static_cast<void (Extrema_EPCOfExtPC::*)( const gp_Pnt &  ) >(&Extrema_EPCOfExtPC::Perform),
             R"#(the algorithm is done with the point P. An exception is raised if the fields have not been initialized.)#"  , py::arg("P"))
        .def("IsDone",
             (Standard_Boolean (Extrema_EPCOfExtPC::*)() const) static_cast<Standard_Boolean (Extrema_EPCOfExtPC::*)() const>(&Extrema_EPCOfExtPC::IsDone),
             R"#(True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_EPCOfExtPC::*)() const) static_cast<Standard_Integer (Extrema_EPCOfExtPC::*)() const>(&Extrema_EPCOfExtPC::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_EPCOfExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_EPCOfExtPC::*)( const Standard_Integer  ) const>(&Extrema_EPCOfExtPC::SquareDistance),
             R"#(Returns the value of the Nth extremum square distance.)#"  , py::arg("N"))
        .def("IsMin",
             (Standard_Boolean (Extrema_EPCOfExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_EPCOfExtPC::*)( const Standard_Integer  ) const>(&Extrema_EPCOfExtPC::IsMin),
             R"#(Returns True if the Nth extremum distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv & (Extrema_EPCOfExtPC::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv & (Extrema_EPCOfExtPC::*)( const Standard_Integer  ) const>(&Extrema_EPCOfExtPC::Point),
             R"#(Returns the point of the Nth extremum distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_EPCOfExtPC2d , shared_ptr<Extrema_EPCOfExtPC2d>  >>(m.attr("Extrema_EPCOfExtPC2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("NbU"),  py::arg("TolU"),  py::arg("TolF") )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("NbU"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"),  py::arg("TolF") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_EPCOfExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_EPCOfExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_EPCOfExtPC2d::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"),  py::arg("NbU"),  py::arg("TolU"),  py::arg("TolF"))
        .def("Initialize",
             (void (Extrema_EPCOfExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_EPCOfExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_EPCOfExtPC2d::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"),  py::arg("NbU"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"),  py::arg("TolF"))
        .def("Initialize",
             (void (Extrema_EPCOfExtPC2d::*)( const Adaptor2d_Curve2d &  ) ) static_cast<void (Extrema_EPCOfExtPC2d::*)( const Adaptor2d_Curve2d &  ) >(&Extrema_EPCOfExtPC2d::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"))
        .def("Initialize",
             (void (Extrema_EPCOfExtPC2d::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_EPCOfExtPC2d::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_EPCOfExtPC2d::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("NbU"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"),  py::arg("TolF"))
        .def("Perform",
             (void (Extrema_EPCOfExtPC2d::*)( const gp_Pnt2d &  ) ) static_cast<void (Extrema_EPCOfExtPC2d::*)( const gp_Pnt2d &  ) >(&Extrema_EPCOfExtPC2d::Perform),
             R"#(the algorithm is done with the point P. An exception is raised if the fields have not been initialized.)#"  , py::arg("P"))
        .def("IsDone",
             (Standard_Boolean (Extrema_EPCOfExtPC2d::*)() const) static_cast<Standard_Boolean (Extrema_EPCOfExtPC2d::*)() const>(&Extrema_EPCOfExtPC2d::IsDone),
             R"#(True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_EPCOfExtPC2d::*)() const) static_cast<Standard_Integer (Extrema_EPCOfExtPC2d::*)() const>(&Extrema_EPCOfExtPC2d::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_EPCOfExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_EPCOfExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_EPCOfExtPC2d::SquareDistance),
             R"#(Returns the value of the Nth extremum square distance.)#"  , py::arg("N"))
        .def("IsMin",
             (Standard_Boolean (Extrema_EPCOfExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_EPCOfExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_EPCOfExtPC2d::IsMin),
             R"#(Returns True if the Nth extremum distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv2d & (Extrema_EPCOfExtPC2d::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv2d & (Extrema_EPCOfExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_EPCOfExtPC2d::Point),
             R"#(Returns the point of the Nth extremum distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtCC , shared_ptr<Extrema_ExtCC>  >>(m.attr("Extrema_ExtCC"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("TolC1")=static_cast<const Standard_Real>(1.0e-10),  py::arg("TolC2")=static_cast<const Standard_Real>(1.0e-10) )
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("TolC1")=static_cast<const Standard_Real>(1.0e-10),  py::arg("TolC2")=static_cast<const Standard_Real>(1.0e-10) )
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("U1"),  py::arg("U2"),  py::arg("V1"),  py::arg("V2"),  py::arg("TolC1")=static_cast<const Standard_Real>(1.0e-10),  py::arg("TolC2")=static_cast<const Standard_Real>(1.0e-10) )
    // custom constructors
    // methods
        .def("SetCurve",
             (void (Extrema_ExtCC::*)( const Standard_Integer ,  const Adaptor3d_Curve &  ) ) static_cast<void (Extrema_ExtCC::*)( const Standard_Integer ,  const Adaptor3d_Curve &  ) >(&Extrema_ExtCC::SetCurve),
             R"#(None)#"  , py::arg("theRank"),  py::arg("C"))
        .def("SetCurve",
             (void (Extrema_ExtCC::*)( const Standard_Integer ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtCC::*)( const Standard_Integer ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtCC::SetCurve),
             R"#(None)#"  , py::arg("theRank"),  py::arg("C"),  py::arg("Uinf"),  py::arg("Usup"))
        .def("SetRange",
             (void (Extrema_ExtCC::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtCC::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtCC::SetRange),
             R"#(None)#"  , py::arg("theRank"),  py::arg("Uinf"),  py::arg("Usup"))
        .def("SetTolerance",
             (void (Extrema_ExtCC::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtCC::*)( const Standard_Integer ,  const Standard_Real  ) >(&Extrema_ExtCC::SetTolerance),
             R"#(None)#"  , py::arg("theRank"),  py::arg("Tol"))
        .def("Perform",
             (void (Extrema_ExtCC::*)() ) static_cast<void (Extrema_ExtCC::*)() >(&Extrema_ExtCC::Perform),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtCC::*)() const) static_cast<Standard_Boolean (Extrema_ExtCC::*)() const>(&Extrema_ExtCC::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtCC::*)() const) static_cast<Standard_Integer (Extrema_ExtCC::*)() const>(&Extrema_ExtCC::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("IsParallel",
             (Standard_Boolean (Extrema_ExtCC::*)() const) static_cast<Standard_Boolean (Extrema_ExtCC::*)() const>(&Extrema_ExtCC::IsParallel),
             R"#(Returns True if the two curves are parallel.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtCC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtCC::*)( const Standard_Integer  ) const>(&Extrema_ExtCC::SquareDistance),
             R"#(Returns the value of the Nth extremum square distance.)#"  , py::arg("N")=static_cast<const Standard_Integer>(1))
        .def("Points",
             (void (Extrema_ExtCC::*)( const Standard_Integer ,  Extrema_POnCurv & ,  Extrema_POnCurv &  ) const) static_cast<void (Extrema_ExtCC::*)( const Standard_Integer ,  Extrema_POnCurv & ,  Extrema_POnCurv &  ) const>(&Extrema_ExtCC::Points),
             R"#(Returns the points of the Nth extremum distance. P1 is on the first curve, P2 on the second one.)#"  , py::arg("N"),  py::arg("P1"),  py::arg("P2"))
        .def("SetSingleSolutionFlag",
             (void (Extrema_ExtCC::*)( const Standard_Boolean  ) ) static_cast<void (Extrema_ExtCC::*)( const Standard_Boolean  ) >(&Extrema_ExtCC::SetSingleSolutionFlag),
             R"#(Set flag for single extrema computation. Works on parametric solver only.)#"  , py::arg("theSingleSolutionFlag"))
        .def("GetSingleSolutionFlag",
             (Standard_Boolean (Extrema_ExtCC::*)() const) static_cast<Standard_Boolean (Extrema_ExtCC::*)() const>(&Extrema_ExtCC::GetSingleSolutionFlag),
             R"#(Get flag for single extrema computation. Works on parametric solver only.)#" )
    // methods using call by reference i.s.o. return
        .def("TrimmedSquareDistances",
             []( Extrema_ExtCC &self , gp_Pnt & P11,gp_Pnt & P12,gp_Pnt & P21,gp_Pnt & P22 ){ Standard_Real  dist11; Standard_Real  distP12; Standard_Real  distP21; Standard_Real  distP22; self.TrimmedSquareDistances(dist11,distP12,distP21,distP22,P11,P12,P21,P22); return std::make_tuple(dist11,distP12,distP21,distP22); },
             R"#(if the curve is a trimmed curve, dist11 is a square distance between the point on C1 of parameter FirstParameter and the point of parameter FirstParameter on C2.)#"  , py::arg("P11"),  py::arg("P12"),  py::arg("P21"),  py::arg("P22"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtCC2d , shared_ptr<Extrema_ExtCC2d>  >>(m.attr("Extrema_ExtCC2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("TolC1")=static_cast<const Standard_Real>(1.0e-10),  py::arg("TolC2")=static_cast<const Standard_Real>(1.0e-10) )
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("U1"),  py::arg("U2"),  py::arg("V1"),  py::arg("V2"),  py::arg("TolC1")=static_cast<const Standard_Real>(1.0e-10),  py::arg("TolC2")=static_cast<const Standard_Real>(1.0e-10) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_ExtCC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtCC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtCC2d::Initialize),
             R"#(initializes the fields.)#"  , py::arg("C2"),  py::arg("V1"),  py::arg("V2"),  py::arg("TolC1")=static_cast<const Standard_Real>(1.0e-10),  py::arg("TolC2")=static_cast<const Standard_Real>(1.0e-10))
        .def("Perform",
             (void (Extrema_ExtCC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtCC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtCC2d::Perform),
             R"#(None)#"  , py::arg("C1"),  py::arg("U1"),  py::arg("U2"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtCC2d::*)() const) static_cast<Standard_Boolean (Extrema_ExtCC2d::*)() const>(&Extrema_ExtCC2d::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtCC2d::*)() const) static_cast<Standard_Integer (Extrema_ExtCC2d::*)() const>(&Extrema_ExtCC2d::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("IsParallel",
             (Standard_Boolean (Extrema_ExtCC2d::*)() const) static_cast<Standard_Boolean (Extrema_ExtCC2d::*)() const>(&Extrema_ExtCC2d::IsParallel),
             R"#(Returns True if the two curves are parallel.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtCC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtCC2d::*)( const Standard_Integer  ) const>(&Extrema_ExtCC2d::SquareDistance),
             R"#(Returns the value of the Nth extremum square distance.)#"  , py::arg("N")=static_cast<const Standard_Integer>(1))
        .def("Points",
             (void (Extrema_ExtCC2d::*)( const Standard_Integer ,  Extrema_POnCurv2d & ,  Extrema_POnCurv2d &  ) const) static_cast<void (Extrema_ExtCC2d::*)( const Standard_Integer ,  Extrema_POnCurv2d & ,  Extrema_POnCurv2d &  ) const>(&Extrema_ExtCC2d::Points),
             R"#(Returns the points of the Nth extremum distance. P1 is on the first curve, P2 on the second one.)#"  , py::arg("N"),  py::arg("P1"),  py::arg("P2"))
        .def("SetSingleSolutionFlag",
             (void (Extrema_ExtCC2d::*)( const Standard_Boolean  ) ) static_cast<void (Extrema_ExtCC2d::*)( const Standard_Boolean  ) >(&Extrema_ExtCC2d::SetSingleSolutionFlag),
             R"#(Set flag for single extrema computation. Works on parametric solver only.)#"  , py::arg("theSingleSolutionFlag"))
        .def("GetSingleSolutionFlag",
             (Standard_Boolean (Extrema_ExtCC2d::*)() const) static_cast<Standard_Boolean (Extrema_ExtCC2d::*)() const>(&Extrema_ExtCC2d::GetSingleSolutionFlag),
             R"#(Get flag for single extrema computation. Works on parametric solver only.)#" )
    // methods using call by reference i.s.o. return
        .def("TrimmedSquareDistances",
             []( Extrema_ExtCC2d &self , gp_Pnt2d & P11,gp_Pnt2d & P12,gp_Pnt2d & P21,gp_Pnt2d & P22 ){ Standard_Real  dist11; Standard_Real  distP12; Standard_Real  distP21; Standard_Real  distP22; self.TrimmedSquareDistances(dist11,distP12,distP21,distP22,P11,P12,P21,P22); return std::make_tuple(dist11,distP12,distP21,distP22); },
             R"#(if the curve is a trimmed curve, dist11 is a square distance between the point on C1 of parameter FirstParameter and the point of parameter FirstParameter on C2.)#"  , py::arg("P11"),  py::arg("P12"),  py::arg("P21"),  py::arg("P22"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtCS , shared_ptr<Extrema_ExtCS>  >>(m.attr("Extrema_ExtCS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Surface &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("S"),  py::arg("TolC"),  py::arg("TolS") )
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Surface &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("S"),  py::arg("UCinf"),  py::arg("UCsup"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("Vinf"),  py::arg("Vsup"),  py::arg("TolC"),  py::arg("TolS") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_ExtCS::*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtCS::*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtCS::Initialize),
             R"#(Initializes the fields of the algorithm.)#"  , py::arg("S"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("Vinf"),  py::arg("Vsup"),  py::arg("TolC"),  py::arg("TolS"))
        .def("Perform",
             (void (Extrema_ExtCS::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtCS::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtCS::Perform),
             R"#(Computes the distances. An exception is raised if the fieds have not been initialized.)#"  , py::arg("C"),  py::arg("Uinf"),  py::arg("Usup"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtCS::*)() const) static_cast<Standard_Boolean (Extrema_ExtCS::*)() const>(&Extrema_ExtCS::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("IsParallel",
             (Standard_Boolean (Extrema_ExtCS::*)() const) static_cast<Standard_Boolean (Extrema_ExtCS::*)() const>(&Extrema_ExtCS::IsParallel),
             R"#(Returns True if the curve is on a parallel surface.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtCS::*)() const) static_cast<Standard_Integer (Extrema_ExtCS::*)() const>(&Extrema_ExtCS::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtCS::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtCS::*)( const Standard_Integer  ) const>(&Extrema_ExtCS::SquareDistance),
             R"#(Returns the value of the Nth resulting square distance.)#"  , py::arg("N"))
        .def("Points",
             (void (Extrema_ExtCS::*)( const Standard_Integer ,  Extrema_POnCurv & ,  Extrema_POnSurf &  ) const) static_cast<void (Extrema_ExtCS::*)( const Standard_Integer ,  Extrema_POnCurv & ,  Extrema_POnSurf &  ) const>(&Extrema_ExtCS::Points),
             R"#(Returns the point of the Nth resulting distance.)#"  , py::arg("N"),  py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtElC , shared_ptr<Extrema_ExtElC>  >>(m.attr("Extrema_ExtElC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Lin &,const gp_Lin &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("AngTol") )
        .def(py::init< const gp_Lin &,const gp_Circ &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("Tol") )
        .def(py::init< const gp_Lin &,const gp_Elips & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const gp_Lin &,const gp_Hypr & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const gp_Lin &,const gp_Parab & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const gp_Circ &,const gp_Circ & >()  , py::arg("C1"),  py::arg("C2") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtElC::*)() const) static_cast<Standard_Boolean (Extrema_ExtElC::*)() const>(&Extrema_ExtElC::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("IsParallel",
             (Standard_Boolean (Extrema_ExtElC::*)() const) static_cast<Standard_Boolean (Extrema_ExtElC::*)() const>(&Extrema_ExtElC::IsParallel),
             R"#(Returns True if the two curves are parallel.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtElC::*)() const) static_cast<Standard_Integer (Extrema_ExtElC::*)() const>(&Extrema_ExtElC::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtElC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtElC::*)( const Standard_Integer  ) const>(&Extrema_ExtElC::SquareDistance),
             R"#(Returns the value of the Nth extremum square distance.)#"  , py::arg("N")=static_cast<const Standard_Integer>(1))
        .def("Points",
             (void (Extrema_ExtElC::*)( const Standard_Integer ,  Extrema_POnCurv & ,  Extrema_POnCurv &  ) const) static_cast<void (Extrema_ExtElC::*)( const Standard_Integer ,  Extrema_POnCurv & ,  Extrema_POnCurv &  ) const>(&Extrema_ExtElC::Points),
             R"#(Returns the points of the Nth extremum distance. P1 is on the first curve, P2 on the second one.)#"  , py::arg("N"),  py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtElC2d , shared_ptr<Extrema_ExtElC2d>  >>(m.attr("Extrema_ExtElC2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Lin2d &,const gp_Lin2d &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("AngTol") )
        .def(py::init< const gp_Lin2d &,const gp_Circ2d &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("Tol") )
        .def(py::init< const gp_Lin2d &,const gp_Elips2d & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const gp_Lin2d &,const gp_Hypr2d & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const gp_Lin2d &,const gp_Parab2d & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const gp_Circ2d &,const gp_Circ2d & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const gp_Circ2d &,const gp_Elips2d & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const gp_Circ2d &,const gp_Hypr2d & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const gp_Circ2d &,const gp_Parab2d & >()  , py::arg("C1"),  py::arg("C2") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtElC2d::*)() const) static_cast<Standard_Boolean (Extrema_ExtElC2d::*)() const>(&Extrema_ExtElC2d::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("IsParallel",
             (Standard_Boolean (Extrema_ExtElC2d::*)() const) static_cast<Standard_Boolean (Extrema_ExtElC2d::*)() const>(&Extrema_ExtElC2d::IsParallel),
             R"#(Returns True if the two curves are parallel.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtElC2d::*)() const) static_cast<Standard_Integer (Extrema_ExtElC2d::*)() const>(&Extrema_ExtElC2d::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtElC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtElC2d::*)( const Standard_Integer  ) const>(&Extrema_ExtElC2d::SquareDistance),
             R"#(Returns the value of the Nth extremum square distance.)#"  , py::arg("N")=static_cast<const Standard_Integer>(1))
        .def("Points",
             (void (Extrema_ExtElC2d::*)( const Standard_Integer ,  Extrema_POnCurv2d & ,  Extrema_POnCurv2d &  ) const) static_cast<void (Extrema_ExtElC2d::*)( const Standard_Integer ,  Extrema_POnCurv2d & ,  Extrema_POnCurv2d &  ) const>(&Extrema_ExtElC2d::Points),
             R"#(Returns the points of the Nth extremum distance. P1 is on the first curve, P2 on the second one.)#"  , py::arg("N"),  py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtElCS , shared_ptr<Extrema_ExtElCS>  >>(m.attr("Extrema_ExtElCS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Lin &,const gp_Pln & >()  , py::arg("C"),  py::arg("S") )
        .def(py::init< const gp_Lin &,const gp_Cylinder & >()  , py::arg("C"),  py::arg("S") )
        .def(py::init< const gp_Lin &,const gp_Cone & >()  , py::arg("C"),  py::arg("S") )
        .def(py::init< const gp_Lin &,const gp_Sphere & >()  , py::arg("C"),  py::arg("S") )
        .def(py::init< const gp_Lin &,const gp_Torus & >()  , py::arg("C"),  py::arg("S") )
        .def(py::init< const gp_Circ &,const gp_Pln & >()  , py::arg("C"),  py::arg("S") )
        .def(py::init< const gp_Circ &,const gp_Cylinder & >()  , py::arg("C"),  py::arg("S") )
        .def(py::init< const gp_Circ &,const gp_Cone & >()  , py::arg("C"),  py::arg("S") )
        .def(py::init< const gp_Circ &,const gp_Sphere & >()  , py::arg("C"),  py::arg("S") )
        .def(py::init< const gp_Circ &,const gp_Torus & >()  , py::arg("C"),  py::arg("S") )
        .def(py::init< const gp_Hypr &,const gp_Pln & >()  , py::arg("C"),  py::arg("S") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Extrema_ExtElCS::*)( const gp_Lin & ,  const gp_Pln &  ) ) static_cast<void (Extrema_ExtElCS::*)( const gp_Lin & ,  const gp_Pln &  ) >(&Extrema_ExtElCS::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def("Perform",
             (void (Extrema_ExtElCS::*)( const gp_Lin & ,  const gp_Cylinder &  ) ) static_cast<void (Extrema_ExtElCS::*)( const gp_Lin & ,  const gp_Cylinder &  ) >(&Extrema_ExtElCS::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def("Perform",
             (void (Extrema_ExtElCS::*)( const gp_Lin & ,  const gp_Cone &  ) ) static_cast<void (Extrema_ExtElCS::*)( const gp_Lin & ,  const gp_Cone &  ) >(&Extrema_ExtElCS::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def("Perform",
             (void (Extrema_ExtElCS::*)( const gp_Lin & ,  const gp_Sphere &  ) ) static_cast<void (Extrema_ExtElCS::*)( const gp_Lin & ,  const gp_Sphere &  ) >(&Extrema_ExtElCS::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def("Perform",
             (void (Extrema_ExtElCS::*)( const gp_Lin & ,  const gp_Torus &  ) ) static_cast<void (Extrema_ExtElCS::*)( const gp_Lin & ,  const gp_Torus &  ) >(&Extrema_ExtElCS::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def("Perform",
             (void (Extrema_ExtElCS::*)( const gp_Circ & ,  const gp_Pln &  ) ) static_cast<void (Extrema_ExtElCS::*)( const gp_Circ & ,  const gp_Pln &  ) >(&Extrema_ExtElCS::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def("Perform",
             (void (Extrema_ExtElCS::*)( const gp_Circ & ,  const gp_Cylinder &  ) ) static_cast<void (Extrema_ExtElCS::*)( const gp_Circ & ,  const gp_Cylinder &  ) >(&Extrema_ExtElCS::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def("Perform",
             (void (Extrema_ExtElCS::*)( const gp_Circ & ,  const gp_Cone &  ) ) static_cast<void (Extrema_ExtElCS::*)( const gp_Circ & ,  const gp_Cone &  ) >(&Extrema_ExtElCS::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def("Perform",
             (void (Extrema_ExtElCS::*)( const gp_Circ & ,  const gp_Sphere &  ) ) static_cast<void (Extrema_ExtElCS::*)( const gp_Circ & ,  const gp_Sphere &  ) >(&Extrema_ExtElCS::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def("Perform",
             (void (Extrema_ExtElCS::*)( const gp_Circ & ,  const gp_Torus &  ) ) static_cast<void (Extrema_ExtElCS::*)( const gp_Circ & ,  const gp_Torus &  ) >(&Extrema_ExtElCS::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def("Perform",
             (void (Extrema_ExtElCS::*)( const gp_Hypr & ,  const gp_Pln &  ) ) static_cast<void (Extrema_ExtElCS::*)( const gp_Hypr & ,  const gp_Pln &  ) >(&Extrema_ExtElCS::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtElCS::*)() const) static_cast<Standard_Boolean (Extrema_ExtElCS::*)() const>(&Extrema_ExtElCS::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("IsParallel",
             (Standard_Boolean (Extrema_ExtElCS::*)() const) static_cast<Standard_Boolean (Extrema_ExtElCS::*)() const>(&Extrema_ExtElCS::IsParallel),
             R"#(Returns True if the curve is on a parallel surface.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtElCS::*)() const) static_cast<Standard_Integer (Extrema_ExtElCS::*)() const>(&Extrema_ExtElCS::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtElCS::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtElCS::*)( const Standard_Integer  ) const>(&Extrema_ExtElCS::SquareDistance),
             R"#(Returns the value of the Nth extremum square distance.)#"  , py::arg("N")=static_cast<const Standard_Integer>(1))
        .def("Points",
             (void (Extrema_ExtElCS::*)( const Standard_Integer ,  Extrema_POnCurv & ,  Extrema_POnSurf &  ) const) static_cast<void (Extrema_ExtElCS::*)( const Standard_Integer ,  Extrema_POnCurv & ,  Extrema_POnSurf &  ) const>(&Extrema_ExtElCS::Points),
             R"#(Returns the points of the Nth extremum distance. P1 is on the curve, P2 on the surface.)#"  , py::arg("N"),  py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtElSS , shared_ptr<Extrema_ExtElSS>  >>(m.attr("Extrema_ExtElSS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pln &,const gp_Pln & >()  , py::arg("S1"),  py::arg("S2") )
        .def(py::init< const gp_Pln &,const gp_Sphere & >()  , py::arg("S1"),  py::arg("S2") )
        .def(py::init< const gp_Sphere &,const gp_Sphere & >()  , py::arg("S1"),  py::arg("S2") )
        .def(py::init< const gp_Sphere &,const gp_Cylinder & >()  , py::arg("S1"),  py::arg("S2") )
        .def(py::init< const gp_Sphere &,const gp_Cone & >()  , py::arg("S1"),  py::arg("S2") )
        .def(py::init< const gp_Sphere &,const gp_Torus & >()  , py::arg("S1"),  py::arg("S2") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Extrema_ExtElSS::*)( const gp_Pln & ,  const gp_Pln &  ) ) static_cast<void (Extrema_ExtElSS::*)( const gp_Pln & ,  const gp_Pln &  ) >(&Extrema_ExtElSS::Perform),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Perform",
             (void (Extrema_ExtElSS::*)( const gp_Pln & ,  const gp_Sphere &  ) ) static_cast<void (Extrema_ExtElSS::*)( const gp_Pln & ,  const gp_Sphere &  ) >(&Extrema_ExtElSS::Perform),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Perform",
             (void (Extrema_ExtElSS::*)( const gp_Sphere & ,  const gp_Sphere &  ) ) static_cast<void (Extrema_ExtElSS::*)( const gp_Sphere & ,  const gp_Sphere &  ) >(&Extrema_ExtElSS::Perform),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Perform",
             (void (Extrema_ExtElSS::*)( const gp_Sphere & ,  const gp_Cylinder &  ) ) static_cast<void (Extrema_ExtElSS::*)( const gp_Sphere & ,  const gp_Cylinder &  ) >(&Extrema_ExtElSS::Perform),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Perform",
             (void (Extrema_ExtElSS::*)( const gp_Sphere & ,  const gp_Cone &  ) ) static_cast<void (Extrema_ExtElSS::*)( const gp_Sphere & ,  const gp_Cone &  ) >(&Extrema_ExtElSS::Perform),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Perform",
             (void (Extrema_ExtElSS::*)( const gp_Sphere & ,  const gp_Torus &  ) ) static_cast<void (Extrema_ExtElSS::*)( const gp_Sphere & ,  const gp_Torus &  ) >(&Extrema_ExtElSS::Perform),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtElSS::*)() const) static_cast<Standard_Boolean (Extrema_ExtElSS::*)() const>(&Extrema_ExtElSS::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("IsParallel",
             (Standard_Boolean (Extrema_ExtElSS::*)() const) static_cast<Standard_Boolean (Extrema_ExtElSS::*)() const>(&Extrema_ExtElSS::IsParallel),
             R"#(Returns True if the two surfaces are parallel.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtElSS::*)() const) static_cast<Standard_Integer (Extrema_ExtElSS::*)() const>(&Extrema_ExtElSS::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtElSS::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtElSS::*)( const Standard_Integer  ) const>(&Extrema_ExtElSS::SquareDistance),
             R"#(Returns the value of the Nth extremum square distance.)#"  , py::arg("N")=static_cast<const Standard_Integer>(1))
        .def("Points",
             (void (Extrema_ExtElSS::*)( const Standard_Integer ,  Extrema_POnSurf & ,  Extrema_POnSurf &  ) const) static_cast<void (Extrema_ExtElSS::*)( const Standard_Integer ,  Extrema_POnSurf & ,  Extrema_POnSurf &  ) const>(&Extrema_ExtElSS::Points),
             R"#(Returns the points for the Nth resulting distance. P1 is on the first surface, P2 on the second one.)#"  , py::arg("N"),  py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPC , shared_ptr<Extrema_ExtPC>  >>(m.attr("Extrema_ExtPC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("TolF")=static_cast<const Standard_Real>(1.0e-10) )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve &,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("TolF")=static_cast<const Standard_Real>(1.0e-10) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_ExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPC::Initialize),
             R"#(initializes the fields of the algorithm.)#"  , py::arg("C"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("TolF")=static_cast<const Standard_Real>(1.0e-10))
        .def("Perform",
             (void (Extrema_ExtPC::*)( const gp_Pnt &  ) ) static_cast<void (Extrema_ExtPC::*)( const gp_Pnt &  ) >(&Extrema_ExtPC::Perform),
             R"#(An exception is raised if the fields have not been initialized.)#"  , py::arg("P"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtPC::*)() const) static_cast<Standard_Boolean (Extrema_ExtPC::*)() const>(&Extrema_ExtPC::IsDone),
             R"#(True if the distances are found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtPC::*)( const Standard_Integer  ) const>(&Extrema_ExtPC::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
        .def("NbExt",
             (Standard_Integer (Extrema_ExtPC::*)() const) static_cast<Standard_Integer (Extrema_ExtPC::*)() const>(&Extrema_ExtPC::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("IsMin",
             (Standard_Boolean (Extrema_ExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_ExtPC::*)( const Standard_Integer  ) const>(&Extrema_ExtPC::IsMin),
             R"#(Returns True if the <N>th extremum distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv & (Extrema_ExtPC::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv & (Extrema_ExtPC::*)( const Standard_Integer  ) const>(&Extrema_ExtPC::Point),
             R"#(Returns the point of the <N>th extremum distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
        .def("TrimmedSquareDistances",
             []( Extrema_ExtPC &self , gp_Pnt & P1,gp_Pnt & P2 ){ Standard_Real  dist1; Standard_Real  dist2; self.TrimmedSquareDistances(dist1,dist2,P1,P2); return std::make_tuple(dist1,dist2); },
             R"#(if the curve is a trimmed curve, dist1 is a square distance between <P> and the point of parameter FirstParameter <P1> and dist2 is a square distance between <P> and the point of parameter LastParameter <P2>.)#"  , py::arg("P1"),  py::arg("P2"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPC2d , shared_ptr<Extrema_ExtPC2d>  >>(m.attr("Extrema_ExtPC2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("TolF")=static_cast<const Standard_Real>(1.0e-10) )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("TolF")=static_cast<const Standard_Real>(1.0e-10) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_ExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPC2d::Initialize),
             R"#(initializes the fields of the algorithm.)#"  , py::arg("C"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("TolF")=static_cast<const Standard_Real>(1.0e-10))
        .def("Perform",
             (void (Extrema_ExtPC2d::*)( const gp_Pnt2d &  ) ) static_cast<void (Extrema_ExtPC2d::*)( const gp_Pnt2d &  ) >(&Extrema_ExtPC2d::Perform),
             R"#(An exception is raised if the fields have not been initialized.)#"  , py::arg("P"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtPC2d::*)() const) static_cast<Standard_Boolean (Extrema_ExtPC2d::*)() const>(&Extrema_ExtPC2d::IsDone),
             R"#(True if the distances are found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_ExtPC2d::SquareDistance),
             R"#(Returns the value of the <N>th extremum square distance.)#"  , py::arg("N"))
        .def("NbExt",
             (Standard_Integer (Extrema_ExtPC2d::*)() const) static_cast<Standard_Integer (Extrema_ExtPC2d::*)() const>(&Extrema_ExtPC2d::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("IsMin",
             (Standard_Boolean (Extrema_ExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_ExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_ExtPC2d::IsMin),
             R"#(Returns True if the <N>th extremum distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv2d & (Extrema_ExtPC2d::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv2d & (Extrema_ExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_ExtPC2d::Point),
             R"#(Returns the point of the <N>th extremum distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
        .def("TrimmedSquareDistances",
             []( Extrema_ExtPC2d &self , gp_Pnt2d & P1,gp_Pnt2d & P2 ){ Standard_Real  dist1; Standard_Real  dist2; self.TrimmedSquareDistances(dist1,dist2,P1,P2); return std::make_tuple(dist1,dist2); },
             R"#(if the curve is a trimmed curve, dist1 is a square distance between <P> and the point of parameter FirstParameter <P1> and dist2 is a square distance between <P> and the point of parameter LastParameter <P2>.)#"  , py::arg("P1"),  py::arg("P2"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPElC , shared_ptr<Extrema_ExtPElC>  >>(m.attr("Extrema_ExtPElC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const gp_Lin &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup") )
        .def(py::init< const gp_Pnt &,const gp_Circ &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup") )
        .def(py::init< const gp_Pnt &,const gp_Elips &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup") )
        .def(py::init< const gp_Pnt &,const gp_Hypr &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup") )
        .def(py::init< const gp_Pnt &,const gp_Parab &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Extrema_ExtPElC::*)( const gp_Pnt & ,  const gp_Lin & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElC::*)( const gp_Pnt & ,  const gp_Lin & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPElC::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup"))
        .def("Perform",
             (void (Extrema_ExtPElC::*)( const gp_Pnt & ,  const gp_Circ & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElC::*)( const gp_Pnt & ,  const gp_Circ & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPElC::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup"))
        .def("Perform",
             (void (Extrema_ExtPElC::*)( const gp_Pnt & ,  const gp_Elips & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElC::*)( const gp_Pnt & ,  const gp_Elips & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPElC::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup"))
        .def("Perform",
             (void (Extrema_ExtPElC::*)( const gp_Pnt & ,  const gp_Hypr & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElC::*)( const gp_Pnt & ,  const gp_Hypr & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPElC::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup"))
        .def("Perform",
             (void (Extrema_ExtPElC::*)( const gp_Pnt & ,  const gp_Parab & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElC::*)( const gp_Pnt & ,  const gp_Parab & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPElC::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtPElC::*)() const) static_cast<Standard_Boolean (Extrema_ExtPElC::*)() const>(&Extrema_ExtPElC::IsDone),
             R"#(True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtPElC::*)() const) static_cast<Standard_Integer (Extrema_ExtPElC::*)() const>(&Extrema_ExtPElC::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtPElC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtPElC::*)( const Standard_Integer  ) const>(&Extrema_ExtPElC::SquareDistance),
             R"#(Returns the value of the Nth extremum square distance.)#"  , py::arg("N"))
        .def("IsMin",
             (Standard_Boolean (Extrema_ExtPElC::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_ExtPElC::*)( const Standard_Integer  ) const>(&Extrema_ExtPElC::IsMin),
             R"#(Returns True if the Nth extremum distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv & (Extrema_ExtPElC::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv & (Extrema_ExtPElC::*)( const Standard_Integer  ) const>(&Extrema_ExtPElC::Point),
             R"#(Returns the point of the Nth extremum distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPElC2d , shared_ptr<Extrema_ExtPElC2d>  >>(m.attr("Extrema_ExtPElC2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const gp_Lin2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup") )
        .def(py::init< const gp_Pnt2d &,const gp_Circ2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup") )
        .def(py::init< const gp_Pnt2d &,const gp_Elips2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup") )
        .def(py::init< const gp_Pnt2d &,const gp_Hypr2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup") )
        .def(py::init< const gp_Pnt2d &,const gp_Parab2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Extrema_ExtPElC2d::*)( const gp_Pnt2d & ,  const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElC2d::*)( const gp_Pnt2d & ,  const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPElC2d::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("L"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup"))
        .def("Perform",
             (void (Extrema_ExtPElC2d::*)( const gp_Pnt2d & ,  const gp_Circ2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElC2d::*)( const gp_Pnt2d & ,  const gp_Circ2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPElC2d::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup"))
        .def("Perform",
             (void (Extrema_ExtPElC2d::*)( const gp_Pnt2d & ,  const gp_Elips2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElC2d::*)( const gp_Pnt2d & ,  const gp_Elips2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPElC2d::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup"))
        .def("Perform",
             (void (Extrema_ExtPElC2d::*)( const gp_Pnt2d & ,  const gp_Hypr2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElC2d::*)( const gp_Pnt2d & ,  const gp_Hypr2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPElC2d::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup"))
        .def("Perform",
             (void (Extrema_ExtPElC2d::*)( const gp_Pnt2d & ,  const gp_Parab2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElC2d::*)( const gp_Pnt2d & ,  const gp_Parab2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPElC2d::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("C"),  py::arg("Tol"),  py::arg("Uinf"),  py::arg("Usup"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtPElC2d::*)() const) static_cast<Standard_Boolean (Extrema_ExtPElC2d::*)() const>(&Extrema_ExtPElC2d::IsDone),
             R"#(True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtPElC2d::*)() const) static_cast<Standard_Integer (Extrema_ExtPElC2d::*)() const>(&Extrema_ExtPElC2d::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtPElC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtPElC2d::*)( const Standard_Integer  ) const>(&Extrema_ExtPElC2d::SquareDistance),
             R"#(Returns the value of the Nth extremum square distance.)#"  , py::arg("N"))
        .def("IsMin",
             (Standard_Boolean (Extrema_ExtPElC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_ExtPElC2d::*)( const Standard_Integer  ) const>(&Extrema_ExtPElC2d::IsMin),
             R"#(Returns True if the Nth extremum distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv2d & (Extrema_ExtPElC2d::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv2d & (Extrema_ExtPElC2d::*)( const Standard_Integer  ) const>(&Extrema_ExtPElC2d::Point),
             R"#(Returns the point of the Nth extremum distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPElS , shared_ptr<Extrema_ExtPElS>  >>(m.attr("Extrema_ExtPElS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const gp_Cylinder &,const Standard_Real >()  , py::arg("P"),  py::arg("S"),  py::arg("Tol") )
        .def(py::init< const gp_Pnt &,const gp_Pln &,const Standard_Real >()  , py::arg("P"),  py::arg("S"),  py::arg("Tol") )
        .def(py::init< const gp_Pnt &,const gp_Cone &,const Standard_Real >()  , py::arg("P"),  py::arg("S"),  py::arg("Tol") )
        .def(py::init< const gp_Pnt &,const gp_Torus &,const Standard_Real >()  , py::arg("P"),  py::arg("S"),  py::arg("Tol") )
        .def(py::init< const gp_Pnt &,const gp_Sphere &,const Standard_Real >()  , py::arg("P"),  py::arg("S"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Extrema_ExtPElS::*)( const gp_Pnt & ,  const gp_Cylinder & ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElS::*)( const gp_Pnt & ,  const gp_Cylinder & ,  const Standard_Real  ) >(&Extrema_ExtPElS::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("S"),  py::arg("Tol"))
        .def("Perform",
             (void (Extrema_ExtPElS::*)( const gp_Pnt & ,  const gp_Pln & ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElS::*)( const gp_Pnt & ,  const gp_Pln & ,  const Standard_Real  ) >(&Extrema_ExtPElS::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("S"),  py::arg("Tol"))
        .def("Perform",
             (void (Extrema_ExtPElS::*)( const gp_Pnt & ,  const gp_Cone & ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElS::*)( const gp_Pnt & ,  const gp_Cone & ,  const Standard_Real  ) >(&Extrema_ExtPElS::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("S"),  py::arg("Tol"))
        .def("Perform",
             (void (Extrema_ExtPElS::*)( const gp_Pnt & ,  const gp_Torus & ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElS::*)( const gp_Pnt & ,  const gp_Torus & ,  const Standard_Real  ) >(&Extrema_ExtPElS::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("S"),  py::arg("Tol"))
        .def("Perform",
             (void (Extrema_ExtPElS::*)( const gp_Pnt & ,  const gp_Sphere & ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPElS::*)( const gp_Pnt & ,  const gp_Sphere & ,  const Standard_Real  ) >(&Extrema_ExtPElS::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("S"),  py::arg("Tol"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtPElS::*)() const) static_cast<Standard_Boolean (Extrema_ExtPElS::*)() const>(&Extrema_ExtPElS::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtPElS::*)() const) static_cast<Standard_Integer (Extrema_ExtPElS::*)() const>(&Extrema_ExtPElS::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtPElS::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtPElS::*)( const Standard_Integer  ) const>(&Extrema_ExtPElS::SquareDistance),
             R"#(Returns the value of the Nth resulting square distance.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnSurf & (Extrema_ExtPElS::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnSurf & (Extrema_ExtPElS::*)( const Standard_Integer  ) const>(&Extrema_ExtPElS::Point),
             R"#(Returns the point of the Nth resulting distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPExtS ,opencascade::handle<Extrema_ExtPExtS>  , Standard_Transient >>(m.attr("Extrema_ExtPExtS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const opencascade::handle<GeomAdaptor_HSurfaceOfLinearExtrusion> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("S"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Vmin"),  py::arg("Vsup"),  py::arg("TolU"),  py::arg("TolV") )
        .def(py::init< const gp_Pnt &,const opencascade::handle<GeomAdaptor_HSurfaceOfLinearExtrusion> &,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("S"),  py::arg("TolU"),  py::arg("TolV") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_ExtPExtS::*)( const opencascade::handle<GeomAdaptor_HSurfaceOfLinearExtrusion> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPExtS::*)( const opencascade::handle<GeomAdaptor_HSurfaceOfLinearExtrusion> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPExtS::Initialize),
             R"#(Initializes the fields of the algorithm.)#"  , py::arg("S"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("Vinf"),  py::arg("Vsup"),  py::arg("TolU"),  py::arg("TolV"))
        .def("Perform",
             (void (Extrema_ExtPExtS::*)( const gp_Pnt &  ) ) static_cast<void (Extrema_ExtPExtS::*)( const gp_Pnt &  ) >(&Extrema_ExtPExtS::Perform),
             R"#(None)#"  , py::arg("P"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtPExtS::*)() const) static_cast<Standard_Boolean (Extrema_ExtPExtS::*)() const>(&Extrema_ExtPExtS::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtPExtS::*)() const) static_cast<Standard_Integer (Extrema_ExtPExtS::*)() const>(&Extrema_ExtPExtS::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtPExtS::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtPExtS::*)( const Standard_Integer  ) const>(&Extrema_ExtPExtS::SquareDistance),
             R"#(Returns the value of the Nth resulting square distance.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnSurf & (Extrema_ExtPExtS::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnSurf & (Extrema_ExtPExtS::*)( const Standard_Integer  ) const>(&Extrema_ExtPExtS::Point),
             R"#(Returns the point of the Nth resulting distance.)#"  , py::arg("N"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Extrema_ExtPExtS::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Extrema_ExtPExtS::*)() const>(&Extrema_ExtPExtS::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Extrema_ExtPExtS::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Extrema_ExtPExtS::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPRevS ,opencascade::handle<Extrema_ExtPRevS>  , Standard_Transient >>(m.attr("Extrema_ExtPRevS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const opencascade::handle<GeomAdaptor_HSurfaceOfRevolution> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("S"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Vmin"),  py::arg("Vsup"),  py::arg("TolU"),  py::arg("TolV") )
        .def(py::init< const gp_Pnt &,const opencascade::handle<GeomAdaptor_HSurfaceOfRevolution> &,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("S"),  py::arg("TolU"),  py::arg("TolV") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_ExtPRevS::*)( const opencascade::handle<GeomAdaptor_HSurfaceOfRevolution> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPRevS::*)( const opencascade::handle<GeomAdaptor_HSurfaceOfRevolution> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPRevS::Initialize),
             R"#(None)#"  , py::arg("S"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Vmin"),  py::arg("Vsup"),  py::arg("TolU"),  py::arg("TolV"))
        .def("Perform",
             (void (Extrema_ExtPRevS::*)( const gp_Pnt &  ) ) static_cast<void (Extrema_ExtPRevS::*)( const gp_Pnt &  ) >(&Extrema_ExtPRevS::Perform),
             R"#(None)#"  , py::arg("P"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtPRevS::*)() const) static_cast<Standard_Boolean (Extrema_ExtPRevS::*)() const>(&Extrema_ExtPRevS::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtPRevS::*)() const) static_cast<Standard_Integer (Extrema_ExtPRevS::*)() const>(&Extrema_ExtPRevS::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtPRevS::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtPRevS::*)( const Standard_Integer  ) const>(&Extrema_ExtPRevS::SquareDistance),
             R"#(Returns the value of the Nth resulting square distance.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnSurf & (Extrema_ExtPRevS::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnSurf & (Extrema_ExtPRevS::*)( const Standard_Integer  ) const>(&Extrema_ExtPRevS::Point),
             R"#(Returns the point of the Nth resulting distance.)#"  , py::arg("N"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Extrema_ExtPRevS::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Extrema_ExtPRevS::*)() const>(&Extrema_ExtPRevS::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Extrema_ExtPRevS::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Extrema_ExtPRevS::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPS , shared_ptr<Extrema_ExtPS>  >>(m.attr("Extrema_ExtPS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Surface &,const Standard_Real,const Standard_Real,const Extrema_ExtFlag,const Extrema_ExtAlgo >()  , py::arg("P"),  py::arg("S"),  py::arg("TolU"),  py::arg("TolV"),  py::arg("F")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("A")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Surface &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Extrema_ExtFlag,const Extrema_ExtAlgo >()  , py::arg("P"),  py::arg("S"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("Vinf"),  py::arg("Vsup"),  py::arg("TolU"),  py::arg("TolV"),  py::arg("F")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("A")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_ExtPS::*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtPS::*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtPS::Initialize),
             R"#(Initializes the fields of the algorithm.)#"  , py::arg("S"),  py::arg("Uinf"),  py::arg("Usup"),  py::arg("Vinf"),  py::arg("Vsup"),  py::arg("TolU"),  py::arg("TolV"))
        .def("Perform",
             (void (Extrema_ExtPS::*)( const gp_Pnt &  ) ) static_cast<void (Extrema_ExtPS::*)( const gp_Pnt &  ) >(&Extrema_ExtPS::Perform),
             R"#(Computes the distances. An exception is raised if the fieds have not been initialized.)#"  , py::arg("P"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtPS::*)() const) static_cast<Standard_Boolean (Extrema_ExtPS::*)() const>(&Extrema_ExtPS::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtPS::*)() const) static_cast<Standard_Integer (Extrema_ExtPS::*)() const>(&Extrema_ExtPS::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtPS::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtPS::*)( const Standard_Integer  ) const>(&Extrema_ExtPS::SquareDistance),
             R"#(Returns the value of the Nth resulting square distance.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnSurf & (Extrema_ExtPS::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnSurf & (Extrema_ExtPS::*)( const Standard_Integer  ) const>(&Extrema_ExtPS::Point),
             R"#(Returns the point of the Nth resulting distance.)#"  , py::arg("N"))
        .def("SetFlag",
             (void (Extrema_ExtPS::*)( const Extrema_ExtFlag  ) ) static_cast<void (Extrema_ExtPS::*)( const Extrema_ExtFlag  ) >(&Extrema_ExtPS::SetFlag),
             R"#(None)#"  , py::arg("F"))
        .def("SetAlgo",
             (void (Extrema_ExtPS::*)( const Extrema_ExtAlgo  ) ) static_cast<void (Extrema_ExtPS::*)( const Extrema_ExtAlgo  ) >(&Extrema_ExtPS::SetAlgo),
             R"#(None)#"  , py::arg("A"))
    // methods using call by reference i.s.o. return
        .def("TrimmedSquareDistances",
             []( Extrema_ExtPS &self , gp_Pnt & PUfVf,gp_Pnt & PUfVl,gp_Pnt & PUlVf,gp_Pnt & PUlVl ){ Standard_Real  dUfVf; Standard_Real  dUfVl; Standard_Real  dUlVf; Standard_Real  dUlVl; self.TrimmedSquareDistances(dUfVf,dUfVl,dUlVf,dUlVl,PUfVf,PUfVl,PUlVf,PUlVl); return std::make_tuple(dUfVf,dUfVl,dUlVf,dUlVl); },
             R"#(if the surface is a trimmed surface, dUfVf is a square distance between <P> and the point of parameter FirstUParameter and FirstVParameter <PUfVf>. dUfVl is a square distance between <P> and the point of parameter FirstUParameter and LastVParameter <PUfVl>. dUlVf is a square distance between <P> and the point of parameter LastUParameter and FirstVParameter <PUlVf>. dUlVl is a square distance between <P> and the point of parameter LastUParameter and LastVParameter <PUlVl>.)#"  , py::arg("PUfVf"),  py::arg("PUfVl"),  py::arg("PUlVf"),  py::arg("PUlVl"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtSS , shared_ptr<Extrema_ExtSS>  >>(m.attr("Extrema_ExtSS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Surface &,const Adaptor3d_Surface &,const Standard_Real,const Standard_Real >()  , py::arg("S1"),  py::arg("S2"),  py::arg("TolS1"),  py::arg("TolS2") )
        .def(py::init< const Adaptor3d_Surface &,const Adaptor3d_Surface &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S1"),  py::arg("S2"),  py::arg("Uinf1"),  py::arg("Usup1"),  py::arg("Vinf1"),  py::arg("Vsup1"),  py::arg("Uinf2"),  py::arg("Usup2"),  py::arg("Vinf2"),  py::arg("Vsup2"),  py::arg("TolS1"),  py::arg("TolS2") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_ExtSS::*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtSS::*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtSS::Initialize),
             R"#(Initializes the fields of the algorithm.)#"  , py::arg("S2"),  py::arg("Uinf2"),  py::arg("Usup2"),  py::arg("Vinf2"),  py::arg("Vsup2"),  py::arg("TolS1"))
        .def("Perform",
             (void (Extrema_ExtSS::*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_ExtSS::*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_ExtSS::Perform),
             R"#(Computes the distances. An exception is raised if the fieds have not been initialized.)#"  , py::arg("S1"),  py::arg("Uinf1"),  py::arg("Usup1"),  py::arg("Vinf1"),  py::arg("Vsup1"),  py::arg("TolS1"))
        .def("IsDone",
             (Standard_Boolean (Extrema_ExtSS::*)() const) static_cast<Standard_Boolean (Extrema_ExtSS::*)() const>(&Extrema_ExtSS::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("IsParallel",
             (Standard_Boolean (Extrema_ExtSS::*)() const) static_cast<Standard_Boolean (Extrema_ExtSS::*)() const>(&Extrema_ExtSS::IsParallel),
             R"#(Returns True if the curve is on a parallel surface.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_ExtSS::*)() const) static_cast<Standard_Integer (Extrema_ExtSS::*)() const>(&Extrema_ExtSS::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_ExtSS::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_ExtSS::*)( const Standard_Integer  ) const>(&Extrema_ExtSS::SquareDistance),
             R"#(Returns the value of the Nth resulting square distance.)#"  , py::arg("N"))
        .def("Points",
             (void (Extrema_ExtSS::*)( const Standard_Integer ,  Extrema_POnSurf & ,  Extrema_POnSurf &  ) const) static_cast<void (Extrema_ExtSS::*)( const Standard_Integer ,  Extrema_POnSurf & ,  Extrema_POnSurf &  ) const>(&Extrema_ExtSS::Points),
             R"#(Returns the point of the Nth resulting distance.)#"  , py::arg("N"),  py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_FuncExtCS , shared_ptr<Extrema_FuncExtCS>  , math_FunctionSetWithDerivatives >>(m.attr("Extrema_FuncExtCS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Surface & >()  , py::arg("C"),  py::arg("S") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_FuncExtCS::*)( const Adaptor3d_Curve & ,  const Adaptor3d_Surface &  ) ) static_cast<void (Extrema_FuncExtCS::*)( const Adaptor3d_Curve & ,  const Adaptor3d_Surface &  ) >(&Extrema_FuncExtCS::Initialize),
             R"#(sets the field mysurf of the function.)#"  , py::arg("C"),  py::arg("S"))
        .def("NbVariables",
             (Standard_Integer (Extrema_FuncExtCS::*)() const) static_cast<Standard_Integer (Extrema_FuncExtCS::*)() const>(&Extrema_FuncExtCS::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (Extrema_FuncExtCS::*)() const) static_cast<Standard_Integer (Extrema_FuncExtCS::*)() const>(&Extrema_FuncExtCS::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_FuncExtCS::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Extrema_FuncExtCS::*)( const math_Vector & ,  math_Vector &  ) >(&Extrema_FuncExtCS::Value),
             R"#(Calculation of Fi(U,V).)#"  , py::arg("UV"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Extrema_FuncExtCS::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Extrema_FuncExtCS::*)( const math_Vector & ,  math_Matrix &  ) >(&Extrema_FuncExtCS::Derivatives),
             R"#(Calculation of Fi'(U,V).)#"  , py::arg("UV"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_FuncExtCS::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Extrema_FuncExtCS::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Extrema_FuncExtCS::Values),
             R"#(Calculation of Fi(U,V) and Fi'(U,V).)#"  , py::arg("UV"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_FuncExtCS::*)() ) static_cast<Standard_Integer (Extrema_FuncExtCS::*)() >(&Extrema_FuncExtCS::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_FuncExtCS::*)() const) static_cast<Standard_Integer (Extrema_FuncExtCS::*)() const>(&Extrema_FuncExtCS::NbExt),
             R"#(Return the number of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_FuncExtCS::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_FuncExtCS::*)( const Standard_Integer  ) const>(&Extrema_FuncExtCS::SquareDistance),
             R"#(Return the value of the Nth distance.)#"  , py::arg("N"))
        .def("PointOnCurve",
             (const Extrema_POnCurv & (Extrema_FuncExtCS::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv & (Extrema_FuncExtCS::*)( const Standard_Integer  ) const>(&Extrema_FuncExtCS::PointOnCurve),
             R"#(Returns the Nth extremum on C.)#"  , py::arg("N"))
        .def("PointOnSurface",
             (const Extrema_POnSurf & (Extrema_FuncExtCS::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnSurf & (Extrema_FuncExtCS::*)( const Standard_Integer  ) const>(&Extrema_FuncExtCS::PointOnSurface),
             R"#(Return the Nth extremum on S.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_FuncExtSS , shared_ptr<Extrema_FuncExtSS>  , math_FunctionSetWithDerivatives >>(m.attr("Extrema_FuncExtSS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Surface &,const Adaptor3d_Surface & >()  , py::arg("S1"),  py::arg("S2") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_FuncExtSS::*)( const Adaptor3d_Surface & ,  const Adaptor3d_Surface &  ) ) static_cast<void (Extrema_FuncExtSS::*)( const Adaptor3d_Surface & ,  const Adaptor3d_Surface &  ) >(&Extrema_FuncExtSS::Initialize),
             R"#(sets the field mysurf of the function.)#"  , py::arg("S1"),  py::arg("S2"))
        .def("NbVariables",
             (Standard_Integer (Extrema_FuncExtSS::*)() const) static_cast<Standard_Integer (Extrema_FuncExtSS::*)() const>(&Extrema_FuncExtSS::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (Extrema_FuncExtSS::*)() const) static_cast<Standard_Integer (Extrema_FuncExtSS::*)() const>(&Extrema_FuncExtSS::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_FuncExtSS::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Extrema_FuncExtSS::*)( const math_Vector & ,  math_Vector &  ) >(&Extrema_FuncExtSS::Value),
             R"#(Calculate Fi(U,V).)#"  , py::arg("UV"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Extrema_FuncExtSS::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Extrema_FuncExtSS::*)( const math_Vector & ,  math_Matrix &  ) >(&Extrema_FuncExtSS::Derivatives),
             R"#(Calculate Fi'(U,V).)#"  , py::arg("UV"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_FuncExtSS::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Extrema_FuncExtSS::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Extrema_FuncExtSS::Values),
             R"#(Calculate Fi(U,V) and Fi'(U,V).)#"  , py::arg("UV"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_FuncExtSS::*)() ) static_cast<Standard_Integer (Extrema_FuncExtSS::*)() >(&Extrema_FuncExtSS::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_FuncExtSS::*)() const) static_cast<Standard_Integer (Extrema_FuncExtSS::*)() const>(&Extrema_FuncExtSS::NbExt),
             R"#(Return the number of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_FuncExtSS::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_FuncExtSS::*)( const Standard_Integer  ) const>(&Extrema_FuncExtSS::SquareDistance),
             R"#(Return the value of the Nth distance.)#"  , py::arg("N"))
        .def("PointOnS1",
             (const Extrema_POnSurf & (Extrema_FuncExtSS::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnSurf & (Extrema_FuncExtSS::*)( const Standard_Integer  ) const>(&Extrema_FuncExtSS::PointOnS1),
             R"#(Return the Nth extremum on S1.)#"  , py::arg("N"))
        .def("PointOnS2",
             (const Extrema_POnSurf & (Extrema_FuncExtSS::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnSurf & (Extrema_FuncExtSS::*)( const Standard_Integer  ) const>(&Extrema_FuncExtSS::PointOnS2),
             R"#(Renvoie le Nieme extremum sur S2.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_FuncPSDist , shared_ptr<Extrema_FuncPSDist>  , math_MultipleVarFunctionWithGradient >>(m.attr("Extrema_FuncPSDist"))
    // constructors
        .def(py::init< const Adaptor3d_Surface &,const gp_Pnt & >()  , py::arg("theS"),  py::arg("theP") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Extrema_FuncPSDist::*)() const) static_cast<Standard_Integer (Extrema_FuncPSDist::*)() const>(&Extrema_FuncPSDist::NbVariables),
             R"#(Number of variables.)#" )
        .def("Value",
             (Standard_Boolean (Extrema_FuncPSDist::*)( const math_Vector & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_FuncPSDist::*)( const math_Vector & ,  Standard_Real &  ) >(&Extrema_FuncPSDist::Value),
             R"#(Value.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (Extrema_FuncPSDist::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Extrema_FuncPSDist::*)( const math_Vector & ,  math_Vector &  ) >(&Extrema_FuncPSDist::Gradient),
             R"#(Gradient.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (Extrema_FuncPSDist::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Extrema_FuncPSDist::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) >(&Extrema_FuncPSDist::Values),
             R"#(Value and gradient.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_FuncPSNorm , shared_ptr<Extrema_FuncPSNorm>  , math_FunctionSetWithDerivatives >>(m.attr("Extrema_FuncPSNorm"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Surface & >()  , py::arg("P"),  py::arg("S") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_FuncPSNorm::*)( const Adaptor3d_Surface &  ) ) static_cast<void (Extrema_FuncPSNorm::*)( const Adaptor3d_Surface &  ) >(&Extrema_FuncPSNorm::Initialize),
             R"#(sets the field mysurf of the function.)#"  , py::arg("S"))
        .def("SetPoint",
             (void (Extrema_FuncPSNorm::*)( const gp_Pnt &  ) ) static_cast<void (Extrema_FuncPSNorm::*)( const gp_Pnt &  ) >(&Extrema_FuncPSNorm::SetPoint),
             R"#(sets the field mysurf of the function.)#"  , py::arg("P"))
        .def("NbVariables",
             (Standard_Integer (Extrema_FuncPSNorm::*)() const) static_cast<Standard_Integer (Extrema_FuncPSNorm::*)() const>(&Extrema_FuncPSNorm::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (Extrema_FuncPSNorm::*)() const) static_cast<Standard_Integer (Extrema_FuncPSNorm::*)() const>(&Extrema_FuncPSNorm::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_FuncPSNorm::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Extrema_FuncPSNorm::*)( const math_Vector & ,  math_Vector &  ) >(&Extrema_FuncPSNorm::Value),
             R"#(Calculate Fi(U,V).)#"  , py::arg("UV"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Extrema_FuncPSNorm::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Extrema_FuncPSNorm::*)( const math_Vector & ,  math_Matrix &  ) >(&Extrema_FuncPSNorm::Derivatives),
             R"#(Calculate Fi'(U,V).)#"  , py::arg("UV"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_FuncPSNorm::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Extrema_FuncPSNorm::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Extrema_FuncPSNorm::Values),
             R"#(Calculate Fi(U,V) and Fi'(U,V).)#"  , py::arg("UV"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_FuncPSNorm::*)() ) static_cast<Standard_Integer (Extrema_FuncPSNorm::*)() >(&Extrema_FuncPSNorm::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_FuncPSNorm::*)() const) static_cast<Standard_Integer (Extrema_FuncPSNorm::*)() const>(&Extrema_FuncPSNorm::NbExt),
             R"#(Return the number of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_FuncPSNorm::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_FuncPSNorm::*)( const Standard_Integer  ) const>(&Extrema_FuncPSNorm::SquareDistance),
             R"#(Return the value of the Nth distance.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnSurf & (Extrema_FuncPSNorm::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnSurf & (Extrema_FuncPSNorm::*)( const Standard_Integer  ) const>(&Extrema_FuncPSNorm::Point),
             R"#(Returns the Nth extremum.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GenExtCS , shared_ptr<Extrema_GenExtCS>  >>(m.attr("Extrema_GenExtCS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Surface &,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("S"),  py::arg("NbT"),  py::arg("NbU"),  py::arg("NbV"),  py::arg("Tol1"),  py::arg("Tol2") )
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Surface &,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("S"),  py::arg("NbT"),  py::arg("NbU"),  py::arg("NbV"),  py::arg("tmin"),  py::arg("tsup"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Vmin"),  py::arg("Vsup"),  py::arg("Tol1"),  py::arg("Tol2") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_GenExtCS::*)( const Adaptor3d_Surface & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Extrema_GenExtCS::*)( const Adaptor3d_Surface & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) >(&Extrema_GenExtCS::Initialize),
             R"#(None)#"  , py::arg("S"),  py::arg("NbU"),  py::arg("NbV"),  py::arg("Tol2"))
        .def("Initialize",
             (void (Extrema_GenExtCS::*)( const Adaptor3d_Surface & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_GenExtCS::*)( const Adaptor3d_Surface & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_GenExtCS::Initialize),
             R"#(None)#"  , py::arg("S"),  py::arg("NbU"),  py::arg("NbV"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Vmin"),  py::arg("Vsup"),  py::arg("Tol2"))
        .def("Perform",
             (void (Extrema_GenExtCS::*)( const Adaptor3d_Curve & ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Extrema_GenExtCS::*)( const Adaptor3d_Curve & ,  const Standard_Integer ,  const Standard_Real  ) >(&Extrema_GenExtCS::Perform),
             R"#(the algorithm is done with S An exception is raised if the fields have not been initialized.)#"  , py::arg("C"),  py::arg("NbT"),  py::arg("Tol1"))
        .def("Perform",
             (void (Extrema_GenExtCS::*)( const Adaptor3d_Curve & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_GenExtCS::*)( const Adaptor3d_Curve & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_GenExtCS::Perform),
             R"#(the algorithm is done with C An exception is raised if the fields have not been initialized.)#"  , py::arg("C"),  py::arg("NbT"),  py::arg("tmin"),  py::arg("tsup"),  py::arg("Tol1"))
        .def("IsDone",
             (Standard_Boolean (Extrema_GenExtCS::*)() const) static_cast<Standard_Boolean (Extrema_GenExtCS::*)() const>(&Extrema_GenExtCS::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_GenExtCS::*)() const) static_cast<Standard_Integer (Extrema_GenExtCS::*)() const>(&Extrema_GenExtCS::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_GenExtCS::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_GenExtCS::*)( const Standard_Integer  ) const>(&Extrema_GenExtCS::SquareDistance),
             R"#(Returns the value of the Nth resulting square distance.)#"  , py::arg("N"))
        .def("PointOnCurve",
             (const Extrema_POnCurv & (Extrema_GenExtCS::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv & (Extrema_GenExtCS::*)( const Standard_Integer  ) const>(&Extrema_GenExtCS::PointOnCurve),
             R"#(Returns the point of the Nth resulting distance.)#"  , py::arg("N"))
        .def("PointOnSurface",
             (const Extrema_POnSurf & (Extrema_GenExtCS::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnSurf & (Extrema_GenExtCS::*)( const Standard_Integer  ) const>(&Extrema_GenExtCS::PointOnSurface),
             R"#(Returns the point of the Nth resulting distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GenExtPS , shared_ptr<Extrema_GenExtPS>  >>(m.attr("Extrema_GenExtPS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Surface &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Extrema_ExtFlag,const Extrema_ExtAlgo >()  , py::arg("P"),  py::arg("S"),  py::arg("NbU"),  py::arg("NbV"),  py::arg("TolU"),  py::arg("TolV"),  py::arg("F")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("A")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Surface &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Extrema_ExtFlag,const Extrema_ExtAlgo >()  , py::arg("P"),  py::arg("S"),  py::arg("NbU"),  py::arg("NbV"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Vmin"),  py::arg("Vsup"),  py::arg("TolU"),  py::arg("TolV"),  py::arg("F")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("A")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_GenExtPS::*)( const Adaptor3d_Surface & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_GenExtPS::*)( const Adaptor3d_Surface & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_GenExtPS::Initialize),
             R"#(None)#"  , py::arg("S"),  py::arg("NbU"),  py::arg("NbV"),  py::arg("TolU"),  py::arg("TolV"))
        .def("Initialize",
             (void (Extrema_GenExtPS::*)( const Adaptor3d_Surface & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_GenExtPS::*)( const Adaptor3d_Surface & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_GenExtPS::Initialize),
             R"#(None)#"  , py::arg("S"),  py::arg("NbU"),  py::arg("NbV"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Vmin"),  py::arg("Vsup"),  py::arg("TolU"),  py::arg("TolV"))
        .def("Perform",
             (void (Extrema_GenExtPS::*)( const gp_Pnt &  ) ) static_cast<void (Extrema_GenExtPS::*)( const gp_Pnt &  ) >(&Extrema_GenExtPS::Perform),
             R"#(the algorithm is done with the point P. An exception is raised if the fields have not been initialized.)#"  , py::arg("P"))
        .def("SetFlag",
             (void (Extrema_GenExtPS::*)( const Extrema_ExtFlag  ) ) static_cast<void (Extrema_GenExtPS::*)( const Extrema_ExtFlag  ) >(&Extrema_GenExtPS::SetFlag),
             R"#(None)#"  , py::arg("F"))
        .def("SetAlgo",
             (void (Extrema_GenExtPS::*)( const Extrema_ExtAlgo  ) ) static_cast<void (Extrema_GenExtPS::*)( const Extrema_ExtAlgo  ) >(&Extrema_GenExtPS::SetAlgo),
             R"#(None)#"  , py::arg("A"))
        .def("IsDone",
             (Standard_Boolean (Extrema_GenExtPS::*)() const) static_cast<Standard_Boolean (Extrema_GenExtPS::*)() const>(&Extrema_GenExtPS::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_GenExtPS::*)() const) static_cast<Standard_Integer (Extrema_GenExtPS::*)() const>(&Extrema_GenExtPS::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_GenExtPS::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_GenExtPS::*)( const Standard_Integer  ) const>(&Extrema_GenExtPS::SquareDistance),
             R"#(Returns the value of the Nth resulting square distance.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnSurf & (Extrema_GenExtPS::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnSurf & (Extrema_GenExtPS::*)( const Standard_Integer  ) const>(&Extrema_GenExtPS::Point),
             R"#(Returns the point of the Nth resulting distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GenExtSS , shared_ptr<Extrema_GenExtSS>  >>(m.attr("Extrema_GenExtSS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Surface &,const Adaptor3d_Surface &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("S1"),  py::arg("S2"),  py::arg("NbU"),  py::arg("NbV"),  py::arg("Tol1"),  py::arg("Tol2") )
        .def(py::init< const Adaptor3d_Surface &,const Adaptor3d_Surface &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S1"),  py::arg("S2"),  py::arg("NbU"),  py::arg("NbV"),  py::arg("U1min"),  py::arg("U1sup"),  py::arg("V1min"),  py::arg("V1sup"),  py::arg("U2min"),  py::arg("U2sup"),  py::arg("V2min"),  py::arg("V2sup"),  py::arg("Tol1"),  py::arg("Tol2") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_GenExtSS::*)( const Adaptor3d_Surface & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Extrema_GenExtSS::*)( const Adaptor3d_Surface & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) >(&Extrema_GenExtSS::Initialize),
             R"#(None)#"  , py::arg("S2"),  py::arg("NbU"),  py::arg("NbV"),  py::arg("Tol2"))
        .def("Initialize",
             (void (Extrema_GenExtSS::*)( const Adaptor3d_Surface & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_GenExtSS::*)( const Adaptor3d_Surface & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_GenExtSS::Initialize),
             R"#(None)#"  , py::arg("S2"),  py::arg("NbU"),  py::arg("NbV"),  py::arg("U2min"),  py::arg("U2sup"),  py::arg("V2min"),  py::arg("V2sup"),  py::arg("Tol2"))
        .def("Perform",
             (void (Extrema_GenExtSS::*)( const Adaptor3d_Surface & ,  const Standard_Real  ) ) static_cast<void (Extrema_GenExtSS::*)( const Adaptor3d_Surface & ,  const Standard_Real  ) >(&Extrema_GenExtSS::Perform),
             R"#(the algorithm is done with S1 An exception is raised if the fields have not been initialized.)#"  , py::arg("S1"),  py::arg("Tol1"))
        .def("Perform",
             (void (Extrema_GenExtSS::*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_GenExtSS::*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_GenExtSS::Perform),
             R"#(the algorithm is done withS1 An exception is raised if the fields have not been initialized.)#"  , py::arg("S1"),  py::arg("U1min"),  py::arg("U1sup"),  py::arg("V1min"),  py::arg("V1sup"),  py::arg("Tol1"))
        .def("IsDone",
             (Standard_Boolean (Extrema_GenExtSS::*)() const) static_cast<Standard_Boolean (Extrema_GenExtSS::*)() const>(&Extrema_GenExtSS::IsDone),
             R"#(Returns True if the distances are found.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_GenExtSS::*)() const) static_cast<Standard_Integer (Extrema_GenExtSS::*)() const>(&Extrema_GenExtSS::NbExt),
             R"#(Returns the number of extremum distances.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_GenExtSS::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_GenExtSS::*)( const Standard_Integer  ) const>(&Extrema_GenExtSS::SquareDistance),
             R"#(Returns the value of the Nth resulting square distance.)#"  , py::arg("N"))
        .def("PointOnS1",
             (const Extrema_POnSurf & (Extrema_GenExtSS::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnSurf & (Extrema_GenExtSS::*)( const Standard_Integer  ) const>(&Extrema_GenExtSS::PointOnS1),
             R"#(Returns the point of the Nth resulting distance.)#"  , py::arg("N"))
        .def("PointOnS2",
             (const Extrema_POnSurf & (Extrema_GenExtSS::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnSurf & (Extrema_GenExtSS::*)( const Standard_Integer  ) const>(&Extrema_GenExtSS::PointOnS2),
             R"#(Returns the point of the Nth resulting distance.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GenLocateExtCS , shared_ptr<Extrema_GenLocateExtCS>  >>(m.attr("Extrema_GenLocateExtCS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Surface &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("S"),  py::arg("T"),  py::arg("U"),  py::arg("V"),  py::arg("Tol1"),  py::arg("Tol2") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Extrema_GenLocateExtCS::*)( const Adaptor3d_Curve & ,  const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_GenLocateExtCS::*)( const Adaptor3d_Curve & ,  const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_GenLocateExtCS::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("S"),  py::arg("T"),  py::arg("U"),  py::arg("V"),  py::arg("Tol1"),  py::arg("Tol2"))
        .def("IsDone",
             (Standard_Boolean (Extrema_GenLocateExtCS::*)() const) static_cast<Standard_Boolean (Extrema_GenLocateExtCS::*)() const>(&Extrema_GenLocateExtCS::IsDone),
             R"#(Returns True if the distance is found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_GenLocateExtCS::*)() const) static_cast<Standard_Real (Extrema_GenLocateExtCS::*)() const>(&Extrema_GenLocateExtCS::SquareDistance),
             R"#(Returns the value of the extremum square distance.)#" )
        .def("PointOnCurve",
             (const Extrema_POnCurv & (Extrema_GenLocateExtCS::*)() const) static_cast<const Extrema_POnCurv & (Extrema_GenLocateExtCS::*)() const>(&Extrema_GenLocateExtCS::PointOnCurve),
             R"#(Returns the point of the extremum distance on C.)#" )
        .def("PointOnSurface",
             (const Extrema_POnSurf & (Extrema_GenLocateExtCS::*)() const) static_cast<const Extrema_POnSurf & (Extrema_GenLocateExtCS::*)() const>(&Extrema_GenLocateExtCS::PointOnSurface),
             R"#(Returns the point of the extremum distance on S.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GenLocateExtPS , shared_ptr<Extrema_GenLocateExtPS>  >>(m.attr("Extrema_GenLocateExtPS"))
    // constructors
        .def(py::init< const Adaptor3d_Surface &,const Standard_Real,const Standard_Real >()  , py::arg("theS"),  py::arg("theTolU")=static_cast<const Standard_Real>(Precision :: PConfusion ( )),  py::arg("theTolV")=static_cast<const Standard_Real>(Precision :: PConfusion ( )) )
    // custom constructors
    // methods
        .def("Perform",
             (void (Extrema_GenLocateExtPS::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Extrema_GenLocateExtPS::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&Extrema_GenLocateExtPS::Perform),
             R"#(Calculates the extrema between the point and the surface using a close point. The close point is defined by the parameter values theU0 and theV0. Type of the algorithm depends on the isDistanceCriteria flag. If flag value is false - normal projection criteria will be used. If flag value is true - distance criteria will be used.)#"  , py::arg("theP"),  py::arg("theU0"),  py::arg("theV0"),  py::arg("isDistanceCriteria")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsDone",
             (Standard_Boolean (Extrema_GenLocateExtPS::*)() const) static_cast<Standard_Boolean (Extrema_GenLocateExtPS::*)() const>(&Extrema_GenLocateExtPS::IsDone),
             R"#(Returns True if the distance is found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_GenLocateExtPS::*)() const) static_cast<Standard_Real (Extrema_GenLocateExtPS::*)() const>(&Extrema_GenLocateExtPS::SquareDistance),
             R"#(Returns the value of the extremum square distance.)#" )
        .def("Point",
             (const Extrema_POnSurf & (Extrema_GenLocateExtPS::*)() const) static_cast<const Extrema_POnSurf & (Extrema_GenLocateExtPS::*)() const>(&Extrema_GenLocateExtPS::Point),
             R"#(Returns the point of the extremum distance.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GenLocateExtSS , shared_ptr<Extrema_GenLocateExtSS>  >>(m.attr("Extrema_GenLocateExtSS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Surface &,const Adaptor3d_Surface &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S1"),  py::arg("S2"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("Tol1"),  py::arg("Tol2") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Extrema_GenLocateExtSS::*)( const Adaptor3d_Surface & ,  const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_GenLocateExtSS::*)( const Adaptor3d_Surface & ,  const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_GenLocateExtSS::Perform),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("Tol1"),  py::arg("Tol2"))
        .def("IsDone",
             (Standard_Boolean (Extrema_GenLocateExtSS::*)() const) static_cast<Standard_Boolean (Extrema_GenLocateExtSS::*)() const>(&Extrema_GenLocateExtSS::IsDone),
             R"#(Returns True if the distance is found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_GenLocateExtSS::*)() const) static_cast<Standard_Real (Extrema_GenLocateExtSS::*)() const>(&Extrema_GenLocateExtSS::SquareDistance),
             R"#(Returns the value of the extremum square distance.)#" )
        .def("PointOnS1",
             (const Extrema_POnSurf & (Extrema_GenLocateExtSS::*)() const) static_cast<const Extrema_POnSurf & (Extrema_GenLocateExtSS::*)() const>(&Extrema_GenLocateExtSS::PointOnS1),
             R"#(Returns the point of the extremum distance on S1.)#" )
        .def("PointOnS2",
             (const Extrema_POnSurf & (Extrema_GenLocateExtSS::*)() const) static_cast<const Extrema_POnSurf & (Extrema_GenLocateExtSS::*)() const>(&Extrema_GenLocateExtSS::PointOnS2),
             R"#(Returns the point of the extremum distance on S2.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GlobOptFuncCCC0 , shared_ptr<Extrema_GlobOptFuncCCC0>  , math_MultipleVarFunction >>(m.attr("Extrema_GlobOptFuncCCC0"))
    // constructors
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Curve & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d & >()  , py::arg("C1"),  py::arg("C2") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Extrema_GlobOptFuncCCC0::*)() const) static_cast<Standard_Integer (Extrema_GlobOptFuncCCC0::*)() const>(&Extrema_GlobOptFuncCCC0::NbVariables),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_GlobOptFuncCCC0::*)( const math_Vector & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC0::*)( const math_Vector & ,  Standard_Real &  ) >(&Extrema_GlobOptFuncCCC0::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GlobOptFuncCCC1 , shared_ptr<Extrema_GlobOptFuncCCC1>  , math_MultipleVarFunctionWithGradient >>(m.attr("Extrema_GlobOptFuncCCC1"))
    // constructors
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Curve & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d & >()  , py::arg("C1"),  py::arg("C2") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Extrema_GlobOptFuncCCC1::*)() const) static_cast<Standard_Integer (Extrema_GlobOptFuncCCC1::*)() const>(&Extrema_GlobOptFuncCCC1::NbVariables),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_GlobOptFuncCCC1::*)( const math_Vector & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC1::*)( const math_Vector & ,  Standard_Real &  ) >(&Extrema_GlobOptFuncCCC1::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (Extrema_GlobOptFuncCCC1::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC1::*)( const math_Vector & ,  math_Vector &  ) >(&Extrema_GlobOptFuncCCC1::Gradient),
             R"#(None)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (Extrema_GlobOptFuncCCC1::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC1::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) >(&Extrema_GlobOptFuncCCC1::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GlobOptFuncCCC2 , shared_ptr<Extrema_GlobOptFuncCCC2>  , math_MultipleVarFunctionWithHessian >>(m.attr("Extrema_GlobOptFuncCCC2"))
    // constructors
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Curve & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d & >()  , py::arg("C1"),  py::arg("C2") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Extrema_GlobOptFuncCCC2::*)() const) static_cast<Standard_Integer (Extrema_GlobOptFuncCCC2::*)() const>(&Extrema_GlobOptFuncCCC2::NbVariables),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & ,  Standard_Real &  ) >(&Extrema_GlobOptFuncCCC2::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & ,  math_Vector &  ) >(&Extrema_GlobOptFuncCCC2::Gradient),
             R"#(None)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) >(&Extrema_GlobOptFuncCCC2::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & ,  Standard_Real & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & ,  Standard_Real & ,  math_Vector & ,  math_Matrix &  ) >(&Extrema_GlobOptFuncCCC2::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"),  py::arg("H"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GlobOptFuncCS , shared_ptr<Extrema_GlobOptFuncCS>  , math_MultipleVarFunctionWithHessian >>(m.attr("Extrema_GlobOptFuncCS"))
    // constructors
        .def(py::init< const Adaptor3d_Curve *,const Adaptor3d_Surface * >()  , py::arg("C"),  py::arg("S") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Extrema_GlobOptFuncCS::*)() const) static_cast<Standard_Integer (Extrema_GlobOptFuncCS::*)() const>(&Extrema_GlobOptFuncCS::NbVariables),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & ,  Standard_Real &  ) >(&Extrema_GlobOptFuncCS::Value),
             R"#(None)#"  , py::arg("theX"),  py::arg("theF"))
        .def("Gradient",
             (Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & ,  math_Vector &  ) >(&Extrema_GlobOptFuncCS::Gradient),
             R"#(None)#"  , py::arg("theX"),  py::arg("theG"))
        .def("Values",
             (Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) >(&Extrema_GlobOptFuncCS::Values),
             R"#(None)#"  , py::arg("theX"),  py::arg("theF"),  py::arg("theG"))
        .def("Values",
             (Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & ,  Standard_Real & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & ,  Standard_Real & ,  math_Vector & ,  math_Matrix &  ) >(&Extrema_GlobOptFuncCS::Values),
             R"#(None)#"  , py::arg("theX"),  py::arg("theF"),  py::arg("theG"),  py::arg("theH"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_HArray1OfPOnCurv ,opencascade::handle<Extrema_HArray1OfPOnCurv>  , Extrema_Array1OfPOnCurv , Standard_Transient >>(m.attr("Extrema_HArray1OfPOnCurv"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const Extrema_POnCurv & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Extrema_POnCurv> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Extrema_Array1OfPOnCurv & (Extrema_HArray1OfPOnCurv::*)() const) static_cast<const Extrema_Array1OfPOnCurv & (Extrema_HArray1OfPOnCurv::*)() const>(&Extrema_HArray1OfPOnCurv::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Extrema_Array1OfPOnCurv & (Extrema_HArray1OfPOnCurv::*)() ) static_cast<Extrema_Array1OfPOnCurv & (Extrema_HArray1OfPOnCurv::*)() >(&Extrema_HArray1OfPOnCurv::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Extrema_HArray1OfPOnCurv::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Extrema_HArray1OfPOnCurv::*)() const>(&Extrema_HArray1OfPOnCurv::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Extrema_HArray1OfPOnCurv::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Extrema_HArray1OfPOnCurv::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_HArray1OfPOnCurv2d ,opencascade::handle<Extrema_HArray1OfPOnCurv2d>  , Extrema_Array1OfPOnCurv2d , Standard_Transient >>(m.attr("Extrema_HArray1OfPOnCurv2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const Extrema_POnCurv2d & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Extrema_POnCurv2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Extrema_Array1OfPOnCurv2d & (Extrema_HArray1OfPOnCurv2d::*)() const) static_cast<const Extrema_Array1OfPOnCurv2d & (Extrema_HArray1OfPOnCurv2d::*)() const>(&Extrema_HArray1OfPOnCurv2d::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Extrema_Array1OfPOnCurv2d & (Extrema_HArray1OfPOnCurv2d::*)() ) static_cast<Extrema_Array1OfPOnCurv2d & (Extrema_HArray1OfPOnCurv2d::*)() >(&Extrema_HArray1OfPOnCurv2d::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Extrema_HArray1OfPOnCurv2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Extrema_HArray1OfPOnCurv2d::*)() const>(&Extrema_HArray1OfPOnCurv2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Extrema_HArray1OfPOnCurv2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Extrema_HArray1OfPOnCurv2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_HArray1OfPOnSurf ,opencascade::handle<Extrema_HArray1OfPOnSurf>  , Extrema_Array1OfPOnSurf , Standard_Transient >>(m.attr("Extrema_HArray1OfPOnSurf"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const Extrema_POnSurf & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Extrema_POnSurf> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Extrema_Array1OfPOnSurf & (Extrema_HArray1OfPOnSurf::*)() const) static_cast<const Extrema_Array1OfPOnSurf & (Extrema_HArray1OfPOnSurf::*)() const>(&Extrema_HArray1OfPOnSurf::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Extrema_Array1OfPOnSurf & (Extrema_HArray1OfPOnSurf::*)() ) static_cast<Extrema_Array1OfPOnSurf & (Extrema_HArray1OfPOnSurf::*)() >(&Extrema_HArray1OfPOnSurf::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Extrema_HArray1OfPOnSurf::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Extrema_HArray1OfPOnSurf::*)() const>(&Extrema_HArray1OfPOnSurf::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Extrema_HArray1OfPOnSurf::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Extrema_HArray1OfPOnSurf::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_HArray2OfPOnCurv ,opencascade::handle<Extrema_HArray2OfPOnCurv>  , Extrema_Array2OfPOnCurv , Standard_Transient >>(m.attr("Extrema_HArray2OfPOnCurv"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const Extrema_POnCurv & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<Extrema_POnCurv> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const Extrema_Array2OfPOnCurv & (Extrema_HArray2OfPOnCurv::*)() const) static_cast<const Extrema_Array2OfPOnCurv & (Extrema_HArray2OfPOnCurv::*)() const>(&Extrema_HArray2OfPOnCurv::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (Extrema_Array2OfPOnCurv & (Extrema_HArray2OfPOnCurv::*)() ) static_cast<Extrema_Array2OfPOnCurv & (Extrema_HArray2OfPOnCurv::*)() >(&Extrema_HArray2OfPOnCurv::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Extrema_HArray2OfPOnCurv::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Extrema_HArray2OfPOnCurv::*)() const>(&Extrema_HArray2OfPOnCurv::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Extrema_HArray2OfPOnCurv::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Extrema_HArray2OfPOnCurv::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_HArray2OfPOnCurv2d ,opencascade::handle<Extrema_HArray2OfPOnCurv2d>  , Extrema_Array2OfPOnCurv2d , Standard_Transient >>(m.attr("Extrema_HArray2OfPOnCurv2d"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const Extrema_POnCurv2d & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<Extrema_POnCurv2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const Extrema_Array2OfPOnCurv2d & (Extrema_HArray2OfPOnCurv2d::*)() const) static_cast<const Extrema_Array2OfPOnCurv2d & (Extrema_HArray2OfPOnCurv2d::*)() const>(&Extrema_HArray2OfPOnCurv2d::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (Extrema_Array2OfPOnCurv2d & (Extrema_HArray2OfPOnCurv2d::*)() ) static_cast<Extrema_Array2OfPOnCurv2d & (Extrema_HArray2OfPOnCurv2d::*)() >(&Extrema_HArray2OfPOnCurv2d::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Extrema_HArray2OfPOnCurv2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Extrema_HArray2OfPOnCurv2d::*)() const>(&Extrema_HArray2OfPOnCurv2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Extrema_HArray2OfPOnCurv2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Extrema_HArray2OfPOnCurv2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_HArray2OfPOnSurf ,opencascade::handle<Extrema_HArray2OfPOnSurf>  , Extrema_Array2OfPOnSurf , Standard_Transient >>(m.attr("Extrema_HArray2OfPOnSurf"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const Extrema_POnSurf & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<Extrema_POnSurf> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const Extrema_Array2OfPOnSurf & (Extrema_HArray2OfPOnSurf::*)() const) static_cast<const Extrema_Array2OfPOnSurf & (Extrema_HArray2OfPOnSurf::*)() const>(&Extrema_HArray2OfPOnSurf::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (Extrema_Array2OfPOnSurf & (Extrema_HArray2OfPOnSurf::*)() ) static_cast<Extrema_Array2OfPOnSurf & (Extrema_HArray2OfPOnSurf::*)() >(&Extrema_HArray2OfPOnSurf::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Extrema_HArray2OfPOnSurf::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Extrema_HArray2OfPOnSurf::*)() const>(&Extrema_HArray2OfPOnSurf::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Extrema_HArray2OfPOnSurf::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Extrema_HArray2OfPOnSurf::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_HArray2OfPOnSurfParams ,opencascade::handle<Extrema_HArray2OfPOnSurfParams>  , Extrema_Array2OfPOnSurfParams , Standard_Transient >>(m.attr("Extrema_HArray2OfPOnSurfParams"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const Extrema_POnSurfParams & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<Extrema_POnSurfParams> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const Extrema_Array2OfPOnSurfParams & (Extrema_HArray2OfPOnSurfParams::*)() const) static_cast<const Extrema_Array2OfPOnSurfParams & (Extrema_HArray2OfPOnSurfParams::*)() const>(&Extrema_HArray2OfPOnSurfParams::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (Extrema_Array2OfPOnSurfParams & (Extrema_HArray2OfPOnSurfParams::*)() ) static_cast<Extrema_Array2OfPOnSurfParams & (Extrema_HArray2OfPOnSurfParams::*)() >(&Extrema_HArray2OfPOnSurfParams::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Extrema_HArray2OfPOnSurfParams::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Extrema_HArray2OfPOnSurfParams::*)() const>(&Extrema_HArray2OfPOnSurfParams::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Extrema_HArray2OfPOnSurfParams::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Extrema_HArray2OfPOnSurfParams::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocECC , shared_ptr<Extrema_LocECC>  >>(m.attr("Extrema_LocECC"))
    // constructors
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("U0"),  py::arg("V0"),  py::arg("TolU"),  py::arg("TolV") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (Extrema_LocECC::*)() const) static_cast<Standard_Boolean (Extrema_LocECC::*)() const>(&Extrema_LocECC::IsDone),
             R"#(Returns True if the distance is found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_LocECC::*)() const) static_cast<Standard_Real (Extrema_LocECC::*)() const>(&Extrema_LocECC::SquareDistance),
             R"#(Returns the value of the extremum square distance.)#" )
        .def("Point",
             (void (Extrema_LocECC::*)( Extrema_POnCurv & ,  Extrema_POnCurv &  ) const) static_cast<void (Extrema_LocECC::*)( Extrema_POnCurv & ,  Extrema_POnCurv &  ) const>(&Extrema_LocECC::Point),
             R"#(Returns the points of the extremum distance. P1 is on the first curve, P2 on the second one.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocECC2d , shared_ptr<Extrema_LocECC2d>  >>(m.attr("Extrema_LocECC2d"))
    // constructors
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("U0"),  py::arg("V0"),  py::arg("TolU"),  py::arg("TolV") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (Extrema_LocECC2d::*)() const) static_cast<Standard_Boolean (Extrema_LocECC2d::*)() const>(&Extrema_LocECC2d::IsDone),
             R"#(Returns True if the distance is found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_LocECC2d::*)() const) static_cast<Standard_Real (Extrema_LocECC2d::*)() const>(&Extrema_LocECC2d::SquareDistance),
             R"#(Returns the value of the extremum square distance.)#" )
        .def("Point",
             (void (Extrema_LocECC2d::*)( Extrema_POnCurv2d & ,  Extrema_POnCurv2d &  ) const) static_cast<void (Extrema_LocECC2d::*)( Extrema_POnCurv2d & ,  Extrema_POnCurv2d &  ) const>(&Extrema_LocECC2d::Point),
             R"#(Returns the points of the extremum distance. P1 is on the first curve, P2 on the second one.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocEPCOfLocateExtPC , shared_ptr<Extrema_LocEPCOfLocateExtPC>  >>(m.attr("Extrema_LocEPCOfLocateExtPC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("U0"),  py::arg("TolU") )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("U0"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_LocEPCOfLocateExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_LocEPCOfLocateExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_LocEPCOfLocateExtPC::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"))
        .def("Perform",
             (void (Extrema_LocEPCOfLocateExtPC::*)( const gp_Pnt & ,  const Standard_Real  ) ) static_cast<void (Extrema_LocEPCOfLocateExtPC::*)( const gp_Pnt & ,  const Standard_Real  ) >(&Extrema_LocEPCOfLocateExtPC::Perform),
             R"#(the algorithm is done with the point P. An exception is raised if the fields have not been initialized.)#"  , py::arg("P"),  py::arg("U0"))
        .def("IsDone",
             (Standard_Boolean (Extrema_LocEPCOfLocateExtPC::*)() const) static_cast<Standard_Boolean (Extrema_LocEPCOfLocateExtPC::*)() const>(&Extrema_LocEPCOfLocateExtPC::IsDone),
             R"#(Returns True if the distance is found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_LocEPCOfLocateExtPC::*)() const) static_cast<Standard_Real (Extrema_LocEPCOfLocateExtPC::*)() const>(&Extrema_LocEPCOfLocateExtPC::SquareDistance),
             R"#(Returns the value of the extremum square distance.)#" )
        .def("IsMin",
             (Standard_Boolean (Extrema_LocEPCOfLocateExtPC::*)() const) static_cast<Standard_Boolean (Extrema_LocEPCOfLocateExtPC::*)() const>(&Extrema_LocEPCOfLocateExtPC::IsMin),
             R"#(Returns True if the extremum distance is a minimum.)#" )
        .def("Point",
             (const Extrema_POnCurv & (Extrema_LocEPCOfLocateExtPC::*)() const) static_cast<const Extrema_POnCurv & (Extrema_LocEPCOfLocateExtPC::*)() const>(&Extrema_LocEPCOfLocateExtPC::Point),
             R"#(Returns the point of the extremum distance.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocEPCOfLocateExtPC2d , shared_ptr<Extrema_LocEPCOfLocateExtPC2d>  >>(m.attr("Extrema_LocEPCOfLocateExtPC2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("U0"),  py::arg("TolU") )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("U0"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_LocEPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_LocEPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_LocEPCOfLocateExtPC2d::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"))
        .def("Perform",
             (void (Extrema_LocEPCOfLocateExtPC2d::*)( const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Extrema_LocEPCOfLocateExtPC2d::*)( const gp_Pnt2d & ,  const Standard_Real  ) >(&Extrema_LocEPCOfLocateExtPC2d::Perform),
             R"#(the algorithm is done with the point P. An exception is raised if the fields have not been initialized.)#"  , py::arg("P"),  py::arg("U0"))
        .def("IsDone",
             (Standard_Boolean (Extrema_LocEPCOfLocateExtPC2d::*)() const) static_cast<Standard_Boolean (Extrema_LocEPCOfLocateExtPC2d::*)() const>(&Extrema_LocEPCOfLocateExtPC2d::IsDone),
             R"#(Returns True if the distance is found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_LocEPCOfLocateExtPC2d::*)() const) static_cast<Standard_Real (Extrema_LocEPCOfLocateExtPC2d::*)() const>(&Extrema_LocEPCOfLocateExtPC2d::SquareDistance),
             R"#(Returns the value of the extremum square distance.)#" )
        .def("IsMin",
             (Standard_Boolean (Extrema_LocEPCOfLocateExtPC2d::*)() const) static_cast<Standard_Boolean (Extrema_LocEPCOfLocateExtPC2d::*)() const>(&Extrema_LocEPCOfLocateExtPC2d::IsMin),
             R"#(Returns True if the extremum distance is a minimum.)#" )
        .def("Point",
             (const Extrema_POnCurv2d & (Extrema_LocEPCOfLocateExtPC2d::*)() const) static_cast<const Extrema_POnCurv2d & (Extrema_LocEPCOfLocateExtPC2d::*)() const>(&Extrema_LocEPCOfLocateExtPC2d::Point),
             R"#(Returns the point of the extremum distance.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocateExtCC , shared_ptr<Extrema_LocateExtCC>  >>(m.attr("Extrema_LocateExtCC"))
    // constructors
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("U0"),  py::arg("V0") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (Extrema_LocateExtCC::*)() const) static_cast<Standard_Boolean (Extrema_LocateExtCC::*)() const>(&Extrema_LocateExtCC::IsDone),
             R"#(Returns True if the distance is found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_LocateExtCC::*)() const) static_cast<Standard_Real (Extrema_LocateExtCC::*)() const>(&Extrema_LocateExtCC::SquareDistance),
             R"#(Returns the value of the extremum square distance.)#" )
        .def("Point",
             (void (Extrema_LocateExtCC::*)( Extrema_POnCurv & ,  Extrema_POnCurv &  ) const) static_cast<void (Extrema_LocateExtCC::*)( Extrema_POnCurv & ,  Extrema_POnCurv &  ) const>(&Extrema_LocateExtCC::Point),
             R"#(Returns the points of the extremum distance. P1 is on the first curve, P2 on the second one.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocateExtCC2d , shared_ptr<Extrema_LocateExtCC2d>  >>(m.attr("Extrema_LocateExtCC2d"))
    // constructors
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("U0"),  py::arg("V0") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (Extrema_LocateExtCC2d::*)() const) static_cast<Standard_Boolean (Extrema_LocateExtCC2d::*)() const>(&Extrema_LocateExtCC2d::IsDone),
             R"#(Returns True if the distance is found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_LocateExtCC2d::*)() const) static_cast<Standard_Real (Extrema_LocateExtCC2d::*)() const>(&Extrema_LocateExtCC2d::SquareDistance),
             R"#(Returns the value of the extremum square distance.)#" )
        .def("Point",
             (void (Extrema_LocateExtCC2d::*)( Extrema_POnCurv2d & ,  Extrema_POnCurv2d &  ) const) static_cast<void (Extrema_LocateExtCC2d::*)( Extrema_POnCurv2d & ,  Extrema_POnCurv2d &  ) const>(&Extrema_LocateExtCC2d::Point),
             R"#(Returns the points of the extremum distance. P1 is on the first curve, P2 on the second one.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocateExtPC , shared_ptr<Extrema_LocateExtPC>  >>(m.attr("Extrema_LocateExtPC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("U0"),  py::arg("TolF") )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("U0"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolF") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_LocateExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_LocateExtPC::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_LocateExtPC::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolF"))
        .def("Perform",
             (void (Extrema_LocateExtPC::*)( const gp_Pnt & ,  const Standard_Real  ) ) static_cast<void (Extrema_LocateExtPC::*)( const gp_Pnt & ,  const Standard_Real  ) >(&Extrema_LocateExtPC::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("U0"))
        .def("IsDone",
             (Standard_Boolean (Extrema_LocateExtPC::*)() const) static_cast<Standard_Boolean (Extrema_LocateExtPC::*)() const>(&Extrema_LocateExtPC::IsDone),
             R"#(Returns True if the distance is found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_LocateExtPC::*)() const) static_cast<Standard_Real (Extrema_LocateExtPC::*)() const>(&Extrema_LocateExtPC::SquareDistance),
             R"#(Returns the value of the extremum square distance.)#" )
        .def("IsMin",
             (Standard_Boolean (Extrema_LocateExtPC::*)() const) static_cast<Standard_Boolean (Extrema_LocateExtPC::*)() const>(&Extrema_LocateExtPC::IsMin),
             R"#(Returns True if the extremum distance is a minimum.)#" )
        .def("Point",
             (const Extrema_POnCurv & (Extrema_LocateExtPC::*)() const) static_cast<const Extrema_POnCurv & (Extrema_LocateExtPC::*)() const>(&Extrema_LocateExtPC::Point),
             R"#(Returns the point of the extremum distance.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocateExtPC2d , shared_ptr<Extrema_LocateExtPC2d>  >>(m.attr("Extrema_LocateExtPC2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("U0"),  py::arg("TolF") )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("U0"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolF") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_LocateExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_LocateExtPC2d::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Extrema_LocateExtPC2d::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolF"))
        .def("Perform",
             (void (Extrema_LocateExtPC2d::*)( const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Extrema_LocateExtPC2d::*)( const gp_Pnt2d & ,  const Standard_Real  ) >(&Extrema_LocateExtPC2d::Perform),
             R"#(None)#"  , py::arg("P"),  py::arg("U0"))
        .def("IsDone",
             (Standard_Boolean (Extrema_LocateExtPC2d::*)() const) static_cast<Standard_Boolean (Extrema_LocateExtPC2d::*)() const>(&Extrema_LocateExtPC2d::IsDone),
             R"#(Returns True if the distance is found.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_LocateExtPC2d::*)() const) static_cast<Standard_Real (Extrema_LocateExtPC2d::*)() const>(&Extrema_LocateExtPC2d::SquareDistance),
             R"#(Returns the value of the extremum square distance.)#" )
        .def("IsMin",
             (Standard_Boolean (Extrema_LocateExtPC2d::*)() const) static_cast<Standard_Boolean (Extrema_LocateExtPC2d::*)() const>(&Extrema_LocateExtPC2d::IsMin),
             R"#(Returns True if the extremum distance is a minimum.)#" )
        .def("Point",
             (const Extrema_POnCurv2d & (Extrema_LocateExtPC2d::*)() const) static_cast<const Extrema_POnCurv2d & (Extrema_LocateExtPC2d::*)() const>(&Extrema_LocateExtPC2d::Point),
             R"#(Returns the point of the extremum distance.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_PCFOfEPCOfELPCOfLocateExtPC , shared_ptr<Extrema_PCFOfEPCOfELPCOfLocateExtPC>  , math_FunctionWithDerivative >>(m.attr("Extrema_PCFOfEPCOfELPCOfLocateExtPC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve & >()  , py::arg("P"),  py::arg("C") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Adaptor3d_Curve &  ) ) static_cast<void (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Adaptor3d_Curve &  ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::Initialize),
             R"#(sets the field mycurve of the function.)#"  , py::arg("C"))
        .def("SetPoint",
             (void (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const gp_Pnt &  ) ) static_cast<void (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const gp_Pnt &  ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::SetPoint),
             R"#(sets the field P of the function.)#"  , py::arg("P"))
        .def("Value",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real ,  Standard_Real &  ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real ,  Standard_Real &  ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)() ) static_cast<Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)() >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)() const) static_cast<Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)() const>(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::NbExt),
             R"#(Return the nunber of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Integer  ) const>(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::SquareDistance),
             R"#(Returns the Nth distance.)#"  , py::arg("N"))
        .def("IsMin",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Integer  ) const>(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::IsMin),
             R"#(Shows if the Nth distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv & (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv & (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Integer  ) const>(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::Point),
             R"#(Returns the Nth extremum.)#"  , py::arg("N"))
        .def("SubIntervalInitialize",
             (void (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real ,  const Standard_Real  ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::SubIntervalInitialize),
             R"#(Determines boundaries of subinterval for find of root.)#"  , py::arg("theUfirst"),  py::arg("theUlast"))
        .def("SearchOfTolerance",
             (Standard_Real (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)() ) static_cast<Standard_Real (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)() >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::SearchOfTolerance),
             R"#(Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_PCFOfEPCOfELPCOfLocateExtPC2d , shared_ptr<Extrema_PCFOfEPCOfELPCOfLocateExtPC2d>  , math_FunctionWithDerivative >>(m.attr("Extrema_PCFOfEPCOfELPCOfLocateExtPC2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d & >()  , py::arg("P"),  py::arg("C") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d &  ) ) static_cast<void (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d &  ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::Initialize),
             R"#(sets the field mycurve of the function.)#"  , py::arg("C"))
        .def("SetPoint",
             (void (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const gp_Pnt2d &  ) ) static_cast<void (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const gp_Pnt2d &  ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::SetPoint),
             R"#(sets the field P of the function.)#"  , py::arg("P"))
        .def("Value",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real ,  Standard_Real &  ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real ,  Standard_Real &  ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)() ) static_cast<Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)() >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)() const) static_cast<Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)() const>(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::NbExt),
             R"#(Return the nunber of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::SquareDistance),
             R"#(Returns the Nth distance.)#"  , py::arg("N"))
        .def("IsMin",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::IsMin),
             R"#(Shows if the Nth distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv2d & (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv2d & (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::Point),
             R"#(Returns the Nth extremum.)#"  , py::arg("N"))
        .def("SubIntervalInitialize",
             (void (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real ,  const Standard_Real  ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::SubIntervalInitialize),
             R"#(Determines boundaries of subinterval for find of root.)#"  , py::arg("theUfirst"),  py::arg("theUlast"))
        .def("SearchOfTolerance",
             (Standard_Real (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)() ) static_cast<Standard_Real (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)() >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::SearchOfTolerance),
             R"#(Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_PCFOfEPCOfExtPC , shared_ptr<Extrema_PCFOfEPCOfExtPC>  , math_FunctionWithDerivative >>(m.attr("Extrema_PCFOfEPCOfExtPC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve & >()  , py::arg("P"),  py::arg("C") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_PCFOfEPCOfExtPC::*)( const Adaptor3d_Curve &  ) ) static_cast<void (Extrema_PCFOfEPCOfExtPC::*)( const Adaptor3d_Curve &  ) >(&Extrema_PCFOfEPCOfExtPC::Initialize),
             R"#(sets the field mycurve of the function.)#"  , py::arg("C"))
        .def("SetPoint",
             (void (Extrema_PCFOfEPCOfExtPC::*)( const gp_Pnt &  ) ) static_cast<void (Extrema_PCFOfEPCOfExtPC::*)( const gp_Pnt &  ) >(&Extrema_PCFOfEPCOfExtPC::SetPoint),
             R"#(sets the field P of the function.)#"  , py::arg("P"))
        .def("Value",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real ,  Standard_Real &  ) >(&Extrema_PCFOfEPCOfExtPC::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real ,  Standard_Real &  ) >(&Extrema_PCFOfEPCOfExtPC::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Extrema_PCFOfEPCOfExtPC::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_PCFOfEPCOfExtPC::*)() ) static_cast<Standard_Integer (Extrema_PCFOfEPCOfExtPC::*)() >(&Extrema_PCFOfEPCOfExtPC::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_PCFOfEPCOfExtPC::*)() const) static_cast<Standard_Integer (Extrema_PCFOfEPCOfExtPC::*)() const>(&Extrema_PCFOfEPCOfExtPC::NbExt),
             R"#(Return the nunber of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Integer  ) const>(&Extrema_PCFOfEPCOfExtPC::SquareDistance),
             R"#(Returns the Nth distance.)#"  , py::arg("N"))
        .def("IsMin",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Integer  ) const>(&Extrema_PCFOfEPCOfExtPC::IsMin),
             R"#(Shows if the Nth distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv & (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv & (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Integer  ) const>(&Extrema_PCFOfEPCOfExtPC::Point),
             R"#(Returns the Nth extremum.)#"  , py::arg("N"))
        .def("SubIntervalInitialize",
             (void (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real ,  const Standard_Real  ) >(&Extrema_PCFOfEPCOfExtPC::SubIntervalInitialize),
             R"#(Determines boundaries of subinterval for find of root.)#"  , py::arg("theUfirst"),  py::arg("theUlast"))
        .def("SearchOfTolerance",
             (Standard_Real (Extrema_PCFOfEPCOfExtPC::*)() ) static_cast<Standard_Real (Extrema_PCFOfEPCOfExtPC::*)() >(&Extrema_PCFOfEPCOfExtPC::SearchOfTolerance),
             R"#(Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_PCFOfEPCOfExtPC2d , shared_ptr<Extrema_PCFOfEPCOfExtPC2d>  , math_FunctionWithDerivative >>(m.attr("Extrema_PCFOfEPCOfExtPC2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d & >()  , py::arg("P"),  py::arg("C") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_PCFOfEPCOfExtPC2d::*)( const Adaptor2d_Curve2d &  ) ) static_cast<void (Extrema_PCFOfEPCOfExtPC2d::*)( const Adaptor2d_Curve2d &  ) >(&Extrema_PCFOfEPCOfExtPC2d::Initialize),
             R"#(sets the field mycurve of the function.)#"  , py::arg("C"))
        .def("SetPoint",
             (void (Extrema_PCFOfEPCOfExtPC2d::*)( const gp_Pnt2d &  ) ) static_cast<void (Extrema_PCFOfEPCOfExtPC2d::*)( const gp_Pnt2d &  ) >(&Extrema_PCFOfEPCOfExtPC2d::SetPoint),
             R"#(sets the field P of the function.)#"  , py::arg("P"))
        .def("Value",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real ,  Standard_Real &  ) >(&Extrema_PCFOfEPCOfExtPC2d::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real ,  Standard_Real &  ) >(&Extrema_PCFOfEPCOfExtPC2d::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Extrema_PCFOfEPCOfExtPC2d::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_PCFOfEPCOfExtPC2d::*)() ) static_cast<Standard_Integer (Extrema_PCFOfEPCOfExtPC2d::*)() >(&Extrema_PCFOfEPCOfExtPC2d::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_PCFOfEPCOfExtPC2d::*)() const) static_cast<Standard_Integer (Extrema_PCFOfEPCOfExtPC2d::*)() const>(&Extrema_PCFOfEPCOfExtPC2d::NbExt),
             R"#(Return the nunber of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_PCFOfEPCOfExtPC2d::SquareDistance),
             R"#(Returns the Nth distance.)#"  , py::arg("N"))
        .def("IsMin",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_PCFOfEPCOfExtPC2d::IsMin),
             R"#(Shows if the Nth distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv2d & (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv2d & (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_PCFOfEPCOfExtPC2d::Point),
             R"#(Returns the Nth extremum.)#"  , py::arg("N"))
        .def("SubIntervalInitialize",
             (void (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real ,  const Standard_Real  ) >(&Extrema_PCFOfEPCOfExtPC2d::SubIntervalInitialize),
             R"#(Determines boundaries of subinterval for find of root.)#"  , py::arg("theUfirst"),  py::arg("theUlast"))
        .def("SearchOfTolerance",
             (Standard_Real (Extrema_PCFOfEPCOfExtPC2d::*)() ) static_cast<Standard_Real (Extrema_PCFOfEPCOfExtPC2d::*)() >(&Extrema_PCFOfEPCOfExtPC2d::SearchOfTolerance),
             R"#(Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_PCLocFOfLocEPCOfLocateExtPC , shared_ptr<Extrema_PCLocFOfLocEPCOfLocateExtPC>  , math_FunctionWithDerivative >>(m.attr("Extrema_PCLocFOfLocEPCOfLocateExtPC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Adaptor3d_Curve & >()  , py::arg("P"),  py::arg("C") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Adaptor3d_Curve &  ) ) static_cast<void (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Adaptor3d_Curve &  ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC::Initialize),
             R"#(sets the field mycurve of the function.)#"  , py::arg("C"))
        .def("SetPoint",
             (void (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const gp_Pnt &  ) ) static_cast<void (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const gp_Pnt &  ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC::SetPoint),
             R"#(sets the field P of the function.)#"  , py::arg("P"))
        .def("Value",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real ,  Standard_Real &  ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real ,  Standard_Real &  ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)() ) static_cast<Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)() >(&Extrema_PCLocFOfLocEPCOfLocateExtPC::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)() const) static_cast<Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)() const>(&Extrema_PCLocFOfLocEPCOfLocateExtPC::NbExt),
             R"#(Return the nunber of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Integer  ) const>(&Extrema_PCLocFOfLocEPCOfLocateExtPC::SquareDistance),
             R"#(Returns the Nth distance.)#"  , py::arg("N"))
        .def("IsMin",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Integer  ) const>(&Extrema_PCLocFOfLocEPCOfLocateExtPC::IsMin),
             R"#(Shows if the Nth distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv & (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv & (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Integer  ) const>(&Extrema_PCLocFOfLocEPCOfLocateExtPC::Point),
             R"#(Returns the Nth extremum.)#"  , py::arg("N"))
        .def("SubIntervalInitialize",
             (void (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real ,  const Standard_Real  ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC::SubIntervalInitialize),
             R"#(Determines boundaries of subinterval for find of root.)#"  , py::arg("theUfirst"),  py::arg("theUlast"))
        .def("SearchOfTolerance",
             (Standard_Real (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)() ) static_cast<Standard_Real (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)() >(&Extrema_PCLocFOfLocEPCOfLocateExtPC::SearchOfTolerance),
             R"#(Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_PCLocFOfLocEPCOfLocateExtPC2d , shared_ptr<Extrema_PCLocFOfLocEPCOfLocateExtPC2d>  , math_FunctionWithDerivative >>(m.attr("Extrema_PCLocFOfLocEPCOfLocateExtPC2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d & >()  , py::arg("P"),  py::arg("C") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d &  ) ) static_cast<void (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Adaptor2d_Curve2d &  ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::Initialize),
             R"#(sets the field mycurve of the function.)#"  , py::arg("C"))
        .def("SetPoint",
             (void (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const gp_Pnt2d &  ) ) static_cast<void (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const gp_Pnt2d &  ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::SetPoint),
             R"#(sets the field P of the function.)#"  , py::arg("P"))
        .def("Value",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real ,  Standard_Real &  ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real ,  Standard_Real &  ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)() ) static_cast<Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)() >(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)() const) static_cast<Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)() const>(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::NbExt),
             R"#(Return the nunber of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::SquareDistance),
             R"#(Returns the Nth distance.)#"  , py::arg("N"))
        .def("IsMin",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::IsMin),
             R"#(Shows if the Nth distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv2d & (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Integer  ) const) static_cast<const Extrema_POnCurv2d & (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Integer  ) const>(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::Point),
             R"#(Returns the Nth extremum.)#"  , py::arg("N"))
        .def("SubIntervalInitialize",
             (void (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real ,  const Standard_Real  ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::SubIntervalInitialize),
             R"#(Determines boundaries of subinterval for find of root.)#"  , py::arg("theUfirst"),  py::arg("theUlast"))
        .def("SearchOfTolerance",
             (Standard_Real (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)() ) static_cast<Standard_Real (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)() >(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::SearchOfTolerance),
             R"#(Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_POnCurv , shared_ptr<Extrema_POnCurv>  >>(m.attr("Extrema_POnCurv"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const gp_Pnt & >()  , py::arg("U"),  py::arg("P") )
    // custom constructors
    // methods
        .def("SetValues",
             (void (Extrema_POnCurv::*)( const Standard_Real ,  const gp_Pnt &  ) ) static_cast<void (Extrema_POnCurv::*)( const Standard_Real ,  const gp_Pnt &  ) >(&Extrema_POnCurv::SetValues),
             R"#(sets the point and parameter values.)#"  , py::arg("U"),  py::arg("P"))
        .def("Value",
             (const gp_Pnt & (Extrema_POnCurv::*)() const) static_cast<const gp_Pnt & (Extrema_POnCurv::*)() const>(&Extrema_POnCurv::Value),
             R"#(Returns the point.)#" )
        .def("Parameter",
             (Standard_Real (Extrema_POnCurv::*)() const) static_cast<Standard_Real (Extrema_POnCurv::*)() const>(&Extrema_POnCurv::Parameter),
             R"#(Returns the parameter on the curve.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_POnCurv2d , shared_ptr<Extrema_POnCurv2d>  >>(m.attr("Extrema_POnCurv2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const gp_Pnt2d & >()  , py::arg("U"),  py::arg("P") )
    // custom constructors
    // methods
        .def("SetValues",
             (void (Extrema_POnCurv2d::*)( const Standard_Real ,  const gp_Pnt2d &  ) ) static_cast<void (Extrema_POnCurv2d::*)( const Standard_Real ,  const gp_Pnt2d &  ) >(&Extrema_POnCurv2d::SetValues),
             R"#(sets the point and parameter values.)#"  , py::arg("U"),  py::arg("P"))
        .def("Value",
             (const gp_Pnt2d & (Extrema_POnCurv2d::*)() const) static_cast<const gp_Pnt2d & (Extrema_POnCurv2d::*)() const>(&Extrema_POnCurv2d::Value),
             R"#(Returns the point.)#" )
        .def("Parameter",
             (Standard_Real (Extrema_POnCurv2d::*)() const) static_cast<Standard_Real (Extrema_POnCurv2d::*)() const>(&Extrema_POnCurv2d::Parameter),
             R"#(Returns the parameter on the curve.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_POnSurf , shared_ptr<Extrema_POnSurf>  >>(m.attr("Extrema_POnSurf"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("U"),  py::arg("V"),  py::arg("P") )
    // custom constructors
    // methods
        .def("Value",
             (const gp_Pnt & (Extrema_POnSurf::*)() const) static_cast<const gp_Pnt & (Extrema_POnSurf::*)() const>(&Extrema_POnSurf::Value),
             R"#(Returns the 3d point.)#" )
        .def("SetParameters",
             (void (Extrema_POnSurf::*)( const Standard_Real ,  const Standard_Real ,  const gp_Pnt &  ) ) static_cast<void (Extrema_POnSurf::*)( const Standard_Real ,  const Standard_Real ,  const gp_Pnt &  ) >(&Extrema_POnSurf::SetParameters),
             R"#(Sets the params of current POnSurf instance. (e.g. to the point to be projected).)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("thePnt"))
        .def("SetParameters",
             (void (Extrema_POnSurf::*)( const Standard_Real ,  const Standard_Real ,  const gp_Pnt &  ) ) static_cast<void (Extrema_POnSurf::*)( const Standard_Real ,  const Standard_Real ,  const gp_Pnt &  ) >(&Extrema_POnSurf::SetParameters),
             R"#(Sets the params of current POnSurf instance. (e.g. to the point to be projected).)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("Value",
             (const gp_Pnt & (Extrema_POnSurf::*)() const) static_cast<const gp_Pnt & (Extrema_POnSurf::*)() const>(&Extrema_POnSurf::Value),
             R"#(Returns the 3d point.)#" )
    // methods using call by reference i.s.o. return
        .def("Parameter",
             []( Extrema_POnSurf &self   ){ Standard_Real  U; Standard_Real  V; self.Parameter(U,V); return std::make_tuple(U,V); },
             R"#(Returns the parameter values on the surface.)#" )
        .def("Parameter",
             []( Extrema_POnSurf &self   ){ Standard_Real  U; Standard_Real  V; self.Parameter(U,V); return std::make_tuple(U,V); },
             R"#(Returns the parameter values on the surface.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_POnSurfParams , shared_ptr<Extrema_POnSurfParams>  , Extrema_POnSurf >>(m.attr("Extrema_POnSurfParams"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("theU"),  py::arg("theV"),  py::arg("thePnt") )
    // custom constructors
    // methods
        .def("SetSqrDistance",
             (void (Extrema_POnSurfParams::*)( const Standard_Real  ) ) static_cast<void (Extrema_POnSurfParams::*)( const Standard_Real  ) >(&Extrema_POnSurfParams::SetSqrDistance),
             R"#(Sets the square distance from this point to another one (e.g. to the point to be projected).)#"  , py::arg("theSqrDistance"))
        .def("GetSqrDistance",
             (Standard_Real (Extrema_POnSurfParams::*)() const) static_cast<Standard_Real (Extrema_POnSurfParams::*)() const>(&Extrema_POnSurfParams::GetSqrDistance),
             R"#(Query the square distance from this point to another one.)#" )
        .def("SetElementType",
             (void (Extrema_POnSurfParams::*)( const Extrema_ElementType  ) ) static_cast<void (Extrema_POnSurfParams::*)( const Extrema_ElementType  ) >(&Extrema_POnSurfParams::SetElementType),
             R"#(Sets the element type on which this point is situated.)#"  , py::arg("theElementType"))
        .def("GetElementType",
             (Extrema_ElementType (Extrema_POnSurfParams::*)() const) static_cast<Extrema_ElementType (Extrema_POnSurfParams::*)() const>(&Extrema_POnSurfParams::GetElementType),
             R"#(Query the element type on which this point is situated.)#" )
        .def("SetIndices",
             (void (Extrema_POnSurfParams::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Extrema_POnSurfParams::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Extrema_POnSurfParams::SetIndices),
             R"#(Sets the U and V indices of an element that contains this point.)#"  , py::arg("theIndexU"),  py::arg("theIndexV"))
        .def("SetSqrDistance",
             (void (Extrema_POnSurfParams::*)( const Standard_Real  ) ) static_cast<void (Extrema_POnSurfParams::*)( const Standard_Real  ) >(&Extrema_POnSurfParams::SetSqrDistance),
             R"#(Sets the square distance from this point to another one (e.g. to the point to be projected).)#"  , py::arg("theSqrDistance"))
        .def("GetSqrDistance",
             (Standard_Real (Extrema_POnSurfParams::*)() const) static_cast<Standard_Real (Extrema_POnSurfParams::*)() const>(&Extrema_POnSurfParams::GetSqrDistance),
             R"#(Query the square distance from this point to another one.)#" )
        .def("SetElementType",
             (void (Extrema_POnSurfParams::*)( const Extrema_ElementType  ) ) static_cast<void (Extrema_POnSurfParams::*)( const Extrema_ElementType  ) >(&Extrema_POnSurfParams::SetElementType),
             R"#(Sets the element type on which this point is situated.)#"  , py::arg("theElementType"))
        .def("GetElementType",
             (Extrema_ElementType (Extrema_POnSurfParams::*)() const) static_cast<Extrema_ElementType (Extrema_POnSurfParams::*)() const>(&Extrema_POnSurfParams::GetElementType),
             R"#(Query the element type on which this point is situated.)#" )
        .def("SetIndices",
             (void (Extrema_POnSurfParams::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Extrema_POnSurfParams::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Extrema_POnSurfParams::SetIndices),
             R"#(Sets the U and V indices of an element that contains this point.)#"  , py::arg("theIndexU"),  py::arg("theIndexV"))
    // methods using call by reference i.s.o. return
        .def("GetIndices",
             []( Extrema_POnSurfParams &self   ){ Standard_Integer  theIndexU; Standard_Integer  theIndexV; self.GetIndices(theIndexU,theIndexV); return std::make_tuple(theIndexU,theIndexV); },
             R"#(Query the U and V indices of an element that contains this point.)#" )
        .def("GetIndices",
             []( Extrema_POnSurfParams &self   ){ Standard_Integer  theIndexU; Standard_Integer  theIndexV; self.GetIndices(theIndexU,theIndexV); return std::make_tuple(theIndexU,theIndexV); },
             R"#(Query the U and V indices of an element that contains this point.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Extrema_ExtPC.hxx
// ./opencascade/Extrema_ExtPRevS.hxx
// ./opencascade/Extrema_PCFOfEPCOfExtPC2d.hxx
// ./opencascade/Extrema_PCLocFOfLocEPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_POnCurv.hxx
// ./opencascade/Extrema_HArray1OfPOnCurv2d.hxx
// ./opencascade/Extrema_ExtFlag.hxx
// ./opencascade/Extrema_ExtSS.hxx
// ./opencascade/Extrema_SequenceOfPOnCurv2d.hxx
// ./opencascade/Extrema_LocateExtCC2d.hxx
// ./opencascade/Extrema_ECC.hxx
// ./opencascade/Extrema_ExtAlgo.hxx
// ./opencascade/Extrema_HArray2OfPOnCurv2d.hxx
// ./opencascade/Extrema_HUBTreeOfSphere.hxx
// ./opencascade/Extrema_HArray1OfPOnSurf.hxx
// ./opencascade/Extrema_LocEPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_SequenceOfPOnCurv.hxx
// ./opencascade/Extrema_EPCOfELPCOfLocateExtPC.hxx
// ./opencascade/Extrema_ExtElC.hxx
// ./opencascade/Extrema_Array1OfPOnCurv2d.hxx
// ./opencascade/Extrema_GenExtCS.hxx
// ./opencascade/Extrema_ECC2d.hxx
// ./opencascade/Extrema_PCFOfEPCOfELPCOfLocateExtPC.hxx
// ./opencascade/Extrema_ExtPElC.hxx
// ./opencascade/Extrema_ELPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_GenExtSS.hxx
// ./opencascade/Extrema_CurveTool.hxx
// ./opencascade/Extrema_ExtPExtS.hxx
// ./opencascade/Extrema_EPCOfExtPC2d.hxx
// ./opencascade/Extrema_Curve2dTool.hxx
// ./opencascade/Extrema_POnSurfParams.hxx
// ./opencascade/Extrema_ExtElCS.hxx
// ./opencascade/Extrema_LocateExtCC.hxx
// ./opencascade/Extrema_HArray1OfPOnCurv.hxx
// ./opencascade/Extrema_ExtPS.hxx
// ./opencascade/Extrema_Array1OfPOnCurv.hxx
// ./opencascade/Extrema_ExtElSS.hxx
// ./opencascade/Extrema_ELPCOfLocateExtPC.hxx
// ./opencascade/Extrema_FuncExtSS.hxx
// ./opencascade/Extrema_ElementType.hxx
// ./opencascade/Extrema_GenLocateExtSS.hxx
// ./opencascade/Extrema_HArray2OfPOnSurf.hxx
// ./opencascade/Extrema_LocEPCOfLocateExtPC.hxx
// ./opencascade/Extrema_ExtCC.hxx
// ./opencascade/Extrema_FuncExtCS.hxx
// ./opencascade/Extrema_Array2OfPOnCurv2d.hxx
// ./opencascade/Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_PCFOfEPCOfExtPC.hxx
// ./opencascade/Extrema_GlobOptFuncCC.hxx
// ./opencascade/Extrema_PCLocFOfLocEPCOfLocateExtPC.hxx
// ./opencascade/Extrema_ExtPC2d.hxx
// ./opencascade/Extrema_HArray2OfPOnCurv.hxx
// ./opencascade/Extrema_Array1OfPOnSurf.hxx
// ./opencascade/Extrema_ExtCS.hxx
// ./opencascade/Extrema_EPCOfExtPC.hxx
// ./opencascade/Extrema_LocateExtPC.hxx
// ./opencascade/Extrema_Array2OfPOnSurfParams.hxx
// ./opencascade/Extrema_ExtElC2d.hxx
// ./opencascade/Extrema_CCLocFOfLocECC2d.hxx
// ./opencascade/Extrema_HArray2OfPOnSurfParams.hxx
// ./opencascade/Extrema_SequenceOfPOnSurf.hxx
// ./opencascade/Extrema_POnCurv2d.hxx
// ./opencascade/Extrema_GenLocateExtPS.hxx
// ./opencascade/Extrema_Array2OfPOnSurf.hxx
// ./opencascade/Extrema_CCLocFOfLocECC.hxx
// ./opencascade/Extrema_Array2OfPOnCurv.hxx
// ./opencascade/Extrema_LocECC.hxx
// ./opencascade/Extrema_GlobOptFuncCS.hxx
// ./opencascade/Extrema_EPCOfELPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_FuncPSNorm.hxx
// ./opencascade/Extrema_ExtPElS.hxx
// ./opencascade/Extrema_LocECC2d.hxx
// ./opencascade/Extrema_POnSurf.hxx
// ./opencascade/Extrema_LocateExtPC2d.hxx
// ./opencascade/Extrema_FuncPSDist.hxx
// ./opencascade/Extrema_ExtPElC2d.hxx
// ./opencascade/Extrema_ExtCC2d.hxx
// ./opencascade/Extrema_GenExtPS.hxx
// ./opencascade/Extrema_GenLocateExtCS.hxx

// operators

// register typdefs
    register_template_NCollection_Sequence<Extrema_POnCurv2d>(m,"Extrema_SequenceOfPOnCurv2d");  
    register_template_NCollection_UBTree<Standard_Integer, Bnd_Sphere>(m,"Extrema_UBTreeOfSphere");  
    register_template_NCollection_UBTreeFiller<Standard_Integer, Bnd_Sphere>(m,"Extrema_UBTreeFillerOfSphere");  
    register_template_NCollection_Sequence<Extrema_POnCurv>(m,"Extrema_SequenceOfPOnCurv");  
    register_template_NCollection_Array1<Extrema_POnCurv2d>(m,"Extrema_Array1OfPOnCurv2d");  
    register_template_NCollection_Array1<Extrema_POnCurv>(m,"Extrema_Array1OfPOnCurv");  
    register_template_NCollection_Array2<Extrema_POnCurv2d>(m,"Extrema_Array2OfPOnCurv2d");  
    register_template_NCollection_Array1<Extrema_POnSurf>(m,"Extrema_Array1OfPOnSurf");  
    register_template_NCollection_Array2<Extrema_POnSurfParams>(m,"Extrema_Array2OfPOnSurfParams");  
    register_template_NCollection_Sequence<Extrema_POnSurf>(m,"Extrema_SequenceOfPOnSurf");  
    register_template_NCollection_Array2<Extrema_POnSurf>(m,"Extrema_Array2OfPOnSurf");  
    register_template_NCollection_Array2<Extrema_POnCurv>(m,"Extrema_Array2OfPOnCurv");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

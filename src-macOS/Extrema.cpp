
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_Surface.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <math_Matrix.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_ExtElC.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_CCLocFOfLocECC.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
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
#include <Adaptor3d_Surface.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Extrema_CCLocFOfLocECC2d.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
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
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomAdaptor_HSurfaceOfLinearExtrusion.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomAdaptor_HSurfaceOfRevolution.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Extrema_POnCurv2d.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <gp_Lin.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <gp_Circ.hxx>
#include <gp_Hypr.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <gp_Pln.hxx>
#include <gp_Sphere.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Torus.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Pln.hxx>
#include <gp_Cone.hxx>
#include <gp_Torus.hxx>
#include <gp_Sphere.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_ExtElC2d.hxx>
#include <Extrema_ECC2d.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_POnCurv.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_ExtPExtS.hxx>
#include <Extrema_ExtPRevS.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_NotDone.hxx>
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
// ./opencascade/Extrema_Array2OfPOnSurf.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Extrema_SequenceOfPOnCurv.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Extrema_Array2OfPOnSurfParams.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Extrema_Array2OfPOnCurv.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Extrema_SequenceOfPOnCurv2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Extrema_Array2OfPOnCurv2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Extrema_Array1OfPOnCurv.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Extrema_HUBTreeOfSphere.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Extrema_HUBTreeOfSphere.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Extrema_Array1OfPOnSurf.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Extrema_Array1OfPOnCurv2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Extrema_SequenceOfPOnSurf.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Extrema(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Extrema"));


//Python trampoline classes

// classes


    static_cast<py::class_<Extrema_CCLocFOfLocECC , shared_ptr<Extrema_CCLocFOfLocECC> , math_FunctionSetWithDerivatives>>(m.attr("Extrema_CCLocFOfLocECC"))
    // constructors
    // custom constructors
    // methods
        .def("SetTolerance",
             (void (Extrema_CCLocFOfLocECC::*)( const Standard_Real ) ) static_cast<void (Extrema_CCLocFOfLocECC::*)( const Standard_Real ) >(&Extrema_CCLocFOfLocECC::SetTolerance),
             R"#(None)#"  , py::arg("theTol"))
        .def("NbVariables",
             (Standard_Integer (Extrema_CCLocFOfLocECC::*)() const) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC::*)() const>(&Extrema_CCLocFOfLocECC::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (Extrema_CCLocFOfLocECC::*)() const) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC::*)() const>(&Extrema_CCLocFOfLocECC::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_CCLocFOfLocECC::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Extrema_CCLocFOfLocECC::*)( const math_Vector & , math_Vector & ) >(&Extrema_CCLocFOfLocECC::Value),
             R"#(Calculate Fi(U,V).)#"  , py::arg("UV"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Extrema_CCLocFOfLocECC::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Extrema_CCLocFOfLocECC::*)( const math_Vector & , math_Matrix & ) >(&Extrema_CCLocFOfLocECC::Derivatives),
             R"#(Calculate Fi'(U,V).)#"  , py::arg("UV"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_CCLocFOfLocECC::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Extrema_CCLocFOfLocECC::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&Extrema_CCLocFOfLocECC::Values),
             R"#(Calculate Fi(U,V) and Fi'(U,V).)#"  , py::arg("UV"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_CCLocFOfLocECC::*)() ) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC::*)() >(&Extrema_CCLocFOfLocECC::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_CCLocFOfLocECC::*)() const) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC::*)() const>(&Extrema_CCLocFOfLocECC::NbExt),
             R"#(Return the number of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_CCLocFOfLocECC::*)( const Standard_Integer ) const) static_cast<Standard_Real (Extrema_CCLocFOfLocECC::*)( const Standard_Integer ) const>(&Extrema_CCLocFOfLocECC::SquareDistance),
             R"#(Return the value of the Nth distance.)#"  , py::arg("N"))
        .def("CurvePtr",
             (Standard_Address (Extrema_CCLocFOfLocECC::*)( const Standard_Integer ) const) static_cast<Standard_Address (Extrema_CCLocFOfLocECC::*)( const Standard_Integer ) const>(&Extrema_CCLocFOfLocECC::CurvePtr),
             R"#(Returns a pointer to the curve specified in the constructor or in SetCurve() method.)#"  , py::arg("theRank"))
        .def("Tolerance",
             (Standard_Real (Extrema_CCLocFOfLocECC::*)() const) static_cast<Standard_Real (Extrema_CCLocFOfLocECC::*)() const>(&Extrema_CCLocFOfLocECC::Tolerance),
             R"#(Returns a tolerance specified in the constructor or in SetTolerance() method.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_CCLocFOfLocECC2d , shared_ptr<Extrema_CCLocFOfLocECC2d> , math_FunctionSetWithDerivatives>>(m.attr("Extrema_CCLocFOfLocECC2d"))
    // constructors
    // custom constructors
    // methods
        .def("SetTolerance",
             (void (Extrema_CCLocFOfLocECC2d::*)( const Standard_Real ) ) static_cast<void (Extrema_CCLocFOfLocECC2d::*)( const Standard_Real ) >(&Extrema_CCLocFOfLocECC2d::SetTolerance),
             R"#(None)#"  , py::arg("theTol"))
        .def("NbVariables",
             (Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const>(&Extrema_CCLocFOfLocECC2d::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const>(&Extrema_CCLocFOfLocECC2d::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & , math_Vector & ) >(&Extrema_CCLocFOfLocECC2d::Value),
             R"#(Calculate Fi(U,V).)#"  , py::arg("UV"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & , math_Matrix & ) >(&Extrema_CCLocFOfLocECC2d::Derivatives),
             R"#(Calculate Fi'(U,V).)#"  , py::arg("UV"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&Extrema_CCLocFOfLocECC2d::Values),
             R"#(Calculate Fi(U,V) and Fi'(U,V).)#"  , py::arg("UV"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() ) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() >(&Extrema_CCLocFOfLocECC2d::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const) static_cast<Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const>(&Extrema_CCLocFOfLocECC2d::NbExt),
             R"#(Return the number of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Extrema_CCLocFOfLocECC2d::*)( const Standard_Integer ) const) static_cast<Standard_Real (Extrema_CCLocFOfLocECC2d::*)( const Standard_Integer ) const>(&Extrema_CCLocFOfLocECC2d::SquareDistance),
             R"#(Return the value of the Nth distance.)#"  , py::arg("N"))
        .def("CurvePtr",
             (Standard_Address (Extrema_CCLocFOfLocECC2d::*)( const Standard_Integer ) const) static_cast<Standard_Address (Extrema_CCLocFOfLocECC2d::*)( const Standard_Integer ) const>(&Extrema_CCLocFOfLocECC2d::CurvePtr),
             R"#(Returns a pointer to the curve specified in the constructor or in SetCurve() method.)#"  , py::arg("theRank"))
        .def("Tolerance",
             (Standard_Real (Extrema_CCLocFOfLocECC2d::*)() const) static_cast<Standard_Real (Extrema_CCLocFOfLocECC2d::*)() const>(&Extrema_CCLocFOfLocECC2d::Tolerance),
             R"#(Returns a tolerance specified in the constructor or in SetTolerance() method.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Extrema_Curve2dTool , shared_ptr<Extrema_Curve2dTool>>(m,"Extrema_Curve2dTool");

    static_cast<py::class_<Extrema_Curve2dTool , shared_ptr<Extrema_Curve2dTool> >>(m.attr("Extrema_Curve2dTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const Adaptor2d_Curve2d & ) ) static_cast<GeomAbs_Shape (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::Continuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( const Adaptor2d_Curve2d & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const Adaptor2d_Curve2d & , const GeomAbs_Shape ) >(&Extrema_Curve2dTool::NbIntervals),
                    R"#(If necessary, breaks the curve in intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Intervals_s",
                    (void (*)( const Adaptor2d_Curve2d & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const Adaptor2d_Curve2d & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&Extrema_Curve2dTool::Intervals),
                    R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("C"),  py::arg("T"),  py::arg("S"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Boolean (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::IsClosed),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Boolean (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::IsPeriodic),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Period_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::Period),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Adaptor2d_Curve2d & , const Standard_Real ) ) static_cast<gp_Pnt2d (*)( const Adaptor2d_Curve2d & , const Standard_Real ) >(&Extrema_Curve2dTool::Value),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D0_s",
                    (void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & ) ) static_cast<void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & ) >(&Extrema_Curve2dTool::D0),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) ) static_cast<void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) >(&Extrema_Curve2dTool::D1),
                    R"#(Computes the point of parameter U on the curve with its first derivative.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def_static("D2_s",
                    (void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) >(&Extrema_Curve2dTool::D2),
                    R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) >(&Extrema_Curve2dTool::D3),
                    R"#(Returns the point P of parameter U, the first, the second and the third derivative.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Integer ) ) static_cast<gp_Vec2d (*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Integer ) >(&Extrema_Curve2dTool::DN),
                    R"#(The returned vector gives the value of the derivative for the order of derivation N.)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("Resolution_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & , const Standard_Real ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & , const Standard_Real ) >(&Extrema_Curve2dTool::Resolution),
                    R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("C"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const Adaptor2d_Curve2d & ) ) static_cast<GeomAbs_CurveType (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::GetType),
                    R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#"  , py::arg("C"))
        .def_static("Line_s",
                    (gp_Lin2d (*)( const Adaptor2d_Curve2d & ) ) static_cast<gp_Lin2d (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::Line),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ2d (*)( const Adaptor2d_Curve2d & ) ) static_cast<gp_Circ2d (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::Circle),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips2d (*)( const Adaptor2d_Curve2d & ) ) static_cast<gp_Elips2d (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::Ellipse),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr2d (*)( const Adaptor2d_Curve2d & ) ) static_cast<gp_Hypr2d (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::Hyperbola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab2d (*)( const Adaptor2d_Curve2d & ) ) static_cast<gp_Parab2d (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::Parabola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Degree_s",
                    (Standard_Integer (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Integer (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::Degree),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsRational_s",
                    (Standard_Boolean (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Boolean (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::IsRational),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbPoles_s",
                    (Standard_Integer (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Integer (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::NbPoles),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbKnots_s",
                    (Standard_Integer (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Integer (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::NbKnots),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom2d_BezierCurve> (*)( const Adaptor2d_Curve2d & ) ) static_cast<opencascade::handle<Geom2d_BezierCurve> (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::Bezier),
                    R"#(None)#"  , py::arg("C"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const Adaptor2d_Curve2d & ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const Adaptor2d_Curve2d & ) >(&Extrema_Curve2dTool::BSpline),
                    R"#(None)#"  , py::arg("C"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Extrema_CurveTool , shared_ptr<Extrema_CurveTool>>(m,"Extrema_CurveTool");

    static_cast<py::class_<Extrema_CurveTool , shared_ptr<Extrema_CurveTool> >>(m.attr("Extrema_CurveTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const Adaptor3d_Curve & ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const Adaptor3d_Curve & ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const Adaptor3d_Curve & ) ) static_cast<GeomAbs_Shape (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::Continuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( Adaptor3d_Curve & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( Adaptor3d_Curve & , const GeomAbs_Shape ) >(&Extrema_CurveTool::NbIntervals),
                    R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Intervals_s",
                    (void (*)( Adaptor3d_Curve & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( Adaptor3d_Curve & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&Extrema_CurveTool::Intervals),
                    R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("C"),  py::arg("T"),  py::arg("S"))
        .def_static("Period_s",
                    (Standard_Real (*)( const Adaptor3d_Curve & ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::Period),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Resolution_s",
                    (Standard_Real (*)( const Adaptor3d_Curve & , const Standard_Real ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve & , const Standard_Real ) >(&Extrema_CurveTool::Resolution),
                    R"#(None)#"  , py::arg("C"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const Adaptor3d_Curve & ) ) static_cast<GeomAbs_CurveType (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::GetType),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Adaptor3d_Curve & , const Standard_Real ) ) static_cast<gp_Pnt (*)( const Adaptor3d_Curve & , const Standard_Real ) >(&Extrema_CurveTool::Value),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D0_s",
                    (void (*)( const Adaptor3d_Curve & , const Standard_Real , gp_Pnt & ) ) static_cast<void (*)( const Adaptor3d_Curve & , const Standard_Real , gp_Pnt & ) >(&Extrema_CurveTool::D0),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const Adaptor3d_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & ) ) static_cast<void (*)( const Adaptor3d_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & ) >(&Extrema_CurveTool::D1),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def_static("D2_s",
                    (void (*)( const Adaptor3d_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Adaptor3d_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&Extrema_CurveTool::D2),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const Adaptor3d_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Adaptor3d_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&Extrema_CurveTool::D3),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Integer ) ) static_cast<gp_Vec (*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Integer ) >(&Extrema_CurveTool::DN),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("Line_s",
                    (gp_Lin (*)( const Adaptor3d_Curve & ) ) static_cast<gp_Lin (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::Line),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ (*)( const Adaptor3d_Curve & ) ) static_cast<gp_Circ (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::Circle),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips (*)( const Adaptor3d_Curve & ) ) static_cast<gp_Elips (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::Ellipse),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr (*)( const Adaptor3d_Curve & ) ) static_cast<gp_Hypr (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::Hyperbola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab (*)( const Adaptor3d_Curve & ) ) static_cast<gp_Parab (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::Parabola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Degree_s",
                    (Standard_Integer (*)( const Adaptor3d_Curve & ) ) static_cast<Standard_Integer (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::Degree),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsRational_s",
                    (Standard_Boolean (*)( const Adaptor3d_Curve & ) ) static_cast<Standard_Boolean (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::IsRational),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbPoles_s",
                    (Standard_Integer (*)( const Adaptor3d_Curve & ) ) static_cast<Standard_Integer (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::NbPoles),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbKnots_s",
                    (Standard_Integer (*)( const Adaptor3d_Curve & ) ) static_cast<Standard_Integer (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::NbKnots),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom_BezierCurve> (*)( const Adaptor3d_Curve & ) ) static_cast<opencascade::handle<Geom_BezierCurve> (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::Bezier),
                    R"#(None)#"  , py::arg("C"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom_BSplineCurve> (*)( const Adaptor3d_Curve & ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (*)( const Adaptor3d_Curve & ) >(&Extrema_CurveTool::BSpline),
                    R"#(None)#"  , py::arg("C"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ECC , shared_ptr<Extrema_ECC> >>(m.attr("Extrema_ECC"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ECC2d , shared_ptr<Extrema_ECC2d> >>(m.attr("Extrema_ECC2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ELPCOfLocateExtPC , shared_ptr<Extrema_ELPCOfLocateExtPC> >>(m.attr("Extrema_ELPCOfLocateExtPC"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ELPCOfLocateExtPC2d , shared_ptr<Extrema_ELPCOfLocateExtPC2d> >>(m.attr("Extrema_ELPCOfLocateExtPC2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_EPCOfELPCOfLocateExtPC , shared_ptr<Extrema_EPCOfELPCOfLocateExtPC> >>(m.attr("Extrema_EPCOfELPCOfLocateExtPC"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_EPCOfELPCOfLocateExtPC2d , shared_ptr<Extrema_EPCOfELPCOfLocateExtPC2d> >>(m.attr("Extrema_EPCOfELPCOfLocateExtPC2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_EPCOfExtPC , shared_ptr<Extrema_EPCOfExtPC> >>(m.attr("Extrema_EPCOfExtPC"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_EPCOfExtPC2d , shared_ptr<Extrema_EPCOfExtPC2d> >>(m.attr("Extrema_EPCOfExtPC2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtCC , shared_ptr<Extrema_ExtCC> >>(m.attr("Extrema_ExtCC"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtCC2d , shared_ptr<Extrema_ExtCC2d> >>(m.attr("Extrema_ExtCC2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtCS , shared_ptr<Extrema_ExtCS> >>(m.attr("Extrema_ExtCS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtElC , shared_ptr<Extrema_ExtElC> >>(m.attr("Extrema_ExtElC"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtElC2d , shared_ptr<Extrema_ExtElC2d> >>(m.attr("Extrema_ExtElC2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtElCS , shared_ptr<Extrema_ExtElCS> >>(m.attr("Extrema_ExtElCS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtElSS , shared_ptr<Extrema_ExtElSS> >>(m.attr("Extrema_ExtElSS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPC , shared_ptr<Extrema_ExtPC> >>(m.attr("Extrema_ExtPC"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPC2d , shared_ptr<Extrema_ExtPC2d> >>(m.attr("Extrema_ExtPC2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPElC , shared_ptr<Extrema_ExtPElC> >>(m.attr("Extrema_ExtPElC"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPElC2d , shared_ptr<Extrema_ExtPElC2d> >>(m.attr("Extrema_ExtPElC2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPElS , shared_ptr<Extrema_ExtPElS> >>(m.attr("Extrema_ExtPElS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPExtS ,opencascade::handle<Extrema_ExtPExtS> , Standard_Transient>>(m.attr("Extrema_ExtPExtS"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Extrema_ExtPExtS::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Extrema_ExtPExtS::*)() const>(&Extrema_ExtPExtS::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Extrema_ExtPExtS::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPRevS ,opencascade::handle<Extrema_ExtPRevS> , Standard_Transient>>(m.attr("Extrema_ExtPRevS"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Extrema_ExtPRevS::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Extrema_ExtPRevS::*)() const>(&Extrema_ExtPRevS::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Extrema_ExtPRevS::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtPS , shared_ptr<Extrema_ExtPS> >>(m.attr("Extrema_ExtPS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_ExtSS , shared_ptr<Extrema_ExtSS> >>(m.attr("Extrema_ExtSS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_FuncExtCS , shared_ptr<Extrema_FuncExtCS> , math_FunctionSetWithDerivatives>>(m.attr("Extrema_FuncExtCS"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Extrema_FuncExtCS::*)() const) static_cast<Standard_Integer (Extrema_FuncExtCS::*)() const>(&Extrema_FuncExtCS::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (Extrema_FuncExtCS::*)() const) static_cast<Standard_Integer (Extrema_FuncExtCS::*)() const>(&Extrema_FuncExtCS::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_FuncExtCS::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Extrema_FuncExtCS::*)( const math_Vector & , math_Vector & ) >(&Extrema_FuncExtCS::Value),
             R"#(Calculation of Fi(U,V).)#"  , py::arg("UV"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Extrema_FuncExtCS::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Extrema_FuncExtCS::*)( const math_Vector & , math_Matrix & ) >(&Extrema_FuncExtCS::Derivatives),
             R"#(Calculation of Fi'(U,V).)#"  , py::arg("UV"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_FuncExtCS::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Extrema_FuncExtCS::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&Extrema_FuncExtCS::Values),
             R"#(Calculation of Fi(U,V) and Fi'(U,V).)#"  , py::arg("UV"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_FuncExtCS::*)() ) static_cast<Standard_Integer (Extrema_FuncExtCS::*)() >(&Extrema_FuncExtCS::GetStateNumber),
             R"#(Save the found extremum.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_FuncExtSS , shared_ptr<Extrema_FuncExtSS> , math_FunctionSetWithDerivatives>>(m.attr("Extrema_FuncExtSS"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Extrema_FuncExtSS::*)() const) static_cast<Standard_Integer (Extrema_FuncExtSS::*)() const>(&Extrema_FuncExtSS::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (Extrema_FuncExtSS::*)() const) static_cast<Standard_Integer (Extrema_FuncExtSS::*)() const>(&Extrema_FuncExtSS::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_FuncExtSS::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Extrema_FuncExtSS::*)( const math_Vector & , math_Vector & ) >(&Extrema_FuncExtSS::Value),
             R"#(Calculate Fi(U,V).)#"  , py::arg("UV"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Extrema_FuncExtSS::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Extrema_FuncExtSS::*)( const math_Vector & , math_Matrix & ) >(&Extrema_FuncExtSS::Derivatives),
             R"#(Calculate Fi'(U,V).)#"  , py::arg("UV"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_FuncExtSS::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Extrema_FuncExtSS::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&Extrema_FuncExtSS::Values),
             R"#(Calculate Fi(U,V) and Fi'(U,V).)#"  , py::arg("UV"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_FuncExtSS::*)() ) static_cast<Standard_Integer (Extrema_FuncExtSS::*)() >(&Extrema_FuncExtSS::GetStateNumber),
             R"#(Save the found extremum.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_FuncPSDist , shared_ptr<Extrema_FuncPSDist> , math_MultipleVarFunctionWithGradient>>(m.attr("Extrema_FuncPSDist"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Extrema_FuncPSDist::*)() const) static_cast<Standard_Integer (Extrema_FuncPSDist::*)() const>(&Extrema_FuncPSDist::NbVariables),
             R"#(Number of variables.)#" )
        .def("Value",
             (Standard_Boolean (Extrema_FuncPSDist::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_FuncPSDist::*)( const math_Vector & , Standard_Real & ) >(&Extrema_FuncPSDist::Value),
             R"#(Value.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (Extrema_FuncPSDist::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Extrema_FuncPSDist::*)( const math_Vector & , math_Vector & ) >(&Extrema_FuncPSDist::Gradient),
             R"#(Gradient.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (Extrema_FuncPSDist::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (Extrema_FuncPSDist::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&Extrema_FuncPSDist::Values),
             R"#(Value and gradient.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_FuncPSNorm , shared_ptr<Extrema_FuncPSNorm> , math_FunctionSetWithDerivatives>>(m.attr("Extrema_FuncPSNorm"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Extrema_FuncPSNorm::*)() const) static_cast<Standard_Integer (Extrema_FuncPSNorm::*)() const>(&Extrema_FuncPSNorm::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (Extrema_FuncPSNorm::*)() const) static_cast<Standard_Integer (Extrema_FuncPSNorm::*)() const>(&Extrema_FuncPSNorm::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_FuncPSNorm::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Extrema_FuncPSNorm::*)( const math_Vector & , math_Vector & ) >(&Extrema_FuncPSNorm::Value),
             R"#(Calculate Fi(U,V).)#"  , py::arg("UV"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Extrema_FuncPSNorm::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Extrema_FuncPSNorm::*)( const math_Vector & , math_Matrix & ) >(&Extrema_FuncPSNorm::Derivatives),
             R"#(Calculate Fi'(U,V).)#"  , py::arg("UV"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_FuncPSNorm::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Extrema_FuncPSNorm::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&Extrema_FuncPSNorm::Values),
             R"#(Calculate Fi(U,V) and Fi'(U,V).)#"  , py::arg("UV"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_FuncPSNorm::*)() ) static_cast<Standard_Integer (Extrema_FuncPSNorm::*)() >(&Extrema_FuncPSNorm::GetStateNumber),
             R"#(Save the found extremum.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GenExtCS , shared_ptr<Extrema_GenExtCS> >>(m.attr("Extrema_GenExtCS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GenExtPS , shared_ptr<Extrema_GenExtPS> >>(m.attr("Extrema_GenExtPS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GenExtSS , shared_ptr<Extrema_GenExtSS> >>(m.attr("Extrema_GenExtSS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GenLocateExtCS , shared_ptr<Extrema_GenLocateExtCS> >>(m.attr("Extrema_GenLocateExtCS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GenLocateExtPS , shared_ptr<Extrema_GenLocateExtPS> >>(m.attr("Extrema_GenLocateExtPS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GenLocateExtSS , shared_ptr<Extrema_GenLocateExtSS> >>(m.attr("Extrema_GenLocateExtSS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GlobOptFuncCCC0 , shared_ptr<Extrema_GlobOptFuncCCC0> , math_MultipleVarFunction>>(m.attr("Extrema_GlobOptFuncCCC0"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Extrema_GlobOptFuncCCC0::*)() const) static_cast<Standard_Integer (Extrema_GlobOptFuncCCC0::*)() const>(&Extrema_GlobOptFuncCCC0::NbVariables),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_GlobOptFuncCCC0::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC0::*)( const math_Vector & , Standard_Real & ) >(&Extrema_GlobOptFuncCCC0::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GlobOptFuncCCC1 , shared_ptr<Extrema_GlobOptFuncCCC1> , math_MultipleVarFunctionWithGradient>>(m.attr("Extrema_GlobOptFuncCCC1"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Extrema_GlobOptFuncCCC1::*)() const) static_cast<Standard_Integer (Extrema_GlobOptFuncCCC1::*)() const>(&Extrema_GlobOptFuncCCC1::NbVariables),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_GlobOptFuncCCC1::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC1::*)( const math_Vector & , Standard_Real & ) >(&Extrema_GlobOptFuncCCC1::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (Extrema_GlobOptFuncCCC1::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC1::*)( const math_Vector & , math_Vector & ) >(&Extrema_GlobOptFuncCCC1::Gradient),
             R"#(None)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (Extrema_GlobOptFuncCCC1::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC1::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&Extrema_GlobOptFuncCCC1::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GlobOptFuncCCC2 , shared_ptr<Extrema_GlobOptFuncCCC2> , math_MultipleVarFunctionWithHessian>>(m.attr("Extrema_GlobOptFuncCCC2"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Extrema_GlobOptFuncCCC2::*)() const) static_cast<Standard_Integer (Extrema_GlobOptFuncCCC2::*)() const>(&Extrema_GlobOptFuncCCC2::NbVariables),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & , Standard_Real & ) >(&Extrema_GlobOptFuncCCC2::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & , math_Vector & ) >(&Extrema_GlobOptFuncCCC2::Gradient),
             R"#(None)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&Extrema_GlobOptFuncCCC2::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & , Standard_Real & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCCC2::*)( const math_Vector & , Standard_Real & , math_Vector & , math_Matrix & ) >(&Extrema_GlobOptFuncCCC2::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"),  py::arg("H"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_GlobOptFuncCS , shared_ptr<Extrema_GlobOptFuncCS> , math_MultipleVarFunctionWithHessian>>(m.attr("Extrema_GlobOptFuncCS"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Extrema_GlobOptFuncCS::*)() const) static_cast<Standard_Integer (Extrema_GlobOptFuncCS::*)() const>(&Extrema_GlobOptFuncCS::NbVariables),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & , Standard_Real & ) >(&Extrema_GlobOptFuncCS::Value),
             R"#(None)#"  , py::arg("theX"),  py::arg("theF"))
        .def("Gradient",
             (Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & , math_Vector & ) >(&Extrema_GlobOptFuncCS::Gradient),
             R"#(None)#"  , py::arg("theX"),  py::arg("theG"))
        .def("Values",
             (Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&Extrema_GlobOptFuncCS::Values),
             R"#(None)#"  , py::arg("theX"),  py::arg("theF"),  py::arg("theG"))
        .def("Values",
             (Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & , Standard_Real & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Extrema_GlobOptFuncCS::*)( const math_Vector & , Standard_Real & , math_Vector & , math_Matrix & ) >(&Extrema_GlobOptFuncCS::Values),
             R"#(None)#"  , py::arg("theX"),  py::arg("theF"),  py::arg("theG"),  py::arg("theH"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_HArray1OfPOnCurv ,opencascade::handle<Extrema_HArray1OfPOnCurv> , Extrema_Array1OfPOnCurv, Standard_Transient>>(m.attr("Extrema_HArray1OfPOnCurv"))
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


    static_cast<py::class_<Extrema_HArray1OfPOnCurv2d ,opencascade::handle<Extrema_HArray1OfPOnCurv2d> , Extrema_Array1OfPOnCurv2d, Standard_Transient>>(m.attr("Extrema_HArray1OfPOnCurv2d"))
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


    static_cast<py::class_<Extrema_HArray1OfPOnSurf ,opencascade::handle<Extrema_HArray1OfPOnSurf> , Extrema_Array1OfPOnSurf, Standard_Transient>>(m.attr("Extrema_HArray1OfPOnSurf"))
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


    static_cast<py::class_<Extrema_HArray2OfPOnCurv ,opencascade::handle<Extrema_HArray2OfPOnCurv> , Extrema_Array2OfPOnCurv, Standard_Transient>>(m.attr("Extrema_HArray2OfPOnCurv"))
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


    static_cast<py::class_<Extrema_HArray2OfPOnCurv2d ,opencascade::handle<Extrema_HArray2OfPOnCurv2d> , Extrema_Array2OfPOnCurv2d, Standard_Transient>>(m.attr("Extrema_HArray2OfPOnCurv2d"))
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


    static_cast<py::class_<Extrema_HArray2OfPOnSurf ,opencascade::handle<Extrema_HArray2OfPOnSurf> , Extrema_Array2OfPOnSurf, Standard_Transient>>(m.attr("Extrema_HArray2OfPOnSurf"))
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


    static_cast<py::class_<Extrema_HArray2OfPOnSurfParams ,opencascade::handle<Extrema_HArray2OfPOnSurfParams> , Extrema_Array2OfPOnSurfParams, Standard_Transient>>(m.attr("Extrema_HArray2OfPOnSurfParams"))
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


    static_cast<py::class_<Extrema_LocECC , shared_ptr<Extrema_LocECC> >>(m.attr("Extrema_LocECC"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocECC2d , shared_ptr<Extrema_LocECC2d> >>(m.attr("Extrema_LocECC2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocEPCOfLocateExtPC , shared_ptr<Extrema_LocEPCOfLocateExtPC> >>(m.attr("Extrema_LocEPCOfLocateExtPC"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocEPCOfLocateExtPC2d , shared_ptr<Extrema_LocEPCOfLocateExtPC2d> >>(m.attr("Extrema_LocEPCOfLocateExtPC2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocateExtCC , shared_ptr<Extrema_LocateExtCC> >>(m.attr("Extrema_LocateExtCC"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocateExtCC2d , shared_ptr<Extrema_LocateExtCC2d> >>(m.attr("Extrema_LocateExtCC2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocateExtPC , shared_ptr<Extrema_LocateExtPC> >>(m.attr("Extrema_LocateExtPC"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_LocateExtPC2d , shared_ptr<Extrema_LocateExtPC2d> >>(m.attr("Extrema_LocateExtPC2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_PCFOfEPCOfELPCOfLocateExtPC , shared_ptr<Extrema_PCFOfEPCOfELPCOfLocateExtPC> , math_FunctionWithDerivative>>(m.attr("Extrema_PCFOfEPCOfELPCOfLocateExtPC"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real , Standard_Real & ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real , Standard_Real & ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)() ) static_cast<Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)() >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC::GetStateNumber),
             R"#(Save the found extremum.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_PCFOfEPCOfELPCOfLocateExtPC2d , shared_ptr<Extrema_PCFOfEPCOfELPCOfLocateExtPC2d> , math_FunctionWithDerivative>>(m.attr("Extrema_PCFOfEPCOfELPCOfLocateExtPC2d"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real , Standard_Real & ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real , Standard_Real & ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)() ) static_cast<Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)() >(&Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::GetStateNumber),
             R"#(Save the found extremum.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_PCFOfEPCOfExtPC , shared_ptr<Extrema_PCFOfEPCOfExtPC> , math_FunctionWithDerivative>>(m.attr("Extrema_PCFOfEPCOfExtPC"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real , Standard_Real & ) >(&Extrema_PCFOfEPCOfExtPC::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real , Standard_Real & ) >(&Extrema_PCFOfEPCOfExtPC::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Extrema_PCFOfEPCOfExtPC::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_PCFOfEPCOfExtPC::*)() ) static_cast<Standard_Integer (Extrema_PCFOfEPCOfExtPC::*)() >(&Extrema_PCFOfEPCOfExtPC::GetStateNumber),
             R"#(Save the found extremum.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_PCFOfEPCOfExtPC2d , shared_ptr<Extrema_PCFOfEPCOfExtPC2d> , math_FunctionWithDerivative>>(m.attr("Extrema_PCFOfEPCOfExtPC2d"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real , Standard_Real & ) >(&Extrema_PCFOfEPCOfExtPC2d::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real , Standard_Real & ) >(&Extrema_PCFOfEPCOfExtPC2d::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Extrema_PCFOfEPCOfExtPC2d::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_PCFOfEPCOfExtPC2d::*)() ) static_cast<Standard_Integer (Extrema_PCFOfEPCOfExtPC2d::*)() >(&Extrema_PCFOfEPCOfExtPC2d::GetStateNumber),
             R"#(Save the found extremum.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_PCLocFOfLocEPCOfLocateExtPC , shared_ptr<Extrema_PCLocFOfLocEPCOfLocateExtPC> , math_FunctionWithDerivative>>(m.attr("Extrema_PCLocFOfLocEPCOfLocateExtPC"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real , Standard_Real & ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real , Standard_Real & ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)() ) static_cast<Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)() >(&Extrema_PCLocFOfLocEPCOfLocateExtPC::GetStateNumber),
             R"#(Save the found extremum.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_PCLocFOfLocEPCOfLocateExtPC2d , shared_ptr<Extrema_PCLocFOfLocEPCOfLocateExtPC2d> , math_FunctionWithDerivative>>(m.attr("Extrema_PCLocFOfLocEPCOfLocateExtPC2d"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real , Standard_Real & ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real , Standard_Real & ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)() ) static_cast<Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)() >(&Extrema_PCLocFOfLocEPCOfLocateExtPC2d::GetStateNumber),
             R"#(Save the found extremum.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Extrema_POnCurv , shared_ptr<Extrema_POnCurv> >>(m.attr("Extrema_POnCurv"))
    // constructors
    // custom constructors
    // methods
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


    static_cast<py::class_<Extrema_POnCurv2d , shared_ptr<Extrema_POnCurv2d> >>(m.attr("Extrema_POnCurv2d"))
    // constructors
    // custom constructors
    // methods
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


    static_cast<py::class_<Extrema_POnSurf , shared_ptr<Extrema_POnSurf> >>(m.attr("Extrema_POnSurf"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("U"),  py::arg("V"),  py::arg("P") )
    // custom constructors
    // methods
        .def("Value",
             (const gp_Pnt & (Extrema_POnSurf::*)() const) static_cast<const gp_Pnt & (Extrema_POnSurf::*)() const>(&Extrema_POnSurf::Value),
             R"#(Returns the 3d point.)#" )
        .def("SetParameters",
             (void (Extrema_POnSurf::*)( const Standard_Real , const Standard_Real , const gp_Pnt & ) ) static_cast<void (Extrema_POnSurf::*)( const Standard_Real , const Standard_Real , const gp_Pnt & ) >(&Extrema_POnSurf::SetParameters),
             R"#(Sets the params of current POnSurf instance. (e.g. to the point to be projected).)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("thePnt"))
        .def("SetParameters",
             (void (Extrema_POnSurf::*)( const Standard_Real , const Standard_Real , const gp_Pnt & ) ) static_cast<void (Extrema_POnSurf::*)( const Standard_Real , const Standard_Real , const gp_Pnt & ) >(&Extrema_POnSurf::SetParameters),
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


    static_cast<py::class_<Extrema_POnSurfParams , shared_ptr<Extrema_POnSurfParams> , Extrema_POnSurf>>(m.attr("Extrema_POnSurfParams"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("theU"),  py::arg("theV"),  py::arg("thePnt") )
    // custom constructors
    // methods
        .def("SetSqrDistance",
             (void (Extrema_POnSurfParams::*)( const Standard_Real ) ) static_cast<void (Extrema_POnSurfParams::*)( const Standard_Real ) >(&Extrema_POnSurfParams::SetSqrDistance),
             R"#(Sets the square distance from this point to another one (e.g. to the point to be projected).)#"  , py::arg("theSqrDistance"))
        .def("GetSqrDistance",
             (Standard_Real (Extrema_POnSurfParams::*)() const) static_cast<Standard_Real (Extrema_POnSurfParams::*)() const>(&Extrema_POnSurfParams::GetSqrDistance),
             R"#(Query the square distance from this point to another one.)#" )
        .def("SetElementType",
             (void (Extrema_POnSurfParams::*)( const Extrema_ElementType ) ) static_cast<void (Extrema_POnSurfParams::*)( const Extrema_ElementType ) >(&Extrema_POnSurfParams::SetElementType),
             R"#(Sets the element type on which this point is situated.)#"  , py::arg("theElementType"))
        .def("GetElementType",
             (Extrema_ElementType (Extrema_POnSurfParams::*)() const) static_cast<Extrema_ElementType (Extrema_POnSurfParams::*)() const>(&Extrema_POnSurfParams::GetElementType),
             R"#(Query the element type on which this point is situated.)#" )
        .def("SetIndices",
             (void (Extrema_POnSurfParams::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Extrema_POnSurfParams::*)( const Standard_Integer , const Standard_Integer ) >(&Extrema_POnSurfParams::SetIndices),
             R"#(Sets the U and V indices of an element that contains this point.)#"  , py::arg("theIndexU"),  py::arg("theIndexV"))
        .def("SetSqrDistance",
             (void (Extrema_POnSurfParams::*)( const Standard_Real ) ) static_cast<void (Extrema_POnSurfParams::*)( const Standard_Real ) >(&Extrema_POnSurfParams::SetSqrDistance),
             R"#(Sets the square distance from this point to another one (e.g. to the point to be projected).)#"  , py::arg("theSqrDistance"))
        .def("GetSqrDistance",
             (Standard_Real (Extrema_POnSurfParams::*)() const) static_cast<Standard_Real (Extrema_POnSurfParams::*)() const>(&Extrema_POnSurfParams::GetSqrDistance),
             R"#(Query the square distance from this point to another one.)#" )
        .def("SetElementType",
             (void (Extrema_POnSurfParams::*)( const Extrema_ElementType ) ) static_cast<void (Extrema_POnSurfParams::*)( const Extrema_ElementType ) >(&Extrema_POnSurfParams::SetElementType),
             R"#(Sets the element type on which this point is situated.)#"  , py::arg("theElementType"))
        .def("GetElementType",
             (Extrema_ElementType (Extrema_POnSurfParams::*)() const) static_cast<Extrema_ElementType (Extrema_POnSurfParams::*)() const>(&Extrema_POnSurfParams::GetElementType),
             R"#(Query the element type on which this point is situated.)#" )
        .def("SetIndices",
             (void (Extrema_POnSurfParams::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Extrema_POnSurfParams::*)( const Standard_Integer , const Standard_Integer ) >(&Extrema_POnSurfParams::SetIndices),
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
// ./opencascade/Extrema_POnSurfParams.hxx
// ./opencascade/Extrema_ExtElC2d.hxx
// ./opencascade/Extrema_ExtElC.hxx
// ./opencascade/Extrema_ELPCOfLocateExtPC.hxx
// ./opencascade/Extrema_ExtCS.hxx
// ./opencascade/Extrema_HArray1OfPOnSurf.hxx
// ./opencascade/Extrema_FuncExtSS.hxx
// ./opencascade/Extrema_FuncPSDist.hxx
// ./opencascade/Extrema_Curve2dTool.hxx
// ./opencascade/Extrema_Array2OfPOnSurf.hxx
// ./opencascade/Extrema_POnCurv.hxx
// ./opencascade/Extrema_ExtPElC2d.hxx
// ./opencascade/Extrema_CCLocFOfLocECC.hxx
// ./opencascade/Extrema_LocEPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_ExtCC.hxx
// ./opencascade/Extrema_LocECC.hxx
// ./opencascade/Extrema_SequenceOfPOnCurv.hxx
// ./opencascade/Extrema_EPCOfELPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_CurveTool.hxx
// ./opencascade/Extrema_GenExtSS.hxx
// ./opencascade/Extrema_GenExtPS.hxx
// ./opencascade/Extrema_POnSurf.hxx
// ./opencascade/Extrema_PCLocFOfLocEPCOfLocateExtPC.hxx
// ./opencascade/Extrema_ExtPC2d.hxx
// ./opencascade/Extrema_GenExtCS.hxx
// ./opencascade/Extrema_Array2OfPOnSurfParams.hxx
// ./opencascade/Extrema_ExtAlgo.hxx
// ./opencascade/Extrema_FuncPSNorm.hxx
// ./opencascade/Extrema_ExtFlag.hxx
// ./opencascade/Extrema_HArray2OfPOnSurf.hxx
// ./opencascade/Extrema_GlobOptFuncCS.hxx
// ./opencascade/Extrema_ELPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_FuncExtCS.hxx
// ./opencascade/Extrema_Array2OfPOnCurv.hxx
// ./opencascade/Extrema_GenLocateExtCS.hxx
// ./opencascade/Extrema_LocECC2d.hxx
// ./opencascade/Extrema_LocateExtPC2d.hxx
// ./opencascade/Extrema_LocateExtCC.hxx
// ./opencascade/Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_SequenceOfPOnCurv2d.hxx
// ./opencascade/Extrema_PCLocFOfLocEPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_HArray1OfPOnCurv2d.hxx
// ./opencascade/Extrema_GlobOptFuncCC.hxx
// ./opencascade/Extrema_LocateExtPC.hxx
// ./opencascade/Extrema_GenLocateExtPS.hxx
// ./opencascade/Extrema_LocEPCOfLocateExtPC.hxx
// ./opencascade/Extrema_ExtPElC.hxx
// ./opencascade/Extrema_ExtPC.hxx
// ./opencascade/Extrema_HArray1OfPOnCurv.hxx
// ./opencascade/Extrema_CCLocFOfLocECC2d.hxx
// ./opencascade/Extrema_LocateExtCC2d.hxx
// ./opencascade/Extrema_EPCOfExtPC2d.hxx
// ./opencascade/Extrema_ElementType.hxx
// ./opencascade/Extrema_ExtPExtS.hxx
// ./opencascade/Extrema_HArray2OfPOnSurfParams.hxx
// ./opencascade/Extrema_ExtPRevS.hxx
// ./opencascade/Extrema_ECC2d.hxx
// ./opencascade/Extrema_Array2OfPOnCurv2d.hxx
// ./opencascade/Extrema_HArray2OfPOnCurv.hxx
// ./opencascade/Extrema_EPCOfExtPC.hxx
// ./opencascade/Extrema_ExtSS.hxx
// ./opencascade/Extrema_Array1OfPOnCurv.hxx
// ./opencascade/Extrema_ExtElCS.hxx
// ./opencascade/Extrema_PCFOfEPCOfExtPC2d.hxx
// ./opencascade/Extrema_HUBTreeOfSphere.hxx
// ./opencascade/Extrema_Array1OfPOnSurf.hxx
// ./opencascade/Extrema_Array1OfPOnCurv2d.hxx
// ./opencascade/Extrema_PCFOfEPCOfExtPC.hxx
// ./opencascade/Extrema_SequenceOfPOnSurf.hxx
// ./opencascade/Extrema_EPCOfELPCOfLocateExtPC.hxx
// ./opencascade/Extrema_ExtElSS.hxx
// ./opencascade/Extrema_ExtPElS.hxx
// ./opencascade/Extrema_ExtCC2d.hxx
// ./opencascade/Extrema_ECC.hxx
// ./opencascade/Extrema_PCFOfEPCOfELPCOfLocateExtPC.hxx
// ./opencascade/Extrema_POnCurv2d.hxx
// ./opencascade/Extrema_ExtPS.hxx
// ./opencascade/Extrema_GenLocateExtSS.hxx
// ./opencascade/Extrema_HArray2OfPOnCurv2d.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array2<Extrema_POnSurf>(m,"Extrema_Array2OfPOnSurf");
    register_template_NCollection_Sequence<Extrema_POnCurv>(m,"Extrema_SequenceOfPOnCurv");
    register_template_NCollection_Array2<Extrema_POnSurfParams>(m,"Extrema_Array2OfPOnSurfParams");
    register_template_NCollection_Array2<Extrema_POnCurv>(m,"Extrema_Array2OfPOnCurv");
    register_template_NCollection_Sequence<Extrema_POnCurv2d>(m,"Extrema_SequenceOfPOnCurv2d");
    register_template_NCollection_Array2<Extrema_POnCurv2d>(m,"Extrema_Array2OfPOnCurv2d");
    register_template_NCollection_Array1<Extrema_POnCurv>(m,"Extrema_Array1OfPOnCurv");
    register_template_NCollection_UBTree<Standard_Integer, Bnd_Sphere>(m,"Extrema_UBTreeOfSphere");
    register_template_NCollection_UBTreeFiller<Standard_Integer, Bnd_Sphere>(m,"Extrema_UBTreeFillerOfSphere");
    register_template_NCollection_Array1<Extrema_POnSurf>(m,"Extrema_Array1OfPOnSurf");
    register_template_NCollection_Array1<Extrema_POnCurv2d>(m,"Extrema_Array1OfPOnCurv2d");
    register_template_NCollection_Sequence<Extrema_POnSurf>(m,"Extrema_SequenceOfPOnSurf");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

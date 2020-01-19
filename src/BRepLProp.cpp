
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BRepAdaptor_Curve.hxx>
#include <BRepLProp_CurveTool.hxx>
#include <BRepLProp_SurfaceTool.hxx>
#include <BRepLProp_CLProps.hxx>
#include <BRepLProp_SLProps.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <BRepLProp_SurfaceTool.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <BRepLProp_CurveTool.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>

// module includes
#include <BRepLProp.hxx>
#include <BRepLProp_CLProps.hxx>
#include <BRepLProp_CurveTool.hxx>
#include <BRepLProp_SLProps.hxx>
#include <BRepLProp_SurfaceTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepLProp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepLProp"));


//Python trampoline classes

// classes

    register_default_constructor<BRepLProp , shared_ptr<BRepLProp>>(m,"BRepLProp");

    static_cast<py::class_<BRepLProp , shared_ptr<BRepLProp>  >>(m.attr("BRepLProp"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const BRepAdaptor_Curve & ,  const BRepAdaptor_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<GeomAbs_Shape (*)( const BRepAdaptor_Curve & ,  const BRepAdaptor_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&BRepLProp::Continuity),
                    R"#(Computes the regularity at the junction between C1 and C2. The point u1 on C1 and the point u2 on C2 must be confused. tl and ta are the linear and angular tolerance used two compare the derivative.)#"  , py::arg("C1"),  py::arg("C2"),  py::arg("u1"),  py::arg("u2"),  py::arg("tl"),  py::arg("ta"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const BRepAdaptor_Curve & ,  const BRepAdaptor_Curve & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<GeomAbs_Shape (*)( const BRepAdaptor_Curve & ,  const BRepAdaptor_Curve & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepLProp::Continuity),
                    R"#(The same as preciding but using the standard tolerances from package Precision.)#"  , py::arg("C1"),  py::arg("C2"),  py::arg("u1"),  py::arg("u2"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BRepLProp_CLProps , shared_ptr<BRepLProp_CLProps>  >>(m.attr("BRepLProp_CLProps"))
        .def(py::init< const BRepAdaptor_Curve &,const Standard_Integer,const Standard_Real >()  , py::arg("C"),  py::arg("N"),  py::arg("Resolution") )
        .def(py::init< const BRepAdaptor_Curve &,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("C"),  py::arg("U"),  py::arg("N"),  py::arg("Resolution") )
        .def(py::init< const Standard_Integer,const Standard_Real >()  , py::arg("N"),  py::arg("Resolution") )
    // methods
        .def("SetParameter",
             (void (BRepLProp_CLProps::*)( const Standard_Real  ) ) static_cast<void (BRepLProp_CLProps::*)( const Standard_Real  ) >(&BRepLProp_CLProps::SetParameter),
             R"#(Initializes the local properties of the curve for the parameter value <U>.)#"  , py::arg("U"))
        .def("SetCurve",
             (void (BRepLProp_CLProps::*)( const BRepAdaptor_Curve &  ) ) static_cast<void (BRepLProp_CLProps::*)( const BRepAdaptor_Curve &  ) >(&BRepLProp_CLProps::SetCurve),
             R"#(Initializes the local properties of the curve for the new curve.)#"  , py::arg("C"))
        .def("Value",
             (const gp_Pnt & (BRepLProp_CLProps::*)() const) static_cast<const gp_Pnt & (BRepLProp_CLProps::*)() const>(&BRepLProp_CLProps::Value),
             R"#(Returns the Point.)#" )
        .def("D1",
             (const gp_Vec & (BRepLProp_CLProps::*)() ) static_cast<const gp_Vec & (BRepLProp_CLProps::*)() >(&BRepLProp_CLProps::D1),
             R"#(Returns the first derivative. The derivative is computed if it has not been yet.)#" )
        .def("D2",
             (const gp_Vec & (BRepLProp_CLProps::*)() ) static_cast<const gp_Vec & (BRepLProp_CLProps::*)() >(&BRepLProp_CLProps::D2),
             R"#(Returns the second derivative. The derivative is computed if it has not been yet.)#" )
        .def("D3",
             (const gp_Vec & (BRepLProp_CLProps::*)() ) static_cast<const gp_Vec & (BRepLProp_CLProps::*)() >(&BRepLProp_CLProps::D3),
             R"#(Returns the third derivative. The derivative is computed if it has not been yet.)#" )
        .def("IsTangentDefined",
             (Standard_Boolean (BRepLProp_CLProps::*)() ) static_cast<Standard_Boolean (BRepLProp_CLProps::*)() >(&BRepLProp_CLProps::IsTangentDefined),
             R"#(Returns True if the tangent is defined. For example, the tangent is not defined if the three first derivatives are all null.)#" )
        .def("Tangent",
             (void (BRepLProp_CLProps::*)( gp_Dir &  ) ) static_cast<void (BRepLProp_CLProps::*)( gp_Dir &  ) >(&BRepLProp_CLProps::Tangent),
             R"#(output the tangent direction <D>)#"  , py::arg("D"))
        .def("Curvature",
             (Standard_Real (BRepLProp_CLProps::*)() ) static_cast<Standard_Real (BRepLProp_CLProps::*)() >(&BRepLProp_CLProps::Curvature),
             R"#(Returns the curvature.)#" )
        .def("Normal",
             (void (BRepLProp_CLProps::*)( gp_Dir &  ) ) static_cast<void (BRepLProp_CLProps::*)( gp_Dir &  ) >(&BRepLProp_CLProps::Normal),
             R"#(Returns the normal direction <N>.)#"  , py::arg("N"))
        .def("CentreOfCurvature",
             (void (BRepLProp_CLProps::*)( gp_Pnt &  ) ) static_cast<void (BRepLProp_CLProps::*)( gp_Pnt &  ) >(&BRepLProp_CLProps::CentreOfCurvature),
             R"#(Returns the centre of curvature <P>.)#"  , py::arg("P"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<BRepLProp_CurveTool , shared_ptr<BRepLProp_CurveTool>>(m,"BRepLProp_CurveTool");

    static_cast<py::class_<BRepLProp_CurveTool , shared_ptr<BRepLProp_CurveTool>  >>(m.attr("BRepLProp_CurveTool"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Value_s",
                    (void (*)( const BRepAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt &  ) ) static_cast<void (*)( const BRepAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt &  ) >(&BRepLProp_CurveTool::Value),
                    R"#(Computes the point <P> of parameter <U> on the curve <C>.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const BRepAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<void (*)( const BRepAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) >(&BRepLProp_CurveTool::D1),
                    R"#(Computes the point <P> and first derivative <V1> of parameter <U> on the curve <C>.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def_static("D2_s",
                    (void (*)( const BRepAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const BRepAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&BRepLProp_CurveTool::D2),
                    R"#(Computes the point <P>, the first derivative <V1> and second derivative <V2> of parameter <U> on the curve <C>.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const BRepAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const BRepAdaptor_Curve & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&BRepLProp_CurveTool::D3),
                    R"#(Computes the point <P>, the first derivative <V1>, the second derivative <V2> and third derivative <V3> of parameter <U> on the curve <C>.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("Continuity_s",
                    (Standard_Integer (*)( const BRepAdaptor_Curve &  ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Curve &  ) >(&BRepLProp_CurveTool::Continuity),
                    R"#(returns the order of continuity of the curve <C>. returns 1 : first derivative only is computable returns 2 : first and second derivative only are computable. returns 3 : first, second and third are computable.)#"  , py::arg("C"))
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Curve &  ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Curve &  ) >(&BRepLProp_CurveTool::FirstParameter),
                    R"#(returns the first parameter bound of the curve.)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Curve &  ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Curve &  ) >(&BRepLProp_CurveTool::LastParameter),
                    R"#(returns the last parameter bound of the curve. FirstParameter must be less than LastParamenter.)#"  , py::arg("C"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BRepLProp_SLProps , shared_ptr<BRepLProp_SLProps>  >>(m.attr("BRepLProp_SLProps"))
        .def(py::init< const BRepAdaptor_Surface &,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("S"),  py::arg("U"),  py::arg("V"),  py::arg("N"),  py::arg("Resolution") )
        .def(py::init< const BRepAdaptor_Surface &,const Standard_Integer,const Standard_Real >()  , py::arg("S"),  py::arg("N"),  py::arg("Resolution") )
        .def(py::init< const Standard_Integer,const Standard_Real >()  , py::arg("N"),  py::arg("Resolution") )
    // methods
        .def("SetSurface",
             (void (BRepLProp_SLProps::*)( const BRepAdaptor_Surface &  ) ) static_cast<void (BRepLProp_SLProps::*)( const BRepAdaptor_Surface &  ) >(&BRepLProp_SLProps::SetSurface),
             R"#(Initializes the local properties of the surface S for the new surface.)#"  , py::arg("S"))
        .def("SetParameters",
             (void (BRepLProp_SLProps::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepLProp_SLProps::*)( const Standard_Real ,  const Standard_Real  ) >(&BRepLProp_SLProps::SetParameters),
             R"#(Initializes the local properties of the surface S for the new parameter values (<U>, <V>).)#"  , py::arg("U"),  py::arg("V"))
        .def("Value",
             (const gp_Pnt & (BRepLProp_SLProps::*)() const) static_cast<const gp_Pnt & (BRepLProp_SLProps::*)() const>(&BRepLProp_SLProps::Value),
             R"#(Returns the point.)#" )
        .def("D1U",
             (const gp_Vec & (BRepLProp_SLProps::*)() ) static_cast<const gp_Vec & (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::D1U),
             R"#(Returns the first U derivative. The derivative is computed if it has not been yet.)#" )
        .def("D1V",
             (const gp_Vec & (BRepLProp_SLProps::*)() ) static_cast<const gp_Vec & (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::D1V),
             R"#(Returns the first V derivative. The derivative is computed if it has not been yet.)#" )
        .def("D2U",
             (const gp_Vec & (BRepLProp_SLProps::*)() ) static_cast<const gp_Vec & (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::D2U),
             R"#(Returns the second U derivatives The derivative is computed if it has not been yet.)#" )
        .def("D2V",
             (const gp_Vec & (BRepLProp_SLProps::*)() ) static_cast<const gp_Vec & (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::D2V),
             R"#(Returns the second V derivative. The derivative is computed if it has not been yet.)#" )
        .def("DUV",
             (const gp_Vec & (BRepLProp_SLProps::*)() ) static_cast<const gp_Vec & (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::DUV),
             R"#(Returns the second UV cross-derivative. The derivative is computed if it has not been yet.)#" )
        .def("IsTangentUDefined",
             (Standard_Boolean (BRepLProp_SLProps::*)() ) static_cast<Standard_Boolean (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::IsTangentUDefined),
             R"#(returns True if the U tangent is defined. For example, the tangent is not defined if the two first U derivatives are null.)#" )
        .def("TangentU",
             (void (BRepLProp_SLProps::*)( gp_Dir &  ) ) static_cast<void (BRepLProp_SLProps::*)( gp_Dir &  ) >(&BRepLProp_SLProps::TangentU),
             R"#(Returns the tangent direction <D> on the iso-V.)#"  , py::arg("D"))
        .def("IsTangentVDefined",
             (Standard_Boolean (BRepLProp_SLProps::*)() ) static_cast<Standard_Boolean (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::IsTangentVDefined),
             R"#(returns if the V tangent is defined. For example, the tangent is not defined if the two first V derivatives are null.)#" )
        .def("TangentV",
             (void (BRepLProp_SLProps::*)( gp_Dir &  ) ) static_cast<void (BRepLProp_SLProps::*)( gp_Dir &  ) >(&BRepLProp_SLProps::TangentV),
             R"#(Returns the tangent direction <D> on the iso-V.)#"  , py::arg("D"))
        .def("IsNormalDefined",
             (Standard_Boolean (BRepLProp_SLProps::*)() ) static_cast<Standard_Boolean (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::IsNormalDefined),
             R"#(Tells if the normal is defined.)#" )
        .def("Normal",
             (const gp_Dir & (BRepLProp_SLProps::*)() ) static_cast<const gp_Dir & (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::Normal),
             R"#(Returns the normal direction.)#" )
        .def("IsCurvatureDefined",
             (Standard_Boolean (BRepLProp_SLProps::*)() ) static_cast<Standard_Boolean (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::IsCurvatureDefined),
             R"#(returns True if the curvature is defined.)#" )
        .def("IsUmbilic",
             (Standard_Boolean (BRepLProp_SLProps::*)() ) static_cast<Standard_Boolean (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::IsUmbilic),
             R"#(returns True if the point is umbilic (i.e. if the curvature is constant).)#" )
        .def("MaxCurvature",
             (Standard_Real (BRepLProp_SLProps::*)() ) static_cast<Standard_Real (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::MaxCurvature),
             R"#(Returns the maximum curvature)#" )
        .def("MinCurvature",
             (Standard_Real (BRepLProp_SLProps::*)() ) static_cast<Standard_Real (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::MinCurvature),
             R"#(Returns the minimum curvature)#" )
        .def("CurvatureDirections",
             (void (BRepLProp_SLProps::*)( gp_Dir & ,  gp_Dir &  ) ) static_cast<void (BRepLProp_SLProps::*)( gp_Dir & ,  gp_Dir &  ) >(&BRepLProp_SLProps::CurvatureDirections),
             R"#(Returns the direction of the maximum and minimum curvature <MaxD> and <MinD>)#"  , py::arg("MaxD"),  py::arg("MinD"))
        .def("MeanCurvature",
             (Standard_Real (BRepLProp_SLProps::*)() ) static_cast<Standard_Real (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::MeanCurvature),
             R"#(Returns the mean curvature.)#" )
        .def("GaussianCurvature",
             (Standard_Real (BRepLProp_SLProps::*)() ) static_cast<Standard_Real (BRepLProp_SLProps::*)() >(&BRepLProp_SLProps::GaussianCurvature),
             R"#(Returns the Gaussian curvature)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<BRepLProp_SurfaceTool , shared_ptr<BRepLProp_SurfaceTool>>(m,"BRepLProp_SurfaceTool");

    static_cast<py::class_<BRepLProp_SurfaceTool , shared_ptr<BRepLProp_SurfaceTool>  >>(m.attr("BRepLProp_SurfaceTool"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Value_s",
                    (void (*)( const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) ) static_cast<void (*)( const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) >(&BRepLProp_SurfaceTool::Value),
                    R"#(Computes the point <P> of parameter <U> and <V> on the Surface <S>.)#"  , py::arg("S"),  py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&BRepLProp_SurfaceTool::D1),
                    R"#(Computes the point <P> and first derivative <D1*> of parameter <U> and <V> on the Surface <S>.)#"  , py::arg("S"),  py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def_static("D2_s",
                    (void (*)( const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&BRepLProp_SurfaceTool::D2),
                    R"#(Computes the point <P>, the first derivative <D1*> and second derivative <D2*> of parameter <U> and <V> on the Surface <S>.)#"  , py::arg("S"),  py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("DUV"))
        .def_static("DN_s",
                    (gp_Vec (*)( const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) >(&BRepLProp_SurfaceTool::DN),
                    R"#(None)#"  , py::arg("S"),  py::arg("U"),  py::arg("V"),  py::arg("IU"),  py::arg("IV"))
        .def_static("Continuity_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface &  ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface &  ) >(&BRepLProp_SurfaceTool::Continuity),
                    R"#(returns the order of continuity of the Surface <S>. returns 1 : first derivative only is computable returns 2 : first and second derivative only are computable.)#"  , py::arg("S"))
    // static methods using call by reference i.s.o. return
        .def_static("Bounds_s",
                    []( const BRepAdaptor_Surface & S ){ Standard_Real  U1; Standard_Real  V1; Standard_Real  U2; Standard_Real  V2; BRepLProp_SurfaceTool::Bounds(S,U1,V1,U2,V2); return std::make_tuple(U1,V1,U2,V2); },
                    R"#(returns the bounds of the Surface.)#"  , py::arg("S"))
    // operators
    // Additional methods
;

// functions
// ./opencascade/BRepLProp.hxx
// ./opencascade/BRepLProp_SLProps.hxx
// ./opencascade/BRepLProp_CLProps.hxx
// ./opencascade/BRepLProp_SurfaceTool.hxx
// ./opencascade/BRepLProp_CurveTool.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <LProp3d_SurfaceTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <LProp3d_CurveTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>

// module includes
#include <LProp3d_CLProps.hxx>
#include <LProp3d_CurveTool.hxx>
#include <LProp3d_SLProps.hxx>
#include <LProp3d_SurfaceTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_LProp3d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("LProp3d"));


//Python trampoline classes

// classes


    static_cast<py::class_<LProp3d_CLProps , shared_ptr<LProp3d_CLProps> >>(m.attr("LProp3d_CLProps"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const Standard_Integer,const Standard_Real >()  , py::arg("C"),  py::arg("N"),  py::arg("Resolution") )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("C"),  py::arg("U"),  py::arg("N"),  py::arg("Resolution") )
        .def(py::init< const Standard_Integer,const Standard_Real >()  , py::arg("N"),  py::arg("Resolution") )
    // custom constructors
    // methods
        .def("SetParameter",
             (void (LProp3d_CLProps::*)( const Standard_Real ) ) static_cast<void (LProp3d_CLProps::*)( const Standard_Real ) >(&LProp3d_CLProps::SetParameter),
             R"#(Initializes the local properties of the curve for the parameter value <U>.)#"  , py::arg("U"))
        .def("SetCurve",
             (void (LProp3d_CLProps::*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<void (LProp3d_CLProps::*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&LProp3d_CLProps::SetCurve),
             R"#(Initializes the local properties of the curve for the new curve.)#"  , py::arg("C"))
        .def("Value",
             (const gp_Pnt & (LProp3d_CLProps::*)() const) static_cast<const gp_Pnt & (LProp3d_CLProps::*)() const>(&LProp3d_CLProps::Value),
             R"#(Returns the Point.)#" )
        .def("D1",
             (const gp_Vec & (LProp3d_CLProps::*)() ) static_cast<const gp_Vec & (LProp3d_CLProps::*)() >(&LProp3d_CLProps::D1),
             R"#(Returns the first derivative. The derivative is computed if it has not been yet.)#" )
        .def("D2",
             (const gp_Vec & (LProp3d_CLProps::*)() ) static_cast<const gp_Vec & (LProp3d_CLProps::*)() >(&LProp3d_CLProps::D2),
             R"#(Returns the second derivative. The derivative is computed if it has not been yet.)#" )
        .def("D3",
             (const gp_Vec & (LProp3d_CLProps::*)() ) static_cast<const gp_Vec & (LProp3d_CLProps::*)() >(&LProp3d_CLProps::D3),
             R"#(Returns the third derivative. The derivative is computed if it has not been yet.)#" )
        .def("IsTangentDefined",
             (Standard_Boolean (LProp3d_CLProps::*)() ) static_cast<Standard_Boolean (LProp3d_CLProps::*)() >(&LProp3d_CLProps::IsTangentDefined),
             R"#(Returns True if the tangent is defined. For example, the tangent is not defined if the three first derivatives are all null.)#" )
        .def("Tangent",
             (void (LProp3d_CLProps::*)( gp_Dir & ) ) static_cast<void (LProp3d_CLProps::*)( gp_Dir & ) >(&LProp3d_CLProps::Tangent),
             R"#(output the tangent direction <D>)#"  , py::arg("D"))
        .def("Curvature",
             (Standard_Real (LProp3d_CLProps::*)() ) static_cast<Standard_Real (LProp3d_CLProps::*)() >(&LProp3d_CLProps::Curvature),
             R"#(Returns the curvature.)#" )
        .def("Normal",
             (void (LProp3d_CLProps::*)( gp_Dir & ) ) static_cast<void (LProp3d_CLProps::*)( gp_Dir & ) >(&LProp3d_CLProps::Normal),
             R"#(Returns the normal direction <N>.)#"  , py::arg("N"))
        .def("CentreOfCurvature",
             (void (LProp3d_CLProps::*)( gp_Pnt & ) ) static_cast<void (LProp3d_CLProps::*)( gp_Pnt & ) >(&LProp3d_CLProps::CentreOfCurvature),
             R"#(Returns the centre of curvature <P>.)#"  , py::arg("P"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<LProp3d_CurveTool , shared_ptr<LProp3d_CurveTool>>(m,"LProp3d_CurveTool");

    static_cast<py::class_<LProp3d_CurveTool , shared_ptr<LProp3d_CurveTool> >>(m.attr("LProp3d_CurveTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Value_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & ) >(&LProp3d_CurveTool::Value),
                    R"#(Computes the point <P> of parameter <U> on the HCurve <C>.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & ) >(&LProp3d_CurveTool::D1),
                    R"#(Computes the point <P> and first derivative <V1> of parameter <U> on the HCurve <C>.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def_static("D2_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&LProp3d_CurveTool::D2),
                    R"#(Computes the point <P>, the first derivative <V1> and second derivative <V2> of parameter <U> on the HCurve <C>.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&LProp3d_CurveTool::D3),
                    R"#(Computes the point <P>, the first derivative <V1>, the second derivative <V2> and third derivative <V3> of parameter <U> on the HCurve <C>.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("Continuity_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&LProp3d_CurveTool::Continuity),
                    R"#(returns the order of continuity of the HCurve <C>. returns 1 : first derivative only is computable returns 2 : first and second derivative only are computable. returns 3 : first, second and third are computable.)#"  , py::arg("C"))
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&LProp3d_CurveTool::FirstParameter),
                    R"#(returns the first parameter bound of the HCurve.)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&LProp3d_CurveTool::LastParameter),
                    R"#(returns the last parameter bound of the HCurve. FirstParameter must be less than LastParamenter.)#"  , py::arg("C"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LProp3d_SLProps , shared_ptr<LProp3d_SLProps> >>(m.attr("LProp3d_SLProps"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("S"),  py::arg("U"),  py::arg("V"),  py::arg("N"),  py::arg("Resolution") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Integer,const Standard_Real >()  , py::arg("S"),  py::arg("N"),  py::arg("Resolution") )
        .def(py::init< const Standard_Integer,const Standard_Real >()  , py::arg("N"),  py::arg("Resolution") )
    // custom constructors
    // methods
        .def("SetSurface",
             (void (LProp3d_SLProps::*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<void (LProp3d_SLProps::*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&LProp3d_SLProps::SetSurface),
             R"#(Initializes the local properties of the surface S for the new surface.)#"  , py::arg("S"))
        .def("SetParameters",
             (void (LProp3d_SLProps::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (LProp3d_SLProps::*)( const Standard_Real , const Standard_Real ) >(&LProp3d_SLProps::SetParameters),
             R"#(Initializes the local properties of the surface S for the new parameter values (<U>, <V>).)#"  , py::arg("U"),  py::arg("V"))
        .def("Value",
             (const gp_Pnt & (LProp3d_SLProps::*)() const) static_cast<const gp_Pnt & (LProp3d_SLProps::*)() const>(&LProp3d_SLProps::Value),
             R"#(Returns the point.)#" )
        .def("D1U",
             (const gp_Vec & (LProp3d_SLProps::*)() ) static_cast<const gp_Vec & (LProp3d_SLProps::*)() >(&LProp3d_SLProps::D1U),
             R"#(Returns the first U derivative. The derivative is computed if it has not been yet.)#" )
        .def("D1V",
             (const gp_Vec & (LProp3d_SLProps::*)() ) static_cast<const gp_Vec & (LProp3d_SLProps::*)() >(&LProp3d_SLProps::D1V),
             R"#(Returns the first V derivative. The derivative is computed if it has not been yet.)#" )
        .def("D2U",
             (const gp_Vec & (LProp3d_SLProps::*)() ) static_cast<const gp_Vec & (LProp3d_SLProps::*)() >(&LProp3d_SLProps::D2U),
             R"#(Returns the second U derivatives The derivative is computed if it has not been yet.)#" )
        .def("D2V",
             (const gp_Vec & (LProp3d_SLProps::*)() ) static_cast<const gp_Vec & (LProp3d_SLProps::*)() >(&LProp3d_SLProps::D2V),
             R"#(Returns the second V derivative. The derivative is computed if it has not been yet.)#" )
        .def("DUV",
             (const gp_Vec & (LProp3d_SLProps::*)() ) static_cast<const gp_Vec & (LProp3d_SLProps::*)() >(&LProp3d_SLProps::DUV),
             R"#(Returns the second UV cross-derivative. The derivative is computed if it has not been yet.)#" )
        .def("IsTangentUDefined",
             (Standard_Boolean (LProp3d_SLProps::*)() ) static_cast<Standard_Boolean (LProp3d_SLProps::*)() >(&LProp3d_SLProps::IsTangentUDefined),
             R"#(returns True if the U tangent is defined. For example, the tangent is not defined if the two first U derivatives are null.)#" )
        .def("TangentU",
             (void (LProp3d_SLProps::*)( gp_Dir & ) ) static_cast<void (LProp3d_SLProps::*)( gp_Dir & ) >(&LProp3d_SLProps::TangentU),
             R"#(Returns the tangent direction <D> on the iso-V.)#"  , py::arg("D"))
        .def("IsTangentVDefined",
             (Standard_Boolean (LProp3d_SLProps::*)() ) static_cast<Standard_Boolean (LProp3d_SLProps::*)() >(&LProp3d_SLProps::IsTangentVDefined),
             R"#(returns if the V tangent is defined. For example, the tangent is not defined if the two first V derivatives are null.)#" )
        .def("TangentV",
             (void (LProp3d_SLProps::*)( gp_Dir & ) ) static_cast<void (LProp3d_SLProps::*)( gp_Dir & ) >(&LProp3d_SLProps::TangentV),
             R"#(Returns the tangent direction <D> on the iso-V.)#"  , py::arg("D"))
        .def("IsNormalDefined",
             (Standard_Boolean (LProp3d_SLProps::*)() ) static_cast<Standard_Boolean (LProp3d_SLProps::*)() >(&LProp3d_SLProps::IsNormalDefined),
             R"#(Tells if the normal is defined.)#" )
        .def("Normal",
             (const gp_Dir & (LProp3d_SLProps::*)() ) static_cast<const gp_Dir & (LProp3d_SLProps::*)() >(&LProp3d_SLProps::Normal),
             R"#(Returns the normal direction.)#" )
        .def("IsCurvatureDefined",
             (Standard_Boolean (LProp3d_SLProps::*)() ) static_cast<Standard_Boolean (LProp3d_SLProps::*)() >(&LProp3d_SLProps::IsCurvatureDefined),
             R"#(returns True if the curvature is defined.)#" )
        .def("IsUmbilic",
             (Standard_Boolean (LProp3d_SLProps::*)() ) static_cast<Standard_Boolean (LProp3d_SLProps::*)() >(&LProp3d_SLProps::IsUmbilic),
             R"#(returns True if the point is umbilic (i.e. if the curvature is constant).)#" )
        .def("MaxCurvature",
             (Standard_Real (LProp3d_SLProps::*)() ) static_cast<Standard_Real (LProp3d_SLProps::*)() >(&LProp3d_SLProps::MaxCurvature),
             R"#(Returns the maximum curvature)#" )
        .def("MinCurvature",
             (Standard_Real (LProp3d_SLProps::*)() ) static_cast<Standard_Real (LProp3d_SLProps::*)() >(&LProp3d_SLProps::MinCurvature),
             R"#(Returns the minimum curvature)#" )
        .def("CurvatureDirections",
             (void (LProp3d_SLProps::*)( gp_Dir & , gp_Dir & ) ) static_cast<void (LProp3d_SLProps::*)( gp_Dir & , gp_Dir & ) >(&LProp3d_SLProps::CurvatureDirections),
             R"#(Returns the direction of the maximum and minimum curvature <MaxD> and <MinD>)#"  , py::arg("MaxD"),  py::arg("MinD"))
        .def("MeanCurvature",
             (Standard_Real (LProp3d_SLProps::*)() ) static_cast<Standard_Real (LProp3d_SLProps::*)() >(&LProp3d_SLProps::MeanCurvature),
             R"#(Returns the mean curvature.)#" )
        .def("GaussianCurvature",
             (Standard_Real (LProp3d_SLProps::*)() ) static_cast<Standard_Real (LProp3d_SLProps::*)() >(&LProp3d_SLProps::GaussianCurvature),
             R"#(Returns the Gaussian curvature)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<LProp3d_SurfaceTool , shared_ptr<LProp3d_SurfaceTool>>(m,"LProp3d_SurfaceTool");

    static_cast<py::class_<LProp3d_SurfaceTool , shared_ptr<LProp3d_SurfaceTool> >>(m.attr("LProp3d_SurfaceTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Value_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real , gp_Pnt & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real , gp_Pnt & ) >(&LProp3d_SurfaceTool::Value),
                    R"#(Computes the point <P> of parameter <U> and <V> on the HSurface <S>.)#"  , py::arg("S"),  py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&LProp3d_SurfaceTool::D1),
                    R"#(Computes the point <P> and first derivative <D1*> of parameter <U> and <V> on the HSurface <S>.)#"  , py::arg("S"),  py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def_static("D2_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&LProp3d_SurfaceTool::D2),
                    R"#(Computes the point <P>, the first derivative <D1*> and second derivative <D2*> of parameter <U> and <V> on the HSurface <S>.)#"  , py::arg("S"),  py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("DUV"))
        .def_static("DN_s",
                    (gp_Vec (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) ) static_cast<gp_Vec (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) >(&LProp3d_SurfaceTool::DN),
                    R"#(None)#"  , py::arg("S"),  py::arg("U"),  py::arg("V"),  py::arg("IU"),  py::arg("IV"))
        .def_static("Continuity_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&LProp3d_SurfaceTool::Continuity),
                    R"#(returns the order of continuity of the HSurface <S>. returns 1 : first derivative only is computable returns 2 : first and second derivative only are computable.)#"  , py::arg("S"))
    // static methods using call by reference i.s.o. return
        .def_static("Bounds_s",
                    []( const opencascade::handle<Adaptor3d_HSurface> & S ){ Standard_Real  U1; Standard_Real  V1; Standard_Real  U2; Standard_Real  V2; LProp3d_SurfaceTool::Bounds(S,U1,V1,U2,V2); return std::make_tuple(U1,V1,U2,V2); },
                    R"#(returns the bounds of the HSurface.)#"  , py::arg("S"))
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/LProp3d_SLProps.hxx
// ./opencascade/LProp3d_CurveTool.hxx
// ./opencascade/LProp3d_CLProps.hxx
// ./opencascade/LProp3d_SurfaceTool.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

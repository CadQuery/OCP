
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec.hxx>
#include <BlendFunc_ConstRad.hxx>
#include <BlendFunc_ConstRadInv.hxx>
#include <BlendFunc_Ruled.hxx>
#include <BlendFunc_RuledInv.hxx>
#include <BlendFunc_EvolRad.hxx>
#include <BlendFunc_EvolRadInv.hxx>
#include <BlendFunc_CSConstRad.hxx>
#include <BlendFunc_CSCircular.hxx>
#include <BlendFunc_Corde.hxx>
#include <BlendFunc_Chamfer.hxx>
#include <BlendFunc_ChamfInv.hxx>
#include <BlendFunc_ChAsym.hxx>
#include <BlendFunc_ChAsymInv.hxx>
#include <BlendFunc_Tensor.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <gp_Ax1.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <gp_Ax1.hxx>

// module includes
#include <BlendFunc.hxx>
#include <BlendFunc_Chamfer.hxx>
#include <BlendFunc_ChamfInv.hxx>
#include <BlendFunc_ChAsym.hxx>
#include <BlendFunc_ChAsymInv.hxx>
#include <BlendFunc_ConstRad.hxx>
#include <BlendFunc_ConstRadInv.hxx>
#include <BlendFunc_Corde.hxx>
#include <BlendFunc_CSCircular.hxx>
#include <BlendFunc_CSConstRad.hxx>
#include <BlendFunc_EvolRad.hxx>
#include <BlendFunc_EvolRadInv.hxx>
#include <BlendFunc_Ruled.hxx>
#include <BlendFunc_RuledInv.hxx>
#include <BlendFunc_SectionShape.hxx>
#include <BlendFunc_Tensor.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BlendFunc(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BlendFunc"));


//Python trampoline classes

// classes

    register_default_constructor<BlendFunc ,std::unique_ptr<BlendFunc>>(m,"BlendFunc");

    static_cast<py::class_<BlendFunc ,std::unique_ptr<BlendFunc>  >>(m.attr("BlendFunc"))
        .def_static("GetShape_s",
                    (void (*)( const BlendFunc_SectionShape ,  const Standard_Real ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Convert_ParameterisationType &  ) ) static_cast<void (*)( const BlendFunc_SectionShape ,  const Standard_Real ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Convert_ParameterisationType &  ) >(&BlendFunc::GetShape),
                    R"#(None)#"  , py::arg("SectShape"),  py::arg("MaxAng"),  py::arg("NbPoles"),  py::arg("NbKnots"),  py::arg("Degree"),  py::arg("TypeConv"))
        .def_static("GetMinimalWeights_s",
                    (void (*)( const BlendFunc_SectionShape ,  const Convert_ParameterisationType ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (*)( const BlendFunc_SectionShape ,  const Convert_ParameterisationType ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc::GetMinimalWeights),
                    R"#(None)#"  , py::arg("SectShape"),  py::arg("TConv"),  py::arg("AngleMin"),  py::arg("AngleMax"),  py::arg("Weigths"))
        .def_static("NextShape_s",
                    (GeomAbs_Shape (*)( const GeomAbs_Shape  ) ) static_cast<GeomAbs_Shape (*)( const GeomAbs_Shape  ) >(&BlendFunc::NextShape),
                    R"#(Used to obtain the next level of continuity.)#"  , py::arg("S"))
        .def_static("ComputeNormal_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const gp_Pnt2d & ,  gp_Vec &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const gp_Pnt2d & ,  gp_Vec &  ) >(&BlendFunc::ComputeNormal),
                    R"#(None)#"  , py::arg("Surf"),  py::arg("p2d"),  py::arg("Normal"))
        .def_static("ComputeDNormal_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const gp_Pnt2d & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const gp_Pnt2d & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&BlendFunc::ComputeDNormal),
                    R"#(None)#"  , py::arg("Surf"),  py::arg("p2d"),  py::arg("Normal"),  py::arg("DNu"),  py::arg("DNv"))
;


    static_cast<py::class_<BlendFunc_Ruled ,std::unique_ptr<BlendFunc_Ruled>  , Blend_Function >>(m.attr("BlendFunc_Ruled"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
        .def("NbEquations",
             (Standard_Integer (BlendFunc_Ruled::*)() const) static_cast<Standard_Integer (BlendFunc_Ruled::*)() const>(&BlendFunc_Ruled::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (BlendFunc_Ruled::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_Ruled::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_Ruled::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_Ruled::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_Ruled::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_Ruled::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BlendFunc_Ruled::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_Ruled::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_Ruled::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_Ruled::*)( const Standard_Real  ) ) static_cast<void (BlendFunc_Ruled::*)( const Standard_Real  ) >(&BlendFunc_Ruled::Set),
             R"#(None)#"  , py::arg("Param"))
        .def("Set",
             (void (BlendFunc_Ruled::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BlendFunc_Ruled::*)( const Standard_Real ,  const Standard_Real  ) >(&BlendFunc_Ruled::Set),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (BlendFunc_Ruled::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_Ruled::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_Ruled::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_Ruled::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_Ruled::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_Ruled::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_Ruled::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_Ruled::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_Ruled::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("GetMinimalDistance",
             (Standard_Real (BlendFunc_Ruled::*)() const) static_cast<Standard_Real (BlendFunc_Ruled::*)() const>(&BlendFunc_Ruled::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("PointOnS1",
             (const gp_Pnt & (BlendFunc_Ruled::*)() const) static_cast<const gp_Pnt & (BlendFunc_Ruled::*)() const>(&BlendFunc_Ruled::PointOnS1),
             R"#(None)#" )
        .def("PointOnS2",
             (const gp_Pnt & (BlendFunc_Ruled::*)() const) static_cast<const gp_Pnt & (BlendFunc_Ruled::*)() const>(&BlendFunc_Ruled::PointOnS2),
             R"#(None)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (BlendFunc_Ruled::*)() const) static_cast<Standard_Boolean (BlendFunc_Ruled::*)() const>(&BlendFunc_Ruled::IsTangencyPoint),
             R"#(None)#" )
        .def("TangentOnS1",
             (const gp_Vec & (BlendFunc_Ruled::*)() const) static_cast<const gp_Vec & (BlendFunc_Ruled::*)() const>(&BlendFunc_Ruled::TangentOnS1),
             R"#(None)#" )
        .def("Tangent2dOnS1",
             (const gp_Vec2d & (BlendFunc_Ruled::*)() const) static_cast<const gp_Vec2d & (BlendFunc_Ruled::*)() const>(&BlendFunc_Ruled::Tangent2dOnS1),
             R"#(None)#" )
        .def("TangentOnS2",
             (const gp_Vec & (BlendFunc_Ruled::*)() const) static_cast<const gp_Vec & (BlendFunc_Ruled::*)() const>(&BlendFunc_Ruled::TangentOnS2),
             R"#(None)#" )
        .def("Tangent2dOnS2",
             (const gp_Vec2d & (BlendFunc_Ruled::*)() const) static_cast<const gp_Vec2d & (BlendFunc_Ruled::*)() const>(&BlendFunc_Ruled::Tangent2dOnS2),
             R"#(None)#" )
        .def("Tangent",
             (void (BlendFunc_Ruled::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BlendFunc_Ruled::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&BlendFunc_Ruled::Tangent),
             R"#(Returns the tangent vector at the section, at the beginning and the end of the section, and returns the normal (of the surfaces) at these points.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("TgFirst"),  py::arg("TgLast"),  py::arg("NormFirst"),  py::arg("NormLast"))
        .def("GetSection",
             (Standard_Boolean (BlendFunc_Ruled::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> &  ) ) static_cast<Standard_Boolean (BlendFunc_Ruled::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> &  ) >(&BlendFunc_Ruled::GetSection),
             R"#(None)#"  , py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("tabP"),  py::arg("tabV"))
        .def("IsRational",
             (Standard_Boolean (BlendFunc_Ruled::*)() const) static_cast<Standard_Boolean (BlendFunc_Ruled::*)() const>(&BlendFunc_Ruled::IsRational),
             R"#(Returns False)#" )
        .def("GetSectionSize",
             (Standard_Real (BlendFunc_Ruled::*)() const) static_cast<Standard_Real (BlendFunc_Ruled::*)() const>(&BlendFunc_Ruled::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (BlendFunc_Ruled::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (BlendFunc_Ruled::*)( NCollection_Array1<Standard_Real> &  ) const>(&BlendFunc_Ruled::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (BlendFunc_Ruled::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BlendFunc_Ruled::*)( const GeomAbs_Shape  ) const>(&BlendFunc_Ruled::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BlendFunc_Ruled::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (BlendFunc_Ruled::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&BlendFunc_Ruled::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetShape",
             (void (BlendFunc_Ruled::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<void (BlendFunc_Ruled::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) >(&BlendFunc_Ruled::GetShape),
             R"#(None)#"  , py::arg("NbPoles"),  py::arg("NbKnots"),  py::arg("Degree"),  py::arg("NbPoles2d"))
        .def("GetTolerance",
             (void (BlendFunc_Ruled::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_Ruled::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const>(&BlendFunc_Ruled::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (BlendFunc_Ruled::*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_Ruled::*)( NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_Ruled::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (BlendFunc_Ruled::*)( NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (BlendFunc_Ruled::*)( NCollection_Array1<Standard_Integer> &  ) >(&BlendFunc_Ruled::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (BlendFunc_Ruled::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_Ruled::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_Ruled::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Section",
             (Standard_Boolean (BlendFunc_Ruled::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_Ruled::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_Ruled::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (void (BlendFunc_Ruled::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_Ruled::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_Ruled::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("AxeRot",
             (gp_Ax1 (BlendFunc_Ruled::*)( const Standard_Real  ) ) static_cast<gp_Ax1 (BlendFunc_Ruled::*)( const Standard_Real  ) >(&BlendFunc_Ruled::AxeRot),
             R"#(None)#"  , py::arg("Prm"))
        .def("Resolution",
             (void (BlendFunc_Ruled::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BlendFunc_Ruled::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const>(&BlendFunc_Ruled::Resolution),
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"),  py::arg("TolU"),  py::arg("TolV"))
;


    static_cast<py::class_<BlendFunc_ChamfInv ,std::unique_ptr<BlendFunc_ChamfInv>  , Blend_FuncInv >>(m.attr("BlendFunc_ChamfInv"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
        .def("Set",
             (void (BlendFunc_ChamfInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (BlendFunc_ChamfInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&BlendFunc_ChamfInv::Set),
             R"#(None)#"  , py::arg("OnFirst"),  py::arg("COnSurf"))
        .def("GetTolerance",
             (void (BlendFunc_ChamfInv::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_ChamfInv::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_ChamfInv::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_ChamfInv::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_ChamfInv::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_ChamfInv::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_ChamfInv::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("NbEquations",
             (Standard_Integer (BlendFunc_ChamfInv::*)() const) static_cast<Standard_Integer (BlendFunc_ChamfInv::*)() const>(&BlendFunc_ChamfInv::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_ChamfInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ChamfInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ChamfInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_ChamfInv::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_ChamfInv::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_ChamfInv::Set),
             R"#(None)#"  , py::arg("Dist1"),  py::arg("Dist2"),  py::arg("Choix"))
;


    static_cast<py::class_<BlendFunc_EvolRadInv ,std::unique_ptr<BlendFunc_EvolRadInv>  , Blend_FuncInv >>(m.attr("BlendFunc_EvolRadInv"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Law_Function> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C"),  py::arg("Law") )
        .def("Set",
             (void (BlendFunc_EvolRadInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (BlendFunc_EvolRadInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&BlendFunc_EvolRadInv::Set),
             R"#(None)#"  , py::arg("OnFirst"),  py::arg("COnSurf"))
        .def("GetTolerance",
             (void (BlendFunc_EvolRadInv::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_EvolRadInv::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_EvolRadInv::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_EvolRadInv::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_EvolRadInv::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_EvolRadInv::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_EvolRadInv::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_EvolRadInv::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_EvolRadInv::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("NbEquations",
             (Standard_Integer (BlendFunc_EvolRadInv::*)() const) static_cast<Standard_Integer (BlendFunc_EvolRadInv::*)() const>(&BlendFunc_EvolRadInv::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (BlendFunc_EvolRadInv::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_EvolRadInv::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_EvolRadInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_EvolRadInv::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_EvolRadInv::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_EvolRadInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BlendFunc_EvolRadInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_EvolRadInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_EvolRadInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_EvolRadInv::*)( const Standard_Integer  ) ) static_cast<void (BlendFunc_EvolRadInv::*)( const Standard_Integer  ) >(&BlendFunc_EvolRadInv::Set),
             R"#(None)#"  , py::arg("Choix"))
;


    static_cast<py::class_<BlendFunc_CSCircular ,std::unique_ptr<BlendFunc_CSCircular>  , Blend_CSFunction >>(m.attr("BlendFunc_CSCircular"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Law_Function> & >()  , py::arg("S"),  py::arg("C"),  py::arg("CGuide"),  py::arg("L") )
        .def("NbVariables",
             (Standard_Integer (BlendFunc_CSCircular::*)() const) static_cast<Standard_Integer (BlendFunc_CSCircular::*)() const>(&BlendFunc_CSCircular::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (BlendFunc_CSCircular::*)() const) static_cast<Standard_Integer (BlendFunc_CSCircular::*)() const>(&BlendFunc_CSCircular::NbEquations),
             R"#(returns the number of equations of the function (3).)#" )
        .def("Value",
             (Standard_Boolean (BlendFunc_CSCircular::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_CSCircular::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_CSCircular::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_CSCircular::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_CSCircular::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_CSCircular::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BlendFunc_CSCircular::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_CSCircular::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_CSCircular::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_CSCircular::*)( const Standard_Real  ) ) static_cast<void (BlendFunc_CSCircular::*)( const Standard_Real  ) >(&BlendFunc_CSCircular::Set),
             R"#(None)#"  , py::arg("Param"))
        .def("Set",
             (void (BlendFunc_CSCircular::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BlendFunc_CSCircular::*)( const Standard_Real ,  const Standard_Real  ) >(&BlendFunc_CSCircular::Set),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (BlendFunc_CSCircular::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_CSCircular::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_CSCircular::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_CSCircular::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_CSCircular::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_CSCircular::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_CSCircular::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_CSCircular::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_CSCircular::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("PointOnS",
             (const gp_Pnt & (BlendFunc_CSCircular::*)() const) static_cast<const gp_Pnt & (BlendFunc_CSCircular::*)() const>(&BlendFunc_CSCircular::PointOnS),
             R"#(None)#" )
        .def("PointOnC",
             (const gp_Pnt & (BlendFunc_CSCircular::*)() const) static_cast<const gp_Pnt & (BlendFunc_CSCircular::*)() const>(&BlendFunc_CSCircular::PointOnC),
             R"#(None)#" )
        .def("Pnt2d",
             (const gp_Pnt2d & (BlendFunc_CSCircular::*)() const) static_cast<const gp_Pnt2d & (BlendFunc_CSCircular::*)() const>(&BlendFunc_CSCircular::Pnt2d),
             R"#(Returns U,V coordinates of the point on the surface.)#" )
        .def("ParameterOnC",
             (Standard_Real (BlendFunc_CSCircular::*)() const) static_cast<Standard_Real (BlendFunc_CSCircular::*)() const>(&BlendFunc_CSCircular::ParameterOnC),
             R"#(Returns parameter of the point on the curve.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (BlendFunc_CSCircular::*)() const) static_cast<Standard_Boolean (BlendFunc_CSCircular::*)() const>(&BlendFunc_CSCircular::IsTangencyPoint),
             R"#(None)#" )
        .def("TangentOnS",
             (const gp_Vec & (BlendFunc_CSCircular::*)() const) static_cast<const gp_Vec & (BlendFunc_CSCircular::*)() const>(&BlendFunc_CSCircular::TangentOnS),
             R"#(None)#" )
        .def("Tangent2d",
             (const gp_Vec2d & (BlendFunc_CSCircular::*)() const) static_cast<const gp_Vec2d & (BlendFunc_CSCircular::*)() const>(&BlendFunc_CSCircular::Tangent2d),
             R"#(None)#" )
        .def("TangentOnC",
             (const gp_Vec & (BlendFunc_CSCircular::*)() const) static_cast<const gp_Vec & (BlendFunc_CSCircular::*)() const>(&BlendFunc_CSCircular::TangentOnC),
             R"#(None)#" )
        .def("Tangent",
             (void (BlendFunc_CSCircular::*)( const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BlendFunc_CSCircular::*)( const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec &  ) const>(&BlendFunc_CSCircular::Tangent),
             R"#(Returns the tangent vector at the section, at the beginning and the end of the section, and returns the normal (of the surface) at these points.)#"  , py::arg("U"),  py::arg("V"),  py::arg("TgS"),  py::arg("NormS"))
        .def("Set",
             (void (BlendFunc_CSCircular::*)( const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_CSCircular::*)( const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_CSCircular::Set),
             R"#(None)#"  , py::arg("Radius"),  py::arg("Choix"))
        .def("Set",
             (void (BlendFunc_CSCircular::*)( const BlendFunc_SectionShape  ) ) static_cast<void (BlendFunc_CSCircular::*)( const BlendFunc_SectionShape  ) >(&BlendFunc_CSCircular::Set),
             R"#(Sets the type of section generation for the approximations.)#"  , py::arg("TypeSection"))
        .def("Section",
             (void (BlendFunc_CSCircular::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  gp_Circ &  ) ) static_cast<void (BlendFunc_CSCircular::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  gp_Circ &  ) >(&BlendFunc_CSCircular::Section),
             R"#(None)#"  , py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("W"),  py::arg("Pdeb"),  py::arg("Pfin"),  py::arg("C"))
        .def("Section",
             (Standard_Boolean (BlendFunc_CSCircular::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_CSCircular::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_CSCircular::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("GetSection",
             (Standard_Boolean (BlendFunc_CSCircular::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> &  ) ) static_cast<Standard_Boolean (BlendFunc_CSCircular::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> &  ) >(&BlendFunc_CSCircular::GetSection),
             R"#(None)#"  , py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("W"),  py::arg("tabP"),  py::arg("tabV"))
        .def("IsRational",
             (Standard_Boolean (BlendFunc_CSCircular::*)() const) static_cast<Standard_Boolean (BlendFunc_CSCircular::*)() const>(&BlendFunc_CSCircular::IsRational),
             R"#(Returns if the section is rationnal)#" )
        .def("GetSectionSize",
             (Standard_Real (BlendFunc_CSCircular::*)() const) static_cast<Standard_Real (BlendFunc_CSCircular::*)() const>(&BlendFunc_CSCircular::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (BlendFunc_CSCircular::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (BlendFunc_CSCircular::*)( NCollection_Array1<Standard_Real> &  ) const>(&BlendFunc_CSCircular::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (BlendFunc_CSCircular::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BlendFunc_CSCircular::*)( const GeomAbs_Shape  ) const>(&BlendFunc_CSCircular::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BlendFunc_CSCircular::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (BlendFunc_CSCircular::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&BlendFunc_CSCircular::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetShape",
             (void (BlendFunc_CSCircular::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<void (BlendFunc_CSCircular::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) >(&BlendFunc_CSCircular::GetShape),
             R"#(None)#"  , py::arg("NbPoles"),  py::arg("NbKnots"),  py::arg("Degree"),  py::arg("NbPoles2d"))
        .def("GetTolerance",
             (void (BlendFunc_CSCircular::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_CSCircular::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const>(&BlendFunc_CSCircular::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (BlendFunc_CSCircular::*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_CSCircular::*)( NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_CSCircular::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (BlendFunc_CSCircular::*)( NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (BlendFunc_CSCircular::*)( NCollection_Array1<Standard_Integer> &  ) >(&BlendFunc_CSCircular::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (BlendFunc_CSCircular::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_CSCircular::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_CSCircular::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (void (BlendFunc_CSCircular::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_CSCircular::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_CSCircular::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("Resolution",
             (void (BlendFunc_CSCircular::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BlendFunc_CSCircular::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const>(&BlendFunc_CSCircular::Resolution),
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"),  py::arg("TolU"),  py::arg("TolV"))
;


    static_cast<py::class_<BlendFunc_ChAsymInv ,std::unique_ptr<BlendFunc_ChAsymInv>  , Blend_FuncInv >>(m.attr("BlendFunc_ChAsymInv"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
        .def("Set",
             (void (BlendFunc_ChAsymInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (BlendFunc_ChAsymInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&BlendFunc_ChAsymInv::Set),
             R"#(None)#"  , py::arg("OnFirst"),  py::arg("COnSurf"))
        .def("GetTolerance",
             (void (BlendFunc_ChAsymInv::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_ChAsymInv::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_ChAsymInv::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_ChAsymInv::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_ChAsymInv::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_ChAsymInv::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_ChAsymInv::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_ChAsymInv::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_ChAsymInv::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("NbEquations",
             (Standard_Integer (BlendFunc_ChAsymInv::*)() const) static_cast<Standard_Integer (BlendFunc_ChAsymInv::*)() const>(&BlendFunc_ChAsymInv::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("ComputeValues",
             (Standard_Boolean (BlendFunc_ChAsymInv::*)( const math_Vector & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (BlendFunc_ChAsymInv::*)( const math_Vector & ,  const Standard_Integer ,  const Standard_Integer  ) >(&BlendFunc_ChAsymInv::ComputeValues),
             R"#(computes the values <F> of the derivatives for the variable <X> between DegF and DegL. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("DegF"),  py::arg("DegL"))
        .def("Value",
             (Standard_Boolean (BlendFunc_ChAsymInv::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_ChAsymInv::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_ChAsymInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_ChAsymInv::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ChAsymInv::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ChAsymInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BlendFunc_ChAsymInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ChAsymInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ChAsymInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_ChAsymInv::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_ChAsymInv::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_ChAsymInv::Set),
             R"#(None)#"  , py::arg("Dist1"),  py::arg("Angle"),  py::arg("Choix"))
;


    static_cast<py::class_<BlendFunc_RuledInv ,std::unique_ptr<BlendFunc_RuledInv>  , Blend_FuncInv >>(m.attr("BlendFunc_RuledInv"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
        .def("Set",
             (void (BlendFunc_RuledInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (BlendFunc_RuledInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&BlendFunc_RuledInv::Set),
             R"#(None)#"  , py::arg("OnFirst"),  py::arg("COnSurf"))
        .def("GetTolerance",
             (void (BlendFunc_RuledInv::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_RuledInv::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_RuledInv::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_RuledInv::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_RuledInv::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_RuledInv::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_RuledInv::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_RuledInv::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_RuledInv::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("NbEquations",
             (Standard_Integer (BlendFunc_RuledInv::*)() const) static_cast<Standard_Integer (BlendFunc_RuledInv::*)() const>(&BlendFunc_RuledInv::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (BlendFunc_RuledInv::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_RuledInv::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_RuledInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_RuledInv::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_RuledInv::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_RuledInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BlendFunc_RuledInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_RuledInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_RuledInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
;


    static_cast<py::class_<BlendFunc_ConstRad ,std::unique_ptr<BlendFunc_ConstRad>  , Blend_Function >>(m.attr("BlendFunc_ConstRad"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
        .def("NbEquations",
             (Standard_Integer (BlendFunc_ConstRad::*)() const) static_cast<Standard_Integer (BlendFunc_ConstRad::*)() const>(&BlendFunc_ConstRad::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (BlendFunc_ConstRad::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstRad::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_ConstRad::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_ConstRad::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstRad::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ConstRad::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BlendFunc_ConstRad::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstRad::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ConstRad::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_ConstRad::*)( const Standard_Real  ) ) static_cast<void (BlendFunc_ConstRad::*)( const Standard_Real  ) >(&BlendFunc_ConstRad::Set),
             R"#(None)#"  , py::arg("Param"))
        .def("Set",
             (void (BlendFunc_ConstRad::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BlendFunc_ConstRad::*)( const Standard_Real ,  const Standard_Real  ) >(&BlendFunc_ConstRad::Set),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (BlendFunc_ConstRad::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_ConstRad::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_ConstRad::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_ConstRad::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_ConstRad::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_ConstRad::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_ConstRad::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_ConstRad::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_ConstRad::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("GetMinimalDistance",
             (Standard_Real (BlendFunc_ConstRad::*)() const) static_cast<Standard_Real (BlendFunc_ConstRad::*)() const>(&BlendFunc_ConstRad::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("PointOnS1",
             (const gp_Pnt & (BlendFunc_ConstRad::*)() const) static_cast<const gp_Pnt & (BlendFunc_ConstRad::*)() const>(&BlendFunc_ConstRad::PointOnS1),
             R"#(None)#" )
        .def("PointOnS2",
             (const gp_Pnt & (BlendFunc_ConstRad::*)() const) static_cast<const gp_Pnt & (BlendFunc_ConstRad::*)() const>(&BlendFunc_ConstRad::PointOnS2),
             R"#(None)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (BlendFunc_ConstRad::*)() const) static_cast<Standard_Boolean (BlendFunc_ConstRad::*)() const>(&BlendFunc_ConstRad::IsTangencyPoint),
             R"#(None)#" )
        .def("TangentOnS1",
             (const gp_Vec & (BlendFunc_ConstRad::*)() const) static_cast<const gp_Vec & (BlendFunc_ConstRad::*)() const>(&BlendFunc_ConstRad::TangentOnS1),
             R"#(None)#" )
        .def("Tangent2dOnS1",
             (const gp_Vec2d & (BlendFunc_ConstRad::*)() const) static_cast<const gp_Vec2d & (BlendFunc_ConstRad::*)() const>(&BlendFunc_ConstRad::Tangent2dOnS1),
             R"#(None)#" )
        .def("TangentOnS2",
             (const gp_Vec & (BlendFunc_ConstRad::*)() const) static_cast<const gp_Vec & (BlendFunc_ConstRad::*)() const>(&BlendFunc_ConstRad::TangentOnS2),
             R"#(None)#" )
        .def("Tangent2dOnS2",
             (const gp_Vec2d & (BlendFunc_ConstRad::*)() const) static_cast<const gp_Vec2d & (BlendFunc_ConstRad::*)() const>(&BlendFunc_ConstRad::Tangent2dOnS2),
             R"#(None)#" )
        .def("Tangent",
             (void (BlendFunc_ConstRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BlendFunc_ConstRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&BlendFunc_ConstRad::Tangent),
             R"#(Returns the tangent vector at the section, at the beginning and the end of the section, and returns the normal (of the surfaces) at these points.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("TgFirst"),  py::arg("TgLast"),  py::arg("NormFirst"),  py::arg("NormLast"))
        .def("TwistOnS1",
             (Standard_Boolean (BlendFunc_ConstRad::*)() const) static_cast<Standard_Boolean (BlendFunc_ConstRad::*)() const>(&BlendFunc_ConstRad::TwistOnS1),
             R"#(None)#" )
        .def("TwistOnS2",
             (Standard_Boolean (BlendFunc_ConstRad::*)() const) static_cast<Standard_Boolean (BlendFunc_ConstRad::*)() const>(&BlendFunc_ConstRad::TwistOnS2),
             R"#(None)#" )
        .def("Set",
             (void (BlendFunc_ConstRad::*)( const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_ConstRad::*)( const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_ConstRad::Set),
             R"#(Inits the value of radius, and the "quadrant".)#"  , py::arg("Radius"),  py::arg("Choix"))
        .def("Set",
             (void (BlendFunc_ConstRad::*)( const BlendFunc_SectionShape  ) ) static_cast<void (BlendFunc_ConstRad::*)( const BlendFunc_SectionShape  ) >(&BlendFunc_ConstRad::Set),
             R"#(Sets the type of section generation for the approximations.)#"  , py::arg("TypeSection"))
        .def("Section",
             (void (BlendFunc_ConstRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  gp_Circ &  ) ) static_cast<void (BlendFunc_ConstRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  gp_Circ &  ) >(&BlendFunc_ConstRad::Section),
             R"#(Utile pour une visu rapide et approximative de la surface.)#"  , py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("Pdeb"),  py::arg("Pfin"),  py::arg("C"))
        .def("IsRational",
             (Standard_Boolean (BlendFunc_ConstRad::*)() const) static_cast<Standard_Boolean (BlendFunc_ConstRad::*)() const>(&BlendFunc_ConstRad::IsRational),
             R"#(Returns if the section is rationnal)#" )
        .def("GetSectionSize",
             (Standard_Real (BlendFunc_ConstRad::*)() const) static_cast<Standard_Real (BlendFunc_ConstRad::*)() const>(&BlendFunc_ConstRad::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (BlendFunc_ConstRad::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (BlendFunc_ConstRad::*)( NCollection_Array1<Standard_Real> &  ) const>(&BlendFunc_ConstRad::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (BlendFunc_ConstRad::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BlendFunc_ConstRad::*)( const GeomAbs_Shape  ) const>(&BlendFunc_ConstRad::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BlendFunc_ConstRad::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (BlendFunc_ConstRad::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&BlendFunc_ConstRad::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetShape",
             (void (BlendFunc_ConstRad::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<void (BlendFunc_ConstRad::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) >(&BlendFunc_ConstRad::GetShape),
             R"#(None)#"  , py::arg("NbPoles"),  py::arg("NbKnots"),  py::arg("Degree"),  py::arg("NbPoles2d"))
        .def("GetTolerance",
             (void (BlendFunc_ConstRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_ConstRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const>(&BlendFunc_ConstRad::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (BlendFunc_ConstRad::*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_ConstRad::*)( NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_ConstRad::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (BlendFunc_ConstRad::*)( NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (BlendFunc_ConstRad::*)( NCollection_Array1<Standard_Integer> &  ) >(&BlendFunc_ConstRad::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (BlendFunc_ConstRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_ConstRad::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Section",
             (Standard_Boolean (BlendFunc_ConstRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_ConstRad::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (void (BlendFunc_ConstRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_ConstRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_ConstRad::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("AxeRot",
             (gp_Ax1 (BlendFunc_ConstRad::*)( const Standard_Real  ) ) static_cast<gp_Ax1 (BlendFunc_ConstRad::*)( const Standard_Real  ) >(&BlendFunc_ConstRad::AxeRot),
             R"#(None)#"  , py::arg("Prm"))
        .def("Resolution",
             (void (BlendFunc_ConstRad::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BlendFunc_ConstRad::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const>(&BlendFunc_ConstRad::Resolution),
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"),  py::arg("TolU"),  py::arg("TolV"))
;


    static_cast<py::class_<BlendFunc_Chamfer ,std::unique_ptr<BlendFunc_Chamfer>  , Blend_Function >>(m.attr("BlendFunc_Chamfer"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("CG") )
        .def("NbEquations",
             (Standard_Integer (BlendFunc_Chamfer::*)() const) static_cast<Standard_Integer (BlendFunc_Chamfer::*)() const>(&BlendFunc_Chamfer::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_Chamfer::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_Chamfer::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_Chamfer::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_Chamfer::*)( const Standard_Real  ) ) static_cast<void (BlendFunc_Chamfer::*)( const Standard_Real  ) >(&BlendFunc_Chamfer::Set),
             R"#(None)#"  , py::arg("Param"))
        .def("Set",
             (void (BlendFunc_Chamfer::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BlendFunc_Chamfer::*)( const Standard_Real ,  const Standard_Real  ) >(&BlendFunc_Chamfer::Set),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (BlendFunc_Chamfer::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_Chamfer::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_Chamfer::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_Chamfer::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_Chamfer::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_Chamfer::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_Chamfer::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("GetMinimalDistance",
             (Standard_Real (BlendFunc_Chamfer::*)() const) static_cast<Standard_Real (BlendFunc_Chamfer::*)() const>(&BlendFunc_Chamfer::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("PointOnS1",
             (const gp_Pnt & (BlendFunc_Chamfer::*)() const) static_cast<const gp_Pnt & (BlendFunc_Chamfer::*)() const>(&BlendFunc_Chamfer::PointOnS1),
             R"#(None)#" )
        .def("PointOnS2",
             (const gp_Pnt & (BlendFunc_Chamfer::*)() const) static_cast<const gp_Pnt & (BlendFunc_Chamfer::*)() const>(&BlendFunc_Chamfer::PointOnS2),
             R"#(None)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (BlendFunc_Chamfer::*)() const) static_cast<Standard_Boolean (BlendFunc_Chamfer::*)() const>(&BlendFunc_Chamfer::IsTangencyPoint),
             R"#(None)#" )
        .def("TangentOnS1",
             (const gp_Vec & (BlendFunc_Chamfer::*)() const) static_cast<const gp_Vec & (BlendFunc_Chamfer::*)() const>(&BlendFunc_Chamfer::TangentOnS1),
             R"#(None)#" )
        .def("Tangent2dOnS1",
             (const gp_Vec2d & (BlendFunc_Chamfer::*)() const) static_cast<const gp_Vec2d & (BlendFunc_Chamfer::*)() const>(&BlendFunc_Chamfer::Tangent2dOnS1),
             R"#(None)#" )
        .def("TangentOnS2",
             (const gp_Vec & (BlendFunc_Chamfer::*)() const) static_cast<const gp_Vec & (BlendFunc_Chamfer::*)() const>(&BlendFunc_Chamfer::TangentOnS2),
             R"#(None)#" )
        .def("Tangent2dOnS2",
             (const gp_Vec2d & (BlendFunc_Chamfer::*)() const) static_cast<const gp_Vec2d & (BlendFunc_Chamfer::*)() const>(&BlendFunc_Chamfer::Tangent2dOnS2),
             R"#(None)#" )
        .def("Tangent",
             (void (BlendFunc_Chamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BlendFunc_Chamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&BlendFunc_Chamfer::Tangent),
             R"#(Returns the tangent vector at the section, at the beginning and the end of the section, and returns the normal (of the surfaces) at these points.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("TgFirst"),  py::arg("TgLast"),  py::arg("NormFirst"),  py::arg("NormLast"))
        .def("Set",
             (void (BlendFunc_Chamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_Chamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_Chamfer::Set),
             R"#(Sets the distances and the "quadrant".)#"  , py::arg("Dist1"),  py::arg("Dist2"),  py::arg("Choix"))
        .def("IsRational",
             (Standard_Boolean (BlendFunc_Chamfer::*)() const) static_cast<Standard_Boolean (BlendFunc_Chamfer::*)() const>(&BlendFunc_Chamfer::IsRational),
             R"#(Returns False)#" )
        .def("GetSectionSize",
             (Standard_Real (BlendFunc_Chamfer::*)() const) static_cast<Standard_Real (BlendFunc_Chamfer::*)() const>(&BlendFunc_Chamfer::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (BlendFunc_Chamfer::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (BlendFunc_Chamfer::*)( NCollection_Array1<Standard_Real> &  ) const>(&BlendFunc_Chamfer::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (BlendFunc_Chamfer::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BlendFunc_Chamfer::*)( const GeomAbs_Shape  ) const>(&BlendFunc_Chamfer::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BlendFunc_Chamfer::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (BlendFunc_Chamfer::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&BlendFunc_Chamfer::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetShape",
             (void (BlendFunc_Chamfer::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<void (BlendFunc_Chamfer::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) >(&BlendFunc_Chamfer::GetShape),
             R"#(None)#"  , py::arg("NbPoles"),  py::arg("NbKnots"),  py::arg("Degree"),  py::arg("NbPoles2d"))
        .def("GetTolerance",
             (void (BlendFunc_Chamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_Chamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const>(&BlendFunc_Chamfer::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (BlendFunc_Chamfer::*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_Chamfer::*)( NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_Chamfer::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (BlendFunc_Chamfer::*)( NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (BlendFunc_Chamfer::*)( NCollection_Array1<Standard_Integer> &  ) >(&BlendFunc_Chamfer::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (void (BlendFunc_Chamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  gp_Lin &  ) ) static_cast<void (BlendFunc_Chamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  gp_Lin &  ) >(&BlendFunc_Chamfer::Section),
             R"#(Obsolete method)#"  , py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("Pdeb"),  py::arg("Pfin"),  py::arg("C"))
        .def("Section",
             (Standard_Boolean (BlendFunc_Chamfer::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_Chamfer::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_Chamfer::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Section",
             (Standard_Boolean (BlendFunc_Chamfer::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_Chamfer::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_Chamfer::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (void (BlendFunc_Chamfer::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_Chamfer::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_Chamfer::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("Resolution",
             (void (BlendFunc_Chamfer::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BlendFunc_Chamfer::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const>(&BlendFunc_Chamfer::Resolution),
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"),  py::arg("TolU"),  py::arg("TolV"))
;


    static_cast<py::class_<BlendFunc_Corde ,std::unique_ptr<BlendFunc_Corde>  >>(m.attr("BlendFunc_Corde"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S"),  py::arg("CGuide") )
        .def("SetParam",
             (void (BlendFunc_Corde::*)( const Standard_Real  ) ) static_cast<void (BlendFunc_Corde::*)( const Standard_Real  ) >(&BlendFunc_Corde::SetParam),
             R"#(None)#"  , py::arg("Param"))
        .def("SetDist",
             (void (BlendFunc_Corde::*)( const Standard_Real  ) ) static_cast<void (BlendFunc_Corde::*)( const Standard_Real  ) >(&BlendFunc_Corde::SetDist),
             R"#(None)#"  , py::arg("Dist"))
        .def("Value",
             (Standard_Boolean (BlendFunc_Corde::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_Corde::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_Corde::Value),
             R"#(computes the values <F> of the Function for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_Corde::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_Corde::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_Corde::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("PointOnS",
             (const gp_Pnt & (BlendFunc_Corde::*)() const) static_cast<const gp_Pnt & (BlendFunc_Corde::*)() const>(&BlendFunc_Corde::PointOnS),
             R"#(None)#" )
        .def("PointOnGuide",
             (const gp_Pnt & (BlendFunc_Corde::*)() const) static_cast<const gp_Pnt & (BlendFunc_Corde::*)() const>(&BlendFunc_Corde::PointOnGuide),
             R"#(returns the point of parameter <Param> on CGuide)#" )
        .def("NPlan",
             (const gp_Vec & (BlendFunc_Corde::*)() const) static_cast<const gp_Vec & (BlendFunc_Corde::*)() const>(&BlendFunc_Corde::NPlan),
             R"#(returns the normal to CGuide at Ptgui.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (BlendFunc_Corde::*)() const) static_cast<Standard_Boolean (BlendFunc_Corde::*)() const>(&BlendFunc_Corde::IsTangencyPoint),
             R"#(Returns True when it is not possible to compute the tangent vectors at PointOnS.)#" )
        .def("TangentOnS",
             (const gp_Vec & (BlendFunc_Corde::*)() const) static_cast<const gp_Vec & (BlendFunc_Corde::*)() const>(&BlendFunc_Corde::TangentOnS),
             R"#(Returns the tangent vector at PointOnS, in 3d space.)#" )
        .def("Tangent2dOnS",
             (const gp_Vec2d & (BlendFunc_Corde::*)() const) static_cast<const gp_Vec2d & (BlendFunc_Corde::*)() const>(&BlendFunc_Corde::Tangent2dOnS),
             R"#(Returns the tangent vector at PointOnS, in the parametric space of the first surface.)#" )
        .def("DerFguide",
             (void (BlendFunc_Corde::*)( const math_Vector & ,  gp_Vec2d &  ) ) static_cast<void (BlendFunc_Corde::*)( const math_Vector & ,  gp_Vec2d &  ) >(&BlendFunc_Corde::DerFguide),
             R"#(Derived of the function compared to the parameter of the guideline)#"  , py::arg("Sol"),  py::arg("DerF"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_Corde::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_Corde::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_Corde::IsSolution),
             R"#(Returns False if Sol is not solution else returns True and updates the fields tgs and tg2d)#"  , py::arg("Sol"),  py::arg("Tol"))
;


    static_cast<py::class_<BlendFunc_ChAsym ,std::unique_ptr<BlendFunc_ChAsym>  , Blend_Function >>(m.attr("BlendFunc_ChAsym"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
        .def("NbEquations",
             (Standard_Integer (BlendFunc_ChAsym::*)() const) static_cast<Standard_Integer (BlendFunc_ChAsym::*)() const>(&BlendFunc_ChAsym::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Set",
             (void (BlendFunc_ChAsym::*)( const Standard_Real  ) ) static_cast<void (BlendFunc_ChAsym::*)( const Standard_Real  ) >(&BlendFunc_ChAsym::Set),
             R"#(None)#"  , py::arg("Param"))
        .def("Set",
             (void (BlendFunc_ChAsym::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BlendFunc_ChAsym::*)( const Standard_Real ,  const Standard_Real  ) >(&BlendFunc_ChAsym::Set),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (BlendFunc_ChAsym::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_ChAsym::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_ChAsym::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_ChAsym::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_ChAsym::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_ChAsym::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_ChAsym::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_ChAsym::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_ChAsym::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("GetMinimalDistance",
             (Standard_Real (BlendFunc_ChAsym::*)() const) static_cast<Standard_Real (BlendFunc_ChAsym::*)() const>(&BlendFunc_ChAsym::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("ComputeValues",
             (Standard_Boolean (BlendFunc_ChAsym::*)( const math_Vector & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (BlendFunc_ChAsym::*)( const math_Vector & ,  const Standard_Integer ,  const Standard_Integer  ) >(&BlendFunc_ChAsym::ComputeValues),
             R"#(computes the values <F> of the derivatives for the variable <X> between DegF and DegL. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("DegF"),  py::arg("DegL"))
        .def("Value",
             (Standard_Boolean (BlendFunc_ChAsym::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_ChAsym::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_ChAsym::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_ChAsym::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ChAsym::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ChAsym::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BlendFunc_ChAsym::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ChAsym::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ChAsym::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("PointOnS1",
             (const gp_Pnt & (BlendFunc_ChAsym::*)() const) static_cast<const gp_Pnt & (BlendFunc_ChAsym::*)() const>(&BlendFunc_ChAsym::PointOnS1),
             R"#(None)#" )
        .def("PointOnS2",
             (const gp_Pnt & (BlendFunc_ChAsym::*)() const) static_cast<const gp_Pnt & (BlendFunc_ChAsym::*)() const>(&BlendFunc_ChAsym::PointOnS2),
             R"#(None)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (BlendFunc_ChAsym::*)() const) static_cast<Standard_Boolean (BlendFunc_ChAsym::*)() const>(&BlendFunc_ChAsym::IsTangencyPoint),
             R"#(None)#" )
        .def("TangentOnS1",
             (const gp_Vec & (BlendFunc_ChAsym::*)() const) static_cast<const gp_Vec & (BlendFunc_ChAsym::*)() const>(&BlendFunc_ChAsym::TangentOnS1),
             R"#(None)#" )
        .def("Tangent2dOnS1",
             (const gp_Vec2d & (BlendFunc_ChAsym::*)() const) static_cast<const gp_Vec2d & (BlendFunc_ChAsym::*)() const>(&BlendFunc_ChAsym::Tangent2dOnS1),
             R"#(None)#" )
        .def("TangentOnS2",
             (const gp_Vec & (BlendFunc_ChAsym::*)() const) static_cast<const gp_Vec & (BlendFunc_ChAsym::*)() const>(&BlendFunc_ChAsym::TangentOnS2),
             R"#(None)#" )
        .def("Tangent2dOnS2",
             (const gp_Vec2d & (BlendFunc_ChAsym::*)() const) static_cast<const gp_Vec2d & (BlendFunc_ChAsym::*)() const>(&BlendFunc_ChAsym::Tangent2dOnS2),
             R"#(None)#" )
        .def("TwistOnS1",
             (Standard_Boolean (BlendFunc_ChAsym::*)() const) static_cast<Standard_Boolean (BlendFunc_ChAsym::*)() const>(&BlendFunc_ChAsym::TwistOnS1),
             R"#(None)#" )
        .def("TwistOnS2",
             (Standard_Boolean (BlendFunc_ChAsym::*)() const) static_cast<Standard_Boolean (BlendFunc_ChAsym::*)() const>(&BlendFunc_ChAsym::TwistOnS2),
             R"#(None)#" )
        .def("Tangent",
             (void (BlendFunc_ChAsym::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BlendFunc_ChAsym::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&BlendFunc_ChAsym::Tangent),
             R"#(Returns the tangent vector at the section, at the beginning and the end of the section, and returns the normal (of the surfaces) at these points.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("TgFirst"),  py::arg("TgLast"),  py::arg("NormFirst"),  py::arg("NormLast"))
        .def("Section",
             (void (BlendFunc_ChAsym::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  gp_Lin &  ) ) static_cast<void (BlendFunc_ChAsym::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  gp_Lin &  ) >(&BlendFunc_ChAsym::Section),
             R"#(Utile pour une visu rapide et approximative de la surface.)#"  , py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("Pdeb"),  py::arg("Pfin"),  py::arg("C"))
        .def("IsRational",
             (Standard_Boolean (BlendFunc_ChAsym::*)() const) static_cast<Standard_Boolean (BlendFunc_ChAsym::*)() const>(&BlendFunc_ChAsym::IsRational),
             R"#(Returns if the section is rationnal)#" )
        .def("GetSectionSize",
             (Standard_Real (BlendFunc_ChAsym::*)() const) static_cast<Standard_Real (BlendFunc_ChAsym::*)() const>(&BlendFunc_ChAsym::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (BlendFunc_ChAsym::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (BlendFunc_ChAsym::*)( NCollection_Array1<Standard_Real> &  ) const>(&BlendFunc_ChAsym::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (BlendFunc_ChAsym::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BlendFunc_ChAsym::*)( const GeomAbs_Shape  ) const>(&BlendFunc_ChAsym::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BlendFunc_ChAsym::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (BlendFunc_ChAsym::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&BlendFunc_ChAsym::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetShape",
             (void (BlendFunc_ChAsym::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<void (BlendFunc_ChAsym::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) >(&BlendFunc_ChAsym::GetShape),
             R"#(None)#"  , py::arg("NbPoles"),  py::arg("NbKnots"),  py::arg("Degree"),  py::arg("NbPoles2d"))
        .def("GetTolerance",
             (void (BlendFunc_ChAsym::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_ChAsym::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const>(&BlendFunc_ChAsym::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (BlendFunc_ChAsym::*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_ChAsym::*)( NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_ChAsym::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (BlendFunc_ChAsym::*)( NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (BlendFunc_ChAsym::*)( NCollection_Array1<Standard_Integer> &  ) >(&BlendFunc_ChAsym::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (void (BlendFunc_ChAsym::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_ChAsym::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_ChAsym::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("Section",
             (Standard_Boolean (BlendFunc_ChAsym::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_ChAsym::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_ChAsym::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (Standard_Boolean (BlendFunc_ChAsym::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_ChAsym::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_ChAsym::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Resolution",
             (void (BlendFunc_ChAsym::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BlendFunc_ChAsym::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const>(&BlendFunc_ChAsym::Resolution),
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"),  py::arg("TolU"),  py::arg("TolV"))
        .def("Set",
             (void (BlendFunc_ChAsym::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_ChAsym::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_ChAsym::Set),
             R"#(Sets the distances and the angle.)#"  , py::arg("Dist1"),  py::arg("Angle"),  py::arg("Choix"))
;


    static_cast<py::class_<BlendFunc_EvolRad ,std::unique_ptr<BlendFunc_EvolRad>  , Blend_Function >>(m.attr("BlendFunc_EvolRad"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Law_Function> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C"),  py::arg("Law") )
        .def("NbEquations",
             (Standard_Integer (BlendFunc_EvolRad::*)() const) static_cast<Standard_Integer (BlendFunc_EvolRad::*)() const>(&BlendFunc_EvolRad::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (BlendFunc_EvolRad::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_EvolRad::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_EvolRad::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_EvolRad::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_EvolRad::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_EvolRad::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BlendFunc_EvolRad::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_EvolRad::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_EvolRad::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_EvolRad::*)( const Standard_Real  ) ) static_cast<void (BlendFunc_EvolRad::*)( const Standard_Real  ) >(&BlendFunc_EvolRad::Set),
             R"#(None)#"  , py::arg("Param"))
        .def("Set",
             (void (BlendFunc_EvolRad::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BlendFunc_EvolRad::*)( const Standard_Real ,  const Standard_Real  ) >(&BlendFunc_EvolRad::Set),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (BlendFunc_EvolRad::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_EvolRad::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_EvolRad::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_EvolRad::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_EvolRad::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_EvolRad::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_EvolRad::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_EvolRad::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_EvolRad::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("GetMinimalDistance",
             (Standard_Real (BlendFunc_EvolRad::*)() const) static_cast<Standard_Real (BlendFunc_EvolRad::*)() const>(&BlendFunc_EvolRad::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("PointOnS1",
             (const gp_Pnt & (BlendFunc_EvolRad::*)() const) static_cast<const gp_Pnt & (BlendFunc_EvolRad::*)() const>(&BlendFunc_EvolRad::PointOnS1),
             R"#(None)#" )
        .def("PointOnS2",
             (const gp_Pnt & (BlendFunc_EvolRad::*)() const) static_cast<const gp_Pnt & (BlendFunc_EvolRad::*)() const>(&BlendFunc_EvolRad::PointOnS2),
             R"#(None)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (BlendFunc_EvolRad::*)() const) static_cast<Standard_Boolean (BlendFunc_EvolRad::*)() const>(&BlendFunc_EvolRad::IsTangencyPoint),
             R"#(None)#" )
        .def("TangentOnS1",
             (const gp_Vec & (BlendFunc_EvolRad::*)() const) static_cast<const gp_Vec & (BlendFunc_EvolRad::*)() const>(&BlendFunc_EvolRad::TangentOnS1),
             R"#(None)#" )
        .def("Tangent2dOnS1",
             (const gp_Vec2d & (BlendFunc_EvolRad::*)() const) static_cast<const gp_Vec2d & (BlendFunc_EvolRad::*)() const>(&BlendFunc_EvolRad::Tangent2dOnS1),
             R"#(None)#" )
        .def("TangentOnS2",
             (const gp_Vec & (BlendFunc_EvolRad::*)() const) static_cast<const gp_Vec & (BlendFunc_EvolRad::*)() const>(&BlendFunc_EvolRad::TangentOnS2),
             R"#(None)#" )
        .def("Tangent2dOnS2",
             (const gp_Vec2d & (BlendFunc_EvolRad::*)() const) static_cast<const gp_Vec2d & (BlendFunc_EvolRad::*)() const>(&BlendFunc_EvolRad::Tangent2dOnS2),
             R"#(None)#" )
        .def("Tangent",
             (void (BlendFunc_EvolRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BlendFunc_EvolRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&BlendFunc_EvolRad::Tangent),
             R"#(Returns the tangent vector at the section, at the beginning and the end of the section, and returns the normal (of the surfaces) at these points.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("TgFirst"),  py::arg("TgLast"),  py::arg("NormFirst"),  py::arg("NormLast"))
        .def("TwistOnS1",
             (Standard_Boolean (BlendFunc_EvolRad::*)() const) static_cast<Standard_Boolean (BlendFunc_EvolRad::*)() const>(&BlendFunc_EvolRad::TwistOnS1),
             R"#(None)#" )
        .def("TwistOnS2",
             (Standard_Boolean (BlendFunc_EvolRad::*)() const) static_cast<Standard_Boolean (BlendFunc_EvolRad::*)() const>(&BlendFunc_EvolRad::TwistOnS2),
             R"#(None)#" )
        .def("Set",
             (void (BlendFunc_EvolRad::*)( const Standard_Integer  ) ) static_cast<void (BlendFunc_EvolRad::*)( const Standard_Integer  ) >(&BlendFunc_EvolRad::Set),
             R"#(None)#"  , py::arg("Choix"))
        .def("Set",
             (void (BlendFunc_EvolRad::*)( const BlendFunc_SectionShape  ) ) static_cast<void (BlendFunc_EvolRad::*)( const BlendFunc_SectionShape  ) >(&BlendFunc_EvolRad::Set),
             R"#(Sets the type of section generation for the approximations.)#"  , py::arg("TypeSection"))
        .def("Section",
             (void (BlendFunc_EvolRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  gp_Circ &  ) ) static_cast<void (BlendFunc_EvolRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  gp_Circ &  ) >(&BlendFunc_EvolRad::Section),
             R"#(Method for graphic traces)#"  , py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("Pdeb"),  py::arg("Pfin"),  py::arg("C"))
        .def("IsRational",
             (Standard_Boolean (BlendFunc_EvolRad::*)() const) static_cast<Standard_Boolean (BlendFunc_EvolRad::*)() const>(&BlendFunc_EvolRad::IsRational),
             R"#(Returns if the section is rationnal)#" )
        .def("GetSectionSize",
             (Standard_Real (BlendFunc_EvolRad::*)() const) static_cast<Standard_Real (BlendFunc_EvolRad::*)() const>(&BlendFunc_EvolRad::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (BlendFunc_EvolRad::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (BlendFunc_EvolRad::*)( NCollection_Array1<Standard_Real> &  ) const>(&BlendFunc_EvolRad::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (BlendFunc_EvolRad::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BlendFunc_EvolRad::*)( const GeomAbs_Shape  ) const>(&BlendFunc_EvolRad::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BlendFunc_EvolRad::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (BlendFunc_EvolRad::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&BlendFunc_EvolRad::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetShape",
             (void (BlendFunc_EvolRad::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<void (BlendFunc_EvolRad::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) >(&BlendFunc_EvolRad::GetShape),
             R"#(None)#"  , py::arg("NbPoles"),  py::arg("NbKnots"),  py::arg("Degree"),  py::arg("NbPoles2d"))
        .def("GetTolerance",
             (void (BlendFunc_EvolRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_EvolRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const>(&BlendFunc_EvolRad::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (BlendFunc_EvolRad::*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_EvolRad::*)( NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_EvolRad::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (BlendFunc_EvolRad::*)( NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (BlendFunc_EvolRad::*)( NCollection_Array1<Standard_Integer> &  ) >(&BlendFunc_EvolRad::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (BlendFunc_EvolRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_EvolRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_EvolRad::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Section",
             (Standard_Boolean (BlendFunc_EvolRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_EvolRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_EvolRad::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (void (BlendFunc_EvolRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_EvolRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_EvolRad::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("Resolution",
             (void (BlendFunc_EvolRad::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BlendFunc_EvolRad::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const>(&BlendFunc_EvolRad::Resolution),
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"),  py::arg("TolU"),  py::arg("TolV"))
;


    static_cast<py::class_<BlendFunc_Tensor ,std::unique_ptr<BlendFunc_Tensor>  >>(m.attr("BlendFunc_Tensor"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("NbRow"),  py::arg("NbCol"),  py::arg("NbMat") )
        .def("Init",
             (void (BlendFunc_Tensor::*)( const Standard_Real  ) ) static_cast<void (BlendFunc_Tensor::*)( const Standard_Real  ) >(&BlendFunc_Tensor::Init),
             R"#(Initialize all the elements of a Tensor to InitialValue.)#"  , py::arg("InitialValue"))
        .def("Value",
             (const Standard_Real & (BlendFunc_Tensor::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const Standard_Real & (BlendFunc_Tensor::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&BlendFunc_Tensor::Value),
             R"#(accesses (in read or write mode) the value of index <Row>, <Col> and <Mat> of a Tensor. An exception is raised if <Row>, <Col> or <Mat> are not in the correct range.)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Mat"))
        .def("ChangeValue",
             (Standard_Real & (BlendFunc_Tensor::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Real & (BlendFunc_Tensor::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&BlendFunc_Tensor::ChangeValue),
             R"#(accesses (in read or write mode) the value of index <Row>, <Col> and <Mat> of a Tensor. An exception is raised if <Row>, <Col> or <Mat> are not in the correct range.)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Mat"))
        .def("Multiply",
             (void (BlendFunc_Tensor::*)( const math_Vector & ,  math_Matrix &  ) const) static_cast<void (BlendFunc_Tensor::*)( const math_Vector & ,  math_Matrix &  ) const>(&BlendFunc_Tensor::Multiply),
             R"#(None)#"  , py::arg("Right"),  py::arg("Product"))
        .def("Value",
             (const Standard_Real & (BlendFunc_Tensor::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const Standard_Real & (BlendFunc_Tensor::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&BlendFunc_Tensor::Value),
             R"#(accesses (in read or write mode) the value of index <Row>, <Col> and <Mat> of a Tensor. An exception is raised if <Row>, <Col> or <Mat> are not in the correct range.)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Mat"))
        .def("ChangeValue",
             (Standard_Real & (BlendFunc_Tensor::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Real & (BlendFunc_Tensor::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&BlendFunc_Tensor::ChangeValue),
             R"#(accesses (in read or write mode) the value of index <Row>, <Col> and <Mat> of a Tensor. An exception is raised if <Row>, <Col> or <Mat> are not in the correct range.)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Mat"))
;


    static_cast<py::class_<BlendFunc_ConstRadInv ,std::unique_ptr<BlendFunc_ConstRadInv>  , Blend_FuncInv >>(m.attr("BlendFunc_ConstRadInv"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
        .def("Set",
             (void (BlendFunc_ConstRadInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (BlendFunc_ConstRadInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&BlendFunc_ConstRadInv::Set),
             R"#(None)#"  , py::arg("OnFirst"),  py::arg("COnSurf"))
        .def("GetTolerance",
             (void (BlendFunc_ConstRadInv::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_ConstRadInv::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_ConstRadInv::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_ConstRadInv::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_ConstRadInv::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_ConstRadInv::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_ConstRadInv::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_ConstRadInv::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_ConstRadInv::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("NbEquations",
             (Standard_Integer (BlendFunc_ConstRadInv::*)() const) static_cast<Standard_Integer (BlendFunc_ConstRadInv::*)() const>(&BlendFunc_ConstRadInv::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (BlendFunc_ConstRadInv::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstRadInv::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_ConstRadInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_ConstRadInv::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstRadInv::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ConstRadInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BlendFunc_ConstRadInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstRadInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ConstRadInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_ConstRadInv::*)( const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_ConstRadInv::*)( const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_ConstRadInv::Set),
             R"#(None)#"  , py::arg("R"),  py::arg("Choix"))
;


    static_cast<py::class_<BlendFunc_CSConstRad ,std::unique_ptr<BlendFunc_CSConstRad>  , Blend_CSFunction >>(m.attr("BlendFunc_CSConstRad"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S"),  py::arg("C"),  py::arg("CGuide") )
        .def("NbEquations",
             (Standard_Integer (BlendFunc_CSConstRad::*)() const) static_cast<Standard_Integer (BlendFunc_CSConstRad::*)() const>(&BlendFunc_CSConstRad::NbEquations),
             R"#(returns the number of equations of the function (3).)#" )
        .def("Value",
             (Standard_Boolean (BlendFunc_CSConstRad::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_CSConstRad::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_CSConstRad::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_CSConstRad::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_CSConstRad::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_CSConstRad::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BlendFunc_CSConstRad::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_CSConstRad::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_CSConstRad::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_CSConstRad::*)( const Standard_Real  ) ) static_cast<void (BlendFunc_CSConstRad::*)( const Standard_Real  ) >(&BlendFunc_CSConstRad::Set),
             R"#(None)#"  , py::arg("Param"))
        .def("Set",
             (void (BlendFunc_CSConstRad::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BlendFunc_CSConstRad::*)( const Standard_Real ,  const Standard_Real  ) >(&BlendFunc_CSConstRad::Set),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (BlendFunc_CSConstRad::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_CSConstRad::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_CSConstRad::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_CSConstRad::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_CSConstRad::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_CSConstRad::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_CSConstRad::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_CSConstRad::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_CSConstRad::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("PointOnS",
             (const gp_Pnt & (BlendFunc_CSConstRad::*)() const) static_cast<const gp_Pnt & (BlendFunc_CSConstRad::*)() const>(&BlendFunc_CSConstRad::PointOnS),
             R"#(None)#" )
        .def("PointOnC",
             (const gp_Pnt & (BlendFunc_CSConstRad::*)() const) static_cast<const gp_Pnt & (BlendFunc_CSConstRad::*)() const>(&BlendFunc_CSConstRad::PointOnC),
             R"#(None)#" )
        .def("Pnt2d",
             (const gp_Pnt2d & (BlendFunc_CSConstRad::*)() const) static_cast<const gp_Pnt2d & (BlendFunc_CSConstRad::*)() const>(&BlendFunc_CSConstRad::Pnt2d),
             R"#(Returns U,V coordinates of the point on the surface.)#" )
        .def("ParameterOnC",
             (Standard_Real (BlendFunc_CSConstRad::*)() const) static_cast<Standard_Real (BlendFunc_CSConstRad::*)() const>(&BlendFunc_CSConstRad::ParameterOnC),
             R"#(Returns parameter of the point on the curve.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (BlendFunc_CSConstRad::*)() const) static_cast<Standard_Boolean (BlendFunc_CSConstRad::*)() const>(&BlendFunc_CSConstRad::IsTangencyPoint),
             R"#(None)#" )
        .def("TangentOnS",
             (const gp_Vec & (BlendFunc_CSConstRad::*)() const) static_cast<const gp_Vec & (BlendFunc_CSConstRad::*)() const>(&BlendFunc_CSConstRad::TangentOnS),
             R"#(None)#" )
        .def("Tangent2d",
             (const gp_Vec2d & (BlendFunc_CSConstRad::*)() const) static_cast<const gp_Vec2d & (BlendFunc_CSConstRad::*)() const>(&BlendFunc_CSConstRad::Tangent2d),
             R"#(None)#" )
        .def("TangentOnC",
             (const gp_Vec & (BlendFunc_CSConstRad::*)() const) static_cast<const gp_Vec & (BlendFunc_CSConstRad::*)() const>(&BlendFunc_CSConstRad::TangentOnC),
             R"#(None)#" )
        .def("Tangent",
             (void (BlendFunc_CSConstRad::*)( const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BlendFunc_CSConstRad::*)( const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec &  ) const>(&BlendFunc_CSConstRad::Tangent),
             R"#(Returns the tangent vector at the section, at the beginning and the end of the section, and returns the normal (of the surface) at these points.)#"  , py::arg("U"),  py::arg("V"),  py::arg("TgS"),  py::arg("NormS"))
        .def("Set",
             (void (BlendFunc_CSConstRad::*)( const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_CSConstRad::*)( const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_CSConstRad::Set),
             R"#(None)#"  , py::arg("Radius"),  py::arg("Choix"))
        .def("Set",
             (void (BlendFunc_CSConstRad::*)( const BlendFunc_SectionShape  ) ) static_cast<void (BlendFunc_CSConstRad::*)( const BlendFunc_SectionShape  ) >(&BlendFunc_CSConstRad::Set),
             R"#(Sets the type of section generation for the approximations.)#"  , py::arg("TypeSection"))
        .def("Section",
             (void (BlendFunc_CSConstRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  gp_Circ &  ) ) static_cast<void (BlendFunc_CSConstRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  gp_Circ &  ) >(&BlendFunc_CSConstRad::Section),
             R"#(None)#"  , py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("W"),  py::arg("Pdeb"),  py::arg("Pfin"),  py::arg("C"))
        .def("Section",
             (Standard_Boolean (BlendFunc_CSConstRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_CSConstRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_CSConstRad::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("GetSection",
             (Standard_Boolean (BlendFunc_CSConstRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> &  ) ) static_cast<Standard_Boolean (BlendFunc_CSConstRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> &  ) >(&BlendFunc_CSConstRad::GetSection),
             R"#(None)#"  , py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("W"),  py::arg("tabP"),  py::arg("tabV"))
        .def("IsRational",
             (Standard_Boolean (BlendFunc_CSConstRad::*)() const) static_cast<Standard_Boolean (BlendFunc_CSConstRad::*)() const>(&BlendFunc_CSConstRad::IsRational),
             R"#(Returns if the section is rationnal)#" )
        .def("GetSectionSize",
             (Standard_Real (BlendFunc_CSConstRad::*)() const) static_cast<Standard_Real (BlendFunc_CSConstRad::*)() const>(&BlendFunc_CSConstRad::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (BlendFunc_CSConstRad::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (BlendFunc_CSConstRad::*)( NCollection_Array1<Standard_Real> &  ) const>(&BlendFunc_CSConstRad::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (BlendFunc_CSConstRad::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BlendFunc_CSConstRad::*)( const GeomAbs_Shape  ) const>(&BlendFunc_CSConstRad::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BlendFunc_CSConstRad::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (BlendFunc_CSConstRad::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&BlendFunc_CSConstRad::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>. The array must provide enough room to accomodate for the parameters. i.e. T.Length() > NbIntervals() raises OutOfRange from Standard)#"  , py::arg("T"),  py::arg("S"))
        .def("GetShape",
             (void (BlendFunc_CSConstRad::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<void (BlendFunc_CSConstRad::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) >(&BlendFunc_CSConstRad::GetShape),
             R"#(None)#"  , py::arg("NbPoles"),  py::arg("NbKnots"),  py::arg("Degree"),  py::arg("NbPoles2d"))
        .def("GetTolerance",
             (void (BlendFunc_CSConstRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_CSConstRad::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const>(&BlendFunc_CSConstRad::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (BlendFunc_CSConstRad::*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_CSConstRad::*)( NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_CSConstRad::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (BlendFunc_CSConstRad::*)( NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (BlendFunc_CSConstRad::*)( NCollection_Array1<Standard_Integer> &  ) >(&BlendFunc_CSConstRad::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (BlendFunc_CSConstRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_CSConstRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_CSConstRad::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (void (BlendFunc_CSConstRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_CSConstRad::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_CSConstRad::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("Resolution",
             (void (BlendFunc_CSConstRad::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BlendFunc_CSConstRad::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const>(&BlendFunc_CSConstRad::Resolution),
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"),  py::arg("TolU"),  py::arg("TolV"))
;

// functions
// ./opencascade/BlendFunc.hxx
// ./opencascade/BlendFunc_Chamfer.hxx
// ./opencascade/BlendFunc_Ruled.hxx
// ./opencascade/BlendFunc_Tensor.hxx
// ./opencascade/BlendFunc_ChamfInv.hxx
// ./opencascade/BlendFunc_Corde.hxx
// ./opencascade/BlendFunc_SectionShape.hxx
// ./opencascade/BlendFunc_EvolRadInv.hxx
// ./opencascade/BlendFunc_CSConstRad.hxx
// ./opencascade/BlendFunc_CSCircular.hxx
// ./opencascade/BlendFunc_ChAsym.hxx
// ./opencascade/BlendFunc_ChAsymInv.hxx
// ./opencascade/BlendFunc_ConstRadInv.hxx
// ./opencascade/BlendFunc_RuledInv.hxx
// ./opencascade/BlendFunc_EvolRad.hxx
// ./opencascade/BlendFunc_ConstRad.hxx

// operators

// register typdefs
// ./opencascade/BlendFunc.hxx
// ./opencascade/BlendFunc_Chamfer.hxx
// ./opencascade/BlendFunc_Ruled.hxx
// ./opencascade/BlendFunc_Tensor.hxx
// ./opencascade/BlendFunc_ChamfInv.hxx
// ./opencascade/BlendFunc_Corde.hxx
// ./opencascade/BlendFunc_SectionShape.hxx
// ./opencascade/BlendFunc_EvolRadInv.hxx
// ./opencascade/BlendFunc_CSConstRad.hxx
// ./opencascade/BlendFunc_CSCircular.hxx
// ./opencascade/BlendFunc_ChAsym.hxx
// ./opencascade/BlendFunc_ChAsymInv.hxx
// ./opencascade/BlendFunc_ConstRadInv.hxx
// ./opencascade/BlendFunc_RuledInv.hxx
// ./opencascade/BlendFunc_EvolRad.hxx
// ./opencascade/BlendFunc_ConstRad.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

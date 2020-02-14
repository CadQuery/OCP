
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
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>
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
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <gp_Ax1.hxx>
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
#include <math_Matrix.hxx>
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <gp_Ax1.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>
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

// module includes
#include <BlendFunc.hxx>
#include <BlendFunc_Chamfer.hxx>
#include <BlendFunc_ChamfInv.hxx>
#include <BlendFunc_ChAsym.hxx>
#include <BlendFunc_ChAsymInv.hxx>
#include <BlendFunc_ConstRad.hxx>
#include <BlendFunc_ConstRadInv.hxx>
#include <BlendFunc_ConstThroat.hxx>
#include <BlendFunc_ConstThroatInv.hxx>
#include <BlendFunc_ConstThroatWithPenetration.hxx>
#include <BlendFunc_ConstThroatWithPenetrationInv.hxx>
#include <BlendFunc_Corde.hxx>
#include <BlendFunc_CSCircular.hxx>
#include <BlendFunc_CSConstRad.hxx>
#include <BlendFunc_EvolRad.hxx>
#include <BlendFunc_EvolRadInv.hxx>
#include <BlendFunc_GenChamfer.hxx>
#include <BlendFunc_GenChamfInv.hxx>
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
    class Py_BlendFunc_GenChamfInv : public BlendFunc_GenChamfInv{
    public:
        using BlendFunc_GenChamfInv::BlendFunc_GenChamfInv;
        
        
        // public pure virtual
        void Set(const Standard_Real Dist1,const Standard_Real Dist2,const Standard_Integer Choix) override { PYBIND11_OVERLOAD_PURE(void,BlendFunc_GenChamfInv,Set,Dist1,Dist2,Choix) };
        
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_FuncInv,Value,X,F) };
        Standard_Boolean Derivatives(const math_Vector & X,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_FuncInv,Derivatives,X,D) };
        Standard_Boolean IsSolution(const math_Vector & Sol,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_FuncInv,IsSolution,Sol,Tol) };
        Standard_Integer NbVariables() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,math_FunctionSetWithDerivatives,NbVariables,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_BlendFunc_GenChamfer : public BlendFunc_GenChamfer{
    public:
        using BlendFunc_GenChamfer::BlendFunc_GenChamfer;
        
        
        // public pure virtual
        void Set(const Standard_Real Param) override { PYBIND11_OVERLOAD_PURE(void,BlendFunc_GenChamfer,Set,Param) };
        void Set(const Standard_Real Dist1,const Standard_Real Dist2,const Standard_Integer Choix) override { PYBIND11_OVERLOAD_PURE(void,BlendFunc_GenChamfer,Set,Dist1,Dist2,Choix) };
        
        const gp_Pnt & PointOnS1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_Function,PointOnS1,) };
        const gp_Pnt & PointOnS2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_Function,PointOnS2,) };
        Standard_Boolean IsTangencyPoint() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_Function,IsTangencyPoint,) };
        const gp_Vec & TangentOnS1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec &,Blend_Function,TangentOnS1,) };
        const gp_Vec2d & Tangent2dOnS1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec2d &,Blend_Function,Tangent2dOnS1,) };
        const gp_Vec & TangentOnS2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec &,Blend_Function,TangentOnS2,) };
        const gp_Vec2d & Tangent2dOnS2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec2d &,Blend_Function,Tangent2dOnS2,) };
        void Tangent(const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2,gp_Vec & TgFirst,gp_Vec & TgLast,gp_Vec & NormFirst,gp_Vec & NormLast) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_Function,Tangent,U1,V1,U2,V2,TgFirst,TgLast,NormFirst,NormLast) };
        Standard_Integer NbVariables() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_AppFunction,NbVariables,) };
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,Value,X,F) };
        Standard_Boolean Derivatives(const math_Vector & X,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,Derivatives,X,D) };
        Standard_Boolean IsSolution(const math_Vector & Sol,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,IsSolution,Sol,Tol) };
        const gp_Pnt & Pnt1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_AppFunction,Pnt1,) };
        const gp_Pnt & Pnt2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_AppFunction,Pnt2,) };
        Standard_Real GetSectionSize() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_AppFunction,GetSectionSize,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes

    // default constructor
    register_default_constructor<BlendFunc , shared_ptr<BlendFunc>>(m,"BlendFunc");

    static_cast<py::class_<BlendFunc , shared_ptr<BlendFunc>  >>(m.attr("BlendFunc"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
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
    // static methods using call by reference i.s.o. return
        .def_static("GetShape_s",
                    []( const BlendFunc_SectionShape SectShape,const Standard_Real MaxAng,Convert_ParameterisationType & TypeConv ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; BlendFunc::GetShape(SectShape,MaxAng,NbPoles,NbKnots,Degree,TypeConv); return std::make_tuple(NbPoles,NbKnots,Degree); },
                    R"#(None)#"  , py::arg("SectShape"),  py::arg("MaxAng"),  py::arg("TypeConv"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_CSCircular , shared_ptr<BlendFunc_CSCircular>  , Blend_CSFunction >>(m.attr("BlendFunc_CSCircular"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Law_Function> & >()  , py::arg("S"),  py::arg("C"),  py::arg("CGuide"),  py::arg("L") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
        .def("Section",
             []( BlendFunc_CSCircular &self , const Standard_Real Param,const Standard_Real U,const Standard_Real V,const Standard_Real W,gp_Circ & C ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.Section(Param,U,V,W,Pdeb,Pfin,C); return std::make_tuple(Pdeb,Pfin); },
             R"#(None)#"  , py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("W"),  py::arg("C"))
        .def("GetShape",
             []( BlendFunc_CSCircular &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
        .def("Resolution",
             []( BlendFunc_CSCircular &self , const Standard_Integer IC2d,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(IC2d,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_CSConstRad , shared_ptr<BlendFunc_CSConstRad>  , Blend_CSFunction >>(m.attr("BlendFunc_CSConstRad"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S"),  py::arg("C"),  py::arg("CGuide") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
        .def("Section",
             []( BlendFunc_CSConstRad &self , const Standard_Real Param,const Standard_Real U,const Standard_Real V,const Standard_Real W,gp_Circ & C ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.Section(Param,U,V,W,Pdeb,Pfin,C); return std::make_tuple(Pdeb,Pfin); },
             R"#(None)#"  , py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("W"),  py::arg("C"))
        .def("GetShape",
             []( BlendFunc_CSConstRad &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
        .def("Resolution",
             []( BlendFunc_CSConstRad &self , const Standard_Integer IC2d,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(IC2d,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_ChAsym , shared_ptr<BlendFunc_ChAsym>  , Blend_Function >>(m.attr("BlendFunc_ChAsym"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
    // custom constructors
    // methods
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
        .def("Set",
             (void (BlendFunc_ChAsym::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_ChAsym::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_ChAsym::Set),
             R"#(Sets the distances and the angle.)#"  , py::arg("Dist1"),  py::arg("Angle"),  py::arg("Choix"))
    // methods using call by reference i.s.o. return
        .def("Section",
             []( BlendFunc_ChAsym &self , const Standard_Real Param,const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2,gp_Lin & C ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.Section(Param,U1,V1,U2,V2,Pdeb,Pfin,C); return std::make_tuple(Pdeb,Pfin); },
             R"#(Utile pour une visu rapide et approximative de la surface.)#"  , py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("C"))
        .def("GetShape",
             []( BlendFunc_ChAsym &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
        .def("Resolution",
             []( BlendFunc_ChAsym &self , const Standard_Integer IC2d,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(IC2d,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_ChAsymInv , shared_ptr<BlendFunc_ChAsymInv>  , Blend_FuncInv >>(m.attr("BlendFunc_ChAsymInv"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_ConstRad , shared_ptr<BlendFunc_ConstRad>  , Blend_Function >>(m.attr("BlendFunc_ConstRad"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
        .def("Section",
             []( BlendFunc_ConstRad &self , const Standard_Real Param,const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2,gp_Circ & C ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.Section(Param,U1,V1,U2,V2,Pdeb,Pfin,C); return std::make_tuple(Pdeb,Pfin); },
             R"#(Utile pour une visu rapide et approximative de la surface.)#"  , py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("C"))
        .def("GetShape",
             []( BlendFunc_ConstRad &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
        .def("Resolution",
             []( BlendFunc_ConstRad &self , const Standard_Integer IC2d,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(IC2d,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_ConstRadInv , shared_ptr<BlendFunc_ConstRadInv>  , Blend_FuncInv >>(m.attr("BlendFunc_ConstRadInv"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_Corde , shared_ptr<BlendFunc_Corde>  >>(m.attr("BlendFunc_Corde"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S"),  py::arg("CGuide") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_EvolRad , shared_ptr<BlendFunc_EvolRad>  , Blend_Function >>(m.attr("BlendFunc_EvolRad"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Law_Function> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C"),  py::arg("Law") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
        .def("Section",
             []( BlendFunc_EvolRad &self , const Standard_Real Param,const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2,gp_Circ & C ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.Section(Param,U1,V1,U2,V2,Pdeb,Pfin,C); return std::make_tuple(Pdeb,Pfin); },
             R"#(Method for graphic traces)#"  , py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("C"))
        .def("GetShape",
             []( BlendFunc_EvolRad &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
        .def("Resolution",
             []( BlendFunc_EvolRad &self , const Standard_Integer IC2d,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(IC2d,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_EvolRadInv , shared_ptr<BlendFunc_EvolRadInv>  , Blend_FuncInv >>(m.attr("BlendFunc_EvolRadInv"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Law_Function> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C"),  py::arg("Law") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_GenChamfInv , shared_ptr<BlendFunc_GenChamfInv> ,Py_BlendFunc_GenChamfInv , Blend_FuncInv >>(m.attr("BlendFunc_GenChamfInv"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
    // custom constructors
    // methods
        .def("Set",
             (void (BlendFunc_GenChamfInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (BlendFunc_GenChamfInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&BlendFunc_GenChamfInv::Set),
             R"#(None)#"  , py::arg("OnFirst"),  py::arg("COnSurf"))
        .def("GetTolerance",
             (void (BlendFunc_GenChamfInv::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_GenChamfInv::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_GenChamfInv::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_GenChamfInv::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_GenChamfInv::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_GenChamfInv::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("NbEquations",
             (Standard_Integer (BlendFunc_GenChamfInv::*)() const) static_cast<Standard_Integer (BlendFunc_GenChamfInv::*)() const>(&BlendFunc_GenChamfInv::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Values",
             (Standard_Boolean (BlendFunc_GenChamfInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_GenChamfInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_GenChamfInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_GenChamfInv::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_GenChamfInv::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_GenChamfInv::Set),
             R"#(None)#"  , py::arg("Dist1"),  py::arg("Dist2"),  py::arg("Choix"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_GenChamfer , shared_ptr<BlendFunc_GenChamfer> ,Py_BlendFunc_GenChamfer , Blend_Function >>(m.attr("BlendFunc_GenChamfer"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("CG") )
    // custom constructors
    // methods
        .def("NbEquations",
             (Standard_Integer (BlendFunc_GenChamfer::*)() const) static_cast<Standard_Integer (BlendFunc_GenChamfer::*)() const>(&BlendFunc_GenChamfer::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Values",
             (Standard_Boolean (BlendFunc_GenChamfer::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_GenChamfer::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&BlendFunc_GenChamfer::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_GenChamfer::*)( const Standard_Real  ) ) static_cast<void (BlendFunc_GenChamfer::*)( const Standard_Real  ) >(&BlendFunc_GenChamfer::Set),
             R"#(Sets the value of the parameter along the guide line. This determines the plane in which the solution has to be found.)#"  , py::arg("Param"))
        .def("Set",
             (void (BlendFunc_GenChamfer::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BlendFunc_GenChamfer::*)( const Standard_Real ,  const Standard_Real  ) >(&BlendFunc_GenChamfer::Set),
             R"#(Sets the bounds of the parametric interval on the guide line. This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (BlendFunc_GenChamfer::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (BlendFunc_GenChamfer::*)( math_Vector & ,  const Standard_Real  ) const>(&BlendFunc_GenChamfer::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BlendFunc_GenChamfer::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_GenChamfer::*)( math_Vector & ,  math_Vector &  ) const>(&BlendFunc_GenChamfer::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("GetMinimalDistance",
             (Standard_Real (BlendFunc_GenChamfer::*)() const) static_cast<Standard_Real (BlendFunc_GenChamfer::*)() const>(&BlendFunc_GenChamfer::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("Set",
             (void (BlendFunc_GenChamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_GenChamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_GenChamfer::Set),
             R"#(Sets the distances and the "quadrant".)#"  , py::arg("Dist1"),  py::arg("Dist2"),  py::arg("Choix"))
        .def("IsRational",
             (Standard_Boolean (BlendFunc_GenChamfer::*)() const) static_cast<Standard_Boolean (BlendFunc_GenChamfer::*)() const>(&BlendFunc_GenChamfer::IsRational),
             R"#(Returns False)#" )
        .def("GetMinimalWeight",
             (void (BlendFunc_GenChamfer::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (BlendFunc_GenChamfer::*)( NCollection_Array1<Standard_Real> &  ) const>(&BlendFunc_GenChamfer::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (BlendFunc_GenChamfer::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BlendFunc_GenChamfer::*)( const GeomAbs_Shape  ) const>(&BlendFunc_GenChamfer::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BlendFunc_GenChamfer::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (BlendFunc_GenChamfer::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&BlendFunc_GenChamfer::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetTolerance",
             (void (BlendFunc_GenChamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const) static_cast<void (BlendFunc_GenChamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const>(&BlendFunc_GenChamfer::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (BlendFunc_GenChamfer::*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_GenChamfer::*)( NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_GenChamfer::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (BlendFunc_GenChamfer::*)( NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (BlendFunc_GenChamfer::*)( NCollection_Array1<Standard_Integer> &  ) >(&BlendFunc_GenChamfer::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (BlendFunc_GenChamfer::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_GenChamfer::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_GenChamfer::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Section",
             (Standard_Boolean (BlendFunc_GenChamfer::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (BlendFunc_GenChamfer::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_GenChamfer::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (void (BlendFunc_GenChamfer::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (BlendFunc_GenChamfer::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&BlendFunc_GenChamfer::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
    // methods using call by reference i.s.o. return
        .def("GetShape",
             []( BlendFunc_GenChamfer &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
        .def("Section",
             []( BlendFunc_GenChamfer &self , const Standard_Real Param,const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2,gp_Lin & C ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.Section(Param,U1,V1,U2,V2,Pdeb,Pfin,C); return std::make_tuple(Pdeb,Pfin); },
             R"#(Obsolete method)#"  , py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("C"))
        .def("Resolution",
             []( BlendFunc_GenChamfer &self , const Standard_Integer IC2d,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(IC2d,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_Ruled , shared_ptr<BlendFunc_Ruled>  , Blend_Function >>(m.attr("BlendFunc_Ruled"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
        .def("GetShape",
             []( BlendFunc_Ruled &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
        .def("Resolution",
             []( BlendFunc_Ruled &self , const Standard_Integer IC2d,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(IC2d,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_RuledInv , shared_ptr<BlendFunc_RuledInv>  , Blend_FuncInv >>(m.attr("BlendFunc_RuledInv"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_Tensor , shared_ptr<BlendFunc_Tensor>  >>(m.attr("BlendFunc_Tensor"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("NbRow"),  py::arg("NbCol"),  py::arg("NbMat") )
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_ChamfInv , shared_ptr<BlendFunc_ChamfInv>  , BlendFunc_GenChamfInv >>(m.attr("BlendFunc_ChamfInv"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
    // custom constructors
    // methods
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_ChamfInv::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("Value",
             (Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_ChamfInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ChamfInv::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ChamfInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_ChamfInv::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_ChamfInv::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_ChamfInv::Set),
             R"#(None)#"  , py::arg("Dist1"),  py::arg("Dist2"),  py::arg("Choix"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_Chamfer , shared_ptr<BlendFunc_Chamfer>  , BlendFunc_GenChamfer >>(m.attr("BlendFunc_Chamfer"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("CG") )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_Chamfer::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_Chamfer::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_Chamfer::*)( const Standard_Real  ) ) static_cast<void (BlendFunc_Chamfer::*)( const Standard_Real  ) >(&BlendFunc_Chamfer::Set),
             R"#(None)#"  , py::arg("Param"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_Chamfer::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_Chamfer::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
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
        .def("GetSectionSize",
             (Standard_Real (BlendFunc_Chamfer::*)() const) static_cast<Standard_Real (BlendFunc_Chamfer::*)() const>(&BlendFunc_Chamfer::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_ConstThroat , shared_ptr<BlendFunc_ConstThroat>  , BlendFunc_GenChamfer >>(m.attr("BlendFunc_ConstThroat"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (BlendFunc_ConstThroat::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstThroat::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_ConstThroat::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_ConstThroat::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstThroat::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ConstThroat::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_ConstThroat::*)( const Standard_Real  ) ) static_cast<void (BlendFunc_ConstThroat::*)( const Standard_Real  ) >(&BlendFunc_ConstThroat::Set),
             R"#(None)#"  , py::arg("Param"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_ConstThroat::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_ConstThroat::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_ConstThroat::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("PointOnS1",
             (const gp_Pnt & (BlendFunc_ConstThroat::*)() const) static_cast<const gp_Pnt & (BlendFunc_ConstThroat::*)() const>(&BlendFunc_ConstThroat::PointOnS1),
             R"#(None)#" )
        .def("PointOnS2",
             (const gp_Pnt & (BlendFunc_ConstThroat::*)() const) static_cast<const gp_Pnt & (BlendFunc_ConstThroat::*)() const>(&BlendFunc_ConstThroat::PointOnS2),
             R"#(None)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (BlendFunc_ConstThroat::*)() const) static_cast<Standard_Boolean (BlendFunc_ConstThroat::*)() const>(&BlendFunc_ConstThroat::IsTangencyPoint),
             R"#(None)#" )
        .def("TangentOnS1",
             (const gp_Vec & (BlendFunc_ConstThroat::*)() const) static_cast<const gp_Vec & (BlendFunc_ConstThroat::*)() const>(&BlendFunc_ConstThroat::TangentOnS1),
             R"#(None)#" )
        .def("Tangent2dOnS1",
             (const gp_Vec2d & (BlendFunc_ConstThroat::*)() const) static_cast<const gp_Vec2d & (BlendFunc_ConstThroat::*)() const>(&BlendFunc_ConstThroat::Tangent2dOnS1),
             R"#(None)#" )
        .def("TangentOnS2",
             (const gp_Vec & (BlendFunc_ConstThroat::*)() const) static_cast<const gp_Vec & (BlendFunc_ConstThroat::*)() const>(&BlendFunc_ConstThroat::TangentOnS2),
             R"#(None)#" )
        .def("Tangent2dOnS2",
             (const gp_Vec2d & (BlendFunc_ConstThroat::*)() const) static_cast<const gp_Vec2d & (BlendFunc_ConstThroat::*)() const>(&BlendFunc_ConstThroat::Tangent2dOnS2),
             R"#(None)#" )
        .def("Tangent",
             (void (BlendFunc_ConstThroat::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BlendFunc_ConstThroat::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&BlendFunc_ConstThroat::Tangent),
             R"#(Returns the tangent vector at the section, at the beginning and the end of the section, and returns the normal (of the surfaces) at these points.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("TgFirst"),  py::arg("TgLast"),  py::arg("NormFirst"),  py::arg("NormLast"))
        .def("Set",
             (void (BlendFunc_ConstThroat::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_ConstThroat::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_ConstThroat::Set),
             R"#(Sets the throat and the "quadrant".)#"  , py::arg("aThroat"),  py::arg(""),  py::arg("Choix"))
        .def("GetSectionSize",
             (Standard_Real (BlendFunc_ConstThroat::*)() const) static_cast<Standard_Real (BlendFunc_ConstThroat::*)() const>(&BlendFunc_ConstThroat::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_ConstThroatInv , shared_ptr<BlendFunc_ConstThroatInv>  , BlendFunc_GenChamfInv >>(m.attr("BlendFunc_ConstThroatInv"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
    // custom constructors
    // methods
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_ConstThroatInv::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_ConstThroatInv::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_ConstThroatInv::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("Value",
             (Standard_Boolean (BlendFunc_ConstThroatInv::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstThroatInv::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_ConstThroatInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_ConstThroatInv::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstThroatInv::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ConstThroatInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Set",
             (void (BlendFunc_ConstThroatInv::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (BlendFunc_ConstThroatInv::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&BlendFunc_ConstThroatInv::Set),
             R"#(None)#"  , py::arg("theThroat"),  py::arg(""),  py::arg("Choix"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_ConstThroatWithPenetration , shared_ptr<BlendFunc_ConstThroatWithPenetration>  , BlendFunc_ConstThroat >>(m.attr("BlendFunc_ConstThroatWithPenetration"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (BlendFunc_ConstThroatWithPenetration::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstThroatWithPenetration::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_ConstThroatWithPenetration::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_ConstThroatWithPenetration::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstThroatWithPenetration::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ConstThroatWithPenetration::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_ConstThroatWithPenetration::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_ConstThroatWithPenetration::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_ConstThroatWithPenetration::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("TangentOnS1",
             (const gp_Vec & (BlendFunc_ConstThroatWithPenetration::*)() const) static_cast<const gp_Vec & (BlendFunc_ConstThroatWithPenetration::*)() const>(&BlendFunc_ConstThroatWithPenetration::TangentOnS1),
             R"#(None)#" )
        .def("Tangent2dOnS1",
             (const gp_Vec2d & (BlendFunc_ConstThroatWithPenetration::*)() const) static_cast<const gp_Vec2d & (BlendFunc_ConstThroatWithPenetration::*)() const>(&BlendFunc_ConstThroatWithPenetration::Tangent2dOnS1),
             R"#(None)#" )
        .def("TangentOnS2",
             (const gp_Vec & (BlendFunc_ConstThroatWithPenetration::*)() const) static_cast<const gp_Vec & (BlendFunc_ConstThroatWithPenetration::*)() const>(&BlendFunc_ConstThroatWithPenetration::TangentOnS2),
             R"#(None)#" )
        .def("Tangent2dOnS2",
             (const gp_Vec2d & (BlendFunc_ConstThroatWithPenetration::*)() const) static_cast<const gp_Vec2d & (BlendFunc_ConstThroatWithPenetration::*)() const>(&BlendFunc_ConstThroatWithPenetration::Tangent2dOnS2),
             R"#(None)#" )
        .def("GetSectionSize",
             (Standard_Real (BlendFunc_ConstThroatWithPenetration::*)() const) static_cast<Standard_Real (BlendFunc_ConstThroatWithPenetration::*)() const>(&BlendFunc_ConstThroatWithPenetration::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BlendFunc_ConstThroatWithPenetrationInv , shared_ptr<BlendFunc_ConstThroatWithPenetrationInv>  , BlendFunc_ConstThroatInv >>(m.attr("BlendFunc_ConstThroatWithPenetrationInv"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("C") )
    // custom constructors
    // methods
        .def("IsSolution",
             (Standard_Boolean (BlendFunc_ConstThroatWithPenetrationInv::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (BlendFunc_ConstThroatWithPenetrationInv::*)( const math_Vector & ,  const Standard_Real  ) >(&BlendFunc_ConstThroatWithPenetrationInv::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("Value",
             (Standard_Boolean (BlendFunc_ConstThroatWithPenetrationInv::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstThroatWithPenetrationInv::*)( const math_Vector & ,  math_Vector &  ) >(&BlendFunc_ConstThroatWithPenetrationInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BlendFunc_ConstThroatWithPenetrationInv::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (BlendFunc_ConstThroatWithPenetrationInv::*)( const math_Vector & ,  math_Matrix &  ) >(&BlendFunc_ConstThroatWithPenetrationInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BlendFunc_CSConstRad.hxx
// ./opencascade/BlendFunc_ConstThroatWithPenetrationInv.hxx
// ./opencascade/BlendFunc_CSCircular.hxx
// ./opencascade/BlendFunc_ConstThroatWithPenetration.hxx
// ./opencascade/BlendFunc_ChAsym.hxx
// ./opencascade/BlendFunc_SectionShape.hxx
// ./opencascade/BlendFunc_ChamfInv.hxx
// ./opencascade/BlendFunc_ConstRadInv.hxx
// ./opencascade/BlendFunc_Ruled.hxx
// ./opencascade/BlendFunc_GenChamfInv.hxx
// ./opencascade/BlendFunc_ConstThroatInv.hxx
// ./opencascade/BlendFunc_GenChamfer.hxx
// ./opencascade/BlendFunc_ChAsymInv.hxx
// ./opencascade/BlendFunc_Corde.hxx
// ./opencascade/BlendFunc_ConstRad.hxx
// ./opencascade/BlendFunc_EvolRadInv.hxx
// ./opencascade/BlendFunc_RuledInv.hxx
// ./opencascade/BlendFunc_Chamfer.hxx
// ./opencascade/BlendFunc_EvolRad.hxx
// ./opencascade/BlendFunc_Tensor.hxx
// ./opencascade/BlendFunc_ConstThroat.hxx
// ./opencascade/BlendFunc.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

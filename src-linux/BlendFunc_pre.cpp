
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
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
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <gp_Ax1.hxx>
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
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <gp_Ax1.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <math_Matrix.hxx>
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
#include <Adaptor2d_HCurve2d.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>

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
void register_BlendFunc_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BlendFunc", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BlendFunc_SectionShape>(m, "BlendFunc_SectionShape",R"#(None)#")
        .value("BlendFunc_Rational",BlendFunc_SectionShape::BlendFunc_Rational)
        .value("BlendFunc_QuasiAngular",BlendFunc_SectionShape::BlendFunc_QuasiAngular)
        .value("BlendFunc_Polynomial",BlendFunc_SectionShape::BlendFunc_Polynomial)
        .value("BlendFunc_Linear",BlendFunc_SectionShape::BlendFunc_Linear).export_values();

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

// pre-register typdefs

// classes forward declarations only
    py::class_<BlendFunc , shared_ptr<BlendFunc> >(m,"BlendFunc",R"#(This package provides a set of generic functions, that can instantiated to compute blendings between two surfaces (Constant radius, Evolutive radius, Ruled surface).)#");
    py::class_<BlendFunc_CSCircular , shared_ptr<BlendFunc_CSCircular> , Blend_CSFunction>(m,"BlendFunc_CSCircular",R"#(None)#");
    py::class_<BlendFunc_CSConstRad , shared_ptr<BlendFunc_CSConstRad> , Blend_CSFunction>(m,"BlendFunc_CSConstRad",R"#(None)#");
    py::class_<BlendFunc_ChAsym , shared_ptr<BlendFunc_ChAsym> , Blend_Function>(m,"BlendFunc_ChAsym",R"#(None)#");
    py::class_<BlendFunc_ChAsymInv , shared_ptr<BlendFunc_ChAsymInv> , Blend_FuncInv>(m,"BlendFunc_ChAsymInv",R"#(None)#");
    py::class_<BlendFunc_ConstRad , shared_ptr<BlendFunc_ConstRad> , Blend_Function>(m,"BlendFunc_ConstRad",R"#(None)#");
    py::class_<BlendFunc_ConstRadInv , shared_ptr<BlendFunc_ConstRadInv> , Blend_FuncInv>(m,"BlendFunc_ConstRadInv",R"#(None)#");
    py::class_<BlendFunc_Corde , shared_ptr<BlendFunc_Corde> >(m,"BlendFunc_Corde",R"#(This function calculates point (pts) on the curve of intersection between the normal to a curve (guide) in a chosen parameter and a surface (surf), so that pts was at a given distance from the guide. X(1),X(2) are the parameters U,V of pts on surf.)#");
    py::class_<BlendFunc_EvolRad , shared_ptr<BlendFunc_EvolRad> , Blend_Function>(m,"BlendFunc_EvolRad",R"#(None)#");
    py::class_<BlendFunc_EvolRadInv , shared_ptr<BlendFunc_EvolRadInv> , Blend_FuncInv>(m,"BlendFunc_EvolRadInv",R"#(None)#");
    py::class_<BlendFunc_GenChamfInv , shared_ptr<BlendFunc_GenChamfInv>,Py_BlendFunc_GenChamfInv , Blend_FuncInv>(m,"BlendFunc_GenChamfInv",R"#(Deferred class for a function used to compute a general chamfer on a surface's boundary)#");
    py::class_<BlendFunc_GenChamfer , shared_ptr<BlendFunc_GenChamfer>,Py_BlendFunc_GenChamfer , Blend_Function>(m,"BlendFunc_GenChamfer",R"#(Deferred class for a function used to compute a general chamfer)#");
    py::class_<BlendFunc_Ruled , shared_ptr<BlendFunc_Ruled> , Blend_Function>(m,"BlendFunc_Ruled",R"#(None)#");
    py::class_<BlendFunc_RuledInv , shared_ptr<BlendFunc_RuledInv> , Blend_FuncInv>(m,"BlendFunc_RuledInv",R"#(None)#");
    py::class_<BlendFunc_Tensor , shared_ptr<BlendFunc_Tensor> >(m,"BlendFunc_Tensor",R"#(used to store the "gradient of gradient")#");
    py::class_<BlendFunc_ChamfInv , shared_ptr<BlendFunc_ChamfInv> , BlendFunc_GenChamfInv>(m,"BlendFunc_ChamfInv",R"#(Class for a function used to compute a chamfer with two constant distances on a surface's boundary)#");
    py::class_<BlendFunc_Chamfer , shared_ptr<BlendFunc_Chamfer> , BlendFunc_GenChamfer>(m,"BlendFunc_Chamfer",R"#(Class for a function used to compute a "ordinary" chamfer: when distances from spine to surfaces are constant)#");
    py::class_<BlendFunc_ConstThroat , shared_ptr<BlendFunc_ConstThroat> , BlendFunc_GenChamfer>(m,"BlendFunc_ConstThroat",R"#(Class for a function used to compute a symmetric chamfer with constant throat that is the height of isosceles triangle in section)#");
    py::class_<BlendFunc_ConstThroatInv , shared_ptr<BlendFunc_ConstThroatInv> , BlendFunc_GenChamfInv>(m,"BlendFunc_ConstThroatInv",R"#(Class for a function used to compute a ConstThroat chamfer on a surface's boundary)#");
    py::class_<BlendFunc_ConstThroatWithPenetration , shared_ptr<BlendFunc_ConstThroatWithPenetration> , BlendFunc_ConstThroat>(m,"BlendFunc_ConstThroatWithPenetration",R"#(Class for a function used to compute a chamfer with constant throat: the section of chamfer is right-angled triangle, the first of two surfaces (where is the top of the chamfer) is virtually moved inside the solid by offset operation, the apex of the section is on the intersection curve between moved surface and second surface, right angle is at the top of the chamfer, the length of the leg from apex to top is constant - it is throat)#");
    py::class_<BlendFunc_ConstThroatWithPenetrationInv , shared_ptr<BlendFunc_ConstThroatWithPenetrationInv> , BlendFunc_ConstThroatInv>(m,"BlendFunc_ConstThroatWithPenetrationInv",R"#(Class for a function used to compute a ConstThroatWithPenetration chamfer on a surface's boundary)#");

};

// user-defined post-inclusion per module

// user-defined post

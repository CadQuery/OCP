
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
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
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
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <gp_Ax1.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <gp_Ax1.hxx>
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
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
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
#include <math_Matrix.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>

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

// pre-register typdefs

// classes forward declarations only
    py::class_<BlendFunc , shared_ptr<BlendFunc>  >(m,"BlendFunc",R"#(This package provides a set of generic functions, that can instantiated to compute blendings between two surfaces (Constant radius, Evolutive radius, Ruled surface).)#");
    py::class_<BlendFunc_CSCircular , shared_ptr<BlendFunc_CSCircular>  , Blend_CSFunction >(m,"BlendFunc_CSCircular",R"#(None)#");
    py::class_<BlendFunc_CSConstRad , shared_ptr<BlendFunc_CSConstRad>  , Blend_CSFunction >(m,"BlendFunc_CSConstRad",R"#(None)#");
    py::class_<BlendFunc_ChAsym , shared_ptr<BlendFunc_ChAsym>  , Blend_Function >(m,"BlendFunc_ChAsym",R"#(None)#");
    py::class_<BlendFunc_ChAsymInv , shared_ptr<BlendFunc_ChAsymInv>  , Blend_FuncInv >(m,"BlendFunc_ChAsymInv",R"#(None)#");
    py::class_<BlendFunc_ChamfInv , shared_ptr<BlendFunc_ChamfInv>  , Blend_FuncInv >(m,"BlendFunc_ChamfInv",R"#(None)#");
    py::class_<BlendFunc_Chamfer , shared_ptr<BlendFunc_Chamfer>  , Blend_Function >(m,"BlendFunc_Chamfer",R"#(None)#");
    py::class_<BlendFunc_ConstRad , shared_ptr<BlendFunc_ConstRad>  , Blend_Function >(m,"BlendFunc_ConstRad",R"#(None)#");
    py::class_<BlendFunc_ConstRadInv , shared_ptr<BlendFunc_ConstRadInv>  , Blend_FuncInv >(m,"BlendFunc_ConstRadInv",R"#(None)#");
    py::class_<BlendFunc_Corde , shared_ptr<BlendFunc_Corde>  >(m,"BlendFunc_Corde",R"#(This function calculates point (pts) on the curve of intersection between the normal to a curve (guide) in a chosen parameter and a surface (surf), so that pts was at a given distance from the guide. X(1),X(2) are the parameters U,V of pts on surf.)#");
    py::class_<BlendFunc_EvolRad , shared_ptr<BlendFunc_EvolRad>  , Blend_Function >(m,"BlendFunc_EvolRad",R"#(None)#");
    py::class_<BlendFunc_EvolRadInv , shared_ptr<BlendFunc_EvolRadInv>  , Blend_FuncInv >(m,"BlendFunc_EvolRadInv",R"#(None)#");
    py::class_<BlendFunc_Ruled , shared_ptr<BlendFunc_Ruled>  , Blend_Function >(m,"BlendFunc_Ruled",R"#(None)#");
    py::class_<BlendFunc_RuledInv , shared_ptr<BlendFunc_RuledInv>  , Blend_FuncInv >(m,"BlendFunc_RuledInv",R"#(None)#");
    py::class_<BlendFunc_Tensor , shared_ptr<BlendFunc_Tensor>  >(m,"BlendFunc_Tensor",R"#(used to store the "gradient of gradient")#");

};

// user-defined post-inclusion per module

// user-defined post

#pragma once

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
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <gp_Ax1.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>
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
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <gp_Circ.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Law_Function.hxx>
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
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <gp_Ax1.hxx>
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
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <gp_Lin.hxx>
#include <Blend_Point.hxx>

// module includes
#include <BlendFunc_ConstThroatWithPenetration.hxx>
#include <BlendFunc_ConstRad.hxx>
#include <BlendFunc_ChAsym.hxx>
#include <BlendFunc_GenChamfer.hxx>
#include <BlendFunc_CSConstRad.hxx>
#include <BlendFunc_GenChamfInv.hxx>
#include <BlendFunc_ConstThroatWithPenetrationInv.hxx>
#include <BlendFunc_CSCircular.hxx>
#include <BlendFunc_EvolRadInv.hxx>
#include <BlendFunc.hxx>
#include <BlendFunc_EvolRad.hxx>
#include <BlendFunc_ChamfInv.hxx>
#include <BlendFunc_ConstThroatInv.hxx>
#include <BlendFunc_Corde.hxx>
#include <BlendFunc_RuledInv.hxx>
#include <BlendFunc_Ruled.hxx>
#include <BlendFunc_ConstRadInv.hxx>
#include <BlendFunc_ConstThroat.hxx>
#include <BlendFunc_ChAsymInv.hxx>
#include <BlendFunc_Tensor.hxx>
#include <BlendFunc_SectionShape.hxx>
#include <BlendFunc_Chamfer.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\BlendFunc_ConstThroatWithPenetration.hxx
// ./opencascade\BlendFunc_ConstRad.hxx
// ./opencascade\BlendFunc_ChAsym.hxx
// ./opencascade\BlendFunc_GenChamfer.hxx
// ./opencascade\BlendFunc_CSConstRad.hxx
// ./opencascade\BlendFunc_GenChamfInv.hxx
// ./opencascade\BlendFunc_ConstThroatWithPenetrationInv.hxx
// ./opencascade\BlendFunc_CSCircular.hxx
// ./opencascade\BlendFunc_EvolRadInv.hxx
// ./opencascade\BlendFunc.hxx
// ./opencascade\BlendFunc_EvolRad.hxx
// ./opencascade\BlendFunc_ChamfInv.hxx
// ./opencascade\BlendFunc_ConstThroatInv.hxx
// ./opencascade\BlendFunc_Corde.hxx
// ./opencascade\BlendFunc_RuledInv.hxx
// ./opencascade\BlendFunc_Ruled.hxx
// ./opencascade\BlendFunc_ConstRadInv.hxx
// ./opencascade\BlendFunc_ConstThroat.hxx
// ./opencascade\BlendFunc_ChAsymInv.hxx
// ./opencascade\BlendFunc_Tensor.hxx
// ./opencascade\BlendFunc_SectionShape.hxx
// ./opencascade\BlendFunc_Chamfer.hxx

// user-defined post
